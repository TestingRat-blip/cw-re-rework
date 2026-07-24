// Unsorted (entity) -- cube. 7 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted.h"

/* FUN_0040ea90 @ 0040ea90  kind=gamemisc  attributed-by=logic:caller-vote  size=38 */

void FUN_0040ea90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  return;
}


/* FUN_00411e30 @ 00411e30  kind=gamemisc  attributed-by=logic:caller-vote  size=28 */

void FUN_00411e30(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  return;
}


/* FUN_0043d1a0 @ 0043d1a0  kind=gamemisc  attributed-by=logic:caller-vote  size=2086 */

int FUN_0043d1a0(void)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  
  switch(*(undefined1 *)(in_ECX + 0x68)) {
  case 0:
  case 8:
  case 0xb:
  case 0x1c:
  case 0x32:
  case 0x37:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x60:
  case 0x62:
  case 0x68:
    iVar1 = 0;
    goto LAB_0043d510;
  case 1:
  case 9:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 300.0;
    break;
  case 2:
  case 3:
  case 4:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 100.0;
    break;
  case 5:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 100.0;
    break;
  case 6:
  case 7:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 50.0;
    break;
  case 10:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 100.0;
    break;
  case 0xc:
  case 0x10:
  case 0x43:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 200.0;
    break;
  case 0xd:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 200.0;
    break;
  case 0xe:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 100.0;
    break;
  case 0xf:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 200.0;
    break;
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 100.0;
    break;
  case 0x16:
    fVar3 = (float10)FUN_00447700();
    goto LAB_0043d4f8;
  case 0x17:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 50.0;
    break;
  case 0x18:
  case 0x19:
  case 0x1b:
  case 0x24:
  case 0x3b:
  case 0x3f:
  case 0x40:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 50.0;
    break;
  case 0x1a:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 300.0;
    break;
  default:
    fVar3 = (float10)FUN_00447700();
LAB_0043d4f8:
    fVar5 = (float)fVar3;
    fVar4 = 400.0;
    break;
  case 0x1e:
  case 0x20:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 800.0;
    break;
  case 0x1f:
  case 0x21:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 1600.0;
    break;
  case 0x22:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 1600.0;
    break;
  case 0x25:
  case 0x2b:
  case 0x59:
    if (*(char *)(in_ECX + 0xaa9) == '\f') {
      fVar3 = (float10)FUN_00447700();
      fVar5 = (float)fVar3;
      fVar4 = 600.0;
    }
    else {
      fVar3 = (float10)FUN_00447700();
      fVar5 = (float)fVar3;
      fVar4 = 1200.0;
    }
    break;
  case 0x26:
  case 0x2c:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 500.0;
    break;
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 200.0;
    break;
  case 0x2d:
  case 0x2e:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 1200.0;
    break;
  case 0x30:
  case 0x65:
    iVar1 = 100;
    goto LAB_0043d510;
  case 0x36:
    iVar1 = 400;
    goto LAB_0043d510;
  case 0x39:
  case 0x3a:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 800.0;
    break;
  case 0x41:
  case 0x42:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 300.0;
    break;
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 300.0;
    break;
  case 0x47:
  case 0x48:
    iVar1 = 200;
    goto LAB_0043d510;
  case 0x57:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 5000.0;
    break;
  case 0x5b:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 1000.0;
    break;
  case 0x5d:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 800.0;
    break;
  case 0x5e:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 500.0;
    break;
  case 0x5f:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 1000.0;
    break;
  case 0x69:
    iVar1 = 5000;
    goto LAB_0043d510;
  }
  iVar1 = (int)(fVar4 / (fVar5 * *(float *)(in_ECX + 0x17c)));
