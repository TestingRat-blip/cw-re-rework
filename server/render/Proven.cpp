// Proven (render) -- server. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Proven.h"

/* vec4_store_f32 @ 004010b0  kind=gamemisc  attributed-by=ledger  size=48 */

undefined4 * __thiscall
FUN_004010b0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  return this;
}


/* vec3_store @ 00402990  kind=gamemisc  attributed-by=ledger  size=26 */

undefined4 * __thiscall
FUN_00402990(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  return this;
}


/* vec4_f32_to_i32 @ 004e1200  kind=gamemisc  attributed-by=ledger  size=39 */

int * __thiscall FUN_004e1200(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 4;
  piVar1 = this;
  do {
    *piVar1 = (int)*(float *)((param_1 - (int)this) + (int)piVar1);
    iVar2 = iVar2 + -1;
    piVar1 = piVar1 + 1;
  } while (iVar2 != 0);
  return this;
}


