// freetype_01 (_library) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "freetype_01.h"

/* FUN_0069ad50 @ 0069ad50  kind=lib  attributed-by=lib-island  size=92 */

void FUN_0069ad50(void)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  
  in_ECX[8] = in_ECX[4];
  iVar2 = in_ECX[2];
  iVar1 = (*in_ECX + iVar2) / 2;
  in_ECX[2] = iVar1;
  iVar2 = (in_ECX[4] + iVar2) / 2;
  in_ECX[4] = (iVar1 + iVar2) / 2;
  in_ECX[9] = in_ECX[5];
  in_ECX[6] = iVar2;
  iVar2 = (in_ECX[1] + in_ECX[3]) / 2;
  iVar1 = (in_ECX[5] + in_ECX[3]) / 2;
  in_ECX[3] = iVar2;
  in_ECX[7] = iVar1;
  in_ECX[5] = (iVar2 + iVar1) / 2;
  return;
}


/* FUN_006af010 @ 006af010  kind=lib  attributed-by=lib-island  size=31 */

undefined4 FUN_006af010(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0068fd80(*(undefined4 *)(param_1 + 4),"truetype");
  *(undefined4 *)(param_1 + 0x28) = *puVar1;
  return 0;
}


/* FUN_006af310 @ 006af310  kind=lib  attributed-by=lib-island  size=305 */

int FUN_006af310(undefined4 param_1)

{
  int iVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int *unaff_ESI;
  int *unaff_EDI;
  int local_4;
  
  local_4 = 0;
  (*(code *)**(undefined4 **)(in_EAX + 4))();
  unaff_ESI[0x12] = (int)unaff_EDI;
  unaff_ESI[0x14] = 0;
  unaff_ESI[0x13] = 0;
  *(undefined1 *)(unaff_ESI + 0x15) = 0;
  local_4 = FUN_006908c0();
  if (local_4 == 0) {
    local_4 = FUN_00691f30();
    if (local_4 == 0) {
      piVar5 = (int *)unaff_EDI[8];
      uVar2 = 0x11;
      pcVar4 = "%!PS-TrueTypeFont";
      do {
        if (*piVar5 != *(int *)pcVar4) goto LAB_006af382;
        uVar2 = uVar2 - 4;
        pcVar4 = (char *)((int)pcVar4 + 4);
        piVar5 = piVar5 + 1;
      } while (3 < uVar2);
      if ((char)*(int *)pcVar4 != (char)*piVar5) {
LAB_006af382:
        local_4 = 2;
      }
      FUN_00691fe0();
      if (local_4 == 0) {
        local_4 = FUN_006908c0();
        if (local_4 == 0) {
          iVar1 = unaff_EDI[1];
          if (unaff_EDI[5] == 0) {
            unaff_ESI[0x13] = unaff_EDI[2] + *unaff_EDI;
            unaff_ESI[0x14] = iVar1;
            *(undefined1 *)(unaff_ESI + 0x15) = 1;
            local_4 = FUN_00690900();
            if (local_4 == 0) {
LAB_006af42d:
              iVar1 = unaff_ESI[0x13];
              unaff_ESI[1] = iVar1;
              *unaff_ESI = iVar1;
              unaff_ESI[2] = unaff_ESI[0x14] + iVar1;
              return 0;
            }
          }
          else {
            iVar3 = FUN_00692230(param_1,iVar1,&local_4);
            unaff_ESI[0x13] = iVar3;
            if (local_4 == 0) {
              local_4 = FUN_00691ec0();
              if (local_4 == 0) {
                unaff_ESI[0x14] = iVar1;
                goto LAB_006af42d;
              }
            }
          }
        }
      }
    }
  }
  if ((char)unaff_ESI[0x15] == '\0') {
    FUN_00691290(param_1,unaff_ESI[0x13]);
    unaff_ESI[0x13] = 0;
  }
  return local_4;
}


