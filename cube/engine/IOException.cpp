// IOException (engine) -- cube. 1 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "IOException.h"

/* plasma::IOException::IOException @ 00681350  kind=game  attributed-by=rtti  size=151 */

IOException * __thiscall plasma::IOException::IOException(IOException *this,int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8ba8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* inlined constructor: plasma::Exception::Exception */
  this->vftablePtr = (IOException_vftable *)&Exception::vftable;
  (this->Exception_data).offset_0x14 = 0xf;
  (this->Exception_data).offset_0x10 = 0;
  (this->Exception_data).offset_0x0 = 0;
  FUN_0040c0a0(param_1 + 4,0,0xffffffff);
  this->vftablePtr = &vftable;
  (this->Exception_data).offset_0x2c = 0xf;
  (this->Exception_data).offset_0x28 = 0;
  local_8 = 0;
  (this->Exception_data).offset_0x18 = 0;
  FUN_0040c0a0(param_1 + 0x1c,0,0xffffffff);
  ExceptionList = local_10;
  return this;
}


