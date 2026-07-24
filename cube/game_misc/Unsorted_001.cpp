// Unsorted_001 (game_misc) -- cube. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_001.h"

/* FUN_0049bf44 @ 0049bf44  kind=gamemisc  attributed-by=none  size=5184 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_0049bf44(void)

{
  char cVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint *puVar6;
  undefined4 in_EAX;
  int iVar7;
  int *piVar8;
  int iVar9;
  CRefTime *pCVar10;
  int unaff_ESI;
  int unaff_EDI;
  float10 fVar11;
  undefined4 uStack00000008;
  int in_stack_00000010;
  char in_stack_00000017;
  float in_stack_00000018;
  int in_stack_0000001c;
  CRefTime *pCStack00000020;
  int in_stack_00000028;
  float in_stack_00000048;
  int iStack00000054;
  undefined4 uStack00000060;
  undefined4 uStack00000064;
  undefined4 uStack0000006c;
  int iStack00000070;
  CRefTime *pCStack00000074;
  float fStack00000084;
  float fStack00000088;
  float *in_stack_000000a8;
  float in_stack_000000ac;
  undefined4 in_stack_000000d8;
  float in_stack_000001c0;
  undefined4 uStack000001cc;
  uint in_stack_00004758;
  void *in_stack_00004760;
  
code_r0x0049bf44:
  *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = in_EAX;
LAB_0049bf4d:
  do {
    do {
      do {
        iVar9 = unaff_ESI;
        unaff_ESI = iVar9 + 1;
        iStack00000070 = unaff_ESI;
        iVar7 = FUN_00487f50();
        if (iVar7 + -1 <= iVar9) {
          if ((((in_stack_00000017 == '\0') &&
               (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) != '0')) &&
              (*(char *)(unaff_EDI + 4) != '\0')) &&
             (FUN_00445410(), *(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x1020) == '\x14')) {
            FUN_0046ebe0();
            FUN_0042f3e0();
            FUN_0042c5e0();
          }
          if (((*(char *)(unaff_EDI + 5) == '\0') &&
              (piVar8 = (int *)FUN_00468c60(), *piVar8 == 0x1c)) &&
             (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) == '\x1c')) {
            *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0;
          }
          if (((*(char *)(unaff_EDI + 4) == '\0') &&
              (piVar8 = (int *)FUN_00468c60(), *piVar8 == 0x1d)) &&
             (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) == '\x1d')) {
            *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0;
          }
          if (in_stack_00000017 != '\0') {
            FUN_0042f160();
          }
          if (*(int *)(unaff_EDI + 0x8006cc) != 0) {
            FUN_0046f440();
            FUN_0060a9f0();
            cVar1 = FUN_004688d0();
            while (cVar1 != '\0') {
              piVar8 = (int *)FUN_0042c6c0();
              if ((*piVar8 == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 8)) &&
                 (piVar8[1] == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 0xc))) {
                FUN_0042c6c0();
                FUN_00486290();
              }
              FUN_00468d30();
              FUN_0060a9f0();
              cVar1 = FUN_004688d0();
            }
            FUN_0046f440();
            FUN_0060a9f0();
            cVar1 = FUN_004688d0();
            while (cVar1 != '\0') {
              piVar8 = (int *)FUN_0042c6c0();
              if ((*piVar8 == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 8)) &&
                 (piVar8[1] == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 0xc))) {
                FUN_0042c6c0();
                FUN_004460a0();
              }
              FUN_00468d30();
              FUN_0060a9f0();
              cVar1 = FUN_004688d0();
            }
            FUN_0046f440();
            FUN_0060a9f0();
            cVar1 = FUN_004688d0();
            while (cVar1 != '\0') {
              piVar8 = (int *)FUN_0042c6c0();
              if ((*piVar8 == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 8)) &&
                 (piVar8[1] == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 0xc))) {
                FUN_0042c6c0();
                FUN_004861a0();
              }
              FUN_00468d30();
              FUN_0060a9f0();
              cVar1 = FUN_004688d0();
            }
          }
          if (*(int *)(unaff_EDI + 0x8006c8) != 0) {
            FUN_004dc8e0();
          }
          iVar7 = *(int *)(unaff_EDI + 0x8006d0);
          cVar1 = *(char *)(iVar7 + 0x68);
          if ((((((cVar1 != 'S') && (cVar1 != 'j')) && (cVar1 != 'k')) &&
               (((cVar1 != 'R' && (cVar1 != 'T')) &&
                ((cVar1 != '\b' && ((cVar1 != '#' && (cVar1 != 'O')))))))) && (cVar1 != '\x1c')) &&
             (((cVar1 != '\x1d' && (cVar1 != '$')) && (*(char *)(unaff_EDI + 5) == '\0')))) {
            if (*(char *)(iVar7 + 0x1020) == '\x14') {
              iVar9 = FUN_0043d1a0();
              iVar7 = *(int *)(unaff_EDI + 0x8006d0);
              if (iVar9 + 500 < *(int *)(iVar7 + 0x6c)) {
                *(undefined1 *)(iVar7 + 0x68) = 0x52;
                goto LAB_0049c2e6;
              }
            }
            if (10000 < *(int *)(iVar7 + 0x6c)) {
              *(undefined1 *)(iVar7 + 0x68) = 0;
            }
          }
LAB_0049c2e6:
          FUN_00423e70();
          uStack0000006c = FUN_00428970();
          FUN_00424610();
          uStack00000064 = FUN_00428970();
          FUN_004244f0();
          uStack00000060 = FUN_00428970();
          FUN_004243d0();
          FUN_0042c7a0();
          FUN_0042c4a0();
          fVar11 = (float10)FUN_00424860();
          in_stack_000000ac = (float)fVar11;
          if (2500.0 < in_stack_000000ac) {
            FUN_0042c5b0();
          }
          cVar1 = FUN_0047fa10();
          if (((cVar1 == '\0') && (cVar1 = FUN_0047fa10(), cVar1 == '\0')) &&
             ((cVar1 = FUN_0047fa10(), cVar1 == '\0' && (cVar1 = FUN_0047fa10(), cVar1 == '\0')))) {
            in_stack_000000d8 = 0;
            fStack00000084 = 1.0;
            FUN_004aba20();
            pCStack00000074 = (CRefTime *)FUN_004120b0();
            FUN_004120b0();
            FUN_00412200();
            FUN_00468ca0();
            FUN_0042c9b0();
            pCStack00000020 = (CRefTime *)FUN_004120b0();
            FUN_004120b0();
            FUN_00412200();
            FUN_00468ca0();
            FUN_0042c9b0();
            cVar1 = FUN_0047fa10();
            if ((cVar1 == '\0') && (cVar1 = FUN_0047fa10(), cVar1 == '\0')) {
              cVar1 = *(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68);
              if ((cVar1 == 'T') || (cVar1 == 'S')) {
                FUN_00428970();
                FUN_004120b0();
                FUN_00412220();
              }
              else {
                if ((cVar1 == 'j') || (cVar1 == 'k')) {
                  FUN_00428970();
                }
                else {
                  FUN_00428970();
                }
                FUN_004120b0();
                FUN_00412220();
                FUN_004122e0();
              }
              FUN_004122e0();
            }
            else {
              FUN_004120b0();
              FUN_00412220();
            }
            FUN_004120b0();
            FUN_004573d0();
          }
          else {
            FUN_00487fe0();
            FUN_0042c460();
            pCStack00000020 = (CRefTime *)FUN_004120b0();
            pCVar10 = (CRefTime *)FUN_004120b0();
            pCStack00000074 = pCVar10;
            CRefTime::Millisecs(pCStack00000020);
            CRefTime::Millisecs(pCVar10);
            fStack00000084 = (float)FUN_004347a0();
            if (fStack00000084 != 0.0) {
              FUN_004348b0();
              FUN_00434b70();
              FUN_004120b0();
              FUN_00412080();
            }
            FUN_00412080();
            FUN_004120b0();
            FUN_0042c9b0();
          }
          iStack00000054 = unaff_EDI + 0x140;
          FUN_0042c5b0();
          FUN_0040ea90();
          FUN_00488e50();
          pfVar3 = in_stack_000000a8;
          FUN_00451510();
          FUN_0042c460();
          FUN_0042c9d0();
          fStack00000088 = *pfVar3;
          in_stack_0000001c = 0;
          FUN_004120b0();
          fStack00000084 = (float)FUN_004120b0();
          in_stack_000000ac = (float)FUN_004120b0();
          do {
            in_stack_00000048 = 0.0;
            do {
              iVar7 = 0;
              do {
                FUN_00459c00();
                FUN_00459c00();
                FUN_00459c00();
                FUN_00459c00();
                FUN_0043b610();
                FUN_0042c6e0();
                FUN_0042c800();
                FUN_0042f860();
                cVar1 = FUN_0043b480();
                if (cVar1 != '\0') {
                  fVar11 = (float10)FUN_005a35d0();
                  in_stack_000001c0 = (float)fVar11;
                  if (*in_stack_000000a8 - in_stack_000001c0 < fStack00000088) {
                    fStack00000088 = *in_stack_000000a8 - in_stack_000001c0;
                  }
                }
                iVar7 = iVar7 + 1;
              } while (iVar7 < 2);
              in_stack_00000048 = (float)((int)in_stack_00000048 + 1);
            } while ((int)in_stack_00000048 < 2);
            in_stack_0000001c = in_stack_0000001c + 1;
          } while (in_stack_0000001c < 2);
          *in_stack_000000a8 = fStack00000088;
          FUN_00451510();
          FUN_0042c460();
          FUN_0042c7a0();
          FUN_0042c5b0();
          iVar7 = in_stack_00000010;
          *(float *)(in_stack_00000010 + 0x1cc) = *in_stack_000000a8;
          FUN_0042c5b0();
          in_stack_000000d8 = FUN_004120b0();
          fStack00000088 = (float)FUN_004120b0();
          FUN_004120b0();
          FUN_0042f860();
          cVar1 = FUN_0043b480();
          if (cVar1 != '\0') {
            FUN_0042c7a0();
            FUN_0042c4a0();
            fVar11 = (float10)FUN_00424860();
            fStack00000084 = (float)fVar11;
            if (0.0 < fStack00000084) {
              FUN_004240f0();
              fVar11 = (float10)FUN_005a35d0();
              fStack00000084 = (float)fVar11;
              if (0.0 <= fStack00000084) {
                FUN_00451510();
                FUN_0042c460();
                FUN_0042c800();
                FUN_0042c5b0();
              }
            }
          }
          FUN_00423e70();
          FUN_0042c4a0();
          FUN_00424990();
          FUN_00424610();
          FUN_004244f0();
          FUN_004243d0();
          FUN_00423e70();
          FUN_004243d0();
          FUN_004244f0();
          FUN_00424610();
          FUN_00468e70();
          FUN_0042c4a0();
          FUN_00424990();
          FUN_00412260();
          FUN_00411df0();
          FUN_00412260();
          FUN_00411df0();
          FUN_00423e70();
          in_stack_00000048 = *(float *)(iVar7 + 0x1e8) * 0.5;
          FUN_00488b80();
          fVar11 = (float10)FUN_0040e420();
          fStack00000084 = (float)fVar11;
          FUN_00488b80();
          fVar11 = (float10)FUN_0040e420();
          fStack00000084 = (float)fVar11;
          FUN_00434b80();
          FUN_004243d0();
          FUN_004244f0();
          FUN_00424610();
          FUN_00412080();
          FUN_0043b610();
          FUN_00468e70();
          FUN_0042c7a0();
          FUN_0042c4a0();
          FUN_00424990();
          uStack000001cc = 0;
          FUN_004aba20();
          EnterCriticalSection((LPCRITICAL_SECTION)(iVar7 + 0x8005d0));
          FUN_00469060();
          FUN_0043abc0();
          FUN_004120f0();
          FUN_00469060();
          FUN_0043abc0();
          FUN_004120f0();
          FUN_0040ea50();
          FUN_0062f720();
          FUN_004120f0();
          FUN_004120f0();
          FUN_0040ea50();
          FUN_0062f720();
          in_stack_00000048 = (float)(iVar7 + 0x2c4);
          FUN_0046f870();
          if (*(int *)(iVar7 + 0x8006c8) == 0) {
            pCVar10 = (CRefTime *)FUN_004120b0();
            CRefTime::Millisecs(pCVar10);
            pCVar10 = (CRefTime *)FUN_004120b0();
            CRefTime::Millisecs(pCVar10);
            FUN_0040ea30();
            FUN_00469000();
            FUN_00486560();
          }
          else {
            FUN_0046f440();
            FUN_0060a9f0();
            cVar1 = FUN_004688d0();
            while (cVar1 != '\0') {
              iVar7 = FUN_00468c90();
              if ((*(int *)(iVar7 + 8) != 0) && (*(char *)(*(int *)(iVar7 + 8) + 0x60) == '\0')) {
                pCVar10 = (CRefTime *)FUN_004120b0();
                CRefTime::Millisecs(pCVar10);
                pCVar10 = (CRefTime *)FUN_004120b0();
                CRefTime::Millisecs(pCVar10);
                FUN_0040ea30();
                FUN_00469000();
                FUN_00486560();
              }
              FUN_00468d70();
              FUN_0060a9f0();
              cVar1 = FUN_004688d0();
              iVar7 = in_stack_00000010;
            }
          }
          in_stack_0000001c = iVar7 + 0x2cc;
          FUN_0046f870();
          fStack00000084 = (float)(iVar7 + 0x2d4);
          FUN_0046f870();
          FUN_0046f440();
          FUN_0060a9f0();
          cVar1 = FUN_004688d0();
          while (cVar1 != '\0') {
            FUN_0042c6c0();
            in_stack_00000048 = (float)FUN_00428970();
            uStack000001cc = FUN_00428970();
            iVar7 = FUN_00434d10();
            if ((iVar7 != 0) && (*(char *)(iVar7 + 0x74) != '\0')) {
              FUN_00486560();
            }
            iVar7 = FUN_00434a90();
            if ((iVar7 != 0) && (*(char *)(iVar7 + 8) != '\0')) {
              FUN_00469000();
              FUN_00486560();
            }
            FUN_00468d30();
            FUN_0060a9f0();
            cVar1 = FUN_004688d0();
            iVar7 = in_stack_00000010;
          }
          FUN_00469060();
          FUN_004120f0();
          FUN_00469060();
          FUN_004120f0();
          FUN_0040ea50();
          FUN_0062f720();
          if (*(int *)(iVar7 + 0x8006cc) == 0) {
            FUN_0046f870();
            FUN_0046f870();
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(iVar7 + 0x8005d0));
          FUN_00601e90();
          FUN_00659fb0();
          FUN_004da480();
          FUN_004da480();
          FUN_004da480();
          std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
          basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                    ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                      *)&stack0x00000e2c);
          FUN_00593e50();
          FUN_00593e50();
          FUN_005fb860();
          FUN_005fb860();
          FUN_00467c70();
          uStack00000008 = 0x49d389;
          ExceptionList = in_stack_00004760;
          __security_check_cookie(in_stack_00004758 ^ (uint)&stack0x0000000c);
          return;
        }
        piVar8 = (int *)FUN_00468c60();
      } while (*piVar8 == 0);
      if (*(char *)(unaff_EDI + 4 + unaff_ESI) == '\0') {
        puVar6 = (uint *)FUN_00468c60();
        if (*puVar6 == (uint)*(byte *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68)) {
          puVar2 = (undefined4 *)FUN_00468c60();
          switch(*puVar2) {
          case 8:
            *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x68;
            *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
            break;
          case 10:
            goto DAT_0049bf15;
          case 0x18:
            *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x17;
            *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
            break;
          case 0x19:
            *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x37;
            *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
            break;
          case 0x1b:
            *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x1a;
            *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
            break;
          case 0x23:
            *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0;
            *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
            break;
          case 0x24:
            *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x25;
            *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
            break;
          case 0x3b:
            iVar7 = *(int *)(unaff_EDI + 0x8006d0);
            if (*(char *)(iVar7 + 0x141) != '\x01') {
              *(undefined1 *)(iVar7 + 0x68) = 0x3c;
              FUN_0043caa0();
              FUN_0049bf44();
              return;
            }
            *(undefined1 *)(iVar7 + 0x68) = 0x3d;
            *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
            break;
          case 0x3f:
            *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0xb;
            FUN_0043caa0();
            FUN_0049bf44();
            return;
          case 0x40:
            *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x10;
            FUN_0043caa0();
            FUN_0049bf44();
            return;
          }
        }
        goto LAB_0049bf4d;
      }
      in_stack_00000017 = '\x01';
      cVar1 = FUN_0043e350();
    } while ((cVar1 == '\0') && (iVar9 < 1));
    FUN_00468c60();
    cVar1 = FUN_0043e5a0();
  } while (cVar1 == '\0');
  if (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x1020) == '\x14') {
    FUN_0046ebe0();
    FUN_0042f3e0();
    FUN_0042c5e0();
  }
  puVar2 = (undefined4 *)FUN_00468c60();
  switch(*puVar2) {
  case 3:
  case 4:
  case 0x17:
  case 0x1f:
  case 0x21:
  case 0x25:
  case 0x2d:
  case 0x2e:
  case 0x41:
  case 0x42:
  case 0x5e:
  case 0x5f:
    FUN_004456a0();
    goto LAB_0049bf4d;
  case 5:
    if (*(float *)(*(int *)(unaff_EDI + 0x8006d0) + 0x170) <= 0.0) goto LAB_0049bf4d;
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 5;
    break;
  default:
    FUN_00468c60();
    in_stack_00000048 = *(float *)(unaff_EDI + 0x8006d0);
    fVar11 = (float10)FUN_00444ae0();
    in_stack_000000ac = (float)fVar11;
    if (in_stack_000000ac <= *(float *)((int)in_stack_00000048 + 0x170)) {
      puVar5 = (undefined1 *)FUN_00468c60();
      iVar7 = (int)in_stack_00000048;
      goto code_r0x0049bd93;
    }
    goto LAB_0049bf4d;
  case 8:
  case 0x18:
  case 0x19:
  case 0x1b:
  case 0x3b:
  case 0x3f:
  case 0x40:
    puVar6 = (uint *)FUN_00468c60();
    if ((uint)*(byte *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) == *puVar6) goto LAB_0049bf4d;
    puVar5 = (undefined1 *)FUN_00468c60();
    iVar7 = *(int *)(unaff_EDI + 0x8006d0);
code_r0x0049bd93:
    *(undefined1 *)(iVar7 + 0x68) = *puVar5;
    break;
  case 10:
    if (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) == '\n') goto LAB_0049bf4d;
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 10;
    break;
  case 0xb:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0xb;
    break;
  case 0x11:
    if (*(float *)(*(int *)(unaff_EDI + 0x8006d0) + 0x170) <= 0.0) goto LAB_0049bf4d;
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x11;
    break;
  case 0x14:
    if (*(float *)(*(int *)(unaff_EDI + 0x8006d0) + 0x170) <= 0.0) goto LAB_0049bf4d;
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x14;
    break;
  case 0x1c:
    if ((0.0 < *(float *)(*(int *)(unaff_EDI + 0x8006d0) + 0x170)) &&
       (puVar6 = (uint *)FUN_00468c60(),
       (uint)*(byte *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) != *puVar6)) {
      puVar5 = (undefined1 *)FUN_00468c60();
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = *puVar5;
      *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
    }
    goto LAB_0049bf4d;
  case 0x22:
    in_stack_00000018 = *(float *)(unaff_EDI + 0x8006d0);
    iVar7 = FUN_0043d1a0();
    if (iVar7 <= *(int *)((int)in_stack_00000018 + 0x6c)) {
      *(undefined1 *)((int)in_stack_00000018 + 0x68) = 0x22;
      *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
      iVar7 = *(int *)(unaff_EDI + 0x8006d0);
      *(undefined4 *)(iVar7 + 0x1a0) = *(undefined4 *)(iVar7 + 8);
      *(undefined4 *)(iVar7 + 0x1a4) = *(undefined4 *)(iVar7 + 0xc);
    }
    goto LAB_0049bf4d;
  case 0x30:
    puVar5 = (undefined1 *)FUN_00468c60();
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = *puVar5;
    FUN_00411e30();
    iVar7 = *(int *)(unaff_EDI + 0x8006d0);
    fVar11 = (float10)FUN_00423f20();
    in_stack_00000018 = (float)fVar11;
    *(int *)(iVar7 + 0x11d8) = (int)((in_stack_00000018 / 50.0) * 1000.0);
    iVar7 = *(int *)(unaff_EDI + 0x8006d0);
    in_stack_00000028 = iVar7 + 0x34;
    fVar11 = (float10)FUN_00424860();
    in_stack_00000018 = (float)fVar11;
    if (0.0 < in_stack_00000018) {
      FUN_004240f0();
      FUN_00412780();
      iVar7 = *(int *)(unaff_EDI + 0x8006d0);
      pfVar3 = (float *)FUN_00428970();
      if (5.0 < *pfVar3) {
        *pfVar3 = 5.0;
      }
    }
    goto code_r0x0049b8d5;
  case 0x32:
    FUN_00468e20();
    FUN_00411e30();
    in_stack_00000048 = *(float *)(unaff_EDI + 0x8006d0);
    puVar2 = (undefined4 *)FUN_00428970();
    *puVar2 = 0;
    fVar11 = (float10)FUN_00424860();
    in_stack_00000018 = (float)fVar11;
    if (0.0 < in_stack_00000018) {
      FUN_004240f0();
      fVar11 = (float10)FUN_0043ed60();
      in_stack_00000018 = (float)fVar11;
      FUN_00412780();
      in_stack_00000048 = *(float *)(unaff_EDI + 0x8006d0);
      fVar11 = (float10)FUN_0043ed60();
      in_stack_00000018 = (float)fVar11 * 12.0 + 5.0;
      pfVar3 = (float *)FUN_00428970();
      *pfVar3 = in_stack_00000018;
    }
    in_stack_000001c0 = 7.00649e-44;
    puVar2 = (undefined4 *)FUN_00468910();
    uVar4 = FUN_0043e6a0();
    *puVar2 = uVar4;
    unaff_ESI = iStack00000070;
    goto LAB_0049bf4d;
  case 0x36:
    puVar5 = (undefined1 *)FUN_00468c60();
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = *puVar5;
    FUN_004252f0();
    FUN_00411e30();
    iVar7 = *(int *)(unaff_EDI + 0x8006d0);
    fVar11 = (float10)FUN_00423f20();
    in_stack_00000018 = (float)fVar11;
    *(int *)(iVar7 + 0x11d8) = (int)((in_stack_00000018 / 50.0) * 1000.0);
    fVar11 = (float10)FUN_00424860();
    in_stack_00000018 = (float)fVar11;
    if (2500.0 < in_stack_00000018) {
      FUN_004240f0();
      FUN_00412780();
    }
    iVar7 = *(int *)(unaff_EDI + 0x8006d0);
    puVar2 = (undefined4 *)FUN_00428970();
    *puVar2 = 0x41700000;
code_r0x0049b8d5:
    *(undefined4 *)(iVar7 + 0x6c) = 0;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x128) = 0;
    unaff_ESI = iStack00000070;
    goto LAB_0049bf4d;
  case 0x60:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x60;
    FUN_00468e20();
    FUN_00411e30();
    in_stack_0000001c = *(int *)(unaff_EDI + 0x8006d0);
    in_stack_00000048 = (float)(in_stack_0000001c + 0x34);
    puVar2 = (undefined4 *)FUN_00428970();
    *puVar2 = 0;
    fVar11 = (float10)FUN_00424860();
    in_stack_000000ac = (float)fVar11;
    if (0.0 < in_stack_000000ac) {
      FUN_004240f0();
      FUN_00412780();
      in_stack_0000001c = *(int *)(unaff_EDI + 0x8006d0);
      puVar2 = (undefined4 *)FUN_00428970();
      *puVar2 = 0x41a00000;
    }
    *(undefined4 *)(in_stack_0000001c + 0x6c) = 0;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x128) = 600;
    goto LAB_0049bf4d;
  case 0x61:
    goto code_r0x0049b794;
  case 99:
    FUN_0042f160();
    in_stack_000000ac = 1.38729e-43;
    puVar2 = (undefined4 *)FUN_00468910();
    uVar4 = FUN_0043e6a0();
    *puVar2 = uVar4;
    unaff_ESI = iStack00000070;
    goto LAB_0049bf4d;
  case 100:
    goto code_r0x0049b794;
  case 0x65:
    FUN_00595850();
    FUN_00484350();
    goto LAB_0049bf4d;
  case 0x66:
code_r0x0049b794:
    FUN_00595850();
    goto LAB_0049bf4d;
  case 0x67:
    FUN_00595850();
    FUN_00484350();
    goto LAB_0049bf4d;
  }
  *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
  *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x128) = 0;
  goto LAB_0049bf4d;
DAT_0049bf15:
  in_stack_000000ac = *(float *)(unaff_EDI + 0x8006d0);
  iVar7 = FUN_0043d1a0();
  if (iVar7 < *(int *)((int)in_stack_000000ac + 0x6c)) goto code_r0x0049bf35;
  goto LAB_0049bf4d;
code_r0x0049bf35:
  *(undefined1 *)((int)in_stack_000000ac + 0x68) = 3;
  in_EAX = FUN_0043d1a0();
  goto code_r0x0049bf44;
}


/* FUN_004a2300 @ 004a2300  kind=gamemisc  attributed-by=none  size=195 */

void FUN_004a2300(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  if (*(int *)(*(int *)(in_ECX + 0x80095c) + 0x1b4) == 1) {
    FUN_00487380(2);
    *(undefined4 *)(*(int *)(in_ECX + 0x800c0c) + 0x10) =
         *(undefined4 *)(*(int *)(in_ECX + 0x800c0c) + 0xc);
    piVar2 = *(int **)(in_ECX + 0x800d3c);
    if (piVar2 != (int *)*piVar2) {
      do {
        FUN_00486700(piVar2[1] + 8);
        piVar2 = (int *)piVar2[1];
      } while (piVar2 != (int *)**(undefined4 **)(in_ECX + 0x800d3c));
    }
  }
  else {
    iVar1 = *(int *)(in_ECX + 0x8008d8);
    if (iVar1 != 0) {
      FUN_0044ad30(iVar1 + 0x11dc);
      *(undefined4 *)(in_ECX + 0x800c18) = *(undefined4 *)(iVar1 + 0x11e8);
      FUN_0042c5e0(iVar1 + 0x11ec);
      *(undefined4 *)(in_ECX + 0x800d34) = *(undefined4 *)(iVar1 + 0x1304);
      *(undefined4 *)(in_ECX + 0x800d38) = *(undefined4 *)(iVar1 + 0x1308);
    }
  }
  FUN_004c6350();
  FUN_004c64c0();
  return;
}


/* FUN_004a23d0 @ 004a23d0  kind=gamemisc  attributed-by=none  size=912 */

void FUN_004a23d0(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  void *pvVar7;
  int *piVar8;
  int in_ECX;
  int iVar9;
  char cVar10;
  bool bVar11;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e79fc;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = 0;
  local_14 = uVar2;
  FUN_00636950(0);
  FUN_00636950(0);
  FUN_00636950(0);
  FUN_00632870(uVar2);
  *(undefined4 *)(in_ECX + 0x8009c4) = *(undefined4 *)(in_ECX + 0x8009c0);
  FUN_0067e480();
  FUN_0067e480();
  iVar5 = *(int *)(in_ECX + 0x8009dc);
  iVar9 = *(int *)(in_ECX + 0x8009e0) - iVar5 >> 2;
  local_38 = 0;
  if (iVar9 != -1 && -1 < iVar9 + 1) {
    local_3c = 0x32;
    do {
      local_40 = 0;
      if (local_38 < iVar9) {
        local_40 = *(int *)(iVar5 + local_38 * 4);
        if (*(uint *)(local_40 + 0x18) < 7) {
LAB_004a2508:
          cVar10 = '\0';
        }
        else {
          puVar3 = (undefined4 *)FUN_00487ff0(local_2c,0,7);
          local_34 = local_34 | 1;
          uVar2 = puVar3[4];
          if (0xf < (uint)puVar3[5]) {
            puVar3 = (undefined4 *)*puVar3;
          }
          uVar4 = 7;
          if (uVar2 < 7) {
            uVar4 = uVar2;
          }
          iVar5 = FUN_0040c590(puVar3,"online_",uVar4);
          bVar11 = false;
          if (iVar5 == 0) {
            if (uVar2 < 7) {
              uVar2 = 0xffffffff;
            }
            else {
              uVar2 = (uint)(uVar2 != 7);
            }
            bVar11 = uVar2 == 0;
          }
          if (!bVar11) goto LAB_004a2508;
          cVar10 = '\x01';
        }
        local_8 = 0xffffffff;
        if (((local_34 & 1) != 0) && (local_34 = local_34 & 0xfffffffe, 0xf < local_18)) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_2c[0]);
        }
        if (*(char *)(in_ECX + 0x8009b0) == cVar10) goto LAB_004a253b;
      }
      else {
LAB_004a253b:
        iVar5 = FUN_00636040(*(undefined4 *)(in_ECX + 0x80088c));
        local_30 = iVar5;
        uVar6 = (**(code **)(**(int **)(iVar5 + 0x38) + 8))();
        FUN_00636b70(uVar6);
        uVar6 = (**(code **)(**(int **)(iVar5 + 0x3c) + 8))();
        FUN_006368e0(uVar6);
        FUN_0062c570(0x44160000,0x435c0000,1);
        local_18 = 7;
        local_1c = 0;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
        FUN_0040f7a0(&PTR_006fccac,0);
        local_8 = 1;
        uVar6 = FUN_0064f4e0(0,0,0,0,local_2c);
        local_8 = 0xffffffff;
        if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_2c[0]);
        }
        local_18 = 7;
        local_1c = 0;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
        pvVar7 = operator_new(0x16c);
        local_8 = 2;
        if (pvVar7 == (void *)0x0) {
          iVar9 = 0;
        }
        else {
          iVar9 = FUN_00605a20(*(undefined4 *)(in_ECX + 0x800710),uVar6,in_ECX);
        }
        *(int *)(iVar9 + 0x160) = local_40;
        local_8 = 0xffffffff;
        FUN_00631460(*(int *)(in_ECX + 0x8008c8) + 0xc,iVar9,1);
        FUN_0062a650(0x43960000,(float)local_3c,1);
        piVar8 = *(int **)(in_ECX + 0x8009c4);
        if (&local_30 < piVar8) {
          piVar1 = *(int **)(in_ECX + 0x8009c0);
          if (&local_30 < piVar1) goto LAB_004a26ad;
          if (piVar8 == *(int **)(in_ECX + 0x8009c8)) {
            FUN_0063dc90(1);
          }
          iVar5 = local_30;
          if (*(undefined4 **)(in_ECX + 0x8009c4) != (undefined4 *)0x0) {
            **(undefined4 **)(in_ECX + 0x8009c4) =
                 *(undefined4 *)
                  (*(uint *)(in_ECX + 0x8009c0) + ((int)&local_30 - (int)piVar1 >> 2) * 4);
          }
        }
        else {
LAB_004a26ad:
          if (piVar8 == *(int **)(in_ECX + 0x8009c8)) {
            FUN_0063dc90(1);
          }
          if (*(int **)(in_ECX + 0x8009c4) != (int *)0x0) {
            **(int **)(in_ECX + 0x8009c4) = iVar5;
          }
        }
        *(int *)(in_ECX + 0x8009c4) = *(int *)(in_ECX + 0x8009c4) + 4;
        piVar8 = (int *)FUN_0063d730(&local_30);
        *piVar8 = local_38;
        piVar8 = (int *)FUN_00468910(&local_38);
        local_3c = local_3c + 0xe6;
        *piVar8 = iVar5;
      }
      iVar5 = *(int *)(in_ECX + 0x8009dc);
      iVar9 = *(int *)(in_ECX + 0x8009e0) - iVar5 >> 2;
      local_38 = local_38 + 1;
    } while (local_38 < iVar9 + 1);
  }
  FUN_00635700();
  FUN_00636950(*(undefined4 *)(in_ECX + 0x80088c));
  FUN_00636950(*(undefined4 *)(in_ECX + 0x80088c));
  FUN_00636950(*(undefined4 *)(in_ECX + 0x80088c));
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004a8f40 @ 004a8f40  kind=gamemisc  attributed-by=none  size=70 */

void FUN_004a8f40(float *param_1,float param_2,float *param_3)

{
  *param_1 = *param_3 * param_2;
  param_1[1] = param_3[1] * param_2;
  param_1[2] = param_3[2] * param_2;
  param_1[3] = param_3[3] * param_2;
  return;
}


/* FUN_004a9030 @ 004a9030  kind=gamemisc  attributed-by=none  size=211 */

void FUN_004a9030(int param_1,int param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  
  iVar1 = param_2;
  while( true ) {
    iVar4 = iVar1 * 2 + 2;
    if (param_3 <= iVar4) break;
    fVar3 = *(float *)(param_1 + 4 + iVar4 * 0xc);
    pfVar2 = (float *)(param_1 + -8 + iVar4 * 0xc);
    if (*pfVar2 <= fVar3 && fVar3 != *pfVar2) {
      iVar4 = iVar1 * 2 + 1;
    }
    *(undefined8 *)(param_1 + iVar1 * 0xc) = *(undefined8 *)(param_1 + iVar4 * 0xc);
    *(undefined4 *)(param_1 + 8 + iVar1 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar4 * 0xc);
    iVar1 = iVar4;
  }
  if (iVar4 == param_3) {
    *(undefined8 *)(param_1 + iVar1 * 0xc) = *(undefined8 *)(param_1 + -0xc + param_3 * 0xc);
    *(undefined4 *)(param_1 + 8 + iVar1 * 0xc) = *(undefined4 *)(param_1 + -4 + param_3 * 0xc);
    iVar1 = param_3 + -1;
  }
  while ((param_2 < iVar1 &&
         (iVar4 = (iVar1 + -1) / 2, fVar3 = *(float *)(param_1 + 4 + iVar4 * 0xc),
         *(float *)((int)param_4 + 4) <= fVar3 && fVar3 != *(float *)((int)param_4 + 4)))) {
    *(undefined8 *)(param_1 + iVar1 * 0xc) = *(undefined8 *)(param_1 + iVar4 * 0xc);
    *(undefined4 *)(param_1 + 8 + iVar1 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar4 * 0xc);
    iVar1 = iVar4;
  }
  *(undefined8 *)(param_1 + iVar1 * 0xc) = *param_4;
  *(undefined4 *)(param_1 + 8 + iVar1 * 0xc) = *(undefined4 *)(param_4 + 1);
  return;
}


/* FUN_004a9110 @ 004a9110  kind=gamemisc  attributed-by=none  size=227 */

void FUN_004a9110(int param_1,int param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  
  iVar1 = param_2;
  while( true ) {
    iVar4 = iVar1 * 2 + 2;
    if (param_3 <= iVar4) break;
    fVar3 = *(float *)(param_1 + 8 + iVar4 * 0x10);
    pfVar2 = (float *)(param_1 + -8 + iVar4 * 0x10);
    if (*pfVar2 <= fVar3 && fVar3 != *pfVar2) {
      iVar4 = iVar1 * 2 + 1;
    }
    *(undefined8 *)(param_1 + iVar1 * 0x10) = *(undefined8 *)(param_1 + iVar4 * 0x10);
    *(undefined8 *)(param_1 + 8 + iVar1 * 0x10) = *(undefined8 *)(param_1 + 8 + iVar4 * 0x10);
    iVar1 = iVar4;
  }
  if (iVar4 == param_3) {
    *(undefined8 *)(param_1 + iVar1 * 0x10) = *(undefined8 *)(param_1 + -0x10 + param_3 * 0x10);
    *(undefined8 *)(param_1 + 8 + iVar1 * 0x10) = *(undefined8 *)(param_1 + -8 + param_3 * 0x10);
    iVar1 = param_3 + -1;
  }
  while ((param_2 < iVar1 &&
         (iVar4 = (iVar1 + -1) / 2, fVar3 = *(float *)(param_1 + 8 + iVar4 * 0x10),
         *(float *)(param_4 + 1) <= fVar3 && fVar3 != *(float *)(param_4 + 1)))) {
    *(undefined8 *)(param_1 + iVar1 * 0x10) = *(undefined8 *)(param_1 + iVar4 * 0x10);
    *(undefined8 *)(param_1 + 8 + iVar1 * 0x10) = *(undefined8 *)(param_1 + 8 + iVar4 * 0x10);
    iVar1 = iVar4;
  }
  *(undefined8 *)(param_1 + iVar1 * 0x10) = *param_4;
  *(undefined8 *)(param_1 + 8 + iVar1 * 0x10) = param_4[1];
  return;
}


/* FUN_004a93c0 @ 004a93c0  kind=gamemisc  attributed-by=none  size=161 */

void FUN_004a93c0(undefined8 *param_1,undefined8 *param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float fStack_c;
  
  puVar4 = param_1;
  if (param_1 != param_2) {
    while (puVar4 = (undefined8 *)((int)puVar4 + 0xc), puVar4 != param_2) {
      uVar2 = *puVar4;
      uVar3 = *(undefined4 *)(puVar4 + 1);
      fStack_c = (float)((ulonglong)uVar2 >> 0x20);
      puVar6 = puVar4;
      if (fStack_c < *(float *)((int)param_1 + 4) || fStack_c == *(float *)((int)param_1 + 4)) {
        puVar5 = puVar4;
        if (*(float *)(puVar4 + -1) <= fStack_c && fStack_c != *(float *)(puVar4 + -1)) {
          do {
            puVar5 = (undefined8 *)((int)puVar6 + -0xc);
            *puVar6 = *puVar5;
            *(undefined4 *)(puVar6 + 1) = *(undefined4 *)((int)puVar6 + -4);
            pfVar1 = (float *)((int)puVar6 + -0x14);
            puVar6 = puVar5;
          } while (*pfVar1 <= fStack_c && fStack_c != *pfVar1);
        }
        *puVar5 = uVar2;
        *(undefined4 *)(puVar5 + 1) = uVar3;
      }
      else {
        for (; param_1 != puVar6; puVar6 = (undefined8 *)((int)puVar6 + -0xc)) {
          *puVar6 = *(undefined8 *)((int)puVar6 + -0xc);
          *(undefined4 *)(puVar6 + 1) = *(undefined4 *)((int)puVar6 + -4);
        }
        *param_1 = uVar2;
        *(undefined4 *)(param_1 + 1) = uVar3;
      }
    }
  }
  return;
}


/* FUN_004a9470 @ 004a9470  kind=gamemisc  attributed-by=none  size=164 */

void FUN_004a9470(undefined8 *param_1,undefined8 *param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float local_c;
  
  puVar5 = param_1;
  if (param_1 != param_2) {
    while (puVar4 = puVar5 + 2, puVar4 != param_2) {
      uVar2 = puVar5[3];
      uVar3 = *puVar4;
      local_c = (float)uVar2;
      puVar6 = puVar4;
      if (local_c < *(float *)(param_1 + 1) || local_c == *(float *)(param_1 + 1)) {
        puVar7 = puVar4;
        if (*(float *)(puVar5 + 1) <= local_c && local_c != *(float *)(puVar5 + 1)) {
          do {
            puVar7 = puVar6 + -2;
            *puVar6 = *puVar7;
            puVar6[1] = puVar6[-1];
            pfVar1 = (float *)(puVar6 + -3);
            puVar6 = puVar7;
          } while (*pfVar1 <= local_c && local_c != *pfVar1);
        }
        *puVar7 = uVar3;
        puVar7[1] = uVar2;
        puVar5 = puVar4;
      }
      else {
        for (; param_1 != puVar6; puVar6 = puVar6 + -2) {
          *puVar6 = puVar6[-2];
          puVar6[1] = puVar6[-1];
        }
        *param_1 = uVar3;
        param_1[1] = uVar2;
        puVar5 = puVar4;
      }
    }
  }
  return;
}


/* FUN_004a9790 @ 004a9790  kind=gamemisc  attributed-by=none  size=302 */

void FUN_004a9790(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fStack_10;
  
  iVar7 = (param_2 - param_1) / 0xc;
  iVar14 = iVar7 / 2;
  if (0 < iVar14) {
    iVar9 = iVar14 * 2 + 2;
    iVar10 = param_1 + iVar14 * 0xc;
    do {
      uVar5 = *(undefined8 *)(iVar10 + -0xc);
      uVar6 = *(undefined4 *)(iVar10 + -4);
      iVar9 = iVar9 + -2;
      iVar14 = iVar14 + -1;
      iVar13 = iVar9;
      iVar11 = iVar14;
      while (iVar12 = iVar13, iVar12 < iVar7) {
        fVar4 = *(float *)(param_1 + 4 + iVar12 * 0xc);
        pfVar3 = (float *)(param_1 + -8 + iVar12 * 0xc);
        if (*pfVar3 <= fVar4 && fVar4 != *pfVar3) {
          iVar12 = iVar12 + -1;
        }
        puVar1 = (undefined4 *)(param_1 + iVar12 * 0xc);
        uVar8 = puVar1[1];
        puVar2 = (undefined4 *)(param_1 + iVar11 * 0xc);
        *puVar2 = *puVar1;
        puVar2[1] = uVar8;
        *(undefined4 *)(param_1 + 8 + iVar11 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar12 * 0xc);
        iVar11 = iVar12;
        iVar13 = iVar12 * 2 + 2;
      }
      if (iVar12 == iVar7) {
        puVar2 = (undefined4 *)(param_1 + -0xc + iVar7 * 0xc);
        uVar8 = puVar2[1];
        puVar1 = (undefined4 *)(param_1 + iVar11 * 0xc);
        *puVar1 = *puVar2;
        puVar1[1] = uVar8;
        *(undefined4 *)(param_1 + 8 + iVar11 * 0xc) = *(undefined4 *)(param_1 + -4 + iVar7 * 0xc);
        iVar11 = iVar7 + -1;
      }
      if (iVar14 < iVar11) {
        fStack_10 = (float)((ulonglong)uVar5 >> 0x20);
        do {
          iVar13 = (iVar11 + -1) / 2;
          if (*(float *)(param_1 + 4 + iVar13 * 0xc) <= fStack_10) break;
          puVar1 = (undefined4 *)(param_1 + iVar13 * 0xc);
          uVar8 = puVar1[1];
          puVar2 = (undefined4 *)(param_1 + iVar11 * 0xc);
          *puVar2 = *puVar1;
          puVar2[1] = uVar8;
          *(undefined4 *)(param_1 + 8 + iVar11 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar13 * 0xc);
          iVar11 = iVar13;
        } while (iVar14 < iVar13);
      }
      *(undefined8 *)(param_1 + iVar11 * 0xc) = uVar5;
      *(undefined4 *)(param_1 + 8 + iVar11 * 0xc) = uVar6;
      iVar10 = iVar10 + -0xc;
    } while (0 < iVar14);
  }
  return;
}


/* FUN_004a98d0 @ 004a98d0  kind=gamemisc  attributed-by=none  size=290 */

void FUN_004a98d0(int param_1,int param_2)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float local_c;
  
  iVar13 = param_2 - param_1 >> 4;
  iVar14 = iVar13 - (param_2 - param_1 >> 0x1f) >> 1;
  if (0 < iVar14) {
    iVar10 = iVar14 * 2 + 2;
    iVar8 = iVar14 * 0x10 + param_1;
    do {
      uVar5 = *(undefined8 *)(iVar8 + -8);
      uVar6 = *(undefined8 *)(iVar8 + -0x10);
      iVar8 = iVar8 + -0x10;
      iVar10 = iVar10 + -2;
      iVar14 = iVar14 + -1;
      iVar12 = iVar10;
      iVar9 = iVar14;
      while (iVar11 = iVar12, iVar11 < iVar13) {
        fVar4 = *(float *)(param_1 + 8 + iVar11 * 0x10);
        pfVar1 = (float *)(param_1 + -8 + iVar11 * 0x10);
        if (*pfVar1 <= fVar4 && fVar4 != *pfVar1) {
          iVar11 = iVar11 + -1;
        }
        *(undefined8 *)(param_1 + iVar9 * 0x10) = *(undefined8 *)(param_1 + iVar11 * 0x10);
        puVar2 = (undefined4 *)(param_1 + 8 + iVar11 * 0x10);
        uVar7 = puVar2[1];
        puVar3 = (undefined4 *)(param_1 + 8 + iVar9 * 0x10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar7;
        iVar9 = iVar11;
        iVar12 = iVar11 * 2 + 2;
      }
      if (iVar11 == iVar13) {
        *(undefined8 *)(param_1 + iVar9 * 0x10) = *(undefined8 *)(param_1 + -0x10 + iVar13 * 0x10);
        puVar2 = (undefined4 *)(param_1 + -8 + iVar13 * 0x10);
        uVar7 = puVar2[1];
        puVar3 = (undefined4 *)(param_1 + 8 + iVar9 * 0x10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar7;
        iVar9 = iVar13 + -1;
      }
      if (iVar14 < iVar9) {
        local_c = (float)uVar5;
        do {
          iVar12 = (iVar9 + -1) / 2;
          if (*(float *)(param_1 + 8 + iVar12 * 0x10) <= local_c) break;
          *(undefined8 *)(param_1 + iVar9 * 0x10) = *(undefined8 *)(param_1 + iVar12 * 0x10);
          puVar2 = (undefined4 *)(param_1 + 8 + iVar12 * 0x10);
          uVar7 = puVar2[1];
          puVar3 = (undefined4 *)(param_1 + 8 + iVar9 * 0x10);
          *puVar3 = *puVar2;
          puVar3[1] = uVar7;
          iVar9 = iVar12;
        } while (iVar14 < iVar12);
      }
      *(undefined8 *)(param_1 + iVar9 * 0x10) = uVar6;
      *(undefined8 *)(param_1 + 8 + iVar9 * 0x10) = uVar5;
    } while (0 < iVar14);
  }
  return;
}


/* FUN_004a9ad0 @ 004a9ad0  kind=gamemisc  attributed-by=none  size=128 */

void FUN_004a9ad0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (*(float *)((int)param_1 + 4) <= *(float *)((int)param_2 + 4) &&
      *(float *)((int)param_2 + 4) != *(float *)((int)param_1 + 4)) {
    uVar1 = *param_2;
    uVar2 = *(undefined4 *)(param_2 + 1);
    *param_2 = *param_1;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
    *param_1 = uVar1;
    *(undefined4 *)(param_1 + 1) = uVar2;
  }
  if (*(float *)((int)param_2 + 4) <= *(float *)((int)param_3 + 4) &&
      *(float *)((int)param_3 + 4) != *(float *)((int)param_2 + 4)) {
    uVar1 = *param_3;
    uVar2 = *(undefined4 *)(param_3 + 1);
    *param_3 = *param_2;
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_2 + 1);
    *param_2 = uVar1;
    *(undefined4 *)(param_2 + 1) = uVar2;
    if (*(float *)((int)param_1 + 4) <= *(float *)((int)param_2 + 4) &&
        *(float *)((int)param_2 + 4) != *(float *)((int)param_1 + 4)) {
      *param_2 = *param_1;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
      *param_1 = uVar1;
      *(undefined4 *)(param_1 + 1) = uVar2;
    }
  }
  return;
}


/* FUN_004a9b50 @ 004a9b50  kind=gamemisc  attributed-by=none  size=146 */

void FUN_004a9b50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(float *)(param_1 + 1) <= *(float *)(param_2 + 1) &&
      *(float *)(param_2 + 1) != *(float *)(param_1 + 1)) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    *param_1 = uVar1;
    param_1[1] = uVar2;
  }
  if (*(float *)(param_2 + 1) <= *(float *)(param_3 + 1) &&
      *(float *)(param_3 + 1) != *(float *)(param_2 + 1)) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    *param_2 = uVar1;
    param_2[1] = uVar2;
    if (*(float *)(param_1 + 1) <= *(float *)(param_2 + 1) &&
        *(float *)(param_2 + 1) != *(float *)(param_1 + 1)) {
      *param_2 = *param_1;
      param_2[1] = param_1[1];
      *param_1 = uVar1;
      param_1[1] = uVar2;
    }
  }
  return;
}


/* FUN_004a9db0 @ 004a9db0  kind=gamemisc  attributed-by=none  size=173 */

void FUN_004a9db0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (param_3 - param_1) / 0xc;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 0xc + param_1;
    FUN_004a9ad0(param_1,iVar1,iVar2 * 0x18 + param_1,param_4);
    FUN_004a9ad0(param_2 + iVar2 * -0xc,param_2,iVar2 * 0xc + param_2,param_4);
    iVar3 = param_3 + iVar2 * -0xc;
    FUN_004a9ad0(param_3 + iVar2 * -0x18,iVar3,param_3,param_4);
    FUN_004a9ad0(iVar1,param_2,iVar3,param_4);
    return;
  }
  FUN_004a9ad0(param_1,param_2,param_3,param_4);
  return;
}


/* FUN_004a9e60 @ 004a9e60  kind=gamemisc  attributed-by=none  size=153 */

void FUN_004a9e60(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_3 - param_1 >> 4;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)((iVar1 >> 0x1f & 7U) + iVar1) >> 3;
    iVar1 = iVar2 * 0x10 + param_1;
    FUN_004a9b50(param_1,iVar1,iVar2 * 0x20 + param_1,param_4);
    FUN_004a9b50(param_2 + iVar2 * -0x10,param_2,iVar2 * 0x10 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -0x10;
    FUN_004a9b50(param_3 + iVar2 * -0x20,iVar3,param_3,param_4);
    FUN_004a9b50(iVar1,param_2,iVar3,param_4);
    return;
  }
  FUN_004a9b50(param_1,param_2,param_3,param_4);
  return;
}


/* FUN_004aa350 @ 004aa350  kind=gamemisc  attributed-by=none  size=310 */

void FUN_004aa350(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 local_c [8];
  
  iVar2 = param_2 - param_1;
  do {
    iVar2 = iVar2 / 0xc;
    if (iVar2 < 0x21) {
LAB_004aa428:
      if (1 < iVar2) {
        FUN_004a93c0(param_1,param_2,param_4,0);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (1 < (param_2 - param_1) / 0xc) {
          FUN_004a9790(param_1,param_2,param_4,0,0);
        }
        FUN_004aa720(param_1,param_2,param_4);
        return;
      }
      goto LAB_004aa428;
    }
    piVar1 = (int *)FUN_004aabd0(local_c,param_1,param_2,param_4);
    iVar3 = *piVar1;
    iVar2 = piVar1[1];
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((iVar3 - param_1) / 0xc < (param_2 - iVar2) / 0xc) {
      FUN_004aa350(param_1,iVar3,param_3,param_4);
      param_1 = iVar2;
      iVar3 = param_2;
    }
    else {
      FUN_004aa350(iVar2,param_2,param_3,param_4);
    }
    iVar2 = iVar3 - param_1;
    param_2 = iVar3;
  } while( true );
}


/* FUN_004aa490 @ 004aa490  kind=gamemisc  attributed-by=none  size=232 */

void FUN_004aa490(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 local_c [8];
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 4;
    if (iVar1 < 0x21) {
LAB_004aa527:
      if (1 < iVar1) {
        FUN_004a9470(param_1,param_2,param_4,0);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (0x10 < (int)(param_2 - param_1 & 0xfffffff0U)) {
          FUN_004a98d0(param_1,param_2,param_4,0,0);
        }
        FUN_004aa7c0(param_1,param_2,param_4);
        return;
      }
      goto LAB_004aa527;
    }
    piVar2 = (int *)FUN_004aaeb0(local_c,param_1,param_2,param_4);
    iVar3 = *piVar2;
    iVar1 = piVar2[1];
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(iVar3 - param_1 & 0xfffffff0U) < (int)(param_2 - iVar1 & 0xfffffff0U)) {
      FUN_004aa490(param_1,iVar3,param_3,param_4);
      iVar3 = param_2;
      param_1 = iVar1;
    }
    else {
      FUN_004aa490(iVar1,param_2,param_3,param_4);
    }
    iVar1 = iVar3 - param_1;
    param_2 = iVar3;
  } while( true );
}


/* FUN_004aa720 @ 004aa720  kind=gamemisc  attributed-by=none  size=151 */

void FUN_004aa720(undefined8 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_10;
  undefined4 local_8;
  
  iVar1 = param_2 - (int)param_1;
  if (1 < iVar1 / 0xc) {
    puVar2 = (undefined8 *)(param_2 + -0xc);
    do {
      local_10 = *puVar2;
      local_8 = *(undefined4 *)(puVar2 + 1);
      *puVar2 = *param_1;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 1);
      FUN_004a9030(param_1,0,(iVar1 + -0xc) / 0xc,&local_10,param_3);
      puVar2 = (undefined8 *)((int)puVar2 + -0xc);
      iVar1 = (int)puVar2 + (0xc - (int)param_1);
    } while (1 < iVar1 / 0xc);
  }
  return;
}


/* FUN_004aa7c0 @ 004aa7c0  kind=gamemisc  attributed-by=none  size=122 */

void FUN_004aa7c0(undefined8 *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 local_14;
  undefined8 local_c;
  
  uVar1 = param_2 - (int)param_1;
  if (0x10 < (int)(uVar1 & 0xfffffff0)) {
    puVar2 = (undefined8 *)(param_2 + -0x10);
    do {
      local_14 = *puVar2;
      local_c = puVar2[1];
      *puVar2 = *param_1;
      puVar2[1] = param_1[1];
      FUN_004a9110(param_1,0,(int)(uVar1 - 0x10) >> 4,&local_14,param_3);
      puVar2 = puVar2 + -2;
      uVar1 = (int)puVar2 + (0x10 - (int)param_1);
    } while (0x10 < (int)(uVar1 & 0xfffffff0));
  }
  return;
}


/* FUN_004aabd0 @ 004aabd0  kind=gamemisc  attributed-by=none  size=715 */

void FUN_004aabd0(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *local_c;
  undefined8 *local_8;
  
  local_8 = (undefined8 *)((int)param_2 + (((int)param_3 - (int)param_2) / 0x18) * 0xc);
  FUN_004a9db0(param_2,local_8,(int)param_3 + -0xc,param_4);
  puVar7 = (undefined8 *)((int)local_8 + 0xc);
  for (; param_2 < local_8; local_8 = (undefined8 *)((int)local_8 + -0xc)) {
    if ((*(float *)((int)local_8 + 4) < *(float *)(local_8 + -1)) ||
       (*(float *)(local_8 + -1) < *(float *)((int)local_8 + 4))) break;
  }
  puVar4 = puVar7;
  local_c = puVar7;
  puVar9 = local_8;
  if (puVar7 < param_3) {
    if (3 < ((int)param_3 + (0xb - (int)puVar7)) / 0xc) {
      fVar1 = *(float *)((int)local_8 + 4);
      do {
        puVar4 = puVar7;
        local_c = puVar7;
        if ((fVar1 < *(float *)((int)puVar7 + 4)) || (*(float *)((int)puVar7 + 4) < fVar1))
        goto joined_r0x004aad02;
        if ((fVar1 < *(float *)(puVar7 + 2)) || (*(float *)(puVar7 + 2) < fVar1)) {
          puVar7 = (undefined8 *)((int)puVar7 + 0xc);
          puVar4 = puVar7;
          local_c = puVar7;
          goto joined_r0x004aad02;
        }
        if ((fVar1 < *(float *)((int)puVar7 + 0x1c)) || (*(float *)((int)puVar7 + 0x1c) < fVar1)) {
          puVar7 = puVar7 + 3;
          puVar4 = puVar7;
          local_c = puVar7;
          goto joined_r0x004aad02;
        }
        if ((fVar1 < *(float *)(puVar7 + 5)) || (*(float *)(puVar7 + 5) < fVar1)) {
          puVar7 = (undefined8 *)((int)puVar7 + 0x24);
          puVar4 = puVar7;
          local_c = puVar7;
          goto joined_r0x004aad02;
        }
        puVar7 = puVar7 + 6;
      } while ((int)puVar7 < (int)param_3 + -0x24);
    }
    puVar4 = puVar7;
    local_c = puVar7;
    if (puVar7 < param_3) {
      do {
        puVar4 = puVar7;
        local_c = puVar7;
        if ((*(float *)((int)local_8 + 4) < *(float *)((int)puVar7 + 4)) ||
           (*(float *)((int)puVar7 + 4) < *(float *)((int)local_8 + 4))) break;
        puVar7 = (undefined8 *)((int)puVar7 + 0xc);
        puVar4 = puVar7;
        local_c = puVar7;
      } while (puVar7 < param_3);
    }
  }
joined_r0x004aad02:
  do {
    puVar5 = local_8;
    if (param_3 <= puVar7) {
joined_r0x004aad5a:
      for (; param_2 < local_8; local_8 = (undefined8 *)((int)local_8 + -0xc)) {
        puVar6 = (undefined8 *)((int)puVar5 + -0xc);
        puVar8 = puVar9;
        puVar7 = local_c;
        if (*(float *)(puVar5 + -1) <= *(float *)((int)puVar9 + 4)) {
          if (*(float *)(puVar5 + -1) < *(float *)((int)puVar9 + 4)) break;
          uVar3 = *(undefined4 *)((int)puVar9 + -4);
          uVar2 = *(undefined8 *)((int)puVar9 + -0xc);
          puVar8 = (undefined8 *)((int)puVar9 + -0xc);
          *puVar8 = *puVar6;
          *(undefined4 *)((int)puVar9 + -4) = *(undefined4 *)((int)puVar5 + -4);
          *puVar6 = uVar2;
          *(undefined4 *)((int)puVar5 + -4) = uVar3;
        }
        puVar9 = puVar8;
        puVar5 = puVar6;
      }
      if (local_8 == param_2) {
        if (puVar7 == param_3) {
          *param_1 = puVar9;
          param_1[1] = puVar4;
          return;
        }
        if (puVar4 != puVar7) {
          uVar2 = *puVar9;
          uVar3 = *(undefined4 *)(puVar9 + 1);
          *puVar9 = *puVar4;
          *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar4 + 1);
          *puVar4 = uVar2;
          *(undefined4 *)(puVar4 + 1) = uVar3;
        }
        uVar2 = *puVar9;
        uVar3 = *(undefined4 *)(puVar9 + 1);
        *puVar9 = *puVar7;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar7 + 1);
        *puVar7 = uVar2;
        *(undefined4 *)(puVar7 + 1) = uVar3;
        puVar7 = (undefined8 *)((int)puVar7 + 0xc);
        puVar4 = (undefined8 *)((int)puVar4 + 0xc);
        local_c = puVar7;
        puVar9 = (undefined8 *)((int)puVar9 + 0xc);
      }
      else {
        puVar5 = (undefined8 *)((int)local_8 + -0xc);
        if (puVar7 == param_3) {
          puVar8 = (undefined8 *)((int)puVar9 + -0xc);
          if (puVar5 != puVar8) {
            uVar2 = *puVar5;
            uVar3 = *(undefined4 *)((int)local_8 + -4);
            *puVar5 = *puVar8;
            *(undefined4 *)((int)local_8 + -4) = *(undefined4 *)((int)puVar9 + -4);
            *puVar8 = uVar2;
            *(undefined4 *)((int)puVar9 + -4) = uVar3;
          }
          uVar2 = *puVar8;
          uVar3 = *(undefined4 *)((int)puVar9 + -4);
          *puVar8 = *(undefined8 *)((int)puVar4 - 0xc);
          *(undefined4 *)((int)puVar9 + -4) = *(undefined4 *)((int)puVar4 - 4);
          *(undefined8 *)((int)puVar4 - 0xcU) = uVar2;
          *(undefined4 *)((int)puVar4 - 4) = uVar3;
          puVar4 = (undefined8 *)((int)puVar4 - 0xcU);
          local_8 = puVar5;
          puVar9 = puVar8;
        }
        else {
          uVar2 = *puVar7;
          uVar3 = *(undefined4 *)(puVar7 + 1);
          *puVar7 = *puVar5;
          *(undefined4 *)(puVar7 + 1) = *(undefined4 *)((int)local_8 + -4);
          *puVar5 = uVar2;
          *(undefined4 *)((int)local_8 + -4) = uVar3;
          puVar7 = (undefined8 *)((int)puVar7 + 0xc);
          local_c = puVar7;
          local_8 = puVar5;
        }
      }
      goto joined_r0x004aad02;
    }
    puVar8 = puVar4;
    if (*(float *)((int)puVar9 + 4) <= *(float *)((int)puVar7 + 4)) {
      local_c = puVar7;
      if (*(float *)((int)puVar9 + 4) < *(float *)((int)puVar7 + 4)) goto joined_r0x004aad5a;
      puVar8 = (undefined8 *)((int)puVar4 + 0xc);
      uVar2 = *puVar4;
      uVar3 = *(undefined4 *)(puVar4 + 1);
      *puVar4 = *puVar7;
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar7 + 1);
      *puVar7 = uVar2;
      *(undefined4 *)(puVar7 + 1) = uVar3;
    }
    puVar7 = (undefined8 *)((int)puVar7 + 0xc);
    puVar4 = puVar8;
    local_c = puVar7;
  } while( true );
}


/* FUN_004aaeb0 @ 004aaeb0  kind=gamemisc  attributed-by=none  size=707 */

void FUN_004aaeb0(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  puVar9 = param_2 + (((int)param_3 - (int)param_2 >> 4) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1) * 2;
  FUN_004a9e60(param_2,puVar9,param_3 + -2,param_4);
  puVar11 = puVar9 + 2;
  for (; param_2 < puVar9; puVar9 = puVar9 + -2) {
    if ((*(float *)(puVar9 + 1) < *(float *)(puVar9 + -1)) ||
       (*(float *)(puVar9 + -1) < *(float *)(puVar9 + 1))) break;
  }
  puVar4 = puVar11;
  puVar7 = puVar9;
  if (puVar11 < param_3) {
    iVar5 = (int)param_3 + (0xf - (int)puVar11);
    if (3 < (int)(iVar5 + (iVar5 >> 0x1f & 0xfU)) >> 4) {
      fVar1 = *(float *)(puVar9 + 1);
      do {
        puVar4 = puVar11;
        if ((fVar1 < *(float *)(puVar11 + 1)) || (*(float *)(puVar11 + 1) < fVar1))
        goto joined_r0x004aafc2;
        if ((fVar1 < *(float *)(puVar11 + 3)) || (*(float *)(puVar11 + 3) < fVar1)) {
          puVar11 = puVar11 + 2;
          puVar4 = puVar11;
          goto joined_r0x004aafc2;
        }
        if ((fVar1 < *(float *)(puVar11 + 5)) || (*(float *)(puVar11 + 5) < fVar1)) {
          puVar11 = puVar11 + 4;
          puVar4 = puVar11;
          goto joined_r0x004aafc2;
        }
        if ((fVar1 < *(float *)(puVar11 + 7)) || (*(float *)(puVar11 + 7) < fVar1)) {
          puVar11 = puVar11 + 6;
          puVar4 = puVar11;
          goto joined_r0x004aafc2;
        }
        puVar11 = puVar11 + 8;
      } while ((int)puVar11 < (int)(param_3 + -6));
    }
    puVar4 = puVar11;
    if (puVar11 < param_3) {
      do {
        puVar4 = puVar11;
        if ((*(float *)(puVar9 + 1) < *(float *)(puVar11 + 1)) ||
           (*(float *)(puVar11 + 1) < *(float *)(puVar9 + 1))) break;
        puVar11 = puVar11 + 2;
        puVar4 = puVar11;
      } while (puVar11 < param_3);
    }
  }
joined_r0x004aafc2:
  do {
    puVar8 = puVar7;
    if (param_3 <= puVar11) {
joined_r0x004ab019:
      for (; param_2 < puVar7; puVar7 = puVar7 + -2) {
        puVar6 = puVar8 + -2;
        puVar10 = puVar9;
        if (*(float *)(puVar8 + -1) <= *(float *)(puVar9 + 1)) {
          if (*(float *)(puVar8 + -1) < *(float *)(puVar9 + 1)) break;
          uVar2 = puVar9[-2];
          uVar3 = puVar9[-1];
          puVar10 = puVar9 + -2;
          *puVar10 = *puVar6;
          puVar9[-1] = puVar8[-1];
          *puVar6 = uVar2;
          puVar8[-1] = uVar3;
        }
        puVar8 = puVar6;
        puVar9 = puVar10;
      }
      if (puVar7 == param_2) {
        if (puVar11 == param_3) {
          param_1[1] = puVar4;
          *param_1 = puVar9;
          return;
        }
        if (puVar4 != puVar11) {
          uVar2 = *puVar9;
          uVar3 = puVar9[1];
          *puVar9 = *puVar4;
          puVar9[1] = puVar4[1];
          *puVar4 = uVar2;
          puVar4[1] = uVar3;
        }
        uVar2 = *puVar9;
        uVar3 = puVar9[1];
        *puVar9 = *puVar11;
        puVar9[1] = puVar11[1];
        *puVar11 = uVar2;
        puVar9 = puVar9 + 2;
        puVar11[1] = uVar3;
        puVar11 = puVar11 + 2;
        puVar4 = puVar4 + 2;
      }
      else {
        puVar8 = puVar7 + -2;
        if (puVar11 == param_3) {
          puVar10 = puVar9 + -2;
          if (puVar8 != puVar10) {
            uVar2 = *puVar8;
            uVar3 = puVar7[-1];
            *puVar8 = *puVar10;
            puVar7[-1] = puVar9[-1];
            *puVar10 = uVar2;
            puVar9[-1] = uVar3;
          }
          uVar2 = *puVar10;
          uVar3 = puVar9[-1];
          *puVar10 = puVar4[-2];
          puVar9[-1] = puVar4[-1];
          puVar4[-2] = uVar2;
          puVar4[-1] = uVar3;
          puVar4 = puVar4 + -2;
          puVar9 = puVar10;
          puVar7 = puVar8;
        }
        else {
          uVar2 = *puVar11;
          uVar3 = puVar11[1];
          *puVar11 = *puVar8;
          puVar11[1] = puVar7[-1];
          *puVar8 = uVar2;
          puVar7[-1] = uVar3;
          puVar11 = puVar11 + 2;
          puVar7 = puVar8;
        }
      }
      goto joined_r0x004aafc2;
    }
    puVar10 = puVar4;
    if (*(float *)(puVar9 + 1) <= *(float *)(puVar11 + 1)) {
      if (*(float *)(puVar9 + 1) < *(float *)(puVar11 + 1)) goto joined_r0x004ab019;
      puVar10 = puVar4 + 2;
      uVar2 = *puVar4;
      uVar3 = puVar4[1];
      *puVar4 = *puVar11;
      puVar4[1] = puVar11[1];
      *puVar11 = uVar2;
      puVar11[1] = uVar3;
    }
    puVar11 = puVar11 + 2;
    puVar4 = puVar10;
  } while( true );
}


/* FUN_004ab870 @ 004ab870  kind=gamemisc  attributed-by=none  size=50 */

void FUN_004ab870(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
    }
    param_3 = param_3 + 2;
  }
  return;
}


/* FUN_004abc00 @ 004abc00  kind=gamemisc  attributed-by=none  size=16 */

void FUN_004abc00(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  return;
}


/* FUN_004abc60 @ 004abc60  kind=gamemisc  attributed-by=none  size=19 */

void FUN_004abc60(int *param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  *param_1 = iVar1;
  *in_ECX = iVar1 + 0x10;
  return;
}


/* FUN_004abca0 @ 004abca0  kind=gamemisc  attributed-by=none  size=19 */

void FUN_004abca0(int *param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  *param_1 = iVar1;
  *in_ECX = iVar1 + -4;
  return;
}


/* FUN_004ac020 @ 004ac020  kind=gamemisc  attributed-by=none  size=115 */

void FUN_004ac020(uint param_1)

{
  int *in_ECX;
  uint uVar1;
  
  if (param_1 <= (uint)(in_ECX[2] - in_ECX[1] >> 4)) {
    return;
  }
  if (0xfffffffU - (in_ECX[1] - *in_ECX >> 4) < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = in_ECX[2] - *in_ECX >> 4;
  if (0xfffffff - (uVar1 >> 1) < uVar1) {
    FUN_004abdb0();
    return;
  }
  FUN_004abdb0();
  return;
}


/* FUN_004b39e0 @ 004b39e0  kind=gamemisc  attributed-by=none  size=29233 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_004b39e0(undefined4 param_1,byte *param_2,byte *param_3,int param_4,undefined4 param_5,
                 byte *param_6)

{
  char cVar1;
  int *piVar2;
  CRefTime *this;
  CRefTime *this_00;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  CRefTime *pCVar6;
  undefined4 *puVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  int *piVar17;
  int *piVar18;
  char *pcVar19;
  pair<unsigned___int64,unsigned___int64> *ppVar20;
  float *pfVar21;
  byte *unaff_EDI;
  undefined4 *puVar22;
  uint *puVar23;
  pair<unsigned___int64,unsigned___int64> *ppVar24;
  bool bVar25;
  float10 fVar26;
  float fVar27;
  int iStack00000044;
  int iStack000000b0;
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
  byte *pbStack_34;
  int local_2c;
  byte *local_28;
  int local_20;
  int local_14;
  int local_8;
  
  do {
    piVar2 = (int *)FUN_0042c6d0();
    iVar8 = *piVar2;
    if (0.0 < *(float *)(iVar8 + 0x16c)) {
      *(undefined1 *)(iVar8 + 0x1d10) = 0;
      cVar1 = *(char *)(iVar8 + 0x68);
      if (((((cVar1 == '\x1e') || (cVar1 == '\x1f')) || (cVar1 == ' ')) || (cVar1 == '!')) &&
         (iVar10 = FUN_0043d1a0(), *(int *)(iVar8 + 0x6c) < iVar10)) {
        FUN_0042c460();
        FUN_0042c800();
        cVar1 = FUN_0047f760();
        if (cVar1 != '\0') {
          FUN_0043caa0();
          FUN_0043d1a0();
          FUN_0043caa0();
          FUN_0040eac0();
          FUN_0040eac0();
          if (*(char *)(iVar8 + 0x141) == '\x01') {
            ppVar24 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
            std::pair<unsigned___int64,unsigned___int64>::
            operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                      ((pair<unsigned___int64,unsigned___int64> *)&stack0x00000be4,ppVar24);
            ppVar24 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
            std::pair<unsigned___int64,unsigned___int64>::
            operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                      ((pair<unsigned___int64,unsigned___int64> *)&stack0x00000bac,ppVar24);
          }
          FUN_0042c460();
          FUN_0040ea90();
          FUN_0042c460();
          FUN_0043d1a0();
          FUN_0042c7a0();
          FUN_0042c800();
          FUN_004bc760();
          if ((*(char *)(iVar8 + 0x68) == '\x1f') || (*(char *)(iVar8 + 0x68) == '!')) {
            FUN_0042c460();
            FUN_0040ea90();
            FUN_0042c460();
            FUN_0043d1a0();
            FUN_0042c7a0();
            FUN_0042c800();
            FUN_004bc760();
          }
        }
      }
      if (((*(int *)(iVar8 + 0x1a0) != 0 || *(int *)(iVar8 + 0x1a4) != 0) &&
          (*(char *)(iVar8 + 0x68) == '\"')) &&
         ((iVar10 = FUN_0043d1a0(), *(int *)(iVar8 + 0x6c) < iVar10 &&
          (iVar10 = FUN_0042f000(), iVar10 != 0)))) {
        FUN_00428970();
        cVar1 = FUN_0047f760();
        if (cVar1 != '\0') {
          FUN_00428970();
          FUN_0040eac0();
          FUN_0040eac0();
          FUN_004bbd80();
        }
      }
      cVar1 = *(char *)(iVar8 + 0x68);
      if ((((cVar1 != '\x1c') || (*(float *)(iVar8 + 0x170) <= 0.0)) &&
          (((cVar1 != '_' && (cVar1 != '^')) ||
           (iVar10 = FUN_0043d1a0(), iVar10 <= *(int *)(iVar8 + 0x6c))))) ||
         (((iVar10 = FUN_0043caa0(), *(int *)(iVar8 + 0x6c) < iVar10 || (0 < *(int *)(iVar8 + 300)))
          || (cVar1 = FUN_0047f760(), cVar1 == '\0')))) {
        FUN_00428970();
        cVar1 = FUN_0047f760();
        if (cVar1 == '\0') goto LAB_004b7685;
      }
      else {
        FUN_00427870();
        FUN_00446bb0();
        FUN_005a35d0();
        FUN_00451510();
        FUN_0042c460();
        FUN_0042c800();
        if (((*(byte *)(iVar8 + 0x7e) & 4) == 0) || (*(int *)(iVar8 + 0x1554) == 0)) {
          if (*(int *)(iVar8 + 0x1564) == 0) {
            FUN_0040ea90();
            FUN_004248a0();
            FUN_0042c460();
            FUN_00412260();
            FUN_00412260();
            FUN_00412080();
          }
          else {
            FUN_0047b5f0();
            FUN_00424820();
            FUN_00424810();
            FUN_0040ea90();
            FUN_00451510();
            FUN_004248a0();
            FUN_0042c460();
            FUN_00412260();
            FUN_00412260();
            FUN_00412080();
          }
        }
        else {
          FUN_0047b5f0();
          FUN_00424820();
          FUN_00424810();
          FUN_0040ea90();
          FUN_00451510();
          FUN_004248a0();
          FUN_0042c460();
          FUN_00412260();
          FUN_00412260();
          FUN_00412080();
        }
        FUN_0043b610();
        FUN_0042c800();
        FUN_0042c5b0();
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
        FUN_0042c7a0();
        FUN_0042c4a0();
        FUN_0040ea90();
        FUN_004c12f0();
        iVar10 = FUN_0043caa0();
        if ((float)(*(int *)(iVar8 + 0x6c) - iVar10) * 0.01 < 1.0) {
          FUN_0043caa0();
        }
        FUN_0042c7a0();
        FUN_0042c4a0();
        FUN_00423f20();
        FUN_00424730();
        FUN_00424a60();
        FUN_004482a0();
        if (*(char *)(iVar8 + 0x141) == '\x01') {
          FUN_00488b80();
          FUN_0040e420();
          FUN_00488b80();
          FUN_0040e420();
        }
        else if (*(char *)(iVar8 + 0x141) == '\x02') {
          FUN_00488b80();
          FUN_0040e420();
          FUN_00488b80();
          FUN_0040e420();
        }
        else {
          FUN_00488b80();
          FUN_0040e420();
        }
        FUN_0040eac0();
        FUN_00448280();
        FUN_004e6df0();
        unaff_EDI = param_6;
      }
      if ((unaff_EDI[0x8006e6] == 0) || (iVar8 == *(int *)(unaff_EDI + 0x8006d0))) {
        FUN_004120b0();
        pCVar6 = (CRefTime *)FUN_004120b0();
        this = (CRefTime *)FUN_004120b0();
        this_00 = (CRefTime *)FUN_00412220();
        CRefTime::Millisecs(this_00);
        CRefTime::Millisecs(pCVar6);
        CRefTime::Millisecs(this);
        FUN_004718b0();
        *(undefined4 *)(iVar8 + 0x149c) = *(undefined4 *)(iVar8 + 0x6c);
        switch(*(undefined1 *)(iVar8 + 0x68)) {
        case 1:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x10;
          break;
        case 2:
          *(undefined4 *)(iVar8 + 0x14a0) = 0xf;
          break;
        case 3:
        case 9:
        case 0x13:
        case 0x3e:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x12;
          break;
        case 4:
        case 0x12:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x11;
          break;
        case 5:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x21;
          break;
        case 6:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x14;
          break;
        case 7:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x13;
          break;
        case 8:
LAB_004b5203:
          *(undefined4 *)(iVar8 + 0x14a0) = 9;
          break;
        case 10:
          *(undefined4 *)(iVar8 + 0x14a0) = 10;
          break;
        case 0xb:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x1c;
          break;
        case 0xc:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x1d;
          break;
        case 0xd:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x1e;
          break;
        case 0xe:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x1f;
          break;
        case 0xf:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x20;
          break;
        case 0x10:
        case 0x11:
LAB_004b5216:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x23;
          break;
        case 0x14:
        case 0x15:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x32;
          break;
        case 0x16:
        case 0x17:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x15;
          break;
        case 0x18:
        case 0x19:
        case 0x32:
        case 0x37:
LAB_004b51e1:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x16;
          break;
        case 0x1a:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x42;
          break;
        case 0x1b:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x43;
          break;
        case 0x1c:
          *(undefined4 *)(iVar8 + 0x14a0) = 0xb;
          break;
        default:
          *(undefined4 *)(iVar8 + 0x14a0) = 0;
          break;
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x31:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5a:
        case 0x5c:
        case 0x69:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x3d;
          break;
        case 0x23:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x3e;
          break;
        case 0x24:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x1b;
          break;
        case 0x25:
        case 0x2b:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x17;
          break;
        case 0x26:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x5e:
        case 0x5f:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x1a;
          break;
        case 0x27:
        case 0x29:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x18;
          break;
        case 0x28:
        case 0x2a:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x19;
          break;
        case 0x2f:
        case 0x36:
          *(undefined4 *)(iVar8 + 0x14a0) = 1;
          break;
        case 0x30:
          if ((*(char *)(iVar8 + 0xaa8) == '\x03') &&
             ((*(char *)(iVar8 + 0xaa9) == '\x06' || (*(char *)(iVar8 + 0xaa9) == '\a'))))
          goto LAB_004b51e1;
          if (*(char *)(iVar8 + 0x990) == '\x03') {
            if (*(char *)(iVar8 + 0x991) != '\r') goto LAB_004b5216;
            goto LAB_004b5203;
          }
          *(undefined4 *)(iVar8 + 0x14a0) = 0x22;
          break;
        case 0x33:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x46;
          break;
        case 0x39:
        case 0x3c:
          *(undefined4 *)(iVar8 + 0x14a0) = 2;
          break;
        case 0x3a:
          *(undefined4 *)(iVar8 + 0x14a0) = 3;
          break;
        case 0x3b:
          *(undefined4 *)(iVar8 + 0x14a0) = 4;
          break;
        case 0x3d:
        case 0x42:
LAB_004b4fbd:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x31;
          break;
        case 0x3f:
          *(undefined4 *)(iVar8 + 0x14a0) = 6;
          break;
        case 0x40:
          *(undefined4 *)(iVar8 + 0x14a0) = 5;
          break;
        case 0x41:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x30;
          break;
        case 0x43:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x25;
          break;
        case 0x44:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x26;
          break;
        case 0x45:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x27;
          break;
        case 0x46:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x28;
          break;
        case 0x47:
        case 0x48:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x29;
          break;
        case 0x49:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x2a;
          break;
        case 0x4a:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x2b;
          break;
        case 0x4b:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x2c;
          break;
        case 0x4c:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x2d;
          break;
        case 0x4d:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x2e;
          break;
        case 0x4e:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x2f;
          break;
        case 0x4f:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x36;
          break;
        case 0x50:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x33;
          break;
        case 0x51:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x34;
          break;
        case 0x52:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x35;
          break;
        case 0x53:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x39;
          break;
        case 0x54:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x37;
          break;
        case 0x56:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x3c;
          break;
        case 0x5b:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x3f;
          break;
        case 0x5d:
          if (*(char *)(iVar8 + 0x990) == '\0') goto LAB_004b4fbd;
          *(undefined4 *)(iVar8 + 0x14a0) = 0x23;
          break;
        case 0x60:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x41;
          break;
        case 0x62:
          *(undefined4 *)(iVar8 + 0x14a0) = 8;
          break;
        case 0x65:
        case 0x67:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x44;
          break;
        case 0x68:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x45;
          break;
        case 0x6a:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x3a;
          break;
        case 0x6b:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x3b;
          break;
        case 0x6c:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x47;
          break;
        case 0x6d:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x48;
          break;
        case 0x6e:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x49;
        }
        if (0 < *(int *)(iVar8 + 0x130)) {
          *(undefined4 *)(iVar8 + 0x14a0) = 0x38;
        }
        if (iVar8 == *(int *)(unaff_EDI + 0x8006d0)) {
          FUN_004c0ed0();
        }
        FUN_0040eac0();
        if (0 < *(int *)(iVar8 + 0x134)) {
          FUN_0040eac0();
          FUN_004127c0();
        }
        FUN_0046f440();
        FUN_0060a9f0();
        cVar1 = FUN_004688d0();
        while (cVar1 != '\0') {
          pcVar19 = (char *)FUN_0042c6c0();
          if ((*pcVar19 == '\x01') || (*pcVar19 == '\x02')) {
            FUN_0040eac0();
            FUN_004127c0();
          }
          if (*pcVar19 == '\x04') {
            FUN_0040eac0();
            FUN_004127c0();
            FUN_0040ea90();
            FUN_0042c460();
            FUN_00428970();
            FUN_0040eac0();
            FUN_0040eac0();
            FUN_0042c7a0();
            FUN_004bbd80();
          }
          if (*pcVar19 == '\a') {
            FUN_004120c0();
            FUN_0040eac0();
            FUN_00448280();
            FUN_00423e70();
            FUN_00428970();
            FUN_004122e0();
            FUN_004122e0();
            FUN_00412220();
            FUN_004120f0();
            FUN_004122c0();
            FUN_004120f0();
            FUN_004122c0();
            FUN_004120f0();
            FUN_00424a60();
            FUN_00424730();
            FUN_00488b80();
            FUN_0040e420();
            FUN_00428970();
            FUN_00424610();
            FUN_00424820();
            FUN_00424810();
            FUN_00424a60();
            FUN_004482a0();
            FUN_004e6df0();
          }
          if (*pcVar19 == '\b') {
            FUN_004120c0();
            FUN_0040eac0();
            FUN_00448280();
            FUN_00423e70();
            FUN_00428970();
            FUN_004122e0();
            FUN_004122e0();
            FUN_00412220();
            FUN_004120f0();
            FUN_004122c0();
            FUN_004120f0();
            FUN_004122c0();
            FUN_004120f0();
            FUN_00424a60();
            FUN_00488b80();
            FUN_0040e420();
            FUN_00428970();
            FUN_00424730();
            FUN_00488b80();
            FUN_00424610();
            FUN_00424820();
            FUN_00424810();
            FUN_00424a60();
            FUN_004482a0();
            FUN_004e6df0();
            unaff_EDI = param_6;
          }
          FUN_00468d30();
          FUN_0060a9f0();
          cVar1 = FUN_004688d0();
        }
        FUN_00412120();
        if ((*(ushort *)(iVar8 + 0x7e) & 0x200) != 0) {
          FUN_004460f0();
          FUN_0040eac0();
          FUN_00468f50();
          FUN_004a8f40();
          FUN_004127c0();
        }
        FUN_00449090();
        if ((((((*(char *)(iVar8 + 0x140) == '\x04') && (*(char *)(iVar8 + 0x141) == '\x01')) &&
              (iVar10 = FUN_0043d1a0(), *(int *)(iVar8 + 0x6c) < iVar10)) &&
             (((cVar1 = *(char *)(iVar8 + 0x68), cVar1 == '\x11' || (cVar1 == '\x05')) ||
              (cVar1 == '\x14')))) ||
            ((*(char *)(iVar8 + 0x68) == '0' || (*(char *)(iVar8 + 0x68) == ']')))) ||
           ((iVar10 = FUN_00443f10(), iVar10 != 0 || (iVar10 = FUN_00443f10(), iVar10 != 0)))) {
          (**(code **)(**(int **)(unaff_EDI + 0x134) + 0xe4))();
          param_4 = 0;
          do {
            FUN_00447fb0();
            puVar7 = (undefined4 *)&stack0x00000790;
            puVar22 = (undefined4 *)&stack0x000029e8;
            for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar22 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar22 = puVar22 + 1;
            }
            FUN_00451510();
            FUN_004252f0();
            FUN_00424990();
            FUN_0042f000();
            FUN_004128f0();
            param_4 = param_4 + 1;
          } while (param_4 < 5);
          FUN_00447fb0();
          (**(code **)(**(int **)(param_3 + 0x134) + 0xe4))();
          unaff_EDI = param_3;
        }
        if (*(float *)(iVar8 + 0x1190) <= 0.0) {
          FUN_0042f000();
          FUN_004128f0();
        }
        else {
          FUN_004860b0();
        }
        FUN_00444cb0();
        if (*(int *)(iVar8 + 0x1574) != 0) {
          FUN_00471b60();
        }
        if (*(int *)(iVar8 + 0x1578) != 0) {
          FUN_00471b60();
        }
        if (*(int *)(iVar8 + 0x155c) != 0) {
          FUN_00471b60();
        }
        if (*(int *)(iVar8 + 0x157c) != 0) {
          FUN_00471b60();
        }
        FUN_00449090();
        if (*(int *)(iVar8 + 300) < -2999) {
          if (*(char *)(iVar8 + 0x68) == 'T') {
            FUN_004120c0();
            FUN_0040eac0();
            FUN_00448280();
            FUN_00423e70();
            FUN_00428970();
            FUN_004122e0();
            FUN_004120f0();
            FUN_004122c0();
            FUN_004120f0();
            FUN_004122c0();
            FUN_004120f0();
            FUN_00424a60();
            FUN_0040e420();
            FUN_00428970();
            FUN_00424730();
            FUN_00428970();
            FUN_0040e420();
            FUN_00424610();
            FUN_004482a0();
            FUN_004e6df0();
            unaff_EDI = param_6;
          }
        }
        else {
          FUN_004120c0();
          FUN_0040eac0();
          FUN_00448280();
          FUN_00423e70();
          FUN_00428970();
          FUN_004122e0();
          FUN_004120f0();
          FUN_004122c0();
          FUN_004120f0();
          FUN_004122c0();
          FUN_004120f0();
          FUN_00424a60();
          FUN_00428970();
          FUN_00424730();
          FUN_00424610();
          FUN_00424820();
          FUN_00424810();
          FUN_00424a60();
          FUN_004482a0();
          FUN_004e6df0();
          unaff_EDI = param_6;
        }
        if (*(int *)(iVar8 + 300) < 1) {
          cVar1 = *(char *)(iVar8 + 0x68);
          if (((((cVar1 == '%') || (cVar1 == '&')) || (cVar1 == '+')) || (cVar1 == ',')) &&
             (iVar10 = FUN_0043caa0(), *(int *)(iVar8 + 0x6c) < iVar10)) {
            FUN_0040eac0();
            FUN_0040eac0();
            FUN_0040eac0();
            if (*(char *)(iVar8 + 0x141) == '\x01') {
              ppVar24 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
              std::pair<unsigned___int64,unsigned___int64>::
              operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                        ((pair<unsigned___int64,unsigned___int64> *)&stack0x00000da8,ppVar24);
              ppVar24 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
              std::pair<unsigned___int64,unsigned___int64>::
              operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                        ((pair<unsigned___int64,unsigned___int64> *)&stack0x00000d28,ppVar24);
              ppVar24 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
              std::pair<unsigned___int64,unsigned___int64>::
              operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                        ((pair<unsigned___int64,unsigned___int64> *)&stack0x00000d68,ppVar24);
            }
            FUN_0043caa0();
            FUN_00446bb0();
            if (((*(byte *)(iVar8 + 0x7e) & 4) == 0) || (*(int *)(iVar8 + 0x1554) == 0)) {
              if (*(char *)(iVar8 + 0xaa9) == '\f') {
                uVar3 = *(uint *)(iVar8 + 0x70) & 0x80000001;
                bVar25 = uVar3 == 0;
                if ((int)uVar3 < 0) {
                  bVar25 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
                }
                if (!bVar25) {
                  if (*(int *)(iVar8 + 0x1564) == 0) {
                    FUN_0040ea90();
                    FUN_004248a0();
                    FUN_0042c460();
                    FUN_00412260();
                    FUN_00412260();
                    FUN_00412080();
                  }
                  else {
                    FUN_0047b5f0();
                    FUN_00424820();
                    FUN_00424810();
                    FUN_0040ea90();
                    FUN_00451510();
                    FUN_004248a0();
                    FUN_0042c460();
                    FUN_00412260();
                    FUN_00412260();
                    FUN_00412080();
                  }
                  goto LAB_004b6841;
                }
              }
              if (*(int *)(iVar8 + 0x1564) != 0) {
                FUN_0047b5f0();
                FUN_00424820();
                FUN_00424810();
                FUN_0040ea90();
                FUN_00451510();
                FUN_004248a0();
                FUN_0042c460();
                FUN_00412260();
                FUN_00412260();
                FUN_00412080();
                goto LAB_004b6841;
              }
            }
            else {
              FUN_0047b5f0();
              FUN_00424820();
              FUN_00424810();
              FUN_0040ea90();
              FUN_00451510();
              FUN_004248a0();
              FUN_0042c460();
              FUN_00412260();
              FUN_00412260();
              FUN_00412080();
LAB_004b6841:
              FUN_0043b610();
              FUN_0042c800();
              FUN_0042c5b0();
              unaff_EDI = param_6;
            }
            FUN_00427870();
            FUN_004252f0();
            FUN_00471d50();
          }
          FUN_0046f440();
          FUN_0060a9f0();
          cVar1 = FUN_004688d0();
          while (cVar1 != '\0') {
            puVar4 = (undefined1 *)FUN_0042c6c0();
            switch(*puVar4) {
            case 6:
              FUN_0040ea90();
              FUN_0042c460();
              FUN_00428970();
              FUN_0040eac0();
              FUN_0040eac0();
              FUN_0042c7a0();
              FUN_004c04c0();
            default:
              goto LAB_004b6d09;
            case 9:
              FUN_0040ea90();
              FUN_0042c460();
              FUN_00428970();
              FUN_0040eac0();
              FUN_0040eac0();
              break;
            case 10:
              FUN_0040ea90();
              FUN_0042c460();
              FUN_00428970();
              FUN_0040eac0();
              FUN_0040eac0();
              break;
            case 0xb:
              FUN_0040ea90();
              FUN_0042c460();
              FUN_00428970();
              FUN_0040eac0();
              FUN_0040eac0();
            }
            FUN_0042c7a0();
            FUN_004bbd80();
LAB_004b6d09:
            FUN_00468d30();
            FUN_0060a9f0();
            cVar1 = FUN_004688d0();
          }
          if ((*(char *)(iVar8 + 0x68) == '\x18') || (*(char *)(iVar8 + 0x68) == '\x19')) {
            FUN_00427870();
            FUN_0042c460();
            FUN_0040eac0();
            FUN_0040eac0();
            FUN_0040eac0();
            FUN_00427870();
            FUN_0042c800();
            FUN_00471d50();
          }
          if (((*(char *)(iVar8 + 0x68) == 'W') || (*(char *)(iVar8 + 0x68) == 'X')) &&
             (iVar10 = *(int *)(iVar8 + 0x6c), iVar5 = FUN_0043d1a0(), iVar10 < iVar5)) {
            FUN_0043caa0();
            iStack000000b0 = 0x14;
            do {
              FUN_0040ea90();
              FUN_0042c460();
              FUN_0040eac0();
              FUN_0040eac0();
              FUN_0042c7a0();
              FUN_004bbd80();
              iStack000000b0 = iStack000000b0 + 0xd;
            } while (iStack000000b0 < 0x48);
          }
        }
        if (((*(char *)(iVar8 + 0x68) == 'e') &&
            (iVar10 = FUN_0043d1a0(), *(int *)(iVar8 + 0x6c) < iVar10)) &&
           (iVar10 = FUN_004120c0(), iVar10 != 0)) {
          FUN_00423e70();
          FUN_00428970();
          FUN_0042c580();
          FUN_0043b610();
          FUN_0042c800();
          FUN_0042c4a0();
          FUN_00424990();
          FUN_00428970();
          FUN_004241b0();
          FUN_00424810();
          iVar10 = FUN_0043d1a0();
          if (iVar10 + -200 < *(int *)(iVar8 + 0x6c)) {
            FUN_0043d1a0();
          }
          FUN_00424730();
          FUN_00424820();
          FUN_00424810();
          FUN_00424a60();
          FUN_004482a0();
          FUN_00448280();
          FUN_004e6df0();
        }
        if (*(char *)(iVar8 + 0x60) == '\x03') {
          iStack00000044 = 0;
          FUN_0040eac0();
          cVar1 = *(char *)(iVar8 + 0x140);
          if (((cVar1 == -0x80) || (cVar1 == -0x7f)) || (cVar1 == -0x7e)) {
            iStack00000044 = FUN_004120c0();
            cVar1 = *(char *)(iVar8 + 0x140);
          }
          if (cVar1 == -0x7d) {
            iStack00000044 = FUN_004120c0();
            cVar1 = *(char *)(iVar8 + 0x140);
          }
          if (cVar1 == -0x77) {
            iStack00000044 = FUN_004120c0();
          }
          piVar2 = (int *)FUN_00428970();
          if (-1 < *piVar2) {
            FUN_00428970();
            iVar8 = FUN_00602440();
            pcVar19 = (char *)FUN_004a6ad0();
            if ((pcVar19 == (char *)0x0) || (*pcVar19 == '\0')) {
LAB_004b7409:
              iVar10 = FUN_00487da0();
              if ((iVar10 != 0) && (*(int *)(iVar10 + 0x18) != 0)) {
                if ((*(int *)(*(int *)(unaff_EDI + 0x8006d0) + 400) + -2 <= *(int *)(iVar10 + 0x24))
                   && (*(int *)(iVar10 + 0x24) <= *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 400) + 2
                      )) goto LAB_004b73f3;
              }
            }
            else {
              if ((*(int *)(pcVar19 + 8) < *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 400) + -2) ||
                 (*(int *)(*(int *)(unaff_EDI + 0x8006d0) + 400) + 2 < *(int *)(pcVar19 + 8)))
              goto LAB_004b7409;
LAB_004b73f3:
              iStack00000044 = FUN_004120c0();
            }
            if (iStack00000044 == 0) goto LAB_004b7685;
            if (iVar8 != 0) {
              FUN_004c0ec0();
            }
            ppVar24 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
            std::pair<unsigned___int64,unsigned___int64>::
            operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                      ((pair<unsigned___int64,unsigned___int64> *)&stack0x00000c68,ppVar24);
          }
          if (iStack00000044 != 0) {
            FUN_00423e70();
            FUN_00428970();
            FUN_0042c580();
            FUN_0043b610();
            FUN_0042c800();
            FUN_0042c4a0();
            FUN_00424990();
            FUN_00428970();
            FUN_004241b0();
            FUN_00424810();
            FUN_00424730();
            FUN_00424820();
            FUN_00424810();
            FUN_00424a60();
            FUN_004482a0();
            FUN_00448280();
            FUN_004e6df0();
          }
        }
      }
    }
    else {
      FUN_00428970();
      if (*(char *)(iVar8 + 0x1d10) != '\0') {
        FUN_0040ea90();
        FUN_0042c460();
        FUN_0042c800();
        cVar1 = FUN_0047f760();
        if (cVar1 != '\0') {
          FUN_0042c4a0();
          FUN_0040eac0();
          FUN_004120f0();
          FUN_004120f0();
          FUN_00470d80();
          if ((*(ushort *)(iVar8 + 0x7e) & 0x400) == 0) {
            FUN_0042c4a0();
            FUN_004120a0();
            FUN_004120a0();
            FUN_004120a0();
            FUN_0040eac0();
            FUN_004120f0();
            FUN_004120f0();
            FUN_00470d80();
          }
          FUN_0042c4a0();
          FUN_0040eac0();
          FUN_004120f0();
          FUN_004120f0();
          FUN_00470d80();
          FUN_0042c4a0();
          FUN_0040eac0();
          FUN_004120f0();
          FUN_004120f0();
          FUN_00470d80();
          FUN_0042c4a0();
          FUN_0040eac0();
          FUN_004120f0();
          FUN_004120f0();
          FUN_00470d80();
          FUN_0042c4a0();
          FUN_0040eac0();
          FUN_004120f0();
          FUN_004120f0();
          FUN_00470d80();
          FUN_0042c4a0();
          FUN_0040eac0();
          FUN_004120f0();
          FUN_004120f0();
          FUN_00470d80();
          FUN_0042c4a0();
          FUN_0040eac0();
          FUN_004120f0();
          FUN_004120f0();
          FUN_00470d80();
          FUN_0042c4a0();
          FUN_0040eac0();
          FUN_004120f0();
          FUN_004120f0();
          FUN_00470d80();
          FUN_0042c4a0();
          FUN_0040eac0();
          FUN_004120f0();
          FUN_004120f0();
          FUN_00470d80();
          if (*(int *)(iVar8 + 100) == 0x90) {
            FUN_0042c5b0();
            FUN_0040ea90();
            FUN_00411e30();
            FUN_004863d0();
          }
        }
      }
      *(undefined1 *)(iVar8 + 0x1d10) = 0;
    }
LAB_004b7685:
    FUN_00468db0();
    FUN_0042f030();
    cVar1 = FUN_004688d0();
  } while (cVar1 != '\0');
  if (unaff_EDI[0x1001004] != 0) {
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
      unaff_EDI = param_6;
    }
  }
  (**(code **)(**(int **)(unaff_EDI + 0x134) + 0xe4))();
  FUN_0046f440();
  FUN_0060a9f0();
  cVar1 = FUN_004688d0();
  while (cVar1 != '\0') {
    piVar2 = (int *)FUN_0042c6c0();
    cVar1 = FUN_0047f760();
    if (cVar1 != '\0') {
      if ((*piVar2 == 0) || (*piVar2 == 4)) {
        pCVar6 = (CRefTime *)FUN_004120b0();
        CRefTime::Millisecs(pCVar6);
        pCVar6 = (CRefTime *)FUN_004120b0();
        CRefTime::Millisecs(pCVar6);
        pCVar6 = (CRefTime *)FUN_004120b0();
        CRefTime::Millisecs(pCVar6);
        FUN_004718b0();
      }
      FUN_0040eac0();
      FUN_00412120();
      FUN_00412120();
      if ((*piVar2 != 0) && (*piVar2 != 4)) {
        puVar7 = (undefined4 *)FUN_00428970();
        *puVar7 = 0x3f800000;
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
  (**(code **)(**(int **)(unaff_EDI + 0x134) + 0xe4))();
  FUN_0046f440();
  FUN_0060a9f0();
  cVar1 = FUN_004688d0();
  while (cVar1 != '\0') {
    iVar8 = FUN_0042c6c0();
    cVar1 = FUN_0047f760();
    if (cVar1 == '\0') goto LAB_004b8b7c;
    switch(*(undefined4 *)(iVar8 + 0x60)) {
    case 0:
      param_2 = (byte *)FUN_004120c0();
      if (*(float *)(iVar8 + 0x54) != 0.0) {
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
      iVar8 = FUN_0042f000();
      if ((iVar8 != 0) && (iVar8 = FUN_0042f000(), *(char *)(iVar8 + 0x141) == '\x01')) {
        ppVar24 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
        std::pair<unsigned___int64,unsigned___int64>::
        operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                  ((pair<unsigned___int64,unsigned___int64> *)&stack0x00000ce0,ppVar24);
        ppVar24 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
        std::pair<unsigned___int64,unsigned___int64>::
        operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                  ((pair<unsigned___int64,unsigned___int64> *)&stack0x00000cc0,ppVar24);
        ppVar24 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
        std::pair<unsigned___int64,unsigned___int64>::
        operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                  ((pair<unsigned___int64,unsigned___int64> *)&stack0x00000cd0,ppVar24);
      }
      FUN_004252f0();
      FUN_0042c460();
      FUN_0040ea90();
      FUN_0042c7a0();
      FUN_00471d50();
      goto LAB_004b8b7c;
    case 2:
      iVar10 = FUN_0042f000();
      if (((iVar10 == 0) || (iVar10 = FUN_0042f000(), *(char *)(iVar10 + 0xaa8) != '\x03')) ||
         (iVar10 = FUN_0042f000(), *(char *)(iVar10 + 0xaa9) != '\b')) {
        param_2 = (byte *)FUN_004120c0();
      }
      else {
        FUN_0042f000();
        param_2 = (byte *)FUN_004ec400();
      }
      break;
    default:
      goto LAB_004b8b7c;
    case 4:
      param_2 = (byte *)FUN_004120c0();
    }
    if (param_2 != (byte *)0x0) {
      if (*(int *)(iVar8 + 0x60) != 1) {
        pCVar6 = (CRefTime *)FUN_004120b0();
        CRefTime::Millisecs(pCVar6);
        pCVar6 = (CRefTime *)FUN_004120b0();
        CRefTime::Millisecs(pCVar6);
        pCVar6 = (CRefTime *)FUN_004120b0();
        CRefTime::Millisecs(pCVar6);
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
      if (*(int *)(iVar8 + 0x60) == 2) {
        FUN_004244f0();
        FUN_004243d0();
      }
      else if (*(int *)(iVar8 + 0x60) == 4) {
        FUN_0040ea90();
        FUN_00412390();
        FUN_00424170();
      }
      else {
        fVar26 = (float10)FUN_00424860();
        if (0.0 < (float)fVar26) {
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
  (**(code **)(**(int **)(unaff_EDI + 0x134) + 0x1ac))();
  local_28 = *(byte **)(unaff_EDI + 0x134);
  (**(code **)(*(int *)local_28 + 0x170))();
  (**(code **)(**(int **)(unaff_EDI + 0x134) + 0xe4))();
  (**(code **)(**(int **)(unaff_EDI + 0x134) + 0x164))();
  (**(code **)(**(int **)(unaff_EDI + 0x134) + 0xb0))();
  (**(code **)(**(int **)(unaff_EDI + 0x134) + 0xb0))();
  (**(code **)(**(int **)(unaff_EDI + 0x134) + 0x104))();
  pbStack_68 = (byte *)0x1;
  (**(code **)(**(int **)(unaff_EDI + 0x134) + 0x114))();
  (**(code **)(**(int **)(unaff_EDI + 0x134) + 0x114))();
  FUN_0046f440();
  FUN_0060a9f0();
  cVar1 = FUN_004688d0();
  while (cVar1 != '\0') {
    iVar8 = FUN_0042c6c0();
    if ((*(int *)(iVar8 + 0x60) == 3) && (cVar1 = FUN_0047f760(), cVar1 != '\0')) {
      FUN_00450f60();
      fVar27 = *(float *)(iVar8 + 0x4c);
      FUN_0040e420();
      iVar8 = (int)(fVar27 + 1.0);
      pbVar9 = (byte *)-iVar8;
      local_28 = pbVar9;
      if (-iVar8 == iVar8 || SBORROW4((int)pbVar9,iVar8) != iVar8 * -2 < 0) {
        do {
          if ((int)pbVar9 <= iVar8) {
            FUN_00428970();
            param_2 = (byte *)FUN_00428970();
            FUN_00428970();
            pbStack_4c = pbVar9;
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
              (**(code **)(**(int **)(unaff_EDI + 0x134) + 0xb0))();
              (**(code **)(**(int **)(unaff_EDI + 0x134) + 0x14c))();
LAB_004b9253:
              pbStack_4c = pbStack_4c + 1;
            } while ((int)pbStack_4c <= iVar8);
          }
          local_28 = local_28 + 1;
        } while ((int)local_28 <= iVar8);
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
      iVar10 = FUN_00468c90();
      iVar8 = *(int *)(iVar10 + 8);
      if ((iVar8 != 0) && (0.0 < *(float *)(iVar8 + 0x16c))) {
        FUN_00428970();
        cVar1 = FUN_0047f760();
        if ((cVar1 != '\0') &&
           ((unaff_EDI[0x8006e6] == 0 || (*(int *)(iVar10 + 8) == *(int *)(unaff_EDI + 0x8006d0)))))
        {
          FUN_00423e70();
          FUN_00428970();
          FUN_00424610();
          FUN_00488e50();
          FUN_0042c460();
          FUN_0042c800();
          FUN_00450f60();
          pbStack_4c = (byte *)0xfffffffe;
          piVar2 = (int *)FUN_00428970();
          FUN_00428970();
          FUN_00428970();
          do {
            local_8 = -2;
            do {
              iVar8 = *piVar2;
              iStack_64 = 0;
              FUN_0042f7e0();
              cVar1 = FUN_0043b480();
              while (cVar1 == '\0') {
                iStack_64 = iStack_64 + 1;
                iVar8 = iVar8 + -1;
                if (100 < iStack_64) goto LAB_004b991e;
                FUN_0042f7e0();
                cVar1 = FUN_0043b480();
              }
              param_2 = (byte *)(iVar8 + 1);
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
              unaff_EDI = pbStack_68;
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
  (**(code **)(**(int **)(unaff_EDI + 0x134) + 0x104))();
  (**(code **)(**(int **)(unaff_EDI + 0x134) + 0xe4))();
  (**(code **)(**(int **)(unaff_EDI + 0x134) + 0xe4))();
  pbVar9 = *(byte **)(unaff_EDI + 0x134);
  (**(code **)(*(int *)pbVar9 + 0x164))();
  FUN_0046f440();
  FUN_0060a9f0();
  cVar1 = FUN_004688d0();
  while (cVar1 != '\0') {
    iVar8 = FUN_00468c90();
    piVar2 = (int *)(iVar8 + 8);
    if ((*piVar2 != 0) && (0.0 < *(float *)(*piVar2 + 0x16c))) {
      FUN_00428970();
      cVar1 = FUN_0047f760();
      if ((cVar1 != '\0') &&
         ((cVar1 = FUN_00444520(), cVar1 == '\0' &&
          (iVar8 = FUN_0043d1a0(), *(int *)(*piVar2 + 0x6c) <= iVar8)))) {
        FUN_00423e70();
        (**(code **)(**(int **)(unaff_EDI + 0x134) + 0xb0))();
        (**(code **)(**(int **)(unaff_EDI + 0x134) + 0xb0))();
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
        pbVar11 = (byte *)FUN_004120a0();
        pbVar12 = (byte *)FUN_004120a0();
        pbVar13 = (byte *)FUN_004120a0();
        pbVar14 = (byte *)FUN_004120a0();
        pbVar15 = (byte *)FUN_004120a0();
        pbVar16 = (byte *)FUN_004120a0();
        pbStack_34 = (byte *)0x1a04;
        puVar23 = (uint *)&stack0x00003c5c;
        do {
          fVar27 = ((1.0 - (float)local_2c / 15.0) - 0.5) * 2.0;
          fVar27 = 1.0 - fVar27 * fVar27;
          fVar27 = fVar27 * fVar27;
          FUN_004121c0();
          FUN_00411e30();
          *puVar23 = (((int)(fVar27 * 50.0) << 8 | (uint)*pbVar11) << 8 | (uint)*pbVar12) << 8 |
                     (uint)*pbVar13;
          FUN_004121c0();
          FUN_00411e30();
          puVar23[4] = (((int)(fVar27 * 200.0) << 8 | (uint)*pbVar14) << 8 | (uint)*pbVar15) << 8 |
                       (uint)*pbVar16;
          pbStack_34 = pbStack_34 + 0xc;
          local_2c = local_2c + 1;
          puVar23 = puVar23 + 8;
        } while ((int)pbStack_34 < 0x1ac4);
        (**(code **)(**(int **)(pbVar9 + 0x134) + 0x14c))();
        unaff_EDI = pbVar9;
        if (*(char *)(*piVar2 + 0x990) == '\x03') {
          iVar8 = 0;
          local_14 = 0x1b84;
          puVar23 = (uint *)&stack0x00003c74;
          do {
            fVar27 = ((1.0 - (float)iVar8 / 15.0) - 0.5) * 2.0;
            fVar27 = 1.0 - fVar27 * fVar27;
            fVar27 = fVar27 * fVar27;
            FUN_004121c0();
            FUN_00411e30();
            *puVar23 = (((int)(fVar27 * 50.0) << 8 | (uint)bRam00000004) << 8 | (uint)*pbStack_34)
                       << 8 | (uint)*local_28;
            FUN_004121c0();
            FUN_00411e30();
            puVar23[4] = (((int)(fVar27 * 255.0) << 8 | (uint)DAT_00000000) << 8 | (uint)*param_3)
                         << 8 | (uint)*param_2;
            local_14 = local_14 + 0xc;
            iVar8 = iVar8 + 1;
            puVar23 = puVar23 + 8;
          } while (local_14 < 0x1c44);
          unaff_EDI = (byte *)0x16;
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
  (**(code **)(**(int **)(unaff_EDI + 0x134) + 0xe4))();
  piVar2 = *(int **)(unaff_EDI + 0x134);
  (**(code **)(*piVar2 + 0xe4))();
  pbVar11 = *(byte **)(unaff_EDI + 0x134);
  (**(code **)(*(int *)pbVar11 + 0xe4))();
  FUN_00448280();
  FUN_0042f030();
  FUN_0060a9f0();
  cVar1 = FUN_004a8f20();
  while (cVar1 != '\0') {
    piVar17 = (int *)FUN_004abc30();
    iVar8 = *piVar17;
    EnterCriticalSection((LPCRITICAL_SECTION)(iVar8 + 0x250));
    FUN_0046f440();
    FUN_0060a9f0();
    cVar1 = FUN_004688d0();
    while (cVar1 != '\0') {
      piVar17 = (int *)FUN_0042c6c0();
      if (*(int *)(*piVar17 + 0xc) != 0) {
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
        (**(code **)(**(int **)(unaff_EDI + 0x134) + 400))();
        puStack_f0 = (undefined1 *)0x4ba385;
        (**(code **)(**(int **)(unaff_EDI + 0x134) + 0x1a0))();
        puStack_f0 = *(undefined1 **)(*piVar17 + 0x18);
        piStack_f4 = (int *)0x0;
        pbStack_f8 = *(byte **)(*piVar17 + 0x10);
        uStack_fc = 0;
        (**(code **)(**(int **)(unaff_EDI + 0x134) + 0x148))();
      }
      FUN_00468d30();
      FUN_0060a9f0();
      cVar1 = FUN_004688d0();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(iVar8 + 0x250));
    FUN_004abca0();
    FUN_0060a9f0();
    cVar1 = FUN_004a8f20();
  }
  piVar17 = *(int **)(unaff_EDI + 0x134);
  (**(code **)(*piVar17 + 0xe4))();
  (**(code **)(**(int **)(unaff_EDI + 0x134) + 0xe4))();
  FUN_00447d10();
  puStack_f0 = (undefined1 *)0x4ba47b;
  FUN_0060a9f0();
  puStack_f0 = (undefined1 *)0x4ba48f;
  FUN_0042f030();
  puStack_f0 = (undefined1 *)0x4ba49c;
  cVar1 = FUN_004688d0();
  while (cVar1 != '\0') {
    piVar18 = (int *)FUN_0042c6d0();
    if (*piVar18 != 0) {
      puStack_f0 = &stack0x00000664;
      piStack_f4 = (int *)&stack0x000006b4;
      pbStack_f8 = (byte *)piVar18[3];
      uStack_fc = uStack_88;
      FUN_004bd160();
    }
    if (piVar18[1] != 0) {
      puStack_f0 = &stack0x00000664;
      piStack_f4 = (int *)&stack0x000006b4;
      uStack_fc = 0;
      pbStack_f8 = pbVar9;
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
  pbStack_114 = unaff_EDI;
  while (cVar1 != '\0') {
    piVar18 = (int *)FUN_0042c6c0();
    iVar8 = *piVar18;
    puStack_f0 = (undefined1 *)0x0;
    piStack_f4 = (int *)0x3dcccccd;
    pbStack_f8 = &stack0x00000444;
    uStack_fc = 2;
    FUN_004120b0();
    uStack_fc = 0x4ba60d;
    pCVar6 = (CRefTime *)FUN_00412220();
    piStack_f4 = (int *)0x4ba614;
    piStack_f4 = (int *)CRefTime::Millisecs(pCVar6);
    pbStack_f8 = (byte *)0x1;
    uStack_fc = 0x4ba61e;
    pCVar6 = (CRefTime *)FUN_004120b0();
    pbStack_f8 = (byte *)0x4ba625;
    pbStack_f8 = (byte *)CRefTime::Millisecs(pCVar6);
    uStack_fc = 0;
    pCVar6 = (CRefTime *)FUN_004120b0();
    uStack_fc = 0x4ba636;
    uStack_fc = CRefTime::Millisecs(pCVar6);
    FUN_004718b0();
    if (iVar8 == *(int *)(pbStack_114 + 0x8006d0)) {
      FUN_004c0ed0();
    }
    puStack_f0 = (undefined1 *)0x3f800000;
    piStack_f4 = (int *)0x3f800000;
    pbStack_f8 = (byte *)0x3f800000;
    uStack_fc = 0x4ba6aa;
    FUN_0040eac0();
    if (0 < *(int *)(iVar8 + 0x134)) {
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
      pcVar19 = (char *)FUN_0042c6c0();
      if (*pcVar19 == '\x01') {
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
      pbStack_114 = pbVar11;
    }
    puStack_f0 = &stack0x00000bb8;
    piStack_f4 = (int *)0x4ba7da;
    FUN_00412120();
    if ((*(ushort *)(iVar8 + 0x7e) & 0x200) != 0) {
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
    if (0.0 < *(float *)(iVar8 + 0x1190)) {
      piStack_f4 = *(int **)(pbStack_114 + 0x134);
      puStack_f0 = (undefined1 *)0xa8;
      pbStack_f8 = (byte *)0x4ba89e;
      (**(code **)(*piStack_f4 + 0xe4))();
      pbStack_f8 = (byte *)(iVar8 + 0x11c8);
      uStack_fc = 0x4ba8b6;
      pbStack_f8 = (byte *)FUN_0042f000();
      pbStack_114 = (byte *)(piVar17 + 0xc0);
      uStack_fc = (uint)piVar2 >> 0x18;
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
  pbVar9 = (byte *)0x0;
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
          pbVar11 = pbVar9;
        }
        else {
          pbStack_114 = (byte *)0x3fcccccd;
          FUN_00428970();
          pbVar11 = pbVar9;
        }
      }
      else {
        pbStack_114 = (byte *)0x3ccccccd;
        FUN_00428970();
        pbVar11 = pbVar9;
      }
      FUN_0040ea90();
      pbVar9 = pbVar11;
      FUN_005fc1b0();
      FUN_0040eac0();
      FUN_0040ea90();
      FUN_00427870();
      FUN_0040eac0();
      FUN_0040eac0();
      FUN_00448170();
      FUN_0047ae10();
      if (pbVar11[0x800a40] == 0) {
        pbVar11[0x800a48] = 0;
        pbVar11[0x800a49] = 0;
        pbVar11[0x800a4a] = 0;
        pbVar11[0x800a4b] = 0;
        pbStack_114 = pbVar11;
      }
      else {
        FUN_004aba20();
        puStack_f0 = (undefined1 *)FUN_00487f60();
        FUN_004aba20();
        (**(code **)(**(int **)(pbVar11 + 0x134) + 0xe4))();
        FUN_00447d10();
        FUN_0040f0d0();
        FUN_0040f0d0();
        ppVar24 = (pair<unsigned___int64,unsigned___int64> *)&stack0x000039e8;
        iStack_cc = 0x10;
        do {
          ppVar20 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
          std::pair<unsigned___int64,unsigned___int64>::
          operator=<std::pair<unsigned___int64,unsigned___int64>,0>(ppVar24,ppVar20);
          FUN_0040ea90();
          FUN_00411e30();
          ppVar24 = ppVar24 + 0x10;
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
  ppVar24 = (pair<unsigned___int64,unsigned___int64> *)&stack0x00003b10;
  iStack_a4 = 0x10;
  pbStack_114 = pbVar9;
  do {
    ppVar20 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
    std::pair<unsigned___int64,unsigned___int64>::
    operator=<std::pair<unsigned___int64,unsigned___int64>,0>(ppVar24,ppVar20);
    FUN_0040ea90();
    FUN_00411e30();
    ppVar24 = ppVar24 + 0x10;
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
  iVar8 = FUN_0042f000();
  if (iVar8 != 0) {
    FUN_0040eac0();
    FUN_00448280();
    if (*(short *)(iVar8 + 0x8c) < 0) {
      if (*(short *)(iVar8 + 0x94) < 0) goto LAB_004bb615;
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
  local_20 = 0;
  FUN_0046f440();
  FUN_0060a9f0();
  cVar1 = FUN_004688d0();
  while (cVar1 != '\0') {
    iVar8 = FUN_00468c90();
    iVar8 = *(int *)(iVar8 + 8);
    if (iVar8 != 0) {
      iVar10 = FUN_00487f50();
      if (iVar10 <= local_20) break;
      if ((*(char *)(iVar8 + 0x60) == '\0') && (iVar8 != *(int *)(pbStack_114 + 0x8006d0))) {
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
        local_20 = local_20 + 1;
      }
    }
    FUN_00468d70();
    FUN_0060a9f0();
    cVar1 = FUN_004688d0();
  }
  FUN_0040eac0();
  FUN_00448280();
  puVar7 = (undefined4 *)FUN_00428970();
  *puVar7 = 0x43610000;
  puVar7 = (undefined4 *)FUN_00428970();
  *puVar7 = 0;
  pfVar21 = (float *)FUN_00428970();
  *pfVar21 = (float)*(int *)(pbStack_114 + 0x8006e8) * 0.002 * 5.0 * 3.0 + *pfVar21;
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


/* FUN_004bbd80 @ 004bbd80  kind=gamemisc  attributed-by=none  size=2502 */

void FUN_004bbd80(uint *param_1,undefined8 *param_2,undefined8 *param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,float param_7,float param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int local_a8;
  float local_98;
  float local_94;
  float local_88;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float local_10;
  float fStack_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar4 = 0;
  if (0 < param_9) {
    iVar2 = param_4 % 500;
    iVar3 = param_4 % 10000;
    local_a8 = 0;
    do {
      fVar5 = (float)(param_4 % 2000) / 2000.0;
      fVar6 = (fVar5 - 0.5) * 2.0;
      dVar7 = (double)((float)local_a8 + ((float)iVar2 / 500.0) * 2.0 * 3.1415927);
      libm_sse2_cos_precise();
      fVar9 = 1.0 - fVar5;
      fVar11 = ((float)dVar7 * 0.5 + 1.0) * param_8 * (1.0 - fVar6 * fVar6);
      fVar6 = ((float)iVar4 / 10.0 + (float)iVar3 * 0.0001) * 2.0 * 3.1415927;
      local_18 = (float)*param_2;
      local_18 = local_18 * fVar9;
      local_78 = (float)*param_3;
      fStack_74 = (float)((ulonglong)*param_3 >> 0x20);
      fStack_14 = (float)((ulonglong)*param_2 >> 0x20);
      fStack_14 = fStack_14 * fVar9;
      local_70 = (float)param_3[1];
      fStack_6c = (float)((ulonglong)param_3[1] >> 0x20);
      local_10 = (float)param_2[1];
      local_10 = local_10 * fVar9;
      fStack_c = (float)((ulonglong)param_2[1] >> 0x20);
      fStack_c = fStack_c * fVar9;
      _local_28 = CONCAT44(fStack_14 + fStack_74 * fVar5,local_18 + local_78 * fVar5);
      _local_20 = CONCAT44(fStack_c + fStack_6c * fVar5,local_10 + local_70 * fVar5);
      FUN_00448280(&local_28);
      dVar7 = (double)fVar6;
      libm_sse2_cos_precise();
      dVar8 = (double)fVar6;
      libm_sse2_sin_precise();
      fVar17 = fVar5 * param_7 * 2.0;
      fVar20 = (float)dVar7 * param_7 * 0.0;
      fVar9 = (float)dVar8 * param_7 * 0.0;
      fVar12 = fVar17 * 0.0;
      fVar21 = fVar20 + fVar9;
      fVar13 = (float)CONCAT44(*(int *)(in_ECX + 0x1e4) + param_1[3] +
                               (uint)CARRY4(*(uint *)(in_ECX + 0x1e0),param_1[2]),
                               *(uint *)(in_ECX + 0x1e0) + param_1[2]) * 1.5258789e-05;
      fVar14 = (float)CONCAT44(*(int *)(in_ECX + 0x1dc) + param_1[1] +
                               (uint)CARRY4(*(uint *)(in_ECX + 0x1d8),*param_1),
                               *(uint *)(in_ECX + 0x1d8) + *param_1) * 1.5258789e-05;
      fVar6 = fVar13 * 0.0;
      fVar10 = (float)*(longlong *)(param_1 + 4) * 1.5258789e-05 * 0.0;
      fVar15 = fVar14 * 0.0;
      fVar22 = fVar14 + fVar6 + fVar10 + (float)dVar7 * param_7 + fVar9 + fVar12 + 0.0;
      fVar6 = fVar15 + fVar6;
      fVar9 = fVar5 * 40.0 * 0.017453292;
      fVar18 = (float)*(longlong *)(param_1 + 4) * 1.5258789e-05 + fVar6 + fVar17 + fVar21 + 0.0;
      dVar7 = (double)fVar9;
      fVar23 = fVar15 + fVar13 + fVar10 + (float)dVar8 * param_7 + fVar20 + fVar12 + 0.0;
      fVar20 = fVar6 + fVar10 + fVar21 + fVar12 + 1.0;
      local_38 = fVar22;
      local_34 = fVar23;
      local_30 = fVar18;
      local_2c = fVar20;
      libm_sse2_cos_precise();
      fVar6 = (float)dVar7;
      dVar7 = (double)fVar9;
      libm_sse2_sin_precise();
      fVar17 = (float)dVar7;
      fVar9 = fVar6 * 0.0;
      fVar13 = fVar17 * 0.0;
      fVar21 = fVar9 + fVar13;
      fVar16 = fVar9 - fVar13;
      fVar10 = fVar5 * 30.0 * 0.017453292;
      dVar7 = (double)fVar10;
      libm_sse2_cos_precise();
      fVar12 = (float)dVar7;
      dVar7 = (double)fVar10;
      libm_sse2_sin_precise();
      fVar10 = (float)dVar7;
      fVar14 = fVar12 - fVar16 * fVar10;
      local_88 = fVar16 * fVar12 + fVar10;
      fVar24 = fVar12 * 0.0;
      fVar15 = fVar24 - (fVar9 - fVar17) * fVar10;
      local_98 = fVar10 * 0.0;
      local_94 = (fVar9 - fVar17) * fVar12 + local_98;
      fVar19 = fVar24 - (fVar6 - fVar13) * fVar10;
      fVar24 = fVar24 - fVar16 * fVar10;
      fVar25 = (fVar6 - fVar13) * fVar12 + local_98;
      local_98 = fVar16 * fVar12 + local_98;
      fVar5 = fVar5 * 10.0 * 0.017453292;
      dVar7 = (double)fVar5;
      local_48 = local_88;
      local_44 = local_94;
      local_40 = fVar25;
      local_3c = local_98;
      libm_sse2_cos_precise();
      fVar10 = (float)dVar7;
      dVar7 = (double)fVar5;
      libm_sse2_sin_precise();
      fVar5 = (float)dVar7;
      local_68 = fVar21 * fVar5 + fVar14 * fVar10;
      local_58 = fVar21 * fVar10 - fVar14 * fVar5;
      local_64 = (fVar6 + fVar13) * fVar5 + fVar15 * fVar10;
      local_54 = (fVar6 + fVar13) * fVar10 - fVar15 * fVar5;
      local_60 = (fVar17 + fVar9) * fVar5 + fVar19 * fVar10;
      local_50 = (fVar17 + fVar9) * fVar10 - fVar19 * fVar5;
      local_5c = fVar21 * fVar5 + fVar24 * fVar10;
      local_4c = fVar21 * fVar10 - fVar24 * fVar5;
      if (fVar11 != 1.0) {
        local_68 = local_68 * fVar11;
        local_58 = local_58 * fVar11;
        local_64 = local_64 * fVar11;
        local_54 = local_54 * fVar11;
        local_60 = local_60 * fVar11;
        local_50 = local_50 * fVar11;
        local_5c = local_5c * fVar11;
        local_4c = local_4c * fVar11;
        local_88 = local_88 * fVar11;
        fVar25 = fVar25 * fVar11;
        local_94 = local_94 * fVar11;
        local_98 = local_98 * fVar11;
        local_48 = local_88;
        local_44 = local_94;
        local_40 = fVar25;
        local_3c = local_98;
      }
      iVar1 = *(int *)(in_ECX + 0x800730);
      fVar6 = (float)*(int *)(iVar1 + 0x48) * -0.5;
      fVar9 = (float)*(int *)(iVar1 + 0x44) * -0.5;
      fVar5 = (float)*(int *)(iVar1 + 0x4c) * -0.5;
      local_38 = local_58 * fVar6 + local_68 * fVar9 + local_88 * fVar5 + fVar22;
      local_34 = local_54 * fVar6 + local_64 * fVar9 + local_94 * fVar5 + fVar23;
      local_30 = local_50 * fVar6 + local_60 * fVar9 + fVar25 * fVar5 + fVar18;
      local_2c = local_4c * fVar6 + local_5c * fVar9 + local_98 * fVar5 + fVar20;
      FUN_004482a0(&local_68,param_5,param_6);
      FUN_004e6df0();
      iVar4 = iVar4 + 1;
      local_a8 = local_a8 + 0xd;
      param_4 = param_4 + 0x1bb;
    } while (iVar4 < param_9);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004bc760 @ 004bc760  kind=gamemisc  attributed-by=none  size=2556 */

void FUN_004bc760(uint *param_1,undefined8 *param_2,undefined8 *param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,float param_7,float param_8,float param_9,
                 int param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int local_a8;
  float local_9c;
  float local_94;
  float local_84;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float local_10;
  float fStack_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar4 = 0;
  if (0 < param_10) {
    iVar2 = param_4 % 500;
    iVar3 = param_4 % 10000;
    local_a8 = 0;
    do {
      fVar5 = (float)(param_4 % 2000) / 2000.0;
      fVar6 = (fVar5 - 0.5) * 2.0;
      dVar8 = (double)((float)local_a8 + ((float)iVar2 / 500.0) * 2.0 * 3.1415927);
      libm_sse2_cos_precise();
      fVar13 = ((float)dVar8 * 0.5 + 1.0) * param_8 * (1.0 - fVar6 * fVar6);
      fVar6 = fVar5 * fVar5 * 4.0 * 3.1415927 * param_9 +
              ((float)iVar4 / 10.0 + (float)iVar3 * 0.0001) * 2.0 * 3.1415927;
      local_78 = (float)*param_3;
      fStack_74 = (float)((ulonglong)*param_3 >> 0x20);
      local_70 = (float)param_3[1];
      fStack_6c = (float)((ulonglong)param_3[1] >> 0x20);
      local_18 = (float)*param_2;
      fVar10 = 1.0 - fVar5;
      local_18 = local_18 * fVar10;
      fStack_14 = (float)((ulonglong)*param_2 >> 0x20);
      fStack_14 = fStack_14 * fVar10;
      local_10 = (float)param_2[1];
      local_10 = local_10 * fVar10;
      fStack_c = (float)((ulonglong)param_2[1] >> 0x20);
      fStack_c = fStack_c * fVar10;
      _local_28 = CONCAT44(fStack_14 + fStack_74 * fVar5,local_18 + local_78 * fVar5);
      _local_20 = CONCAT44(fStack_c + fStack_6c * fVar5,local_10 + local_70 * fVar5);
      FUN_00448280(&local_28);
      fVar10 = fVar5 * param_7;
      dVar8 = (double)fVar6;
      libm_sse2_cos_precise();
      dVar9 = (double)fVar6;
      libm_sse2_sin_precise();
      fVar19 = (float)dVar8 * fVar10 * 0.0;
      fVar11 = (float)dVar9 * fVar10 * 0.0;
      fVar20 = fVar19 + fVar11;
      fVar14 = fVar10 * 2.0 * 0.0;
      fVar18 = (float)CONCAT44(*(int *)(in_ECX + 0x1e4) + param_1[3] +
                               (uint)CARRY4(*(uint *)(in_ECX + 0x1e0),param_1[2]),
                               *(uint *)(in_ECX + 0x1e0) + param_1[2]) * 1.5258789e-05;
      fVar12 = (float)*(longlong *)(param_1 + 4) * 1.5258789e-05 * 0.0;
      fVar15 = (float)CONCAT44(*(int *)(in_ECX + 0x1dc) + param_1[1] +
                               (uint)CARRY4(*(uint *)(in_ECX + 0x1d8),*param_1),
                               *(uint *)(in_ECX + 0x1d8) + *param_1) * 1.5258789e-05;
      fVar6 = fVar18 * 0.0;
      fVar16 = fVar15 * 0.0;
      fVar17 = fVar16 + fVar6;
      fVar7 = fVar5 * 40.0 * 0.017453292;
      fVar23 = fVar15 + fVar6 + fVar12 + (float)dVar8 * fVar10 + fVar11 + fVar14 + 0.0;
      fVar21 = (float)*(longlong *)(param_1 + 4) * 1.5258789e-05 + fVar17 +
               fVar10 * 2.0 + fVar20 + 0.0;
      fVar18 = fVar18 + fVar16 + fVar12 + (float)dVar9 * fVar10 + fVar19 + fVar14 + 0.0;
      dVar8 = (double)fVar7;
      fVar16 = fVar17 + fVar12 + fVar20 + fVar14 + 1.0;
      local_38 = fVar23;
      local_34 = fVar18;
      local_30 = fVar21;
      local_2c = fVar16;
      libm_sse2_cos_precise();
      fVar6 = (float)dVar8;
      dVar8 = (double)fVar7;
      libm_sse2_sin_precise();
      fVar17 = (float)dVar8;
      fVar10 = fVar6 * 0.0;
      fVar12 = fVar17 * 0.0;
      fVar19 = fVar10 + fVar12;
      fVar20 = fVar10 - fVar12;
      fVar7 = fVar5 * 30.0 * 0.017453292;
      dVar8 = (double)fVar7;
      libm_sse2_cos_precise();
      fVar11 = (float)dVar8;
      dVar8 = (double)fVar7;
      libm_sse2_sin_precise();
      fVar7 = (float)dVar8;
      fVar14 = fVar11 - fVar20 * fVar7;
      fVar24 = fVar11 * 0.0;
      local_84 = fVar20 * fVar11 + fVar7;
      fVar15 = fVar24 - (fVar10 - fVar17) * fVar7;
      local_9c = fVar7 * 0.0;
      local_94 = (fVar10 - fVar17) * fVar11 + local_9c;
      fVar22 = fVar24 - (fVar6 - fVar12) * fVar7;
      fVar24 = fVar24 - fVar20 * fVar7;
      fVar25 = (fVar6 - fVar12) * fVar11 + local_9c;
      local_9c = fVar20 * fVar11 + local_9c;
      fVar5 = fVar5 * 10.0 * 0.017453292;
      dVar8 = (double)fVar5;
      local_48 = local_84;
      local_44 = local_94;
      local_40 = fVar25;
      local_3c = local_9c;
      libm_sse2_cos_precise();
      fVar7 = (float)dVar8;
      dVar8 = (double)fVar5;
      libm_sse2_sin_precise();
      fVar5 = (float)dVar8;
      local_68 = fVar19 * fVar5 + fVar14 * fVar7;
      local_58 = fVar19 * fVar7 - fVar14 * fVar5;
      local_64 = (fVar6 + fVar12) * fVar5 + fVar15 * fVar7;
      local_54 = (fVar6 + fVar12) * fVar7 - fVar15 * fVar5;
      local_60 = (fVar17 + fVar10) * fVar5 + fVar22 * fVar7;
      local_50 = (fVar17 + fVar10) * fVar7 - fVar22 * fVar5;
      local_5c = fVar19 * fVar5 + fVar24 * fVar7;
      local_4c = fVar19 * fVar7 - fVar24 * fVar5;
      if (fVar13 != 1.0) {
        local_68 = local_68 * fVar13;
        local_58 = local_58 * fVar13;
        local_64 = local_64 * fVar13;
        local_54 = local_54 * fVar13;
        local_60 = local_60 * fVar13;
        local_50 = local_50 * fVar13;
        local_5c = local_5c * fVar13;
        local_4c = local_4c * fVar13;
        local_84 = local_84 * fVar13;
        fVar25 = fVar25 * fVar13;
        local_94 = local_94 * fVar13;
        local_9c = local_9c * fVar13;
        local_48 = local_84;
        local_44 = local_94;
        local_40 = fVar25;
        local_3c = local_9c;
      }
      iVar1 = *(int *)(in_ECX + 0x800730);
      fVar6 = (float)*(int *)(iVar1 + 0x48) * -0.5;
      fVar10 = (float)*(int *)(iVar1 + 0x44) * -0.5;
      fVar5 = (float)*(int *)(iVar1 + 0x4c) * -0.5;
      local_38 = local_58 * fVar6 + local_68 * fVar10 + local_84 * fVar5 + fVar23;
      local_34 = local_54 * fVar6 + local_64 * fVar10 + local_94 * fVar5 + fVar18;
      local_30 = local_50 * fVar6 + local_60 * fVar10 + fVar25 * fVar5 + fVar21;
      local_2c = local_4c * fVar6 + local_5c * fVar10 + local_9c * fVar5 + fVar16;
      FUN_004482a0(&local_68,param_5,param_6);
      FUN_004e6df0();
      iVar4 = iVar4 + 1;
      local_a8 = local_a8 + 0xd;
      param_4 = param_4 + 0x1bb;
    } while (iVar4 < param_10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004bd160 @ 004bd160  kind=gamemisc  attributed-by=none  size=5601 */

void FUN_004bd160(int *param_1,float param_2,float param_3,float param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  int in_ECX;
  float fVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  int iStack_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  undefined4 local_f0;
  float local_ec;
  float local_e8;
  undefined4 local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float local_94;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_58;
  float local_54;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)&local_164;
  local_f0 = param_6;
  local_e4 = param_7;
  fVar1 = *(float *)(*(int *)(in_ECX + 0x800718) + *param_1 * 4);
  local_f8 = fVar1;
  if (fVar1 != 0.0) {
    FUN_00423e70();
    fVar5 = (float)*(longlong *)(param_1 + 6) * 1.5258789e-05;
    local_108 = (float)(*(uint *)(in_ECX + 0x1d8) + param_1[2]);
    iStack_104 = *(int *)(in_ECX + 0x1dc) + param_1[3] +
                 (uint)CARRY4(*(uint *)(in_ECX + 0x1d8),param_1[2]);
    fVar4 = (float)CONCAT44(*(int *)(in_ECX + 0x1e4) + param_1[5] +
                            (uint)CARRY4(*(uint *)(in_ECX + 0x1e0),param_1[4]),
                            *(uint *)(in_ECX + 0x1e0) + param_1[4]) * 1.5258789e-05;
    local_150 = (float)CONCAT44(iStack_104,local_108);
    fVar3 = local_150 * 1.5258789e-05;
    local_120 = local_e0 * fVar3 + local_d0 * fVar4 + local_c0 * fVar5 + local_b0;
    local_130 = local_dc * fVar3 + local_cc * fVar4 + local_bc * fVar5 + local_ac;
    local_134 = local_d8 * fVar3 + local_c8 * fVar4 + local_b8 * fVar5 + local_a8;
    local_13c = local_d4 * fVar3 + local_c4 * fVar4 + local_b4 * fVar5 + local_a4;
    fVar3 = (float)param_1[8];
    if (fVar3 != 1.0) {
      local_e0 = local_e0 * fVar3;
      local_dc = local_dc * fVar3;
      local_d8 = local_d8 * fVar3;
      local_d4 = local_d4 * fVar3;
      local_d0 = local_d0 * fVar3;
      local_cc = local_cc * fVar3;
      local_c8 = local_c8 * fVar3;
      local_c4 = local_c4 * fVar3;
      local_c0 = local_c0 * fVar3;
      local_b4 = local_b4 * fVar3;
      local_bc = local_bc * fVar3;
      local_b8 = local_b8 * fVar3;
    }
    local_160 = local_cc;
    local_15c = local_d4;
    local_158 = local_c4;
    local_154 = local_d0;
    local_148 = local_e0;
    local_144 = local_d8;
    local_138 = local_dc;
    local_124 = local_c8;
    local_b0 = local_120;
    local_ac = local_130;
    local_a8 = local_134;
    local_a4 = local_13c;
    if ((*(byte *)(param_1 + 0xe) & 4) != 0) {
      local_150 = 0.1 / ((float)*(int *)((int)fVar1 + 0x4c) * fVar3);
      dVar2 = -1.5707963705062866;
      local_164 = local_b4;
      local_14c = local_c0;
      local_140 = local_b8;
      local_12c = local_bc;
      libm_sse2_cos_precise();
      local_f4 = (float)dVar2;
      dVar2 = -1.5707963705062866;
      libm_sse2_sin_precise();
      local_110 = (float)dVar2;
      local_10c = local_14c * local_110;
      local_14c = local_14c * local_f4 + local_148 * local_110;
      local_10c = local_148 * local_f4 - local_10c;
      local_128 = local_138 * local_f4 - local_12c * local_110;
      local_148 = local_140 * local_110;
      local_140 = local_140 * local_f4 + local_144 * local_110;
      local_148 = local_144 * local_f4 - local_148;
      local_114 = local_15c * local_f4 - local_164 * local_110;
      local_15c = local_15c * local_110 + local_164 * local_f4;
      local_12c = local_12c * local_f4 + local_138 * local_110;
      FUN_00423e70();
      dVar2 = (double)((float)*(int *)(in_ECX + 0x8003a0) * 0.004 + (float)(param_5 * 0x1e) + 84.0);
      libm_sse2_cos_precise();
      local_164 = (float)dVar2;
      dVar2 = (double)((float)*(int *)(in_ECX + 0x8003a0) * 0.0027 + 93.0);
      libm_sse2_cos_precise();
      fVar3 = (local_164 + (float)dVar2) * local_150;
      local_fc = local_60 * local_10c + fVar3 * local_154 + local_58 * local_14c +
                 local_54 * local_120;
      local_e8 = local_4c * local_154 + local_10c * 0.0 + local_48 * local_14c +
                 local_44 * local_120;
      local_ec = local_3c * local_154 + local_40 * local_10c + local_38 * local_14c +
                 local_34 * local_120;
      local_11c = local_2c * local_154 + local_30 * local_10c + local_28 * local_14c +
                  local_24 * local_120;
      local_144 = local_60 * local_128 + fVar3 * local_160 + local_58 * local_12c +
                  local_54 * local_130;
      local_118 = local_4c * local_160 + local_128 * 0.0 + local_48 * local_12c +
                  local_44 * local_130;
      local_14c = local_3c * local_160 + local_40 * local_128 + local_38 * local_12c +
                  local_34 * local_130;
      local_100 = local_2c * local_160 + local_30 * local_128 + local_28 * local_12c +
                  local_24 * local_130;
      local_154 = local_60 * local_148 + fVar3 * local_124 + local_58 * local_140 +
                  local_54 * local_134;
      local_138 = local_4c * local_124 + local_148 * 0.0 + local_48 * local_140 +
                  local_44 * local_134;
      fVar1 = local_40 * local_148;
      local_128 = local_2c * local_124 + local_30 * local_148 + local_28 * local_140 +
                  local_24 * local_134;
      local_160 = local_60 * local_114 + fVar3 * local_158 + local_58 * local_15c +
                  local_54 * local_13c;
      local_148 = local_4c * local_158 + local_114 * 0.0 + local_48 * local_15c +
                  local_44 * local_13c;
      local_164 = local_3c * local_158 + local_40 * local_114 + local_38 * local_15c +
                  local_34 * local_13c;
      local_114 = local_2c * local_158 + local_30 * local_114 + local_28 * local_15c +
                  local_24 * local_13c;
      dVar2 = 1.5707963705062866;
      local_140 = local_3c * local_124 + fVar1 + local_38 * local_140 + local_34 * local_134;
      libm_sse2_cos_precise();
      local_10c = (float)dVar2;
      dVar2 = 1.5707963705062866;
      libm_sse2_sin_precise();
      local_108 = (float)dVar2;
      local_120 = local_fc * local_10c - local_ec * local_108;
      fVar4 = local_fc * local_108 + local_ec * local_10c;
      local_130 = local_144 * local_10c - local_14c * local_108;
      fVar1 = local_144 * local_108 + local_14c * local_10c;
      local_134 = local_154 * local_10c - local_140 * local_108;
      fVar3 = local_154 * local_108 + local_140 * local_10c;
      fVar5 = local_160 * local_108 + local_164 * local_10c;
      local_13c = local_160 * local_10c - local_164 * local_108;
      local_fc = fVar4 * local_f4 - local_110 * local_e8;
      local_158 = local_118 * local_f4 + fVar1 * local_110;
      local_144 = fVar1 * local_f4 - local_110 * local_118;
      local_15c = fVar3 * local_110 + local_138 * local_f4;
      local_154 = fVar3 * local_f4 - local_110 * local_138;
      local_118 = local_148 * local_f4 + fVar5 * local_110;
      local_160 = fVar5 * local_f4 - local_110 * local_148;
      local_110 = local_e8 * local_f4 + fVar4 * local_110;
      FUN_00423e70();
      dVar2 = (double)((float)*(int *)(in_ECX + 0x8003a0) * 0.005 + (float)(param_5 * 0x1e));
      libm_sse2_cos_precise();
      local_164 = (float)dVar2;
      dVar2 = (double)((float)*(int *)(in_ECX + 0x8003a0) * 0.003);
      libm_sse2_cos_precise();
      fVar1 = (local_164 + (float)dVar2) * local_150 * 0.8;
      local_148 = local_a0 * local_120 + local_110 * 0.0 + local_98 * local_fc +
                  local_94 * local_11c;
      fVar3 = local_8c * local_110 + fVar1 * local_120 + local_88 * local_fc + local_84 * local_11c;
      fVar4 = local_7c * local_110 + local_80 * local_120 + local_78 * local_fc +
              local_74 * local_11c;
      local_b0 = local_120 * local_70 + local_110 * local_6c + local_fc * local_68 +
                 local_11c * local_64;
      local_138 = local_a0 * local_130 + local_158 * 0.0 + local_98 * local_144 +
                  local_94 * local_100;
      local_11c = local_8c * local_158 + fVar1 * local_130 + local_88 * local_144 +
                  local_84 * local_100;
      fVar5 = local_7c * local_158 + local_80 * local_130 + local_78 * local_144 +
              local_74 * local_100;
      local_ac = local_130 * local_70 + local_158 * local_6c + local_144 * local_68 +
                 local_100 * local_64;
      local_144 = local_a0 * local_134 + local_15c * 0.0 + local_98 * local_154 +
                  local_94 * local_128;
      fVar6 = local_8c * local_15c + fVar1 * local_134 + local_88 * local_154 + local_84 * local_128
      ;
      fVar7 = local_7c * local_15c + local_80 * local_134 + local_78 * local_154 +
              local_74 * local_128;
      local_a8 = local_134 * local_70 + local_15c * local_6c + local_154 * local_68 +
                 local_128 * local_64;
      local_15c = local_a0 * local_13c + local_118 * 0.0 + local_98 * local_160 +
                  local_94 * local_114;
      local_128 = local_8c * local_118 + fVar1 * local_13c + local_88 * local_160 +
                  local_84 * local_114;
      fVar1 = local_7c * local_118 + local_80 * local_13c + local_78 * local_160 +
              local_74 * local_114;
      local_a4 = local_13c * local_70 + local_118 * local_6c + local_160 * local_68 +
                 local_114 * local_64;
      local_c0 = fVar4 * local_10c - fVar3 * local_108;
      local_154 = fVar4 * local_108 + fVar3 * local_10c;
      local_160 = fVar5 * local_108 + local_11c * local_10c;
      local_bc = fVar5 * local_10c - local_11c * local_108;
      local_b8 = fVar7 * local_10c - fVar6 * local_108;
      local_124 = fVar6 * local_10c + fVar7 * local_108;
      local_158 = fVar1 * local_108 + local_128 * local_10c;
      local_b4 = fVar1 * local_10c - local_128 * local_108;
      fVar1 = local_f8;
      local_110 = fVar3;
    }
    local_f8 = (float)param_1[9] * 0.017453292;
    dVar2 = (double)local_f8;
    local_164 = local_b4;
    local_14c = local_c0;
    local_140 = local_b8;
    local_13c = local_a4;
    local_134 = local_a8;
    local_130 = local_ac;
    local_12c = local_bc;
    local_120 = local_b0;
    libm_sse2_cos_precise();
    local_108 = (float)dVar2;
    dVar2 = (double)local_f8;
    libm_sse2_sin_precise();
    fVar3 = (float)dVar2;
    local_e0 = local_154 * fVar3 + local_148 * local_108;
    local_154 = local_154 * local_108 - fVar3 * local_148;
    local_dc = local_160 * fVar3 + local_138 * local_108;
    local_160 = local_160 * local_108 - fVar3 * local_138;
    local_d8 = local_124 * fVar3 + local_144 * local_108;
    local_c8 = local_124 * local_108 - fVar3 * local_144;
    local_d4 = local_15c * local_108 + local_158 * fVar3;
    local_158 = local_158 * local_108 - fVar3 * local_15c;
    fVar3 = (float)*(int *)((int)fVar1 + 0x44) * -0.5;
    fVar1 = (float)*(int *)((int)fVar1 + 0x48) * -0.5;
    local_b0 = local_e0 * fVar3 + local_154 * fVar1 + local_14c * 0.0 + local_120;
    local_ac = local_dc * fVar3 + local_160 * fVar1 + local_12c * 0.0 + local_130;
    local_a8 = local_d8 * fVar3 + local_c8 * fVar1 + local_140 * 0.0 + local_134;
    local_a4 = local_d4 * fVar3 + local_158 * fVar1 + local_164 * 0.0 + local_13c;
    local_d0 = local_154;
    local_cc = local_160;
    local_c4 = local_158;
    if (param_2 <= param_4 * param_4) {
      fVar1 = 1.0;
    }
    else {
      dVar2 = (double)param_2;
      libm_sse2_sqrt_precise();
      fVar1 = 1.0 - ((float)dVar2 - param_4) / (param_3 - param_4);
    }
    FUN_00447fb0(fVar1);
    FUN_004482a0(&local_e0,local_f0,local_e4);
    local_1c = *param_8;
    local_18 = param_8[1];
    local_14 = param_8[2];
    if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
      local_10 = ((float)param_1[10] / 255.0) * (float)param_8[3];
    }
    else {
      local_10 = 1.0;
    }
    FUN_00448280(&local_1c);
    FUN_004e6df0();
  }
  __security_check_cookie(local_c ^ (uint)&local_164);
  return;
}


/* FUN_004be760 @ 004be760  kind=gamemisc  attributed-by=none  size=7509 */

void FUN_004be760(float *param_1,float param_2,float param_3,float param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 *param_7)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  byte bVar8;
  int in_ECX;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float *local_f0;
  float local_ec;
  int local_e8;
  float local_e4;
  float local_e0;
  float fStack_dc;
  float local_d4;
  float local_d0;
  int local_cc;
  float local_c8;
  int iStack_c4;
  undefined4 local_bc;
  undefined4 local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)&local_140;
  local_b8 = param_5;
  local_cc = *(int *)(*(int *)(in_ECX + 0x800724) + (int)*param_1 * 4);
  local_f0 = param_1;
  local_bc = param_6;
  local_e8 = in_ECX;
  if (*param_1 == 1.4013e-44) {
    local_124 = (float)*(int *)(local_cc + 0x44);
    local_120 = param_1[9] / local_124;
    FUN_00423e70();
    pfVar1 = local_f0;
    local_13c = local_f0[6];
    local_11c = local_f0[7];
    fVar12 = (float)*(longlong *)(local_f0 + 6) * 1.5258789e-05;
    local_c8 = (float)(*(uint *)(local_e8 + 0x1d8) + (int)param_1[2]);
    iStack_c4 = *(int *)(local_e8 + 0x1dc) + (int)param_1[3] +
                (uint)CARRY4(*(uint *)(local_e8 + 0x1d8),(uint)param_1[2]);
    fVar11 = (float)CONCAT44(*(int *)(local_e8 + 0x1e4) + (int)param_1[5] +
                             (uint)CARRY4(*(uint *)(local_e8 + 0x1e0),(uint)param_1[4]),
                             *(uint *)(local_e8 + 0x1e0) + (int)param_1[4]) * 1.5258789e-05;
    fVar10 = (float)CONCAT44(iStack_c4,local_c8) * 1.5258789e-05;
    local_108 = local_70;
    local_110 = local_60;
    local_130 = local_6c;
    local_fc = local_70 * fVar10 + local_60 * fVar11 + local_50 * fVar12 + local_40;
    local_134 = local_5c;
    local_104 = local_68;
    local_10c = local_6c * fVar10 + local_5c * fVar11 + local_4c * fVar12 + local_3c;
    local_140 = local_58;
    local_128 = local_58 * fVar11 + local_68 * fVar10 + local_48 * fVar12 + local_38;
    local_138 = local_64;
    local_118 = local_54;
    local_114 = local_64 * fVar10 + local_54 * fVar11 + local_44 * fVar12 + local_34;
    if (local_120 != 1.0) {
      local_108 = local_70 * local_120;
      local_50 = local_50 * local_120;
      local_130 = local_6c * local_120;
      local_4c = local_4c * local_120;
      local_104 = local_68 * local_120;
      local_48 = local_48 * local_120;
      local_138 = local_64 * local_120;
      local_44 = local_44 * local_120;
      local_110 = local_60 * local_120;
      local_140 = local_58 * local_120;
      local_134 = local_5c * local_120;
      local_118 = local_54 * local_120;
    }
    local_120 = (float)((int)local_f0[8] * 0x5a) * 0.017453292;
    dVar9 = (double)local_120;
    local_12c = local_50;
    local_f8 = local_4c;
    local_f4 = local_48;
    local_ec = local_44;
    local_e0 = local_13c;
    fStack_dc = local_11c;
    libm_sse2_cos_precise();
    local_100 = (float)dVar9;
    dVar9 = (double)local_120;
    libm_sse2_sin_precise();
    fVar10 = (float)dVar9;
    local_70 = local_110 * fVar10;
    local_110 = local_110 * local_100 - local_108 * fVar10;
    local_70 = local_108 * local_100 + local_70;
    local_6c = local_134 * fVar10;
    local_134 = local_134 * local_100 - local_130 * fVar10;
    local_6c = local_130 * local_100 + local_6c;
    local_58 = local_140 * local_100 - local_104 * fVar10;
    local_68 = local_140 * fVar10 + local_104 * local_100;
    local_64 = local_138 * local_100 + local_118 * fVar10;
    local_124 = local_124 * -0.5;
    local_118 = local_118 * local_100 - local_138 * fVar10;
    fVar10 = (float)*(int *)(local_cc + 0x48) * -0.5;
    local_40 = local_70 * local_124 + local_110 * fVar10 + local_12c * 0.0 + local_fc;
    local_38 = local_58 * fVar10 + local_68 * local_124 + local_f4 * 0.0 + local_128;
    local_3c = local_6c * local_124 + local_134 * fVar10 + local_f8 * 0.0 + local_10c;
    local_34 = local_64 * local_124 + local_118 * fVar10 + local_ec * 0.0 + local_114;
    local_60 = local_110;
    local_5c = local_134;
    local_54 = local_118;
    uVar4 = __alldiv(local_13c,local_11c,0x10000,0);
    uVar5 = __alldiv(pfVar1[4],pfVar1[5],0x10000,0);
    uVar6 = __alldiv(local_f0[2],local_f0[3],0x10000,0);
    iVar3 = local_e8;
    pbVar7 = (byte *)FUN_0042f7e0(uVar6,uVar5,uVar4,0);
    bVar8 = pbVar7[3] & 0x1f;
    if (bVar8 == 0xd) {
      bVar8 = 0xff;
    }
    else if (((pbVar7[3] & 0x1f) == 0) || (bVar8 == 2)) {
      bVar8 = *pbVar7;
      if (bVar8 < 5) {
        bVar8 = 5;
      }
    }
    else {
      bVar8 = 0;
    }
    local_1c = *param_7;
    local_10 = ((float)bVar8 / 255.0) * (float)param_7[3];
    local_18 = param_7[1];
    local_14 = param_7[2];
    FUN_004482a0(&local_70,local_b8,local_bc);
    FUN_00448280(&local_1c);
    FUN_004e6df0();
    local_cc = *(int *)(*(int *)(iVar3 + 0x800724) + 0x2c);
  }
  pfVar1 = local_f0;
  if (local_cc != 0) {
    local_f8 = local_f0[9] / (float)*(int *)(local_cc + 0x44);
    FUN_00423e70();
    pfVar2 = local_f0;
    local_e4 = *pfVar1;
    if (local_e4 == 7.00649e-45) {
      if (*(char *)(pfVar1 + 0xc) == '\0') {
        fVar10 = (float)(int)pfVar1[0xd] * 0.001;
        if (1.0 < fVar10) {
          fVar10 = 1.0;
        }
      }
      else {
        fVar10 = 1.0 - (float)(int)pfVar1[0xd] * 0.001;
        if (fVar10 < 0.0) {
          fVar10 = 0.0;
        }
      }
      fVar10 = pfVar1[0xb] * 0.8 * fVar10;
      local_80 = local_a0 * 0.0 + local_b0 * 0.0 + local_90 * fVar10 + local_80;
      local_7c = local_9c * 0.0 + local_ac * 0.0 + local_8c * fVar10 + local_7c;
      local_78 = local_98 * 0.0 + local_a8 * 0.0 + local_88 * fVar10 + local_78;
      local_74 = local_94 * 0.0 + local_a4 * 0.0 + local_84 * fVar10 + local_74;
    }
    if (local_e4 == 9.80909e-45) {
      if (*(char *)(pfVar1 + 0xc) == '\0') {
        fVar10 = (float)(int)pfVar1[0xd] * 0.001;
        if (1.0 < fVar10) {
          fVar10 = 1.0;
        }
      }
      else {
        fVar10 = 1.0 - (float)(int)pfVar1[0xd] * 0.01;
        if (fVar10 < 0.0) {
          fVar10 = 0.0;
        }
      }
      fVar10 = -(pfVar1[0xb] * fVar10) - 1.0;
      local_80 = local_a0 * 0.0 + local_b0 * 0.0 + local_90 * fVar10 + local_80;
      local_7c = local_9c * 0.0 + local_ac * 0.0 + local_8c * fVar10 + local_7c;
      local_78 = local_98 * 0.0 + local_a8 * 0.0 + local_88 * fVar10 + local_78;
      local_74 = fVar10 * local_84 + local_94 * 0.0 + local_a4 * 0.0 + local_74;
    }
    if (local_e4 == 1.12104e-44) {
      if (*(char *)(pfVar1 + 0xc) == '\0') {
        fVar10 = (float)(int)pfVar1[0xd] * 0.001;
        if (1.0 < (float)(int)pfVar1[0xd] * 0.001) {
          fVar10 = 1.0;
        }
      }
      else {
        fVar10 = 1.0 - (float)(int)pfVar1[0xd] * 0.01;
        if (fVar10 < 0.0) {
          fVar10 = 0.0;
        }
      }
      fVar10 = pfVar1[0xb] * fVar10;
      local_80 = local_a0 * 0.0 + local_b0 * 0.0 + local_90 * fVar10 + local_80;
      local_7c = local_9c * 0.0 + local_ac * 0.0 + local_8c * fVar10 + local_7c;
      local_78 = local_98 * 0.0 + local_a8 * 0.0 + local_88 * fVar10 + local_78;
      local_74 = local_94 * 0.0 + local_a4 * 0.0 + local_84 * fVar10 + local_74;
    }
    local_140 = pfVar1[2];
    local_c8 = local_f0[6];
    local_b4 = local_f0[7];
    fVar12 = (float)*(longlong *)(local_f0 + 6) * 1.5258789e-05;
    local_e0 = (float)(*(uint *)(local_e8 + 0x1d8) + (int)local_140);
    fStack_dc = (float)(*(int *)(local_e8 + 0x1dc) + (int)pfVar1[3] +
                       (uint)CARRY4(*(uint *)(local_e8 + 0x1d8),(uint)local_140));
    fVar11 = (float)CONCAT44(*(int *)(local_e8 + 0x1e4) + (int)pfVar1[5] +
                             (uint)CARRY4(*(uint *)(local_e8 + 0x1e0),(uint)pfVar1[4]),
                             *(uint *)(local_e8 + 0x1e0) + (int)pfVar1[4]) * 1.5258789e-05;
    fVar10 = (float)CONCAT44(fStack_dc,local_e0) * 1.5258789e-05;
    local_138 = local_b0;
    local_114 = local_a0;
    local_108 = local_ac;
    local_f4 = local_a0 * fVar11 + local_b0 * fVar10 + local_90 * fVar12 + local_80;
    local_110 = local_9c;
    local_d0 = local_9c * fVar11 + local_ac * fVar10 + local_8c * fVar12 + local_7c;
    local_118 = local_98;
    local_134 = local_a8;
    local_130 = local_98 * fVar11 + local_a8 * fVar10 + local_88 * fVar12 + local_78;
    local_10c = local_94;
    local_12c = local_a4;
    local_d4 = local_94 * fVar11 + local_a4 * fVar10 + local_84 * fVar12 + local_74;
    if (local_f8 != 1.0) {
      local_138 = local_b0 * local_f8;
      local_84 = local_84 * local_f8;
      local_108 = local_ac * local_f8;
      local_114 = local_a0 * local_f8;
      local_134 = local_a8 * local_f8;
      local_110 = local_9c * local_f8;
      local_12c = local_a4 * local_f8;
      local_118 = local_98 * local_f8;
      local_10c = local_94 * local_f8;
      local_90 = local_90 * local_f8;
      local_8c = local_8c * local_f8;
      local_88 = local_88 * local_f8;
    }
    local_13c = (float)((int)local_f0[8] * 0x5a) * 0.017453292;
    dVar9 = (double)local_13c;
    local_124 = local_88;
    local_120 = local_8c;
    local_100 = local_90;
    local_fc = local_84;
    local_80 = local_f4;
    local_7c = local_d0;
    local_78 = local_130;
    local_74 = local_d4;
    libm_sse2_cos_precise();
    local_140 = (float)dVar9;
    dVar9 = (double)local_13c;
    libm_sse2_sin_precise();
    fVar10 = local_e4;
    fVar11 = (float)dVar9;
    local_104 = local_138 * local_140 + local_114 * fVar11;
    local_114 = local_114 * local_140 - local_138 * fVar11;
    local_128 = local_108 * local_140 + local_110 * fVar11;
    local_110 = local_110 * local_140 - local_108 * fVar11;
    fVar12 = local_134 * fVar11;
    local_134 = local_134 * local_140 + local_118 * fVar11;
    local_118 = local_118 * local_140 - fVar12;
    local_11c = local_12c * local_140 + local_10c * fVar11;
    local_10c = local_10c * local_140 - local_12c * fVar11;
    fVar12 = (float)*(int *)(local_cc + 0x44) * -0.5;
    local_ec = local_100 * 0.0;
    fVar11 = (float)*(int *)(local_cc + 0x48) * -0.5;
    local_12c = local_104 * fVar12 + local_114 * fVar11 + local_ec + local_f4;
    local_f4 = local_120 * 0.0;
    local_f8 = local_124 * 0.0;
    local_108 = local_128 * fVar12 + local_110 * fVar11 + local_f4 + local_d0;
    local_140 = local_fc * 0.0;
    local_78 = local_134 * fVar12 + local_118 * fVar11 + local_f8 + local_130;
    local_74 = local_11c * fVar12 + local_10c * fVar11 + local_140 + local_d4;
    local_b0 = local_104;
    local_ac = local_128;
    local_a8 = local_134;
    local_a4 = local_11c;
    local_a0 = local_114;
    local_94 = local_10c;
    if (((local_e4 == 1.4013e-45) || (local_e4 == 2.8026e-45)) ||
       (local_80 = local_12c, local_7c = local_108, local_e4 == 4.2039e-45)) {
      if (*(char *)(pfVar2 + 0xc) == '\0') {
        fVar11 = (float)(int)pfVar2[0xd] * 0.001;
        if (1.0 < fVar11) {
          fVar11 = 1.0;
        }
      }
      else {
        fVar11 = 1.0 - (float)(int)pfVar2[0xd] * 0.001;
        if (fVar11 < 0.0) {
          fVar11 = 0.0;
        }
      }
      fVar12 = (float)*(int *)(local_cc + 0x48) * 0.5;
      local_e4 = fVar11 * 90.0 * 0.017453292;
      local_d0 = local_114 * fVar12 + local_104 * 0.0 + local_ec + local_12c;
      local_13c = local_110 * fVar12 + local_128 * 0.0 + local_f4 + local_108;
      local_130 = local_118 * fVar12 + local_134 * 0.0 + local_f8 + local_78;
      dVar9 = (double)local_e4;
      local_138 = local_10c * fVar12 + local_11c * 0.0 + local_140 + local_74;
      local_9c = local_110;
      local_98 = local_118;
      local_80 = local_d0;
      local_7c = local_13c;
      local_78 = local_130;
      local_74 = local_138;
      libm_sse2_cos_precise();
      local_d4 = (float)dVar9;
      dVar9 = (double)local_e4;
      libm_sse2_sin_precise();
      fVar11 = (float)dVar9;
      local_b0 = local_104 * local_d4 + local_114 * fVar11;
      local_a0 = local_114 * local_d4 - fVar11 * local_104;
      local_ac = local_128 * local_d4 + local_110 * fVar11;
      local_110 = local_110 * local_d4 - fVar11 * local_128;
      local_a8 = local_134 * local_d4 + local_118 * fVar11;
      local_118 = local_118 * local_d4 - fVar11 * local_134;
      local_a4 = local_10c * fVar11 + local_11c * local_d4;
      local_94 = local_10c * local_d4 - fVar11 * local_11c;
      fVar11 = (float)*(int *)(local_cc + 0x48) * -0.5;
      local_80 = local_a0 * fVar11 + local_b0 * 0.0 + local_ec + local_d0;
      local_7c = local_110 * fVar11 + local_ac * 0.0 + local_f4 + local_13c;
      local_78 = local_118 * fVar11 + local_a8 * 0.0 + local_f8 + local_130;
      local_74 = local_94 * fVar11 + local_a4 * 0.0 + local_140 + local_138;
    }
    local_134 = local_a8;
    local_128 = local_ac;
    local_11c = local_a4;
    local_104 = local_b0;
    local_9c = local_110;
    local_98 = local_118;
    if (fVar10 == 1.4013e-44) {
      if (*(char *)(pfVar2 + 0xc) == '\0') {
        fVar11 = (float)(int)pfVar2[0xd] * 0.001;
        if (1.0 < fVar11) {
          fVar11 = 1.0;
        }
      }
      else {
        fVar11 = 1.0 - (float)(int)pfVar2[0xd] * 0.001;
        if (fVar11 < 0.0) {
          fVar11 = 0.0;
        }
      }
      local_d0 = local_b0 * 0.0;
      local_e4 = fVar11 * 80.0 * 0.017453292;
      local_140 = local_ac * 0.0;
      local_13c = local_a0 * 0.0 + local_d0 + local_100 * 9.0 + local_80;
      local_f4 = local_a8 * 0.0;
      local_f8 = local_110 * 0.0 + local_140 + local_120 * 9.0 + local_7c;
      local_e0 = local_a4 * 0.0;
      local_ec = local_118 * 0.0 + local_f4 + local_124 * 9.0 + local_78;
      dVar9 = (double)local_e4;
      local_138 = local_94 * 0.0 + local_e0 + local_fc * 9.0 + local_74;
      local_130 = local_78;
      local_12c = local_80;
      local_114 = local_a0;
      local_10c = local_94;
      local_108 = local_7c;
      libm_sse2_cos_precise();
      local_d4 = (float)dVar9;
      dVar9 = (double)local_e4;
      libm_sse2_sin_precise();
      fVar11 = (float)dVar9;
      local_a0 = local_100 * fVar11;
      local_100 = local_100 * local_d4 - local_114 * fVar11;
      local_a0 = local_114 * local_d4 + local_a0;
      local_9c = local_110 * local_d4 + local_120 * fVar11;
      local_120 = local_120 * local_d4 - local_110 * fVar11;
      local_98 = local_124 * fVar11;
      local_124 = local_124 * local_d4 - local_118 * fVar11;
      local_98 = local_118 * local_d4 + local_98;
      local_94 = local_fc * fVar11 + local_10c * local_d4;
      local_fc = local_fc * local_d4 - local_10c * fVar11;
      local_80 = ((local_a0 * 0.0 + local_d0) - local_100) + local_13c;
      local_7c = ((local_9c * 0.0 + local_140) - local_120) + local_f8;
      local_78 = ((local_98 * 0.0 + local_f4) - local_124) + local_ec;
      local_74 = ((local_94 * 0.0 + local_e0) - local_fc) + local_138;
      local_90 = local_100;
      local_8c = local_120;
      local_88 = local_124;
      local_84 = local_fc;
    }
    iVar3 = local_cc;
    local_138 = local_74;
    local_130 = local_78;
    local_12c = local_80;
    local_118 = local_98;
    local_114 = local_a0;
    local_110 = local_9c;
    local_10c = local_94;
    local_108 = local_7c;
    if (fVar10 == 1.26117e-44) {
      if (*(char *)(pfVar2 + 0xc) == '\0') {
        fVar10 = (float)(int)pfVar2[0xd] * 0.001;
        if (1.0 < fVar10) {
          fVar10 = 1.0;
        }
      }
      else {
        fVar10 = 1.0 - (float)(int)pfVar2[0xd] * 0.001;
        if (fVar10 < 0.0) {
          fVar10 = 0.0;
        }
      }
      local_104 = local_104 * 0.0;
      fVar11 = (float)*(int *)(local_cc + 0x48) * 0.5;
      local_128 = local_128 * 0.0;
      local_e0 = (fVar10 * 60.0 - 30.0) * 0.017453292;
      local_d4 = ((local_a0 * fVar11 + local_104) - local_100 * 0.5) + local_80;
      local_134 = local_134 * 0.0;
      local_d0 = ((local_9c * fVar11 + local_128) - local_120 * 0.5) + local_7c;
      local_11c = local_11c * 0.0;
      local_13c = ((local_98 * fVar11 + local_134) - local_124 * 0.5) + local_78;
      dVar9 = (double)local_e0;
      local_140 = ((local_94 * fVar11 + local_11c) - local_fc * 0.5) + local_74;
      local_80 = local_d4;
      local_7c = local_d0;
      local_78 = local_13c;
      local_74 = local_140;
      libm_sse2_cos_precise();
      local_e4 = (float)dVar9;
      dVar9 = (double)local_e0;
      libm_sse2_sin_precise();
      fVar10 = (float)dVar9;
      local_a0 = local_100 * fVar10 + local_114 * local_e4;
      local_100 = local_100 * local_e4 - fVar10 * local_114;
      local_9c = local_120 * fVar10 + local_110 * local_e4;
      local_120 = local_120 * local_e4 - fVar10 * local_110;
      local_98 = local_124 * fVar10 + local_118 * local_e4;
      local_124 = local_124 * local_e4 - fVar10 * local_118;
      local_94 = local_fc * fVar10 + local_10c * local_e4;
      local_fc = local_fc * local_e4;
      local_84 = local_fc - fVar10 * local_10c;
      fVar10 = (float)*(int *)(iVar3 + 0x48) * -0.5;
      local_80 = local_a0 * fVar10 + local_104 + local_100 * 0.0 + local_d4;
      local_7c = local_9c * fVar10 + local_128 + local_120 * 0.0 + local_d0;
      local_74 = local_94 * fVar10 + local_11c + local_84 * 0.0 + local_140;
      local_78 = local_98 * fVar10 + local_134 + local_124 * 0.0 + local_13c;
      local_90 = local_100;
      local_8c = local_120;
      local_88 = local_124;
    }
    uVar4 = __alldiv(local_c8,local_b4,0x10000,0);
    uVar5 = __alldiv(pfVar2[4],pfVar2[5],0x10000,0);
    uVar6 = __alldiv(local_f0[2],local_f0[3],0x10000,0);
    pbVar7 = (byte *)FUN_0042f7e0(uVar6,uVar5,uVar4,0);
    bVar8 = pbVar7[3] & 0x1f;
    if (bVar8 == 0xd) {
      bVar8 = 0xff;
    }
    else if (((pbVar7[3] & 0x1f) == 0) || (bVar8 == 2)) {
      bVar8 = *pbVar7;
      if (bVar8 < 5) {
        bVar8 = 5;
      }
    }
    else {
      bVar8 = 0;
    }
    local_2c = *param_7;
    local_28 = param_7[1];
    local_24 = param_7[2];
    local_20 = (float)param_7[3] * ((float)bVar8 / 255.0);
    if ((*local_f0 == 7.00649e-44) || (*local_f0 == 7.14662e-44)) {
      local_20 = 1.0;
    }
    if (param_2 <= param_4 * param_4) {
      fVar10 = 1.0;
    }
    else {
      dVar9 = (double)param_2;
      libm_sse2_sqrt_precise();
      fVar10 = 1.0 - ((float)dVar9 - param_4) / (param_3 - param_4);
    }
    FUN_00447fb0(fVar10);
    FUN_004482a0(&local_b0,local_b8,local_bc);
    FUN_00448280(&local_2c);
    FUN_004e6df0();
  }
  __security_check_cookie(local_c ^ (uint)&local_140);
  return;
}


/* FUN_004c1190 @ 004c1190  kind=gamemisc  attributed-by=none  size=95 */

void FUN_004c1190(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int *in_ECX;
  
  puVar1 = (undefined8 *)in_ECX[1];
  if ((param_1 < puVar1) && (puVar2 = (undefined8 *)*in_ECX, puVar2 <= param_1)) {
    if (puVar1 == (undefined8 *)in_ECX[2]) {
      FUN_004ac020(1);
    }
    param_1 = (undefined8 *)(((int)param_1 - (int)puVar2 & 0xfffffff0U) + *in_ECX);
  }
  else if (puVar1 == (undefined8 *)in_ECX[2]) {
    FUN_004ac020(1);
  }
  puVar1 = (undefined8 *)in_ECX[1];
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
  }
  in_ECX[1] = in_ECX[1] + 0x10;
  return;
}


/* FUN_004c12f0 @ 004c12f0  kind=gamemisc  attributed-by=none  size=480 */

void FUN_004c12f0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  dVar7 = (double)(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  libm_sse2_sqrt_precise();
  if (0.0001 <= ABS((float)dVar7)) {
    dVar8 = (double)(*param_2 * *param_2 + param_2[1] * param_2[1] + param_2[2] * param_2[2]);
    libm_sse2_sqrt_precise();
    if (0.0001 <= ABS((float)dVar8)) {
      fVar4 = param_2[2];
      fVar5 = param_2[1];
      fVar6 = *param_2;
      fVar9 = fVar4 * param_1[1] - fVar5 * param_1[2];
      fVar10 = fVar6 * param_1[2] - fVar4 * *param_1;
      fVar11 = fVar5 * *param_1 - fVar6 * param_1[1];
      if (0.0001 <= ABS(fVar10 * fVar10 + fVar9 * fVar9 + fVar11 * fVar11)) {
        dVar7 = (double)((fVar6 * fVar1 + fVar5 * fVar2 + fVar4 * fVar3) /
                        ((float)dVar8 * (float)dVar7));
        libm_sse2_acos_precise(fVar9,fVar10,fVar11);
        FUN_004241b0((float)dVar7 * 57.29578,fVar9,fVar10,fVar11);
      }
    }
  }
  return;
}


/* FUN_004c6350 @ 004c6350  kind=gamemisc  attributed-by=none  size=358 */

void FUN_004c6350(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  float10 fVar7;
  float fVar8;
  float local_8;
  
  if (*(int *)(in_ECX + 0x160) != 0) {
    fVar7 = (float10)FUN_0062f600();
    local_8 = (float)fVar7;
    iVar6 = *(int *)(in_ECX + 0x1a8);
    fVar8 = local_8 - 10.0;
    fVar7 = (float10)FUN_006291d0();
    iVar1 = *(int *)(in_ECX + 0x1ac);
    local_8 = 0.0;
    FUN_004871e0(((*(int **)(in_ECX + 0x160))[1] - **(int **)(in_ECX + 0x160)) / 0xc,&local_8);
    piVar2 = *(int **)(in_ECX + 0x160);
    if ((*piVar2 == piVar2[1]) ||
       (iVar3 = *(int *)(in_ECX + 0x1b4), (piVar2[1] - *piVar2) / 0xc <= iVar3)) {
      *(undefined4 *)(in_ECX + 0x1a4) = 1;
    }
    else {
      iVar4 = *piVar2;
      iVar5 = *(int *)(iVar4 + iVar3 * 0xc);
      if (iVar5 == *(int *)(iVar4 + 4 + iVar3 * 0xc)) {
        *(undefined4 *)(in_ECX + 0x1a4) = 0;
        *(undefined4 *)(*(int *)(in_ECX + 0x198) + iVar3 * 4) = 0;
        return;
      }
      iVar6 = (((*(int *)(iVar4 + 4 + iVar3 * 0xc) - iVar5) / 0x11c - 1U) /
               (uint)(int)(fVar8 / (float)(iVar6 + 5)) -
              (int)(((float)fVar7 - 40.0) / (float)(iVar1 + 5))) + 2;
      if (iVar6 < 1) {
        iVar6 = 1;
      }
      *(int *)(in_ECX + 0x1a4) = iVar6;
      if (iVar6 + -1 < *(int *)(*(int *)(in_ECX + 0x198) + iVar3 * 4)) {
        *(int *)(*(int *)(in_ECX + 0x198) + iVar3 * 4) = iVar6 + -1;
        return;
      }
    }
  }
  return;
}


/* FUN_004c64c0 @ 004c64c0  kind=gamemisc  attributed-by=none  size=333 */

void FUN_004c64c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (*(int *)(in_ECX + 0x160) != 0) {
    FUN_0062f600();
    if (((*(int *)(in_ECX + 0x178) != 0) && (*(int *)(in_ECX + 0x1a4) != 0)) &&
       (*(int *)(in_ECX + 0x198) != *(int *)(in_ECX + 0x19c))) {
      fVar4 = (float10)FUN_006291d0();
      iVar3 = (int)((float)fVar4 - 70.0) / *(int *)(in_ECX + 0x1a4);
      fVar6 = (float)iVar3;
      if (1 < *(int *)(in_ECX + 0x1a4)) {
        iVar1 = *(int *)(in_ECX + 0x1b4);
        iVar2 = *(int *)(in_ECX + 0x198);
        uVar9 = 1;
        fVar5 = (float10)FUN_0062f600(fVar6,1);
        fVar8 = (float)fVar5;
        fVar7 = (float)((((int)((float)fVar4 - 70.0) - iVar3) * *(int *)(iVar2 + iVar1 * 4)) /
                        (*(int *)(in_ECX + 0x1a4) + -1) + 0x23);
        fVar4 = (float10)FUN_0062f600(fVar7,fVar8);
        FUN_0062bb20((float)fVar4 - 28.0,fVar7,fVar8,fVar6,uVar9);
        return;
      }
      uVar10 = 1;
      fVar4 = (float10)FUN_0062f600(fVar6,1);
      fVar8 = (float)fVar4;
      uVar9 = 0x420c0000;
      fVar4 = (float10)FUN_0062f600(0x420c0000,fVar8);
      FUN_0062bb20((float)fVar4 - 28.0,uVar9,fVar8,fVar6,uVar10);
    }
  }
  return;
}


/* FUN_004c67b0 @ 004c67b0  kind=gamemisc  attributed-by=none  size=61 */

int FUN_004c67b0(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != 0) {
      FUN_0040ee70(param_1);
    }
    param_1 = param_1 + 0x118;
    param_3 = param_3 + 0x118;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_004c7be0 @ 004c7be0  kind=gamemisc  attributed-by=none  size=30 */

float10 FUN_004c7be0(void)

{
  char cVar1;
  char *in_ECX;
  
  if ((*in_ECX != '\0') &&
     ((((cVar1 = in_ECX[0xd], cVar1 == '\x01' || (cVar1 == '\v')) || (cVar1 == '\f')) ||
      (cVar1 == '\x16')))) {
    return (float10)1;
  }
  return (float10)0;
}


/* FUN_004c8720 @ 004c8720  kind=gamemisc  attributed-by=none  size=530 */

void FUN_004c8720(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int local_78;
  int local_74;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_44;
  D3D9Engine *local_40;
  tagRECT local_3c;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e842e;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  DAT_0076b1b8 = (int *)Direct3DCreate9(0x20);
  if (DAT_0076b1b8 != (int *)0x0) {
    memset(&local_78,0,0x38);
    local_68 = 0;
    local_64 = 0;
    local_78 = GetSystemMetrics(0);
    local_74 = GetSystemMetrics(1);
    local_58 = 1;
    local_60 = 1;
    local_44 = 0x80000000;
    local_54 = 1;
    local_50 = 0x4b;
    iVar3 = (**(code **)(*DAT_0076b1b8 + 0x40))
                      (DAT_0076b1b8,0,1,DAT_0076b1c0,0x44,&local_78,&DAT_0076b1b4,uVar2);
    if (iVar3 == 0) {
      local_40 = operator_new(0x2d0);
      local_8 = 0;
      if (local_40 == (D3D9Engine *)0x0) {
        DAT_0076b1cc = (D3D9Engine *)0x0;
      }
      else {
        DAT_0076b1cc = plasma::D3D9Engine::D3D9Engine(local_40,DAT_0076b1b4);
      }
      local_8 = 0xffffffff;
      FUN_0040eb60(L"c:\\windows\\fonts");
      local_8 = 1;
      FUN_00639390(local_2c);
      local_8 = 0xffffffff;
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
      local_18 = 7;
      local_1c = 0;
      cVar1 = (*DAT_0076b1cc->vftablePtr->vfunction2)();
      if (cVar1 != '\0') {
        local_40 = operator_new(0x74);
        local_8 = 2;
        if (local_40 == (D3D9Engine *)0x0) {
          DAT_0076b1bc = (CubeShader *)0x0;
        }
        else {
          DAT_0076b1bc = cube::CubeShader::CubeShader((CubeShader *)local_40,DAT_0076b1b4);
        }
        local_8 = 0xffffffff;
        cVar1 = FUN_00447e10();
        if (cVar1 != '\0') {
          GetClientRect(DAT_0076b1c0,&local_3c);
          FUN_00659d70(0,0,local_3c.right,local_3c.bottom,1);
          goto LAB_004c891c;
        }
        if (DAT_0076b1bc != (CubeShader *)0x0) {
          (*DAT_0076b1bc->vftablePtr->deleting_destructor)(DAT_0076b1bc,1);
        }
      }
      (**(code **)(*DAT_0076b1b4 + 8))(DAT_0076b1b4);
      DAT_0076b1b4 = (int *)0x0;
    }
    (**(code **)(*DAT_0076b1b8 + 8))(DAT_0076b1b8);
    DAT_0076b1b8 = (int *)0x0;
  }
LAB_004c891c:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004c9640 @ 004c9640  kind=gamemisc  attributed-by=none  size=55 */

undefined4 * FUN_004c9640(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = operator_new(0x14);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  *puVar1 = *in_ECX;
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = *in_ECX;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *in_ECX;
  }
  return puVar1;
}


/* FUN_004cb100 @ 004cb100  kind=gamemisc  attributed-by=none  size=273 */

void * __thiscall
FUN_004cb100(void *this,undefined4 *param_2,uint param_3,undefined4 param_4,int param_5)

{
  basic_streambuf<char,std::char_traits<char>_> *this_00;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f60fd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_5 != 0) {
    *(basic_ifstream<char,std::char_traits<char>_>_vbtable **)this =
         &std::basic_ifstream<char,std::char_traits<char>_>::vbtable;
    *(code **)((int)this + 0x70) = _vftable__exref;
    *(code **)((int)this + 0x70) = _vftable__exref;
    local_8 = 0;
  }
  this_00 = (basic_streambuf<char,std::char_traits<char>_> *)((int)this + 0x10);
  std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>
            (this,(basic_streambuf<char,std::char_traits<char>_> *)this_00,false);
  local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_ifstream<char,std::char_traits<char>_> */
  *(basic_ifstream<char,std::char_traits<char>_>_vftable **)((int)this + *(int *)(*(int *)this + 4))
       = &std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)(*(int *)(*(int *)this + 4) + -4 + (int)this) = *(int *)(*(int *)this + 4) + -0x70;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (this_00);
  local_8._0_1_ = 2;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_filebuf<char,std::char_traits<char>_> */
  *this_00 = (basic_streambuf<char,std::char_traits<char>_>)
             &std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  *(undefined1 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x55) = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init(this_00);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x58) = DAT_0076af5c;
  *(undefined4 *)((int)this + 0x50) = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  iVar1 = FUN_0040d240(param_2,param_3 | 1,param_4);
  if (iVar1 == 0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)(*(int *)(*(int *)this + 4) + (int)this),2
               ,false);
  }
  ExceptionList = local_10;
  return this;
}


/* FUN_004cb5d0 @ 004cb5d0  kind=gamemisc  attributed-by=none  size=147 */

undefined1
FUN_004cb5d0(int *param_1,uint *param_2,uint *param_3,char *param_4,char *param_5,char param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  char *local_c;
  undefined4 local_8;
  
  uVar4 = 0;
  if ((param_6 != '\0') || (*param_4 != *param_5)) {
    iVar1 = *param_1;
    local_c = param_5;
    local_8 = 1;
    iVar3 = FUN_004cb5a0(iVar1,*(undefined4 *)(iVar1 + 4),&local_c);
    if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    param_1[1] = param_1[1] + 1;
    *(int *)(iVar1 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    uVar2 = *param_3;
    uVar5 = 1 << (uVar2 & 0x1f);
    uVar6 = 0;
    if (0x1f < uVar2) {
      uVar6 = uVar5;
    }
    uVar5 = uVar5 ^ uVar6;
    if (0x3f < uVar2) {
      uVar6 = uVar5;
    }
    *param_2 = *param_2 | uVar5;
    param_2[1] = param_2[1] | uVar6;
    uVar4 = 1;
  }
  *param_3 = *param_3 + 1;
  return uVar4;
}


/* FUN_004cb670 @ 004cb670  kind=gamemisc  attributed-by=none  size=149 */

undefined1
FUN_004cb670(int *param_1,uint *param_2,uint *param_3,short *param_4,short *param_5,char param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  short *local_c;
  undefined4 local_8;
  
  uVar4 = 0;
  if ((param_6 != '\0') || (*param_4 != *param_5)) {
    iVar1 = *param_1;
    local_c = param_5;
    local_8 = 2;
    iVar3 = FUN_004cb5a0(iVar1,*(undefined4 *)(iVar1 + 4),&local_c);
    if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    param_1[1] = param_1[1] + 1;
    *(int *)(iVar1 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    uVar2 = *param_3;
    uVar5 = 1 << (uVar2 & 0x1f);
    uVar6 = 0;
    if (0x1f < uVar2) {
      uVar6 = uVar5;
    }
    uVar5 = uVar5 ^ uVar6;
    if (0x3f < uVar2) {
      uVar6 = uVar5;
    }
    *param_2 = *param_2 | uVar5;
    param_2[1] = param_2[1] | uVar6;
    uVar4 = 1;
  }
  *param_3 = *param_3 + 1;
  return uVar4;
}


/* FUN_004cb710 @ 004cb710  kind=gamemisc  attributed-by=none  size=147 */

undefined1
FUN_004cb710(int *param_1,uint *param_2,uint *param_3,int *param_4,int *param_5,char param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int *local_c;
  undefined4 local_8;
  
  uVar4 = 0;
  if ((param_6 != '\0') || (*param_4 != *param_5)) {
    iVar1 = *param_1;
    local_c = param_5;
    local_8 = 4;
    iVar3 = FUN_004cb5a0(iVar1,*(undefined4 *)(iVar1 + 4),&local_c);
    if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    param_1[1] = param_1[1] + 1;
    *(int *)(iVar1 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    uVar2 = *param_3;
    uVar5 = 1 << (uVar2 & 0x1f);
    uVar6 = 0;
    if (0x1f < uVar2) {
      uVar6 = uVar5;
    }
    uVar5 = uVar5 ^ uVar6;
    if (0x3f < uVar2) {
      uVar6 = uVar5;
    }
    *param_2 = *param_2 | uVar5;
    param_2[1] = param_2[1] | uVar6;
    uVar4 = 1;
  }
  *param_3 = *param_3 + 1;
  return uVar4;
}


/* FUN_004cb7b0 @ 004cb7b0  kind=gamemisc  attributed-by=none  size=154 */

undefined1
FUN_004cb7b0(int *param_1,uint *param_2,uint *param_3,float *param_4,float *param_5,char param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  float *local_c;
  undefined4 local_8;
  
  uVar4 = 0;
  if (param_6 == '\0') {
    if (*param_4 == *param_5) goto LAB_004cb841;
  }
  iVar1 = *param_1;
  local_c = param_5;
  local_8 = 4;
  iVar3 = FUN_004cb5a0(iVar1,*(undefined4 *)(iVar1 + 4),&local_c);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(iVar1 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  uVar2 = *param_3;
  uVar5 = 1 << (uVar2 & 0x1f);
  uVar6 = 0;
  if (0x1f < uVar2) {
    uVar6 = uVar5;
  }
  uVar5 = uVar5 ^ uVar6;
  if (0x3f < uVar2) {
    uVar6 = uVar5;
  }
  *param_2 = *param_2 | uVar5;
  param_2[1] = param_2[1] | uVar6;
  uVar4 = 1;
LAB_004cb841:
  *param_3 = *param_3 + 1;
  return uVar4;
}


/* FUN_004cb850 @ 004cb850  kind=gamemisc  attributed-by=none  size=212 */

undefined4
FUN_004cb850(int *param_1,uint *param_2,uint *param_3,float *param_4,float *param_5,char param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  float *local_c;
  undefined4 local_8;
  
  if ((((param_6 == '\0') && (*param_4 == *param_5)) && (param_4[1] == param_5[1])) &&
     ((param_4[2] == param_5[2] && (param_4[3] == param_5[3])))) {
    uVar4 = 0;
    if (param_4[4] == param_5[4]) goto LAB_004cb91d;
  }
  iVar1 = *param_1;
  local_c = param_5;
  local_8 = 0x14;
  iVar3 = FUN_004cb5a0(iVar1,*(undefined4 *)(iVar1 + 4),&local_c);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(iVar1 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  uVar2 = *param_3;
  uVar5 = 1 << (uVar2 & 0x1f);
  uVar6 = 0;
  if (0x1f < uVar2) {
    uVar6 = uVar5;
  }
  uVar5 = uVar5 ^ uVar6;
  if (0x3f < uVar2) {
    uVar6 = uVar5;
  }
  *param_2 = *param_2 | uVar5;
  param_2[1] = param_2[1] | uVar6;
  uVar4 = 1;
LAB_004cb91d:
  *param_3 = *param_3 + 1;
  return uVar4;
}


/* FUN_004cb930 @ 004cb930  kind=gamemisc  attributed-by=none  size=151 */

undefined1
FUN_004cb930(int *param_1,uint *param_2,uint *param_3,undefined4 param_4,undefined4 param_5,
            char param_6)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar7 = 0;
  if (param_6 == '\0') {
    cVar3 = FUN_004cc840(param_5);
    if (cVar3 == '\0') goto LAB_004cb9bc;
  }
  local_c = param_5;
  iVar1 = *param_1;
  local_8 = 0xac;
  iVar4 = FUN_004cb5a0(iVar1,*(undefined4 *)(iVar1 + 4),&local_c);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(iVar1 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  uVar2 = *param_3;
  uVar5 = 1 << (uVar2 & 0x1f);
  uVar7 = 1;
  uVar6 = 0;
  if (0x1f < uVar2) {
    uVar6 = uVar5;
  }
  uVar5 = uVar5 ^ uVar6;
  if (0x3f < uVar2) {
    uVar6 = uVar5;
  }
  *param_2 = *param_2 | uVar5;
  param_2[1] = param_2[1] | uVar6;
LAB_004cb9bc:
  *param_3 = *param_3 + 1;
  return uVar7;
}


/* FUN_004cb9d0 @ 004cb9d0  kind=gamemisc  attributed-by=none  size=151 */

undefined1
FUN_004cb9d0(int *param_1,uint *param_2,uint *param_3,undefined4 param_4,undefined4 param_5,
            char param_6)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar7 = 0;
  if (param_6 == '\0') {
    cVar3 = FUN_004ccaa0(param_5);
    if (cVar3 == '\0') goto LAB_004cba5c;
  }
  local_c = param_5;
  iVar1 = *param_1;
  local_8 = 0xe38;
  iVar4 = FUN_004cb5a0(iVar1,*(undefined4 *)(iVar1 + 4),&local_c);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(iVar1 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  uVar2 = *param_3;
  uVar5 = 1 << (uVar2 & 0x1f);
  uVar7 = 1;
  uVar6 = 0;
  if (0x1f < uVar2) {
    uVar6 = uVar5;
  }
  uVar5 = uVar5 ^ uVar6;
  if (0x3f < uVar2) {
    uVar6 = uVar5;
  }
  *param_2 = *param_2 | uVar5;
  param_2[1] = param_2[1] | uVar6;
LAB_004cba5c:
  *param_3 = *param_3 + 1;
  return uVar7;
}


/* FUN_004cba70 @ 004cba70  kind=gamemisc  attributed-by=none  size=151 */

undefined1
FUN_004cba70(int *param_1,uint *param_2,uint *param_3,undefined4 param_4,undefined4 param_5,
            char param_6)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar7 = 0;
  if (param_6 == '\0') {
    cVar3 = FUN_0042f4a0(param_5);
    if (cVar3 != '\0') goto LAB_004cbafc;
  }
  local_c = param_5;
  iVar1 = *param_1;
  local_8 = 0x118;
  iVar4 = FUN_004cb5a0(iVar1,*(undefined4 *)(iVar1 + 4),&local_c);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(iVar1 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  uVar2 = *param_3;
  uVar5 = 1 << (uVar2 & 0x1f);
  uVar7 = 1;
  uVar6 = 0;
  if (0x1f < uVar2) {
    uVar6 = uVar5;
  }
  uVar5 = uVar5 ^ uVar6;
  if (0x3f < uVar2) {
    uVar6 = uVar5;
  }
  *param_2 = *param_2 | uVar5;
  param_2[1] = param_2[1] | uVar6;
LAB_004cbafc:
  *param_3 = *param_3 + 1;
  return uVar7;
}


/* FUN_004cbb10 @ 004cbb10  kind=gamemisc  attributed-by=none  size=176 */

undefined4
FUN_004cbb10(int *param_1,uint *param_2,uint *param_3,int param_4,int *param_5,char param_6)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_5 = 0;
  if (param_6 == '\0') {
    iVar5 = 0;
    piVar2 = param_5;
    while (*(int *)((param_4 - (int)param_5) + (int)piVar2) == *piVar2) {
      iVar5 = iVar5 + 1;
      piVar2 = piVar2 + 1;
      if (2 < iVar5) {
        *param_3 = *param_3 + 1;
        return 0;
      }
    }
  }
  local_10 = param_5;
  iVar5 = *param_1;
  local_c = 0xc;
  iVar3 = FUN_004cb5a0(iVar5,*(undefined4 *)(iVar5 + 4),&local_10);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(iVar5 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar6 = 0;
  if (0x1f < uVar1) {
    uVar6 = uVar4;
  }
  uVar4 = uVar4 ^ uVar6;
  if (0x3f < uVar1) {
    uVar6 = uVar4;
  }
  *param_2 = *param_2 | uVar4;
  param_2[1] = param_2[1] | uVar6;
  *param_3 = *param_3 + 1;
  return 1;
}


/* FUN_004cbbc0 @ 004cbbc0  kind=gamemisc  attributed-by=none  size=178 */

undefined4
FUN_004cbbc0(int *param_1,uint *param_2,uint *param_3,int param_4,float *param_5,char param_6)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float *local_c;
  undefined4 local_8;
  
  if (param_6 == '\0') {
    iVar5 = 0;
    pfVar3 = param_5;
    while( true ) {
      if (*(float *)((param_4 - (int)param_5) + (int)pfVar3) != *pfVar3) break;
      iVar5 = iVar5 + 1;
      pfVar3 = pfVar3 + 1;
      if (2 < iVar5) {
        *param_3 = *param_3 + 1;
        return 0;
      }
    }
  }
  local_c = param_5;
  iVar5 = *param_1;
  local_8 = 0xc;
  iVar2 = FUN_004cb5a0(iVar5,*(undefined4 *)(iVar5 + 4),&local_c);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(iVar5 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar6 = 0;
  if (0x1f < uVar1) {
    uVar6 = uVar4;
  }
  uVar4 = uVar4 ^ uVar6;
  if (0x3f < uVar1) {
    uVar6 = uVar4;
  }
  *param_2 = *param_2 | uVar4;
  param_2[1] = param_2[1] | uVar6;
  *param_3 = *param_3 + 1;
  return 1;
}


/* FUN_004cbc80 @ 004cbc80  kind=gamemisc  attributed-by=none  size=185 */

undefined4
FUN_004cbc80(int *param_1,uint *param_2,uint *param_3,int param_4,int *param_5,char param_6)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_5 = 0;
  if (param_6 == '\0') {
    iVar5 = 0;
    piVar2 = param_5;
    while ((*(int *)((param_4 - (int)param_5) + (int)piVar2) == *piVar2 &&
           (*(int *)((param_4 - (int)param_5) + 4 + (int)piVar2) == piVar2[1]))) {
      iVar5 = iVar5 + 1;
      piVar2 = piVar2 + 2;
      if (2 < iVar5) {
        *param_3 = *param_3 + 1;
        return 0;
      }
    }
  }
  local_10 = param_5;
  iVar5 = *param_1;
  local_c = 0x18;
  iVar3 = FUN_004cb5a0(iVar5,*(undefined4 *)(iVar5 + 4),&local_10);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(iVar5 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar6 = 0;
  if (0x1f < uVar1) {
    uVar6 = uVar4;
  }
  uVar4 = uVar4 ^ uVar6;
  if (0x3f < uVar1) {
    uVar6 = uVar4;
  }
  *param_2 = *param_2 | uVar4;
  param_2[1] = param_2[1] | uVar6;
  *param_3 = *param_3 + 1;
  return 1;
}


/* FUN_004cbd40 @ 004cbd40  kind=gamemisc  attributed-by=none  size=155 */

undefined1
FUN_004cbd40(int *param_1,uint *param_2,uint *param_3,int *param_4,int *param_5,char param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  int *local_c;
  undefined4 local_8;
  
  uVar6 = 0;
  if (((param_6 != '\0') || (*param_4 != *param_5)) || (param_4[1] != param_5[1])) {
    iVar1 = *param_1;
    local_c = param_5;
    local_8 = 8;
    iVar3 = FUN_004cb5a0(iVar1,*(undefined4 *)(iVar1 + 4),&local_c);
    if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    param_1[1] = param_1[1] + 1;
    *(int *)(iVar1 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    uVar2 = *param_3;
    uVar4 = 1 << (uVar2 & 0x1f);
    uVar6 = 1;
    uVar5 = 0;
    if (0x1f < uVar2) {
      uVar5 = uVar4;
    }
    uVar4 = uVar4 ^ uVar5;
    if (0x3f < uVar2) {
      uVar5 = uVar4;
    }
    *param_2 = *param_2 | uVar4;
    param_2[1] = param_2[1] | uVar5;
  }
  *param_3 = *param_3 + 1;
  return uVar6;
}


/* FUN_004cbde0 @ 004cbde0  kind=gamemisc  attributed-by=none  size=109 */

undefined4 FUN_004cbde0(int *param_1,uint *param_2,uint *param_3,undefined1 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar4;
  }
  uVar4 = uVar4 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar3 = param_1[1] - *param_1;
    if (iVar3 < param_1[3] + 1) {
      param_1[3] = iVar3;
      *param_3 = *param_3 + 1;
      return 1;
    }
    *param_4 = *(undefined1 *)(*param_1 + param_1[3]);
    param_1[3] = param_1[3] + 1;
    *param_3 = *param_3 + 1;
    return 1;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cbe50 @ 004cbe50  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cbe50(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 1;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cbeab;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 1;
  }
LAB_004cbeab:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cbed0 @ 004cbed0  kind=gamemisc  attributed-by=none  size=112 */

undefined4 FUN_004cbed0(int *param_1,uint *param_2,uint *param_3,undefined2 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar4;
  }
  uVar4 = uVar4 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar3 = param_1[1] - *param_1;
    if (iVar3 < param_1[3] + 2) {
      param_1[3] = iVar3;
      *param_3 = *param_3 + 1;
      return 2;
    }
    *param_4 = *(undefined2 *)(*param_1 + param_1[3]);
    param_1[3] = param_1[3] + 2;
    *param_3 = *param_3 + 1;
    return 2;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cbf40 @ 004cbf40  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cbf40(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 2;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cbf9b;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 2;
  }
LAB_004cbf9b:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cbfc0 @ 004cbfc0  kind=gamemisc  attributed-by=none  size=110 */

undefined4 FUN_004cbfc0(int *param_1,uint *param_2,uint *param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar4;
  }
  uVar4 = uVar4 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar3 = param_1[1] - *param_1;
    if (iVar3 < param_1[3] + 4) {
      param_1[3] = iVar3;
      *param_3 = *param_3 + 1;
      return 4;
    }
    *param_4 = *(undefined4 *)(*param_1 + param_1[3]);
    param_1[3] = param_1[3] + 4;
    *param_3 = *param_3 + 1;
    return 4;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cc030 @ 004cc030  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cc030(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 4;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cc08b;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 4;
  }
LAB_004cc08b:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cc0b0 @ 004cc0b0  kind=gamemisc  attributed-by=none  size=132 */

undefined4 FUN_004cc0b0(int *param_1,uint *param_2,uint *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *param_3;
  uVar5 = 1 << (uVar1 & 0x1f);
  uVar4 = 0;
  if (0x1f < uVar1) {
    uVar4 = uVar5;
  }
  uVar5 = uVar5 ^ uVar4;
  if (0x3f < uVar1) {
    uVar4 = uVar5;
  }
  if ((uVar5 & *param_2) != 0 || (uVar4 & param_2[1]) != 0) {
    iVar2 = param_1[3];
    iVar3 = *param_1;
    if (param_1[1] - iVar3 < iVar2 + 0x14) {
      param_1[3] = param_1[1] - iVar3;
      *param_3 = *param_3 + 1;
      return 0x14;
    }
    *param_4 = *(undefined8 *)(iVar3 + iVar2);
    param_4[1] = *(undefined8 *)(iVar3 + 8 + iVar2);
    *(undefined4 *)(param_4 + 2) = *(undefined4 *)(iVar3 + 0x10 + iVar2);
    param_1[3] = param_1[3] + 0x14;
    *param_3 = *param_3 + 1;
    return 0x14;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cc140 @ 004cc140  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cc140(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 0x14;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cc19b;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 0x14;
  }
LAB_004cc19b:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cc1c0 @ 004cc1c0  kind=gamemisc  attributed-by=none  size=128 */

undefined4 FUN_004cc1c0(int *param_1,uint *param_2,uint *param_3,void *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar4;
  }
  uVar4 = uVar4 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar3 = param_1[1] - *param_1;
    if (iVar3 < param_1[3] + 0xac) {
      param_1[3] = iVar3;
      *param_3 = *param_3 + 1;
      return 0xac;
    }
    memcpy(param_4,(void *)(*param_1 + param_1[3]),0xac);
    param_1[3] = param_1[3] + 0xac;
    *param_3 = *param_3 + 1;
    return 0xac;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cc240 @ 004cc240  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cc240(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 0xac;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cc29b;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 0xac;
  }
LAB_004cc29b:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cc2c0 @ 004cc2c0  kind=gamemisc  attributed-by=none  size=128 */

undefined4 FUN_004cc2c0(int *param_1,uint *param_2,uint *param_3,void *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar4;
  }
  uVar4 = uVar4 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar3 = param_1[1] - *param_1;
    if (iVar3 < param_1[3] + 0xe38) {
      param_1[3] = iVar3;
      *param_3 = *param_3 + 1;
      return 0xe38;
    }
    memcpy(param_4,(void *)(*param_1 + param_1[3]),0xe38);
    param_1[3] = param_1[3] + 0xe38;
    *param_3 = *param_3 + 1;
    return 0xe38;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cc340 @ 004cc340  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cc340(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 0xe38;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cc39b;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 0xe38;
  }
LAB_004cc39b:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cc3c0 @ 004cc3c0  kind=gamemisc  attributed-by=none  size=128 */

undefined4 FUN_004cc3c0(int *param_1,uint *param_2,uint *param_3,void *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar4;
  }
  uVar4 = uVar4 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar3 = param_1[1] - *param_1;
    if (iVar3 < param_1[3] + 0x118) {
      param_1[3] = iVar3;
      *param_3 = *param_3 + 1;
      return 0x118;
    }
    memcpy(param_4,(void *)(*param_1 + param_1[3]),0x118);
    param_1[3] = param_1[3] + 0x118;
    *param_3 = *param_3 + 1;
    return 0x118;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cc440 @ 004cc440  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cc440(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 0x118;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cc49b;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 0x118;
  }
LAB_004cc49b:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cc4c0 @ 004cc4c0  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cc4c0(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 0xc;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cc51b;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 0xc;
  }
LAB_004cc51b:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cc540 @ 004cc540  kind=gamemisc  attributed-by=none  size=121 */

undefined4 FUN_004cc540(int *param_1,uint *param_2,uint *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *param_3;
  uVar5 = 1 << (uVar1 & 0x1f);
  uVar4 = 0;
  if (0x1f < uVar1) {
    uVar4 = uVar5;
  }
  uVar5 = uVar5 ^ uVar4;
  if (0x3f < uVar1) {
    uVar4 = uVar5;
  }
  if ((uVar5 & *param_2) != 0 || (uVar4 & param_2[1]) != 0) {
    iVar2 = param_1[3];
    iVar3 = *param_1;
    if (param_1[1] - iVar3 < iVar2 + 0xc) {
      param_1[3] = param_1[1] - iVar3;
      *param_3 = *param_3 + 1;
      return 0xc;
    }
    *param_4 = *(undefined8 *)(iVar3 + iVar2);
    *(undefined4 *)(param_4 + 1) = *(undefined4 *)(iVar3 + 8 + iVar2);
    param_1[3] = param_1[3] + 0xc;
    *param_3 = *param_3 + 1;
    return 0xc;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cc5c0 @ 004cc5c0  kind=gamemisc  attributed-by=none  size=136 */

undefined4 FUN_004cc5c0(int *param_1,uint *param_2,uint *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *param_3;
  uVar5 = 1 << (uVar1 & 0x1f);
  uVar4 = 0;
  if (0x1f < uVar1) {
    uVar4 = uVar5;
  }
  uVar5 = uVar5 ^ uVar4;
  if (0x3f < uVar1) {
    uVar4 = uVar5;
  }
  if ((uVar5 & *param_2) != 0 || (uVar4 & param_2[1]) != 0) {
    iVar2 = param_1[3];
    iVar3 = *param_1;
    if (param_1[1] - iVar3 < iVar2 + 0x18) {
      param_1[3] = param_1[1] - iVar3;
      *param_3 = *param_3 + 1;
      return 0x18;
    }
    *param_4 = *(undefined8 *)(iVar3 + iVar2);
    param_4[1] = *(undefined8 *)(iVar3 + 8 + iVar2);
    param_4[2] = *(undefined8 *)(iVar3 + 0x10 + iVar2);
    param_1[3] = param_1[3] + 0x18;
    *param_3 = *param_3 + 1;
    return 0x18;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cc650 @ 004cc650  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cc650(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 0x18;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cc6ab;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 0x18;
  }
LAB_004cc6ab:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cc6d0 @ 004cc6d0  kind=gamemisc  attributed-by=none  size=114 */

undefined4 FUN_004cc6d0(int *param_1,uint *param_2,uint *param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *param_3;
  uVar3 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar3;
  }
  uVar3 = uVar3 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar3;
  }
  if ((uVar3 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar4 = param_1[1] - *param_1;
    if (iVar4 < param_1[3] + 8) {
      param_1[3] = iVar4;
      *param_3 = *param_3 + 1;
      return 8;
    }
    *param_4 = *(undefined8 *)(*param_1 + param_1[3]);
    param_1[3] = param_1[3] + 8;
    *param_3 = *param_3 + 1;
    return 8;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cc750 @ 004cc750  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cc750(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 8;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cc7ab;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 8;
  }
LAB_004cc7ab:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cc800 @ 004cc800  kind=gamemisc  attributed-by=none  size=50 */

undefined1 FUN_004cc800(float *param_1)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = in_ECX - (int)param_1;
  do {
    if (*(float *)(iVar1 + (int)param_1) != *param_1) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
  } while (iVar2 < 3);
  return 0;
}


/* FUN_004cc840 @ 004cc840  kind=gamemisc  attributed-by=none  size=607 */

undefined1 FUN_004cc840(int param_1)

{
  char cVar1;
  char *in_ECX;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  pcVar2 = in_ECX;
  do {
    if (*pcVar2 != pcVar2[param_1 - (int)in_ECX]) {
      return 1;
    }
    iVar3 = iVar3 + 1;
    pcVar2 = pcVar2 + 1;
  } while (iVar3 < 2);
  pcVar2 = in_ECX + 2;
  do {
    if (*pcVar2 != pcVar2[param_1 - (int)in_ECX]) {
      return 1;
    }
    pcVar2 = pcVar2 + 1;
  } while ((int)(pcVar2 + (-2 - (int)in_ECX)) < 3);
  if ((((((((*(short *)(in_ECX + 6) == *(short *)(param_1 + 6)) &&
           (cVar1 = FUN_004cc800(param_1 + 8), cVar1 == '\0')) &&
          (*(short *)(in_ECX + 0x14) == *(short *)(param_1 + 0x14))) &&
         (((*(short *)(in_ECX + 0x16) == *(short *)(param_1 + 0x16) &&
           (*(short *)(in_ECX + 0x18) == *(short *)(param_1 + 0x18))) &&
          ((*(short *)(in_ECX + 0x1a) == *(short *)(param_1 + 0x1a) &&
           ((*(short *)(in_ECX + 0x1c) == *(short *)(param_1 + 0x1c) &&
            (*(short *)(in_ECX + 0x1e) == *(short *)(param_1 + 0x1e))))))))) &&
        (*(short *)(in_ECX + 0x20) == *(short *)(param_1 + 0x20))) &&
       (((*(short *)(in_ECX + 0x22) == *(short *)(param_1 + 0x22) &&
         (*(float *)(in_ECX + 0x24) == *(float *)(param_1 + 0x24))) &&
        (*(float *)(in_ECX + 0x28) == *(float *)(param_1 + 0x28))))) &&
      (((*(float *)(in_ECX + 0x2c) == *(float *)(param_1 + 0x2c) &&
        (*(float *)(in_ECX + 0x30) == *(float *)(param_1 + 0x30))) &&
       ((*(float *)(in_ECX + 0x34) == *(float *)(param_1 + 0x34) &&
        ((*(float *)(in_ECX + 0x38) == *(float *)(param_1 + 0x38) &&
         (*(float *)(in_ECX + 0x3c) == *(float *)(param_1 + 0x3c))))))))) &&
     (((*(float *)(in_ECX + 0x40) == *(float *)(param_1 + 0x40) &&
       (((((*(float *)(in_ECX + 0x44) == *(float *)(param_1 + 0x44) &&
           (*(float *)(in_ECX + 0x48) == *(float *)(param_1 + 0x48))) &&
          (cVar1 = FUN_004cc800(param_1 + 0x4c), cVar1 == '\0')) &&
         ((*(float *)(in_ECX + 0x58) == *(float *)(param_1 + 0x58) &&
          (*(float *)(in_ECX + 0x5c) == *(float *)(param_1 + 0x5c))))) &&
        ((*(float *)(in_ECX + 0x60) == *(float *)(param_1 + 0x60) &&
         ((cVar1 = FUN_004cc800(param_1 + 100), cVar1 == '\0' &&
          (cVar1 = FUN_004cc800(param_1 + 0x70), cVar1 == '\0')))))))) &&
      ((cVar1 = FUN_004cc800(param_1 + 0x7c), cVar1 == '\0' &&
       (((cVar1 = FUN_004cc800(param_1 + 0x88), cVar1 == '\0' &&
         (cVar1 = FUN_004cc800(param_1 + 0xa0), cVar1 == '\0')) &&
        (cVar1 = FUN_004cc800(param_1 + 0x94), cVar1 == '\0')))))))) {
    return 0;
  }
  return 1;
}


/* FUN_004ccaa0 @ 004ccaa0  kind=gamemisc  attributed-by=none  size=330 */

undefined4 FUN_004ccaa0(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_0042f4a0(param_1 + 0xd20);
  if (cVar1 != '\0') {
    cVar1 = FUN_0042f4a0(param_1 + 0xaf0);
    if (cVar1 != '\0') {
      cVar1 = FUN_0042f4a0(param_1 + 0xc08);
      if (cVar1 != '\0') {
        cVar1 = FUN_0042f4a0(param_1);
        if (cVar1 != '\0') {
          cVar1 = FUN_0042f4a0(param_1 + 0x118);
          if (cVar1 != '\0') {
            cVar1 = FUN_0042f4a0(param_1 + 0x230);
            if (cVar1 != '\0') {
              cVar1 = FUN_0042f4a0(param_1 + 0x348);
              if (cVar1 != '\0') {
                cVar1 = FUN_0042f4a0(param_1 + 0x460);
                if (cVar1 != '\0') {
                  cVar1 = FUN_0042f4a0(param_1 + 0x578);
                  if (cVar1 != '\0') {
                    cVar1 = FUN_0042f4a0(param_1 + 0x690);
                    if (cVar1 != '\0') {
                      cVar1 = FUN_0042f4a0(param_1 + 0x7a8);
                      if (cVar1 != '\0') {
                        cVar1 = FUN_0042f4a0(param_1 + 0x8c0);
                        if (cVar1 != '\0') {
                          cVar1 = FUN_0042f4a0(param_1 + 0x9d8);
                          if (cVar1 != '\0') {
                            return 0;
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
      }
    }
  }
  return 1;
}


/* FUN_004ccc30 @ 004ccc30  kind=gamemisc  attributed-by=none  size=186 */

undefined1
FUN_004ccc30(int *param_1,uint *param_2,uint *param_3,byte *param_4,byte *param_5,char param_6)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  bool bVar9;
  byte *local_c;
  undefined4 local_8;
  
  uVar8 = 0;
  pbVar5 = param_5;
  if (param_6 == '\0') {
    do {
      bVar1 = *param_4;
      bVar9 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_004ccc70:
        uVar3 = -(uint)bVar9 | 1;
        goto LAB_004ccc75;
      }
      if (bVar1 == 0) break;
      bVar1 = param_4[1];
      bVar9 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_004ccc70;
      param_4 = param_4 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_004ccc75:
    if (uVar3 == 0) goto LAB_004ccce2;
  }
  local_c = param_5;
  iVar2 = *param_1;
  local_8 = 0x10;
  iVar4 = FUN_004cb5a0(iVar2,*(undefined4 *)(iVar2 + 4),&local_c);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(iVar2 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  uVar3 = *param_3;
  uVar6 = 1 << (uVar3 & 0x1f);
  uVar8 = 1;
  uVar7 = 0;
  if (0x1f < uVar3) {
    uVar7 = uVar6;
  }
  uVar6 = uVar6 ^ uVar7;
  if (0x3f < uVar3) {
    uVar7 = uVar6;
  }
  *param_2 = *param_2 | uVar6;
  param_2[1] = param_2[1] | uVar7;
LAB_004ccce2:
  *param_3 = *param_3 + 1;
  return uVar8;
}


/* FUN_004cccf0 @ 004cccf0  kind=gamemisc  attributed-by=none  size=176 */

undefined4
FUN_004cccf0(int *param_1,uint *param_2,uint *param_3,int param_4,int *param_5,char param_6)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_5 = 0;
  if (param_6 == '\0') {
    iVar5 = 0;
    piVar2 = param_5;
    while (*(int *)((param_4 - (int)param_5) + (int)piVar2) == *piVar2) {
      iVar5 = iVar5 + 1;
      piVar2 = piVar2 + 1;
      if (10 < iVar5) {
        *param_3 = *param_3 + 1;
        return 0;
      }
    }
  }
  local_10 = param_5;
  iVar5 = *param_1;
  local_c = 0x2c;
  iVar3 = FUN_004cb5a0(iVar5,*(undefined4 *)(iVar5 + 4),&local_10);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(iVar5 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar6 = 0;
  if (0x1f < uVar1) {
    uVar6 = uVar4;
  }
  uVar4 = uVar4 ^ uVar6;
  if (0x3f < uVar1) {
    uVar6 = uVar4;
  }
  *param_2 = *param_2 | uVar4;
  param_2[1] = param_2[1] | uVar6;
  *param_3 = *param_3 + 1;
  return 1;
}


/* FUN_004ccda0 @ 004ccda0  kind=gamemisc  attributed-by=none  size=125 */

undefined4 FUN_004ccda0(int *param_1,uint *param_2,uint *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *param_3;
  uVar5 = 1 << (uVar1 & 0x1f);
  uVar4 = 0;
  if (0x1f < uVar1) {
    uVar4 = uVar5;
  }
  uVar5 = uVar5 ^ uVar4;
  if (0x3f < uVar1) {
    uVar4 = uVar5;
  }
  if ((uVar5 & *param_2) != 0 || (uVar4 & param_2[1]) != 0) {
    iVar2 = param_1[3];
    iVar3 = *param_1;
    if (param_1[1] - iVar3 < iVar2 + 0x10) {
      param_1[3] = param_1[1] - iVar3;
      *param_3 = *param_3 + 1;
      return 0x10;
    }
    *param_4 = *(undefined8 *)(iVar3 + iVar2);
    param_4[1] = *(undefined8 *)(iVar3 + 8 + iVar2);
    param_1[3] = param_1[3] + 0x10;
    *param_3 = *param_3 + 1;
    return 0x10;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cce20 @ 004cce20  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cce20(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 0x10;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cce7b;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 0x10;
  }
LAB_004cce7b:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004ccea0 @ 004ccea0  kind=gamemisc  attributed-by=none  size=119 */

undefined4 FUN_004ccea0(int *param_1,uint *param_2,uint *param_3,void *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar4;
  }
  uVar4 = uVar4 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar3 = param_1[1] - *param_1;
    if (iVar3 < param_1[3] + 0x2c) {
      param_1[3] = iVar3;
      *param_3 = *param_3 + 1;
      return 0x2c;
    }
    memcpy(param_4,(void *)(*param_1 + param_1[3]),0x2c);
    param_1[3] = param_1[3] + 0x2c;
    *param_3 = *param_3 + 1;
    return 0x2c;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004ccf20 @ 004ccf20  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004ccf20(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 0x2c;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004ccf7b;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 0x2c;
  }
LAB_004ccf7b:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cdaa0 @ 004cdaa0  kind=gamemisc  attributed-by=none  size=1726 */

void FUN_004cdaa0(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  size_t _Size;
  void *_Src;
  uint uVar1;
  int *piVar2;
  undefined8 local_24;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e8568;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 0;
  local_1c = (int *)FUN_004ccbf0(0,0);
  local_8 = 0;
  local_24 = 0;
  local_14 = 0;
  FUN_004cbc80(&local_1c,&local_24,&local_14,param_2,param_3,param_4,uVar1);
  FUN_004cbbc0(&local_1c,&local_24,&local_14,param_2 + 0x18,param_3 + 0x18,param_4);
  FUN_004cbbc0(&local_1c,&local_24,&local_14,param_2 + 0x24,param_3 + 0x24,param_4);
  FUN_004cbbc0(&local_1c,&local_24,&local_14,param_2 + 0x30,param_3 + 0x30,param_4);
  FUN_004cbbc0(&local_1c,&local_24,&local_14,param_2 + 0x3c,param_3 + 0x3c,param_4);
  FUN_004cb7b0(&local_1c,&local_24,&local_14,param_2 + 0x48,param_3 + 0x48,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x4c,param_3 + 0x4c,param_4);
  FUN_004cb5d0(&local_1c,&local_24,&local_14,param_2 + 0x50,param_3 + 0x50,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x54,param_3 + 0x54,param_4);
  FUN_004cb5d0(&local_1c,&local_24,&local_14,param_2 + 0x58,param_3 + 0x58,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x5c,param_3 + 0x5c,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x60,param_3 + 0x60,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 100,param_3 + 100,param_4);
  FUN_004cb930(&local_1c,&local_24,&local_14,param_2 + 0x68,param_3 + 0x68,param_4);
  FUN_004cb670(&local_1c,&local_24,&local_14,param_2 + 0x114,param_3 + 0x114,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x118,param_3 + 0x118,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x11c,param_3 + 0x11c,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x120,param_3 + 0x120,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x124,param_3 + 0x124,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x128,param_3 + 0x128,param_4);
  FUN_004cb7b0(&local_1c,&local_24,&local_14,param_2 + 300,param_3 + 300,param_4);
  FUN_004cb5d0(&local_1c,&local_24,&local_14,param_2 + 0x130,param_3 + 0x130,param_4);
  FUN_004cb5d0(&local_1c,&local_24,&local_14,param_2 + 0x131,param_3 + 0x131,param_4);
  FUN_004cb7b0(&local_1c,&local_24,&local_14,param_2 + 0x134,param_3 + 0x134,param_4);
  FUN_004cbbc0(&local_1c,&local_24,&local_14,param_2 + 0x138,param_3 + 0x138,param_4);
  FUN_004cbbc0(&local_1c,&local_24,&local_14,param_2 + 0x144,param_3 + 0x144,param_4);
  FUN_004cbbc0(&local_1c,&local_24,&local_14,param_2 + 0x150,param_3 + 0x150,param_4);
  FUN_004cb7b0(&local_1c,&local_24,&local_14,param_2 + 0x15c,param_3 + 0x15c,param_4);
  FUN_004cb7b0(&local_1c,&local_24,&local_14,param_2 + 0x160,param_3 + 0x160,param_4);
  FUN_004cb7b0(&local_1c,&local_24,&local_14,param_2 + 0x164,param_3 + 0x164,param_4);
  FUN_004cb850(&local_1c,&local_24,&local_14,param_2 + 0x168,param_3 + 0x168,param_4);
  FUN_004cb5d0(&local_1c,&local_24,&local_14,param_2 + 0x17c,param_3 + 0x17c,param_4);
  FUN_004cb5d0(&local_1c,&local_24,&local_14,param_2 + 0x17d,param_3 + 0x17d,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x180,param_3 + 0x180,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x184,param_3 + 0x184,param_4);
  FUN_004cbd40(&local_1c,&local_24,&local_14,param_2 + 0x188,param_3 + 0x188,param_4);
  FUN_004cbd40(&local_1c,&local_24,&local_14,param_2 + 400,param_3 + 400,param_4);
  FUN_004cb5d0(&local_1c,&local_24,&local_14,param_2 + 0x198,param_3 + 0x198,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x19c,param_3 + 0x19c,param_4);
  FUN_004cbb10(&local_1c,&local_24,&local_14,param_2 + 0x1a0,param_3 + 0x1a0,param_4);
  FUN_004cbc80(&local_1c,&local_24,&local_14,param_2 + 0x1b0,param_3 + 0x1b0,param_4);
  FUN_004cbb10(&local_1c,&local_24,&local_14,param_2 + 0x1cc,param_3 + 0x1cc,param_4);
  FUN_004cb5d0(&local_1c,&local_24,&local_14,param_2 + 0x1c8,param_3 + 0x1c8,param_4);
  FUN_004cba70(&local_1c,&local_24,&local_14,param_2 + 0x1d8,param_3 + 0x1d8,param_4);
  FUN_004cb9d0(&local_1c,&local_24,&local_14,param_2 + 0x2f0,param_3 + 0x2f0,param_4);
  FUN_004ccc30(&local_1c,&local_24,&local_14,param_2 + 0x1158,param_3 + 0x1158,param_4);
  FUN_004cccf0(&local_1c,&local_24,&local_14,param_2 + 0x1128,param_3 + 0x1128,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x1154,param_3 + 0x1154,param_4);
  FUN_005870c0((param_1[1] - *param_1) + 8);
  *(undefined8 *)(*param_1 + param_1[3]) = local_24;
  param_1[3] = param_1[3] + 8;
  piVar2 = (int *)*local_1c;
  if (piVar2 != local_1c) {
    do {
      _Size = piVar2[3];
      _Src = (void *)piVar2[2];
      FUN_005870c0((param_1[1] - *param_1) + _Size);
      memcpy((void *)(*param_1 + param_1[3]),_Src,_Size);
      param_1[3] = param_1[3] + _Size;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != local_1c);
  }
  piVar2 = (int *)*local_1c;
  *local_1c = (int)local_1c;
  local_1c[1] = (int)local_1c;
  if (piVar2 != local_1c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar2);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_1c);
}


/* FUN_004ce3f9 @ 004ce3f9  kind=gamemisc  attributed-by=none  size=102 */

void FUN_004ce3f9(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBP;
  int *unaff_ESI;
  uint unaff_EDI;
  
  cVar1 = *(char *)(unaff_EBP + -0x11);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iVar2 = *(int *)(*unaff_ESI + 4);
  *(undefined4 *)(iVar2 + 0x20 + (int)unaff_ESI) = 0;
  *(undefined4 *)(iVar2 + 0x24 + (int)unaff_ESI) = 0;
  if (cVar1 == '\0') {
    unaff_EDI = unaff_EDI | 2;
  }
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)(*(int *)(*unaff_ESI + 4) + (int)unaff_ESI),
             unaff_EDI,false);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piVar3 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x28) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x28));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* FUN_004ce6e0 @ 004ce6e0  kind=gamemisc  attributed-by=none  size=2183 */

void FUN_004ce6e0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *in_ECX;
  byte *****pppppbVar6;
  char *pcVar7;
  bool bVar8;
  basic_istream<char,std::char_traits<char>_> local_e4 [3];
  int aiStack_d8 [25];
  basic_ios<char,std::char_traits<char>_> local_74 [6];
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e8643;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  FUN_004031d0(local_e4,"options.cfg",1,0x40,1);
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  iVar1 = *(int *)((int)aiStack_d8 +
                  (local_e4[0].vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset);
  do {
    local_8._0_1_ = 0;
    if (iVar1 != 0) {
LAB_004cef4a:
      std::basic_ifstream<char,std::char_traits<char>_>::
      basic_ifstream<char,std::char_traits<char>_>
                ((basic_ifstream<char,std::char_traits<char>_> *)local_74);
      std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                (local_74);
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ****)((uint)local_2c[0] & 0xffffff00);
    local_8._0_1_ = 1;
    FUN_004ce2a0(local_e4,local_2c,uVar3);
    uVar5 = local_1c;
    if (*(int *)((int)aiStack_d8 +
                (local_e4[0].vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) != 0) {
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      goto LAB_004cef4a;
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 10;
    if (local_1c < 10) {
      uVar4 = local_1c;
    }
    if (uVar4 == 0) {
LAB_004ce806:
      if (local_1c < 10) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(local_1c != 10);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "fullscreen";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004ce7cc;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004ce800:
        uVar4 = 0;
      }
      else {
LAB_004ce7cc:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004ce800;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004ce806;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0xb;
    if (uVar5 < 0xb) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004ce8a1:
      if (uVar5 < 0xb) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar5 != 0xb);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "resolutionX";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004ce867;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004ce89b:
        uVar4 = 0;
      }
      else {
LAB_004ce867:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004ce89b;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004ce8a1;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 1);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0xb;
    if (uVar5 < 0xb) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004ce940:
      if (uVar5 < 0xb) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar5 != 0xb);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "resolutionY";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004ce906;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004ce93a:
        uVar4 = 0;
      }
      else {
LAB_004ce906:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004ce93a;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004ce940;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 2);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0xc;
    if (uVar5 < 0xc) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004ce9e0:
      if (uVar5 < 0xc) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar5 != 0xc);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "antiAliasing";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004ce9a6;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004ce9da:
        uVar4 = 0;
      }
      else {
LAB_004ce9a6:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004ce9da;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004ce9e0;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 3);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0xe;
    if (uVar5 < 0xe) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004cea80:
      if (uVar5 < 0xe) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar5 != 0xe);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "renderDistance";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004cea46;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004cea7a:
        uVar4 = 0;
      }
      else {
LAB_004cea46:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004cea7a;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004cea80;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 4);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0xb;
    if (uVar5 < 0xb) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004ceb20:
      if (uVar5 < 0xb) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar5 != 0xb);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "soundVolume";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004ceae6;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004ceb1a:
        uVar4 = 0;
      }
      else {
LAB_004ceae6:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004ceb1a;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004ceb20;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 5);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0xb;
    if (uVar5 < 0xb) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004cebc0:
      if (uVar5 < 0xb) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar5 != 0xb);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "musicVolume";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004ceb86;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004cebba:
        uVar4 = 0;
      }
      else {
LAB_004ceb86:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004cebba;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004cebc0;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 6);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0xb;
    if (uVar5 < 0xb) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004cec60:
      if (uVar5 < 0xb) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar5 != 0xb);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "cameraSpeed";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004cec26;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004cec5a:
        uVar4 = 0;
      }
      else {
LAB_004cec26:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004cec5a;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004cec60;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 7);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0x10;
    if (uVar5 < 0x10) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004ced00:
      if (uVar5 < 0x10) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar5 != 0x10);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "cameraSmoothness";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004cecc6;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004cecfa:
        uVar4 = 0;
      }
      else {
LAB_004cecc6:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004cecfa;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004ced00;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 8);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 8;
    if (uVar5 < 8) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004ceda0:
      if (uVar5 < 8) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar5 != 8);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "language";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004ced66;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004ced9a:
        uVar4 = 0;
      }
      else {
LAB_004ced66:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004ced9a;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004ceda0;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 10);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 7;
    if (uVar5 < 7) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004cee40:
      if (uVar5 < 7) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar5 != 7);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "invertY";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004cee06;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004cee3a:
        uVar4 = 0;
      }
      else {
LAB_004cee06:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004cee3a;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004cee40;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 9);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0xb;
    if (uVar5 < 0xb) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004ceee0:
      if (uVar5 < 0xb) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (uint)(uVar5 != 0xb);
      }
      bVar8 = uVar5 == 0;
    }
    else {
      pcVar7 = "minTimeStep";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004ceea6;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004ceeda:
        uVar4 = 0;
      }
      else {
LAB_004ceea6:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004ceeda;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004ceee0;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 0xb);
    }
    local_8._0_1_ = 0;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    iVar1 = *(int *)((int)aiStack_d8 +
                    (local_e4[0].vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset);
  } while( true );
}


/* FUN_004d6c40 @ 004d6c40  kind=gamemisc  attributed-by=none  size=112 */

undefined4 FUN_004d6c40(int *param_1,int *param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  for (puVar1 = param_3; puVar1 < param_3 + (param_4 >> 2); puVar1 = puVar1 + 1) {
    if (*puVar1 < 0x10000) {
      iVar3 = iVar3 + 1;
    }
    else {
      iVar3 = iVar3 + 2;
    }
  }
  *param_2 = iVar3;
  iVar2 = 1;
  if (iVar3 != 0) {
    iVar2 = iVar3;
  }
  iVar3 = (*(code *)PTR_FUN_007663ac)(iVar2 * 2);
  *param_1 = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  FUN_004d7400(param_3,param_4 >> 2,iVar3);
  return 1;
}


/* FUN_004d6cb0 @ 004d6cb0  kind=gamemisc  attributed-by=none  size=82 */

undefined4 FUN_004d6cb0(int *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004d73a0(param_3,param_4 >> 2,0);
  iVar2 = 1;
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  *param_2 = iVar1;
  iVar2 = (*(code *)PTR_FUN_007663ac)(iVar2 * 2);
  *param_1 = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  FUN_004d7460(param_3,param_4 >> 2,iVar2);
  return 1;
}


/* FUN_004d6d40 @ 004d6d40  kind=gamemisc  attributed-by=none  size=32 */

uint FUN_004d6d40(uint *param_1)

{
  uint uVar1;
  uint *in_ECX;
  
  uVar1 = *in_ECX;
  if ((uVar1 == *param_1) && (uVar1 = in_ECX[1], uVar1 == param_1[1])) {
    return uVar1 & 0xffffff00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}


/* FUN_004d6d70 @ 004d6d70  kind=gamemisc  attributed-by=none  size=27 */

void FUN_004d6d70(int *param_1)

{
  int *in_ECX;
  
  *param_1 = *in_ECX;
  param_1[1] = in_ECX[1];
  *in_ECX = *(int *)(*in_ECX + 0x18);
  return;
}


/* FUN_004d6d90 @ 004d6d90  kind=gamemisc  attributed-by=none  size=137 */

int FUN_004d6d90(uint param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  
  uVar1 = param_1;
  if (param_1 < 0x2001) {
    uVar1 = 0x8000;
  }
  iVar2 = FUN_004d6ea0(uVar1);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_1 < 0x2001) {
    *(int *)(*in_ECX + 0x10) = in_ECX[1];
    *(int *)(iVar2 + 8) = *in_ECX;
    *(int *)(*in_ECX + 0xc) = iVar2;
    in_ECX[1] = param_1;
    *in_ECX = iVar2;
    *(uint *)(iVar2 + 0x10) = param_1;
    *param_2 = iVar2;
    return iVar2 + 0x18;
  }
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(*in_ECX + 8);
  *(int *)(iVar2 + 0xc) = *in_ECX;
  *(int *)(*(int *)(*in_ECX + 8) + 0xc) = iVar2;
  *(int *)(*in_ECX + 8) = iVar2;
  *(uint *)(iVar2 + 0x10) = param_1;
  *param_2 = iVar2;
  return iVar2 + 0x18;
}


/* FUN_004d6e20 @ 004d6e20  kind=gamemisc  attributed-by=none  size=114 */

uint * FUN_004d6e20(int *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  
  uVar1 = param_1[1] + 0x20;
  if (uVar1 < 0x8001) {
    piVar3 = (int *)*param_1;
    puVar2 = (uint *)(param_1[1] + 0x18 + (int)piVar3);
    param_1[1] = uVar1;
  }
  else {
    puVar2 = (uint *)FUN_004d6d90(0x20,&param_1);
    piVar3 = param_1;
  }
  if (puVar2 != (uint *)0x0) {
    puVar2[1] = 0;
    *puVar2 = (uint)piVar3 | param_2;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    return puVar2;
  }
  return (uint *)0x0;
}


/* FUN_004d6ea0 @ 004d6ea0  kind=gamemisc  attributed-by=none  size=110 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d6ea0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  
  iVar1 = (*(code *)PTR_FUN_007663ac)(param_1 + 0x38);
  if (iVar1 == 0) {
    return;
  }
  puVar2 = (undefined4 *)(iVar1 + 0x1fU & 0xffffffe0);
  if (puVar2 == (undefined4 *)0x0) {
    iRam00000004 = iVar1;
    _DAT_00000000 = *(undefined4 *)*in_ECX;
    return;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[1] = iVar1;
  *puVar2 = *(undefined4 *)*in_ECX;
  return;
}


/* FUN_004d6f10 @ 004d6f10  kind=gamemisc  attributed-by=none  size=67 */

ushort * FUN_004d6f10(ushort *param_1,uint param_2)

{
  if (param_2 < 0x10000) {
    *param_1 = (ushort)param_2;
    return param_1 + 1;
  }
  *param_1 = (short)(param_2 - 0x10000 >> 10) + 0xd800;
  param_1[1] = ((ushort)param_2 & 0x3ff) + 0xdc00;
  return param_1 + 2;
}


/* FUN_004d6f60 @ 004d6f60  kind=gamemisc  attributed-by=none  size=128 */

int * FUN_004d6f60(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  uVar1 = param_2[1] + 0x14;
  if (uVar1 < 0x8001) {
    piVar5 = (int *)*param_2;
    piVar4 = (int *)(param_2[1] + 0x18 + (int)piVar5);
    param_2[1] = uVar1;
  }
  else {
    piVar4 = (int *)FUN_004d6d90(0x14,&param_2);
    piVar5 = param_2;
  }
  if (piVar4 != (int *)0x0) {
    *piVar4 = (int)piVar5;
    piVar4[1] = 0;
    piVar4[2] = 0;
    piVar4[3] = 0;
    piVar4[4] = 0;
    iVar2 = *(int *)(param_1 + 0x1c);
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 0xc);
      *(int **)(iVar3 + 0x10) = piVar4;
      piVar4[3] = iVar3;
      *(int **)(iVar2 + 0xc) = piVar4;
      return piVar4;
    }
    *(int **)(param_1 + 0x1c) = piVar4;
    piVar4[3] = (int)piVar4;
    return piVar4;
  }
  return (int *)0x0;
}


/* FUN_004d6fe0 @ 004d6fe0  kind=gamemisc  attributed-by=none  size=64 */

int FUN_004d6fe0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = FUN_004d6e20(param_2,param_3);
  if (iVar3 == 0) {
    return 0;
  }
  *(int *)(iVar3 + 4) = param_1;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14);
    *(int *)(iVar2 + 0x18) = iVar3;
    *(int *)(iVar3 + 0x14) = iVar2;
    *(int *)(iVar1 + 0x14) = iVar3;
    return iVar3;
  }
  *(int *)(param_1 + 0x10) = iVar3;
  *(int *)(iVar3 + 0x14) = iVar3;
  return iVar3;
}


/* FUN_004d7020 @ 004d7020  kind=gamemisc  attributed-by=none  size=128 */

void FUN_004d7020(int *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  int *in_ECX;
  ushort *puVar5;
  bool bVar6;
  
  if (*in_ECX == 0) {
    *param_1 = 0;
    return;
  }
  iVar2 = *(int *)(*in_ECX + 0x1c);
  do {
    if (iVar2 == 0) {
      *param_1 = 0;
      return;
    }
    puVar3 = *(ushort **)(iVar2 + 4);
    puVar5 = param_2;
    if (puVar3 != (ushort *)0x0) {
      do {
        uVar1 = *puVar5;
        bVar6 = uVar1 < *puVar3;
        if (uVar1 != *puVar3) {
LAB_004d7076:
          uVar4 = -(uint)bVar6 | 1;
          goto LAB_004d707b;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar5[1];
        bVar6 = uVar1 < puVar3[1];
        if (uVar1 != puVar3[1]) goto LAB_004d7076;
        puVar3 = puVar3 + 2;
        puVar5 = puVar5 + 2;
      } while (uVar1 != 0);
      uVar4 = 0;
LAB_004d707b:
      if (uVar4 == 0) {
        *param_1 = iVar2;
        return;
      }
    }
    iVar2 = *(int *)(iVar2 + 0x10);
  } while( true );
}


/* FUN_004d70a0 @ 004d70a0  kind=gamemisc  attributed-by=none  size=38 */

void FUN_004d70a0(undefined4 *param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  if (iVar1 != 0) {
    *param_1 = *(undefined4 *)(iVar1 + 0x10);
    param_1[1] = iVar1;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


/* FUN_004d70d0 @ 004d70d0  kind=gamemisc  attributed-by=none  size=128 */

void FUN_004d70d0(int *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  int *in_ECX;
  ushort *puVar5;
  bool bVar6;
  
  if (*in_ECX == 0) {
    *param_1 = 0;
    return;
  }
  iVar2 = *(int *)(*in_ECX + 0x10);
  do {
    if (iVar2 == 0) {
      *param_1 = 0;
      return;
    }
    puVar3 = *(ushort **)(iVar2 + 8);
    puVar5 = param_2;
    if (puVar3 != (ushort *)0x0) {
      do {
        uVar1 = *puVar5;
        bVar6 = uVar1 < *puVar3;
        if (uVar1 != *puVar3) {
LAB_004d7126:
          uVar4 = -(uint)bVar6 | 1;
          goto LAB_004d712b;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar5[1];
        bVar6 = uVar1 < puVar3[1];
        if (uVar1 != puVar3[1]) goto LAB_004d7126;
        puVar3 = puVar3 + 2;
        puVar5 = puVar5 + 2;
      } while (uVar1 != 0);
      uVar4 = 0;
LAB_004d712b:
      if (uVar4 == 0) {
        *param_1 = iVar2;
        return;
      }
    }
    iVar2 = *(int *)(iVar2 + 0x18);
  } while( true );
}


/* FUN_004d7150 @ 004d7150  kind=gamemisc  attributed-by=none  size=54 */

undefined ** FUN_004d7150(void)

{
  uint *puVar1;
  int *in_ECX;
  
  if (*in_ECX != 0) {
    for (puVar1 = *(uint **)(*in_ECX + 0x10); puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[6]) {
      if ((puVar1[3] != 0) && (((*puVar1 & 7) == 3 || ((*puVar1 & 7) == 4)))) {
        return (undefined **)puVar1[3];
      }
    }
  }
  return &PTR_006fccac;
}


/* FUN_004d7190 @ 004d7190  kind=gamemisc  attributed-by=none  size=175 */

uint FUN_004d7190(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  
  if (param_3 == 2) {
    uVar1 = FUN_004d79f0(param_1,param_2,param_4,param_5,param_6);
    return uVar1;
  }
  if (param_3 == 3) {
    uVar1 = FUN_004d7240(param_1,param_2,param_4,param_5,param_6);
    return uVar1;
  }
  if (param_3 != 5) {
    if (param_3 == 1) {
      uVar1 = FUN_004d72a0(param_1,param_2,param_4,param_5);
      return uVar1;
    }
    if (param_3 == 6) {
      uVar1 = FUN_004d6cb0(param_1,param_2,param_4,param_5,0);
      return uVar1;
    }
    if (param_3 != 5) {
      return param_3 & 0xffffff00;
    }
  }
  param_3 = param_3 & 0xffffff00;
  uVar1 = FUN_004d6c40(param_1,param_2,param_4,param_5,param_3);
  return uVar1;
}


/* FUN_004d72a0 @ 004d72a0  kind=gamemisc  attributed-by=none  size=77 */

undefined4 FUN_004d72a0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004d74f0(param_3,param_4,0);
  iVar2 = 1;
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  *param_2 = iVar1;
  iVar2 = (*(code *)PTR_FUN_007663ac)(iVar2 * 2);
  *param_1 = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  FUN_004d75f0(param_3,param_4,iVar2);
  return 1;
}


/* FUN_004d72f0 @ 004d72f0  kind=gamemisc  attributed-by=none  size=174 */

void FUN_004d72f0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  FUN_004d77d0();
  puVar5 = (undefined4 *)((int)in_ECX + 0x27U & 0xffffffe0);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
  }
  puVar3 = puVar5 + 6;
  puVar5[4] = 0x8000;
  if (puVar3 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    *puVar3 = (uint)puVar5 | 1;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
  }
  *in_ECX = (int)puVar3;
  puVar3[5] = (uint)puVar3;
  iVar1 = *in_ECX;
  uVar2 = puVar5[4];
  puVar4 = (undefined4 *)(iVar1 + 0x20);
  *puVar4 = puVar5;
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  *puVar5 = puVar4;
  return;
}


/* FUN_004d73a0 @ 004d73a0  kind=gamemisc  attributed-by=none  size=94 */

int FUN_004d73a0(uint *param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = param_1 + param_2;
  if (puVar1 <= param_1) {
    return param_3;
  }
  do {
    uVar2 = *param_1;
    if (((uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8 | (uVar2 & 0xff00 | uVar2 << 0x10) << 8) < 0x10000)
    {
      param_3 = param_3 + 1;
    }
    else {
      param_3 = param_3 + 2;
    }
    param_1 = param_1 + 1;
  } while (param_1 < puVar1);
  return param_3;
}


/* FUN_004d7400 @ 004d7400  kind=gamemisc  attributed-by=none  size=92 */

ushort * FUN_004d7400(uint *param_1,int param_2,ushort *param_3)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = param_1 + param_2;
  if (puVar1 <= param_1) {
    return param_3;
  }
  do {
    uVar2 = *param_1;
    if (uVar2 < 0x10000) {
      *param_3 = (ushort)uVar2;
      param_3 = param_3 + 1;
    }
    else {
      *param_3 = (short)(uVar2 - 0x10000 >> 10) + 0xd800;
      param_3[1] = ((ushort)uVar2 & 0x3ff) + 0xdc00;
      param_3 = param_3 + 2;
    }
    param_1 = param_1 + 1;
  } while (param_1 < puVar1);
  return param_3;
}


/* FUN_004d7460 @ 004d7460  kind=gamemisc  attributed-by=none  size=130 */

ushort * FUN_004d7460(uint *param_1,int param_2,ushort *param_3)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = param_1 + param_2;
  if (puVar1 <= param_1) {
    return param_3;
  }
  do {
    uVar4 = *param_1;
    uVar3 = uVar4 & 0xff0000 | uVar4 >> 0x10;
    uVar4 = uVar3 >> 8 | (uVar4 & 0xff00 | uVar4 << 0x10) << 8;
    uVar2 = (ushort)(uVar3 >> 8);
    if (uVar4 < 0x10000) {
      *param_3 = uVar2;
      param_3 = param_3 + 1;
    }
    else {
      *param_3 = (short)(uVar4 - 0x10000 >> 10) + 0xd800;
      param_3[1] = (uVar2 & 0x3ff) + 0xdc00;
      param_3 = param_3 + 2;
    }
    param_1 = param_1 + 1;
  } while (param_1 < puVar1);
  return param_3;
}


/* FUN_004d74f0 @ 004d74f0  kind=gamemisc  attributed-by=none  size=247 */

int FUN_004d74f0(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return param_3;
  }
  do {
    if ((byte)*param_1 < 0x80) {
      param_1 = (uint *)((int)param_1 + 1);
      param_3 = param_3 + 1;
      param_2 = param_2 - 1;
      if (((uint)param_1 & 3) == 0) {
        for (; (3 < param_2 && ((*param_1 & 0x80808080) == 0)); param_1 = param_1 + 1) {
          param_2 = param_2 - 4;
          param_3 = param_3 + 4;
        }
      }
    }
    else {
      uVar1 = (uint)(byte)*param_1;
      if (((uVar1 - 0xc0 < 0x20) && (1 < param_2)) && ((*param_1 & 0xc000) == 0x8000)) {
        param_3 = param_3 + 1;
        param_1 = (uint *)((int)param_1 + 2);
        param_2 = param_2 - 2;
      }
      else if (((uVar1 - 0xe0 < 0x10) && (2 < param_2)) &&
              (((*param_1 & 0xc000) == 0x8000 && ((*param_1 & 0xc00000) == 0x800000)))) {
        param_3 = param_3 + 1;
        param_1 = (uint *)((int)param_1 + 3);
        param_2 = param_2 - 3;
      }
      else if (((uVar1 - 0xf0 < 8) && (3 < param_2)) &&
              (((*param_1 & 0xc000) == 0x8000 &&
               (((*param_1 & 0xc00000) == 0x800000 && ((*param_1 & 0xc0000000) == 0x80000000)))))) {
        param_3 = param_3 + 2;
        param_1 = param_1 + 1;
        param_2 = param_2 - 4;
      }
      else {
        param_1 = (uint *)((int)param_1 + 1);
        param_2 = param_2 - 1;
      }
    }
  } while (param_2 != 0);
  return param_3;
}


/* FUN_004d75f0 @ 004d75f0  kind=gamemisc  attributed-by=none  size=464 */

void FUN_004d75f0(uint *param_1,uint param_2,ushort *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            if (param_2 == 0) {
              return;
            }
            bVar1 = (byte)*param_1;
            if (0x7f < bVar1) break;
            *param_3 = (ushort)bVar1;
            param_1 = (uint *)((int)param_1 + 1);
            param_3 = param_3 + 1;
            param_2 = param_2 - 1;
            if (((uint)param_1 & 3) == 0) {
              for (; (3 < param_2 && ((*param_1 & 0x80808080) == 0)); param_1 = param_1 + 1) {
                *param_3 = (ushort)(byte)*param_1;
                param_3[1] = (ushort)*(byte *)((int)param_1 + 1);
                param_3[2] = (ushort)*(byte *)((int)param_1 + 2);
                param_3[3] = (ushort)*(byte *)((int)param_1 + 3);
                param_2 = param_2 - 4;
                param_3 = param_3 + 4;
              }
            }
          }
          uVar3 = (uint)bVar1;
          if (((0x1f < uVar3 - 0xc0) || (param_2 < 2)) ||
             (uVar2 = CONCAT11(*(byte *)((int)param_1 + 1),*(byte *)((int)param_1 + 1)) & 0xffffffc0
             , (char)uVar2 != -0x80)) break;
          *param_3 = (bVar1 & 0x3f) << 6 | (ushort)((byte)(uVar2 >> 8) & 0x3f);
          param_1 = (uint *)((int)param_1 + 2);
          param_2 = param_2 - 2;
          param_3 = param_3 + 1;
        }
        if (((0xf < uVar3 - 0xe0) || (param_2 < 3)) ||
           ((uVar2 = CONCAT11(*(byte *)((int)param_1 + 1),*(byte *)((int)param_1 + 1)) & 0xffffffc0,
            (char)uVar2 != -0x80 ||
            (uVar2 = CONCAT31((int3)(uVar2 >> 8),*(byte *)((int)param_1 + 2)) & 0xffffffc0,
            (char)uVar2 != -0x80)))) break;
        *param_3 = ((CONCAT11((char)(uVar2 >> 8),bVar1) & 0x3fff) >> 8 | (ushort)bVar1 << 6) << 6 |
                   (ushort)(*(byte *)((int)param_1 + 2) & 0x3f);
        param_1 = (uint *)((int)param_1 + 3);
        param_2 = param_2 - 3;
        param_3 = param_3 + 1;
      }
      if (((uVar3 - 0xf0 < 8) && (3 < param_2)) && ((*(byte *)((int)param_1 + 1) & 0xc0) == 0x80))
      break;
LAB_004d77b8:
      param_1 = (uint *)((int)param_1 + 1);
      param_2 = param_2 - 1;
    }
    if (((*(byte *)((int)param_1 + 2) & 0xc0) != 0x80) ||
       ((*(byte *)((int)param_1 + 3) & 0xc0) != 0x80)) goto LAB_004d77b8;
    uVar2 = *(byte *)((int)param_1 + 3) & 0x3f;
    uVar3 = (((uVar3 & 0xffffff0f) << 6 | *(byte *)((int)param_1 + 1) & 0x3f) << 6 |
            *(byte *)((int)param_1 + 2) & 0x3f) << 6;
    *param_3 = (short)((uVar3 | uVar2) - 0x10000 >> 10) + 0xd800;
    param_3[1] = ((ushort)uVar3 & 0x3ff | (ushort)uVar2) + 0xdc00;
    param_1 = param_1 + 1;
    param_2 = param_2 - 4;
    param_3 = param_3 + 2;
  } while( true );
}


/* FUN_004d77d0 @ 004d77d0  kind=gamemisc  attributed-by=none  size=106 */

void FUN_004d77d0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  undefined4 *puVar3;
  
  if (in_ECX[1] != 0) {
    (*(code *)PTR_free_007663b0)(in_ECX[1]);
    in_ECX[1] = 0;
  }
  if ((uint *)*in_ECX != (uint *)0x0) {
    puVar3 = (undefined4 *)(*(uint *)*in_ECX & 0xffffffe0);
    iVar2 = puVar3[3];
    while (iVar2 != 0) {
      puVar1 = (undefined4 *)(iVar2 + 4);
      iVar2 = *(int *)(iVar2 + 0xc);
      (*(code *)PTR_free_007663b0)(*puVar1);
    }
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    *in_ECX = 0;
  }
  return;
}


/* FUN_004d7840 @ 004d7840  kind=gamemisc  attributed-by=none  size=21 */

void FUN_004d7840(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  uVar1 = *in_ECX;
  *param_1 = 0;
  param_1[1] = uVar1;
  return;
}


/* FUN_004d7860 @ 004d7860  kind=gamemisc  attributed-by=none  size=52 */

void FUN_004d7860(undefined4 *param_1)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    *param_1 = *(undefined4 *)(*in_ECX + 0x10);
    return;
  }
  *param_1 = 0;
  return;
}


/* FUN_004d78a0 @ 004d78a0  kind=gamemisc  attributed-by=none  size=336 */

int FUN_004d78a0(int param_1,char *param_2,uint param_3)

{
  char cVar1;
  
  if ((param_1 == 8) || (param_1 == 4)) {
    return 2;
  }
  if (param_1 == 7) {
    return 5;
  }
  if (param_1 != 0) {
    return param_1;
  }
  if (4 < param_3) {
    if ((((*param_2 == '\0') && (param_2[1] == '\0')) && (param_2[2] == -2)) && (param_2[3] == -1))
    {
      return 6;
    }
    if (((*param_2 == -1) && (param_2[1] == -2)) && ((param_2[2] == '\0' && (param_2[3] == '\0'))))
    {
      return 5;
    }
  }
  if (2 < param_3) {
    if ((*param_2 == -2) && (param_2[1] == -1)) {
      return 3;
    }
    if ((*param_2 == -1) && (param_2[1] == -2)) {
      return 2;
    }
  }
  if ((((param_3 < 4) || (*param_2 != -0x11)) || (param_2[1] != -0x45)) || (param_2[2] != -0x41)) {
    if (4 < param_3) {
      cVar1 = *param_2;
      if (((cVar1 == '\0') && (param_2[1] == '\0')) && ((param_2[2] == '\0' && (param_2[3] == '<')))
         ) {
        return 6;
      }
      if (((cVar1 == '<') && (param_2[1] == '\0')) && ((param_2[2] == '\0' && (param_2[3] == '\0')))
         ) {
        return 5;
      }
      if ((((cVar1 == '\0') && (param_2[1] == '<')) && (param_2[2] == '\0')) && (param_2[3] == '?'))
      {
        return 3;
      }
      if (cVar1 == '<') {
        if (((param_2[1] == '\0') && (param_2[2] == '?')) && (param_2[3] == '\0')) {
          return 2;
        }
        if (((param_2[1] == '?') && (param_2[2] == 'x')) && (param_2[3] == 'm')) {
          return 1;
        }
      }
    }
    if (2 < param_3) {
      if ((*param_2 == '\0') && (param_2[1] == '<')) {
        return 3;
      }
      if ((*param_2 == '<') && (param_2[1] == '\0')) {
        return 2;
      }
    }
  }
  return 1;
}


/* FUN_004d79f0 @ 004d79f0  kind=gamemisc  attributed-by=none  size=98 */

undefined4 FUN_004d79f0(undefined4 *param_1,uint *param_2,void *param_3,uint param_4,char param_5)

{
  uint uVar1;
  void *_Dst;
  
  if (param_5 != '\0') {
    *param_1 = param_3;
    *param_2 = param_4 >> 1;
    return 1;
  }
  uVar1 = 1;
  if (param_4 != 0) {
    uVar1 = param_4;
  }
  _Dst = (void *)(*(code *)PTR_FUN_007663ac)(uVar1);
  if (_Dst == (void *)0x0) {
    return 0;
  }
  memcpy(_Dst,param_3,param_4);
  *param_1 = _Dst;
  *param_2 = param_4 >> 1;
  return 1;
}


/* FUN_004d7a60 @ 004d7a60  kind=gamemisc  attributed-by=none  size=84 */

code * FUN_004d7a60(uint param_1)

{
  switch(param_1 >> 4 & 0xf) {
  case 0:
    return FUN_004d8ef0;
  case 1:
    return FUN_004d8f40;
  case 2:
    return FUN_004d8750;
  case 3:
    return FUN_004d8810;
  case 4:
  case 6:
    return FUN_004d9000;
  case 5:
  case 7:
    return FUN_004d90d0;
  case 8:
  case 10:
  case 0xc:
  case 0xe:
    return FUN_004d91d0;
  case 9:
  case 0xb:
  case 0xd:
  case 0xf:
    return FUN_004d9340;
  default:
    return (code *)0x0;
  }
}


/* FUN_004d7b00 @ 004d7b00  kind=gamemisc  attributed-by=none  size=179 */

void FUN_004d7b00(undefined8 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined4 *in_ECX;
  undefined1 local_10 [12];
  
  FUN_004d72f0();
  uVar4 = param_3;
  iVar2 = param_2;
  param_5 = FUN_004d78a0(param_5,param_2,param_3);
  param_2 = 0;
  param_3 = 0;
  cVar5 = FUN_004d7190(&param_2,&param_3,param_5,iVar2,uVar4,0);
  iVar3 = param_2;
  if (cVar5 == '\0') {
    *param_1 = 3;
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  puVar6 = (undefined8 *)FUN_004d8410(local_10,param_2,param_3,*in_ECX,param_4);
  uVar1 = *puVar6;
  if (iVar3 != iVar2) {
    in_ECX[1] = iVar3;
  }
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 1) = param_5;
  return;
}


/* FUN_004d7bc0 @ 004d7bc0  kind=gamemisc  attributed-by=none  size=19 */

undefined ** FUN_004d7bc0(void)

{
  undefined **ppuVar1;
  int *in_ECX;
  
  if ((*in_ECX == 0) || (ppuVar1 = *(undefined ***)(*in_ECX + 8), ppuVar1 == (undefined **)0x0)) {
    ppuVar1 = &PTR_006fccac;
  }
  return ppuVar1;
}


/* FUN_004d7ce0 @ 004d7ce0  kind=gamemisc  attributed-by=none  size=217 */

ushort * FUN_004d7ce0(ushort *param_1)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *_Src;
  ushort *puVar4;
  int iVar5;
  ushort *local_c;
  int local_8;
  
  _Src = (ushort *)0x0;
  iVar5 = 0;
  local_c = _Src;
  local_8 = iVar5;
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
        local_c = _Src;
        local_8 = iVar5;
      }
    }
    else if (uVar1 == 0x26) {
      param_1 = (ushort *)FUN_004d96f0(puVar4,&local_c);
      _Src = local_c;
      iVar5 = local_8;
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


/* FUN_004d7e70 @ 004d7e70  kind=gamemisc  attributed-by=none  size=1415 */

void FUN_004d7e70(ushort *param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  ushort uVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  code *pcVar5;
  int iVar6;
  ushort *puVar7;
  int in_ECX;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  code *local_c;
  undefined4 *local_8;
  
  uVar8 = param_3;
  pcVar5 = (code *)FUN_004d7a60(param_3);
  switch(uVar8 >> 4 & 3) {
  case 0:
    local_c = FUN_004d7be0;
    break;
  case 1:
    local_c = FUN_004d7c30;
    break;
  case 2:
    local_c = FUN_004d7dc0;
    break;
  case 3:
    local_c = FUN_004d7ce0;
    break;
  default:
    local_c = (code *)0x0;
  }
  uVar4 = *param_1;
  local_8 = param_2;
  puVar10 = param_1;
  puVar12 = param_2;
  if (uVar4 != 0) {
    do {
      puVar7 = puVar10;
      if (uVar4 == 0x3c) {
LAB_004d7fb6:
        puVar10 = puVar10 + 1;
LAB_004d7fbc:
        uVar8 = (uint)*puVar10;
        if (*puVar10 < 0x80) {
          cVar3 = (&DAT_00703680)[uVar8];
        }
        else {
          cVar3 = -0x40;
        }
        param_1 = puVar10;
        if (cVar3 < '\0') {
          local_8 = (undefined4 *)FUN_004d6fe0(puVar12,in_ECX,2);
          if (local_8 == (undefined4 *)0x0) {
LAB_004d83b7:
                    /* WARNING: Subroutine does not return */
            longjmp((int *)(in_ECX + 8),3);
          }
          local_8[2] = puVar10;
          while( true ) {
            if (*puVar10 < 0x80) {
              bVar2 = (&DAT_00703680)[*puVar10];
            }
            else {
              bVar2 = 0xc0;
            }
            if ((bVar2 & 0x40) == 0) break;
            puVar10 = puVar10 + 1;
          }
          uVar4 = *puVar10;
          uVar8 = (uint)uVar4;
          *puVar10 = 0;
          puVar7 = puVar10 + 1;
          puVar12 = local_8;
          if (uVar8 != 0x3e) {
            if (uVar4 < 0x80) {
              bVar2 = (&DAT_00703680)[uVar8];
            }
            else {
              bVar2 = 0;
            }
            puVar11 = local_8;
            if ((bVar2 & 8) == 0) {
              if (uVar8 == 0x2f) {
                uVar4 = *puVar7;
                if ((uVar4 != 0x3e) && ((puVar9 = puVar7, uVar4 != 0 || ((ushort)param_4 != 0x3e))))
                goto LAB_004d808c;
                puVar7 = puVar7 + (uVar4 == 0x3e);
                puVar12 = (undefined4 *)local_8[1];
                local_8 = (undefined4 *)local_8[1];
              }
              else {
joined_r0x004d830b:
                puVar9 = puVar7;
                if ((uVar4 != 0) ||
                   (puVar7 = puVar10, puVar9 = puVar10, puVar12 = puVar11, (ushort)param_4 != 0x3e))
                {
LAB_004d808c:
                  *(ushort **)(in_ECX + 0x48) = puVar9;
                    /* WARNING: Subroutine does not return */
                  longjmp((int *)(in_ECX + 8),0xb);
                }
              }
            }
            else {
LAB_004d8180:
              while( true ) {
                while( true ) {
                  if (*puVar7 < 0x80) {
                    bVar2 = (&DAT_00703680)[*puVar7];
                  }
                  else {
                    bVar2 = 0;
                  }
                  if ((bVar2 & 8) == 0) break;
                  puVar7 = puVar7 + 1;
                }
                if (*puVar7 < 0x80) {
                  cVar3 = (&DAT_00703680)[*puVar7];
                }
                else {
                  cVar3 = -0x40;
                }
                if (-1 < cVar3) break;
                iVar6 = FUN_004d6f60(puVar11,in_ECX);
                if (iVar6 == 0) {
                  *(undefined4 *)(in_ECX + 0x48) = 0;
                  goto LAB_004d83b7;
                }
                *(ushort **)(iVar6 + 4) = puVar7;
                while( true ) {
                  if (*puVar7 < 0x80) {
                    bVar2 = (&DAT_00703680)[*puVar7];
                  }
                  else {
                    bVar2 = 0xc0;
                  }
                  if ((bVar2 & 0x40) == 0) break;
                  puVar7 = puVar7 + 1;
                }
                uVar4 = *puVar7;
                if (uVar4 == 0) goto LAB_004d838f;
                *puVar7 = 0;
                puVar7 = puVar7 + 1;
                if (*puVar7 == 0) goto LAB_004d838f;
                if (uVar4 < 0x80) {
                  bVar2 = (&DAT_00703680)[uVar4];
                }
                else {
                  bVar2 = 0;
                }
                if ((bVar2 & 8) != 0) {
                  while( true ) {
                    if (*puVar7 < 0x80) {
                      bVar2 = (&DAT_00703680)[*puVar7];
                    }
                    else {
                      bVar2 = 0;
                    }
                    if ((bVar2 & 8) == 0) break;
                    puVar7 = puVar7 + 1;
                  }
                  uVar4 = *puVar7;
                  if (uVar4 == 0) goto LAB_004d838f;
                  puVar7 = puVar7 + 1;
                }
                if (uVar4 != 0x3d) goto LAB_004d838f;
                while( true ) {
                  if (*puVar7 < 0x80) {
                    bVar2 = (&DAT_00703680)[*puVar7];
                  }
                  else {
                    bVar2 = 0;
                  }
                  if ((bVar2 & 8) == 0) break;
                  puVar7 = puVar7 + 1;
                }
                uVar4 = *puVar7;
                if ((uVar4 != 0x22) && (uVar4 != 0x27)) goto LAB_004d838f;
                *(ushort **)(iVar6 + 8) = puVar7 + 1;
                puVar7 = (ushort *)(*pcVar5)(puVar7 + 1,uVar4);
                if (puVar7 == (ushort *)0x0) {
                  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(iVar6 + 8);
                    /* WARNING: Subroutine does not return */
                  longjmp((int *)(in_ECX + 8),0xc);
                }
                if (*puVar7 < 0x80) {
                  cVar3 = (&DAT_00703680)[*puVar7];
                }
                else {
                  cVar3 = -0x40;
                }
                puVar11 = local_8;
                if (cVar3 < '\0') {
LAB_004d838f:
                  *(ushort **)(in_ECX + 0x48) = puVar7;
                    /* WARNING: Subroutine does not return */
                  longjmp((int *)(in_ECX + 8),0xc);
                }
              }
              uVar4 = *puVar7;
              if (uVar4 == 0x2f) {
                puVar9 = puVar7 + 1;
                if (puVar7[1] == 0x3e) {
                  puVar7 = puVar7 + 2;
                  puVar12 = (undefined4 *)puVar11[1];
                  local_8 = (undefined4 *)puVar11[1];
                }
                else {
                  if ((puVar7[1] != 0) || ((ushort)param_4 != 0x3e)) goto LAB_004d808c;
                  puVar7 = puVar9;
                  puVar12 = (undefined4 *)puVar11[1];
                  local_8 = (undefined4 *)puVar11[1];
                }
              }
              else {
                puVar10 = puVar7;
                if (uVar4 != 0x3e) goto joined_r0x004d830b;
                puVar7 = puVar7 + 1;
                puVar12 = puVar11;
              }
            }
          }
        }
        else if (uVar8 == 0x2f) {
          puVar9 = (ushort *)puVar12[2];
          puVar7 = puVar10 + 1;
          if (puVar9 == (ushort *)0x0) {
LAB_004d80db:
            *(ushort **)(in_ECX + 0x48) = puVar7;
                    /* WARNING: Subroutine does not return */
            longjmp((int *)(in_ECX + 8),0xe);
          }
          while( true ) {
            uVar4 = *puVar7;
            if (uVar4 < 0x80) {
              bVar2 = (&DAT_00703680)[uVar4];
            }
            else {
              bVar2 = 0xc0;
            }
            if ((bVar2 & 0x40) == 0) break;
            uVar1 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar7 = puVar7 + 1;
            if (uVar4 != uVar1) goto LAB_004d80db;
          }
          if (*puVar9 != 0) {
            if (((*puVar7 == 0) && (*puVar9 == (ushort)param_4)) && (puVar9[1] == 0))
            goto LAB_004d8380;
            goto LAB_004d80db;
          }
          puVar12 = (undefined4 *)puVar12[1];
          while( true ) {
            if (*puVar7 < 0x80) {
              bVar2 = (&DAT_00703680)[*puVar7];
            }
            else {
              bVar2 = 0;
            }
            if ((bVar2 & 8) == 0) break;
            puVar7 = puVar7 + 1;
          }
          local_8 = puVar12;
          if (*puVar7 == 0) {
            if ((ushort)param_4 != 0x3e) {
LAB_004d8380:
              *(ushort **)(in_ECX + 0x48) = puVar7;
                    /* WARNING: Subroutine does not return */
              longjmp((int *)(in_ECX + 8),0xd);
            }
          }
          else {
            if (*puVar7 != 0x3e) goto LAB_004d8380;
            puVar7 = puVar7 + 1;
          }
        }
        else if (uVar8 == 0x3f) {
          FUN_004d8c70(&param_1,&local_8,param_3,param_4);
          puVar7 = param_1;
          puVar12 = local_8;
          if ((local_8 != (undefined4 *)0x0) && (puVar11 = local_8, ((byte)*local_8 & 7) == 7))
          goto LAB_004d8180;
        }
        else {
          if (uVar8 != 0x21) {
            if ((*puVar10 == 0) && ((ushort)param_4 == 0x3f)) {
              *(ushort **)(in_ECX + 0x48) = puVar10;
                    /* WARNING: Subroutine does not return */
              longjmp((int *)(in_ECX + 8),6);
            }
            *(ushort **)(in_ECX + 0x48) = puVar10;
                    /* WARNING: Subroutine does not return */
            longjmp((int *)(in_ECX + 8),5);
          }
          FUN_004d8900(&param_1,puVar12,param_3,param_4);
          puVar7 = param_1;
        }
      }
      else {
        while( true ) {
          if (*puVar7 < 0x80) {
            bVar2 = (&DAT_00703680)[*puVar7];
          }
          else {
            bVar2 = 0;
          }
          if ((bVar2 & 8) == 0) break;
          puVar7 = puVar7 + 1;
        }
        if (((param_3 & 8) != 0) && (puVar10 != puVar7)) {
LAB_004d7f2e:
          if (puVar12[1] == 0) {
            uVar4 = *puVar10;
            puVar7 = puVar10;
            if (uVar4 != 0) {
              while (puVar7 = puVar10, uVar4 != 0x3c) {
                uVar4 = puVar10[1];
                puVar7 = puVar10 + 1;
                puVar10 = puVar7;
                if (uVar4 == 0) goto LAB_004d7f92;
              }
            }
            puVar10 = puVar7;
            if (*puVar7 != 0) goto LAB_004d7fb6;
          }
          else {
            iVar6 = FUN_004d6fe0(puVar12,in_ECX,3);
            if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              longjmp((int *)(in_ECX + 8),3);
            }
            *(ushort **)(iVar6 + 0xc) = puVar10;
            puVar7 = (ushort *)(*local_c)(puVar10);
            puVar12 = *(undefined4 **)(iVar6 + 4);
            puVar10 = puVar7;
            param_1 = puVar7;
            local_8 = puVar12;
            if (*puVar7 != 0) goto LAB_004d7fbc;
          }
          break;
        }
        if (*puVar7 != 0x3c) {
          if (*puVar7 != 0) goto LAB_004d7f2e;
          break;
        }
      }
      uVar4 = *puVar7;
      puVar10 = puVar7;
    } while (uVar4 != 0);
LAB_004d7f92:
    if (puVar12 != param_2) {
      *(ushort **)(in_ECX + 0x48) = puVar7;
                    /* WARNING: Subroutine does not return */
      longjmp((int *)(in_ECX + 8),0xe);
    }
  }
  return;
}


/* FUN_004d8410 @ 004d8410  kind=gamemisc  attributed-by=none  size=241 */

void FUN_004d8410(undefined8 *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 local_4c [64];
  int local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  *(int *)(param_4 + 0x28) = param_2;
  if (param_3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_4 + 0x20);
    uVar3 = *(undefined4 *)(param_4 + 0x24);
    local_c = 0;
    sVar1 = *(short *)(param_2 + -2 + param_3 * 2);
    *(undefined2 *)(param_2 + -2 + param_3 * 2) = 0;
    iVar4 = setjmp3(local_4c,0);
    if (iVar4 == 0) {
      FUN_004d7e70(param_2,param_4,param_5,sVar1);
    }
    if (local_c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = local_c - param_2 >> 1;
    }
    *(undefined4 *)(param_4 + 0x20) = uVar2;
    *(undefined4 *)(param_4 + 0x24) = uVar3;
    if ((iVar4 == 0) && (sVar1 == 0x3c)) {
      uVar6 = CONCAT44(param_3,5);
    }
    else {
      uVar6 = CONCAT44(iVar5,iVar4);
    }
  }
  *param_1 = uVar6;
  *(undefined4 *)(param_1 + 1) = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004d8510 @ 004d8510  kind=gamemisc  attributed-by=none  size=166 */

void FUN_004d8510(int *param_1,undefined4 param_2,char param_3)

{
  short sVar1;
  short *psVar2;
  int in_ECX;
  
  *param_1 = *param_1 + 2;
  sVar1 = *(short *)*param_1;
  do {
    if (sVar1 == 0) {
      if ((param_3 != '\0') && ((short)param_2 == 0x3e)) {
        return;
      }
      *(int *)(in_ECX + 0x48) = *param_1;
                    /* WARNING: Subroutine does not return */
      longjmp((int *)(in_ECX + 8),9);
    }
    psVar2 = (short *)*param_1;
    sVar1 = *psVar2;
    if (sVar1 == 0x3c) {
      if ((psVar2[1] == 0x21) && (psVar2[2] != 0x2d)) {
        if (psVar2[2] == 0x5b) {
          FUN_004d85c0(param_1);
        }
        else {
          FUN_004d8510(param_1,param_2,0);
        }
      }
      else {
LAB_004d857f:
        FUN_004d8630(param_1);
      }
    }
    else {
      if ((sVar1 == 0x22) || (sVar1 == 0x27)) goto LAB_004d857f;
      if (sVar1 == 0x3e) {
        *param_1 = *param_1 + 2;
        return;
      }
      *param_1 = (int)(psVar2 + 1);
    }
    sVar1 = *(short *)*param_1;
  } while( true );
}


/* FUN_004d85c0 @ 004d85c0  kind=gamemisc  attributed-by=none  size=112 */

void FUN_004d85c0(int *param_1)

{
  short sVar1;
  short *psVar2;
  int in_ECX;
  
  *param_1 = *param_1 + 2;
  sVar1 = *(short *)*param_1;
  do {
    if (sVar1 == 0) {
      *(int *)(in_ECX + 0x48) = *param_1;
                    /* WARNING: Subroutine does not return */
      longjmp((int *)(in_ECX + 8),9);
    }
    psVar2 = (short *)*param_1;
    if (((*psVar2 == 0x3c) && (psVar2[1] == 0x21)) && (psVar2[2] == 0x5b)) {
      FUN_004d85c0(param_1);
    }
    else {
      if (((*psVar2 == 0x5d) && (psVar2[1] == 0x5d)) && (psVar2[2] == 0x3e)) {
        *param_1 = *param_1 + 6;
        return;
      }
      *param_1 = (int)(psVar2 + 1);
    }
    sVar1 = *(short *)*param_1;
  } while( true );
}


/* FUN_004d8630 @ 004d8630  kind=gamemisc  attributed-by=none  size=275 */

void FUN_004d8630(undefined4 *param_1)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int in_ECX;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  if ((sVar1 == 0x22) || (sVar1 == 0x27)) {
    psVar3 = psVar3 + 1;
    *param_1 = psVar3;
    sVar2 = *psVar3;
    while ((sVar2 != 0 && (*psVar3 != sVar1))) {
      psVar3 = psVar3 + 1;
      *param_1 = psVar3;
      sVar2 = *psVar3;
    }
    psVar3 = (short *)*param_1;
    if (*psVar3 != 0) {
      *param_1 = psVar3 + 1;
      return;
    }
    *(short **)(in_ECX + 0x48) = psVar3;
                    /* WARNING: Subroutine does not return */
    longjmp((int *)(in_ECX + 8),9);
  }
  if (sVar1 == 0x3c) {
    if (psVar3[1] == 0x3f) {
      *param_1 = psVar3 + 2;
      sVar1 = psVar3[2];
      while ((sVar1 != 0 && ((psVar3 = (short *)*param_1, *psVar3 != 0x3f || (psVar3[1] != 0x3e)))))
      {
        *param_1 = psVar3 + 1;
        sVar1 = psVar3[1];
      }
      psVar3 = (short *)*param_1;
      if (*psVar3 != 0) {
        *param_1 = psVar3 + 2;
        return;
      }
    }
    else if (((psVar3[1] == 0x21) && (psVar3[2] == 0x2d)) && (psVar3[3] == 0x2d)) {
      *param_1 = psVar3 + 4;
      sVar1 = psVar3[4];
      while ((sVar1 != 0 &&
             (((psVar3 = (short *)*param_1, *psVar3 != 0x2d || (psVar3[1] != 0x2d)) ||
              (psVar3[2] != 0x3e))))) {
        *param_1 = psVar3 + 1;
        sVar1 = psVar3[1];
      }
      psVar3 = (short *)*param_1;
      if (*psVar3 != 0) {
        *param_1 = psVar3 + 4;
        return;
      }
      *(short **)(in_ECX + 0x48) = psVar3;
                    /* WARNING: Subroutine does not return */
      longjmp((int *)(in_ECX + 8),9);
    }
  }
  *(short **)(in_ECX + 0x48) = psVar3;
                    /* WARNING: Subroutine does not return */
  longjmp((int *)(in_ECX + 8),9);
}


/* FUN_004d8900 @ 004d8900  kind=gamemisc  attributed-by=none  size=869 */

void FUN_004d8900(int *param_1,int param_2,uint param_3,undefined4 param_4)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  short sVar5;
  int in_ECX;
  short *local_8;
  
  iVar3 = *param_1;
  local_8 = (short *)(iVar3 + 2);
  sVar1 = *local_8;
  sVar5 = (short)param_4;
  if (sVar1 != 0x2d) {
    if (sVar1 == 0x5b) {
      local_8 = (short *)(iVar3 + 4);
      if (((((*(short *)(iVar3 + 4) == 0x43) &&
            (local_8 = (short *)(iVar3 + 6), *(short *)(iVar3 + 6) == 0x44)) &&
           (local_8 = (short *)(iVar3 + 8), *(short *)(iVar3 + 8) == 0x41)) &&
          ((local_8 = (short *)(iVar3 + 10), *(short *)(iVar3 + 10) == 0x54 &&
           (local_8 = (short *)(iVar3 + 0xc), *(short *)(iVar3 + 0xc) == 0x41)))) &&
         (local_8 = (short *)(iVar3 + 0xe), *(short *)(iVar3 + 0xe) == 0x5b)) {
        local_8 = (short *)(iVar3 + 0x10);
        if ((param_3 & 4) != 0) {
          iVar3 = FUN_004d6fe0(param_2);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            longjmp((int *)(in_ECX + 8),3);
          }
          *(short **)(iVar3 + 0xc) = local_8;
          if ((param_3 & 0x20) == 0) {
            sVar1 = *local_8;
            psVar4 = local_8;
            while (local_8 = psVar4, sVar1 != 0) {
              if (((sVar1 == 0x5d) && (psVar4[1] == 0x5d)) &&
                 ((psVar4[2] == 0x3e || ((psVar4[2] == 0 && (sVar5 == 0x3e)))))) {
                if (*psVar4 != 0) {
                  *psVar4 = 0;
                  goto LAB_004d8b8d;
                }
                break;
              }
              psVar4 = psVar4 + 1;
              sVar1 = *psVar4;
            }
          }
          else {
            psVar4 = (short *)FUN_004d9520(local_8,param_4);
            if (psVar4 != (short *)0x0) goto LAB_004d8b93;
            psVar4 = *(short **)(iVar3 + 0xc);
            local_8 = (short *)0x0;
          }
          *(short **)(in_ECX + 0x48) = psVar4;
                    /* WARNING: Subroutine does not return */
          longjmp((int *)(in_ECX + 8),8);
        }
        sVar1 = *local_8;
        psVar4 = local_8;
        while (local_8 = psVar4, sVar1 != 0) {
          if (((sVar1 == 0x5d) && (psVar4[1] == 0x5d)) &&
             ((psVar4[2] == 0x3e || ((psVar4[2] == 0 && (sVar5 == 0x3e)))))) {
            if (*psVar4 != 0) goto LAB_004d8b8d;
            break;
          }
          psVar4 = psVar4 + 1;
          sVar1 = *psVar4;
        }
      }
LAB_004d8c47:
      *(short **)(in_ECX + 0x48) = local_8;
                    /* WARNING: Subroutine does not return */
      longjmp((int *)(in_ECX + 8),8);
    }
    if (((((sVar1 == 0x44) && (*(short *)(iVar3 + 4) == 0x4f)) && (*(short *)(iVar3 + 6) == 0x43))
        && ((*(short *)(iVar3 + 8) == 0x54 && (*(short *)(iVar3 + 10) == 0x59)))) &&
       (*(short *)(iVar3 + 0xc) == 0x50)) {
      if (*(short *)(iVar3 + 0xe) == 0x45) {
        local_8 = (short *)(iVar3 + -2);
        FUN_004d8510(&local_8,param_4,1);
        goto LAB_004d8c19;
      }
      if ((*(short *)(iVar3 + 0xe) == 0) && (sVar5 == 0x45)) {
        *(short **)(in_ECX + 0x48) = local_8;
                    /* WARNING: Subroutine does not return */
        longjmp((int *)(in_ECX + 8),9);
      }
    }
    if (sVar1 == 0) {
      if (sVar5 == 0x2d) goto LAB_004d8c32;
      if (sVar5 == 0x5b) goto LAB_004d8c47;
    }
    *(short **)(in_ECX + 0x48) = local_8;
                    /* WARNING: Subroutine does not return */
    longjmp((int *)(in_ECX + 8),5);
  }
  local_8 = (short *)(iVar3 + 4);
  if (*local_8 == 0x2d) {
    local_8 = (short *)(iVar3 + 6);
    uVar2 = param_3 & 2;
    if (uVar2 != 0) {
      param_2 = FUN_004d6fe0(param_2);
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        longjmp((int *)(in_ECX + 8),3);
      }
      *(short **)(param_2 + 0xc) = local_8;
    }
    if (((param_3 & 0x20) != 0) && (uVar2 != 0)) {
      local_8 = (short *)FUN_004d9600(local_8,param_4);
      if (local_8 == (short *)0x0) {
        *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_2 + 0xc);
                    /* WARNING: Subroutine does not return */
        longjmp((int *)(in_ECX + 8),7);
      }
LAB_004d8c19:
      *param_1 = (int)local_8;
      return;
    }
    sVar1 = *local_8;
    while (sVar1 != 0) {
      if (((sVar1 == 0x2d) && (local_8[1] == 0x2d)) &&
         ((local_8[2] == 0x3e || ((local_8[2] == 0 && (sVar5 == 0x3e)))))) {
        if (*local_8 != 0) {
          if (uVar2 != 0) {
            *local_8 = 0;
          }
          *param_1 = (int)(local_8 + (local_8[2] == 0x3e) + 2);
          return;
        }
        break;
      }
      local_8 = local_8 + 1;
      sVar1 = *local_8;
    }
  }
LAB_004d8c32:
  *(short **)(in_ECX + 0x48) = local_8;
                    /* WARNING: Subroutine does not return */
  longjmp((int *)(in_ECX + 8),7);
LAB_004d8b8d:
  psVar4 = psVar4 + 1;
LAB_004d8b93:
  *param_1 = (int)(psVar4 + (psVar4[1] == 0x3e) + 1);
  return;
}


/* FUN_004d8c70 @ 004d8c70  kind=gamemisc  attributed-by=none  size=631 */

void FUN_004d8c70(int *param_1,int *param_2,uint param_3,short param_4)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int in_ECX;
  undefined4 *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  
  puVar7 = (undefined4 *)*param_2;
  iVar5 = *param_1;
  puVar8 = (ushort *)(iVar5 + 2);
  if (*puVar8 < 0x80) {
    cVar2 = (&DAT_00703680)[*puVar8];
  }
  else {
    cVar2 = -0x40;
  }
  puVar9 = puVar8;
  if (cVar2 < '\0') {
    while( true ) {
      if (*puVar9 < 0x80) {
        bVar3 = (&DAT_00703680)[*puVar9];
      }
      else {
        bVar3 = 0xc0;
      }
      if ((bVar3 & 0x40) == 0) break;
      puVar9 = puVar9 + 1;
    }
    if (*puVar9 == 0) {
      *(ushort **)(in_ECX + 0x48) = puVar9;
                    /* WARNING: Subroutine does not return */
      longjmp((int *)(in_ECX + 8),6);
    }
    if (((((*puVar8 | 0x20) == 0x78) && ((*(ushort *)(iVar5 + 4) | 0x20) == 0x6d)) &&
        ((*(ushort *)(iVar5 + 6) | 0x20) == 0x6c)) && ((ushort *)(iVar5 + 8) == puVar9)) {
      bVar1 = true;
      param_3 = param_3 & 0x100;
    }
    else {
      bVar1 = false;
      param_3 = param_3 & 1;
    }
    if (param_3 == 0) {
      uVar4 = *puVar9;
      do {
        if ((uVar4 == 0x3f) && ((puVar9[1] == 0x3e || ((puVar9[1] == 0 && (param_4 == 0x3e)))))) {
          if (*puVar9 != 0) {
            uVar6 = (puVar9[1] == 0x3e) + 1;
            goto LAB_004d8ed1;
          }
          break;
        }
        uVar4 = puVar9[1];
        puVar9 = puVar9 + 1;
      } while (uVar4 != 0);
    }
    else {
      if (bVar1) {
        if (((byte)*puVar7 & 7) != 1) {
          *(ushort **)(in_ECX + 0x48) = puVar9;
                    /* WARNING: Subroutine does not return */
          longjmp((int *)(in_ECX + 8),6);
        }
        iVar5 = FUN_004d6fe0(puVar7);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          longjmp((int *)(in_ECX + 8),3);
        }
      }
      else {
        iVar5 = FUN_004d6fe0(puVar7);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          longjmp((int *)(in_ECX + 8),3);
        }
      }
      *(ushort **)(iVar5 + 8) = puVar8;
      uVar4 = *puVar9;
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
      if (uVar4 == 0x3f) {
        uVar4 = *puVar9;
        if ((uVar4 != 0x3e) && ((uVar4 != 0 || (param_4 != 0x3e)))) {
          *(ushort **)(in_ECX + 0x48) = puVar9;
                    /* WARNING: Subroutine does not return */
          longjmp((int *)(in_ECX + 8),6);
        }
        puVar7 = *(undefined4 **)(iVar5 + 4);
        uVar6 = (uint)(uVar4 == 0x3e);
LAB_004d8ed1:
        *param_1 = (int)(puVar9 + uVar6);
        *param_2 = (int)puVar7;
        return;
      }
      if (uVar4 < 0x80) {
        bVar3 = (&DAT_00703680)[uVar4];
      }
      else {
        bVar3 = 0;
      }
      if ((bVar3 & 8) != 0) {
        while( true ) {
          if (*puVar9 < 0x80) {
            bVar3 = (&DAT_00703680)[*puVar9];
          }
          else {
            bVar3 = 0;
          }
          if ((bVar3 & 8) == 0) break;
          puVar9 = puVar9 + 1;
        }
        puVar8 = puVar9;
        if (*puVar9 != 0) {
          do {
            if ((*puVar8 == 0x3f) &&
               ((puVar8[1] == 0x3e || ((puVar8[1] == 0 && (param_4 == 0x3e)))))) break;
            puVar8 = puVar8 + 1;
          } while (*puVar8 != 0);
          if (*puVar8 != 0) {
            if (bVar1) {
              *puVar8 = 0x2f;
              *param_1 = (int)puVar9;
              *param_2 = iVar5;
              return;
            }
            *(ushort **)(iVar5 + 0xc) = puVar9;
            puVar7 = *(undefined4 **)(iVar5 + 4);
            *puVar8 = 0;
            puVar9 = puVar8 + 1;
            uVar6 = (uint)(*puVar9 == 0x3e);
            goto LAB_004d8ed1;
          }
        }
        *(ushort **)(in_ECX + 0x48) = puVar8;
                    /* WARNING: Subroutine does not return */
        longjmp((int *)(in_ECX + 8),6);
      }
    }
  }
  *(ushort **)(in_ECX + 0x48) = puVar9;
                    /* WARNING: Subroutine does not return */
  longjmp((int *)(in_ECX + 8),6);
}


/* FUN_004d9520 @ 004d9520  kind=gamemisc  attributed-by=none  size=219 */

ushort * FUN_004d9520(ushort *param_1,short param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *_Src;
  ushort *puVar4;
  int iVar5;
  
  if (*param_1 == 0) {
    return (ushort *)0x0;
  }
  _Src = (ushort *)0x0;
  iVar5 = 0;
  while( true ) {
    while( true ) {
      while( true ) {
        puVar4 = param_1;
        if (*puVar4 < 0x80) {
          bVar2 = (&DAT_00703680)[*puVar4];
        }
        else {
          bVar2 = 0;
        }
        if ((bVar2 & 0x10) != 0) break;
        param_1 = puVar4 + 1;
      }
      uVar1 = *puVar4;
      if (uVar1 != 0xd) break;
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
    if (((uVar1 == 0x5d) && (puVar4[1] == 0x5d)) &&
       ((puVar4[2] == 0x3e || ((puVar4[2] == 0 && (param_2 == 0x3e)))))) break;
    if (uVar1 == 0) {
      return (ushort *)0x0;
    }
    param_1 = puVar4 + 1;
  }
  puVar3 = puVar4;
  if (_Src != (ushort *)0x0) {
    memmove(_Src + -iVar5,_Src,(int)puVar4 - (int)_Src);
    puVar3 = puVar4 + -iVar5;
  }
  *puVar3 = 0;
  return puVar4 + 1;
}


/* FUN_004d9600 @ 004d9600  kind=gamemisc  attributed-by=none  size=232 */

ushort * FUN_004d9600(ushort *param_1,short param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *_Src;
  ushort *puVar4;
  int iVar5;
  
  if (*param_1 == 0) {
    return (ushort *)0x0;
  }
  _Src = (ushort *)0x0;
  iVar5 = 0;
  while( true ) {
    while( true ) {
      while( true ) {
        puVar4 = param_1;
        if (*puVar4 < 0x80) {
          bVar2 = (&DAT_00703680)[*puVar4];
        }
        else {
          bVar2 = 0;
        }
        if ((bVar2 & 0x20) != 0) break;
        param_1 = puVar4 + 1;
      }
      uVar1 = *puVar4;
      if (uVar1 != 0xd) break;
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
    if (((uVar1 == 0x2d) && (puVar4[1] == 0x2d)) &&
       ((puVar4[2] == 0x3e || ((puVar4[2] == 0 && (param_2 == 0x3e)))))) break;
    if (uVar1 == 0) {
      return (ushort *)0x0;
    }
    param_1 = puVar4 + 1;
  }
  puVar3 = puVar4;
  if (_Src != (ushort *)0x0) {
    memmove(_Src + -iVar5,_Src,(int)puVar4 - (int)_Src);
    puVar3 = puVar4 + -iVar5;
  }
  *puVar3 = 0;
  return puVar4 + (puVar4[2] == 0x3e) + 2;
}


/* FUN_004d96f0 @ 004d96f0  kind=gamemisc  attributed-by=none  size=489 */

short * FUN_004d96f0(short *param_1)

{
  short *psVar1;
  ushort *puVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  ushort uVar7;
  uint uVar8;
  
  psVar1 = param_1 + 1;
  psVar6 = psVar1;
  switch(*psVar1) {
  case 0x23:
    iVar4 = 0;
    if (param_1[2] == 0x78) {
      uVar8 = (uint)(ushort)param_1[3];
      psVar6 = param_1 + 3;
      if (uVar8 == 0x3b) {
        return psVar6;
      }
      while( true ) {
        while (uVar8 - 0x30 < 10) {
          puVar2 = (ushort *)(psVar6 + 1);
          iVar4 = iVar4 * 0x10 + -0x30 + uVar8;
          psVar6 = psVar6 + 1;
          uVar8 = (uint)*puVar2;
        }
        uVar5 = uVar8 | 0x20;
        if (5 < uVar5 - 0x61) break;
        uVar8 = (uint)(ushort)psVar6[1];
        iVar4 = iVar4 * 0x10 + -0x57 + uVar5;
        psVar6 = psVar6 + 1;
      }
      uVar7 = (ushort)uVar8;
    }
    else {
      uVar7 = param_1[2];
      uVar8 = (uint)uVar7;
      psVar6 = param_1 + 2;
      if (uVar8 == 0x3b) {
        return psVar6;
      }
      while (uVar8 - 0x30 < 10) {
        uVar7 = psVar6[1];
        psVar6 = psVar6 + 1;
        iVar4 = uVar8 + iVar4 * 10 + -0x30;
        uVar8 = (uint)uVar7;
      }
    }
    if (uVar7 == 0x3b) {
      param_1 = (short *)FUN_004d6f10(param_1,iVar4);
      FUN_004d94e0(&param_1,(int)(psVar6 + 1) - (int)param_1 >> 1);
      return psVar6 + 1;
    }
    break;
  case 0x61:
    psVar6 = param_1 + 2;
    if (param_1[2] == 0x6d) {
      psVar6 = param_1 + 3;
      if ((*psVar6 == 0x70) && (psVar6 = param_1 + 4, *psVar6 == 0x3b)) {
        uVar3 = 0x26;
        goto LAB_004d9801;
      }
    }
    else if ((((param_1[2] == 0x70) && (psVar6 = param_1 + 3, *psVar6 == 0x6f)) &&
             (psVar6 = param_1 + 4, *psVar6 == 0x73)) && (psVar6 = param_1 + 5, *psVar6 == 0x3b)) {
      uVar3 = 0x27;
      goto LAB_004d9801;
    }
    break;
  case 0x67:
    psVar6 = param_1 + 2;
    if ((*psVar6 == 0x74) && (psVar6 = param_1 + 3, *psVar6 == 0x3b)) {
      uVar3 = 0x3e;
LAB_004d9801:
      *param_1 = uVar3;
      param_1 = psVar1;
      FUN_004d94e0(&param_1,(int)psVar6 + (2 - (int)psVar1) >> 1);
      return psVar6 + 1;
    }
    break;
  case 0x6c:
    psVar6 = param_1 + 2;
    if ((*psVar6 == 0x74) && (psVar6 = param_1 + 3, *psVar6 == 0x3b)) {
      uVar3 = 0x3c;
      goto LAB_004d9801;
    }
    break;
  case 0x71:
    psVar6 = param_1 + 2;
    if ((((*psVar6 == 0x75) && (psVar6 = param_1 + 3, *psVar6 == 0x6f)) &&
        (psVar6 = param_1 + 4, *psVar6 == 0x74)) && (psVar6 = param_1 + 5, *psVar6 == 0x3b)) {
      uVar3 = 0x22;
      goto LAB_004d9801;
    }
  }
  return psVar6;
}


/* FUN_004d9950 @ 004d9950  kind=gamemisc  attributed-by=none  size=228 */

uint FUN_004d9950(ushort *param_1,uint param_2,uint param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 *in_ECX;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  if ((param_3 == 0) && (param_2 <= (uint)in_ECX[4])) {
    return param_2;
  }
  if (((uint)in_ECX[4] <= param_2) || (uVar7 = in_ECX[4] - param_2, uVar7 < param_3)) {
    return 0xffffffff;
  }
  iVar8 = uVar7 + (1 - param_3);
  puVar3 = in_ECX;
  if (7 < (uint)in_ECX[5]) {
    puVar3 = (undefined4 *)*in_ECX;
  }
  puVar4 = (ushort *)((int)puVar3 + param_2 * 2);
  do {
    if (iVar8 != 0) {
      puVar5 = puVar4;
      iVar6 = iVar8;
      do {
        if (*puVar5 == *param_1) goto LAB_004d99c7;
        puVar5 = puVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    puVar5 = (ushort *)0x0;
LAB_004d99c7:
    puVar1 = puVar5;
    uVar7 = param_3;
    puVar2 = param_1;
    if (puVar5 == (ushort *)0x0) {
      return 0xffffffff;
    }
    while( true ) {
      if (uVar7 == 0) goto LAB_004d99e7;
      if (*puVar1 != *puVar2) break;
      puVar1 = puVar1 + 1;
      uVar7 = uVar7 - 1;
      puVar2 = puVar2 + 1;
    }
    if ((-(uint)(*puVar1 < *puVar2) & 0xfffffffe) == 0xffffffff) {
LAB_004d99e7:
      if (7 < (uint)in_ECX[5]) {
        in_ECX = (undefined4 *)*in_ECX;
      }
      return (int)puVar5 - (int)in_ECX >> 1;
    }
    iVar8 = iVar8 + (-1 - ((int)puVar5 - (int)puVar4 >> 1));
    puVar4 = puVar5 + 1;
  } while( true );
}


/* FUN_004d9a40 @ 004d9a40  kind=gamemisc  attributed-by=none  size=135 */

int FUN_004d9a40(undefined4 param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e8e11;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_004da730();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  local_8 = 1;
  if ((undefined2 *)(iVar1 + 0x10) != (undefined2 *)0x0) {
    *(undefined4 *)(iVar1 + 0x24) = 7;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined2 *)(iVar1 + 0x10) = 0;
    FUN_0040f680(param_1,0,0xffffffff);
  }
  ExceptionList = local_10;
  return iVar1;
}


/* FUN_004d9b10 @ 004d9b10  kind=gamemisc  attributed-by=none  size=116 */

void FUN_004d9b10(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *in_ECX;
  
  iVar2 = *in_ECX;
  uVar7 = FUN_004d9b90(*(undefined4 *)(*param_1 + 4),iVar2,param_2);
  *(undefined4 *)(iVar2 + 4) = uVar7;
  piVar3 = (int *)*in_ECX;
  in_ECX[1] = param_1[1];
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0xd) != '\0') {
    *piVar3 = (int)piVar3;
    *(int *)(*in_ECX + 8) = *in_ECX;
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
  iVar2 = *(int *)(*in_ECX + 4);
  iVar5 = *(int *)(iVar2 + 8);
  cVar1 = *(char *)(iVar5 + 0xd);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0xd);
    iVar2 = iVar5;
    iVar5 = *(int *)(iVar5 + 8);
  }
  *(int *)(*in_ECX + 8) = iVar2;
  return;
}


/* FUN_004d9b90 @ 004d9b90  kind=gamemisc  attributed-by=none  size=159 */

undefined4 * FUN_004d9b90(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e8e30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)*in_ECX;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = (undefined4 *)FUN_004d9a40(param_1 + 4);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
    if (*(char *)((int)puVar3 + 0xd) != '\0') {
      puVar3 = puVar1;
    }
    local_8 = 0;
    uVar2 = FUN_004d9b90(*param_1,puVar1,param_3);
    *puVar1 = uVar2;
    uVar2 = FUN_004d9b90(param_1[2],puVar1,param_3);
    puVar1[2] = uVar2;
  }
  ExceptionList = local_10;
  return puVar3;
}


/* FUN_004d9c50 @ 004d9c50  kind=gamemisc  attributed-by=none  size=511 */

void FUN_004d9c50(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  int *piVar6;
  int *piVar7;
  
  if (0x6666664 < (uint)in_ECX[1]) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  piVar3 = (int *)FUN_004d9a40(param_4);
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
      goto LAB_004d9cae;
    }
    param_3[2] = piVar3;
    iVar4 = *in_ECX;
    if (param_3 != *(undefined4 **)(iVar4 + 8)) goto LAB_004d9cae;
  }
  *(int **)(iVar4 + 8) = piVar3;
LAB_004d9cae:
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
        goto LAB_004d9e2a;
      }
LAB_004d9d81:
      *(undefined1 *)(piVar7 + 3) = 1;
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar5 = *(int **)(piVar5[1] + 4);
    }
    else {
      if ((char)piVar6[3] == '\0') goto LAB_004d9d81;
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
LAB_004d9e2a:
      piVar7[1] = (int)piVar6;
    }
    cVar1 = *(char *)(piVar5[1] + 0xc);
  } while( true );
}


/* FUN_004d9e50 @ 004d9e50  kind=gamemisc  attributed-by=none  size=511 */

void FUN_004d9e50(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  int *piVar6;
  int *piVar7;
  
  if (0x6666664 < (uint)in_ECX[1]) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  piVar3 = (int *)FUN_004d9ae0(param_4);
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
      goto LAB_004d9eae;
    }
    param_3[2] = piVar3;
    iVar4 = *in_ECX;
    if (param_3 != *(undefined4 **)(iVar4 + 8)) goto LAB_004d9eae;
  }
  *(int **)(iVar4 + 8) = piVar3;
LAB_004d9eae:
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
        goto LAB_004da02a;
      }
LAB_004d9f81:
      *(undefined1 *)(piVar7 + 3) = 1;
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar5 = *(int **)(piVar5[1] + 4);
    }
    else {
      if ((char)piVar6[3] == '\0') goto LAB_004d9f81;
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
LAB_004da02a:
      piVar7[1] = (int)piVar6;
    }
    cVar1 = *(char *)(piVar5[1] + 0xc);
  } while( true );
}


/* FUN_004da050 @ 004da050  kind=gamemisc  attributed-by=none  size=319 */

void FUN_004da050(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *in_ECX;
  bool bVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar5 = param_3;
  puStack_c = &LAB_006e8e50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar7 = true;
  local_8 = 0;
  puVar1 = (undefined4 *)*in_ECX;
  puVar4 = (undefined4 *)((undefined4 *)*in_ECX)[1];
  while (*(char *)((int)puVar4 + 0xd) == '\0') {
    if ((char)param_2 == '\0') {
      piVar3 = puVar4 + 4;
      if (7 < (uint)puVar4[9]) {
        piVar3 = (int *)*piVar3;
      }
      iVar2 = FUN_00428db0(0,puVar5[4],piVar3,puVar4[8]);
      bVar7 = iVar2 < 0;
    }
    else {
      puVar1 = puVar5;
      if (7 < (uint)puVar5[5]) {
        puVar1 = (undefined4 *)*puVar5;
      }
      iVar2 = FUN_00428db0(0,puVar4[8],puVar1,puVar5[4]);
      bVar7 = -1 < iVar2;
    }
    puVar1 = puVar4;
    if (bVar7 == false) {
      puVar4 = (undefined4 *)puVar4[2];
    }
    else {
      puVar4 = (undefined4 *)*puVar4;
    }
  }
  param_2 = puVar1;
  if (bVar7 != false) {
    if (puVar1 == *(undefined4 **)*in_ECX) {
      puVar4 = &param_2;
      bVar7 = true;
      goto LAB_004da111;
    }
    FUN_0042c740();
  }
  puVar4 = param_2;
  puVar6 = puVar5;
  if (7 < (uint)puVar5[5]) {
    puVar6 = (undefined4 *)*puVar5;
  }
  iVar2 = FUN_00428db0(0,param_2[8],puVar6,puVar5[4]);
  if (-1 < iVar2) {
    *param_1 = puVar4;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
  puVar4 = &param_3;
LAB_004da111:
  puVar5 = (undefined4 *)FUN_004d9c50(puVar4,bVar7,puVar1,puVar5,param_4);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_004da1a0 @ 004da1a0  kind=gamemisc  attributed-by=none  size=319 */

void FUN_004da1a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *in_ECX;
  bool bVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar5 = param_3;
  puStack_c = &LAB_006e8e70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar7 = true;
  local_8 = 0;
  puVar1 = (undefined4 *)*in_ECX;
  puVar4 = (undefined4 *)((undefined4 *)*in_ECX)[1];
  while (*(char *)((int)puVar4 + 0xd) == '\0') {
    if ((char)param_2 == '\0') {
      piVar3 = puVar4 + 4;
      if (7 < (uint)puVar4[9]) {
        piVar3 = (int *)*piVar3;
      }
      iVar2 = FUN_00428db0(0,puVar5[4],piVar3,puVar4[8]);
      bVar7 = iVar2 < 0;
    }
    else {
      puVar1 = puVar5;
      if (7 < (uint)puVar5[5]) {
        puVar1 = (undefined4 *)*puVar5;
      }
      iVar2 = FUN_00428db0(0,puVar4[8],puVar1,puVar5[4]);
      bVar7 = -1 < iVar2;
    }
    puVar1 = puVar4;
    if (bVar7 == false) {
      puVar4 = (undefined4 *)puVar4[2];
    }
    else {
      puVar4 = (undefined4 *)*puVar4;
    }
  }
  param_2 = puVar1;
  if (bVar7 != false) {
    if (puVar1 == *(undefined4 **)*in_ECX) {
      puVar4 = &param_2;
      bVar7 = true;
      goto LAB_004da261;
    }
    FUN_0042c740();
  }
  puVar4 = param_2;
  puVar6 = puVar5;
  if (7 < (uint)puVar5[5]) {
    puVar6 = (undefined4 *)*puVar5;
  }
  iVar2 = FUN_00428db0(0,param_2[8],puVar6,puVar5[4]);
  if (-1 < iVar2) {
    *param_1 = puVar4;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
  puVar4 = &param_3;
LAB_004da261:
  puVar5 = (undefined4 *)FUN_004d9e50(puVar4,bVar7,puVar1,puVar5,param_4);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_004da2f0 @ 004da2f0  kind=gamemisc  attributed-by=none  size=129 */

void FUN_004da2f0(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined1 local_c [8];
  
  do {
    do {
      while( true ) {
        do {
          piVar3 = param_1;
          if (piVar3 == param_2) {
            return;
          }
          FUN_004da050(local_c,0,piVar3 + 4,DAT_0076b2a6);
          param_1 = piVar3;
        } while (*(char *)((int)piVar3 + 0xd) != '\0');
        param_1 = (int *)piVar3[2];
        if (*(char *)((int)param_1 + 0xd) != '\0') break;
        cVar1 = *(char *)(*param_1 + 0xd);
        piVar3 = (int *)*param_1;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0xd);
          param_1 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      param_1 = (int *)piVar3[1];
    } while (*(char *)((int)param_1 + 0xd) != '\0');
    do {
      if (piVar3 != (int *)param_1[2]) break;
      piVar2 = (int *)param_1[1];
      piVar3 = param_1;
      param_1 = piVar2;
    } while (*(char *)((int)piVar2 + 0xd) == '\0');
  } while( true );
}


/* FUN_004da730 @ 004da730  kind=gamemisc  attributed-by=none  size=55 */

undefined4 * FUN_004da730(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = operator_new(0x28);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  *puVar1 = *in_ECX;
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = *in_ECX;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *in_ECX;
  }
  return puVar1;
}


/* FUN_004da770 @ 004da770  kind=gamemisc  attributed-by=none  size=141 */

void FUN_004da770(uint param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = param_1;
  if (param_1 != 0) {
    piVar3 = (int *)(param_1 + 4);
    FUN_004da2f0(**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
    piVar1 = (int *)(param_1 + 0xc);
    if (piVar1 != piVar3) {
      FUN_00661940(*(undefined4 *)(*piVar1 + 4));
      param_1 = param_1 & 0xffffff00;
      *(int *)(*piVar1 + 4) = *piVar1;
      *(int *)*piVar1 = *piVar1;
      *(int *)(*piVar1 + 8) = *piVar1;
      *(undefined4 *)(uVar2 + 0x10) = 0;
      FUN_004d9b10(piVar3,param_1);
    }
    piVar3 = (int *)**(int **)(uVar2 + 0x38);
    if (piVar3 != *(int **)(uVar2 + 0x38)) {
      do {
        FUN_004da770(piVar3[2]);
        FUN_004da2f0(**(undefined4 **)(piVar3[2] + 0xc),*(undefined4 **)(piVar3[2] + 0xc));
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)*(int *)(uVar2 + 0x38));
    }
  }
  return;
}


/* FUN_004da800 @ 004da800  kind=gamemisc  attributed-by=none  size=75 */

undefined2 FUN_004da800(short param_1)

{
  if ((((((param_1 != 0x2e) && (param_1 != 0x3a)) && (param_1 != 0x2d)) &&
       ((param_1 != 0x2c && (param_1 != 0x3b)))) &&
      ((param_1 != 0x21 && ((param_1 != 0x3f && (param_1 != 0x2f)))))) &&
     ((param_1 != 0x28 && (param_1 != 0x29)))) {
    return 0;
  }
  return 1;
}


/* FUN_004da850 @ 004da850  kind=gamemisc  attributed-by=none  size=2102 */

/* WARNING: Type propagation algorithm not settling */

void FUN_004da850(undefined4 *param_1)

{
  short sVar1;
  int *piVar2;
  char cVar3;
  QuestTextNode *pQVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  short *******pppppppsVar9;
  undefined4 *puVar10;
  deleting_destructor *pdVar11;
  int in_ECX;
  uint extraout_ECX;
  uint uVar12;
  short *psVar13;
  undefined4 *extraout_EDX;
  uint uVar14;
  int in_stack_00000014;
  uint in_stack_00000018;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  int local_58;
  QuestTextNode *local_54;
  int local_50;
  short local_4c [2];
  QuestTextNode_vftable *local_48;
  int *local_44;
  uint local_40;
  QuestTextNode *local_3c;
  QuestTextNode *local_38;
  int local_34;
  QuestTextNode *local_30;
  short *******local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e9005;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar10 = (undefined4 *)(in_ECX + 4);
  local_8 = 0;
  local_58 = in_ECX;
  if (*(undefined4 **)(in_ECX + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 4))(1,local_14);
    *puVar10 = 0;
  }
  local_54 = operator_new(0x44);
  local_8._0_1_ = 1;
  if (local_54 == (QuestTextNode *)0x0) {
    pQVar4 = (QuestTextNode *)0x0;
  }
  else {
    pQVar4 = cube::QuestTextNode::QuestTextNode(local_54);
  }
  *puVar10 = pQVar4;
  local_8._0_1_ = 0;
  FUN_00661940(*(undefined4 *)(*(int *)(in_ECX + 8) + 4));
  *(int *)(*(int *)(in_ECX + 8) + 4) = *(int *)(in_ECX + 8);
  *(undefined4 *)*(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 8);
  *(int *)(*(int *)(in_ECX + 8) + 8) = *(int *)(in_ECX + 8);
  *(undefined4 *)(in_ECX + 0xc) = 0;
  local_40 = 0;
  piVar5 = (int *)FUN_0046d550(0,0);
  local_8._0_1_ = 2;
  local_44 = piVar5;
  iVar6 = FUN_00583cb0(piVar5,piVar5[1],puVar10);
  piVar5[1] = iVar6;
  **(int **)(iVar6 + 4) = iVar6;
  uVar14 = 1;
  local_40 = 1;
  local_54 = (QuestTextNode *)in_stack_00000014;
  local_50 = -1;
  local_34 = 0;
  uVar12 = in_stack_00000018;
  puVar10 = param_1;
  if (-1 < in_stack_00000014) {
    do {
      iVar6 = local_34;
      puVar7 = &param_1;
      if (7 < uVar12) {
        puVar7 = puVar10;
      }
      if (*(short *)((int)puVar7 + local_34 * 2) == 0x20) {
LAB_004da9f8:
        puVar7 = &param_1;
        if (7 < uVar12) {
          puVar7 = puVar10;
        }
        if (*(short *)((int)puVar7 + iVar6 * 2) == 0x7b) {
          local_30 = operator_new(0x44);
          local_8._0_1_ = 3;
          if (local_30 == (QuestTextNode *)0x0) {
            pQVar4 = (QuestTextNode *)0x0;
          }
          else {
            pQVar4 = cube::QuestTextNode::QuestTextNode(local_30);
          }
          (pQVar4->QuestTextNode_data).offset_0x3c = 2;
          local_38 = (QuestTextNode *)(*(int *)(piVar5[1] + 8) + 0x38);
          local_48 = local_38->vftablePtr;
          local_8._0_1_ = 2;
          local_3c = pQVar4;
          local_30 = (QuestTextNode *)
                     FUN_00583cb0(local_48,local_48[1].deleting_destructor,&local_3c);
          iVar6 = (local_38->QuestTextNode_data).offset_0x0;
          if (iVar6 == 0x15555554) goto LAB_004db0eb;
          (local_38->QuestTextNode_data).offset_0x0 = iVar6 + 1;
          local_48[1].deleting_destructor = (deleting_destructor *)local_30;
          *(QuestTextNode **)(local_30->QuestTextNode_data).offset_0x0 = local_30;
          (pQVar4->QuestTextNode_data).offset_0x30 = *(undefined4 *)(piVar5[1] + 8);
          iVar6 = FUN_00583cb0(piVar5,piVar5[1],&local_3c);
          if (uVar14 == 0x15555554) goto LAB_004db0eb;
          piVar5[1] = iVar6;
          **(int **)(iVar6 + 4) = iVar6;
          local_40 = uVar14 + 1;
          local_30 = operator_new(0x44);
          local_8._0_1_ = 4;
          if (local_30 == (QuestTextNode *)0x0) {
            local_3c = (QuestTextNode *)0x0;
          }
          else {
            local_3c = cube::QuestTextNode::QuestTextNode(local_30);
          }
          iVar6 = *(int *)(piVar5[1] + 8);
          local_30 = *(QuestTextNode **)(iVar6 + 0x38);
          local_8._0_1_ = 2;
          local_38 = local_3c;
          iVar8 = FUN_00583cb0(local_30,(local_30->QuestTextNode_data).offset_0x0,&local_38);
          if (*(int *)(iVar6 + 0x3c) == 0x15555554) goto LAB_004db0eb;
          *(int *)(iVar6 + 0x3c) = *(int *)(iVar6 + 0x3c) + 1;
          (local_30->QuestTextNode_data).offset_0x0 = iVar8;
          **(int **)(iVar8 + 4) = iVar8;
          (local_3c->QuestTextNode_data).offset_0x30 = *(undefined4 *)(piVar5[1] + 8);
          iVar6 = FUN_00583cb0(piVar5,piVar5[1],&local_38);
          if (uVar14 + 1 == 0x15555554) goto LAB_004db0eb;
          piVar5[1] = iVar6;
          uVar14 = uVar14 + 2;
          **(int **)(iVar6 + 4) = iVar6;
          local_40 = uVar14;
          uVar12 = in_stack_00000018;
          puVar10 = param_1;
          iVar6 = local_34;
        }
        puVar7 = &param_1;
        if (7 < uVar12) {
          puVar7 = puVar10;
        }
        if (*(short *)((int)puVar7 + iVar6 * 2) == 0x5b) {
          local_30 = operator_new(0x44);
          local_8._0_1_ = 5;
          if (local_30 == (QuestTextNode *)0x0) {
            pQVar4 = (QuestTextNode *)0x0;
          }
          else {
            pQVar4 = cube::QuestTextNode::QuestTextNode(local_30);
          }
          (pQVar4->QuestTextNode_data).offset_0x3c = 3;
          local_30 = (QuestTextNode *)(*(int *)(piVar5[1] + 8) + 0x38);
          local_48 = local_30->vftablePtr;
          local_8._0_1_ = 2;
          local_38 = pQVar4;
          local_3c = (QuestTextNode *)
                     FUN_00583cb0(local_48,local_48[1].deleting_destructor,&local_38);
          iVar6 = (local_30->QuestTextNode_data).offset_0x0;
          if (iVar6 == 0x15555554) goto LAB_004db0eb;
          (local_30->QuestTextNode_data).offset_0x0 = iVar6 + 1;
          local_48[1].deleting_destructor = (deleting_destructor *)local_3c;
          *(QuestTextNode **)(local_3c->QuestTextNode_data).offset_0x0 = local_3c;
          (pQVar4->QuestTextNode_data).offset_0x30 = *(undefined4 *)(piVar5[1] + 8);
          iVar6 = FUN_00583cb0(piVar5,piVar5[1],&local_38);
          if (uVar14 == 0x15555554) goto LAB_004db0eb;
          piVar5[1] = iVar6;
          uVar14 = uVar14 + 1;
          **(int **)(iVar6 + 4) = iVar6;
          local_40 = uVar14;
          uVar12 = in_stack_00000018;
          puVar10 = param_1;
        }
        if (local_50 + 1 < local_34) {
LAB_004dac89:
          FUN_0043a450(local_2c,local_50 + 1,(local_34 - local_50) + -1);
          pppppppsVar9 = (short *******)local_2c;
          if (7 < local_18) {
            pppppppsVar9 = local_2c[0];
          }
          local_8._0_1_ = 6;
          if (*(short *)pppppppsVar9 == 0x23) {
            FUN_004da050(local_68,0,local_2c,DAT_0076b2a6);
          }
          else {
            pppppppsVar9 = (short *******)local_2c;
            if (7 < local_18) {
              pppppppsVar9 = local_2c[0];
            }
            if (*(short *)pppppppsVar9 == 0x24) {
              FUN_004da050(local_60,0,local_2c,DAT_0076b2a6);
            }
            else {
              local_30 = operator_new(0x44);
              local_8._0_1_ = 7;
              if (local_30 == (QuestTextNode *)0x0) {
                pQVar4 = (QuestTextNode *)0x0;
              }
              else {
                pQVar4 = cube::QuestTextNode::QuestTextNode(local_30);
              }
              local_8._0_1_ = 6;
              local_30 = pQVar4;
              if ((short ********)&(pQVar4->QuestTextNode_data).offset_0x18 != local_2c) {
                FUN_0040f680(local_2c,0,0xffffffff);
              }
              local_48 = (QuestTextNode_vftable *)(*(int *)(piVar5[1] + 8) + 0x38);
              local_38 = (QuestTextNode *)local_48->deleting_destructor;
              local_30 = (QuestTextNode *)
                         FUN_00583cb0(local_38,(local_38->QuestTextNode_data).offset_0x0,&local_30);
              if (local_48[1].deleting_destructor == (deleting_destructor *)0x15555554)
              goto LAB_004db0eb;
              local_48[1].deleting_destructor = local_48[1].deleting_destructor + 1;
              (local_38->QuestTextNode_data).offset_0x0 = local_30;
              *(QuestTextNode **)(local_30->QuestTextNode_data).offset_0x0 = local_30;
              (pQVar4->QuestTextNode_data).offset_0x30 = *(undefined4 *)(piVar5[1] + 8);
              puVar10 = &param_1;
              if (7 < in_stack_00000018) {
                puVar10 = param_1;
              }
              sVar1 = *(short *)((int)puVar10 + local_34 * 2);
              if (((((sVar1 == 0x2e) || (sVar1 == 0x3a)) || (sVar1 == 0x2d)) ||
                  (((sVar1 == 0x2c || (sVar1 == 0x3b)) ||
                   ((sVar1 == 0x21 || ((sVar1 == 0x3f || (sVar1 == 0x2f)))))))) ||
                 ((sVar1 == 0x28 || (sVar1 == 0x29)))) {
                puVar10 = &param_1;
                if (7 < in_stack_00000018) {
                  puVar10 = param_1;
                }
                local_4c[0] = *(short *)((int)puVar10 + local_34 * 2);
                local_4c[1] = 0;
                local_30 = operator_new(0x44);
                local_8._0_1_ = 8;
                if (local_30 == (QuestTextNode *)0x0) {
                  pQVar4 = (QuestTextNode *)0x0;
                }
                else {
                  pQVar4 = cube::QuestTextNode::QuestTextNode(local_30);
                }
                local_8._0_1_ = 6;
                local_30 = pQVar4;
                if (local_4c[0] == 0) {
                  iVar6 = 0;
                }
                else {
                  psVar13 = local_4c;
                  do {
                    sVar1 = *psVar13;
                    psVar13 = psVar13 + 1;
                  } while (sVar1 != 0);
                  iVar6 = (int)psVar13 - (int)(local_4c + 1) >> 1;
                }
                FUN_0040f7a0(local_4c,iVar6);
                (pQVar4->QuestTextNode_data).offset_0x3c = 1;
                (pQVar4->QuestTextNode_data).offset_0x30 = *(undefined4 *)(piVar5[1] + 8);
                iVar6 = *(int *)(piVar5[1] + 8);
                local_48 = *(QuestTextNode_vftable **)(iVar6 + 0x38);
                pdVar11 = (deleting_destructor *)
                          FUN_00583cb0(local_48,local_48[1].deleting_destructor,&local_30);
                if (*(int *)(iVar6 + 0x3c) == 0x15555554) goto LAB_004db0eb;
                *(int *)(iVar6 + 0x3c) = *(int *)(iVar6 + 0x3c) + 1;
                local_48[1].deleting_destructor = pdVar11;
                **(undefined4 **)(pdVar11 + 4) = pdVar11;
              }
            }
          }
          local_8._0_1_ = 2;
          puVar10 = param_1;
          if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_2c[0]);
          }
        }
        else {
          puVar7 = &param_1;
          if (7 < uVar12) {
            puVar7 = puVar10;
          }
          sVar1 = *(short *)((int)puVar7 + local_34 * 2);
          if (((((((sVar1 == 0x2e) || (sVar1 == 0x3a)) || (sVar1 == 0x2d)) ||
                ((sVar1 == 0x2c || (sVar1 == 0x3b)))) ||
               ((sVar1 == 0x21 || ((sVar1 == 0x3f || (sVar1 == 0x2f)))))) || (sVar1 == 0x28)) ||
             (sVar1 == 0x29)) goto LAB_004dac89;
        }
        puVar7 = &param_1;
        if (7 < in_stack_00000018) {
          puVar7 = puVar10;
        }
        local_50 = local_34;
        if (*(short *)((int)puVar7 + local_34 * 2) == 0x7c) {
          if (uVar14 < 2) goto LAB_004db094;
          piVar2 = (int *)piVar5[1];
          if (piVar2 != piVar5) {
            *(int *)piVar2[1] = *piVar2;
            *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
            operator_delete(piVar2);
          }
          local_30 = operator_new(0x44);
          local_8._0_1_ = 9;
          if (local_30 == (QuestTextNode *)0x0) {
            local_3c = (QuestTextNode *)0x0;
          }
          else {
            local_3c = cube::QuestTextNode::QuestTextNode(local_30);
          }
          iVar6 = *(int *)(piVar5[1] + 8);
          local_30 = *(QuestTextNode **)(iVar6 + 0x38);
          local_8._0_1_ = 2;
          local_38 = local_3c;
          iVar8 = FUN_00583cb0(local_30,(local_30->QuestTextNode_data).offset_0x0,&local_3c);
          if (*(int *)(iVar6 + 0x3c) == 0x15555554) {
LAB_004db0eb:
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("list<T> too long");
          }
          *(int *)(iVar6 + 0x3c) = *(int *)(iVar6 + 0x3c) + 1;
          (local_30->QuestTextNode_data).offset_0x0 = iVar8;
          **(int **)(iVar8 + 4) = iVar8;
          (local_38->QuestTextNode_data).offset_0x30 = *(undefined4 *)(piVar5[1] + 8);
          iVar6 = FUN_00583cb0(piVar5,piVar5[1],&local_3c);
          if (uVar14 == 0x15555554) goto LAB_004db0eb;
          piVar5[1] = iVar6;
          uVar14 = uVar14 + 1;
          **(int **)(iVar6 + 4) = iVar6;
          local_40 = uVar14;
          puVar10 = param_1;
        }
        puVar7 = &param_1;
        if (7 < in_stack_00000018) {
          puVar7 = puVar10;
        }
        if (*(short *)((int)puVar7 + local_34 * 2) == 0x7d) {
          if (uVar14 < 3) goto LAB_004db094;
          piVar2 = (int *)piVar5[1];
          if (piVar2 != piVar5) {
            *(int *)piVar2[1] = *piVar2;
            *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
            operator_delete(piVar2);
          }
          piVar2 = (int *)piVar5[1];
          if (piVar2 != piVar5) {
            *(int *)piVar2[1] = *piVar2;
            *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
            operator_delete(piVar2);
          }
        }
        puVar7 = &param_1;
        if (7 < in_stack_00000018) {
          puVar7 = puVar10;
        }
        uVar12 = in_stack_00000018;
        iVar6 = local_34;
        if (*(short *)((int)puVar7 + local_34 * 2) == 0x5d) {
          if (uVar14 < 2) goto LAB_004db094;
          piVar2 = (int *)piVar5[1];
          if (piVar2 != piVar5) {
            *(int *)piVar2[1] = *piVar2;
            *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
            operator_delete(piVar2);
          }
        }
      }
      else {
        puVar7 = &param_1;
        if (7 < uVar12) {
          puVar7 = puVar10;
        }
        if (*(short *)((int)puVar7 + local_34 * 2) == 10) goto LAB_004da9f8;
        puVar7 = &param_1;
        if (7 < uVar12) {
          puVar7 = puVar10;
        }
        if (*(short *)((int)puVar7 + local_34 * 2) == 9) goto LAB_004da9f8;
        puVar7 = &param_1;
        if (7 < uVar12) {
          puVar7 = puVar10;
        }
        if (*(short *)((int)puVar7 + local_34 * 2) == 0) goto LAB_004da9f8;
        puVar7 = &param_1;
        if (7 < uVar12) {
          puVar7 = puVar10;
        }
        cVar3 = FUN_004da800(*(undefined2 *)((int)puVar7 + local_34 * 2));
        uVar12 = extraout_ECX;
        puVar10 = extraout_EDX;
        if (cVar3 != '\0') goto LAB_004da9f8;
        puVar7 = &param_1;
        if (7 < extraout_ECX) {
          puVar7 = extraout_EDX;
        }
        if (*(short *)((int)puVar7 + iVar6 * 2) == 0x7b) goto LAB_004da9f8;
        puVar7 = &param_1;
        if (7 < extraout_ECX) {
          puVar7 = extraout_EDX;
        }
        if (*(short *)((int)puVar7 + iVar6 * 2) == 0x7d) goto LAB_004da9f8;
        puVar7 = &param_1;
        if (7 < extraout_ECX) {
          puVar7 = extraout_EDX;
        }
        if (*(short *)((int)puVar7 + iVar6 * 2) == 0x5b) goto LAB_004da9f8;
        puVar7 = &param_1;
        if (7 < extraout_ECX) {
          puVar7 = extraout_EDX;
        }
        if (*(short *)((int)puVar7 + iVar6 * 2) == 0x5d) goto LAB_004da9f8;
        puVar7 = &param_1;
        if (7 < extraout_ECX) {
          puVar7 = extraout_EDX;
        }
        if (*(short *)((int)puVar7 + iVar6 * 2) == 0x7c) goto LAB_004da9f8;
      }
      local_34 = iVar6 + 1;
    } while (iVar6 + 1 <= (int)local_54);
  }
  FUN_004da770(*(undefined4 *)(local_58 + 4));
LAB_004db094:
  piVar2 = (int *)*piVar5;
  *piVar5 = (int)piVar5;
  piVar5[1] = (int)piVar5;
  if (piVar2 == piVar5) {
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar5);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(piVar2);
}


/* FUN_004dc680 @ 004dc680  kind=gamemisc  attributed-by=none  size=155 */

void FUN_004dc680(int param_1,int param_2,int param_3)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e9100;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00451e80(param_1,*(undefined4 *)(param_1 + 4),param_2);
    if (*(int *)(in_ECX + 4) == 0x9249248) break;
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = param_2 + 0x14;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_004dc8e0 @ 004dc8e0  kind=gamemisc  attributed-by=none  size=2752 */

void FUN_004dc8e0(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int in_ECX;
  int iVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *local_130;
  int local_128;
  undefined4 *local_124;
  int local_118;
  int local_10c;
  int local_108 [23];
  uint local_ac;
  uint uStack_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined1 local_87;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  uint local_50;
  uint uStack_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined8 local_30;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_006e9199;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00601cb0(local_14);
  local_128 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x2c) - *(int *)(in_ECX + 0x28) & 0xfffffffcU)) {
    do {
      iVar1 = local_128 * 4;
      iVar7 = *(int *)(*(int *)(in_ECX + 0x28) + iVar1);
      if (iVar7 != 0) {
        FUN_004545a0(*(undefined4 *)(iVar7 + 0x30),*(undefined4 *)param_1[6],
                     (undefined4 *)param_1[6],local_108[0]);
        FUN_004540c0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x18),
                     *(undefined4 *)*param_1,(undefined4 *)*param_1,local_108[0]);
        iVar7 = *(int *)(in_ECX + 4);
        FUN_00477d90(local_108,*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x10);
        if (local_108[0] == *(int *)(iVar7 + 4)) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(local_108[0] + 0x18);
        }
        piVar11 = *(int **)param_1[4];
        if (piVar11 == (int *)param_1[4]) goto LAB_004dcb52;
        goto LAB_004dc9f7;
      }
      local_128 = local_128 + 1;
    } while (local_128 < *(int *)(in_ECX + 0x2c) - *(int *)(in_ECX + 0x28) >> 2);
  }
  FUN_00601e90();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
LAB_004dc9f7:
  do {
    local_68 = piVar11[2] - *(uint *)(iVar7 + 0x10);
    iStack_64 = (piVar11[3] - *(int *)(iVar7 + 0x14)) -
                (uint)((uint)piVar11[2] < *(uint *)(iVar7 + 0x10));
    local_60 = piVar11[4] - *(uint *)(iVar7 + 0x18);
    iStack_5c = (piVar11[5] - *(int *)(iVar7 + 0x1c)) -
                (uint)((uint)piVar11[4] < *(uint *)(iVar7 + 0x18));
    local_58 = piVar11[6] - *(uint *)(iVar7 + 0x20);
    iStack_54 = (piVar11[7] - *(int *)(iVar7 + 0x24)) -
                (uint)((uint)piVar11[6] < *(uint *)(iVar7 + 0x20));
    local_3c = (float)CONCAT44(iStack_64,local_68) * 1.5258789e-05;
    local_38 = (float)CONCAT44(iStack_5c,local_60) * 1.5258789e-05;
    local_34 = (float)CONCAT44(iStack_54,local_58) * 1.5258789e-05;
    if (local_38 * local_38 + local_3c * local_3c + local_34 * local_34 < 40000.0) {
      iVar10 = *(int *)(*(int *)(in_ECX + 0x28) + local_128 * 4);
      iVar9 = *(int *)(iVar10 + 0x28);
      iVar8 = FUN_004520d0(iVar9,*(undefined4 *)(iVar9 + 4),piVar11 + 2);
      if (*(int *)(iVar10 + 0x2c) == 0x3333332) goto LAB_004dd5c9;
      *(int *)(iVar10 + 0x2c) = *(int *)(iVar10 + 0x2c) + 1;
      *(int *)(iVar9 + 4) = iVar8;
      **(int **)(iVar8 + 4) = iVar8;
    }
    piVar11 = (int *)*piVar11;
  } while (piVar11 != (int *)param_1[4]);
LAB_004dcb52:
  piVar11 = *(int **)param_1[2];
  if (piVar11 != (int *)param_1[2]) {
    do {
      local_48 = (float)*(longlong *)(iVar7 + 0x10) * 1.5258789e-05;
      local_44 = (float)*(longlong *)(iVar7 + 0x18) * 1.5258789e-05;
      uVar2 = *(undefined8 *)(piVar11 + 2);
      local_30._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
      local_30._4_4_ = local_30._4_4_ - local_44;
      local_40 = (float)*(longlong *)(iVar7 + 0x20) * 1.5258789e-05;
      local_30._0_4_ = (float)uVar2;
      local_30._0_4_ = (float)local_30 - local_48;
      local_28 = (float)piVar11[4] - local_40;
      if (local_30._4_4_ * local_30._4_4_ + (float)local_30 * (float)local_30 + local_28 * local_28
          < 40000.0) {
        iVar10 = *(int *)(*(int *)(in_ECX + 0x28) + iVar1);
        iVar9 = *(int *)(iVar10 + 0x20);
        iVar8 = FUN_0058d860(iVar9,*(undefined4 *)(iVar9 + 4),piVar11 + 2);
        if (*(int *)(iVar10 + 0x24) == 0x7fffffe) goto LAB_004dd5c9;
        *(int *)(iVar10 + 0x24) = *(int *)(iVar10 + 0x24) + 1;
        *(int *)(iVar9 + 4) = iVar8;
        **(int **)(iVar8 + 4) = iVar8;
      }
      piVar11 = (int *)*piVar11;
    } while (piVar11 != (int *)param_1[2]);
  }
  FUN_00453ff0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x38),
               *(undefined4 *)param_1[8],(undefined4 *)param_1[8],local_108[0]);
  FUN_00454670(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x40),
               *(undefined4 *)param_1[10],(undefined4 *)param_1[10],local_108[0]);
  FUN_004548e0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x48),
               *(undefined4 *)param_1[0xc],(undefined4 *)param_1[0xc],local_108[0]);
  FUN_004dc4e0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x50),
               *(undefined4 *)param_1[0xe],(undefined4 *)param_1[0xe],local_108[0]);
  FUN_00454740(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x58),
               *(undefined4 *)param_1[0x10],(undefined4 *)param_1[0x10],local_108[0]);
  FUN_004dc5b0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x60),
               *(undefined4 *)param_1[0x12],(undefined4 *)param_1[0x12],local_108[0]);
  FUN_004dc5b0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x68),
               *(undefined4 *)param_1[0x14],(undefined4 *)param_1[0x14],local_108[0]);
  FUN_004544d0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x70),
               *(undefined4 *)param_1[0x16],(undefined4 *)param_1[0x16],local_108[0]);
  FUN_00454810(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x78),
               *(undefined4 *)param_1[0x18],(undefined4 *)param_1[0x18],local_108[0]);
  EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x98));
  FUN_00459250(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x80);
  local_8 = 0;
  FUN_00459250(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x88);
  local_8._0_1_ = 1;
  iVar7 = *(int *)(*(int *)(in_ECX + 0x28) + iVar1);
  puVar3 = *(undefined4 **)(iVar7 + 0x80);
  pvVar4 = (void *)*puVar3;
  *puVar3 = puVar3;
  *(int *)(*(int *)(iVar7 + 0x80) + 4) = *(int *)(iVar7 + 0x80);
  *(undefined4 *)(iVar7 + 0x84) = 0;
  if (pvVar4 != *(void **)(iVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar4);
  }
  iVar7 = *(int *)(*(int *)(in_ECX + 0x28) + iVar1);
  puVar3 = *(undefined4 **)(iVar7 + 0x88);
  pvVar4 = (void *)*puVar3;
  *puVar3 = puVar3;
  *(int *)(*(int *)(iVar7 + 0x88) + 4) = *(int *)(iVar7 + 0x88);
  *(undefined4 *)(iVar7 + 0x8c) = 0;
  if (pvVar4 != *(void **)(iVar7 + 0x88)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar4);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x98));
  puVar3 = (undefined4 *)*local_124;
  do {
    if (puVar3 == local_124) {
      puVar3 = (undefined4 *)*local_130;
      do {
        if (puVar3 == local_130) {
          puVar3 = (undefined4 *)*local_130;
          *local_130 = local_130;
          local_130[1] = local_130;
          if (puVar3 == local_130) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_130);
          }
                    /* WARNING: Subroutine does not return */
          operator_delete(puVar3);
        }
        FUN_00601cb0();
        local_118 = 0;
        do {
          local_10c = 0;
          do {
            uStack_4c = ((int)((puVar3[3] * 0x40 >> 0x1f & 7U) + puVar3[3] * 0x40) >> 3) + local_10c
            ;
            local_50 = ((int)((puVar3[2] * 0x40 >> 0x1f & 7U) + puVar3[2] * 0x40) >> 3) + local_118;
            if ((((-1 < (int)local_50) && (-1 < (int)uStack_4c)) && ((int)local_50 < 0x2000)) &&
               ((int)uStack_4c < 0x2000)) {
              iVar7 = (int)(((int)(local_50 * 8) >> 0x1f & 0x3fU) + local_50 * 8) >> 6;
              iVar10 = (int)(((int)(uStack_4c * 8) >> 0x1f & 0x3fU) + uStack_4c * 8) >> 6;
              if (((-1 < iVar7) && (-1 < iVar10)) &&
                 ((iVar7 < 0x400 &&
                  ((iVar10 < 0x400 &&
                   (iVar7 = *(int *)(*(int *)(in_ECX + 4) + 0xbc + (iVar7 * 0x400 + iVar10) * 4),
                   iVar7 != 0)))))) {
                uVar12 = local_50 & 0x80000007;
                if ((int)uVar12 < 0) {
                  uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
                }
                uVar13 = uStack_4c & 0x80000007;
                if ((int)uVar13 < 0) {
                  uVar13 = (uVar13 - 1 | 0xfffffff8) + 1;
                }
                iVar7 = iVar7 + 0x14018 + (uVar13 + uVar12 * 8) * 0x68;
                if (iVar7 != 0) {
                  local_9c = *(undefined4 *)(iVar7 + 0x2c);
                  local_98 = *(undefined4 *)(iVar7 + 0x30);
                  local_94 = *(undefined4 *)(iVar7 + 0x34);
                  local_90 = *(undefined4 *)(iVar7 + 0x38);
                  local_8c = *(undefined4 *)(iVar7 + 0x3c);
                  local_88 = *(undefined1 *)(iVar7 + 0x40);
                  local_87 = *(undefined1 *)(iVar7 + 0x41);
                  local_84 = *(undefined4 *)(iVar7 + 0x44);
                  local_80 = *(undefined4 *)(iVar7 + 0x48);
                  local_7c = *(undefined4 *)(iVar7 + 0x4c);
                  local_78 = *(undefined4 *)(iVar7 + 0x50);
                  iVar7 = *(int *)(*(int *)(in_ECX + 0x28) + iVar1);
                  iVar10 = *(int *)(iVar7 + 0x78);
                  local_a4 = 0;
                  local_ac = local_50;
                  uStack_a8 = uStack_4c;
                  iVar9 = FUN_00451d40(iVar10,*(undefined4 *)(iVar10 + 4),&local_ac);
                  if (*(int *)(iVar7 + 0x7c) == 0x3fffffe) goto LAB_004dd5c9;
                  *(int *)(iVar7 + 0x7c) = *(int *)(iVar7 + 0x7c) + 1;
                  *(int *)(iVar10 + 4) = iVar9;
                  **(int **)(iVar9 + 4) = iVar9;
                }
              }
            }
            local_10c = local_10c + 1;
          } while (local_10c < 8);
          local_118 = local_118 + 1;
        } while (local_118 < 8);
        FUN_00601e90();
        puVar3 = (undefined4 *)*puVar3;
      } while( true );
    }
    FUN_00601cb0();
    uVar12 = puVar3[2];
    uVar13 = puVar3[3];
    if ((((-1 < (int)uVar12) && (-1 < (int)uVar13)) && ((int)uVar12 < 0x10000)) &&
       ((int)uVar13 < 0x10000)) {
      iVar7 = (int)(uVar13 + ((int)uVar13 >> 0x1f & 0x3fU)) >> 6;
      iVar10 = (int)(((int)uVar12 >> 0x1f & 0x3fU) + uVar12) >> 6;
      if (((-1 < iVar10) && (-1 < iVar7)) &&
         ((iVar10 < 0x400 &&
          ((iVar7 < 0x400 &&
           (iVar7 = *(int *)(*(int *)(in_ECX + 4) + 0xbc + (iVar10 * 0x400 + iVar7) * 4), iVar7 != 0
           )))))) {
        uVar12 = uVar12 & 0x8000003f;
        if ((int)uVar12 < 0) {
          uVar12 = (uVar12 - 1 | 0xffffffc0) + 1;
        }
        uVar13 = uVar13 & 0x8000003f;
        if ((int)uVar13 < 0) {
          uVar13 = (uVar13 - 1 | 0xffffffc0) + 1;
        }
        iVar7 = *(int *)(iVar7 + 0x10018 + (uVar12 * 0x40 + uVar13) * 4);
        if (iVar7 != 0) {
          FUN_004dc680(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x30),
                       *(undefined4 *)(iVar7 + 0x68),*(undefined4 *)(iVar7 + 0x6c),local_108[0]);
          local_24 = *(undefined4 *)(iVar7 + 0x60);
          uVar5 = *(undefined4 *)(iVar7 + 0x34);
          local_20 = *(undefined4 *)(iVar7 + 100);
          uVar6 = *(undefined4 *)(iVar7 + 0x30);
          local_1c = (undefined4 *)0x0;
          local_18 = 0;
          local_1c = (undefined4 *)FUN_0046d8d0(0,0);
          local_8._0_1_ = 2;
          FUN_004dc470(uVar6,uVar5);
          local_8._0_1_ = 3;
          iVar1 = *(int *)(*(int *)(in_ECX + 0x28) + iVar1);
          iVar7 = *(int *)(iVar1 + 0x40);
          iVar10 = FUN_00451f50(iVar7,*(undefined4 *)(iVar7 + 4),&local_24);
          if (*(int *)(iVar1 + 0x44) != 0xaaaaaa9) {
            *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + 1;
            *(int *)(iVar7 + 4) = iVar10;
            local_8 = CONCAT31(local_8._1_3_,1);
            **(int **)(iVar10 + 4) = iVar10;
            puVar3 = (undefined4 *)*local_1c;
            *local_1c = local_1c;
            local_1c[1] = local_1c;
            local_18 = 0;
            if (puVar3 == local_1c) {
                    /* WARNING: Subroutine does not return */
              operator_delete(local_1c);
            }
                    /* WARNING: Subroutine does not return */
            operator_delete(puVar3);
          }
LAB_004dd5c9:
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("list<T> too long");
        }
      }
    }
    FUN_00601e90();
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}


/* FUN_004df760 @ 004df760  kind=gamemisc  attributed-by=none  size=275 */

void FUN_004df760(void)

{
  int iVar1;
  bool bVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  int *piVar5;
  float10 fVar6;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  bVar2 = false;
  iVar3 = 0;
  iVar1 = *(int *)(*(int *)(in_ECX + 400) + 0x8006d0);
  piVar4 = (int *)(in_ECX + 0x160);
  piVar5 = (int *)(iVar1 + 0x1138);
  do {
    if (*piVar4 != *piVar5) {
      bVar2 = true;
      break;
    }
    iVar3 = iVar3 + 1;
    piVar5 = piVar5 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar3 < 0xb);
  if ((*(uint *)(in_ECX + 0x18c) == (uint)*(byte *)(iVar1 + 0x141)) && (!bVar2)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_006294d0(&local_10);
  fVar6 = (float10)FUN_00627ce0();
  if (((((float)fVar6 - 30.0 < local_c) && (fVar6 = (float10)FUN_00627ce0(), local_c < (float)fVar6)
       ) && (fVar6 = (float10)FUN_00627d50(), (float)fVar6 * 0.5 < local_10)) &&
     (fVar6 = (float10)FUN_00627d50(), local_10 < (float)fVar6)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004df880 @ 004df880  kind=gamemisc  attributed-by=none  size=317 */

void FUN_004df880(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  int *piVar6;
  float10 fVar7;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  bVar1 = false;
  iVar4 = 0;
  iVar3 = *(int *)(*(int *)(in_ECX + 400) + 0x8006d0);
  piVar5 = (int *)(in_ECX + 0x160);
  piVar6 = (int *)(iVar3 + 0x1138);
  do {
    if (*piVar5 != *piVar6) {
      bVar1 = true;
      break;
    }
    iVar4 = iVar4 + 1;
    piVar6 = piVar6 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar4 < 0xb);
  if ((((*(uint *)(in_ECX + 0x18c) == (uint)*(byte *)(iVar3 + 0x141)) && (!bVar1)) ||
      (iVar3 = FUN_004df9c0(),
      *(int *)(*(int *)(*(int *)(in_ECX + 400) + 0x8006d0) + 0x1304) < iVar3)) ||
     ((0 < iVar3 && (cVar2 = FUN_0047f030(), cVar2 == '\0')))) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_006294d0(&local_10);
  fVar7 = (float10)FUN_00627ce0();
  if ((((float)fVar7 - 30.0 < local_c) &&
      ((fVar7 = (float10)FUN_00627ce0(), local_c < (float)fVar7 &&
       (fVar7 = (float10)FUN_00627d50(), local_10 < (float)fVar7 * 0.5)))) && (0.0 < local_10)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004df9c0 @ 004df9c0  kind=gamemisc  attributed-by=none  size=233 */

int FUN_004df9c0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  float10 fVar3;
  float fVar4;
  undefined4 local_8;
  
  fVar4 = 0.0;
  local_8 = 0.0;
  iVar2 = 0x1138;
  do {
    iVar1 = *(int *)(*(int *)(in_ECX + 400) + 0x8006d0);
    if (*(int *)(in_ECX + -0xfd8 + iVar2) < *(int *)(iVar2 + iVar1)) {
      fVar3 = (float10)FUN_00445f60((float)*(int *)(iVar1 + 400),0);
      fVar4 = (float)fVar3 * (float)(*(int *)(iVar2 + iVar1) - *(int *)(in_ECX + -0xfd8 + iVar2)) *
              10.0 + local_8;
      local_8 = fVar4;
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x1164);
  iVar2 = *(int *)(*(int *)(in_ECX + 400) + 0x8006d0);
  if ((*(uint *)(in_ECX + 0x18c) != (uint)*(byte *)(iVar2 + 0x141)) && (1 < *(int *)(iVar2 + 400)))
  {
    fVar3 = (float10)FUN_00445f60((float)*(int *)(iVar2 + 400),0);
    fVar4 = (float)fVar3 * 100.0 + local_8;
  }
  return (int)fVar4;
}


/* FUN_004e0940 @ 004e0940  kind=gamemisc  attributed-by=none  size=609 */

void FUN_004e0940(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
                 int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e9508;
  local_10 = ExceptionList;
  if (0x4924922 < (uint)in_ECX[1]) {
    local_8 = 0;
    ExceptionList = &local_10;
    cube::QuestText::~QuestText((QuestText *)(param_5 + 10));
    local_8 = 0xffffffff;
    if ((uint)param_5[9] < 8) {
      param_5[9] = 7;
      param_5[8] = 0;
      *(undefined2 *)(param_5 + 4) = 0;
                    /* WARNING: Subroutine does not return */
      operator_delete(param_5);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_5[4]);
  }
  in_ECX[1] = in_ECX[1] + 1;
  param_5[1] = (int)param_3;
  if (param_3 == (undefined4 *)*in_ECX) {
    ((undefined4 *)*in_ECX)[1] = param_5;
    *(int **)*in_ECX = param_5;
    *(int **)(*in_ECX + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*in_ECX + 8)) {
      *(int **)(*in_ECX + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == *(undefined4 **)*in_ECX) {
      *(int **)*in_ECX = param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*in_ECX + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar6 = (int *)piVar4[1];
    piVar5 = *(int **)piVar6[1];
    if (piVar6 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar6[1])[2];
      if ((char)piVar5[3] == '\0') goto LAB_004e0ad7;
      if (piVar4 == (int *)piVar6[2]) {
        piVar4 = (int *)piVar6[2];
        piVar6[2] = *piVar4;
        if (*(char *)(*piVar4 + 0xd) == '\0') {
          *(int **)(*piVar4 + 4) = piVar6;
        }
        piVar4[1] = piVar6[1];
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int **)(*in_ECX + 4) = piVar4;
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
      if (piVar6 == *(int **)(*in_ECX + 4)) {
        *(int **)(*in_ECX + 4) = piVar5;
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
LAB_004e0b80:
      piVar6[1] = (int)piVar5;
    }
    else {
      if ((char)piVar5[3] != '\0') {
        if (piVar4 == (int *)*piVar6) {
          iVar3 = *piVar6;
          *piVar6 = *(int *)(iVar3 + 8);
          if (*(char *)(*(int *)(iVar3 + 8) + 0xd) == '\0') {
            *(int **)(*(int *)(iVar3 + 8) + 4) = piVar6;
          }
          *(int *)(iVar3 + 4) = piVar6[1];
          if (piVar6 == *(int **)(*in_ECX + 4)) {
            *(int *)(*in_ECX + 4) = iVar3;
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
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int **)(*in_ECX + 4) = piVar5;
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
        goto LAB_004e0b80;
      }
LAB_004e0ad7:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_004e0fe0 @ 004e0fe0  kind=gamemisc  attributed-by=none  size=468 */

undefined4 * FUN_004e0fe0(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *in_ECX;
  undefined4 uVar5;
  uint uStack_2c;
  undefined1 local_1c [4];
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e9570;
  local_10 = ExceptionList;
  uStack_2c = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_2c;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[1] == 0) {
    param_2 = (int *)*in_ECX;
    local_14 = (undefined1 *)&uStack_2c;
  }
  else {
    piVar3 = (int *)*in_ECX;
    if (param_2 != (int *)*piVar3) {
      if (param_2 == piVar3) {
        puVar4 = param_3;
        if (7 < (uint)param_3[5]) {
          puVar4 = (undefined4 *)*param_3;
        }
        local_14 = (undefined1 *)&uStack_2c;
        iVar2 = FUN_00428db0(0,*(undefined4 *)(piVar3[2] + 0x20),puVar4,param_3[4]);
        if (-1 < iVar2) goto LAB_004e1181;
        param_2 = *(int **)(*in_ECX + 8);
        uVar5 = 0;
        goto LAB_004e1029;
      }
      piVar3 = param_2 + 4;
      if (7 < (uint)param_2[9]) {
        piVar3 = (int *)*piVar3;
      }
      local_18 = in_ECX;
      iVar2 = FUN_00428db0(0,param_3[4],piVar3,param_2[8]);
      if (iVar2 < 0) {
        FUN_0042c740();
        cVar1 = FUN_0046d1f0(param_2 + 4,param_3);
        if (cVar1 == '\0') goto LAB_004e1126;
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          uVar5 = 1;
          goto LAB_004e1029;
        }
      }
      else {
LAB_004e1126:
        cVar1 = FUN_0046d1f0(param_2 + 4,param_3);
        if ((cVar1 == '\0') ||
           ((FUN_005c3ea0(), param_2 != (int *)*local_18 &&
            (cVar1 = FUN_0046d1f0(param_3,param_2 + 4), cVar1 == '\0')))) {
LAB_004e1181:
          local_8 = 0xffffffff;
          puVar4 = (undefined4 *)FUN_004e1480(local_1c,0,param_3,param_4);
          *param_1 = *puVar4;
          ExceptionList = local_10;
          return param_1;
        }
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          uVar5 = 1;
          goto LAB_004e1029;
        }
      }
      uVar5 = 0;
      goto LAB_004e1029;
    }
    piVar3 = param_2 + 4;
    if (7 < (uint)param_2[9]) {
      piVar3 = (int *)*piVar3;
    }
    local_14 = (undefined1 *)&uStack_2c;
    iVar2 = FUN_00428db0(0,param_3[4],piVar3,param_2[8]);
    if (-1 < iVar2) goto LAB_004e1181;
  }
  uVar5 = 1;
LAB_004e1029:
  FUN_004e0940(param_1,uVar5,param_2,param_3,param_4);
  ExceptionList = local_10;
  return param_1;
}


/* FUN_004e1480 @ 004e1480  kind=gamemisc  attributed-by=none  size=324 */

void FUN_004e1480(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *in_ECX;
  bool bVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar5 = param_3;
  puStack_c = &LAB_006e95d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar7 = true;
  local_8 = 0;
  puVar1 = (undefined4 *)*in_ECX;
  puVar4 = (undefined4 *)((undefined4 *)*in_ECX)[1];
  while (*(char *)((int)puVar4 + 0xd) == '\0') {
    if ((char)param_2 == '\0') {
      piVar3 = puVar4 + 4;
      if (7 < (uint)puVar4[9]) {
        piVar3 = (int *)*piVar3;
      }
      iVar2 = FUN_00428db0(0,puVar5[4],piVar3,puVar4[8]);
      bVar7 = iVar2 < 0;
    }
    else {
      puVar1 = puVar5;
      if (7 < (uint)puVar5[5]) {
        puVar1 = (undefined4 *)*puVar5;
      }
      iVar2 = FUN_00428db0(0,puVar4[8],puVar1,puVar5[4]);
      bVar7 = -1 < iVar2;
    }
    puVar1 = puVar4;
    if (bVar7 == false) {
      puVar4 = (undefined4 *)puVar4[2];
    }
    else {
      puVar4 = (undefined4 *)*puVar4;
    }
  }
  param_2 = puVar1;
  if (bVar7 != false) {
    if (puVar1 == *(undefined4 **)*in_ECX) {
      puVar4 = &param_2;
      bVar7 = true;
      goto LAB_004e1541;
    }
    FUN_0042c740();
  }
  puVar4 = param_2;
  puVar6 = puVar5;
  if (7 < (uint)puVar5[5]) {
    puVar6 = (undefined4 *)*puVar5;
  }
  iVar2 = FUN_00428db0(0,param_2[8],puVar6,puVar5[4]);
  if (-1 < iVar2) {
    FUN_004e3550(param_4);
    *param_1 = puVar4;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
  puVar4 = &param_3;
LAB_004e1541:
  puVar5 = (undefined4 *)FUN_004e0940(puVar4,bVar7,puVar1,puVar5,param_4);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_004e16b0 @ 004e16b0  kind=gamemisc  attributed-by=none  size=207 */

void FUN_004e16b0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int *piVar3;
  uint uStack_28;
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e9610;
  local_10 = ExceptionList;
  uStack_28 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_28;
  ExceptionList = &local_10;
  piVar3 = (int *)*in_ECX;
  local_8 = 0;
  for (; piVar3 = (int *)*piVar3, param_1 != param_2; param_1 = (undefined4 *)*param_1) {
    if (piVar3 == (int *)*in_ECX) goto LAB_004e1715;
    if (piVar3 + 2 != param_1 + 2) {
      FUN_0040f680(param_1 + 2,0,0xffffffff);
    }
  }
LAB_004e176e:
  FUN_004e42c0(local_18,piVar3,*in_ECX);
  ExceptionList = local_10;
  return;
LAB_004e1715:
  for (; param_1 != param_2; param_1 = (undefined4 *)*param_1) {
    iVar1 = *in_ECX;
    iVar2 = FUN_004521c0(iVar1,*(undefined4 *)(iVar1 + 4),param_1 + 2);
    if (in_ECX[1] == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    in_ECX[1] = in_ECX[1] + 1;
    *(int *)(iVar1 + 4) = iVar2;
    **(int **)(iVar2 + 4) = iVar2;
  }
  goto LAB_004e176e;
}


/* FUN_004e2d90 @ 004e2d90  kind=gamemisc  attributed-by=none  size=88 */

void FUN_004e2d90(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *in_ECX;
  
  piVar1 = param_1;
  if (in_ECX != param_1) {
    FUN_0046dbc0(*(undefined4 *)(*in_ECX + 4));
    param_1 = (int *)((uint)param_1 & 0xffffff00);
    *(int *)(*in_ECX + 4) = *in_ECX;
    *(int *)*in_ECX = *in_ECX;
    *(int *)(*in_ECX + 8) = *in_ECX;
    in_ECX[1] = 0;
    FUN_004e03c0(piVar1,param_1);
  }
  piVar1 = piVar1 + 2;
  if (in_ECX + 2 != piVar1) {
    puVar2 = (undefined4 *)*piVar1;
    FUN_004e16b0(*puVar2,puVar2);
  }
  return;
}


/* FUN_004e2f00 @ 004e2f00  kind=gamemisc  attributed-by=none  size=314 */

void FUN_004e2f00(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  undefined4 local_54;
  undefined4 local_50;
  void *local_4c;
  undefined4 local_48;
  undefined1 local_41;
  undefined1 *local_40;
  undefined1 local_3c [24];
  undefined1 local_24 [16];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e9998;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  iVar2 = FUN_004e3790(param_1);
  if (iVar2 != *in_ECX) {
    piVar3 = (int *)(iVar2 + 0x10);
    if (7 < *(uint *)(iVar2 + 0x24)) {
      piVar3 = (int *)*piVar3;
    }
    iVar4 = FUN_00428db0(0,*(undefined4 *)(param_1 + 0x10),piVar3,*(undefined4 *)(iVar2 + 0x20));
    if (-1 < iVar4) {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  local_54 = 0;
  local_50 = 0;
  local_54 = FUN_00630a10(uVar1);
  local_8 = 0;
  local_4c = (void *)0x0;
  local_48 = 0;
  local_4c = (void *)FUN_00439600(0,0);
  local_8 = 1;
  FUN_0040eaf0(param_1);
  local_40 = local_24;
  local_8._0_1_ = 2;
  FUN_004e1790(&local_54,&local_41);
  local_8._0_1_ = 3;
  FUN_004e18d0(&local_4c);
  local_8 = CONCAT31(local_8._1_3_,4);
  iVar4 = FUN_004e0190(local_3c);
  FUN_004e0df0(&local_40,iVar2,iVar4 + 0x10,iVar4);
  FUN_004e2a00();
  local_8 = 0xffffffff;
  FUN_0046f990();
                    /* WARNING: Subroutine does not return */
  operator_delete(local_4c);
}


/* FUN_004e31e0 @ 004e31e0  kind=gamemisc  attributed-by=none  size=307 */

void FUN_004e31e0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  undefined1 local_60 [4];
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e99d0;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = FUN_004e3790(param_1);
  if (iVar1 != *in_ECX) {
    piVar2 = (int *)(iVar1 + 0x10);
    if (7 < *(uint *)(iVar1 + 0x24)) {
      piVar2 = (int *)*piVar2;
    }
    iVar3 = FUN_00428db0(0,*(undefined4 *)(param_1 + 0x10),piVar2,*(undefined4 *)(iVar1 + 0x20));
    if (-1 < iVar3) goto LAB_004e32fb;
  }
  local_48 = 7;
  local_4c = 0;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
  local_8 = 0;
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  FUN_0040f680(param_1,0,0xffffffff);
  FUN_0040eaf0(local_5c);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar3 = FUN_00452260(local_44);
  FUN_00453230(local_60,iVar1,iVar3 + 0x10,iVar3);
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  local_18 = 7;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c & 0xffff0000);
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_5c[0]);
  }
LAB_004e32fb:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004e3480 @ 004e3480  kind=gamemisc  attributed-by=none  size=47 */

void FUN_004e3480(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x38);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004e348e. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
    std::_Xbad_alloc();
    return;
  }
  *(void **)pvVar1 = pvVar1;
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 8) = pvVar1;
  }
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


