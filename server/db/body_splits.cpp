// body_splits (db) -- server. 1 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "body_splits.h"

/* FUN_00476C60__split_476c8a @ 00476c8a  kind=gamemisc  attributed-by=role:body-split  size=149 */

void __fastcall FUN_00476c8a(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int unaff_EBX;
  int unaff_EBP;
  int *piVar5;
  
  do {
    iVar1 = *(int *)(param_2 + 0xc + *(int *)(unaff_EBX + 0x10));
    if ((iVar1 != 0) && (piVar5 = *(int **)(iVar1 + 0x10), piVar5 != (int *)0x0)) {
      do {
        if ((*(byte *)(piVar5[2] + 0x2a) & 0x10) != 0) {
          piVar3 = (int *)(piVar5[2] + 0x38);
          iVar1 = *piVar3;
          while (iVar1 != 0) {
            piVar2 = (int *)*piVar3;
            if (*piVar2 == unaff_EBX) {
              *piVar3 = piVar2[6];
              piVar3 = piVar2 + 3;
              *piVar3 = *piVar3 + -1;
              iVar1 = *piVar3;
              iVar4 = *piVar2;
              *(int *)(unaff_EBP + -8) = iVar4;
              if (iVar1 == 0) {
                piVar3 = (int *)piVar2[2];
                if (piVar3 != (int *)0x0) {
                  (**(code **)(*piVar3 + 0x10))(piVar3);
                  iVar4 = *(int *)(unaff_EBP + -8);
                }
                FUN_00494b00(iVar4,piVar2);
              }
              break;
            }
            piVar3 = piVar2 + 6;
            iVar1 = piVar2[6];
          }
        }
        piVar5 = (int *)*piVar5;
      } while (piVar5 != (int *)0x0);
      param_1 = *(int *)(unaff_EBP + 8);
      param_2 = *(int *)(unaff_EBP + -4);
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 0x10;
    *(int *)(unaff_EBP + 8) = param_1;
    *(int *)(unaff_EBP + -4) = param_2;
    if (*(int *)(unaff_EBX + 0x14) <= param_1) {
      FUN_00490780(unaff_EBX);
      return;
    }
  } while( true );
}


