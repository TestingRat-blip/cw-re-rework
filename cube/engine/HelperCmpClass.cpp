// HelperCmpClass (engine) -- cube. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "HelperCmpClass.h"

/* abstr::HelperCmpClass::HelperCmpClass_Constructor_or_Destructor @ 00408760  kind=game  attributed-by=rtti  size=235 */

void abstr::HelperCmpClass::HelperCmpClass_Constructor_or_Destructor
               (abstr__HelperCmpClass_data *param_1)

{
  void *pvVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar3 = operator_new(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uVar4 = **(undefined4 **)(param_1->field_0x30 + -0xc);
    if (param_1->field_0x2c != param_1->field_0x30) {
      pvVar1 = *(void **)(param_1->field_0x30 + -0xc);
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar1);
      }
      param_1->field_0x30 = param_1->field_0x30 + -0xc;
    }
    *puVar3 = &vftable;
    puVar3[1] = 1;
    puVar3[2] = uVar4;
  }
  uVar4 = **(undefined4 **)(param_1->field_0x30 + -0xc);
  if (param_1->field_0x2c != param_1->field_0x30) {
    pvVar1 = *(void **)(param_1->field_0x30 + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    param_1->field_0x30 = param_1->field_0x30 + -0xc;
  }
  uVar4 = (**(code **)*puVar3)(uVar4,uVar2);
  local_1c = (undefined4 *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = uVar4;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar3);
}


/* abstr::HelperCmpClass::vfunction1 @ 0040cbe0  kind=game  attributed-by=rtti  size=24 */

undefined4 __thiscall abstr::HelperCmpClass::vfunction1(HelperCmpClass *this,int param_1)

{
  if (param_1 < (int)this[1].vftablePtr) {
    return 0;
  }
  return this->HelperCmpClass_data;
}


