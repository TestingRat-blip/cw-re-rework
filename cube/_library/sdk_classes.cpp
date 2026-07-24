// sdk_classes (_library) -- cube. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "sdk_classes.h"

/* CRefTime::Millisecs @ 0042f570  kind=lib  attributed-by=rtti-lib-ns  size=18 */

/* Library Function - Single Match
    public: long __thiscall CRefTime::Millisecs(void)
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

long __thiscall CRefTime::Millisecs(CRefTime *this)

{
  long lVar1;
  
  lVar1 = __alldiv(this->field0_0x0,this->field1_0x4,0x10000,0);
  return lVar1;
}


/* type_info::vfunction1 @ 0068d7b6  kind=lib  attributed-by=rtti-lib-ns  size=72 */

type_info * __thiscall type_info::vfunction1(type_info *this,byte param_1)

{
  type_info *ptVar1;
  
  if ((param_1 & 2) == 0) {
    type_info::~type_info(this);
    ptVar1 = this;
    if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(this);
    }
  }
  else {
    ptVar1 = this + -1;
    _eh_vector_destructor_iterator_(this,0xc,(int)ptVar1->vftablePtr,type_info::~type_info);
    if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(ptVar1);
    }
  }
  return ptVar1;
}


