// helpers_wrapper (engine) -- cube. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_wrapper.h"

/* FUN_0042ca80 @ 0042ca80  kind=gamemisc  attributed-by=role:wrapper  size=44 */

void FUN_0042ca80(void *param_1)

{
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    FUN_0042ca80(*(undefined4 *)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return;
}


/* FUN_00692a70 @ 00692a70  kind=gamemisc  attributed-by=role:wrapper  size=43 */

void FUN_00692a70(void)

{
  undefined4 *unaff_ESI;
  
  FUN_00691460(unaff_ESI + 6,FUN_006929b0,unaff_ESI[2]);
  if ((*(uint *)*unaff_ESI & 0x200) == 0) {
    FUN_006915b0(unaff_ESI[9]);
  }
  return;
}


