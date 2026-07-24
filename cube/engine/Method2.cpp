// Method2 (engine) -- cube. 5 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Method2.h"

/* abstr::Method2<cube::System,int,int,int>::vfunction1 @ 00585c00  kind=game  attributed-by=rtti  size=137 */

void __thiscall
abstr::Method2<cube::System,int,int,int>::vfunction1
          (Method2<cube::System,int,int,int> *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1688;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_005861b0(param_1);
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


/* abstr::Method2<cube::System,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>::vfunction1 @ 00585c90  kind=game  attributed-by=rtti  size=137 */

void __thiscall
abstr::
Method2<cube::System,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
::vfunction1(Method2<cube::System,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
             *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1688;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_00586250(param_1);
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


/* abstr::Method2<cube::System,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>::vfunction1 @ 00585d20  kind=game  attributed-by=rtti  size=32 */

void __thiscall
abstr::
Method2<cube::System,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
::vfunction1(Method2<cube::System,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
             *this,undefined4 param_1)

{
  undefined1 auStack_20 [24];
  Method2<cube::System,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
  *pMStack_8;
  
  pMStack_8 = this;
  FUN_00586340(auStack_20,param_1);
  FUN_00457ec0();
  return;
}


/* abstr::Method2<cube::System,void,int,int>::vfunction1 @ 00585d40  kind=game  attributed-by=rtti  size=137 */

void __thiscall
abstr::Method2<cube::System,void,int,int>::vfunction1
          (Method2<cube::System,void,int,int> *this,undefined4 param_1)

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
  FUN_005861b0(param_1);
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


/* abstr::Method2<cube::System,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>::vfunction1 @ 00585dd0  kind=game  attributed-by=rtti  size=137 */

void __thiscall
abstr::
Method2<cube::System,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
::vfunction1(Method2<cube::System,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
             *this,undefined4 param_1)

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
  FUN_005864c0(param_1);
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


