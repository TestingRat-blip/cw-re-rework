// helpers_wrapper (ui) -- cube. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_wrapper.h"

/* FUN_00411b90 @ 00411b90  kind=gamemisc  attributed-by=role:wrapper  size=45 */

void FUN_00411b90(undefined4 *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  FUN_0040b4e0();
  puVar1 = param_1 + 4;
  if (7 < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  FUN_0040f3c0(param_1,*puVar1,*(undefined4 *)(in_ECX + 0x54));
  return;
}


/* FUN_00627ce0 @ 00627ce0  kind=gamemisc  attributed-by=role:wrapper  size=99 */

void FUN_00627ce0(void)

{
  __security_check_cookie(DAT_0076aa78 ^ (uint)&stack0xfffffffc ^ (uint)&stack0xfffffffc);
  return;
}


