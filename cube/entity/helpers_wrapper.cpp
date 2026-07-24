// helpers_wrapper (entity) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_wrapper.h"

/* FUN_0040e420 @ 0040e420  kind=gamemisc  attributed-by=role:wrapper  size=30 */

float10 FUN_0040e420(float param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1;
  libm_sse2_cos_precise();
  return (float10)(float)dVar1;
}


/* FUN_00424b50 @ 00424b50  kind=gamemisc  attributed-by=role:wrapper  size=30 */

float10 FUN_00424b50(float param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1;
  libm_sse2_sin_precise();
  return (float10)(float)dVar1;
}


/* FUN_005fb860 @ 005fb860  kind=gamemisc  attributed-by=role:wrapper  size=17 */

void FUN_005fb860(void)

{
  undefined4 *in_ECX;
  
  if ((void *)*in_ECX != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  return;
}


