// Method3 (engine) -- cube. 1 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Method3.h"

/* abstr::Method3<cube::System,void,int,int,int>::vfunction1 @ 00585e60  kind=game  attributed-by=rtti  size=137 */

void __thiscall
abstr::Method3<cube::System,void,int,int,int>::vfunction1
          (Method3<cube::System,void,int,int,int> *this,undefined4 param_1)

{
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1488;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005865b0(param_1);
  local_1c = (undefined4 *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = 0;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return;
}


