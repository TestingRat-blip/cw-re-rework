// Unsorted_003 (game_misc) -- server. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_003.h"

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


/* __FindPESection @ 0054b6b0  kind=gamemisc  attributed-by=none  size=67 */

/* Library Function - Single Match
    __FindPESection
   
   Library: Visual Studio 2012 Release */

PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase + *(ushort *)(pImageBase + iVar1 + 0x14) + 0x18 + iVar1);
  if (*(ushort *)(pImageBase + iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) &&
         (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}


/* __ValidateImageBase @ 0054b7c0  kind=gamemisc  attributed-by=none  size=49 */

/* Library Function - Single Match
    __ValidateImageBase
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release */

BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  uint uVar1;
  
  if (*(short *)pImageBase != 0x5a4d) {
    return 0;
  }
  uVar1 = 0;
  if (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550) {
    uVar1 = (uint)((short)*(int *)((int)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x10b)
    ;
  }
  return uVar1;
}


