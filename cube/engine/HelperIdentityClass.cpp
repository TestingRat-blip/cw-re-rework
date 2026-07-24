// HelperIdentityClass (engine) -- cube. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "HelperIdentityClass.h"

/* abstr::HelperIdentityClass::HelperIdentityClass_Constructor_or_Destructor @ 00408200  kind=game  attributed-by=rtti  size=43 */

int abstr::HelperIdentityClass::HelperIdentityClass_Constructor_or_Destructor
              (abstr__HelperIdentityClass_data *param_1,int param_2)

{
  HelperIdentityClass_vftable *pHVar1;
  HelperIdentityClass local_10;
  undefined4 local_c;
  int local_8;
  
  local_10.vftablePtr = &vftable;
  local_c = 1;
  local_8 = param_2;
  pHVar1 = vfunction1(&local_10);
  return (int)pHVar1 * local_8;
}


/* abstr::HelperIdentityClass::vfunction1 @ 0040cbd0  kind=game  attributed-by=rtti  size=4 */

HelperIdentityClass_vftable * __thiscall
abstr::HelperIdentityClass::vfunction1(HelperIdentityClass *this)

{
  return this[1].vftablePtr;
}


