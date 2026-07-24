// Dungeon (world) -- server. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Dungeon.h"

/* cube::Dungeon::~Dungeon @ 004f7790  kind=game  attributed-by=rtti  size=16 */

void __thiscall cube::Dungeon::~Dungeon(Dungeon *this)

{
  this->vftablePtr = &vftable;
  operator_delete__(this[3].vftablePtr);
  return;
}


/* cube::Dungeon::scalar_deleting_destructor @ 004f7b00  kind=game  attributed-by=rtti  size=45 */

undefined4 * __thiscall cube::Dungeon::scalar_deleting_destructor(Dungeon *this,byte param_1)

{
                    /* inlined destructor: cube::Dungeon::~Dungeon */
  this->vftablePtr = &vftable;
  operator_delete__(this[3].vftablePtr);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}


