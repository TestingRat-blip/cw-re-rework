// helpers_wrapper (ai) -- server. 1 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_wrapper.h"

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


