// LandscapeTile (world) -- cube. 1 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "LandscapeTile.h"

/* cube::LandscapeTile::deleting_destructor @ 005fbaa0  kind=game  attributed-by=rtti  size=44 */

LandscapeTile * __thiscall
cube::LandscapeTile::deleting_destructor(LandscapeTile *this,byte param_1)

{
                    /* inlined destructor: cube::LandscapeTile::~LandscapeTile */
  this->vftablePtr = &vftable;
  if (this[0xb].vftablePtr != (LandscapeTile_vftable *)0x0) {
    (**(code **)(this[0xb].vftablePtr)->deleting_destructor)(1);
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


