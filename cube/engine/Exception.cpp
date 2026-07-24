// Exception (engine) -- cube. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Exception.h"

/* plasma::Exception::vfunction1 @ 0046dca0  kind=game  attributed-by=rtti  size=4 */

/* plasma::Exception member function inherited by plasma::IOException
   plasma::Exception member function inherited by plasma::InvalidFileFormatException
   plasma::Exception member function inherited by plasma::InvalidVersionException
   plasma::Exception member function inherited by plasma::InvalidDemoLicenseException */

Exception_data * __thiscall plasma::Exception::vfunction1(Exception *this)

{
  return &this->Exception_data;
}


/* plasma::Exception::Exception @ 00681310  kind=game  attributed-by=rtti  size=55 */

Exception * __thiscall plasma::Exception::Exception(Exception *this,int param_1)

{
  this->vftablePtr = &vftable;
  (this->Exception_data).offset_0x14 = 0xf;
  (this->Exception_data).offset_0x10 = 0;
  (this->Exception_data).offset_0x0 = 0;
  FUN_0040c0a0(param_1 + 4,0,0xffffffff);
  return this;
}


