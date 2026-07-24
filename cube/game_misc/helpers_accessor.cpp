// helpers_accessor (game_misc) -- cube. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_accessor.h"

/* get_0x1a0_586bb0 @ 00586bb0  kind=gamemisc  attributed-by=role:accessor  size=16 */

undefined4 FUN_00586bb0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1a0);
}


/* deref_get_586cd0 @ 00586cd0  kind=gamemisc  attributed-by=role:accessor  size=12 */

undefined4 FUN_00586cd0(undefined4 *param_1)

{
  return *param_1;
}


