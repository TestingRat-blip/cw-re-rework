// RenderSurface (engine) -- cube. 5 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "RenderSurface.h"

/* plasma::RenderSurface::vfunction9 @ 006509e0  kind=game  attributed-by=rtti  size=3 */

void __thiscall plasma::RenderSurface::vfunction9(void)

{
  return;
}


/* plasma::RenderSurface::vfunction7 @ 0067f440  kind=game  attributed-by=rtti  size=3 */

void __thiscall plasma::RenderSurface::vfunction7(void)

{
  return;
}


/* plasma::RenderSurface::RenderSurface @ 006cf830  kind=game  attributed-by=rtti  size=81 */

RenderSurface * __thiscall
plasma::RenderSurface::RenderSurface(RenderSurface *this,undefined1 param_1)

{
  this->vftablePtr = &vftable;
  (this->RenderSurface_data).offset_0x0 = 1;
  (this->RenderSurface_data).offset_0x4 = 0x3f800000;
  (this->RenderSurface_data).offset_0x8 = 0x3f800000;
  (this->RenderSurface_data).offset_0xc = 0x3f800000;
  (this->RenderSurface_data).offset_0x10 = 0x3f800000;
  (this->RenderSurface_data).offset_0x14 = 0;
  (this->RenderSurface_data).offset_0x18 = 0;
  (this->RenderSurface_data).offset_0x1c = 0;
  (this->RenderSurface_data).offset_0x20 = 0;
  (this->RenderSurface_data).offset_0x24 = param_1;
  return this;
}


/* plasma::RenderSurface::~RenderSurface @ 006cf890  kind=game  attributed-by=rtti  size=7 */

void __thiscall plasma::RenderSurface::~RenderSurface(RenderSurface *this)

{
  this->vftablePtr = &vftable;
  return;
}


/* plasma::RenderSurface::deleting_destructor @ 006cf8a0  kind=game  attributed-by=rtti  size=31 */

RenderSurface * __thiscall
plasma::RenderSurface::deleting_destructor(RenderSurface *this,byte param_1)

{
                    /* inlined destructor: plasma::RenderSurface::~RenderSurface */
  this->vftablePtr = &vftable;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


