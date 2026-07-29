// Proven (render) -- server. 6 functions. Bodies = Ghidra pseudo-C.
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


/* vec3_i64_store @ 00406380  kind=gamemisc  attributed-by=ledger  size=44 */

undefined4 * __thiscall
FUN_00406380(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined4 *)((int)this + 0x14) = param_6;
  return this;
}


/* vec3i_vector_push_back @ 0042feb0  kind=gamemisc  attributed-by=ledger  size=143 */

void __thiscall FUN_0042feb0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 **)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_0041bb80(this,1);
    }
    puVar1 = (undefined4 *)(*(int *)this + (((int)param_1 - (int)puVar2) / 0xc) * 0xc);
    puVar2 = *(undefined4 **)((int)this + 4);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
      return;
    }
  }
  else {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_0041bb80(this,1);
    }
    puVar1 = *(undefined4 **)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
      puVar1[2] = param_1[2];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
  return;
}


/* vec2d_lengthSquared @ 004d8e30  kind=gamemisc  attributed-by=ledger  size=39 */

float10 __fastcall FUN_004d8e30(double *param_1)

{
  return (float10)(*param_1 * *param_1 + param_1[1] * param_1[1]);
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


