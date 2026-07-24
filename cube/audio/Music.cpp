// Music (audio) -- cube. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Music.h"

/* cube::Music::Music @ 00622d60  kind=game  attributed-by=rtti  size=64 */

Music * __thiscall cube::Music::Music(Music *this,Music_vftable *param_1)

{
  this[0x78002].vftablePtr = param_1;
  this->vftablePtr = &vftable;
  this[0x78003].vftablePtr = (Music_vftable *)0x0;
  this[0x78004].vftablePtr = (Music_vftable *)0x0;
  this[0x78005].vftablePtr = (Music_vftable *)0x0;
  this[0x78006].vftablePtr = (Music_vftable *)0x3f800000;
  return this;
}


/* cube::Music::deleting_destructor @ 00623060  kind=game  attributed-by=rtti  size=47 */

Music * __thiscall cube::Music::deleting_destructor(Music *this,byte param_1)

{
  Music_vftable *pMVar1;
  
  pMVar1 = this[0x78003].vftablePtr;
                    /* inlined destructor: cube::Music::~Music */
  this->vftablePtr = &vftable;
  if (pMVar1 != (Music_vftable *)0x0) {
    (**(code **)(pMVar1->deleting_destructor + 0x48))(pMVar1);
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


