// helpers_wrapper (ui) -- cube. 4 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_wrapper.h"

/* FUN_0040b4e0 @ 0040b4e0  kind=gamemisc  attributed-by=role:wrapper  size=86 */

void FUN_0040b4e0(void)

{
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0x3c) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)**(undefined4 **)(in_ECX + 0xc));
  }
  **(undefined4 **)(in_ECX + 0xc) = 0;
  **(undefined4 **)(in_ECX + 0x1c) = 0;
  **(undefined4 **)(in_ECX + 0x2c) = 0;
  **(undefined4 **)(in_ECX + 0x10) = 0;
  **(undefined4 **)(in_ECX + 0x20) = 0;
  **(undefined4 **)(in_ECX + 0x30) = 0;
  *(uint *)(in_ECX + 0x3c) = *(uint *)(in_ECX + 0x3c) & 0xfffffffe;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  return;
}


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


/* FUN_006291d0 @ 006291d0  kind=gamemisc  attributed-by=role:wrapper  size=42 */

void FUN_006291d0(void)

{
  undefined1 local_10 [8];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  FUN_0062de60(local_10);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


