// Method0 (engine) -- cube. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Method0.h"

/* abstr::Method0<abstr::Machine,int>::vfunction1 @ 005858c0  kind=game  attributed-by=rtti  size=139 */

void __thiscall abstr::Method0<abstr::Machine,int>::vfunction1(Method0<abstr::Machine,int> *this)

{
  undefined4 uVar1;
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
  uVar1 = (*(code *)this[1].field1_0x4)(DAT_0076aa78 ^ (uint)&stack0xfffffffc);
  local_1c = (undefined4 *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = uVar1;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return;
}


/* abstr::Method0<cube::System,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::vfunction1 @ 00585950  kind=game  attributed-by=rtti  size=32 */

void __thiscall
abstr::Method0<cube::System,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
vfunction1(Method0<cube::System,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
           *this,undefined4 param_1)

{
  undefined1 auStack_20 [24];
  Method0<cube::System,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
  *pMStack_8;
  
  pMStack_8 = this;
  FUN_00585ef0(auStack_20,param_1);
  FUN_00457ec0();
  return;
}


