// helpers_computed (game_misc) -- server. 43 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_computed.h"

/* compute_4013e0 @ 004013e0  kind=gamemisc  attributed-by=role:computed  size=12 */

int __thiscall FUN_004013e0(void *this,int param_1)

{
  return param_1 + (int)this;
}


/* compute_4061e0 @ 004061e0  kind=gamemisc  attributed-by=role:computed  size=11 */

byte __fastcall FUN_004061e0(int param_1)

{
  return *(byte *)(param_1 + 3) >> 6 & 1;
}


/* compute_406280 @ 00406280  kind=gamemisc  attributed-by=role:computed  size=10 */

byte __fastcall FUN_00406280(int param_1)

{
  return *(byte *)(param_1 + 3) & 0x1f;
}


/* compute_4078d0 @ 004078d0  kind=gamemisc  attributed-by=role:computed  size=19 */

bool __thiscall FUN_004078d0(void *this,int *param_1)

{
  return *(int *)this == *param_1;
}


/* compute_412c40 @ 00412c40  kind=gamemisc  attributed-by=role:computed  size=12 */

undefined4 * __fastcall FUN_00412c40(undefined4 *param_1)

{
  if (0xf < (uint)param_1[5]) {
    return (undefined4 *)*param_1;
  }
  return param_1;
}


/* compute_413000 @ 00413000  kind=gamemisc  attributed-by=role:computed  size=9 */

bool __fastcall FUN_00413000(int param_1)

{
  return *(int *)(param_1 + 4) != 0;
}


/* compute_413200 @ 00413200  kind=gamemisc  attributed-by=role:computed  size=6 */

int __fastcall FUN_00413200(int *param_1)

{
  return param_1[1] - *param_1;
}


/* compute_416930 @ 00416930  kind=gamemisc  attributed-by=role:computed  size=10 */

void FUN_00416930(size_t param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00416934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  malloc(param_1);
  return;
}


/* compute_416c20 @ 00416c20  kind=gamemisc  attributed-by=role:computed  size=10 */

int __fastcall FUN_00416c20(int *param_1)

{
  return (*param_1 != 0) - 1;
}


/* compute_419f80 @ 00419f80  kind=gamemisc  attributed-by=role:computed  size=9 */

bool __fastcall FUN_00419f80(int param_1)

{
  return *(int *)(param_1 + 0x10) == 0;
}


/* compute_41ba70 @ 0041ba70  kind=gamemisc  attributed-by=role:computed  size=18 */

int __thiscall FUN_0041ba70(void *this,int param_1)

{
  return param_1 * 0x188 + *(int *)this;
}


/* compute_41e2e0 @ 0041e2e0  kind=gamemisc  attributed-by=role:computed  size=18 */

int __thiscall FUN_0041e2e0(void *this,int param_1)

{
  return *(int *)this + param_1 * 0xc;
}


/* compute_41ebb0 @ 0041ebb0  kind=gamemisc  attributed-by=role:computed  size=13 */

byte __fastcall FUN_0041ebb0(int param_1)

{
  return ~(*(byte *)(param_1 + 3) >> 7) & 1;
}


/* compute_420000 @ 00420000  kind=gamemisc  attributed-by=role:computed  size=23 */

int __fastcall FUN_00420000(int *param_1)

{
  return (param_1[1] - *param_1) / 0x148;
}


/* compute_420020 @ 00420020  kind=gamemisc  attributed-by=role:computed  size=22 */

int __fastcall FUN_00420020(int *param_1)

{
  return (param_1[1] - *param_1) / 0xc;
}


/* compute_428930 @ 00428930  kind=gamemisc  attributed-by=role:computed  size=15 */

int __thiscall FUN_00428930(void *this,int param_1)

{
  return param_1 * 0x20 + *(int *)this;
}


/* compute_428ee0 @ 00428ee0  kind=gamemisc  attributed-by=role:computed  size=9 */

int __fastcall FUN_00428ee0(int *param_1)

{
  return param_1[1] - *param_1 >> 5;
}


/* compute_468a70 @ 00468a70  kind=gamemisc  attributed-by=role:computed  size=19 */

undefined1 __cdecl FUN_00468a70(int param_1)

{
  return (&DAT_0056c79b)[*(byte *)(param_1 + 0x3c)];
}


/* compute_46aef0 @ 0046aef0  kind=gamemisc  attributed-by=role:computed  size=14 */

void __cdecl FUN_0046aef0(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  return;
}


/* compute_46b0d0 @ 0046b0d0  kind=gamemisc  attributed-by=role:computed  size=14 */

void __cdecl FUN_0046b0d0(LPCRITICAL_SECTION param_1)

{
  LeaveCriticalSection(param_1);
  return;
}


/* compute_46b1c0 @ 0046b1c0  kind=gamemisc  attributed-by=role:computed  size=14 */

undefined4 __cdecl FUN_0046b1c0(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x18);
}


