// zlib (_library) -- cube. 1 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "zlib.h"

/* FUN_006ceb90 @ 006ceb90  kind=lib  attributed-by=lib-string  size=894 */

uint FUN_006ceb90(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int *in_EAX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (((in_EAX == (int *)0x0) || ((uint *)in_EAX[7] == (uint *)0x0)) || (*in_EAX == 0)) {
    return 0xfffffffe;
  }
  uVar3 = *(uint *)in_EAX[7];
  uVar4 = 0xfffffffb;
  uVar5 = (param_1 != 4) - 1 & 0xfffffffb;
  if (0xd < uVar3) {
    return 0xfffffffe;
  }
  do {
    switch((&switchD_006cebd3::switchdataD_006cef10)[uVar3]) {
    case (undefined *)0x6cebda:
      if (in_EAX[1] == 0) {
        return uVar4;
      }
      in_EAX[2] = in_EAX[2] + 1;
      in_EAX[1] = in_EAX[1] + -1;
      bVar1 = *(byte *)*in_EAX;
      *(uint *)(in_EAX[7] + 4) = (uint)bVar1;
      *in_EAX = *in_EAX + 1;
      if ((bVar1 & 0xf) == 8) {
        puVar2 = (undefined4 *)in_EAX[7];
        if (((uint)puVar2[1] >> 4) + 8 <= (uint)puVar2[4]) {
          *puVar2 = 1;
          uVar4 = uVar5;
          goto switchD_006cebd3_caseD_6cec49;
        }
        *puVar2 = 0xd;
        in_EAX[6] = (int)"invalid window size";
        goto LAB_006cedd6;
      }
      *(undefined4 *)in_EAX[7] = 0xd;
      in_EAX[6] = (int)"unknown compression method";
      *(undefined4 *)(in_EAX[7] + 4) = 5;
      uVar4 = uVar5;
      break;
    case (undefined *)0x6cec49:
switchD_006cebd3_caseD_6cec49:
      if (in_EAX[1] == 0) {
        return uVar4;
      }
      in_EAX[2] = in_EAX[2] + 1;
      puVar2 = (undefined4 *)in_EAX[7];
      in_EAX[1] = in_EAX[1] + -1;
      bVar1 = *(byte *)*in_EAX;
      *in_EAX = (int)((byte *)*in_EAX + 1);
      if ((puVar2[1] * 0x100 + (uint)bVar1) % 0x1f == 0) {
        if ((bVar1 & 0x20) != 0) {
          *(undefined4 *)in_EAX[7] = 2;
          uVar4 = uVar5;
          goto switchD_006cebd3_caseD_6cee02;
        }
        *puVar2 = 7;
        uVar4 = uVar5;
        break;
      }
      *puVar2 = 0xd;
      in_EAX[6] = (int)"incorrect header check";
      goto LAB_006cedd6;
    case (undefined *)0x6ceca9:
      uVar3 = FUN_006ce050(uVar4);
      if (uVar3 == 0xfffffffd) {
        *(undefined4 *)in_EAX[7] = 0xd;
        *(undefined4 *)(in_EAX[7] + 4) = 0;
        uVar4 = 0xfffffffd;
      }
      else {
        if (uVar3 == 0) {
          uVar3 = uVar5;
        }
        if (uVar3 != 1) {
          return uVar3;
        }
        FUN_006cdf40();
        puVar2 = (undefined4 *)in_EAX[7];
        if (puVar2[3] == 0) {
          *puVar2 = 8;
          uVar4 = uVar5;
          goto switchD_006cebd3_caseD_6ced12;
        }
        *puVar2 = 0xc;
        uVar4 = uVar5;
      }
      break;
    case (undefined *)0x6ced12:
switchD_006cebd3_caseD_6ced12:
      if (in_EAX[1] == 0) {
        return uVar4;
      }
      in_EAX[2] = in_EAX[2] + 1;
      in_EAX[1] = in_EAX[1] + -1;
      *(uint *)(in_EAX[7] + 8) = (uint)*(byte *)*in_EAX << 0x18;
      *in_EAX = *in_EAX + 1;
      *(undefined4 *)in_EAX[7] = 9;
      uVar4 = uVar5;
    case (undefined *)0x6ced3f:
      if (in_EAX[1] == 0) {
        return uVar4;
      }
      in_EAX[2] = in_EAX[2] + 1;
      in_EAX[1] = in_EAX[1] + -1;
      *(int *)(in_EAX[7] + 8) = *(int *)(in_EAX[7] + 8) + (uint)*(byte *)*in_EAX * 0x10000;
      *in_EAX = *in_EAX + 1;
      *(undefined4 *)in_EAX[7] = 10;
      uVar4 = uVar5;
switchD_006cebd3_caseD_6ced6c:
      if (in_EAX[1] == 0) {
        return uVar4;
      }
      in_EAX[2] = in_EAX[2] + 1;
      in_EAX[1] = in_EAX[1] + -1;
      *(int *)(in_EAX[7] + 8) = *(int *)(in_EAX[7] + 8) + (uint)*(byte *)*in_EAX * 0x100;
      *in_EAX = *in_EAX + 1;
      *(undefined4 *)in_EAX[7] = 0xb;
      uVar4 = uVar5;
switchD_006cebd3_caseD_6ced99:
      if (in_EAX[1] == 0) {
        return uVar4;
      }
      in_EAX[2] = in_EAX[2] + 1;
      in_EAX[1] = in_EAX[1] + -1;
      *(int *)(in_EAX[7] + 8) = *(int *)(in_EAX[7] + 8) + (uint)*(byte *)*in_EAX;
      puVar2 = (undefined4 *)in_EAX[7];
      *in_EAX = *in_EAX + 1;
      if (puVar2[1] == puVar2[2]) {
        *(undefined4 *)in_EAX[7] = 0xc;
switchD_006cebd3_caseD_6ceef0:
        return 1;
      }
      *puVar2 = 0xd;
      in_EAX[6] = (int)"incorrect data check";
LAB_006cedd6:
      *(undefined4 *)(in_EAX[7] + 4) = 5;
      uVar4 = uVar5;
      break;
    case (undefined *)0x6ced6c:
      goto switchD_006cebd3_caseD_6ced6c;
    case (undefined *)0x6ced99:
      goto switchD_006cebd3_caseD_6ced99;
    case (undefined *)0x6cee02:
switchD_006cebd3_caseD_6cee02:
      if (in_EAX[1] == 0) {
        return uVar4;
      }
      in_EAX[2] = in_EAX[2] + 1;
      in_EAX[1] = in_EAX[1] + -1;
      *(uint *)(in_EAX[7] + 8) = (uint)*(byte *)*in_EAX << 0x18;
      *in_EAX = *in_EAX + 1;
      *(undefined4 *)in_EAX[7] = 3;
      uVar4 = uVar5;
    case (undefined *)0x6cee2f:
      if (in_EAX[1] != 0) {
        in_EAX[2] = in_EAX[2] + 1;
        in_EAX[1] = in_EAX[1] + -1;
        *(int *)(in_EAX[7] + 8) = *(int *)(in_EAX[7] + 8) + (uint)*(byte *)*in_EAX * 0x10000;
        *in_EAX = *in_EAX + 1;
        *(undefined4 *)in_EAX[7] = 4;
        uVar4 = uVar5;
switchD_006cebd3_caseD_6cee5c:
        if (in_EAX[1] != 0) {
          in_EAX[2] = in_EAX[2] + 1;
          in_EAX[1] = in_EAX[1] + -1;
          *(int *)(in_EAX[7] + 8) = *(int *)(in_EAX[7] + 8) + (uint)*(byte *)*in_EAX * 0x100;
          *in_EAX = *in_EAX + 1;
          *(undefined4 *)in_EAX[7] = 5;
          uVar4 = uVar5;
switchD_006cebd3_caseD_6cee85:
          if (in_EAX[1] != 0) {
            in_EAX[2] = in_EAX[2] + 1;
            in_EAX[1] = in_EAX[1] + -1;
            *(int *)(in_EAX[7] + 8) = *(int *)(in_EAX[7] + 8) + (uint)*(byte *)*in_EAX;
            *in_EAX = *in_EAX + 1;
            in_EAX[0xc] = ((undefined4 *)in_EAX[7])[2];
            *(undefined4 *)in_EAX[7] = 6;
            return 2;
          }
        }
      }
      return uVar4;
    case (undefined *)0x6cee5c:
      goto switchD_006cebd3_caseD_6cee5c;
    case (undefined *)0x6cee85:
      goto switchD_006cebd3_caseD_6cee85;
    case (undefined *)0x6ceeba:
      *(undefined4 *)in_EAX[7] = 0xd;
      in_EAX[6] = (int)"need dictionary";
      *(undefined4 *)(in_EAX[7] + 4) = 0;
      return 0xfffffffe;
    case (undefined *)0x6ceef0:
      goto switchD_006cebd3_caseD_6ceef0;
    case (undefined *)0x6ceefb:
      return 0xfffffffd;
    }
    uVar3 = *(uint *)in_EAX[7];
    if (0xd < uVar3) {
      return 0xfffffffe;
    }
  } while( true );
}


