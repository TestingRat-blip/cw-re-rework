// indirect_callback (world) -- cube. 1 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "indirect_callback.h"

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


