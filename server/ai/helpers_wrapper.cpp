// helpers_wrapper (ai) -- server. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_wrapper.h"

/* FUN_004d9ac0 @ 004d9ac0  kind=gamemisc  attributed-by=role:wrapper  size=113 */

undefined4 * __thiscall FUN_004d9ac0(void *this,int *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554ca1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = FUN_004f7ba0(this);
  *(undefined2 *)(puVar1 + 3) = 0;
  local_8 = 1;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    FUN_004daa80(puVar1 + 4,param_1);
  }
  ExceptionList = local_10;
  return puVar1;
}


/* FUN_004d9bb0 @ 004d9bb0  kind=gamemisc  attributed-by=role:wrapper  size=41 */

undefined4 * __thiscall FUN_004d9bb0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_004daed0(this);
  *(undefined2 *)(puVar1 + 3) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    FUN_004d9960(puVar1 + 4,param_1);
  }
  return puVar1;
}


