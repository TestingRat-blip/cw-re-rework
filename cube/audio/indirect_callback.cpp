// indirect_callback (audio) -- cube. 1 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "indirect_callback.h"

/* FUN_006d1b80 @ 006d1b80  kind=gamemisc  attributed-by=role:callback  size=33 */

int FUN_006d1b80(undefined4 *param_1,undefined4 *param_2)

{
  return (uint)(*(uint *)*param_2 < *(uint *)*param_1) -
         (uint)(*(uint *)*param_1 < *(uint *)*param_2);
}


