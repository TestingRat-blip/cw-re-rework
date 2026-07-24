// crt_stl (_library) -- cube. 10 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "crt_stl.h"

/* operator_new[] @ 0055dc30  kind=lib  attributed-by=crt-name  size=40 */

/* Library Function - Single Match
    void * __cdecl operator new[](unsigned int,enum FILL)
   
   Library: Visual Studio 2017 Release */

void * __cdecl operator_new__(uint param_1,FILL param_2)

{
  void *_Dst;
  
  _Dst = (void *)FUN_0055da00(param_1);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,param_1);
  }
  return _Dst;
}


/* __onexit @ 0068d6b0  kind=lib  attributed-by=crt-name  size=153 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2012 Release */

_onexit_t __onexit(_onexit_t param_1)

{
  _onexit_t p_Var1;
  PVOID pvVar2;
  PVOID *ppvVar3;
  PVOID *ppvVar4;
  PVOID local_24;
  PVOID local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00760690;
  uStack_c = 0x68d6bc;
  local_20[0] = DecodePointer(DAT_0076e2f4);
  if (local_20[0] == (PVOID)0xffffffff) {
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = DecodePointer(DAT_0076e2f4);
    local_24 = DecodePointer(DAT_0076e2f0);
    ppvVar4 = &local_24;
    ppvVar3 = local_20;
    pvVar2 = EncodePointer(param_1);
    p_Var1 = (_onexit_t)__dllonexit(pvVar2,ppvVar3,ppvVar4);
    DAT_0076e2f4 = EncodePointer(local_20[0]);
    DAT_0076e2f0 = EncodePointer(local_24);
    local_8 = (undefined *)0xfffffffe;
    FUN_0068d74c();
  }
  return p_Var1;
}


/* __security_check_cookie @ 0068d788  kind=lib  attributed-by=crt-name  size=15 */

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Library: Visual Studio 2012 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 == DAT_0076aa78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}


/* __alloca_probe @ 0068d8e0  kind=lib  attributed-by=crt-name  size=43 */

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Library: Visual Studio */

void __alloca_probe(void)

{
  undefined1 *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 unaff_retaddr;
  undefined1 auStack_4 [4];
  
  puVar2 = (undefined4 *)((int)&stack0x00000000 - (int)in_EAX & ~-(uint)(&stack0x00000000 < in_EAX))
  ;
  for (puVar1 = (undefined4 *)((uint)auStack_4 & 0xfffff000); puVar2 < puVar1;
      puVar1 = puVar1 + -0x400) {
  }
  *puVar2 = unaff_retaddr;
  return;
}


/* ___report_gsfailure @ 0068dbab  kind=lib  attributed-by=crt-name  size=249 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___report_gsfailure
   
   Library: Visual Studio 2012 Release */

void __cdecl ___report_gsfailure(void)

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
  _DAT_0076e058 = (undefined4)((ulonglong)lVar9 >> 0x20);
  _DAT_0076e060 = (undefined4)lVar9;
  _DAT_0076e070 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_0076e074 = &stack0x00000004;
  _DAT_0076dfb0 = 0x10001;
  _DAT_0076df60 = 0xc0000409;
  _DAT_0076df64 = 1;
  _DAT_0076df70 = 1;
  DAT_0076df74 = 2;
  _DAT_0076df6c = unaff_retaddr;
  _DAT_0076e03c = in_GS;
  _DAT_0076e040 = in_FS;
  _DAT_0076e044 = in_ES;
  _DAT_0076e048 = in_DS;
  _DAT_0076e04c = unaff_EDI;
  _DAT_0076e050 = unaff_ESI;
  _DAT_0076e054 = unaff_EBX;
  _DAT_0076e05c = uVar3;
  _DAT_0076e064 = unaff_EBP;
  DAT_0076e068 = unaff_retaddr;
  _DAT_0076e06c = in_CS;
  _DAT_0076e078 = in_SS;
  ___raise_securityfailure(&PTR_DAT_00722648);
  return;
}


/* __alloca_probe_16 @ 0068e3d0  kind=lib  attributed-by=crt-name  size=22 */

/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_16
   
   Library: Visual Studio */

uint __alloca_probe_16(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 0xf;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}


/* __alloca_probe_8 @ 0068e3e6  kind=lib  attributed-by=crt-name  size=22 */

/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_8
   
   Library: Visual Studio */

uint __alloca_probe_8(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 7;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}


/* __SEH_prolog4 @ 0068e430  kind=lib  attributed-by=crt-name  size=69 */

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    __SEH_prolog4
   
   Library: Visual Studio */

void __SEH_prolog4(undefined4 param_1,int param_2)

{
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  param_2 = -param_2;
  *(undefined4 *)((int)auStack_1c + param_2 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + param_2 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + param_2 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + param_2 + 4) = DAT_0076aa78 ^ (uint)&stack0x00000008;
  *(undefined4 *)((int)auStack_1c + param_2) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}


/* __SEH_epilog4 @ 0068e475  kind=lib  attributed-by=crt-name  size=20 */

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __SEH_epilog4
   
   Library: Visual Studio */

void __SEH_epilog4(void)

{
  undefined4 *unaff_EBP;
  undefined4 unaff_retaddr;
  
  ExceptionList = (void *)unaff_EBP[-4];
  *unaff_EBP = unaff_retaddr;
  return;
}


/* ___security_init_cookie @ 0068e7a1  kind=lib  attributed-by=crt-name  size=154 */

/* Library Function - Single Match
    ___security_init_cookie
   
   Library: Visual Studio 2012 Release */

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  LARGE_INTEGER local_18;
  _FILETIME local_10;
  uint local_8;
  
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  if ((DAT_0076aa78 == 0xbb40e64e) || ((DAT_0076aa78 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_10);
    local_8 = local_10.dwHighDateTime ^ local_10.dwLowDateTime;
    DVar1 = GetCurrentThreadId();
    local_8 = local_8 ^ DVar1;
    DVar1 = GetCurrentProcessId();
    local_8 = local_8 ^ DVar1;
    QueryPerformanceCounter(&local_18);
    DAT_0076aa78 = local_18.s.HighPart ^ local_18.s.LowPart ^ local_8 ^ (uint)&local_8;
    if (DAT_0076aa78 == 0xbb40e64e) {
      DAT_0076aa78 = 0xbb40e64f;
    }
    else if ((DAT_0076aa78 & 0xffff0000) == 0) {
      DAT_0076aa78 = DAT_0076aa78 | (DAT_0076aa78 | 0x4711) << 0x10;
    }
  }
  DAT_0076aa7c = ~DAT_0076aa78;
  return;
}


