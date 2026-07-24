// InvalidFileFormatException (engine) -- cube. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "InvalidFileFormatException.h"

/* plasma::InvalidFileFormatException::InvalidFileFormatException @ 006814e0  kind=game  attributed-by=rtti  size=27 */

InvalidFileFormatException * __thiscall
plasma::InvalidFileFormatException::InvalidFileFormatException
          (InvalidFileFormatException *this,int param_1)

{
  IOException::IOException((IOException *)this,param_1);
  this->vftablePtr = &vftable;
  return this;
}


/* plasma::InvalidFileFormatException::InvalidFileFormatException @ 00681500  kind=game  attributed-by=rtti  size=202 */

void __thiscall
plasma::InvalidFileFormatException::InvalidFileFormatException
          (InvalidFileFormatException *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  InvalidFileFormatException *pIVar2;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8be0;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pIVar2 = this;
  uVar1 = FUN_004515f0(local_2c,param_1," has invalid format.",local_14);
                    /* inlined constructor: plasma::Exception::Exception
                       inlined constructor: plasma::IOException::IOException */
  this->vftablePtr = (InvalidFileFormatException_vftable *)&Exception::vftable;
  (this->Exception_data).offset_0x14 = 0xf;
  (this->Exception_data).offset_0x10 = 0;
  local_8 = 0;
  (this->Exception_data).offset_0x0 = 0;
  FUN_0040c0a0(uVar1,0,0xffffffff);
  this->vftablePtr = (InvalidFileFormatException_vftable *)&IOException::vftable;
  (this->Exception_data).offset_0x2c = 0xf;
  (this->Exception_data).offset_0x28 = 0;
  local_8 = CONCAT31(local_8._1_3_,1);
  (this->Exception_data).offset_0x18 = 0;
  FUN_0040c0a0(param_1,0,0xffffffff);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  this->vftablePtr = &vftable;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc,extraout_EDX,pIVar2);
  return;
}


