// indirect_dispatch_target (entity) -- cube. 1 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "indirect_dispatch_target.h"

/* FUN_00446950 @ 00446950  kind=gamemisc  attributed-by=role:dispatch-target  size=57 */

void FUN_00446950(undefined4 *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0x1a:
  case 0x1e:
    param_1[2] = 0xbf666666;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  default:
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  case 0x21:
    param_1[2] = 0xbe4ccccd;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  case 0x4a:
    param_1[2] = 0xbe99999a;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  case 0x4b:
    param_1[2] = 0x3dcccccd;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  case 0x97:
    param_1[2] = 0xbeb33333;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
}


