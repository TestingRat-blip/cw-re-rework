// Sound (audio) -- cube. 1 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Sound.h"

/* cube::XAudio2Engine::Sound::deleting_destructor @ 006230a0  kind=game  attributed-by=rtti  size=31 */

Sound * __thiscall cube::XAudio2Engine::Sound::deleting_destructor(Sound *this,byte param_1)

{
                    /* inlined destructor: cube::XAudio2Engine::Sound::~Sound */
  this->vftablePtr = &vftable;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


