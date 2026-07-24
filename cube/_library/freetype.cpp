// freetype (_library) -- cube. 1 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "freetype.h"

/* FUN_0068f110 @ 0068f110  kind=lib  attributed-by=lib-string  size=96 */

undefined4 FUN_0068f110(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  if (((param_1 == (undefined4 *)0x0) || (param_2 == (byte *)0x0)) ||
     (pbVar2 = (byte *)*param_1, pbVar4 = param_2, pbVar2 == (byte *)0x0)) {
    return 0;
  }
LAB_0068f132:
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 == *pbVar4) {
      if (bVar1 != 0) {
        bVar1 = pbVar2[1];
        bVar5 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_0068f152;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
        if (bVar1 != 0) goto LAB_0068f132;
      }
      iVar3 = 0;
    }
    else {
LAB_0068f152:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
    }
    if (iVar3 == 0) {
      return param_1[1];
    }
    pbVar2 = (byte *)param_1[2];
    param_1 = param_1 + 2;
    pbVar4 = param_2;
    if (pbVar2 == (byte *)0x0) {
      return 0;
    }
  } while( true );
}


