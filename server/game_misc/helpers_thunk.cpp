// helpers_thunk (game_misc) -- server. 27 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_thunk.h"

/* fwd_0054a946_402a10 @ 00402a10  kind=gamemisc  attributed-by=role:thunk  size=44 */

ulonglong * __fastcall FUN_00402a10(ulonglong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_0054a946();
  *param_1 = uVar1;
  return param_1;
}


/* fwd_004056c0_406260 @ 00406260  kind=gamemisc  attributed-by=role:thunk  size=19 */

uint * __thiscall FUN_00406260(void *this,uint *param_1)

{
  FUN_004056c0(this,param_1,this);
  return param_1;
}


/* fwd_00407be0_4063b0 @ 004063b0  kind=gamemisc  attributed-by=role:thunk  size=31 */

undefined4 * __fastcall FUN_004063b0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_00407be0((undefined4 *)0x0,(undefined4 *)0x0);
  *param_1 = uVar1;
  return param_1;
}


/* fwd_004078f0_415b00 @ 00415b00  kind=gamemisc  attributed-by=role:thunk  size=24 */

bool __thiscall FUN_00415b00(void *this,char *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_004078f0(this,param_1);
  return (char)uVar1 == '\0';
}


/* fwd_004177e0_416b60 @ 00416b60  kind=gamemisc  attributed-by=role:thunk  size=25 */

int * __fastcall FUN_00416b60(int *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_004177e0(param_1);
  return param_1;
}


/* fwd_0054a7bc_423700 @ 00423700  kind=gamemisc  attributed-by=role:thunk  size=9 */

void __fastcall FUN_00423700(undefined4 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}


/* fwd_00461d80_463b60 @ 00463b60  kind=gamemisc  attributed-by=role:thunk  size=23 */

void __cdecl FUN_00463b60(int param_1)

{
  FUN_00461d80(param_1,0,(undefined4 *)0x0);
  return;
}


/* fwd_00462150_463c60 @ 00463c60  kind=gamemisc  attributed-by=role:thunk  size=23 */

void __cdecl FUN_00463c60(int param_1)

{
  FUN_00462150(param_1,0,(undefined4 *)0x0);
  return;
}


/* fwd_00461bb0_463ce0 @ 00463ce0  kind=gamemisc  attributed-by=role:thunk  size=23 */

void __cdecl FUN_00463ce0(int param_1)

{
  FUN_00461bb0(param_1,0,(undefined4 *)0x0);
  return;
}


/* fwd_0054a5e4_464e60 @ 00464e60  kind=gamemisc  attributed-by=role:thunk  size=17 */

void __cdecl FUN_00464e60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)PTR_GetProcAddress_005836b0)(param_2,param_3);
  return;
}


/* fwd_0054a68c_465060 @ 00465060  kind=gamemisc  attributed-by=role:thunk  size=14 */

void __cdecl FUN_00465060(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR_FreeLibrary_0058362c)(param_2);
  return;
}


/* fwd_004834d0_467f50 @ 00467f50  kind=gamemisc  attributed-by=role:thunk  size=23 */

void __cdecl FUN_00467f50(int *param_1,undefined4 *param_2)

{
  FUN_004834d0(param_1,param_2,6,(byte *)0x0);
  return;
}


/* fwd_004a0180_468e30 @ 00468e30  kind=gamemisc  attributed-by=role:thunk  size=32 */

void __cdecl FUN_00468e30(int param_1,void *param_2,size_t param_3,undefined4 *param_4,int *param_5)

{
  FUN_004a0180(param_1,param_2,param_3,0,0,param_4,param_5);
  return;
}


/* fwd_004709e0_469510 @ 00469510  kind=gamemisc  attributed-by=role:thunk  size=30 */

void __cdecl FUN_00469510(int *param_1,int param_2,void *param_3,size_t param_4,undefined *param_5)

{
  FUN_004709e0(param_1,param_2,param_3,param_4,param_5,'\x01');
  return;
}


/* fwd_00468380_483460 @ 00483460  kind=gamemisc  attributed-by=role:thunk  size=45 */

int __cdecl FUN_00483460(undefined4 param_1,int param_2,byte *param_3,int param_4,byte *param_5)

{
  int iVar1;
  
  iVar1 = param_4;
  if (param_2 < param_4) {
    iVar1 = param_2;
  }
  iVar1 = FUN_00468380(param_3,param_5,iVar1);
  if (iVar1 == 0) {
    iVar1 = param_2 - param_4;
  }
  return iVar1;
}


/* fwd_004ce660_4c8280 @ 004c8280  kind=gamemisc  attributed-by=role:thunk  size=31 */

undefined4 * __fastcall FUN_004c8280(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_004ce660((undefined4 *)0x0,(undefined4 *)0x0);
  *param_1 = uVar1;
  return param_1;
}


/* fwd_0054a946_4ce310 @ 004ce310  kind=gamemisc  attributed-by=role:thunk  size=54 */

ulonglong * FUN_004ce310(ulonglong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_0054a946();
  *param_1 = uVar1;
  return param_1;
}


/* fwd_0054a946_4dab30 @ 004dab30  kind=gamemisc  attributed-by=role:thunk  size=44 */

ulonglong * __fastcall FUN_004dab30(ulonglong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_0054a946();
  *param_1 = uVar1;
  return param_1;
}


/* fwd_0042f040_4f7310 @ 004f7310  kind=gamemisc  attributed-by=role:thunk  size=27 */

undefined4 * __fastcall FUN_004f7310(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_0042f040();
  *param_1 = uVar1;
  return param_1;
}


/* fwd_00407b00_4f7330 @ 004f7330  kind=gamemisc  attributed-by=role:thunk  size=27 */

undefined4 * __fastcall FUN_004f7330(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_00407b00();
  *param_1 = uVar1;
  return param_1;
}


/* fwd_0052ed30_52e930 @ 0052e930  kind=gamemisc  attributed-by=role:thunk  size=27 */

undefined4 * __fastcall FUN_0052e930(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_0052ed30();
  *param_1 = uVar1;
  return param_1;
}


/* fwd_0054a946_52ebb0 @ 0052ebb0  kind=gamemisc  attributed-by=role:thunk  size=54 */

ulonglong * FUN_0052ebb0(ulonglong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_0054a946();
  *param_1 = uVar1;
  return param_1;
}


/* fwd_004268f0_548b40 @ 00548b40  kind=gamemisc  attributed-by=role:thunk  size=31 */

undefined4 * __fastcall FUN_00548b40(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_004268f0((undefined4 *)0x0,(undefined4 *)0x0);
  *param_1 = uVar1;
  return param_1;
}


/* fwd_0054a7b6_54a6ce @ 0054a6ce  kind=gamemisc  attributed-by=role:thunk  size=9 */

void __cdecl FUN_0054a6ce(uint param_1)

{
  operator_new(param_1);
  return;
}


/* fwd_0054b8fe_54b4c9 @ 0054b4c9  kind=gamemisc  attributed-by=role:thunk  size=35 */

void __cdecl
FUN_0054b4c9(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_00583cc8,__security_check_cookie,param_1,param_2,param_3,param_4);
  return;
}


/* fwd_0054a8a3_557618 @ 00557618  kind=gamemisc  attributed-by=role:thunk  size=12 */

void FUN_00557618(void)

{
  _atexit(FUN_0055765b);
  return;
}


/* fwd_0054a6ec_55765b @ 0055765b  kind=gamemisc  attributed-by=role:thunk  size=10 */

void FUN_0055765b(void)

{
  FUN_0054a6ec();
  return;
}


