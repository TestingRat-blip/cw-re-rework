// helpers_dtor_like (world) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_dtor_like.h"

/* FUN_006fb330 @ 006fb330  kind=gamemisc  attributed-by=role:dtor-like  size=79 */

void FUN_006fb330(void)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 local_9;
  undefined1 local_5;
  
  uVar2 = DAT_0076b0ac;
  pvVar1 = DAT_0076b0a8;
  if (DAT_0076b0a8 != (void *)0x0) {
    FUN_0046dcb0(&local_5);
    FUN_00639cf0(pvVar1,uVar2,&local_5,local_9);
    FUN_00458de0();
                    /* WARNING: Subroutine does not return */
    operator_delete(DAT_0076b0a8);
  }
  return;
}


/* FUN_006fb3b0 @ 006fb3b0  kind=gamemisc  attributed-by=role:dtor-like  size=79 */

void FUN_006fb3b0(void)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 local_9;
  undefined1 local_5;
  
  uVar2 = DAT_0076b0b8;
  pvVar1 = DAT_0076b0b4;
  if (DAT_0076b0b4 != (void *)0x0) {
    FUN_0046dcb0(&local_5);
    FUN_00639cf0(pvVar1,uVar2,&local_5,local_9);
    FUN_00458de0();
                    /* WARNING: Subroutine does not return */
    operator_delete(DAT_0076b0b4);
  }
  return;
}


/* FUN_006fb430 @ 006fb430  kind=gamemisc  attributed-by=role:dtor-like  size=79 */

void FUN_006fb430(void)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 local_9;
  undefined1 local_5;
  
  uVar2 = DAT_0076b09c;
  pvVar1 = DAT_0076b098;
  if (DAT_0076b098 != (void *)0x0) {
    FUN_0046dcb0(&local_5);
    FUN_00639cf0(pvVar1,uVar2,&local_5,local_9);
    FUN_00458de0();
                    /* WARNING: Subroutine does not return */
    operator_delete(DAT_0076b098);
  }
  return;
}


