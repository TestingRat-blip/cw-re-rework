// helpers_mutator (game_misc) -- server. 13 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_mutator.h"

/* mutator_401000 @ 00401000  kind=gamemisc  attributed-by=role:mutator  size=28 */

undefined8 * __thiscall FUN_00401000(void *this,undefined8 param_1,undefined8 param_2)

{
  *(undefined8 *)this = param_1;
  *(undefined8 *)((int)this + 8) = param_2;
  return this;
}


/* mutator_416c00 @ 00416c00  kind=gamemisc  attributed-by=role:mutator  size=21 */

int __thiscall FUN_00416c00(void *this,int param_1)

{
  if (7 < *(uint *)((int)this + 0x14)) {
    this = *(void **)this;
  }
  return (int)(void *)((int)this + param_1 * 2);
}


/* mutator_418160 @ 00418160  kind=gamemisc  attributed-by=role:mutator  size=19 */

undefined * __fastcall FUN_00418160(int *param_1)

{
  undefined *puVar1;
  
  if ((*param_1 == 0) || (puVar1 = *(undefined **)(*param_1 + 8), puVar1 == (undefined *)0x0)) {
    puVar1 = &DAT_0055ae8c;
  }
  return puVar1;
}


/* mutator_41d7e0 @ 0041d7e0  kind=gamemisc  attributed-by=role:mutator  size=17 */

int __fastcall FUN_0041d7e0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return param_1;
}


/* mutator_42e900 @ 0042e900  kind=gamemisc  attributed-by=role:mutator  size=30 */

bool __cdecl FUN_0042e900(char param_1,FILE *param_2)

{
  int iVar1;
  
  iVar1 = fputc((int)param_1,param_2);
  return iVar1 != -1;
}


/* mutator_47e280 @ 0047e280  kind=gamemisc  attributed-by=role:mutator  size=24 */

undefined4 __cdecl FUN_0047e280(int param_1,char *param_2)

{
  if (*param_2 == -0x67) {
    param_2[0x23] = param_2[0x23] + *(char *)(param_1 + 0x10);
  }
  return 0;
}


/* set_0x10_48b2c0 @ 0048b2c0  kind=gamemisc  attributed-by=role:mutator  size=20 */

undefined4 __cdecl FUN_0048b2c0(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  return 2;
}


/* mutator_4c8510 @ 004c8510  kind=gamemisc  attributed-by=role:mutator  size=17 */

int __fastcall FUN_004c8510(int param_1)

{
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0x40400000;
  return param_1;
}


/* mutator_4c8530 @ 004c8530  kind=gamemisc  attributed-by=role:mutator  size=17 */

int __fastcall FUN_004c8530(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  return param_1;
}


/* mutator_4ce250 @ 004ce250  kind=gamemisc  attributed-by=role:mutator  size=23 */

void __thiscall FUN_004ce250(void *this,int *param_1,int param_2)

{
  *param_1 = param_2 * 0x148 + *(int *)this;
  return;
}


/* mutator_4ce270 @ 004ce270  kind=gamemisc  attributed-by=role:mutator  size=23 */

void __thiscall FUN_004ce270(void *this,int *param_1,int param_2)

{
  *param_1 = *(int *)this + param_2 * 0xc;
  return;
}


/* mutator_4d3de0 @ 004d3de0  kind=gamemisc  attributed-by=role:mutator  size=15 */

void __thiscall FUN_004d3de0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 4);
  return;
}


/* _atexit @ 0054a8a3  kind=gamemisc  attributed-by=role:mutator  size=21 */

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2012 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}


