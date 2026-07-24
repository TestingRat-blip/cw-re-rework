// Unsorted_008 (game_misc) -- server. 87 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_008.h"

/* FUN_0054b4c9 @ 0054b4c9  kind=gamemisc  attributed-by=none  size=35 */

void __cdecl
FUN_0054b4c9(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_00583cc8,__security_check_cookie,param_1,param_2,param_3,param_4);
  return;
}


/* ___isa_available_init @ 0054b4ec  kind=gamemisc  attributed-by=none  size=313 */

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


/* FUN_0054b644 @ 0054b644  kind=gamemisc  attributed-by=none  size=64 */

undefined4 FUN_0054b644(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) &&
     ((iVar2 = piVar1[5], iVar2 == 0x19930520 ||
      (((iVar2 == 0x19930521 || (iVar2 == 0x19930522)) || (iVar2 == 0x1994000)))))) {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  return 0;
}


/* FUN_0054b6a0 @ 0054b6a0  kind=gamemisc  attributed-by=none  size=3 */

undefined4 FUN_0054b6a0(void)

{
  return 0;
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


/* __IsNonwritableInCurrentImage @ 0054b700  kind=gamemisc  attributed-by=none  size=164 */

/* Library Function - Single Match
    __IsNonwritableInCurrentImage
   
   Library: Visual Studio 2012 Release */

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcStack_10 = FUN_0054b4c9;
  local_14 = ExceptionList;
  local_c = DAT_00583cc8 ^ 0x57f498;
  ExceptionList = &local_14;
  local_8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_00400000);
  if (BVar1 != 0) {
    p_Var2 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_00400000,(DWORD_PTR)(pTarget + -0x400000));
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      ExceptionList = local_14;
      return ~(p_Var2->Characteristics >> 0x1f) & 1;
    }
  }
  ExceptionList = local_14;
  return 0;
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


/* FUN_0054b88b @ 0054b88b  kind=gamemisc  attributed-by=none  size=32 */

void FUN_0054b88b(void)