/* compute_4a0570 @ 004a0570  kind=gamemisc  attributed-by=role:computed  size=10 */

void FUN_004a0570(void)

{
                    /* WARNING: Could not recover jumptable at 0x004a0574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00582af0._4_4_)();
  return;
}


/* compute_4ce1d0 @ 004ce1d0  kind=gamemisc  attributed-by=role:computed  size=18 */

int __thiscall FUN_004ce1d0(void *this,int param_1)

{
  return param_1 * 0x148 + *(int *)this;
}


/* compute_4d3e00 @ 004d3e00  kind=gamemisc  attributed-by=role:computed  size=14 */

void __fastcall FUN_004d3e00(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x8000d8));
  return;
}


/* compute_4d5c70 @ 004d5c70  kind=gamemisc  attributed-by=role:computed  size=14 */

void __fastcall FUN_004d5c70(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x8000d8));
  return;
}


/* compute_4e2320 @ 004e2320  kind=gamemisc  attributed-by=role:computed  size=13 */

int __thiscall FUN_004e2320(void *this,int param_1)

{
  return (int)(void *)((int)this + param_1 * 8);
}


/* compute_4e2330 @ 004e2330  kind=gamemisc  attributed-by=role:computed  size=24 */

int __thiscall FUN_004e2330(void *this,int param_1)

{
  return *(int *)this + param_1 * 0x1c;
}


/* compute_4e2350 @ 004e2350  kind=gamemisc  attributed-by=role:computed  size=15 */

int __thiscall FUN_004e2350(void *this,int param_1)

{
  return *(int *)this + param_1 * 8;
}


/* compute_4e2830 @ 004e2830  kind=gamemisc  attributed-by=role:computed  size=7 */

int __fastcall FUN_004e2830(int param_1)

{
  return *(int *)(param_1 + 4) + -0x20;
}


/* compute_4f3820 @ 004f3820  kind=gamemisc  attributed-by=role:computed  size=23 */

int __fastcall FUN_004f3820(int *param_1)

{
  return (param_1[1] - *param_1) / 0x18;
}


/* compute_4f3840 @ 004f3840  kind=gamemisc  attributed-by=role:computed  size=9 */

int __fastcall FUN_004f3840(int *param_1)

{
  return param_1[1] - *param_1 >> 3;
}


/* compute_4f79b0 @ 004f79b0  kind=gamemisc  attributed-by=role:computed  size=18 */

int __thiscall FUN_004f79b0(void *this,int param_1)

{
  return *(int *)this + param_1 * 0x18;
}


/* compute_52df20 @ 0052df20  kind=gamemisc  attributed-by=role:computed  size=20 */

bool __cdecl FUN_0052df20(int *param_1,int *param_2)

{
  return *param_1 != *param_2;
}


/* compute_52eb90 @ 0052eb90  kind=gamemisc  attributed-by=role:computed  size=6 */

int __fastcall FUN_0052eb90(int *param_1)

{
  return *param_1 + 8;
}


/* compute_52eba0 @ 0052eba0  kind=gamemisc  attributed-by=role:computed  size=9 */

int __fastcall FUN_0052eba0(int *param_1)

{
  return *(int *)(*param_1 + 4) + 8;
}


/* compute_530540 @ 00530540  kind=gamemisc  attributed-by=role:computed  size=9 */

bool __fastcall FUN_00530540(int param_1)

{
  return *(int *)(param_1 + 4) == 0;
}


/* compute_530680 @ 00530680  kind=gamemisc  attributed-by=role:computed  size=8 */

int __fastcall FUN_00530680(undefined4 *param_1)

{
  return *(int *)*param_1 + 8;
}


/* compute_5306c0 @ 005306c0  kind=gamemisc  attributed-by=role:computed  size=11 */

byte __fastcall FUN_005306c0(int param_1)

{
  return *(byte *)(param_1 + 3) >> 5 & 1;
}


/* compute_54a89a @ 0054a89a  kind=gamemisc  attributed-by=role:computed  size=9 */

void FUN_0054a89a(void)

{
  _unlock(8);
  return;
}


/* ___report_rangecheckfailure @ 0054ac5c  kind=gamemisc  attributed-by=role:computed  size=12 */

/* Library Function - Single Match
    ___report_rangecheckfailure
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___report_rangecheckfailure(void)

{
  ___report_securityfailure(8);
  return;
}


/* compute_556840 @ 00556840  kind=gamemisc  attributed-by=role:computed  size=12 */

void FUN_00556840(void)

{
  _atexit(std::error_category::~error_category);
  return;
}


/* compute_556850 @ 00556850  kind=gamemisc  attributed-by=role:computed  size=12 */

void FUN_00556850(void)

{
  _atexit(std::error_category::~error_category);
  return;
}


/* compute_556860 @ 00556860  kind=gamemisc  attributed-by=role:computed  size=12 */

void FUN_00556860(void)

{
  _atexit(std::error_category::~error_category);
  return;
}