LAB_0043d510:
  switch(*(undefined1 *)(in_ECX + 0x68)) {
  case 0:
  case 0x31:
    iVar2 = 0;
    break;
  case 1:
  case 2:
  case 9:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 200.0;
    goto LAB_0043d7f4;
  case 3:
  case 4:
  case 0x3e:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 100.0;
    goto LAB_0043d7f4;
  case 5:
  case 0xc:
  case 0x10:
  case 0x11:
  case 0x41:
  case 0x42:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 400.0;
    goto LAB_0043d7f4;
  case 6:
  case 7:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 150.0;
    goto LAB_0043d7f4;
  default:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    goto LAB_0043d7ec;
  case 10:
    iVar2 = 200;
    break;
  case 0xb:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    goto LAB_0043d7ec;
  case 0xd:
  case 0xe:
  case 0xf:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 200.0;
    goto LAB_0043d7f4;
  case 0x12:
  case 0x13:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 150.0;
    goto LAB_0043d7f4;
  case 0x14:
  case 0x15:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 400.0;
    goto LAB_0043d7f4;
  case 0x16:
    fVar3 = (float10)FUN_00447700();
    iVar2 = (int)(50.0 / ((float)fVar3 * *(float *)(in_ECX + 0x17c)));
    break;
  case 0x17:
    fVar3 = (float10)FUN_00447700();
    iVar2 = (int)(50.0 / ((float)fVar3 * *(float *)(in_ECX + 0x17c)));
    break;
  case 0x1a:
    fVar3 = (float10)FUN_00447700();
    iVar2 = (int)(1200.0 / ((float)fVar3 * *(float *)(in_ECX + 0x17c)));
    break;
  case 0x1e:
  case 0x20:
  case 0x49:
  case 0x5d:
    iVar2 = 600;
    break;
  case 0x1f:
  case 0x21:
    iVar2 = 0x4b0;
    break;
  case 0x22:
    fVar3 = (float10)FUN_00447700();
    iVar2 = (int)(1200.0 / ((float)fVar3 * *(float *)(in_ECX + 0x17c)));
    break;
  case 0x25:
  case 0x2b:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 100.0;
    goto LAB_0043d7f4;
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2c:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    goto LAB_0043d7ec;
  case 0x2d:
  case 0x2e:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 500.0;
    goto LAB_0043d7f4;
  case 0x32:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x60:
    iVar2 = 500;
    break;
  case 0x36:
    iVar2 = 100;
    break;
  case 0x37:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 500.0;
    goto LAB_0043d7f4;
  case 0x43:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 200.0;
    goto LAB_0043d7f4;
  case 0x44:
  case 0x45:
    iVar2 = 1000;
    break;
  case 0x47:
    iVar2 = 3000;
    break;
  case 0x48:
  case 0x56:
    iVar2 = 5000;
    break;
  case 0x4b:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    goto LAB_0043d7ec;
  case 0x5b:
    iVar2 = 6000;
    break;
  case 0x5e:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 500.0;
    goto LAB_0043d7f4;
  case 0x5f:
    iVar2 = 2000;
    break;
  case 0x68:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
LAB_0043d7ec:
    fVar4 = 300.0;
LAB_0043d7f4:
    iVar2 = (int)(fVar4 / (fVar5 * *(float *)(in_ECX + 0x17c)));
  }
  switch(*(undefined1 *)(in_ECX + 0x68)) {
  case 0:
  case 0x32:
  case 0x60:
    return iVar2 + 100 + iVar1;
  default:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 500.0;
    break;
  case 3:
  case 4:
  case 5:
  case 0x3e:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 300.0;
    break;
  case 7:
  case 0xe:
  case 0x12:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 200.0;
    break;
  case 10:
    return iVar2 + 600 + iVar1;
  case 0xb:
  case 0x3c:
  case 0x3d:
  case 0x68:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 100.0;
    break;
  case 0xf:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 400.0;
    break;
  case 0x16:
  case 0x1a:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x5e:
  case 0x5f:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 100.0;
    break;
  case 0x17:
    fVar3 = (float10)FUN_00447700();
    return (int)(10.0 / ((float)fVar3 * *(float *)(in_ECX + 0x17c))) + iVar2 + iVar1;
  case 0x30:
    return iVar2 + iVar1;
  case 0x36:
    return iVar2 + 400 + iVar1;
  case 0x39:
  case 0x3a:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 300.0;
    break;
  case 0x41:
  case 0x42:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 200.0;
    break;
  case 0x43:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 100.0;
    break;
  case 0x44:
  case 0x45:
  case 0x5d:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 800.0;
    break;
  case 0x47:
  case 0x48:
    return iVar2 + 200 + iVar1;
  }
  return (int)(fVar4 / (fVar5 * *(float *)(in_ECX + 0x17c))) + iVar2 + iVar1;
}


/* FUN_00444270 @ 00444270  kind=gamemisc  attributed-by=logic:caller-vote  size=377 */

int FUN_00444270(uint param_1)

{
  int in_ECX;
  float10 fVar1;
  float fVar2;
  float fVar3;
  
  if ((int)param_1 < 0) {
    param_1 = (uint)*(byte *)(in_ECX + 0x68);
  }
  switch(param_1) {
  case 0:
  case 0x32:
  case 0x60:
    return 100;
  default:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 500.0;
    break;
  case 3:
  case 4:
  case 5:
  case 0x3e:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 300.0;
    break;
  case 7:
  case 0xe:
  case 0x12:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 200.0;
    break;
  case 10:
    return 600;
  case 0xb:
  case 0x3c:
  case 0x3d:
  case 0x68:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 100.0;
    break;
  case 0xf:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 400.0;
    break;
  case 0x16:
  case 0x1a:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x5e:
  case 0x5f:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 100.0;
    break;
  case 0x17:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 10.0;
    break;
  case 0x30:
    return 0;
  case 0x36:
    return 400;
  case 0x39:
  case 0x3a:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 300.0;
    break;
  case 0x41:
  case 0x42:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 200.0;
    break;
  case 0x43:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 100.0;
    break;
  case 0x44:
  case 0x45:
  case 0x5d:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 800.0;
    break;
  case 0x47:
  case 0x48:
    return 200;
  }
  return (int)(fVar2 / (fVar3 * *(float *)(in_ECX + 0x17c)));
}


/* FUN_0044b5f0 @ 0044b5f0  kind=gamemisc  attributed-by=logic:caller-vote  size=104 */

uint FUN_0044b5f0(uint param_1)

{
  uint in_EAX;
  void *pvVar1;
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  if (param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  if (0xe6c2b4 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  pvVar1 = operator_new(param_1 * 0x11c);
  if (pvVar1 != (void *)0x0) {
    *in_ECX = pvVar1;
    in_ECX[1] = pvVar1;
    pvVar1 = (void *)((int)pvVar1 + param_1 * 0x11c);
    in_ECX[2] = pvVar1;
    return CONCAT31((int3)((uint)pvVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_004c6b80 @ 004c6b80  kind=gamemisc  attributed-by=logic:caller-vote  size=26 */

undefined4 FUN_004c6b80(void)

{
  undefined4 uVar1;
  char *in_ECX;
  
  if (*in_ECX != '\x01') {
    return 0;
  }
  uVar1 = 10000;
  if (in_ECX[1] == '\x01') {
    uVar1 = 3000;
  }
  return uVar1;
}


/* FUN_005aea70 @ 005aea70  kind=gamemisc  attributed-by=logic:caller-vote  size=23 */

void FUN_005aea70(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


