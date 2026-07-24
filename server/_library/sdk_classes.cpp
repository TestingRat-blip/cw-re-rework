// sdk_classes (_library) -- server. 1 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "sdk_classes.h"

/* CRefTime::Millisecs @ 00405640  kind=lib  attributed-by=rtti-lib-ns  size=18 */

/* Library Function - Single Match
    public: long __thiscall CRefTime::Millisecs(void)
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

long __thiscall CRefTime::Millisecs(CRefTime *this)

{
  undefined8 uVar1;
  
  uVar1 = __alldiv(this->field0_0x0,this->field1_0x4,0x10000,0);
  return (long)uVar1;
}