{
  undefined4 *puVar1;
  
  for (puVar1 = &DAT_00575244; puVar1 < &DAT_00575244; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}


/* FUN_0054b8ab @ 0054b8ab  kind=gamemisc  attributed-by=none  size=32 */

void FUN_0054b8ab(void)

{
  undefined4 *puVar1;
  
  for (puVar1 = &DAT_0057524c; puVar1 < &DAT_0057524c; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}


/* FUN_0054b8cb @ 0054b8cb  kind=gamemisc  attributed-by=none  size=38 */

void FUN_0054b8cb(void)

{
  errno_t eVar1;
  
  eVar1 = _controlfp_s((uint *)0x0,0x10000,0x30000);
  if (eVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}


/* FUN_00556840 @ 00556840  kind=gamemisc  attributed-by=none  size=12 */

void FUN_00556840(void)

{
  _atexit(std::error_category::~error_category);
  return;
}


/* FUN_00556850 @ 00556850  kind=gamemisc  attributed-by=none  size=12 */

void FUN_00556850(void)

{
  _atexit(std::error_category::~error_category);
  return;
}


/* FUN_00556860 @ 00556860  kind=gamemisc  attributed-by=none  size=12 */

void FUN_00556860(void)

{
  _atexit(std::error_category::~error_category);
  return;
}


/* FUN_00556890 @ 00556890  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556890(void)

{
  _DAT_00583ce8 = 0xffff;
  DAT_00583cea = 0xff;
  DAT_00583ceb = 0;
  return;
}


/* FUN_005568c0 @ 005568c0  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005568c0(void)

{
  _DAT_00583cec = 0xc8c8;
  _DAT_00583cee = 0x1c8;
  return;
}


/* FUN_005568f0 @ 005568f0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005568f0(void)

{
  _DAT_00583ce4 = 0xffff;
  DAT_00583ce6 = 0xff;
  DAT_00583ce7 = 0x82;
  return;
}


/* FUN_00556920 @ 00556920  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556920(void)

{
  _DAT_00583d00 = 0xffff;
  DAT_00583d02 = 0xff;
  DAT_00583d03 = 0;
  return;
}


/* FUN_00556950 @ 00556950  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556950(void)

{
  _DAT_00583d04 = 0xc8c8;
  _DAT_00583d06 = 0x1c8;
  return;
}


/* FUN_00556980 @ 00556980  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556980(void)

{
  _DAT_00583cfc = 0xffff;
  DAT_00583cfe = 0xff;
  DAT_00583cff = 0x82;
  return;
}


/* FUN_005569b0 @ 005569b0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005569b0(void)

{
  _DAT_00583d10 = 0xffff;
  DAT_00583d12 = 0xff;
  DAT_00583d13 = 0;
  return;
}


/* FUN_005569e0 @ 005569e0  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005569e0(void)

{
  _DAT_00583d14 = 0xc8c8;
  _DAT_00583d16 = 0x1c8;
  return;
}


/* FUN_00556a10 @ 00556a10  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556a10(void)

{
  _DAT_00583d0c = 0xffff;
  DAT_00583d0e = 0xff;
  DAT_00583d0f = 0x82;
  return;
}


/* FUN_00556a40 @ 00556a40  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556a40(void)

{
  _DAT_00583d2c = 0xffff;
  DAT_00583d2e = 0xff;
  DAT_00583d2f = 0;
  return;
}


/* FUN_00556a70 @ 00556a70  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556a70(void)

{
  _DAT_00583d30 = 0xc8c8;
  _DAT_00583d32 = 0x1c8;
  return;
}


/* FUN_00556aa0 @ 00556aa0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556aa0(void)

{
  _DAT_00583d28 = 0xffff;
  DAT_00583d2a = 0xff;
  DAT_00583d2b = 0x82;
  return;
}


/* FUN_00556ad0 @ 00556ad0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556ad0(void)

{
  _DAT_00583d40 = 0xffff;
  DAT_00583d42 = 0xff;
  DAT_00583d43 = 0;
  return;
}


/* FUN_00556b00 @ 00556b00  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556b00(void)

{
  _DAT_00583d44 = 0xc8c8;
  _DAT_00583d46 = 0x1c8;
  return;
}


/* FUN_00556b30 @ 00556b30  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556b30(void)

{
  _DAT_00583d3c = 0xffff;
  DAT_00583d3e = 0xff;
  DAT_00583d3f = 0x82;
  return;
}


/* FUN_00556b60 @ 00556b60  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556b60(void)

{
  _DAT_00583d58 = 0xffff;
  DAT_00583d5a = 0xff;
  DAT_00583d5b = 0;
  return;
}


/* FUN_00556b90 @ 00556b90  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556b90(void)

{
  _DAT_00583d5c = 0xc8c8;
  _DAT_00583d5e = 0x1c8;
  return;
}


/* FUN_00556bc0 @ 00556bc0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556bc0(void)

{
  _DAT_00583d54 = 0xffff;
  DAT_00583d56 = 0xff;
  DAT_00583d57 = 0x82;
  return;
}


/* FUN_00556bf0 @ 00556bf0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556bf0(void)

{
  _DAT_00583d70 = 0xffff;
  DAT_00583d72 = 0xff;
  DAT_00583d73 = 0;
  return;
}


/* FUN_00556c20 @ 00556c20  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556c20(void)

{
  _DAT_00583d74 = 0xc8c8;
  _DAT_00583d76 = 0x1c8;
  return;
}


/* FUN_00556c50 @ 00556c50  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556c50(void)

{
  _DAT_00583d6c = 0xffff;
  DAT_00583d6e = 0xff;
  DAT_00583d6f = 0x82;
  return;
}


/* FUN_00556c80 @ 00556c80  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556c80(void)

{
  _DAT_00583d84 = 0xffff;
  DAT_00583d86 = 0xff;
  DAT_00583d87 = 0;
  return;
}


/* FUN_00556cb0 @ 00556cb0  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556cb0(void)

{
  _DAT_00583d88 = 0xc8c8;
  _DAT_00583d8a = 0x1c8;
  return;
}


/* FUN_00556ce0 @ 00556ce0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556ce0(void)

{
  _DAT_00583d80 = 0xffff;
  DAT_00583d82 = 0xff;
  DAT_00583d83 = 0x82;
  return;
}


/* FUN_00556d10 @ 00556d10  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556d10(void)

{
  _DAT_00583d94 = 0xffff;
  DAT_00583d96 = 0xff;
  DAT_00583d97 = 0;
  return;
}


/* FUN_00556d40 @ 00556d40  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556d40(void)

{
  _DAT_00583d98 = 0xc8c8;
  _DAT_00583d9a = 0x1c8;
  return;
}


/* FUN_00556d70 @ 00556d70  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556d70(void)

{
  _DAT_00583d90 = 0xffff;
  DAT_00583d92 = 0xff;
  DAT_00583d93 = 0x82;
  return;
}


/* FUN_00556da0 @ 00556da0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556da0(void)

{
  _DAT_00583da4 = 0xffff;
  DAT_00583da6 = 0xff;
  DAT_00583da7 = 0;
  return;
}


/* FUN_00556dd0 @ 00556dd0  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556dd0(void)

{
  _DAT_00583da8 = 0xc8c8;
  _DAT_00583daa = 0x1c8;
  return;
}


/* FUN_00556e00 @ 00556e00  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556e00(void)

{
  _DAT_00583da0 = 0xffff;
  DAT_00583da2 = 0xff;
  DAT_00583da3 = 0x82;
  return;
}


/* FUN_00556e30 @ 00556e30  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556e30(void)

{
  _DAT_00583db4 = 0xffff;
  DAT_00583db6 = 0xff;
  DAT_00583db7 = 0;
  return;
}


/* FUN_00556e60 @ 00556e60  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556e60(void)

{
  _DAT_00583db8 = 0xc8c8;
  _DAT_00583dba = 0x1c8;
  return;
}


/* FUN_00556e90 @ 00556e90  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556e90(void)

{
  _DAT_00583db0 = 0xffff;
  DAT_00583db2 = 0xff;
  DAT_00583db3 = 0x82;
  return;
}


/* FUN_00556ec0 @ 00556ec0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556ec0(void)

{
  _DAT_00583dc4 = 0xffff;
  DAT_00583dc6 = 0xff;
  DAT_00583dc7 = 0;
  return;
}


/* FUN_00556ef0 @ 00556ef0  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556ef0(void)

{
  _DAT_00583dc8 = 0xc8c8;
  _DAT_00583dca = 0x1c8;
  return;
}


/* FUN_00556f20 @ 00556f20  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556f20(void)

{
  _DAT_00583dc0 = 0xffff;
  DAT_00583dc2 = 0xff;
  DAT_00583dc3 = 0x82;
  return;
}


/* FUN_00556f50 @ 00556f50  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556f50(void)

{
  _DAT_00583dd8 = 0xffff;
  DAT_00583dda = 0xff;
  DAT_00583ddb = 0;
  return;
}


/* FUN_00556f80 @ 00556f80  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556f80(void)

{
  _DAT_00583ddc = 0xc8c8;
  _DAT_00583dde = 0x1c8;
  return;
}


/* FUN_00556fb0 @ 00556fb0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556fb0(void)

{
  _DAT_00583dd4 = 0xffff;
  DAT_00583dd6 = 0xff;
  DAT_00583dd7 = 0x82;
  return;
}


/* FUN_00556ff0 @ 00556ff0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556ff0(void)

{
  _DAT_00583de8 = 0xffff;
  DAT_00583dea = 0xff;
  DAT_00583deb = 0;
  return;
}


/* FUN_00557020 @ 00557020  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557020(void)

{
  _DAT_00583dec = 0xc8c8;
  _DAT_00583dee = 0x1c8;
  return;
}


/* FUN_00557050 @ 00557050  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557050(void)

{
  _DAT_00583de4 = 0xffff;
  DAT_00583de6 = 0xff;
  DAT_00583de7 = 0x82;
  return;
}


/* FUN_00557080 @ 00557080  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557080(void)

{
  _DAT_00584234 = 0xffff;
  DAT_00584236 = 0xff;
  DAT_00584237 = 0;
  return;
}


/* FUN_005570b0 @ 005570b0  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005570b0(void)

{
  _DAT_00584238 = 0xc8c8;
  _DAT_0058423a = 0x1c8;
  return;
}


/* FUN_005570e0 @ 005570e0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005570e0(void)

{
  _DAT_00584230 = 0xffff;
  DAT_00584232 = 0xff;
  DAT_00584233 = 0x82;
  return;
}


/* FUN_00557110 @ 00557110  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557110(void)

{
  _DAT_00584244 = 0xffff;
  DAT_00584246 = 0xff;
  DAT_00584247 = 0;
  return;
}


/* FUN_00557140 @ 00557140  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557140(void)

{
  _DAT_00584248 = 0xc8c8;
  _DAT_0058424a = 0x1c8;
  return;
}


/* FUN_00557170 @ 00557170  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557170(void)

{
  _DAT_00584240 = 0xffff;
  DAT_00584242 = 0xff;
  DAT_00584243 = 0x82;
  return;
}


/* FUN_005571a0 @ 005571a0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005571a0(void)

{
  _DAT_00584270 = 0xffff;
  DAT_00584272 = 0xff;
  DAT_00584273 = 0;
  return;
}


/* FUN_005571d0 @ 005571d0  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005571d0(void)

{
  _DAT_00584274 = 0xc8c8;
  _DAT_00584276 = 0x1c8;
  return;
}


/* FUN_00557200 @ 00557200  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557200(void)

{
  _DAT_0058426c = 0xffff;
  DAT_0058426e = 0xff;
  DAT_0058426f = 0x82;
  return;
}


/* FUN_00557230 @ 00557230  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557230(void)

{
  _DAT_00584280 = 0xffff;
  DAT_00584282 = 0xff;
  DAT_00584283 = 0;
  return;
}


/* FUN_00557260 @ 00557260  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557260(void)

{
  _DAT_00584284 = 0xc8c8;
  _DAT_00584286 = 0x1c8;
  return;
}


/* FUN_00557290 @ 00557290  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557290(void)

{
  _DAT_0058427c = 0xffff;
  DAT_0058427e = 0xff;
  DAT_0058427f = 0x82;
  return;
}


/* FUN_005572c0 @ 005572c0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005572c0(void)

{
  _DAT_00584290 = 0xffff;
  DAT_00584292 = 0xff;
  DAT_00584293 = 0;
  return;
}


/* FUN_005572f0 @ 005572f0  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005572f0(void)

{
  _DAT_00584294 = 0xc8c8;
  _DAT_00584296 = 0x1c8;
  return;
}


/* FUN_00557320 @ 00557320  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557320(void)

{
  _DAT_0058428c = 0xffff;
  DAT_0058428e = 0xff;
  DAT_0058428f = 0x82;
  return;
}


/* FUN_00557350 @ 00557350  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557350(void)

{
  _DAT_005842a0 = 0xffff;
  DAT_005842a2 = 0xff;
  DAT_005842a3 = 0;
  return;
}


/* FUN_00557380 @ 00557380  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557380(void)

{
  _DAT_005842a4 = 0xc8c8;
  _DAT_005842a6 = 0x1c8;
  return;
}


/* FUN_005573b0 @ 005573b0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005573b0(void)

{
  _DAT_0058429c = 0xffff;
  DAT_0058429e = 0xff;
  DAT_0058429f = 0x82;
  return;
}


/* FUN_005573e0 @ 005573e0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005573e0(void)

{
  _DAT_005842b0 = 0xffff;
  DAT_005842b2 = 0xff;
  DAT_005842b3 = 0;
  return;
}


/* FUN_00557410 @ 00557410  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557410(void)

{
  _DAT_005842b4 = 0xc8c8;
  _DAT_005842b6 = 0x1c8;
  return;
}


/* FUN_00557440 @ 00557440  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557440(void)

{
  _DAT_005842ac = 0xffff;
  DAT_005842ae = 0xff;
  DAT_005842af = 0x82;
  return;
}


/* FUN_00557470 @ 00557470  kind=gamemisc  attributed-by=none  size=40 */

void FUN_00557470(void)

{
  DAT_005842c0._0_2_ = 0xffff;
  DAT_005842c0._2_1_ = 0xff;
  DAT_005842c0._3_1_ = 0;
  return;
}


/* FUN_005574a0 @ 005574a0  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005574a0(void)

{
  _DAT_005842c4 = 0xc8c8;
  _DAT_005842c6 = 0x1c8;
  return;
}


/* FUN_005574d0 @ 005574d0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005574d0(void)

{
  _DAT_005842bc = 0xffff;
  DAT_005842be = 0xff;
  DAT_005842bf = 0x82;
  return;
}


/* FUN_00557500 @ 00557500  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557500(void)

{
  _DAT_005842d8 = 0xffff;
  DAT_005842da = 0xff;
  DAT_005842db = 0;
  return;
}


/* FUN_00557530 @ 00557530  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557530(void)

{
  _DAT_005842dc = 0xc8c8;
  _DAT_005842de = 0x1c8;
  return;
}


/* FUN_00557560 @ 00557560  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557560(void)

{
  _DAT_005842d4 = 0xffff;
  DAT_005842d6 = 0xff;
  DAT_005842d7 = 0x82;
  return;
}


/* FUN_00557590 @ 00557590  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557590(void)

{
  _DAT_005842ec = 0xffff;
  DAT_005842ee = 0xff;
  DAT_005842ef = 0;
  return;
}


/* FUN_005575c0 @ 005575c0  kind=gamemisc  attributed-by=none  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005575c0(void)

{
  _DAT_005842f0 = 0xc8c8;
  _DAT_005842f2 = 0x1c8;
  return;
}


/* FUN_005575f0 @ 005575f0  kind=gamemisc  attributed-by=none  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005575f0(void)

{
  _DAT_005842e8 = 0xffff;
  DAT_005842ea = 0xff;
  DAT_005842eb = 0x82;
  return;
}


/* FUN_00557618 @ 00557618  kind=gamemisc  attributed-by=none  size=12 */

void FUN_00557618(void)

{
  _atexit(FUN_0055765b);
  return;
}


/* FUN_0055765b @ 0055765b  kind=gamemisc  attributed-by=none  size=10 */

void FUN_0055765b(void)

{
  FUN_0054a6ec();
  return;
}


