// helpers_accessor (game_misc) -- server. 5 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_accessor.h"

/* get_0x1c_406250 @ 00406250  kind=gamemisc  attributed-by=role:accessor  size=4 */

undefined4 __fastcall FUN_00406250(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}


/* get_0x80015c_41cae0 @ 0041cae0  kind=gamemisc  attributed-by=role:accessor  size=7 */

undefined4 __fastcall FUN_0041cae0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x80015c);
}


/* get_4_428780 @ 00428780  kind=gamemisc  attributed-by=role:accessor  size=4 */

undefined4 __fastcall FUN_00428780(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* deref_get_4ce1f0 @ 004ce1f0  kind=gamemisc  attributed-by=role:accessor  size=3 */

undefined4 __fastcall FUN_004ce1f0(undefined4 *param_1)

{
  return *param_1;
}


/* get_0x6c_4d8e00 @ 004d8e00  kind=gamemisc  attributed-by=role:accessor  size=4 */

undefined4 __fastcall FUN_004d8e00(int param_1)

{
  return *(undefined4 *)(param_1 + 0x6c);
}


