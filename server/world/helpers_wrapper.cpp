// helpers_wrapper (world) -- server. 1 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_wrapper.h"

/* FUN_00406ef0 @ 00406ef0  kind=gamemisc  attributed-by=role:wrapper  size=122 */

undefined4 * __fastcall FUN_00406ef0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 8) = 1;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  param_1[0x49] = 0;
  memset(param_1 + 9,0,0x100);
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  return param_1;
}


