// Unsorted_005 (game_misc) -- cube. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_005.h"

/* FUN_006b1740 @ 006b1740  kind=gamemisc  attributed-by=none  size=94 */

int FUN_006b1740(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  undefined4 *in_ECX;
  int iVar3;
  
  iVar1 = *(int *)(in_EAX + 0x1c);
  if (*(char *)(in_EAX + 0x20) == '\0') {
    return 8;
  }
  if ((*(uint *)(iVar1 + 4) < (uint)(*(short *)(iVar1 + 0x3a) + 1 + (int)*(short *)(iVar1 + 0x16)))
     && (iVar2 = FUN_00693c40(iVar1,1,0), iVar2 != 0)) {
    return iVar2;
  }
  iVar3 = (int)*(short *)(iVar1 + 0x3a);
  iVar2 = *(int *)(iVar1 + 0x3c);
  *(undefined4 *)(iVar2 + iVar3 * 8) = *in_ECX;
  *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = in_ECX[1];
  *(undefined1 *)(iVar3 + *(int *)(iVar1 + 0x40)) = 1;
  *(short *)(iVar1 + 0x3a) = *(short *)(iVar1 + 0x3a) + 1;
  return 0;
}


/* FUN_006b17a0 @ 006b17a0  kind=gamemisc  attributed-by=none  size=136 */

int FUN_006b17a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  undefined2 *puVar4;
  undefined4 *unaff_EBX;
  
  iVar2 = *(int *)(in_EAX + 0x1c);
  if (*(char *)(in_EAX + 0x20) == '\0') {
    return 8;
  }
  if ((*(uint *)(iVar2 + 4) < (uint)(*(short *)(iVar2 + 0x3a) + 3 + (int)*(short *)(iVar2 + 0x16)))
     && (iVar3 = FUN_00693c40(iVar2,3,0), iVar3 != 0)) {
    return iVar3;
  }
  puVar1 = (undefined4 *)(*(int *)(iVar2 + 0x3c) + *(short *)(iVar2 + 0x3a) * 8);
  puVar4 = (undefined2 *)(*(int *)(iVar2 + 0x40) + (int)*(short *)(iVar2 + 0x3a));
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  puVar1[2] = *param_2;
  puVar1[3] = param_2[1];
  puVar1[4] = *unaff_EBX;
  puVar1[5] = unaff_EBX[1];
  *puVar4 = 0x202;
  *(undefined1 *)(puVar4 + 1) = 1;
  *(short *)(iVar2 + 0x3a) = *(short *)(iVar2 + 0x3a) + 3;
  return 0;
}


/* FUN_006b1830 @ 006b1830  kind=gamemisc  attributed-by=none  size=82 */

void FUN_006b1830(void)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 0x1c);
  FUN_006b16c0();
  *(undefined1 *)(unaff_EDI + 0x20) = 1;
  if ((*(uint *)(iVar1 + 4) < (uint)(*(short *)(iVar1 + 0x3a) + 1 + (int)*(short *)(iVar1 + 0x16)))
     || (*(uint *)(iVar1 + 8) < (uint)(*(short *)(iVar1 + 0x38) + 1 + (int)*(short *)(iVar1 + 0x14))
        )) {
    iVar1 = FUN_00693c40(iVar1,1,1);
    if (iVar1 != 0) {
      return;
    }
  }
  FUN_006b1740();
  return;
}


/* FUN_006b1e00 @ 006b1e00  kind=gamemisc  attributed-by=none  size=57 */

void FUN_006b1e00(char param_1)

{
  int iVar1;
  int *in_EAX;
  int *in_ECX;
  
  *in_EAX = in_ECX[3];
  in_EAX[1] = in_ECX[2];
  in_EAX[2] = in_ECX[1];
  iVar1 = *in_ECX;
  in_EAX[4] = in_EAX[2] * iVar1;
  in_EAX[3] = iVar1;
  if (param_1 == '\0') {
    *in_EAX = *in_EAX + (*in_ECX + -1) * in_EAX[1];
    in_EAX[1] = -in_EAX[1];
  }
  return;
}


/* FUN_006b1e40 @ 006b1e40  kind=gamemisc  attributed-by=none  size=175 */

void FUN_006b1e40(char *param_1)

{
  int *in_EAX;
  int in_ECX;
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  int local_c;
  
  local_c = in_EAX[2];
  uVar2 = 0;
  uVar1 = (in_ECX - (int)param_1) * 8;
  puVar6 = (undefined1 *)*in_EAX;
  uVar5 = 0x80;
  cVar3 = '\0';
  if (in_EAX[4] < (int)uVar1) {
    uVar1 = in_EAX[4];
  }
  uVar4 = uVar1 & 7;
  if (0 < (int)uVar1) {
    do {
      if ((uVar1 & 7) == uVar4) {
        cVar3 = *param_1;
        param_1 = param_1 + 1;
      }
      if (cVar3 < '\0') {
        uVar2 = uVar2 | uVar5;
      }
      cVar3 = cVar3 * '\x02';
      local_c = local_c + -1;
      uVar5 = uVar5 >> 1;
      if (local_c < 1) {
        *puVar6 = (char)uVar2;
        local_c = in_EAX[2];
        *in_EAX = *in_EAX + in_EAX[1];
        puVar6 = (undefined1 *)*in_EAX;
LAB_006b1ed6:
        uVar2 = 0;
        uVar5 = 0x80;
      }
      else if (uVar5 == 0) {
        *puVar6 = (char)uVar2;
        puVar6 = puVar6 + 1;
        goto LAB_006b1ed6;
      }
      uVar1 = uVar1 - 1;
    } while (0 < (int)uVar1);
    if (uVar5 != 0x80) {
      *puVar6 = (char)uVar2;
    }
  }
  return;
}


/* FUN_006b1f00 @ 006b1f00  kind=gamemisc  attributed-by=none  size=256 */

void FUN_006b1f00(byte *param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *in_EAX;
  uint uVar4;
  uint uVar5;
  int *in_EDX;
  uint local_14;
  uint local_10;
  undefined1 *local_c;
  int local_8;
  int local_4;
  
  local_c = (undefined1 *)*in_EDX;
  local_4 = in_EDX[4];
  local_8 = in_EDX[2];
  uVar5 = 0;
  bVar3 = true;
  uVar4 = 0;
  local_14 = 0x80;
  local_10 = 0;
  bVar2 = true;
  if (0 < local_4) {
    do {
      if (bVar2) {
        do {
          if (bVar3) {
            if (param_1 <= in_EAX) break;
            bVar1 = *in_EAX;
            in_EAX = in_EAX + 1;
            uVar4 = bVar1 & 0xf;
            bVar3 = false;
            uVar5 = (int)(uint)bVar1 >> 4;
          }
          else {
            bVar3 = true;
            uVar5 = uVar4;
          }
        } while (uVar5 == 0);
      }
      if (bVar3) {
        local_10 = local_10 | local_14;
      }
      local_14 = local_14 >> 1;
      local_8 = local_8 + -1;
      if (local_8 < 1) {
        *local_c = (undefined1)local_10;
        local_8 = in_EDX[2];
        *in_EDX = *in_EDX + in_EDX[1];
        local_c = (undefined1 *)*in_EDX;
LAB_006b1fb9:
        local_10 = 0;
        local_14 = 0x80;
      }
      else if (local_14 == 0) {
        *local_c = (undefined1)local_10;
        local_c = local_c + 1;
        goto LAB_006b1fb9;
      }
      uVar5 = uVar5 - 1;
      bVar2 = (int)uVar5 < 1;
      local_4 = local_4 + -1;
    } while (0 < local_4);
    if (local_14 != 0x80) {
      *local_c = (undefined1)local_10;
    }
  }
  return;
}


/* FUN_006b2000 @ 006b2000  kind=gamemisc  attributed-by=none  size=188 */

void FUN_006b2000(byte *param_1,byte *param_2)

{
  bool bVar1;
  bool bVar2;
  int *in_EAX;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  int local_8;
  int local_4;
  
  local_8 = in_EAX[2];
  local_4 = in_EAX[4];
  puVar5 = (undefined1 *)*in_EAX;
  uVar6 = 0x80;
  uVar4 = 0;
  uVar3 = 0;
  bVar2 = true;
  bVar1 = true;
  if (0 < local_4) {
    do {
      if (bVar1) {
        do {
          if (param_2 <= param_1) break;
          uVar3 = (uint)*param_1;
          param_1 = param_1 + 1;
          bVar2 = (bool)(bVar2 ^ 1);
        } while (uVar3 == 0);
      }
      if (bVar2) {
        uVar4 = uVar4 | uVar6;
      }
      local_8 = local_8 + -1;
      uVar6 = uVar6 >> 1;
      if (local_8 < 1) {
        *puVar5 = (char)uVar4;
        local_8 = in_EAX[2];
        *in_EAX = *in_EAX + in_EAX[1];
        puVar5 = (undefined1 *)*in_EAX;
LAB_006b2093:
        uVar4 = 0;
        uVar6 = 0x80;
      }
      else if (uVar6 == 0) {
        *puVar5 = (char)uVar4;
        puVar5 = puVar5 + 1;
        goto LAB_006b2093;
      }
      uVar3 = uVar3 - 1;
      bVar1 = (int)uVar3 < 1;
      local_4 = local_4 + -1;
    } while (0 < local_4);
    if (uVar6 != 0x80) {
      *puVar5 = (char)uVar4;
    }
  }
  return;
}


/* FUN_006b20c0 @ 006b20c0  kind=gamemisc  attributed-by=none  size=274 */

void FUN_006b20c0(int param_1,byte *param_2,uint param_3,uint *param_4,uint *param_5)

{
  uint in_EAX;
  byte *pbVar1;
  byte *pbVar2;
  uint in_ECX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = 4;
  if ((in_EAX & 1) != 0) {
    iVar6 = 5;
  }
  if ((in_EAX & 2) != 0) {
    iVar6 = iVar6 + 1;
  }
  if ((in_EAX & 4) != 0) {
    iVar6 = iVar6 + 1;
  }
  uVar5 = 0;
  if (in_ECX != 0) {
    do {
      uVar3 = in_ECX + uVar5 >> 1;
      pbVar1 = (byte *)(uVar3 * iVar6 + param_1);
      if (param_2 < pbVar1 + iVar6) break;
      if ((in_EAX & 1) == 0) {
        uVar4 = (uint)*pbVar1;
        pbVar2 = pbVar1 + 1;
      }
      else {
        pbVar2 = pbVar1 + 2;
        uVar4 = (uint)CONCAT11(*pbVar1,pbVar1[1]);
      }
      if (uVar4 == param_3) {
        if ((in_EAX & 2) == 0) {
          uVar5 = (uint)*pbVar2;
          pbVar1 = pbVar2 + 1;
        }
        else {
          pbVar1 = pbVar2 + 2;
          uVar5 = (uint)CONCAT11(*pbVar2,pbVar2[1]);
        }
        *param_5 = uVar5;
        if ((in_EAX & 4) == 0) {
          *param_4 = (uint)CONCAT11(*pbVar1,pbVar1[1]);
          return;
        }
        *param_4 = (uint)CONCAT21(CONCAT11(*pbVar1,pbVar1[1]),pbVar1[2]);
        return;
      }
      if (uVar4 < param_3) {
        uVar5 = uVar3;
        uVar3 = in_ECX;
      }
      in_ECX = uVar3;
    } while (uVar5 < uVar3);
  }
  *param_5 = 0;
  *param_4 = 0;
  return;
}


/* FUN_006b21e0 @ 006b21e0  kind=gamemisc  attributed-by=none  size=560 */

undefined4
FUN_006b21e0(uint *param_1,byte *param_2,uint param_3,uint *param_4,uint *param_5,uint *param_6,
            uint *param_7,uint *param_8,uint *param_9)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_4;
  
  pbVar3 = (byte *)*param_1;
  pbVar5 = pbVar3 + 1;
  if (param_2 < pbVar5) {
    return 8;
  }
  bVar1 = *pbVar3;
  uVar6 = 0;
  uVar8 = 0;
  uVar9 = 0;
  local_4 = 0;
  pbVar4 = pbVar5;
  switch(bVar1 & 3) {
  case 0:
    pbVar4 = pbVar3 + 2;
    if (param_2 < pbVar4) {
      return 8;
    }
    uVar6 = (int)(char)*pbVar5 >> 4;
    uVar8 = (int)(char)(*pbVar5 << 4) >> 4;
    break;
  case 1:
    if (param_2 < pbVar3 + 3) {
      return 8;
    }
    uVar6 = (uint)(char)*pbVar5;
    uVar8 = (uint)(char)pbVar3[2];
    pbVar4 = pbVar3 + 3;
    break;
  case 2:
    if (param_2 < pbVar3 + 5) {
      return 8;
    }
    uVar6 = (int)(short)((short)(char)*pbVar5 << 8) | (uint)pbVar3[2];
    pbVar4 = pbVar3 + 5;
    uVar8 = (uint)(short)((short)(char)pbVar3[3] << 8);
    goto LAB_006b22c0;
  case 3:
    if (param_2 < pbVar3 + 7) {
      return 8;
    }
    uVar6 = (uint)CONCAT21(CONCAT11(*pbVar5,pbVar3[2]),pbVar3[3]);
    pbVar4 = pbVar3 + 7;
    uVar8 = (int)CONCAT11(pbVar3[4],pbVar3[5]) << 8;
LAB_006b22c0:
    uVar8 = uVar8 | pbVar4[-1];
  }
  switch(bVar1 >> 2 & 3) {
  case 0:
    uVar9 = 0;
    local_4 = 0;
    break;
  case 1:
    if (param_2 < pbVar4 + 1) {
      return 8;
    }
    uVar9 = (int)(char)*pbVar4 >> 4 & 0xf;
    local_4 = (int)(char)*pbVar4 & 0xf;
    pbVar4 = pbVar4 + 1;
    break;
  case 2:
    if (param_2 < pbVar4 + 2) {
      return 8;
    }
    local_4 = (uint)pbVar4[1];
    uVar9 = (uint)*pbVar4;
    pbVar4 = pbVar4 + 2;
    break;
  case 3:
    if (param_2 < pbVar4 + 4) {
      return 8;
    }
    uVar9 = (uint)CONCAT11(*pbVar4,pbVar4[1]);
    local_4 = (uint)CONCAT11(pbVar4[2],pbVar4[3]);
    pbVar4 = pbVar4 + 4;
  }
  uVar7 = 0;
  switch(bVar1 >> 4 & 3) {
  case 0:
    uVar7 = param_3;
    break;
  case 1:
    if (param_2 < pbVar4 + 1) {
      return 8;
    }
    bVar2 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    uVar7 = (int)(char)bVar2 << 8;
    break;
  case 2:
    pbVar5 = pbVar4 + 2;
    if (param_2 < pbVar5) {
      return 8;
    }
    uVar7 = (uint)(short)((short)(char)*pbVar4 << 8);
    goto LAB_006b23cf;
  case 3:
    pbVar5 = pbVar4 + 3;
    if (param_2 < pbVar5) {
      return 8;
    }
    uVar7 = (int)CONCAT11(*pbVar4,pbVar4[1]) << 8;
LAB_006b23cf:
    pbVar4 = pbVar5;
    uVar7 = uVar7 | pbVar5[-1];
  }
  *param_4 = uVar6;
  *param_5 = uVar8;
  *param_6 = uVar9;
  *param_7 = local_4;
  *param_8 = uVar7;
  *param_9 = (uint)(bVar1 >> 6);
  *param_1 = (uint)pbVar4;
  return 0;
}


/* FUN_006b2440 @ 006b2440  kind=gamemisc  attributed-by=none  size=115 */

undefined4 FUN_006b2440(int param_1)

{
  int *in_ECX;
  
  if ((0 < *in_ECX) && (0 < in_ECX[1])) {
    FUN_006b1e00();
    if (param_1 != 0) {
      if (param_1 == 1) {
        FUN_006b1f00();
        return 0;
      }
      if (param_1 != 2) {
        return 3;
      }
      FUN_006b2000();
      return 0;
    }
    FUN_006b1e40();
  }
  return 0;
}


/* FUN_006b24c0 @ 006b24c0  kind=gamemisc  attributed-by=none  size=746 */

int FUN_006b24c0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  int unaff_ESI;
  int local_20;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  undefined4 local_8;
  uint local_4;
  
  iVar1 = *(int *)(unaff_ESI + 4);
  iVar2 = *(int *)(iVar1 + 0x68);
  local_1c = (undefined4 *)(in_EAX * 0x10 + *(int *)(iVar1 + 0x1a0));
  puVar6 = *(uint **)(iVar1 + 0x184);
  uVar3 = 0;
  if (*(uint *)(iVar1 + 0x17c) != 0) {
    do {
      if ((*puVar6 == (uint)*(ushort *)(param_1 + 0xc)) &&
         (puVar6[1] == (uint)*(ushort *)(param_1 + 0xe))) {
        uVar3 = puVar6[2];
        local_20 = 4;
        if ((uVar3 & 1) != 0) {
          local_20 = 5;
        }
        if ((uVar3 & 2) != 0) {
          local_20 = local_20 + 1;
        }
        if ((uVar3 & 4) != 0) {
          local_20 = local_20 + 1;
        }
        iVar4 = FUN_006908c0(iVar2,*(int *)(iVar1 + 0x1b0) + puVar6[6]);
        if ((iVar4 == 0) && (iVar4 = FUN_00691f30(iVar2,puVar6[7] * local_20), iVar4 == 0)) {
          FUN_006b20c0(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24),*local_1c,
                       &local_4,&local_18);
          FUN_00691fe0(iVar2);
          if (local_18 == 0) {
            return 6;
          }
          uVar5 = local_1c[1];
          local_20 = 0;
          local_10 = 0;
          local_c = (int *)0x0;
          local_14 = 0;
          local_8 = 0;
          if (*(int *)(iVar1 + 0x130) != *(int *)(iVar1 + 300)) {
            uVar5 = FUN_0068ea60(uVar5,*(int *)(iVar1 + 300),*(int *)(iVar1 + 0x130));
          }
          *(undefined4 *)(unaff_ESI + 0x38) = uVar5;
          local_1c = (undefined4 *)
                     FUN_0068ea60((uint)*(ushort *)(param_1 + 0xc) << 8,local_1c[1],
                                  *(undefined4 *)(iVar1 + 0x130));
          iVar4 = FUN_006908c0(iVar2,*(int *)(iVar1 + 0xbc) + local_4);
          if ((iVar4 == 0) && (iVar4 = FUN_00691f30(iVar2,local_18), iVar4 == 0)) {
            local_18 = *(int *)(iVar2 + 0x20);
            iVar4 = FUN_006b21e0(&local_18,*(undefined4 *)(iVar2 + 0x24),local_1c,&local_20,
                                 &local_10,&local_c,&local_14,&local_1c,&local_8);
            local_4 = local_14 + local_10;
            if (0x7fffffff < local_4) {
              FUN_00691fe0(iVar2);
              return 0x17;
            }
            if (iVar4 == 0) {
              *(int *)(unaff_ESI + 0x1c) = local_14 << 6;
              *(int **)(unaff_ESI + 0x50) = local_c;
              *(int *)(unaff_ESI + 0x4c) = local_14;
              *(int *)(unaff_ESI + 0x20) = local_20 << 6;
              *(int *)(unaff_ESI + 0x18) = (int)local_c * 0x40;
              *(int *)(unaff_ESI + 0x54) = (int)local_c + 7 >> 3;
              *(int *)(unaff_ESI + 0x2c) = (int)local_c * -0x40 >> 1;
              *(undefined4 *)(unaff_ESI + 0x48) = 0x62697473;
              *(undefined1 *)(unaff_ESI + 0x5e) = 1;
              *(int *)(unaff_ESI + 0x24) = local_10 << 6;
              *(uint *)(unaff_ESI + 0x28) = ((int)local_1c >> 2) + 0x20U & 0xffffffc0;
              *(undefined4 *)(unaff_ESI + 0x30) = 0;
              *(undefined4 *)(unaff_ESI + 0x34) = *(undefined4 *)(param_1 + 0x20);
              *(int *)(unaff_ESI + 100) = local_20;
              *(uint *)(unaff_ESI + 0x68) = local_4;
              local_c = (int *)(unaff_ESI + 0x4c);
              iVar4 = FUN_00692520();
              if (iVar4 == 0) {
                iVar4 = FUN_006b2440(local_8);
              }
            }
            FUN_00691fe0(iVar2);
          }
        }
        return iVar4;
      }
      uVar3 = uVar3 + 1;
      puVar6 = puVar6 + 9;
    } while (uVar3 < *(uint *)(iVar1 + 0x17c));
  }
  return 6;
}


/* FUN_006b27c0 @ 006b27c0  kind=gamemisc  attributed-by=none  size=675 */

int FUN_006b27c0(int param_1,char param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint in_ECX;
  int iVar7;
  int iVar8;
  uint *unaff_ESI;
  byte *pbVar9;
  int local_10;
  byte *local_c;
  byte *local_8;
  uint local_4;
  
  local_10 = FUN_006908c0(param_1);
  if (local_10 == 0) {
    uVar4 = FUN_00690b80(param_1,&local_10);
    if (local_10 == 0) {
      if ((uVar4 & 0xffff) <= in_ECX) {
        return 6;
      }
      local_10 = FUN_00690900(param_1,in_ECX * 5);
      if (local_10 == 0) {
        uVar4 = FUN_00690b80(param_1,&local_10);
        uVar4 = uVar4 & 0xffff;
        if ((local_10 == 0) && (uVar5 = FUN_00690c60(param_1,&local_10), local_10 == 0)) {
          *unaff_ESI = uVar4;
          unaff_ESI[1] = uVar5;
          local_10 = FUN_006908c0(param_1,uVar5);
          if ((local_10 == 0) && (local_10 = FUN_00691f30(param_1,uVar4), local_10 == 0)) {
            puVar3 = *(undefined1 **)(param_1 + 0x20);
            pbVar9 = puVar3 + uVar4;
            local_8 = pbVar9;
            if (puVar3 + 0xd <= pbVar9) {
              unaff_ESI[2] = (int)CONCAT21(CONCAT11(*puVar3,puVar3[1]),puVar3[2]);
              unaff_ESI[3] = (int)CONCAT21(CONCAT11(puVar3[3],puVar3[4]),puVar3[5]);
              unaff_ESI[4] = (int)CONCAT21(CONCAT11(puVar3[6],puVar3[7]),puVar3[8]);
              unaff_ESI[5] = (int)CONCAT21(CONCAT11(puVar3[9],puVar3[10]),puVar3[0xb]);
              bVar1 = puVar3[0xc];
              local_c = puVar3 + 0xd;
              iVar7 = 0;
              if ((bVar1 & 4) != 0) {
                iVar7 = 1;
                if ((bVar1 & 8) != 0) {
                  iVar7 = 2;
                }
                if ((bVar1 & 3) == 0) {
                  iVar7 = iVar7 + 3;
                }
              }
              local_4 = bVar1 & 0x10;
              iVar8 = iVar7;
              if (((bVar1 & 0x10) != 0) && (iVar8 = iVar7 + 1, (bVar1 & 0x20) != 0)) {
                iVar8 = iVar7 + 2;
              }
              if (local_c + iVar8 <= pbVar9) {
                if ((bVar1 & 4) != 0) {
                  if ((bVar1 & 8) == 0) {
                    uVar4 = (uint)*local_c;
                    pbVar6 = puVar3 + 0xe;
                  }
                  else {
                    pbVar6 = puVar3 + 0xf;
                    uVar4 = (int)(short)((short)(char)*local_c << 8) | (uint)(byte)puVar3[0xe];
                  }
                  unaff_ESI[7] = uVar4;
                  local_c = pbVar6;
                  if ((bVar1 & 3) == 0) {
                    local_c = pbVar6 + 3;
                    unaff_ESI[9] = (int)CONCAT21(CONCAT11(*pbVar6,pbVar6[1]),pbVar6[2]);
                  }
                }
                if ((bVar1 & 0x10) != 0) {
                  if ((bVar1 & 0x20) == 0) {
                    uVar4 = (uint)*local_c;
                    local_c = local_c + 1;
                  }
                  else {
                    bVar2 = *local_c;
                    pbVar6 = local_c + 1;
                    local_c = local_c + 2;
                    uVar4 = (int)(short)((short)(char)bVar2 << 8) | (uint)*pbVar6;
                  }
                  unaff_ESI[8] = uVar4;
                }
                iVar7 = 0;
                if (((bVar1 & 0x40) == 0) ||
                   (local_10 = FUN_006b27b0(), iVar7 = local_10, local_10 == 0)) {
                  local_10 = iVar7;
                  if (pbVar9 < local_c + 5) goto LAB_006b2a29;
                  unaff_ESI[10] = (uint)CONCAT11(*local_c,local_c[1]);
                  unaff_ESI[0xb] = (uint)CONCAT21(CONCAT11(local_c[2],local_c[3]),local_c[4]);
                  if (param_2 != '\0') {
                    if (pbVar9 < local_c + 6) goto LAB_006b2a29;
                    unaff_ESI[10] = unaff_ESI[10] + (uint)local_c[5] * 0x10000;
                  }
                }
                FUN_00691fe0(param_1);
                return local_10;
              }
            }
LAB_006b2a29:
            local_10 = 8;
            FUN_00691fe0(param_1);
            return local_10;
          }
        }
      }
    }
  }
  return local_10;
}


/* FUN_006b2a70 @ 006b2a70  kind=gamemisc  attributed-by=none  size=1165 */

void FUN_006b2a70(byte *param_1,byte *param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  int in_ECX;
  uint *puVar5;
  byte *pbVar6;
  int extraout_EDX;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *local_40;
  byte *local_3c;
  int local_38;
  byte *local_34;
  byte *local_30;
  byte *local_2c;
  uint local_28;
  uint local_24 [2];
  undefined1 local_1c [16];
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_40;
  pbVar10 = param_1 + 1;
  local_3c = (byte *)0x0;
  if (param_2 < pbVar10) goto LAB_006b2ec9;
  bVar2 = *param_1;
  local_28 = (uint)bVar2;
  local_40 = pbVar10;
  if ((char)bVar2 < '\0') goto LAB_006b2ec9;
  local_30 = (byte *)0x0;
  local_2c = (byte *)0x0;
  if ((bVar2 & 4) == 0) {
    pbVar12 = pbVar10;
    if ((bVar2 & 2) != 0) {
      pbVar12 = param_1 + 2;
      if (param_2 < pbVar12) goto LAB_006b2ec9;
      local_30 = (byte *)(uint)*pbVar10;
    }
    local_40 = pbVar12;
    if ((bVar2 & 1) != 0) {
      param_1 = pbVar12 + 1;
      if (param_2 < param_1) goto LAB_006b2ec9;
      bVar2 = *pbVar12;
      goto LAB_006b2b1e;
    }
  }
  else {
    param_1 = param_1 + 2;
    if (param_2 < param_1) goto LAB_006b2ec9;
    local_30 = (byte *)(*pbVar10 & 0xf);
    bVar2 = *pbVar10 >> 4;
LAB_006b2b1e:
    local_2c = (byte *)(uint)bVar2;
    local_40 = param_1;
  }
  pbVar10 = local_40;
  pbVar12 = local_2c + (int)local_30;
  local_38 = in_ECX;
  local_34 = pbVar12;
  if (*(byte **)(in_ECX + 4) < pbVar12) {
    uVar3 = FUN_00693a60(**(undefined4 **)(in_ECX + 0x1c),4,*(byte **)(in_ECX + 4),
                         (uint)(pbVar12 + 7) & 0xfffffff8,*(undefined4 *)(in_ECX + 8),&local_3c);
    *(undefined4 *)(in_ECX + 8) = uVar3;
    if (local_3c != (byte *)0x0) goto LAB_006b2eec;
    *(uint *)(in_ECX + 4) = (uint)(pbVar12 + 7) & 0xfffffff8;
  }
  *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 8) + (int)local_30 * 4;
  uVar8 = 0;
  uVar4 = 0;
  pbVar6 = (byte *)0x0;
  if (pbVar12 != (byte *)0x0) {
    pbVar12 = pbVar10 + 1;
    pbVar11 = pbVar10 + 2;
    do {
      if (((uint)pbVar6 & 7) == 0) {
        local_40 = pbVar10;
        if (param_2 < pbVar12) goto LAB_006b2ec9;
        uVar8 = (uint)*pbVar10;
        pbVar10 = pbVar10 + 1;
        pbVar11 = pbVar11 + 1;
        pbVar12 = pbVar12 + 1;
      }
      local_40 = pbVar10;
      if ((uVar8 & 1) == 0) {
        if (param_2 < pbVar12) goto LAB_006b2ec9;
        uVar4 = uVar4 + *pbVar10;
        pbVar10 = pbVar10 + 1;
        pbVar11 = pbVar11 + 1;
        pbVar12 = pbVar12 + 1;
      }
      else {
        if (param_2 < pbVar11) goto LAB_006b2ec9;
        bVar2 = *pbVar10;
        pbVar9 = pbVar10 + 1;
        pbVar10 = pbVar10 + 2;
        pbVar11 = pbVar11 + 2;
        pbVar12 = pbVar12 + 2;
        uVar4 = (int)(short)((short)(char)bVar2 << 8) | (uint)*pbVar9;
      }
      *(uint *)(*(int *)(local_38 + 8) + (int)pbVar6 * 4) = uVar4;
      pbVar6 = pbVar6 + 1;
      uVar8 = uVar8 >> 1;
      local_40 = pbVar10;
    } while (pbVar6 < local_34);
  }
  if (((local_28 & 8) == 0) ||
     (local_3c = (byte *)FUN_006b27b0(), pbVar10 = local_40, local_3c == (byte *)0x0)) {
    FUN_006b1730();
    local_24[1] = 0;
    uVar4 = 0;
    local_8 = 0;
    local_40 = (byte *)0x0;
    pbVar12 = pbVar10 + 1;
    local_24[0] = 0;
    local_c = 0;
    iVar7 = extraout_EDX;
    if (pbVar12 <= param_2) {
      do {
        local_40 = (byte *)0x0;
        local_28 = (uint)(*pbVar10 >> 4);
        pbVar10 = (byte *)(*pbVar10 & 0xf);
        switch(local_28) {
        case 0:
          pbVar6 = (byte *)0x0;
          break;
        case 1:
        case 4:
        case 5:
          pbVar6 = (byte *)0x1;
          local_40 = pbVar10;
          break;
        case 2:
          if (local_30 <= pbVar10) goto LAB_006b2ec9;
          uVar4 = *(uint *)(*(int *)(iVar7 + 8) + (int)pbVar10 * 4);
          local_24[0] = uVar4;
          local_24[1] = local_8;
          local_c = uVar4;
          pbVar6 = (byte *)0x0;
          break;
        case 3:
          if (local_2c <= pbVar10) goto LAB_006b2ec9;
          local_24[1] = *(uint *)(*(int *)(iVar7 + 0xc) + (int)pbVar10 * 4);
          local_24[0] = uVar4;
          local_c = uVar4;
          local_8 = local_24[1];
          pbVar6 = (byte *)0x0;
          break;
        case 6:
          local_40 = (byte *)0xb8e;
          pbVar6 = (byte *)0x3;
          break;
        case 7:
          local_40 = (byte *)0xe2b;
          pbVar6 = (byte *)0x3;
          break;
        default:
          pbVar6 = (byte *)0x4;
          local_40 = pbVar10;
        }
        puVar5 = local_24;
        local_34 = (byte *)0x0;
        pbVar10 = pbVar12;
        if (pbVar6 != (byte *)0x0) {
          pbVar11 = pbVar12 + 1;
          pbVar9 = pbVar12 + 2;
          do {
            uVar8 = (uint)local_40 & 3;
            if (uVar8 == 0) {
              if (param_2 < pbVar11) goto LAB_006b2ec9;
              bVar2 = *pbVar12;
              pbVar12 = pbVar12 + 1;
              pbVar9 = pbVar9 + 1;
              pbVar11 = pbVar11 + 1;
              if (local_30 <= (byte *)(uint)bVar2) goto LAB_006b2ec9;
              uVar4 = *(uint *)(*(int *)(local_38 + 8) + (int)(uint)bVar2 * 4);
LAB_006b2d7c:
              *puVar5 = uVar4;
            }
            else {
              if (uVar8 == 1) {
                if (pbVar9 <= param_2) {
                  bVar2 = *pbVar12;
                  pbVar10 = pbVar12 + 1;
                  pbVar12 = pbVar12 + 2;
                  pbVar9 = pbVar9 + 2;
                  pbVar11 = pbVar11 + 2;
                  uVar4 = (int)(short)((short)(char)bVar2 << 8) | (uint)*pbVar10;
                  goto LAB_006b2d7c;
                }
                goto LAB_006b2ec9;
              }
              if (uVar8 == 2) {
                if (pbVar11 <= param_2) {
                  bVar2 = *pbVar12;
                  pbVar12 = pbVar12 + 1;
                  pbVar9 = pbVar9 + 1;
                  pbVar11 = pbVar11 + 1;
                  uVar4 = (int)(char)bVar2 + uVar4;
                  goto LAB_006b2d7c;
                }
                goto LAB_006b2ec9;
              }
              *puVar5 = uVar4;
            }
            uVar4 = (uint)local_40 >> 2 & 3;
            if (uVar4 == 0) {
              if (param_2 < pbVar11) goto LAB_006b2ec9;
              bVar2 = *pbVar12;
              pbVar12 = pbVar12 + 1;
              pbVar9 = pbVar9 + 1;
              pbVar11 = pbVar11 + 1;
              if (local_2c <= (byte *)(uint)bVar2) goto LAB_006b2ec9;
              uVar8 = *(uint *)(*(int *)(local_38 + 0xc) + (int)(uint)bVar2 * 4);
            }
            else if (uVar4 == 1) {
              if (param_2 < pbVar9) goto LAB_006b2ec9;
              bVar2 = *pbVar12;
              pbVar10 = pbVar12 + 1;
              pbVar12 = pbVar12 + 2;
              pbVar9 = pbVar9 + 2;
              pbVar11 = pbVar11 + 2;
              uVar8 = (int)(short)((short)(char)bVar2 << 8) | (uint)*pbVar10;
            }
            else {
              uVar8 = local_8;
              if (uVar4 == 2) {
                if (param_2 < pbVar11) goto LAB_006b2ec9;
                bVar2 = *pbVar12;
                pbVar12 = pbVar12 + 1;
                pbVar9 = pbVar9 + 1;
                pbVar11 = pbVar11 + 1;
                uVar8 = (int)(char)bVar2 + local_8;
              }
            }
            puVar5[1] = uVar8;
            if ((local_34 == (byte *)0x0) && (pbVar6 == (byte *)0x4)) {
              if (param_2 < pbVar11) goto LAB_006b2ec9;
              local_40 = (byte *)(uint)*pbVar12;
              pbVar12 = pbVar12 + 1;
              pbVar9 = pbVar9 + 1;
              pbVar11 = pbVar11 + 1;
              pbVar6 = (byte *)0x3;
            }
            else {
              local_40 = (byte *)((uint)local_40 >> 4);
            }
            uVar4 = *puVar5;
            local_34 = local_34 + 1;
            local_c = uVar4;
            puVar1 = puVar5 + 1;
            puVar5 = puVar5 + 2;
            local_8 = *puVar1;
            pbVar10 = pbVar12;
          } while (local_34 < pbVar6);
        }
        switch(local_28) {
        case 0:
          FUN_006b1890();
          goto LAB_006b2eec;
        case 1:
        case 2:
        case 3:
          local_3c = (byte *)FUN_006b1740();
          break;
        case 4:
        case 5:
          local_3c = (byte *)FUN_006b1830(local_24);
          break;
        default:
          local_3c = (byte *)FUN_006b17a0(local_24,local_1c);
        }
        if (local_3c != (byte *)0x0) goto LAB_006b2eec;
        pbVar12 = pbVar10 + 1;
        iVar7 = local_38;
        if (param_2 < pbVar12) {
          local_40 = local_3c;
          __security_check_cookie(local_4 ^ (uint)&local_40);
          return;
        }
      } while( true );
    }
LAB_006b2ec9:
    __security_check_cookie(local_4 ^ (uint)&local_40);
    return;
  }
LAB_006b2eec:
  __security_check_cookie(local_4 ^ (uint)&local_40);
  return;
}


/* FUN_006b2f40 @ 006b2f40  kind=gamemisc  attributed-by=none  size=737 */

int FUN_006b2f40(int param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  int *piVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  int local_14 [2];
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_14[0] = 0;
  local_4 = **(undefined4 **)(param_1 + 0x1c);
  pbVar12 = param_2 + 1;
  if (pbVar12 <= param_3) {
    bVar1 = *param_2;
    if ((char)bVar1 < '\0') {
      local_8 = bVar1 & 0x3f;
      if (((bVar1 & 8) != 0) && (local_14[0] = FUN_006b27b0(), local_14[0] != 0)) {
        return local_14[0];
      }
      iVar2 = *(int *)(param_1 + 0x10);
      uVar8 = iVar2 + local_8;
      if (*(uint *)(param_1 + 0x14) < uVar8) {
        uVar8 = uVar8 + 3 & 0xfffffffc;
        if (0x40 < uVar8) {
          return 8;
        }
        uVar3 = FUN_00693a60(local_4,0x18,*(uint *)(param_1 + 0x14),uVar8,
                             *(undefined4 *)(param_1 + 0x18),local_14);
        *(undefined4 *)(param_1 + 0x18) = uVar3;
        if (local_14[0] != 0) {
          return local_14[0];
        }
        *(uint *)(param_1 + 0x14) = uVar8;
      }
      piVar9 = (int *)(*(int *)(param_1 + 0x18) + iVar2 * 0x18);
      local_4 = 0;
      if (local_8 == 0) {
        return local_14[0];
      }
      pbVar5 = param_2 + 3;
      pbVar14 = param_2 + 4;
      param_2 = param_2 + 2;
      while (local_c = 0, param_2 <= param_3) {
        bVar1 = *pbVar12;
        pbVar10 = pbVar12 + 1;
        pbVar6 = param_2 + 1;
        pbVar13 = pbVar14 + 1;
        pbVar4 = pbVar5 + 1;
        *piVar9 = 0x10000;
        if ((bVar1 & 0x10) != 0) {
          if (param_3 < pbVar4) {
            return 8;
          }
          bVar7 = *pbVar10;
          pbVar10 = pbVar12 + 3;
          pbVar6 = param_2 + 3;
          pbVar13 = pbVar14 + 3;
          pbVar4 = pbVar5 + 3;
          *piVar9 = ((int)(short)((short)(char)bVar7 << 8) | (uint)pbVar12[2]) << 4;
        }
        piVar9[1] = 0x10000;
        if ((bVar1 & 0x20) != 0) {
          if (param_3 < pbVar4) {
            return 8;
          }
          bVar7 = *pbVar10;
          pbVar12 = pbVar10 + 1;
          pbVar10 = pbVar10 + 2;
          pbVar6 = pbVar6 + 2;
          pbVar13 = pbVar13 + 2;
          pbVar4 = pbVar4 + 2;
          piVar9[1] = ((int)(short)((short)(char)bVar7 << 8) | (uint)*pbVar12) << 4;
        }
        if ((bVar1 & 3) == 1) {
          if (param_3 < pbVar4) {
            return 8;
          }
          bVar7 = *pbVar10;
          pbVar12 = pbVar10 + 1;
          pbVar10 = pbVar10 + 2;
          pbVar6 = pbVar6 + 2;
          pbVar13 = pbVar13 + 2;
          pbVar4 = pbVar4 + 2;
          local_c = (int)(short)((short)(char)bVar7 << 8) | (uint)*pbVar12;
        }
        else if ((bVar1 & 3) == 2) {
          if (param_3 < pbVar6) {
            return 8;
          }
          local_c = (uint)(char)*pbVar10;
          pbVar10 = pbVar10 + 1;
          pbVar6 = pbVar6 + 1;
          pbVar13 = pbVar13 + 1;
          pbVar4 = pbVar4 + 1;
        }
        uVar8 = 0;
        bVar7 = bVar1 >> 2 & 3;
        if (bVar7 == 1) {
          if (param_3 < pbVar4) {
            return 8;
          }
          bVar7 = *pbVar10;
          pbVar12 = pbVar10 + 1;
          pbVar10 = pbVar10 + 2;
          pbVar6 = pbVar6 + 2;
          pbVar13 = pbVar13 + 2;
          pbVar4 = pbVar4 + 2;
          uVar8 = (int)(short)((short)(char)bVar7 << 8) | (uint)*pbVar12;
        }
        else if (bVar7 == 2) {
          if (param_3 < pbVar6) {
            return 8;
          }
          uVar8 = (uint)(char)*pbVar10;
          pbVar10 = pbVar10 + 1;
          pbVar6 = pbVar6 + 1;
          pbVar13 = pbVar13 + 1;
          pbVar4 = pbVar4 + 1;
        }
        piVar9[2] = local_c;
        piVar9[3] = uVar8;
        if ((bVar1 & 0x40) == 0) {
          if (param_3 < pbVar6) {
            return 8;
          }
          pbVar11 = pbVar10 + 1;
          pbVar6 = pbVar6 + 1;
          pbVar13 = pbVar13 + 1;
          piVar9[5] = (uint)*pbVar10;
          pbVar4 = pbVar4 + 1;
        }
        else {
          if (param_3 < pbVar4) {
            return 8;
          }
          pbVar11 = pbVar10 + 2;
          pbVar6 = pbVar6 + 2;
          pbVar13 = pbVar13 + 2;
          pbVar4 = pbVar4 + 2;
          piVar9[5] = (uint)CONCAT11(*pbVar10,pbVar10[1]);
        }
        if ((bVar1 & 0x80) == 0) {
          if (param_3 < pbVar4) {
            return 8;
          }
          pbVar12 = pbVar11 + 2;
          param_2 = pbVar6 + 2;
          pbVar14 = pbVar13 + 2;
          pbVar5 = pbVar4 + 2;
          uVar8 = (uint)*pbVar11;
        }
        else {
          if (param_3 < pbVar13) {
            return 8;
          }
          pbVar12 = pbVar11 + 3;
          uVar8 = (uint)CONCAT11(*pbVar11,pbVar11[1]);
          param_2 = pbVar6 + 3;
          pbVar14 = pbVar13 + 3;
          pbVar5 = pbVar4 + 3;
        }
        piVar9[4] = uVar8 << 8 | (uint)pbVar12[-1];
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        local_4 = local_4 + 1;
        piVar9 = piVar9 + 6;
        if (local_8 <= local_4) {
          return local_14[0];
        }
      }
    }
  }
  return 8;
}


/* FUN_006b3230 @ 006b3230  kind=gamemisc  attributed-by=none  size=416 */

int FUN_006b3230(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_c;
  
  iVar3 = FUN_006908c0(param_2,param_3 + param_4);
  if ((iVar3 == 0) && (iVar3 = FUN_00691f30(param_2,param_5), iVar3 == 0)) {
    pbVar1 = *(byte **)(param_2 + 0x20);
    if ((param_5 == 0) || ((*pbVar1 & 0x80) == 0)) {
      iVar3 = FUN_006b2a70(pbVar1,pbVar1 + param_5);
      FUN_00691fe0(param_2);
      return iVar3;
    }
    iVar6 = *(int *)(param_1 + 0x10);
    iVar2 = *(int *)(param_1 + 0x1c);
    iVar3 = FUN_006b2f40(param_1,pbVar1,pbVar1 + param_5);
    FUN_00691fe0(param_2);
    if ((iVar3 != 0) || (iVar4 = *(int *)(param_1 + 0x10) - iVar6, iVar4 < 1)) {
      return iVar3;
    }
    iVar6 = iVar6 * 0x18;
    local_c = 0;
    do {
      iVar8 = (int)*(short *)(iVar2 + 0x16);
      iVar3 = FUN_006b3230(param_1,param_2,param_3,
                           *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x10 + iVar6),
                           *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x14 + iVar6));
      if (iVar3 != 0) {
        return iVar3;
      }
      piVar7 = (int *)(*(int *)(param_1 + 0x18) + iVar6);
      iVar3 = *(short *)(iVar2 + 0x16) - iVar8;
      if ((*piVar7 == 0x10000) && (piVar7[1] == 0x10000)) {
        piVar5 = (int *)(*(int *)(iVar2 + 0x18) + iVar8 * 8);
        if (0 < iVar3) {
          do {
            *piVar5 = *piVar5 + piVar7[2];
            piVar5[1] = piVar5[1] + piVar7[3];
            piVar5 = piVar5 + 2;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      else {
        piVar5 = (int *)(*(int *)(iVar2 + 0x18) + iVar8 * 8);
        if (0 < iVar3) {
          do {
            iVar8 = FUN_0068ebc0(*piVar5,*piVar7);
            *piVar5 = iVar8 + piVar7[2];
            iVar8 = FUN_0068ebc0(piVar5[1],piVar7[1]);
            piVar5[1] = iVar8 + piVar7[3];
            piVar5 = piVar5 + 2;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      iVar6 = iVar6 + 0x18;
      local_c = local_c + 1;
      iVar3 = 0;
    } while (local_c < iVar4);
  }
  return iVar3;
}


/* FUN_006b3970 @ 006b3970  kind=gamemisc  attributed-by=none  size=712 */

void FUN_006b3970(int param_1)

{
  int iVar1;
  int iVar2;
  uint in_ECX;
  char *pcVar3;
  char *_Str;
  uint *unaff_ESI;
  char *pcVar4;
  uint uVar5;
  char *pcStack_124;
  uint local_120;
  char *pcStack_11c;
  char *pcStack_118;
  int iStack_114;
  char acStack_110 [10];
  char acStack_106 [258];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&pcStack_124;
  local_120 = in_ECX;
  memset(unaff_ESI,0,100);
  (*(code *)**(undefined4 **)(param_1 + 4))();
  unaff_ESI[0x12] = in_ECX;
  iStack_114 = FUN_00690930();
  iVar1 = FUN_00691f30();
  if (iVar1 == 0) {
    iVar1 = strncmp(*(char **)(in_ECX + 0x20),"%!PS-Adobe-3.0 Resource-CIDFont",0x1f);
    FUN_00691fe0();
    if (iVar1 == 0) {
LAB_006b3a00:
      uVar5 = local_120;
      iVar1 = 0x10a;
      pcVar3 = acStack_110;
      pcStack_124 = (char *)FUN_00690930(local_120);
      while( true ) {
        iVar2 = FUN_00690930(uVar5);
        iVar2 = *(int *)(uVar5 + 4) - iVar2;
        if (iVar2 == 0) break;
        if (iVar2 <= iVar1) {
          iVar1 = iVar2;
        }
        iVar2 = FUN_00691ec0(uVar5,pcVar3,iVar1);
        if (iVar2 != 0) break;
        if (iVar1 < 0x100) {
          pcVar3[iVar1] = '\0';
        }
        for (pcVar4 = acStack_110; pcVar4 < pcVar3 + iVar1 + -10; pcVar4 = pcVar4 + 1) {
          if ((*pcVar4 == 'S') && (iVar2 = strncmp(pcVar4,"StartData",9), iVar2 == 0)) {
            pcStack_124 = pcStack_124 + (10 - (int)acStack_110);
LAB_006b3ae4:
            pcStack_124 = pcVar4 + (int)pcStack_124;
            uVar5 = (int)pcStack_124 - iStack_114;
            iVar1 = FUN_006908c0(local_120,iStack_114);
            if (iVar1 != 0) goto LAB_006b3c1e;
            iVar1 = FUN_00693a30(local_120,uVar5,unaff_ESI + 0x13);
            if (iVar1 != 0) goto LAB_006b3c1e;
            pcStack_11c = (char *)unaff_ESI[0x13];
            unaff_ESI[1] = (uint)pcStack_11c;
            *unaff_ESI = (uint)pcStack_11c;
            unaff_ESI[0x15] = (uint)pcStack_124;
            unaff_ESI[0x14] = uVar5;
            unaff_ESI[2] = (uint)(pcStack_11c + uVar5);
            unaff_ESI[0x18] = 0xffffffff;
            (*(code *)unaff_ESI[8])();
            (*(code *)unaff_ESI[7])();
            pcVar3 = (char *)*unaff_ESI;
            (*(code *)unaff_ESI[8])();
            (*(code *)unaff_ESI[7])();
            pcStack_118 = (char *)unaff_ESI[2];
            pcVar4 = (char *)*unaff_ESI;
            if (pcStack_118 <= (char *)*unaff_ESI) goto LAB_006b3bc6;
            goto LAB_006b3b70;
          }
          if ((pcVar4[1] == 's') && (iVar2 = strncmp(pcVar4,"/sfnts",6), iVar2 == 0)) {
            pcStack_124 = pcStack_124 + (7 - (int)acStack_110);
            goto LAB_006b3ae4;
          }
        }
        memmove(acStack_110,pcVar4,10);
        iVar1 = 0x100;
        pcStack_124 = pcStack_124 + 0x100;
        pcVar3 = acStack_106;
        uVar5 = local_120;
      }
    }
  }
LAB_006b3c1e:
  __security_check_cookie(local_4 ^ (uint)&pcStack_124);
  return;
  while( true ) {
    if ((*pcVar4 == 'S') && (iVar1 = strncmp(pcVar4,"StartData",9), iVar1 == 0)) {
      iVar1 = strncmp(pcStack_11c,"(Hex)",5);
      if (iVar1 == 0) {
        uVar5 = atol(_Str);
        unaff_ESI[0x16] = uVar5;
      }
      goto LAB_006b3c1e;
    }
    if ((pcVar4[1] == 's') && (iVar1 = strncmp(pcVar4,"/sfnts",6), iVar1 == 0)) goto LAB_006b3c1e;
    (*(code *)unaff_ESI[8])();
    (*(code *)unaff_ESI[7])();
    pcVar3 = pcVar4;
    pcVar4 = (char *)*unaff_ESI;
    pcStack_11c = _Str;
    if (pcStack_118 <= (char *)*unaff_ESI) break;
LAB_006b3b70:
    _Str = pcVar3;
    if (unaff_ESI[3] != 0) goto LAB_006b3c1e;
  }
LAB_006b3bc6:
  uVar5 = local_120;
  FUN_00691ee0(local_120,unaff_ESI + 0x13);
  iVar1 = FUN_006908c0(uVar5,pcStack_124);
  if (iVar1 != 0) goto LAB_006b3c1e;
  goto LAB_006b3a00;
}


/* FUN_006b3c60 @ 006b3c60  kind=gamemisc  attributed-by=none  size=33 */

uint FUN_006b3c60(void)

{
  uint uVar1;
  byte *pbVar2;
  char in_DL;
  undefined4 *unaff_ESI;
  
  pbVar2 = (byte *)*unaff_ESI;
  uVar1 = 0;
  for (; in_DL != '\0'; in_DL = in_DL + -1) {
    uVar1 = uVar1 << 8 | (uint)*pbVar2;
    pbVar2 = pbVar2 + 1;
  }
  *unaff_ESI = pbVar2;
  return uVar1;
}


/* FUN_006b3c90 @ 006b3c90  kind=gamemisc  attributed-by=none  size=157 */

undefined4 FUN_006b3c90(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int unaff_ESI;
  
  iVar1 = *(int *)(in_ECX + 8);
  if (iVar1 == 10) {
    (**(code **)(in_ECX + 0xc))();
    return *(undefined4 *)(unaff_ESI + 0xc);
  }
  switch(*(undefined4 *)(in_ECX + 4)) {
  case 0:
    break;
  default:
    if (*(int *)(unaff_ESI + 0x60) < 0) {
      return 0xa0;
    }
    break;
  case 2:
    break;
  case 3:
    break;
  case 5:
  }
  if ((iVar1 != 8) && (iVar1 != 9)) {
    uVar2 = (**(code **)(unaff_ESI + 0x40))();
    return uVar2;
  }
  uVar2 = (**(code **)(unaff_ESI + 0x44))();
  return uVar2;
}


/* FUN_006b3f40 @ 006b3f40  kind=gamemisc  attributed-by=none  size=325 */

int FUN_006b3f40(int param_1)

{
  char *pcVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  char *pcVar4;
  char *in_ECX;
  undefined4 *in_EDX;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined **ppuStack_8;
  
  pcVar1 = in_ECX + in_EAX;
  *in_EDX = in_ECX;
  in_EDX[2] = pcVar1;
  in_EDX[3] = 0;
LAB_006b3f60:
  do {
    *in_EDX = in_ECX;
    (*(code *)in_EDX[7])();
    if ((char *)*in_EDX < pcVar1) {
      pcVar7 = (char *)*in_EDX + -0x11;
    }
    else {
      pcVar7 = pcVar1 + -0x12;
    }
    for (; in_ECX < pcVar7; in_ECX = in_ECX + 1) {
      if (((*in_ECX == '%') && (iVar3 = strncmp(in_ECX,"%ADOBeginFontDict",0x11), iVar3 == 0)) &&
         (0 < *(int *)(param_1 + 300))) {
        in_EDX[0x18] = in_EDX[0x18] + 1;
      }
    }
    pcVar7 = (char *)*in_EDX;
    if (pcVar1 <= pcVar7) {
LAB_006b407d:
      return in_EDX[3];
    }
    (*(code *)in_EDX[8])();
    if ((pcVar1 <= (char *)*in_EDX) || (in_EDX[3] != 0)) goto LAB_006b407d;
    if ((*pcVar7 == '/') && (pcVar7 + 2 < pcVar1)) {
      pcVar6 = pcVar7 + 1;
      iVar3 = (int)*in_EDX - (int)pcVar6;
      if (iVar3 - 1U < 0x15) {
        pcVar8 = "CIDFontName";
        ppuStack_8 = &PTR_s_CIDFontName_00733d48;
        do {
          if (*pcVar6 == *pcVar8) {
            pcVar4 = pcVar8;
            do {
              cVar2 = *pcVar4;
              pcVar4 = pcVar4 + 1;
            } while (cVar2 != '\0');
            if (iVar3 == (int)pcVar4 - (int)(pcVar8 + 1)) {
              iVar5 = 1;
              if (1 < iVar3) {
                pcVar4 = pcVar7 + 2;
                while (*pcVar4 == pcVar4[(int)pcVar8 - (int)pcVar6]) {
                  iVar5 = iVar5 + 1;
                  pcVar4 = pcVar4 + 1;
                  if (iVar3 <= iVar5) goto LAB_006b403d;
                }
                if (iVar5 < iVar3) goto LAB_006b4060;
              }
LAB_006b403d:
              iVar3 = FUN_006b3c90();
              in_EDX[3] = iVar3;
              if (iVar3 != 0) {
                return iVar3;
              }
              goto LAB_006b4051;
            }
          }
LAB_006b4060:
          pcVar8 = ppuStack_8[9];
          ppuStack_8 = ppuStack_8 + 9;
        } while (pcVar8 != (char *)0x0);
        in_ECX = (char *)*in_EDX;
        goto LAB_006b3f60;
      }
    }
LAB_006b4051:
    in_ECX = (char *)*in_EDX;
  } while( true );
}


/* FUN_006b4090 @ 006b4090  kind=gamemisc  attributed-by=none  size=811 */

int FUN_006b4090(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint *local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  local_24 = *(int *)(param_1 + 0x148);
  local_4 = *(int *)(param_1 + 0x88);
  local_28 = *(undefined4 *)(param_1 + 100);
  piVar10 = (int *)0x0;
  local_1c = 0;
  puVar5 = (uint *)FUN_00693a60(local_28,8,0,*(undefined4 *)(param_1 + 300),0,&local_2c);
  *(uint **)(param_1 + 0x13c) = puVar5;
  if ((local_2c == 0) && (local_14 = 0, local_10 = puVar5, 0 < *(int *)(param_1 + 300))) {
    local_20 = 0;
    do {
      iVar9 = *(int *)(param_1 + 0x130) + local_20;
      local_8 = *(int *)(iVar9 + 4);
      uVar2 = *(uint *)(iVar9 + 0xf0);
      if (local_1c < uVar2 + 1) {
        local_18 = uVar2 + 4 & 0xfffffffc;
        piVar10 = (int *)FUN_00693a60(local_28,4,local_1c,local_18,piVar10,&local_2c);
        if (local_2c == 0) {
          local_1c = local_18;
          goto LAB_006b415a;
        }
LAB_006b430e:
        if (*(int *)(param_1 + 0x13c) != 0) {
          iVar9 = 0;
          if (0 < *(int *)(param_1 + 300)) {
            do {
              puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x13c) + 4 + iVar9 * 8);
              if (puVar4 != (undefined4 *)0x0) {
                FUN_00691290(local_28,*puVar4);
                **(undefined4 **)(*(int *)(param_1 + 0x13c) + 4 + iVar9 * 8) = 0;
              }
              FUN_00691290(local_28,*(undefined4 *)(*(int *)(param_1 + 0x13c) + 4 + iVar9 * 8));
              *(undefined4 *)(*(int *)(param_1 + 0x13c) + 4 + iVar9 * 8) = 0;
              iVar9 = iVar9 + 1;
            } while (iVar9 < *(int *)(param_1 + 300));
          }
          FUN_00691290(local_28,*(undefined4 *)(param_1 + 0x13c));
          *(undefined4 *)(param_1 + 0x13c) = 0;
        }
        break;
      }
LAB_006b415a:
      local_2c = FUN_006908c0(local_24,*(int *)(iVar9 + 0xf4) + *(int *)(param_1 + 0x134));
      if ((local_2c != 0) ||
         (local_2c = FUN_00691f30(local_24,*(int *)(iVar9 + 0xf8) * (uVar2 + 1)), local_2c != 0))
      goto LAB_006b430e;
      local_c = *(undefined4 *)(local_24 + 0x20);
      local_18 = 0;
      do {
        iVar9 = FUN_006b3c60();
        piVar10[local_18] = iVar9;
        local_18 = local_18 + 1;
      } while (local_18 <= uVar2);
      FUN_00691fe0(local_24);
      iVar9 = piVar10[uVar2];
      iVar3 = *piVar10;
      uVar6 = FUN_00693a60(local_28,4,0,uVar2 + 1,0,&local_2c);
      puVar5 = local_10;
      local_10[1] = uVar6;
      if (local_2c != 0) goto LAB_006b430e;
      uVar7 = FUN_00692230(local_28,iVar9 - iVar3,&local_2c);
      *(undefined4 *)puVar5[1] = uVar7;
      if (((local_2c != 0) ||
          (local_2c = FUN_006908c0(local_24,*piVar10 + *(int *)(param_1 + 0x134)), local_2c != 0))
         || (local_2c = FUN_00691ec0(local_24,*(undefined4 *)puVar5[1],iVar9 - iVar3), local_2c != 0
            )) goto LAB_006b430e;
      uVar6 = 1;
      if (uVar2 != 0) {
        do {
          piVar1 = (int *)(puVar5[1] + uVar6 * 4);
          uVar8 = uVar6 + 1;
          *piVar1 = (piVar1[-1] - piVar10[uVar6 - 1]) + piVar10[uVar6];
          uVar6 = uVar8;
        } while (uVar8 <= uVar2);
      }
      if ((-1 < local_8) && (uVar6 = 0, uVar2 != 0)) {
        do {
          (**(code **)(local_4 + 0x10))
                    (*(undefined4 *)(puVar5[1] + uVar6 * 4),piVar10[uVar6 + 1] - piVar10[uVar6],
                     0x10ea);
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar2);
      }
      local_20 = local_20 + 0xfc;
      *puVar5 = uVar2;
      local_14 = local_14 + 1;
      local_10 = puVar5 + 2;
    } while (local_14 < *(int *)(param_1 + 300));
  }
  FUN_00691290(local_28,piVar10);
  return local_2c;
}


/* FUN_006b43f0 @ 006b43f0  kind=gamemisc  attributed-by=none  size=347 */

void FUN_006b43f0(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  char cVar7;
  char *in_ECX;
  byte *pbVar8;
  undefined1 auStack_10c [2];
  char local_10a;
  char local_109;
  char *local_108;
  byte local_104 [256];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)auStack_10c;
  iVar2 = *(int *)(param_3 + 0x68);
  iVar3 = FUN_006908c0(iVar2,param_2);
  if (iVar3 == 0) {
    local_108 = in_ECX + param_1;
    pbVar6 = local_104;
    local_109 = '\x01';
    local_10a = '\0';
    pbVar8 = pbVar6;
    if (in_ECX < local_108) {
      do {
        if (pbVar6 <= pbVar8) {
          iVar3 = FUN_00690930(iVar2);
          uVar4 = *(int *)(iVar2 + 4) - iVar3;
          if (uVar4 == 0) break;
          if (0xff < uVar4) {
            uVar4 = 0x100;
          }
          iVar5 = FUN_00691ec0(iVar2,local_104,uVar4);
          if (iVar5 != 0) break;
          pbVar8 = local_104;
          iVar5 = FUN_00690930(iVar2);
          pbVar6 = pbVar8 + (iVar5 - iVar3);
        }
        bVar1 = *pbVar8;
        if (bVar1 - 0x30 < 10) {
          cVar7 = bVar1 - 0x30;
LAB_006b44fd:
          if (local_109 == '\0') {
            *in_ECX = *in_ECX + cVar7;
            in_ECX = in_ECX + 1;
          }
          else {
            *in_ECX = cVar7 << 4;
          }
          local_109 = '\x01' - local_109;
          if (local_10a != '\0') break;
        }
        else {
          if ((0x60 < bVar1) && (bVar1 < 0x67)) {
            cVar7 = bVar1 + 0x9f;
            goto LAB_006b44fd;
          }
          if ((0x40 < bVar1) && (bVar1 < 0x47)) {
            cVar7 = bVar1 - 0x37;
            goto LAB_006b44fd;
          }
          if ((((bVar1 != 0x20) && (bVar1 != 9)) && (bVar1 != 0xd)) &&
             (((bVar1 != 10 && (bVar1 != 0xc)) && (bVar1 != 0)))) {
            if (bVar1 == 0x3e) {
              cVar7 = '\0';
              local_10a = '\x01';
              goto LAB_006b44fd;
            }
            break;
          }
        }
        pbVar8 = pbVar8 + 1;
      } while (in_ECX < local_108);
    }
  }
  __security_check_cookie(local_4 ^ (uint)auStack_10c);
  return;
}


/* FUN_006b4550 @ 006b4550  kind=gamemisc  attributed-by=none  size=283 */

int FUN_006b4550(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBX;
  undefined4 *puVar4;
  int local_6c [22];
  undefined4 local_14;
  int local_10;
  
  uVar2 = *(undefined4 *)(unaff_EBX + 100);
  FUN_006b43d0();
  local_6c[0] = FUN_006b3970(*(undefined4 *)(unaff_EBX + 0x88));
  if (local_6c[0] == 0) {
    local_6c[0] = FUN_006b3f40();
    if ((local_6c[0] == 0) && (-1 < param_1)) {
      puVar1 = (undefined4 *)FUN_00692230(uVar2,0x28,local_6c);
      *(undefined4 **)(unaff_EBX + 0x148) = puVar1;
      if (local_6c[0] == 0) {
        if (local_10 == 0) {
          puVar4 = *(undefined4 **)(unaff_EBX + 0x68);
          for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar1 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar1 = puVar1 + 1;
          }
          *(undefined4 *)(unaff_EBX + 0x134) = local_14;
        }
        else {
          uVar2 = FUN_00692230(uVar2,local_10,local_6c);
          *(undefined4 *)(unaff_EBX + 0x144) = uVar2;
          if (local_6c[0] != 0) goto LAB_006b4658;
          iVar3 = FUN_006b43f0(local_10,local_14);
          if (iVar3 != 0) goto LAB_006b4658;
          FUN_00690880(*(undefined4 *)(unaff_EBX + 0x148),*(undefined4 *)(unaff_EBX + 0x144),
                       local_10);
          *(undefined4 *)(unaff_EBX + 0x134) = 0;
        }
        local_6c[0] = FUN_006b4090();
      }
    }
  }
LAB_006b4658:
  thunk_FUN_006b3c40();
  return local_6c[0];
}


/* FUN_006b55b0 @ 006b55b0  kind=gamemisc  attributed-by=none  size=152 */

uint FUN_006b55b0(void)

{
  uint uVar1;
  byte *in_ECX;
  byte *in_EDX;
  
  uVar1 = (uint)*in_ECX;
  if (uVar1 == 0x1c) {
    if (in_ECX + 3 <= in_EDX) {
      return (int)(short)((ushort)in_ECX[1] << 8) | (uint)in_ECX[2];
    }
  }
  else if (uVar1 == 0x1d) {
    if (in_ECX + 5 <= in_EDX) {
      return CONCAT31(CONCAT21(CONCAT11(in_ECX[1],in_ECX[2]),in_ECX[3]),in_ECX[4]);
    }
  }
  else {
    if (uVar1 < 0xf7) {
      return uVar1 - 0x8b;
    }
    if (uVar1 < 0xfb) {
      if (in_ECX + 2 <= in_EDX) {
        return uVar1 * 0x100 + -0xf694 + (uint)in_ECX[1];
      }
    }
    else if (in_ECX + 2 <= in_EDX) {
      return (uVar1 * -0x100 + 0xfa94) - (uint)in_ECX[1];
    }
  }
  return 0;
}


/* FUN_006b5650 @ 006b5650  kind=gamemisc  attributed-by=none  size=705 */

int FUN_006b5650(byte *param_1,int param_2,int *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *in_EAX;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  bVar3 = false;
  bVar2 = false;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  iVar7 = 0;
  local_10 = 0;
  local_c = 0;
  iVar6 = 0;
  iVar5 = 4;
  while( true ) {
    while( true ) {
      if ((iVar5 != 0) && (in_EAX = in_EAX + 1, param_1 <= in_EAX)) {
        return 0;
      }
      bVar1 = *in_EAX >> ((byte)iVar5 & 0x1f);
      iVar5 = 4 - iVar5;
      uVar4 = bVar1 & 0xf;
      if (uVar4 != 0xe) break;
      bVar3 = true;
    }
    if (9 < uVar4) break;
    if (local_14 < 0xccccccc) {
      if (((bVar1 & 0xf) != 0) || (local_14 != 0)) {
        local_c = local_c + 1;
        local_14 = uVar4 + local_14 * 10;
      }
    }
    else {
      local_10 = local_10 + 1;
    }
  }
  if (uVar4 == 10) {
    while( true ) {
      if ((iVar5 != 0) && (in_EAX = in_EAX + 1, param_1 <= in_EAX)) {
        return 0;
      }
      bVar1 = *in_EAX >> ((byte)iVar5 & 0x1f);
      iVar5 = 4 - iVar5;
      uVar4 = bVar1 & 0xf;
      if (9 < uVar4) break;
      if (((bVar1 & 0xf) == 0) && (local_14 == 0)) {
        local_10 = local_10 + -1;
      }
      else if ((local_14 < 0xccccccc) && (iVar6 < 9)) {
        iVar6 = iVar6 + 1;
        local_14 = uVar4 + local_14 * 10;
      }
    }
  }
  if (uVar4 == 0xc) {
    bVar2 = true;
LAB_006b5740:
    while( true ) {
      if ((iVar5 != 0) && (in_EAX = in_EAX + 1, param_1 <= in_EAX)) {
        return 0;
      }
      bVar1 = (byte)iVar5;
      iVar5 = 4 - iVar5;
      uVar4 = *in_EAX >> (bVar1 & 0x1f) & 0xf;
      if (9 < uVar4) break;
      iVar7 = uVar4 + iVar7 * 10;
      if (1000 < iVar7) {
        return 0;
      }
    }
    if (bVar2) {
      iVar7 = -iVar7;
    }
  }
  else if (uVar4 == 0xb) goto LAB_006b5740;
  iVar7 = iVar7 + local_10 + param_2;
  if (param_3 == (int *)0x0) {
    uVar4 = local_c + iVar7;
    iVar6 = iVar6 - iVar7;
    if (5 < (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f))) {
      return 0;
    }
    if ((int)uVar4 < 0) {
      local_14 = local_14 / *(int *)(&DAT_00734690 + uVar4 * -4);
      iVar6 = iVar6 + uVar4;
    }
    if (iVar6 == 10) {
      local_14 = local_14 / 10;
      iVar6 = 9;
    }
    else if (iVar6 < 1) {
      if (0x7fff < *(int *)(&DAT_00734690 + iVar6 * -4) * local_14) {
        return 0;
      }
      local_14 = *(int *)(&DAT_00734690 + iVar6 * -4) * local_14 * 0x10000;
      goto LAB_006b58f4;
    }
    if (0x7fff < local_14 / *(int *)(&DAT_00734690 + iVar6 * 4)) {
      return 0;
    }
    local_14 = FUN_0068ec40(local_14,*(int *)(&DAT_00734690 + iVar6 * 4));
  }
  else {
    iVar6 = iVar6 + local_c;
    iVar7 = iVar7 + local_c;
    if (iVar6 < 6) {
      if (local_14 < 0x8000) {
        if (iVar7 < 1) {
          iVar7 = iVar7 - iVar6;
        }
        else {
          iVar5 = iVar7;
          if (4 < iVar7) {
            iVar5 = 5;
          }
          iVar7 = iVar7 - iVar5;
          local_14 = local_14 * *(int *)(&DAT_00734690 + (iVar5 - iVar6) * 4);
          if (0x7fff < local_14) {
            local_14 = (local_14 / 10) * 0x10000;
            *param_3 = iVar7 + 1;
            goto LAB_006b58f4;
          }
        }
        local_14 = local_14 << 0x10;
        *param_3 = iVar7;
      }
      else {
        local_14 = FUN_0068ec40(local_14,10);
        *param_3 = (iVar7 - iVar6) + 1;
      }
    }
    else if (local_14 / (int)(&PTR_LAB_0073467c)[iVar6] < 0x8000) {
      local_14 = FUN_0068ec40(local_14,(&PTR_LAB_0073467c)[iVar6]);
      *param_3 = iVar7 + -5;
    }
    else {
      local_14 = FUN_0068ec40(local_14,*(undefined4 *)(&DAT_00734680 + iVar6 * 4));
      *param_3 = iVar7 + -4;
    }
  }
LAB_006b58f4:
  if (bVar3) {
    local_14 = -local_14;
  }
  return local_14;
}


/* FUN_006b5bf0 @ 006b5bf0  kind=gamemisc  attributed-by=none  size=398 */

int FUN_006b5bf0(int param_1,byte *param_2)

{
  uint uVar1;
  byte *in_EDX;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  byte *local_10;
  int local_8;
  int iStack_4;
  
  iVar3 = 0;
  local_8 = 0;
  *(int *)(param_1 + 0x194) = param_1 + 0x10;
  *(byte **)(param_1 + 4) = in_EDX;
  *(byte **)(param_1 + 8) = param_2;
  *(byte **)(param_1 + 0xc) = in_EDX;
  local_10 = in_EDX;
  if (param_2 <= in_EDX) {
    return 0;
  }
  while ((uVar1 = (uint)*local_10, 0x1a < uVar1 && (uVar1 != 0x1f))) {
    if (0x17f < (int)((int)*(undefined4 **)(param_1 + 0x194) + (-0x10 - param_1) & 0xfffffffcU)) {
      return 6;
    }
    **(undefined4 **)(param_1 + 0x194) = local_10;
    *(int *)(param_1 + 0x194) = *(int *)(param_1 + 0x194) + 4;
    if (uVar1 == 0x1e) {
      do {
        local_10 = local_10 + 1;
        if (param_2 <= local_10) {
          return iVar3;
        }
      } while (((*local_10 & 0xf0) != 0xf0) && ((*local_10 & 0xf) != 0xf));
    }
    else if (uVar1 == 0x1c) {
      local_10 = local_10 + 2;
    }
    else if (uVar1 == 0x1d) {
      local_10 = local_10 + 4;
    }
    else if (0xf6 < uVar1) {
      local_10 = local_10 + 1;
    }
LAB_006b5df1:
    local_10 = local_10 + 1;
    if (param_2 <= local_10) {
      return iVar3;
    }
  }
  uVar2 = (int)*(undefined4 **)(param_1 + 0x194) + (-0x10 - param_1) >> 2;
  **(undefined4 **)(param_1 + 0x194) = local_10;
  if (uVar1 == 0xc) {
    local_10 = local_10 + 1;
    if (param_2 <= local_10) {
      return 6;
    }
    uVar1 = *local_10 | 0x100;
  }
  piVar5 = (int *)&DAT_007346b8;
  while (piVar5[1] != (uVar1 | *(uint *)(param_1 + 0x198))) {
    piVar5 = piVar5 + 7;
    if (*piVar5 == 0) goto LAB_006b5de0;
  }
  piVar4 = (int *)(piVar5[2] + *(int *)(param_1 + 0x19c));
  if ((*piVar5 != 6) && (uVar2 == 0)) {
    return 6;
  }
  switch(*piVar5) {
  case 1:
  case 4:
  case 5:
    iVar3 = FUN_006b5920();
    break;
  case 2:
    iVar3 = FUN_006b5950();
    break;
  case 3:
    iVar3 = FUN_006b5980();
    break;
  case 6:
    if ((uint)piVar5[5] < uVar2) {
      uVar2 = piVar5[5];
    }
    *(char *)(piVar5[6] + *(int *)(param_1 + 0x19c)) = (char)uVar2;
    iStack_4 = 0;
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      iVar3 = FUN_006b5920();
      iStack_4 = iStack_4 + iVar3;
      if ((char)piVar5[3] == '\x01') {
        *(char *)piVar4 = (char)iStack_4;
      }
      else if ((char)piVar5[3] == '\x02') {
        *(short *)piVar4 = (short)iStack_4;
      }
      else {
        *piVar4 = iStack_4;
      }
      piVar4 = (int *)((int)piVar4 + (uint)*(byte *)(piVar5 + 3));
    }
LAB_006b5de0:
    *(int *)(param_1 + 0x194) = param_1 + 0x10;
    iVar3 = local_8;
    goto LAB_006b5df1;
  default:
    local_8 = (*(code *)piVar5[4])(param_1);
    if (local_8 != 0) {
      return local_8;
    }
    goto LAB_006b5de0;
  }
  if ((char)piVar5[3] == '\x01') {
    *(char *)piVar4 = (char)iVar3;
  }
  else if ((char)piVar5[3] == '\x02') {
    *(short *)piVar4 = (short)iVar3;
  }
  else {
    *piVar4 = iVar3;
  }
  goto LAB_006b5de0;
}


/* FUN_006b5e50 @ 006b5e50  kind=gamemisc  attributed-by=none  size=19 */

undefined2 FUN_006b5e50(void)

{
  uint in_EAX;
  
  if (in_EAX < 0x100) {
    return *(undefined2 *)((int)&DAT_00735038 + in_EAX * 2);
  }
  return 0;
}


/* FUN_006b5e70 @ 006b5e70  kind=gamemisc  attributed-by=none  size=71 */

uint FUN_006b5e70(void)

{
  byte *pbVar1;
  undefined4 *in_EAX;
  int iVar2;
  int iVar3;
  int *unaff_EBX;
  uint uVar4;
  byte local_4 [4];
  
  uVar4 = 0;
  iVar2 = FUN_00691ec0(*in_EAX,local_4,*(undefined1 *)(in_EAX + 3));
  if (iVar2 == 0) {
    iVar3 = 0;
    if (*(byte *)(in_EAX + 3) != 0) {
      do {
        pbVar1 = local_4 + iVar3;
        iVar3 = iVar3 + 1;
        uVar4 = uVar4 << 8 | (uint)*pbVar1;
      } while (iVar3 < (int)(uint)*(byte *)(in_EAX + 3));
    }
  }
  *unaff_EBX = iVar2;
  return uVar4;
}


/* FUN_006b5ec0 @ 006b5ec0  kind=gamemisc  attributed-by=none  size=273 */

int FUN_006b5ec0(char param_1)

{
  undefined4 uVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int in_ECX;
  int *unaff_ESI;
  int unaff_EDI;
  int local_4;
  
  uVar1 = *(undefined4 *)(unaff_EDI + 0x1c);
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 0;
  *unaff_ESI = unaff_EDI;
  iVar4 = FUN_00690930();
  unaff_ESI[1] = iVar4;
  uVar3 = FUN_00690b80();
  local_4 = in_ECX;
  if (in_ECX != 0) goto LAB_006b5fb5;
  if (uVar3 == 0) {
    return 0;
  }
  bVar2 = FUN_00690b20();
  if ((byte)(bVar2 - 1) < 4) {
    *(byte *)(unaff_ESI + 3) = bVar2;
    unaff_ESI[2] = (uint)uVar3;
    unaff_ESI[4] = (uVar3 + 1) * (uint)bVar2 + 3 + unaff_ESI[1];
    local_4 = FUN_00690900();
    if (local_4 != 0) goto LAB_006b5fb5;
    iVar4 = FUN_006b5e70();
    if (iVar4 != 0) {
      unaff_ESI[5] = iVar4 + -1;
      if (param_1 == '\0') {
        local_4 = FUN_00690900();
        if (local_4 == 0) {
          return 0;
        }
      }
      else {
        local_4 = FUN_00693a30();
        if (local_4 == 0) {
          return 0;
        }
      }
      goto LAB_006b5fb5;
    }
  }
  local_4 = 8;
LAB_006b5fb5:
  FUN_00691290(uVar1,unaff_ESI[6]);
  unaff_ESI[6] = 0;
  return local_4;
}


/* FUN_006b5fe0 @ 006b5fe0  kind=gamemisc  attributed-by=none  size=76 */

void FUN_006b5fe0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_ESI;
  
  iVar1 = *unaff_ESI;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x1c);
    if (unaff_ESI[7] != 0) {
      FUN_00691ee0(iVar1,unaff_ESI + 7);
    }
    FUN_00691290(uVar2,unaff_ESI[6]);
    unaff_ESI[6] = 0;
    *unaff_ESI = 0;
    unaff_ESI[1] = 0;
    unaff_ESI[2] = 0;
    unaff_ESI[3] = 0;
    unaff_ESI[4] = 0;
    unaff_ESI[5] = 0;
    unaff_ESI[6] = 0;
    unaff_ESI[7] = 0;
  }
  return;
}


/* FUN_006b6030 @ 006b6030  kind=gamemisc  attributed-by=none  size=364 */

int FUN_006b6030(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int *unaff_EDI;
  int local_8;
  undefined4 local_4;
  
  iVar2 = *unaff_EDI;
  local_8 = 0;
  local_4 = *(undefined4 *)(iVar2 + 0x1c);
  iVar3 = 0;
  if ((unaff_EDI[2] != 0) && (unaff_EDI[6] == 0)) {
    uVar6 = (uint)*(byte *)(unaff_EDI + 3);
    iVar3 = unaff_EDI[2] + 1;
    iVar7 = uVar6 * iVar3;
    iVar3 = FUN_00693a60(local_4,4,0,iVar3,0,&local_8);
    unaff_EDI[6] = iVar3;
    if ((local_8 == 0) &&
       ((local_8 = FUN_006908c0(iVar2,unaff_EDI[1] + 3), local_8 == 0 &&
        (local_8 = FUN_00691f30(iVar2,iVar7), local_8 == 0)))) {
      pbVar4 = *(byte **)(iVar2 + 0x20);
      puVar5 = (uint *)unaff_EDI[6];
      pbVar1 = pbVar4 + iVar7;
      if (uVar6 == 1) {
        for (; pbVar4 < pbVar1; pbVar4 = pbVar4 + 1) {
          *puVar5 = (uint)*pbVar4;
          puVar5 = puVar5 + 1;
        }
      }
      else if (uVar6 == 2) {
        for (; pbVar4 < pbVar1; pbVar4 = pbVar4 + 2) {
          *puVar5 = (uint)CONCAT11(*pbVar4,pbVar4[1]);
          puVar5 = puVar5 + 1;
        }
      }
      else if (uVar6 == 3) {
        for (; pbVar4 < pbVar1; pbVar4 = pbVar4 + 3) {
          *puVar5 = (int)CONCAT21(CONCAT11(*pbVar4,pbVar4[1]),pbVar4[2]);
          puVar5 = puVar5 + 1;
        }
      }
      else {
        for (; pbVar4 < pbVar1; pbVar4 = pbVar4 + 4) {
          *puVar5 = CONCAT31(CONCAT21(CONCAT11(*pbVar4,pbVar4[1]),pbVar4[2]),pbVar4[3]);
          puVar5 = puVar5 + 1;
        }
      }
      FUN_00691fe0(iVar2);
      if (local_8 == 0) {
        return 0;
      }
    }
    FUN_00691290(local_4,unaff_EDI[6]);
    unaff_EDI[6] = 0;
    iVar3 = local_8;
  }
  return iVar3;
}


/* FUN_006b6310 @ 006b6310  kind=gamemisc  attributed-by=none  size=278 */

int FUN_006b6310(int *param_1,int *param_2)

{
  undefined4 uVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *unaff_ESI;
  
  if ((unaff_ESI == (undefined4 *)0x0) || ((uint)unaff_ESI[2] <= in_EAX)) {
    return 6;
  }
  iVar2 = unaff_ESI[6];
  uVar1 = *unaff_ESI;
  if (iVar2 == 0) {
    iVar2 = FUN_006908c0(uVar1,unaff_ESI[1] + 3 + *(byte *)(unaff_ESI + 3) * in_EAX);
    if (iVar2 != 0) {
      return iVar2;
    }
    uVar3 = FUN_006b5e70();
    if (uVar3 != 0) {
      do {
        in_EAX = in_EAX + 1;
        uVar4 = FUN_006b5e70();
        if (uVar4 != 0) goto LAB_006b63cb;
      } while (in_EAX < (uint)unaff_ESI[2]);
    }
  }
  else {
    uVar3 = *(uint *)(iVar2 + in_EAX * 4);
    iVar2 = iVar2 + in_EAX * 4;
    if (uVar3 != 0) {
      do {
        uVar4 = *(uint *)(iVar2 + 4);
        iVar2 = iVar2 + 4;
        in_EAX = in_EAX + 1;
        if (uVar4 != 0) goto LAB_006b63cb;
      } while (in_EAX < (uint)unaff_ESI[2]);
    }
  }
LAB_006b638c:
  *param_1 = 0;
  *param_2 = 0;
  return 0;
LAB_006b63cb:
  if (uVar3 < uVar4) {
    *param_2 = uVar4 - uVar3;
    if (unaff_ESI[7] != 0) {
      *param_1 = unaff_ESI[7] + -1 + uVar3;
      return 0;
    }
    iVar2 = FUN_006908c0(uVar1,unaff_ESI[4] + -1 + uVar3);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_00693a30(uVar1,uVar4 - uVar3,param_1);
    return iVar2;
  }
  goto LAB_006b638c;
}


/* FUN_006b6450 @ 006b6450  kind=gamemisc  attributed-by=none  size=125 */

void * FUN_006b6450(void)

{
  undefined4 uVar1;
  int in_EAX;
  void *_Dst;
  int local_c;
  void *local_8;
  size_t local_4;
  
  uVar1 = *(undefined4 *)(*(int *)(in_EAX + 0x14) + 0x1c);
  local_c = FUN_006b6310(&local_8,&local_4);
  if (local_c == 0) {
    _Dst = (void *)FUN_00692230(uVar1,local_4 + 1,&local_c);
    if (local_c == 0) {
      memcpy(_Dst,local_8,local_4);
      *(undefined1 *)(local_4 + (int)_Dst) = 0;
    }
    FUN_006b6430();
    return _Dst;
  }
  return (void *)0x0;
}


/* FUN_006b64d0 @ 006b64d0  kind=gamemisc  attributed-by=none  size=21 */

undefined4 FUN_006b64d0(void)

{
  uint in_EAX;
  int in_ECX;
  
  if (in_EAX < *(uint *)(in_ECX + 0x520)) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x524) + in_EAX * 4);
  }
  return 0;
}


/* FUN_006b6560 @ 006b6560  kind=gamemisc  attributed-by=none  size=120 */

/* WARNING: Removing unreachable block (ram,0x006b65d4) */

int FUN_006b6560(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *unaff_EDI;
  
  iVar2 = FUN_006908c0();
  if (iVar2 != 0) {
    return iVar2;
  }
  cVar1 = FUN_00690b20();
  *unaff_EDI = cVar1;
  unaff_EDI[0x14] = '\0';
  unaff_EDI[0x15] = '\0';
  unaff_EDI[0x16] = '\0';
  unaff_EDI[0x17] = '\0';
  if (cVar1 == '\0') {
    *(undefined4 *)(unaff_EDI + 0xc) = param_1;
  }
  else {
    if (cVar1 != '\x03') {
      return 3;
    }
    uVar3 = FUN_00690b80();
    *(uint *)(unaff_EDI + 0xc) = (uVar3 & 0xffff) * 3 + 2;
  }
  iVar2 = FUN_00693a30();
  return iVar2;
}


/* FUN_006b6670 @ 006b6670  kind=gamemisc  attributed-by=none  size=116 */

int FUN_006b6670(undefined4 param_1)

{
  int iVar1;
  ushort *puVar2;
  undefined4 uVar3;
  ushort uVar4;
  int unaff_EBX;
  int unaff_ESI;
  int iVar5;
  int local_4;
  
  uVar4 = 0;
  local_4 = 0;
  iVar5 = 0;
  if (*(int *)(unaff_ESI + 0x10) == 0) {
    if (unaff_EBX != 0) {
      puVar2 = *(ushort **)(unaff_ESI + 8);
      iVar5 = unaff_EBX;
      do {
        if (uVar4 < *puVar2) {
          uVar4 = *puVar2;
        }
        puVar2 = puVar2 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    uVar3 = FUN_00693a60(param_1,2,0,(uint)(ushort)(uVar4 + 1),0,&local_4);
    *(undefined4 *)(unaff_ESI + 0xc) = uVar3;
    iVar5 = local_4;
    iVar1 = unaff_EBX;
    if (local_4 == 0) {
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        *(short *)(*(int *)(unaff_ESI + 0xc) +
                  (uint)*(ushort *)(*(int *)(unaff_ESI + 8) + iVar1 * 2) * 2) = (short)iVar1;
      }
      *(uint *)(unaff_ESI + 0x10) = (uint)(ushort)(uVar4 + 1);
      *(int *)(unaff_ESI + 0x14) = unaff_EBX;
    }
  }
  return iVar5;
}


/* FUN_006b66f0 @ 006b66f0  kind=gamemisc  attributed-by=none  size=15 */

undefined2 FUN_006b66f0(void)

{
  undefined2 uVar1;
  uint in_ECX;
  int in_EDX;
  
  uVar1 = 0;
  if (in_ECX < *(uint *)(in_EDX + 0x10)) {
    uVar1 = *(undefined2 *)(*(int *)(in_EDX + 0xc) + in_ECX * 2);
  }
  return uVar1;
}


/* FUN_006b6750 @ 006b6750  kind=gamemisc  attributed-by=none  size=779 */

int FUN_006b6750(uint *param_1,int param_2,char param_3)

{
  ushort uVar1;
  uint in_EAX;
  uint uVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  int in_ECX;
  uint in_EDX;
  uint uVar7;
  undefined4 uVar8;
  int local_8;
  undefined4 local_4;
  
  uVar8 = *(undefined4 *)(param_2 + 0x1c);
  local_8 = 0;
  local_4 = uVar8;
  if (in_EAX < 3) {
    param_1[1] = in_EAX;
    if (in_EAX == 0) {
      if (0xe5 < in_EDX) goto LAB_006b6907;
      pvVar6 = (void *)FUN_00693a60(uVar8,2,0);
      param_1[2] = (uint)pvVar6;
      if (local_8 != 0) goto LAB_006b68d3;
      memcpy(pvVar6,&DAT_00734c68,in_EDX * 2);
    }
    else if (in_EAX == 1) {
      if (0xa6 < in_EDX) goto LAB_006b6907;
      pvVar6 = (void *)FUN_00693a60(uVar8,2,0);
      param_1[2] = (uint)pvVar6;
      if (local_8 != 0) goto LAB_006b68d3;
      memcpy(pvVar6,&DAT_00734e38,in_EDX * 2);
    }
    else {
      if ((in_EAX != 2) || (0x57 < in_EDX)) {
LAB_006b6907:
        local_8 = 3;
        goto LAB_006b68d3;
      }
      pvVar6 = (void *)FUN_00693a60(uVar8,2,0);
      param_1[2] = (uint)pvVar6;
      if (local_8 != 0) goto LAB_006b68d3;
      memcpy(pvVar6,&DAT_00734f88,in_EDX * 2);
    }
  }
  else {
    param_1[1] = in_EAX + in_ECX;
    local_8 = FUN_006908c0(param_2,in_EAX + in_ECX);
    if (local_8 != 0) goto LAB_006b68d3;
    uVar2 = FUN_00690b20(param_2,&local_8);
    *param_1 = uVar2 & 0xff;
    if (local_8 != 0) goto LAB_006b68d3;
    puVar3 = (undefined2 *)FUN_00693a60(uVar8,2,0);
    param_1[2] = (uint)puVar3;
    if (local_8 != 0) goto LAB_006b68d3;
    *puVar3 = 0;
    if (*param_1 == 0) {
      if (in_EDX != 0) {
        local_8 = FUN_00691f30(param_2,in_EDX * 2 + -2);
        if (local_8 != 0) goto LAB_006b68d3;
        uVar2 = 1;
        if (1 < in_EDX) {
          do {
            uVar1 = FUN_00690a40(param_2);
            if (uVar1 < 65000) {
              *(ushort *)(param_1[2] + uVar2 * 2) = uVar1;
            }
            else {
              *(undefined2 *)(param_1[2] + uVar2 * 2) = 0;
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 < in_EDX);
        }
        FUN_00691fe0(param_2);
        uVar8 = local_4;
      }
    }
    else {
      if (1 < *param_1 - 1) goto LAB_006b6907;
      uVar2 = 1;
      uVar8 = local_4;
      if (1 < in_EDX) {
        do {
          uVar1 = FUN_00690b80(param_2,&local_8);
          uVar7 = (uint)uVar1;
          uVar8 = local_4;
          if (local_8 != 0) goto LAB_006b68d3;
          if (*param_1 == 2) {
            uVar4 = FUN_00690b80(param_2,&local_8);
            uVar4 = uVar4 & 0xffff;
          }
          else {
            uVar4 = FUN_00690b20(param_2,&local_8);
            uVar4 = uVar4 & 0xff;
          }
          uVar8 = local_4;
          if (local_8 != 0) goto LAB_006b68d3;
          if (64999 < uVar1) {
            local_8 = 3;
            goto LAB_006b68d3;
          }
          if ((64999 < uVar4) || (65000 - uVar4 <= uVar7)) {
            uVar4 = 64999 - uVar7;
          }
          uVar5 = 0;
          while( true ) {
            if (in_EDX <= uVar2) goto LAB_006b67fb;
            if (uVar4 < uVar5) break;
            *(short *)(param_1[2] + uVar2 * 2) = (short)uVar7;
            uVar2 = uVar2 + 1;
            uVar5 = uVar5 + 1;
            uVar7 = uVar7 + 1;
          }
        } while (uVar2 < in_EDX);
      }
    }
  }
LAB_006b67fb:
  if (param_3 != '\0') {
    local_8 = FUN_006b6670(uVar8);
  }
  if (local_8 == 0) {
    return 0;
  }
LAB_006b68d3:
  FUN_00691290(uVar8,param_1[2]);
  param_1[2] = 0;
  FUN_00691290(uVar8,param_1[3]);
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return local_8;
}


/* FUN_006b6a70 @ 006b6a70  kind=gamemisc  attributed-by=none  size=11 */

void FUN_006b6a70(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = 0;
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  return;
}


/* FUN_006b6a80 @ 006b6a80  kind=gamemisc  attributed-by=none  size=833 */

int FUN_006b6a80(uint *param_1,int param_2,uint param_3,int param_4,int param_5)

{
  byte bVar1;
  short sVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  short *psVar11;
  uint in_EDX;
  uint *puVar12;
  uint *puVar13;
  int local_8;
  uint local_4;
  
  local_8 = 0;
  if (*(int *)(param_2 + 8) == 0) {
    return 3;
  }
  puVar3 = param_1 + 0x83;
  iVar9 = 0x100;
  do {
    *(undefined2 *)(puVar3 + -0x80) = 0;
    *(undefined2 *)puVar3 = 0;
    puVar3 = (uint *)((int)puVar3 + 2);
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  if (in_EDX < 2) {
    if (in_EDX == 0) {
      puVar3 = &DAT_00735038;
    }
    else {
      if (in_EDX != 1) {
        return 3;
      }
      puVar3 = &DAT_00735238;
    }
    puVar12 = param_1 + 3;
    puVar13 = puVar12;
    for (iVar9 = 0x80; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar13 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar13 = puVar13 + 1;
    }
    param_1[2] = 0;
    local_8 = FUN_006b6670(*(undefined4 *)(param_4 + 0x1c));
    if (local_8 == 0) {
      iVar9 = 0x100;
      uVar4 = 0;
      do {
        uVar4 = uVar4 + 1;
        if (((short)*puVar12 == 0) || (iVar8 = FUN_006b66f0(), iVar8 == 0)) {
          *(undefined2 *)(puVar12 + 0x80) = 0;
          *(undefined2 *)puVar12 = 0;
        }
        else {
          *(short *)(puVar12 + 0x80) = (short)iVar8;
          if (param_1[2] < uVar4) {
            param_1[2] = uVar4;
          }
        }
        puVar12 = (uint *)((int)puVar12 + 2);
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  else {
    param_1[1] = param_5 + in_EDX;
    local_8 = FUN_006908c0(param_4,param_5 + in_EDX);
    if (local_8 == 0) {
      uVar4 = FUN_00690b20(param_4,&local_8);
      *param_1 = uVar4 & 0xff;
      if (local_8 == 0) {
        uVar4 = FUN_00690b20(param_4,&local_8);
        uVar4 = uVar4 & 0xff;
        if (local_8 == 0) {
          if ((*param_1 & 0x7f) == 0) {
            param_1[2] = uVar4 + 1;
            local_8 = FUN_00691f30(param_4,uVar4);
            if (local_8 != 0) {
              return local_8;
            }
            pbVar10 = *(byte **)(param_4 + 0x20);
            uVar7 = 1;
            if (uVar4 != 0) {
              do {
                bVar1 = *pbVar10;
                pbVar10 = pbVar10 + 1;
                if (uVar7 < param_3) {
                  *(short *)((int)param_1 + (uint)bVar1 * 2 + 0x20c) = (short)uVar7;
                  *(undefined2 *)((int)param_1 + (uint)bVar1 * 2 + 0xc) =
                       *(undefined2 *)(*(int *)(param_2 + 8) + uVar7 * 2);
                }
                uVar7 = uVar7 + 1;
              } while (uVar7 <= uVar4);
            }
            FUN_00691fe0(param_4);
          }
          else {
            if ((*param_1 & 0x7f) != 1) {
              return 3;
            }
            param_1[2] = 0;
            local_4 = 0;
            uVar7 = 1;
            uVar5 = 0;
            if (uVar4 != 0) {
              do {
                uVar5 = FUN_00690b20(param_4,&local_8);
                if (local_8 != 0) {
                  return local_8;
                }
                uVar6 = FUN_00690b20(param_4,&local_8);
                if (local_8 != 0) {
                  return local_8;
                }
                uVar6 = (uVar6 & 0xff) + 1;
                if (param_1[2] < uVar6) {
                  param_1[2] = uVar6;
                }
                uVar6 = uVar6 + uVar7;
                if (uVar7 < uVar6) {
                  pbVar10 = (byte *)((int)param_1 + (uVar5 & 0xff) * 2 + 0xc);
                  iVar9 = (uVar5 & 0xff) - uVar7;
                  do {
                    if ((uVar7 < param_3) && (iVar9 + uVar7 < 0x100)) {
                      *(short *)(pbVar10 + 0x200) = (short)uVar7;
                      *(undefined2 *)pbVar10 = *(undefined2 *)(*(int *)(param_2 + 8) + uVar7 * 2);
                    }
                    uVar7 = uVar7 + 1;
                    pbVar10 = pbVar10 + 2;
                  } while (uVar7 < uVar6);
                }
                local_4 = local_4 + 1;
                uVar7 = uVar6;
                uVar5 = local_4;
              } while (local_4 < uVar4);
            }
            local_4 = uVar5;
            if (0x100 < param_1[2]) {
              param_1[2] = 0x100;
            }
          }
          if ((*param_1 & 0x80) != 0) {
            local_4 = FUN_00690b20(param_4,&local_8);
            local_4 = local_4 & 0xff;
            if ((local_8 == 0) && (uVar4 = 0, local_4 != 0)) {
              while( true ) {
                uVar7 = FUN_00690b20(param_4,&local_8);
                if ((local_8 != 0) || (sVar2 = FUN_00690b80(param_4,&local_8), local_8 != 0)) break;
                uVar5 = 0;
                *(short *)((int)param_1 + (uVar7 & 0xff) * 2 + 0xc) = sVar2;
                if (param_3 != 0) {
                  psVar11 = *(short **)(param_2 + 8);
                  do {
                    if (*psVar11 == sVar2) {
                      *(short *)((int)param_1 + (uVar7 & 0xff) * 2 + 0x20c) = (short)uVar5;
                      break;
                    }
                    uVar5 = uVar5 + 1;
                    psVar11 = psVar11 + 1;
                  } while (uVar5 < param_3);
                }
                uVar4 = uVar4 + 1;
                if (local_4 <= uVar4) {
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return local_8;
}


/* FUN_006b6dd0 @ 006b6dd0  kind=gamemisc  attributed-by=none  size=551 */

int FUN_006b6dd0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  byte *_Dst;
  undefined4 *in_EAX;
  int iVar1;
  int local_1a8;
  int local_1a4;
  undefined1 local_1a0 [416];
  
  local_1a4 = 0;
  _Dst = (byte *)(in_EAX + 0x2b);
  FUN_006b5570(0x1000);
  memset(in_EAX,0,0xac);
  in_EAX[0xc] = 0x10000;
  in_EAX[0xf] = 0x10000;
  *in_EAX = 0xffff;
  in_EAX[1] = 0xffff;
  in_EAX[2] = 0xffff;
  in_EAX[3] = 0xffff;
  in_EAX[4] = 0xffff;
  in_EAX[5] = 0xffff;
  in_EAX[0x1f] = 0xffff;
  in_EAX[0x20] = 0xffff;
  in_EAX[0x21] = 0xffff;
  in_EAX[0x2a] = 0xffff;
  in_EAX[8] = 0xff9c0000;
  in_EAX[9] = 0x320000;
  in_EAX[0xb] = 2;
  in_EAX[0x26] = 0x2210;
  iVar1 = FUN_006b6310(&local_1a4,&local_1a8);
  if (iVar1 == 0) {
    iVar1 = FUN_006b5bf0(local_1a0,local_1a8 + local_1a4);
  }
  FUN_006b6430();
  if (iVar1 != 0) {
    return iVar1;
  }
  if (in_EAX[0x20] != 0xffff) {
    return 0;
  }
  if ((in_EAX[0x1c] != 0) && (in_EAX[0x1d] != 0)) {
    memset(_Dst,0,0x168);
    in_EAX[0x5d] = 7;
    in_EAX[0x5e] = 1;
    in_EAX[0x7e] = 0xffffffff;
    in_EAX[0x80] = 0xf5c;
    in_EAX[0x5c] = 0x27a000;
    FUN_006b5570(0x2000,_Dst,param_5);
    iVar1 = FUN_006908c0(param_3,in_EAX[0x1c] + param_4);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_00691f30(param_3,in_EAX[0x1d]);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_006b5bf0(local_1a0,*(undefined4 *)(param_3 + 0x24));
    FUN_00691fe0(param_3);
    if (iVar1 != 0) {
      return iVar1;
    }
    *_Dst = *_Dst & 0xfe;
  }
  iVar1 = 0;
  if ((in_EAX[0x82] != 0) &&
     (iVar1 = FUN_006908c0(param_3,in_EAX[0x1c] + in_EAX[0x82] + param_4), iVar1 == 0)) {
    iVar1 = FUN_006b5ec0(1);
    if (iVar1 == 0) {
      iVar1 = FUN_006b61b0(in_EAX + 0x85,in_EAX + 0x8d,0);
    }
  }
  return iVar1;
}


/* FUN_006b7420 @ 006b7420  kind=gamemisc  attributed-by=none  size=278 */

void FUN_006b7420(void)

{
  undefined4 uVar1;
  undefined4 *unaff_EBX;
  uint uVar2;
  
  uVar1 = unaff_EBX[1];
  FUN_006b5fe0();
  FUN_006b5fe0();
  FUN_006b5fe0();
  FUN_006b5fe0();
  if (unaff_EBX[0x1d9] != 0) {
    uVar2 = 0;
    if (unaff_EBX[0x1d9] != 0) {
      do {
        FUN_006b7000(uVar1);
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)unaff_EBX[0x1d9]);
    }
    FUN_00691290(uVar1,unaff_EBX[0x1da]);
    unaff_EBX[0x1da] = 0;
  }
  FUN_006b6a70();
  FUN_006b6720();
  FUN_006b7000(uVar1);
  FUN_006b6530(*unaff_EBX);
  FUN_00691290(uVar1,unaff_EBX[0x203]);
  unaff_EBX[0x203] = 0;
  FUN_00691290(uVar1,unaff_EBX[0x146]);
  unaff_EBX[0x146] = 0;
  FUN_00691290(uVar1,unaff_EBX[0x147]);
  unaff_EBX[0x147] = 0;
  FUN_00691290(uVar1,unaff_EBX[0x149]);
  unaff_EBX[0x149] = 0;
  FUN_00691290(uVar1,unaff_EBX[0x14a]);
  unaff_EBX[0x14a] = 0;
  return;
}


/* FUN_006b7880 @ 006b7880  kind=gamemisc  attributed-by=none  size=227 */

undefined4 FUN_006b7880(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  param_1[0xb] = (int)param_2;
  FUN_0068f560(*param_1,param_2);
  iVar3 = FUN_006b7540();
  if (iVar3 == 0) {
    return 0;
  }
  iVar5 = *(int *)(*param_1 + 0x2b4);
  puVar1 = (undefined4 *)param_1[10];
  iVar2 = *(int *)(iVar5 + 0x56c);
  (**(code **)(iVar3 + 4))(*puVar1,param_1[4],param_1[5],0,0);
  iVar6 = *(int *)(iVar5 + 0x764);
  if (iVar6 != 0) {
    param_2 = (int *)(iVar5 + 0x764 + iVar6 * 4);
    do {
      iVar5 = *(int *)(*param_2 + 0x40);
      if (iVar2 == iVar5) {
        iVar4 = param_1[4];
        iVar5 = param_1[5];
      }
      else {
        iVar4 = FUN_0068ea60(param_1[4],iVar2,iVar5);
        iVar5 = FUN_0068ea60(param_1[5],iVar2,iVar5);
      }
      (**(code **)(iVar3 + 4))(puVar1[iVar6],iVar4,iVar5,0,0);
      param_2 = param_2 + -1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 0;
}


/* FUN_006b8660 @ 006b8660  kind=gamemisc  attributed-by=none  size=44 */

undefined4 FUN_006b8660(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int in_EDX;
  
  if (in_ECX != 0) {
    iVar1 = *(int *)(in_EDX + 0xc);
    if (*(uint *)(iVar1 + 4) <
        (uint)((int)*(short *)(iVar1 + 0x16) + *(short *)(iVar1 + 0x3a) + in_ECX)) {
      uVar2 = FUN_00693c40(iVar1);
      return uVar2;
    }
  }
  return 0;
}


/* FUN_006b8690 @ 006b8690  kind=gamemisc  attributed-by=none  size=62 */

void FUN_006b8690(char param_1)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int in_EAX;
  int in_ECX;
  int in_EDX;
  
  iVar3 = *(int *)(in_ECX + 0x14);
  if (*(char *)(in_ECX + 0x41) != '\0') {
    sVar2 = *(short *)(iVar3 + 2);
    piVar1 = (int *)(*(int *)(iVar3 + 4) + sVar2 * 8);
    iVar4 = *(int *)(iVar3 + 8);
    *piVar1 = in_EDX >> 0x10;
    piVar1[1] = in_EAX >> 0x10;
    *(char *)(iVar4 + sVar2) = (param_1 == '\0') + '\x01';
  }
  *(short *)(iVar3 + 2) = *(short *)(iVar3 + 2) + 1;
  return;
}


/* FUN_006b8700 @ 006b8700  kind=gamemisc  attributed-by=none  size=90 */

int FUN_006b8700(void)

{
  short *psVar1;
  int in_EAX;
  int iVar2;
  
  psVar1 = *(short **)(in_EAX + 0x14);
  if (*(char *)(in_EAX + 0x41) == '\0') {
    *psVar1 = *psVar1 + 1;
    return 0;
  }
  iVar2 = *(int *)(in_EAX + 0xc);
  if ((*(uint *)(iVar2 + 8) < (uint)(*(short *)(iVar2 + 0x38) + 1 + (int)*(short *)(iVar2 + 0x14)))
     && (iVar2 = FUN_00693c40(iVar2,0,1), iVar2 != 0)) {
    return iVar2;
  }
  if (0 < *psVar1) {
    *(short *)(*(int *)(psVar1 + 6) + -2 + *psVar1 * 2) = psVar1[1] + -1;
  }
  *psVar1 = *psVar1 + 1;
  return 0;
}


/* FUN_006b8760 @ 006b8760  kind=gamemisc  attributed-by=none  size=45 */

void FUN_006b8760(undefined4 param_1,undefined4 param_2)

{
  int in_EAX;
  int iVar1;
  
  if (*(char *)(in_EAX + 0x40) == '\0') {
    *(undefined1 *)(in_EAX + 0x40) = 1;
    iVar1 = FUN_006b8700();
    if (iVar1 == 0) {
      FUN_006b86d0(param_1,param_2);
    }
  }
  return;
}


/* FUN_006b8790 @ 006b8790  kind=gamemisc  attributed-by=none  size=133 */

void FUN_006b8790(void)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  
  psVar3 = *(short **)(in_EAX + 0x14);
  if (psVar3 != (short *)0x0) {
    sVar1 = *psVar3;
    if (sVar1 < 2) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(short *)(*(int *)(psVar3 + 6) + -4 + sVar1 * 2) + 1;
    }
    sVar2 = psVar3[1];
    if (1 < sVar2) {
      iVar4 = *(int *)(psVar3 + 2);
      iVar6 = (int)sVar2;
      if (((*(int *)(iVar4 + iVar5 * 8) == *(int *)(iVar4 + -8 + iVar6 * 8)) &&
          (*(int *)(iVar4 + 4 + iVar5 * 8) == *(int *)(iVar4 + -4 + iVar6 * 8))) &&
         (*(char *)(*(int *)(psVar3 + 4) + -1 + iVar6) == '\x01')) {
        psVar3[1] = sVar2 + -1;
      }
    }
    if (0 < sVar1) {
      sVar2 = psVar3[1];
      if (iVar5 == sVar2 + -1) {
        *psVar3 = sVar1 + -1;
        psVar3[1] = sVar2 + -1;
        return;
      }
      *(short *)(*(int *)(psVar3 + 6) + -2 + sVar1 * 2) = sVar2 + -1;
    }
  }
  return;
}


/* FUN_006b8820 @ 006b8820  kind=gamemisc  attributed-by=none  size=57 */

uint FUN_006b8820(void)

{
  short sVar1;
  uint in_EAX;
  uint uVar2;
  int in_ECX;
  int extraout_ECX;
  short *extraout_EDX;
  short *psVar3;
  
  if ((*(int *)(in_ECX + 0x488) != 0) && (in_EAX < 0x100)) {
    sVar1 = FUN_006b5e50();
    uVar2 = 0;
    psVar3 = extraout_EDX;
    if (*(uint *)(extraout_ECX + 0xc) != 0) {
      do {
        if (*psVar3 == sVar1) {
          return uVar2;
        }
        uVar2 = uVar2 + 1;
        psVar3 = psVar3 + 1;
      } while (uVar2 < *(uint *)(extraout_ECX + 0xc));
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}


/* FUN_006b8910 @ 006b8910  kind=gamemisc  attributed-by=none  size=558 */

int FUN_006b8910(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int in_EAX;
  int iVar7;
  int iVar8;
  int iVar9;
  int unaff_ESI;
  int local_1c;
  
  if (*(char *)(unaff_ESI + 0x39c) != '\0') {
    return 0xa0;
  }
  param_2 = param_2 + *(int *)(unaff_ESI + 0x20);
  param_3 = param_3 + *(int *)(unaff_ESI + 0x24);
  local_1c = in_EAX;
  if (*(int *)(*(int *)(*(int *)(unaff_ESI + 4) + 0x80) + 0x34) == 0) {
    local_1c = FUN_006b8820();
    param_4 = FUN_006b8820();
  }
  if ((-1 < local_1c) && (-1 < param_4)) {
    if (*(char *)(unaff_ESI + 0x42) != '\0') {
      iVar8 = *(int *)(unaff_ESI + 8);
      iVar9 = **(int **)(iVar8 + 0x9c);
      iVar7 = FUN_00693db0(iVar9,2);
      if (iVar7 != 0) {
        return iVar7;
      }
      piVar1 = *(int **)(iVar9 + 0x58);
      *piVar1 = local_1c;
      piVar1[2] = 0;
      piVar1[3] = 0;
      *(undefined2 *)(piVar1 + 1) = 0x202;
      piVar1[8] = param_4;
      *(undefined2 *)(piVar1 + 9) = 2;
      piVar1[10] = param_2 >> 0x10;
      piVar1[0xb] = param_3 >> 0x10;
      *(undefined4 *)(iVar8 + 0x80) = 2;
      *(undefined4 *)(iVar8 + 0x84) = *(undefined4 *)(iVar9 + 0x34);
      *(undefined4 *)(iVar8 + 0x48) = 0x636f6d70;
      *(undefined4 *)(iVar9 + 0x54) = 2;
    }
    FUN_0068f0a0(*(undefined4 *)(unaff_ESI + 0xc));
    iVar8 = FUN_006b8860();
    if (iVar8 == 0) {
      *(undefined1 *)(unaff_ESI + 0x39c) = 1;
      iVar8 = FUN_006b8b40();
      *(undefined1 *)(unaff_ESI + 0x39c) = 0;
      FUN_006b88c0(local_1c);
      if (iVar8 != 0) {
        return iVar8;
      }
    }
    uVar2 = *(undefined4 *)(unaff_ESI + 0x24);
    uVar3 = *(undefined4 *)(unaff_ESI + 0x20);
    uVar4 = *(undefined4 *)(unaff_ESI + 0x28);
    uVar5 = *(undefined4 *)(unaff_ESI + 0x2e8);
    uVar6 = *(undefined4 *)(unaff_ESI + 0x2c);
    *(undefined4 *)(unaff_ESI + 0x20) = 0;
    *(undefined4 *)(unaff_ESI + 0x24) = 0;
    *(int *)(unaff_ESI + 0x1c) = param_3;
    *(int *)(unaff_ESI + 0x18) = param_2 - param_1;
    iVar8 = FUN_006b8860();
    if (iVar8 == 0) {
      *(undefined1 *)(unaff_ESI + 0x39c) = 1;
      iVar9 = FUN_006b8b40();
      *(undefined1 *)(unaff_ESI + 0x39c) = 0;
      FUN_006b88c0(local_1c);
      iVar8 = 0;
      if (iVar9 != 0) {
        return iVar9;
      }
    }
    *(undefined4 *)(unaff_ESI + 0x20) = uVar3;
    *(undefined4 *)(unaff_ESI + 0x24) = uVar2;
    *(undefined4 *)(unaff_ESI + 0x2c) = uVar6;
    *(undefined4 *)(unaff_ESI + 0x28) = uVar4;
    *(undefined4 *)(unaff_ESI + 0x2e8) = uVar5;
    *(undefined4 *)(unaff_ESI + 0x18) = 0;
    *(undefined4 *)(unaff_ESI + 0x1c) = 0;
    return iVar8;
  }
  return 0xa0;
}


/* FUN_006b8b40 @ 006b8b40  kind=gamemisc  attributed-by=none  size=5939 */

undefined4 FUN_006b8b40(int param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  sbyte sVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  byte *pbVar23;
  uint *puVar24;
  byte *pbVar25;
  bool bVar26;
  byte *local_28;
  uint uStack_24;
  int *local_20;
  byte *local_1c;
  uint local_10;
  int local_c;
  uint uStack_8;
  int local_4;
  
  iVar22 = param_1;
  local_4 = *(int *)(*(int *)(param_1 + 0x4c) + 0x558);
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  *(undefined1 *)(param_1 + 0x2f0) = 1;
  uVar10 = (uint)&local_10 ^ (uint)&param_1 ^ (uint)&param_2;
  local_10 = ((int)((int)uVar10 >> 10 ^ uVar10) >> 10 ^ uVar10) & 0xffff;
  local_c = param_1;
  if (local_10 == 0) {
    local_10 = 0x7384;
  }
  *(int *)(param_1 + 0x114) = param_1 + 0x50;
  *(int *)(param_1 + 0x2a4) = param_1 + 0x118;
  puVar4 = *(uint **)(param_1 + 0x114);
  local_20 = (int *)(param_1 + 0x118);
  *(undefined1 *)(param_1 + 0x40) = 0;
  puVar5 = *(undefined4 **)(param_1 + 0x44);
  *local_20 = param_2;
  local_1c = (byte *)(param_3 + param_2);
  *(byte **)(param_1 + 0x11c) = local_1c;
  local_28 = (byte *)*local_20;
  *(byte **)(param_1 + 0x120) = local_28;
  uVar10 = *(uint *)(param_1 + 0x18);
  iVar21 = *(int *)(param_1 + 0x1c);
  if (puVar5 != (undefined4 *)0x0) {
    (*(code *)puVar5[1])(*puVar5);
  }
  if (local_28 < local_1c) {
    do {
      bVar3 = *local_28;
      pbVar23 = local_28 + 1;
      if ((0x1f < bVar3) || (bVar3 == 0x1c)) {
        sVar17 = 0x10;
        if (bVar3 == 0x1c) {
          if (local_1c <= local_28 + 2) {
            return 3;
          }
          uVar14 = (int)(short)((ushort)*pbVar23 << 8) | (uint)local_28[2];
          local_28 = local_28 + 3;
        }
        else if (bVar3 < 0xf7) {
          uVar14 = bVar3 - 0x8b;
          local_28 = pbVar23;
        }
        else if (bVar3 < 0xfb) {
          if (local_1c <= pbVar23) {
            return 3;
          }
          local_28 = local_28 + 2;
          uVar14 = (uint)bVar3 * 0x100 + -0xf694 + (uint)*pbVar23;
        }
        else if (bVar3 == 0xff) {
          pbVar25 = local_28 + 4;
          if (local_1c <= pbVar25) {
            return 3;
          }
          pbVar1 = local_28 + 2;
          pbVar2 = local_28 + 3;
          local_28 = local_28 + 5;
          uVar14 = CONCAT31(CONCAT21(CONCAT11(*pbVar23,*pbVar1),*pbVar2),*pbVar25);
          if (local_4 == 2) {
            sVar17 = 0;
          }
          else {
            sVar17 = 0x10;
          }
        }
        else {
          if (local_1c <= pbVar23) {
            return 3;
          }
          uVar14 = ((uint)bVar3 * -0x100 + 0xfa94) - (uint)*pbVar23;
          local_28 = local_28 + 2;
        }
        if (0xbf < (int)(*(int *)(param_1 + 0x114) - (int)puVar4 & 0xfffffffcU)) {
          return 0x82;
        }
        **(int **)(param_1 + 0x114) = uVar14 << sVar17;
        *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 4;
        goto LAB_006ba15a;
      }
      uStack_24 = (*(int *)(param_1 + 0x114) - param_1) + -0x50 >> 2;
      pbVar25 = pbVar23;
      switch(bVar3) {
      case 1:
switchD_006b8c5c_caseD_1:
        local_28 = pbVar25;
        param_3 = 0x13;
        break;
      default:
        goto switchD_006b8c5c_caseD_2;
      case 3:
switchD_006b8c5c_caseD_3:
        local_28 = pbVar25;
        param_3 = 0x14;
        break;
      case 4:
        param_3 = 3;
        local_28 = pbVar23;
        break;
      case 5:
        param_3 = 4;
        local_28 = pbVar23;
        break;
      case 6:
        param_3 = 5;
        local_28 = pbVar23;
        break;
      case 7:
        param_3 = 6;
        local_28 = pbVar23;
        break;
      case 8:
        param_3 = 7;
        local_28 = pbVar23;
        break;
      case 9:
        param_3 = 0x35;
        local_28 = pbVar23;
        break;
      case 10:
        param_3 = 0x31;
        local_28 = pbVar23;
        break;
      case 0xb:
        param_3 = 0x33;
        local_28 = pbVar23;
        break;
      case 0xc:
        if (local_1c <= pbVar23) {
          return 3;
        }
        local_28 = local_28 + 2;
        pbVar25 = local_28;
        switch(*pbVar23) {
        case 0:
          param_3 = 0x19;
          break;
        case 1:
          goto switchD_006b8c5c_caseD_3;
        case 2:
          goto switchD_006b8c5c_caseD_1;
        case 3:
          param_3 = 0x2c;
          break;
        case 4:
          param_3 = 0x2d;
          break;
        case 5:
          param_3 = 0x2e;
          break;
        case 6:
          param_3 = 0x38;
          break;
        case 7:
          param_3 = 0x39;
          break;
        case 8:
          param_3 = 0x2a;
          break;
        case 9:
          param_3 = 0x1a;
          break;
        case 10:
          param_3 = 0x1b;
          break;
        case 0xb:
          param_3 = 0x1c;
          break;
        case 0xc:
          param_3 = 0x1d;
          break;
        case 0xd:
          param_3 = 0x2b;
          break;
        case 0xe:
          param_3 = 0x1e;
          break;
        case 0xf:
          param_3 = 0x2f;
          break;
        case 0x10:
          param_3 = 0x36;
          break;
        case 0x11:
          param_3 = 0x37;
          break;
        case 0x12:
          param_3 = 0x23;
          break;
        default:
          goto switchD_006b8c5c_caseD_2;
        case 0x14:
          param_3 = 0x28;
          break;
        case 0x15:
          param_3 = 0x29;
          break;
        case 0x16:
          param_3 = 0x30;
          break;
        case 0x17:
          param_3 = 0x1f;
          break;
        case 0x18:
          param_3 = 0x20;
          break;
        case 0x1a:
          param_3 = 0x21;
          break;
        case 0x1b:
          param_3 = 0x27;
          break;
        case 0x1c:
          param_3 = 0x24;
          break;
        case 0x1d:
          param_3 = 0x25;
          break;
        case 0x1e:
          param_3 = 0x26;
          break;
        case 0x21:
          param_3 = 0x3a;
          break;
        case 0x22:
          param_3 = 0xf;
          break;
        case 0x23:
          param_3 = 0xe;
          break;
        case 0x24:
          param_3 = 0x10;
          break;
        case 0x25:
          param_3 = 0x11;
        }
        break;
      case 0xd:
        param_3 = 0x34;
        local_28 = pbVar23;
        break;
      case 0xe:
        param_3 = 0x12;
        local_28 = pbVar23;
        break;
      case 0x10:
        param_3 = 0x22;
        local_28 = pbVar23;
        break;
      case 0x12:
        param_3 = 0x15;
        local_28 = pbVar23;
        break;
      case 0x13:
        param_3 = 0x17;
        local_28 = pbVar23;
        break;
      case 0x14:
        param_3 = 0x18;
        local_28 = pbVar23;
        break;
      case 0x15:
        param_3 = 1;
        local_28 = pbVar23;
        break;
      case 0x16:
        param_3 = 2;
        local_28 = pbVar23;
        break;
      case 0x17:
        param_3 = 0x16;
        local_28 = pbVar23;
        break;
      case 0x18:
        param_3 = 10;
        local_28 = pbVar23;
        break;
      case 0x19:
        param_3 = 0xb;
        local_28 = pbVar23;
        break;
      case 0x1a:
        param_3 = 0xd;
        local_28 = pbVar23;
        break;
      case 0x1b:
        param_3 = 8;
        local_28 = pbVar23;
        break;
      case 0x1d:
        param_3 = 0x32;
        local_28 = pbVar23;
        break;
      case 0x1e:
        param_3 = 0xc;
        local_28 = pbVar23;
        break;
      case 0x1f:
        param_3 = 9;
        local_28 = pbVar23;
      }
      uVar14 = (uint)(byte)(&UNK_007345ec)[param_3];
      if ((char)(&UNK_007345ec)[param_3] < '\0') {
        if ((0 < (int)uStack_24) && (*(char *)(param_1 + 0x2f0) != '\0')) {
          switch(param_3) {
          case 1:
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
            uVar14 = uStack_24 & 1;
            break;
          case 2:
          case 3:
            uVar14 = uStack_24 & 2;
            break;
          default:
            goto switchD_006b8ecc_caseD_4;
          case 0x12:
            if ((uStack_24 != 5) && (uStack_24 != 1)) goto switchD_006b8ecc_caseD_4;
            goto LAB_006b8edc;
          }
          if (uVar14 != 0) {
LAB_006b8edc:
            *(int *)(param_1 + 0x2e8) = (int)*(short *)((int)puVar4 + 2) + *(int *)(param_1 + 0x2ec)
            ;
            if (*(char *)(param_1 + 0x2f1) != '\0') {
              return 0;
            }
            uStack_24 = uStack_24 - 1;
          }
        }
switchD_006b8ecc_caseD_4:
        *(undefined1 *)(param_1 + 0x2f0) = 0;
        uVar14 = 0;
      }
      uVar14 = uVar14 & 0xf;
      if ((int)uStack_24 < (int)uVar14) {
        return 0x81;
      }
      puVar11 = (uint *)(*(int *)(param_1 + 0x114) + uVar14 * -4);
      uVar14 = uStack_24 - uVar14;
      switch(param_3) {
      case 1:
        FUN_006b8790();
        *(undefined1 *)(iVar22 + 0x40) = 0;
        uVar10 = uVar10 + puVar11[-2];
        iVar21 = iVar21 + puVar11[-1];
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 2:
        FUN_006b8790();
        *(undefined1 *)(iVar22 + 0x40) = 0;
        uVar10 = uVar10 + puVar11[-1];
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 3:
        FUN_006b8790();
        *(undefined1 *)(iVar22 + 0x40) = 0;
        iVar21 = iVar21 + puVar11[-1];
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 4:
        iVar12 = FUN_006b8760(uVar10,iVar21);
        if (iVar12 != 0) {
          return 0;
        }
        iVar12 = FUN_006b8660();
        if (iVar12 != 0) {
          return 0;
        }
        if ((int)uVar14 < 2) {
          return 0x81;
        }
        puVar11 = puVar11 + -(uVar14 & 0xfffffffe);
        if (puVar11 < *(uint **)(param_1 + 0x114)) {
          do {
            uVar10 = uVar10 + *puVar11;
            iVar21 = iVar21 + puVar11[1];
            FUN_006b8690(1);
            puVar11 = puVar11 + 2;
          } while (puVar11 < *(uint **)(param_1 + 0x114));
        }
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 5:
      case 6:
        param_3 = (uint)(param_3 == 5);
        if ((int)uVar14 < 1) {
          return 0x81;
        }
        iVar12 = FUN_006b8760(uVar10,iVar21);
        if (iVar12 != 0) {
          return 0;
        }
        iVar12 = FUN_006b8660();
        if (iVar12 != 0) {
          return 0;
        }
        puVar11 = puVar4;
        if (puVar4 < *(uint **)(param_1 + 0x114)) {
          do {
            if (param_3 == 0) {
              iVar21 = iVar21 + *puVar11;
            }
            else {
              uVar10 = uVar10 + *puVar11;
            }
            iVar12 = FUN_006b86d0(uVar10,iVar21);
            if (iVar12 != 0) {
              return 0;
            }
            param_3 = param_3 ^ 1;
            puVar11 = puVar11 + 1;
          } while (puVar11 < *(uint **)(param_1 + 0x114));
        }
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 7:
        if ((int)uVar14 < 6) {
          return 0x81;
        }
        param_3 = ((int)uVar14 / 6) * 6;
        iVar12 = FUN_006b8760(uVar10,iVar21);
        if (iVar12 != 0) {
          return 0;
        }
        iVar12 = FUN_006b8660();
        if (iVar12 != 0) {
          return 0;
        }
        puVar11 = puVar11 + -param_3;
        if (puVar11 < *(uint **)(param_1 + 0x114)) {
          do {
            uVar14 = *puVar11;
            uVar13 = puVar11[1];
            FUN_006b8690(0);
            uVar6 = puVar11[2];
            uVar7 = puVar11[3];
            FUN_006b8690(0);
            uVar10 = uVar10 + uVar14 + uVar6 + puVar11[4];
            iVar21 = iVar21 + uVar13 + uVar7 + puVar11[5];
            FUN_006b8690(1);
            puVar11 = puVar11 + 6;
          } while (puVar11 < *(uint **)(param_1 + 0x114));
        }
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 8:
        if ((int)uVar14 < 4) {
          return 0x81;
        }
        param_3 = uVar14 & 0x80000003;
        if ((int)param_3 < 0) {
          param_3 = (param_3 - 1 | 0xfffffffc) + 1;
        }
        param_3 = uVar14 - param_3;
        if (uVar14 != param_3 && -1 < (int)(uVar14 - param_3)) {
          param_3 = param_3 + 1;
        }
        iVar12 = FUN_006b8760(uVar10,iVar21);
        if (iVar12 != 0) {
          return 0;
        }
        puVar11 = puVar11 + -param_3;
        if ((param_3 & 1) != 0) {
          iVar21 = iVar21 + *puVar11;
          puVar11 = puVar11 + 1;
        }
        iVar12 = FUN_006b8660();
        if (iVar12 != 0) {
          return 0;
        }
        if (puVar11 < *(uint **)(param_1 + 0x114)) {
          puVar11 = puVar11 + 2;
          do {
            uVar14 = puVar11[-2];
            FUN_006b8690(0);
            uVar13 = puVar11[-1];
            iVar21 = iVar21 + *puVar11;
            FUN_006b8690(0);
            uVar10 = uVar10 + uVar14 + uVar13 + puVar11[1];
            FUN_006b8690(1);
            puVar9 = puVar11 + 2;
            puVar11 = puVar11 + 4;
          } while (puVar9 < *(uint **)(param_1 + 0x114));
        }
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 9:
      case 0xc:
        iVar12 = FUN_006b8760(uVar10,iVar21);
        if (iVar12 != 0) {
          return 0;
        }
        if ((int)uVar14 < 4) {
          return 0x81;
        }
        uStack_24 = uVar14 & 0x80000003;
        if ((int)uStack_24 < 0) {
          uStack_24 = (uStack_24 - 1 | 0xfffffffc) + 1;
        }
        uStack_24 = uVar14 - uStack_24;
        if (uVar14 != uStack_24 && -1 < (int)(uVar14 - uStack_24)) {
          uStack_24 = uStack_24 + 1;
        }
        puVar11 = puVar11 + -uStack_24;
        iVar12 = FUN_006b8660();
        if (iVar12 != 0) {
          return 0x81;
        }
        param_3 = (uint)(param_3 == 9);
        while (3 < (int)uStack_24) {
          uStack_24 = uStack_24 - 4;
          if (param_3 == 0) {
            uVar14 = *puVar11;
            FUN_006b8690(0);
            uVar13 = puVar11[1];
            iVar21 = iVar21 + uVar14 + puVar11[2];
            FUN_006b8690(0);
            uVar10 = uVar10 + uVar13 + puVar11[3];
            if (uStack_24 == 1) {
              iVar21 = iVar21 + puVar11[4];
            }
          }
          else {
            uVar14 = *puVar11;
            FUN_006b8690(0);
            uVar10 = uVar10 + uVar14 + puVar11[1];
            uVar14 = puVar11[2];
            FUN_006b8690(0);
            iVar21 = iVar21 + uVar14 + puVar11[3];
            if (uStack_24 == 1) {
              uVar10 = uVar10 + puVar11[4];
            }
          }
          FUN_006b8690(1);
          param_3 = param_3 ^ 1;
          puVar11 = puVar11 + 4;
        }
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 10:
        if ((int)uVar14 < 8) {
          return 0x81;
        }
        iVar12 = ((int)(uVar14 - 2) / 6) * 6;
        param_3 = iVar12 / 6;
        iVar18 = FUN_006b8760(uVar10,iVar21);
        if (iVar18 != 0) {
          return 0;
        }
        iVar18 = FUN_006b8660();
        if (iVar18 != 0) {
          return 0;
        }
        puVar11 = puVar11 + -(iVar12 + 2);
        for (; 0 < (int)param_3; param_3 = param_3 + -1) {
          uVar14 = *puVar11;
          uVar13 = puVar11[1];
          FUN_006b8690(0);
          uVar6 = puVar11[2];
          uVar7 = puVar11[3];
          FUN_006b8690(0);
          uVar10 = uVar10 + uVar14 + uVar6 + puVar11[4];
          iVar21 = iVar21 + uVar13 + uVar7 + puVar11[5];
          FUN_006b8690(1);
          puVar11 = puVar11 + 6;
        }
        uVar10 = uVar10 + *puVar11;
        iVar21 = iVar21 + puVar11[1];
        goto LAB_006b9770;
      case 0xb:
        if ((int)uVar14 < 8) {
          return 0x81;
        }
        param_3 = (int)((uVar14 & 0xfffffffe) - 6) / 2;
        iVar12 = FUN_006b8760(uVar10,iVar21);
        if (iVar12 != 0) {
          return 0;
        }
        iVar12 = FUN_006b8660();
        if (iVar12 != 0) {
          return 0;
        }
        puVar11 = puVar11 + -(uVar14 & 0xfffffffe);
        for (; 0 < (int)param_3; param_3 = param_3 + -1) {
          uVar10 = uVar10 + *puVar11;
          iVar21 = iVar21 + puVar11[1];
          FUN_006b8690(1);
          puVar11 = puVar11 + 2;
        }
        uVar14 = *puVar11;
        uVar13 = puVar11[1];
        FUN_006b8690(0);
        uVar6 = puVar11[2];
        uVar7 = puVar11[3];
        FUN_006b8690(0);
        uVar10 = uVar10 + uVar14 + uVar6 + puVar11[4];
        iVar21 = iVar21 + uVar13 + uVar7 + puVar11[5];
        FUN_006b8690(1);
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 0xd:
        if ((int)uVar14 < 4) {
          return 0x81;
        }
        param_3 = uVar14 & 0x80000003;
        if ((int)param_3 < 0) {
          param_3 = (param_3 - 1 | 0xfffffffc) + 1;
        }
        param_3 = uVar14 - param_3;
        if (uVar14 != param_3 && -1 < (int)(uVar14 - param_3)) {
          param_3 = param_3 + 1;
        }
        iVar12 = FUN_006b8760(uVar10,iVar21);
        if (iVar12 != 0) {
          return 0;
        }
        puVar11 = puVar11 + -param_3;
        if ((param_3 & 1) != 0) {
          uVar10 = uVar10 + *puVar11;
          puVar11 = puVar11 + 1;
        }
        iVar12 = FUN_006b8660();
        if (iVar12 != 0) {
          return 0;
        }
        if (puVar11 < *(uint **)(param_1 + 0x114)) {
          puVar11 = puVar11 + 2;
          do {
            uVar14 = puVar11[-2];
            FUN_006b8690(0);
            uVar10 = uVar10 + puVar11[-1];
            uVar13 = *puVar11;
            FUN_006b8690(0);
            iVar21 = iVar21 + uVar14 + uVar13 + puVar11[1];
            FUN_006b8690(1);
            puVar9 = puVar11 + 2;
            puVar11 = puVar11 + 4;
          } while (puVar9 < *(uint **)(param_1 + 0x114));
        }
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 0xe:
        iVar12 = FUN_006b8760(uVar10,iVar21);
        if (iVar12 != 0) {
          return 0;
        }
        iVar12 = FUN_006b8660();
        if (iVar12 != 0) {
          return 0;
        }
        param_3 = 6;
        do {
          uVar10 = uVar10 + *puVar11;
          iVar21 = iVar21 + puVar11[1];
          if ((param_3 == 4) || (param_3 == 1)) {
            uVar14 = 1;
          }
          else {
            uVar14 = param_3 & 0xffffff00;
          }
          FUN_006b8690(uVar14);
          puVar11 = puVar11 + 2;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 0xf:
        iVar12 = FUN_006b8760(uVar10,iVar21);
        if (iVar12 != 0) {
          return 0;
        }
        iVar12 = FUN_006b8660();
        if (iVar12 != 0) {
          return 0;
        }
        uVar14 = *puVar11;
        param_3 = iVar21;
        FUN_006b8690(0);
        uVar13 = puVar11[1];
        FUN_006b8690(0);
        uVar6 = puVar11[3];
        FUN_006b8690(1);
        uVar7 = puVar11[4];
        FUN_006b8690(0);
        iVar21 = param_3;
        uVar8 = puVar11[5];
        FUN_006b8690(0);
        uVar10 = uVar10 + uVar14 + uVar13 + uVar6 + uVar7 + uVar8 + puVar11[6];
        FUN_006b8690(1);
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 0x10:
        iVar12 = FUN_006b8760(uVar10,iVar21);
        if (iVar12 != 0) {
          return 0;
        }
        iVar12 = FUN_006b8660();
        if (iVar12 != 0) {
          return 0;
        }
        uVar14 = *puVar11;
        param_3 = iVar21;
        FUN_006b8690(0);
        uVar13 = puVar11[2];
        FUN_006b8690(0);
        uVar6 = puVar11[4];
        FUN_006b8690(1);
        uVar7 = puVar11[5];
        FUN_006b8690(0);
        uVar8 = puVar11[6];
        FUN_006b8690(0);
        iVar21 = param_3;
        uVar10 = uVar10 + uVar14 + uVar13 + uVar6 + uVar7 + uVar8 + puVar11[8];
        FUN_006b8690(1);
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 0x11:
        iVar12 = FUN_006b8760(uVar10,iVar21);
        if (iVar12 != 0) {
          return 0;
        }
        iVar12 = FUN_006b8660();
        if (iVar12 != 0) {
          return 0;
        }
        iVar12 = puVar11[8] + puVar11[6] + puVar11[4] + puVar11[2] + *puVar11;
        iVar18 = puVar11[9] + puVar11[7] + puVar11[5] + puVar11[3] + puVar11[1];
        if (iVar12 < 0) {
          iVar12 = -iVar12;
        }
        if (iVar18 < 0) {
          iVar18 = -iVar18;
        }
        param_3 = 5;
        iVar20 = iVar21;
        uStack_8 = uVar10;
        do {
          uVar10 = uVar10 + *puVar11;
          iVar20 = iVar20 + puVar11[1];
          FUN_006b8690(param_3 == 3);
          param_3 = param_3 + -1;
          puVar11 = puVar11 + 2;
        } while (0 < (int)param_3);
        if (iVar18 < iVar12) {
          uVar10 = uVar10 + *puVar11;
        }
        else {
          iVar21 = iVar20 + *puVar11;
          uVar10 = uStack_8;
        }
LAB_006b9770:
        FUN_006b8690(1);
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 0x12:
        if (3 < (int)uVar14) {
          uVar15 = *(undefined4 *)(param_1 + 0x2e8);
          uVar16 = FUN_006b8910(0,puVar11[-4],puVar11[-3],(int)*(short *)((int)puVar11 + -2));
          *(undefined4 *)(param_1 + 0x2e8) = uVar15;
          return uVar16;
        }
        FUN_006b8790();
        if (puVar5 != (undefined4 *)0x0) {
          iVar21 = (*(code *)puVar5[2])(*puVar5,(int)*(short *)(*(int *)(iVar22 + 0x14) + 2));
          if (iVar21 != 0) {
            return 3;
          }
          (*(code *)puVar5[6])
                    (*puVar5,*(undefined4 *)(iVar22 + 0x14),*(undefined4 *)(iVar22 + 0x48),
                     *(undefined4 *)(param_1 + 0x398));
        }
        FUN_0068f0c0(*(undefined4 *)(iVar22 + 0xc));
        return 0;
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
        if (puVar5 != (undefined4 *)0x0) {
          if ((param_3 == 0x13) || (param_3 == 0x15)) {
            uVar15 = 1;
          }
          else {
            uVar15 = 0;
          }
          (*(code *)puVar5[3])(*puVar5,uVar15,(int)uVar14 / 2,puVar11 + -(uVar14 & 0xfffffffe));
        }
        *(int *)(param_1 + 0x2f4) = *(int *)(param_1 + 0x2f4) + (int)uVar14 / 2;
      case 0x35:
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 0x17:
      case 0x18:
        if (0 < (int)uVar14) {
          if (puVar5 != (undefined4 *)0x0) {
            (*(code *)puVar5[3])(*puVar5,0,(int)uVar14 / 2,puVar11 + -(uVar14 & 0xfffffffe));
          }
          *(int *)(param_1 + 0x2f4) = *(int *)(param_1 + 0x2f4) + (int)uVar14 / 2;
        }
        iVar12 = *(int *)(param_1 + 0x2f4);
        if (local_1c <= local_28 + (iVar12 + 7 >> 3)) {
          return 3;
        }
        if (puVar5 != (undefined4 *)0x0) {
          if (param_3 == 0x17) {
            (*(code *)puVar5[4])
                      (*puVar5,(int)*(short *)(*(int *)(iVar22 + 0x14) + 2),iVar12,local_28);
          }
          else {
            (*(code *)puVar5[5])(*puVar5,iVar12,local_28);
          }
        }
        local_28 = local_28 + (*(int *)(param_1 + 0x2f4) + 7 >> 3);
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 0x19:
      case 0x23:
        goto switchD_006b8f43_caseD_19;
      case 0x1a:
        if ((int)*puVar11 < 0) {
          *puVar11 = -*puVar11;
        }
      case 0x37:
        *(uint **)(param_1 + 0x114) = puVar11 + 1;
        break;
      case 0x1b:
        *puVar11 = *puVar11 + puVar11[1];
        *(uint **)(param_1 + 0x114) = puVar11 + 1;
        break;
      case 0x1c:
        *puVar11 = *puVar11 - puVar11[1];
        *(uint **)(param_1 + 0x114) = puVar11 + 1;
        break;
      case 0x1d:
        uVar14 = FUN_0068ec40(*puVar11,puVar11[1]);
        *puVar11 = uVar14;
        *(uint **)(param_1 + 0x114) = puVar11 + 1;
        break;
      case 0x1e:
        *puVar11 = -*puVar11;
        *(uint **)(param_1 + 0x114) = puVar11 + 1;
        break;
      case 0x1f:
        uVar14 = local_10;
        if (0x7fff < (int)local_10) {
          uVar14 = local_10 + 1;
        }
        *puVar11 = uVar14;
        local_10 = FUN_0068ebc0(local_10,0x10000 - local_10);
        if (local_10 == 0) {
          local_10 = 0x2873;
        }
        *(uint **)(param_1 + 0x114) = puVar11 + 1;
        break;
      case 0x20:
        uVar14 = FUN_0068ebc0(*puVar11,puVar11[1]);
        *puVar11 = uVar14;
        *(uint **)(param_1 + 0x114) = puVar11 + 1;
        break;
      case 0x21:
        param_3 = *puVar11;
        if ((int)param_3 < 1) {
          *puVar11 = 0;
          *(uint **)(param_1 + 0x114) = puVar11 + 1;
        }
        else {
          iVar12 = FUN_0068ec40(param_3,param_3);
          uVar14 = (int)(iVar12 + 1 + param_3) >> 1;
          bVar26 = uVar14 != param_3;
          param_3 = uVar14;
          if (bVar26) {
            do {
              uStack_8 = param_3;
              iVar12 = FUN_0068ec40(*puVar11,param_3);
              param_3 = (int)(iVar12 + 1 + param_3) >> 1;
            } while (param_3 != uStack_8);
          }
          *puVar11 = param_3;
          *(uint **)(param_1 + 0x114) = puVar11 + 1;
        }
        break;
      default:
        return 7;
      case 0x24:
        uVar14 = *puVar11;
        *puVar11 = puVar11[1];
        puVar11[1] = uVar14;
        *(uint **)(param_1 + 0x114) = puVar11 + 2;
        break;
      case 0x25:
        iVar12 = (int)*(short *)((int)puVar11 + 2);
        if (iVar12 < 0) {
          iVar12 = 0;
        }
        else if ((int)(uVar14 - 2) < iVar12) {
          iVar12 = uVar14 - 2;
        }
        *puVar11 = *(uint *)((int)puVar11 - (iVar12 * 4 + 4));
        *(uint **)(param_1 + 0x114) = puVar11 + 1;
        break;
      case 0x26:
        iVar12 = (int)*(short *)((int)puVar11 + 2);
        iVar18 = (int)*(short *)((int)puVar11 + 6);
        if (iVar12 < 1) {
          iVar12 = 1;
        }
        puVar11 = puVar11 + -iVar12;
        if (puVar11 < puVar4) {
          return 0x81;
        }
        if (iVar18 < 0) {
          uStack_24 = -iVar18;
          do {
            uVar14 = *puVar11;
            iVar18 = iVar12 + -1;
            puVar24 = puVar11;
            puVar9 = puVar11;
            if (0 < iVar12 + -1) {
              for (; iVar22 = local_c, iVar18 != 0; iVar18 = iVar18 + -1) {
                *puVar24 = puVar9[1];
                puVar24 = puVar24 + 1;
                puVar9 = puVar9 + 1;
              }
            }
            uStack_24 = uStack_24 + -1;
            puVar11[iVar12 + -1] = uVar14;
          } while (uStack_24 != 0);
        }
        else if (0 < iVar18) {
          uStack_8 = iVar12 - 2;
          do {
            uVar14 = puVar11[iVar12 + -1];
            for (uVar13 = uStack_8; -1 < (int)uVar13; uVar13 = uVar13 - 1) {
              puVar11[uVar13 + 1] = puVar11[uVar13];
            }
            iVar18 = iVar18 + -1;
            *puVar11 = uVar14;
          } while (0 < iVar18);
          *(uint **)(param_1 + 0x114) = puVar11 + iVar12;
          break;
        }
        *(uint **)(param_1 + 0x114) = puVar11 + iVar12;
        break;
      case 0x27:
        puVar11[1] = *puVar11;
        *(uint **)(param_1 + 0x114) = puVar11 + 2;
        break;
      case 0x28:
        if (0x1f < (uint)(int)*(short *)((int)puVar11 + 6)) goto switchD_006b8f43_caseD_19;
        *(uint *)(param_1 + 0x2f8 + *(short *)((int)puVar11 + 6) * 4) = *puVar11;
        *(uint **)(param_1 + 0x114) = puVar11;
        break;
      case 0x29:
        uVar14 = 0;
        if ((uint)(int)*(short *)((int)puVar11 + 2) < 0x20) {
          uVar14 = *(uint *)(param_1 + 0x2f8 + *(short *)((int)puVar11 + 2) * 4);
        }
        *puVar11 = uVar14;
        *(uint **)(param_1 + 0x114) = puVar11 + 1;
        break;
      case 0x2c:
        if ((*puVar11 == 0) || (puVar11[1] == 0)) {
          *puVar11 = 0;
          *(uint **)(param_1 + 0x114) = puVar11 + 1;
        }
        else {
          *puVar11 = 0x10000;
          *(uint **)(param_1 + 0x114) = puVar11 + 1;
        }
        break;
      case 0x2d:
        if ((*puVar11 == 0) && (puVar11[1] == 0)) {
          *puVar11 = 0;
          *(uint **)(param_1 + 0x114) = puVar11 + 1;
        }
        else {
          *puVar11 = 0x10000;
          *(uint **)(param_1 + 0x114) = puVar11 + 1;
        }
        break;
      case 0x2f:
        *puVar11 = (-(uint)(*puVar11 != 0) & 0xffff0000) + 0x10000;
        *(uint **)(param_1 + 0x114) = puVar11 + 1;
        break;
      case 0x30:
        if ((int)puVar11[3] < (int)puVar11[2]) {
          *puVar11 = puVar11[1];
        }
        *(uint **)(param_1 + 0x114) = puVar11 + 1;
        break;
      case 0x31:
        uVar14 = (int)*(short *)((int)puVar11 + 2) + *(int *)(param_1 + 0x380);
        if ((*(uint *)(param_1 + 0x378) <= uVar14) ||
           (0x1f < ((int)local_20 + (-0x118 - param_1)) / 0xc)) {
switchD_006b8c5c_caseD_2:
          return 3;
        }
        local_20[2] = (int)local_28;
        piVar19 = local_20 + 3;
        *piVar19 = *(int *)(*(int *)(param_1 + 0x388) + uVar14 * 4);
        iVar12 = *piVar19;
        local_20[4] = *(int *)(*(int *)(param_1 + 0x388) + 4 + uVar14 * 4);
        local_20[5] = iVar12;
        if (iVar12 == 0) {
          return 3;
        }
        if (local_20[4] == iVar12) {
          return 3;
        }
        *(int **)(param_1 + 0x2a4) = piVar19;
        local_28 = (byte *)*piVar19;
        local_1c = (byte *)local_20[4];
        *(uint **)(param_1 + 0x114) = puVar11;
        local_20 = piVar19;
        break;
      case 0x32:
        uVar14 = (int)*(short *)((int)puVar11 + 2) + *(int *)(param_1 + 900);
        if (*(uint *)(param_1 + 0x37c) <= uVar14) {
          return 3;
        }
        if (0x1f < ((int)local_20 + (-0x118 - param_1)) / 0xc) {
          return 3;
        }
        local_20[2] = (int)local_28;
        piVar19 = local_20 + 3;
        *piVar19 = *(int *)(*(int *)(param_1 + 0x38c) + uVar14 * 4);
        iVar12 = *piVar19;
        local_20[4] = *(int *)(*(int *)(param_1 + 0x38c) + 4 + uVar14 * 4);
        local_20[5] = iVar12;
        if (iVar12 == 0) {
          return 3;
        }
        if (local_20[4] == iVar12) {
          return 3;
        }
        *(int **)(param_1 + 0x2a4) = piVar19;
        local_28 = (byte *)*piVar19;
        local_1c = (byte *)local_20[4];
        *(uint **)(param_1 + 0x114) = puVar11;
        local_20 = piVar19;
        break;
      case 0x33:
        if (*(uint *)(param_1 + 0x2a4) <= param_1 + 0x118U) {
          return 3;
        }
        *(int *)(param_1 + 0x2a4) = *(int *)(param_1 + 0x2a4) + -0xc;
        local_20 = *(int **)(param_1 + 0x2a4);
        local_28 = (byte *)local_20[2];
        local_1c = (byte *)local_20[1];
        goto switchD_006b8f43_caseD_19;
      case 0x34:
        *(int *)(param_1 + 0x2e8) = (int)*(short *)((int)puVar11 + 6) + *(int *)(param_1 + 0x2ec);
        *(uint *)(param_1 + 0x20) = *puVar11;
        *(undefined4 *)(param_1 + 0x24) = 0;
        uVar10 = *(int *)(param_1 + 0x18) + *puVar11;
        iVar21 = *(int *)(param_1 + 0x1c);
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 0x36:
        puVar11 = puVar11 + (-2 - *(short *)((int)puVar11 + -6));
        if (puVar11 < puVar4) {
          return 0x81;
        }
switchD_006b8f43_caseD_19:
        *(uint **)(param_1 + 0x114) = puVar11;
        break;
      case 0x38:
        uVar15 = FUN_006b8910(*puVar11,puVar11[1],puVar11[2],(int)*(short *)((int)puVar11 + 0x12));
        FUN_0068f0c0(*(undefined4 *)(local_c + 0xc));
        return uVar15;
      case 0x39:
        *(int *)(param_1 + 0x2e8) = (int)*(short *)((int)puVar11 + 10) + *(int *)(param_1 + 0x2ec);
        *(uint *)(param_1 + 0x20) = *puVar11;
        *(uint *)(param_1 + 0x24) = puVar11[1];
        uVar10 = *(int *)(param_1 + 0x18) + *puVar11;
        iVar21 = *(int *)(param_1 + 0x1c) + puVar11[1];
        *(uint **)(param_1 + 0x114) = puVar4;
        break;
      case 0x3a:
        uVar10 = *(int *)(param_1 + 0x18) + *puVar11;
        iVar21 = puVar11[1] + *(int *)(param_1 + 0x1c);
        *(uint **)(param_1 + 0x114) = puVar4;
      }
LAB_006ba15a:
    } while (local_28 < local_1c);
  }
  return 0;
}


/* FUN_006ba4b0 @ 006ba4b0  kind=gamemisc  attributed-by=none  size=143 */

void FUN_006ba4b0(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint in_ECX;
  int iVar7;
  int in_EDX;
  undefined2 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 auStack_400 [2];
  char cStack_3fe;
  char local_3fd;
  undefined4 uStack_3fc;
  uint local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  uint local_3ec;
  int iStack_3e8;
  undefined2 *puStack_3e4;
  uint uStack_3e0;
  int *local_3dc;
  uint uStack_3d8;
  undefined1 auStack_3d4 [32];
  int iStack_3b4;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined1 uStack_392;
  int iStack_390;
  undefined4 uStack_ec;
  undefined1 uStack_e3;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)auStack_400;
  local_3f8 = *(uint *)(in_EDX + 4);
  iVar9 = *(int *)(local_3f8 + 0x2b4);
  local_3dc = param_1;
  local_3fd = '\0';
  local_3ec = in_ECX;
  if ((*(int *)(iVar9 + 0x5ac) == 0xffff) || (*(int *)(iVar9 + 0x48c) == 0)) {
    if (*(uint *)(iVar9 + 0xc) <= in_ECX) goto LAB_006ba516;
  }
  else if ((in_ECX != 0) && (local_3ec = FUN_006b66f0(), local_3ec == 0)) {
LAB_006ba516:
    __security_check_cookie(local_4 ^ (uint)auStack_400);
    return;
  }
  if ((param_2 & 0x400) != 0) {
    param_2 = param_2 | 3;
  }
  *(undefined4 *)(in_EDX + 0xa4) = 0x10000;
  *(undefined4 *)(in_EDX + 0xa8) = 0x10000;
  if (param_1 != (int *)0x0) {
    *(int *)(in_EDX + 0xa4) = param_1[4];
    *(int *)(in_EDX + 0xa8) = param_1[5];
    iVar3 = *(int *)(*param_1 + 0x214);
    uStack_3fc = *(undefined4 *)(*param_1 + 0x68);
    if ((((param_1[0xb] != -1) && (*(int *)(iVar3 + 0x8c) != 0)) && ((param_2 & 8) == 0)) &&
       (iVar3 = (**(code **)(iVar3 + 0x68))
                          (local_3f8,param_1[0xb],local_3ec,param_2,uStack_3fc,in_EDX + 0x4c,
                           &uStack_3f4), iVar3 == 0)) {
      *(undefined4 *)(in_EDX + 0x6c) = 0;
      *(uint *)(in_EDX + 0x18) = (uStack_3f4 >> 8 & 0xff) << 6;
      *(uint *)(in_EDX + 0x1c) = (uStack_3f4 & 0xff) << 6;
      *(int *)(in_EDX + 0x20) = (int)uStack_3f4._2_1_ << 6;
      *(int *)(in_EDX + 0x24) = (int)uStack_3f4._3_1_ << 6;
      *(uint *)(in_EDX + 0x28) = (uStack_3f0 & 0xff) << 6;
      *(int *)(in_EDX + 0x2c) = (int)uStack_3f0._1_1_ << 6;
      *(int *)(in_EDX + 0x30) = (int)uStack_3f0._2_1_ << 6;
      *(uint *)(in_EDX + 0x34) = (uStack_3f0 >> 0x18) << 6;
      *(undefined4 *)(in_EDX + 0x48) = 0x62697473;
      if ((param_2 & 0x10) == 0) {
        *(int *)(in_EDX + 100) = (int)uStack_3f4._2_1_;
        *(int *)(in_EDX + 0x68) = (int)uStack_3f4._3_1_;
      }
      else {
        *(int *)(in_EDX + 100) = (int)uStack_3f0._1_1_;
        *(int *)(in_EDX + 0x68) = (int)uStack_3f0._2_1_;
      }
      goto code_r0x006bac69;
    }
  }
  if ((param_2 & 0x4000) != 0) goto code_r0x006bac69;
  if (*(int *)(iVar9 + 0x764) == 0) {
    iStack_34 = *(int *)(iVar9 + 0x55c);
    iStack_30 = *(int *)(iVar9 + 0x560);
    iStack_2c = *(int *)(iVar9 + 0x564);
    iStack_28 = *(int *)(iVar9 + 0x568);
    uStack_3f4 = *(uint *)(iVar9 + 0x570);
    uStack_3f0 = *(uint *)(iVar9 + 0x574);
  }
  else {
    uVar4 = func_0x006b65e0(local_3ec);
    if (*(uint *)(iVar9 + 0x764) <= (uVar4 & 0xff)) {
      uVar4 = (uint)(byte)(*(char *)(iVar9 + 0x764) - 1);
    }
    iVar3 = *(int *)(iVar9 + 0x56c);
    iVar7 = *(int *)(iVar9 + 0x768 + (uVar4 & 0xff) * 4);
    iVar1 = *(int *)(iVar7 + 0x40);
    iStack_34 = *(int *)(iVar7 + 0x30);
    iStack_30 = *(int *)(iVar7 + 0x34);
    iStack_2c = *(int *)(iVar7 + 0x38);
    iStack_28 = *(int *)(iVar7 + 0x3c);
    iVar7 = *(int *)(iVar9 + 0x768 + (uVar4 & 0xff) * 4);
    uStack_3f4 = *(uint *)(iVar7 + 0x44);
    uStack_3f0 = *(uint *)(iVar7 + 0x48);
    param_1 = local_3dc;
    if (iVar3 != iVar1) {
      uVar5 = FUN_0068ea60(*(undefined4 *)(in_EDX + 0xa4),iVar3,iVar1);
      *(undefined4 *)(in_EDX + 0xa4) = uVar5;
      uVar5 = FUN_0068ea60(*(undefined4 *)(in_EDX + 0xa8),iVar3,iVar1);
      *(undefined4 *)(in_EDX + 0xa8) = uVar5;
      local_3fd = '\x01';
      param_1 = local_3dc;
    }
  }
  *(undefined2 *)(in_EDX + 0x6e) = 0;
  puStack_3e4 = (undefined2 *)(in_EDX + 0x6c);
  *puStack_3e4 = 0;
  uStack_3d8 = param_2 & 1;
  if (uStack_3d8 == 0) {
    uStack_3e0 = CONCAT31(uStack_3e0._1_3_,1);
    if ((param_2 & 2) != 0) goto code_r0x006ba76c;
  }
  else {
code_r0x006ba76c:
    uStack_3e0 = uStack_3e0 & 0xffffff00;
  }
  *(undefined4 *)(in_EDX + 0x48) = 0x6f75746c;
  func_0x006b8530(local_3f8,param_1,uStack_3e0,(int)param_2 >> 0x10 & 0xf);
  if ((param_2 & 0x100) != 0) {
    uStack_e3 = 1;
  }
  uStack_392 = 0;
  iStack_3e8 = FUN_006b8860();
  if (iStack_3e8 == 0) {
    iStack_3e8 = func_0x006b85a0(param_1,local_3ec);
    iVar3 = iStack_24;
    if (iStack_3e8 == 0) {
      iStack_3e8 = FUN_006b8b40(auStack_3d4,uStack_3fc,iStack_24);
      uVar4 = local_3f8;
      FUN_006b88c0(iVar3);
      iVar7 = 0;
      if (*(int *)(*(int *)(uVar4 + 0x80) + 0x34) == 0) {
        if (*(int *)(iVar9 + 0x4b0) == 0) goto code_r0x006ba8a8;
        iVar7 = *(int *)(*(int *)(iVar9 + 0x4b0) + local_3ec * 4) + -1 + *(int *)(iVar9 + 0x4b4);
        *(int *)(in_EDX + 0x8c) = iVar3;
      }
      else {
        *(undefined4 *)(in_EDX + 0x8c) = 0;
      }
      *(int *)(in_EDX + 0x88) = iVar7;
    }
  }
code_r0x006ba8a8:
  func_0x006b84d0();
  if (iStack_3e8 != 0) goto code_r0x006bac69;
  piVar2 = *(int **)(*(int *)(local_3f8 + 0x80) + 0x34);
  if ((piVar2 != (int *)0x0) && (*(int *)(*piVar2 + 8) != 0)) {
    iStack_24 = iStack_3b4;
    uStack_18 = uStack_3a8;
    uStack_1c = uStack_3ac;
    iStack_20 = 0;
    piVar2 = *(int **)(*(int *)(local_3f8 + 0x80) + 0x34);
    iStack_3e8 = (**(code **)(*piVar2 + 8))(piVar2[1],local_3ec,0,&iStack_24);
    iStack_3b4 = iStack_24;
    uStack_3ac = uStack_1c;
    uStack_3a8 = uStack_18;
    if (iStack_3e8 != 0) goto code_r0x006bac69;
  }
  uVar4 = local_3f8;
  if ((param_2 & 0x400) != 0) {
    iVar9 = *(int *)(in_EDX + 0x9c);
    *(int *)(in_EDX + 0x20) = iStack_3b4;
    *(undefined4 *)(in_EDX + 0x28) = uStack_ec;
    *(int *)(iVar9 + 0xc) = iStack_34;
    *(int *)(iVar9 + 0x10) = iStack_30;
    *(int *)(iVar9 + 0x14) = iStack_2c;
    *(int *)(iVar9 + 0x18) = iStack_28;
    *(uint *)(iVar9 + 0x1c) = uStack_3f4;
    *(uint *)(iVar9 + 0x20) = uStack_3f0;
    *(undefined1 *)(iVar9 + 8) = 1;
    goto code_r0x006bac69;
  }
  *(undefined4 *)(in_EDX + 0x28) = uStack_ec;
  *(undefined4 *)(in_EDX + 0x38) = uStack_ec;
  *(undefined1 *)(*(int *)(in_EDX + 0x9c) + 8) = 0;
  if (((*(char *)(local_3f8 + 0x128) == '\0') || (*(short *)(local_3f8 + 0x14e) == 0)) ||
     (*(int *)(local_3f8 + 0x150) == 0)) {
    cStack_3fe = '\0';
    if (*(short *)(local_3f8 + 0x170) == -1) {
      uVar4 = (int)*(short *)(local_3f8 + 0xdc) - (int)*(short *)(local_3f8 + 0xde);
      goto code_r0x006baa6c;
    }
    *(int *)(in_EDX + 0x34) =
         (int)*(short *)(local_3f8 + 0x1b6) - (int)*(short *)(local_3f8 + 0x1b8);
  }
  else {
    piVar2 = (int *)(local_3f8 + 0x214);
    uStack_3fc = 0;
    local_3f8 = 0;
    cStack_3fe = '\x01';
    (**(code **)(*piVar2 + 0x9c))(uVar4,1,local_3ec,&uStack_3fc,&local_3f8);
    uVar4 = local_3f8 & 0xffff;
    *(int *)(in_EDX + 0x30) = (int)(short)uStack_3fc;
code_r0x006baa6c:
    *(uint *)(in_EDX + 0x34) = uVar4;
  }
  puVar8 = puStack_3e4;
  *(undefined4 *)(in_EDX + 0x3c) = *(undefined4 *)(in_EDX + 0x34);
  *(undefined4 *)(in_EDX + 0x48) = 0x6f75746c;
  *(undefined4 *)(in_EDX + 0x7c) = 0;
  if ((local_3dc != (int *)0x0) && (*(ushort *)((int)local_3dc + 0xe) < 0x18)) {
    *(undefined4 *)(in_EDX + 0x7c) = 0x100;
  }
  *(uint *)(in_EDX + 0x7c) = *(uint *)(in_EDX + 0x7c) | 4;
  if ((((iStack_34 != 0x10000) || (iStack_28 != 0x10000)) || (iStack_30 != 0)) || (iStack_2c != 0))
  {
    FUN_00690560(puStack_3e4,&iStack_34);
  }
  uVar4 = uStack_3f0;
  if ((uStack_3f4 != 0) || (uStack_3f0 != 0)) {
    FUN_006904c0(puVar8,uStack_3f4,uStack_3f0);
  }
  iStack_24 = *(int *)(in_EDX + 0x28);
  iStack_20 = 0;
  FUN_00690500(&iStack_24,&iStack_34);
  iStack_20 = *(int *)(in_EDX + 0x34);
  *(uint *)(in_EDX + 0x28) = iStack_24 + uStack_3f4;
  iStack_24 = 0;
  FUN_00690500(&iStack_24,&iStack_34);
  *(uint *)(in_EDX + 0x34) = iStack_20 + uVar4;
  if ((uStack_3d8 == 0) || (local_3fd != '\0')) {
    uStack_3fc = *(undefined4 *)(in_EDX + 0xa8);
    puVar10 = *(undefined4 **)(puVar8 + 2);
    uVar5 = *(undefined4 *)(in_EDX + 0xa4);
    if (((char)uStack_3e0 == '\0') || (iStack_390 == 0)) {
      for (iVar9 = (int)(short)puStack_3e4[1]; 0 < iVar9; iVar9 = iVar9 + -1) {
        uVar6 = FUN_0068ebc0(*puVar10,uVar5);
        *puVar10 = uVar6;
        uVar6 = FUN_0068ebc0(puVar10[1],uStack_3fc);
        puVar10[1] = uVar6;
        puVar10 = puVar10 + 2;
      }
    }
    uVar5 = FUN_0068ebc0(*(undefined4 *)(in_EDX + 0x28),uVar5);
    *(undefined4 *)(in_EDX + 0x28) = uVar5;
    uVar5 = FUN_0068ebc0(*(undefined4 *)(in_EDX + 0x34),uStack_3fc);
    *(undefined4 *)(in_EDX + 0x34) = uVar5;
    puVar8 = puStack_3e4;
  }
  FUN_00690430(puVar8,&iStack_14);
  *(int *)(in_EDX + 0x18) = iStack_c - iStack_14;
  *(int *)(in_EDX + 0x1c) = iStack_8 - iStack_10;
  *(int *)(in_EDX + 0x20) = iStack_14;
  *(int *)(in_EDX + 0x24) = iStack_8;
  if (cStack_3fe == '\0') {
    if ((param_2 & 0x10) != 0) {
      FUN_0068f4a0((int *)(in_EDX + 0x18),*(undefined4 *)(in_EDX + 0x34));
    }
  }
  else {
    *(int *)(in_EDX + 0x2c) = iStack_14 - *(int *)(in_EDX + 0x28) / 2;
  }
code_r0x006bac69:
  __security_check_cookie(local_4 ^ (uint)auStack_400);
  return;
}


/* FUN_006bae00 @ 006bae00  kind=gamemisc  attributed-by=none  size=70 */

undefined4 FUN_006bae00(int param_1,int *param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0x25;
  }
  if (param_2 == (int *)0x0) {
    param_4 = param_4 | 3;
  }
  if ((param_4 & 1) == 0) {
    if ((param_2 != (int *)0x0) && (*param_2 != *(int *)(param_1 + 4))) {
      return 0x23;
    }
  }
  else {
    param_2 = (int *)0x0;
  }
  uVar1 = FUN_006ba4b0(param_2,param_4);
  return uVar1;
}


/* FUN_006bb190 @ 006bb190  kind=gamemisc  attributed-by=none  size=193 */

int FUN_006bb190(int *param_1,uint param_2)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  short local_8 [4];
  
  iVar1 = FUN_006908c0();
  if ((((iVar1 == 0) && (iVar1 = FUN_006bb130(local_8), iVar1 == 0)) &&
      ((local_8[0] == -0x7fff || (iVar1 = FUN_006908c0(), iVar1 == 0)))) &&
     (iVar1 = FUN_00691f30(), iVar1 == 0)) {
    iVar1 = 0;
    piVar2 = *(int **)(in_EAX + 0x20);
    for (; 3 < param_2; param_2 = param_2 - 4) {
      if (*piVar2 != *param_1) goto LAB_006bb239;
      param_1 = param_1 + 1;
      piVar2 = piVar2 + 1;
    }
    if ((param_2 != 0) &&
       (((char)*param_1 != (char)*piVar2 ||
        ((1 < param_2 &&
         ((*(char *)((int)param_1 + 1) != *(char *)((int)piVar2 + 1) ||
          ((2 < param_2 && (*(char *)((int)param_1 + 2) != *(char *)((int)piVar2 + 2))))))))))) {
LAB_006bb239:
      iVar1 = 2;
    }
    FUN_00691fe0();
  }
  return iVar1;
}


/* FUN_006bb260 @ 006bb260  kind=gamemisc  attributed-by=none  size=338 */

int FUN_006bb260(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  int *in_ECX;
  int iVar2;
  int *unaff_EDI;
  short asStack_c [2];
  int iStack_8;
  int iStack_4;
  
  (*(code *)**(undefined4 **)(in_EAX + 4))();
  unaff_EDI[0x12] = (int)in_ECX;
  unaff_EDI[0x14] = 0;
  unaff_EDI[0x13] = 0;
  unaff_EDI[0x16] = 0;
  unaff_EDI[0x15] = 0;
  *(undefined2 *)(unaff_EDI + 0x17) = 0;
  *(undefined1 *)((int)unaff_EDI + 0x5e) = 0;
  iStack_8 = FUN_006bb190("%!PS-AdobeFont",0xe);
  if ((((iStack_8 == 0) ||
       ((iStack_8 == 2 && (iStack_8 = FUN_006bb190("%!FontType",10), iStack_8 == 0)))) &&
      (iStack_8 = FUN_006908c0(), iStack_8 == 0)) &&
     (iStack_8 = FUN_006bb130(asStack_c), iStack_8 == 0)) {
    if (asStack_c[0] == -0x7fff) {
      *(undefined1 *)(unaff_EDI + 0x17) = 1;
      iVar2 = iStack_4;
    }
    else {
      iStack_8 = FUN_006908c0();
      if (iStack_8 != 0) goto LAB_006bb349;
      iVar2 = in_ECX[1];
    }
    if (in_ECX[5] == 0) {
      unaff_EDI[0x13] = in_ECX[2] + *in_ECX;
      unaff_EDI[0x14] = iVar2;
      *(undefined1 *)((int)unaff_EDI + 0x5d) = 1;
      iStack_8 = FUN_00690900();
      if (iStack_8 == 0) {
LAB_006bb39b:
        iVar2 = unaff_EDI[0x13];
        unaff_EDI[1] = iVar2;
        *unaff_EDI = iVar2;
        unaff_EDI[2] = unaff_EDI[0x14] + iVar2;
        return 0;
      }
    }
    else {
      iVar1 = FUN_00692230(param_1,iVar2,&iStack_8);
      unaff_EDI[0x13] = iVar1;
      if ((iStack_8 == 0) && (iStack_8 = FUN_00691ec0(), iStack_8 == 0)) {
        unaff_EDI[0x14] = iVar2;
        goto LAB_006bb39b;
      }
    }
  }
LAB_006bb349:
  if (*(char *)((int)unaff_EDI + 0x5d) == '\0') {
    FUN_00691290(param_1,unaff_EDI[0x13]);
    unaff_EDI[0x13] = 0;
  }
  return iStack_8;
}


/* FUN_006bb400 @ 006bb400  kind=gamemisc  attributed-by=none  size=869 */

int FUN_006bb400(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  size_t _Size;
  byte *pbVar8;
  int *unaff_EDI;
  short local_10 [2];
  int local_c;
  int local_8;
  int local_4;
  
  local_4 = unaff_EDI[4];
  iVar5 = unaff_EDI[0x12];
  local_c = 0;
  if ((char)unaff_EDI[0x17] == '\0') {
    pbVar4 = (byte *)unaff_EDI[0x13];
    pbVar7 = pbVar4 + unaff_EDI[0x14];
    pbVar8 = pbVar4;
    do {
      while ((((*pbVar4 != 0x65 || (pbVar7 <= pbVar4 + 9)) || (pbVar4[1] != 0x65)) ||
             (((pbVar4[2] != 0x78 || (pbVar4[3] != 0x65)) || (pbVar4[4] != 99))))) {
        pbVar4 = pbVar4 + 1;
        if (pbVar7 <= pbVar4) {
          return 3;
        }
      }
      unaff_EDI[2] = (int)(pbVar4 + 9);
      pbVar4 = (byte *)unaff_EDI[2];
      *unaff_EDI = (int)pbVar8;
      while (pbVar8 < pbVar4) {
        if ((*pbVar8 == 0x65) && (iVar5 = strncmp((char *)pbVar8,"eexec",5), iVar5 == 0)) {
          unaff_EDI[2] = unaff_EDI[0x13] + unaff_EDI[0x14];
          (*(code *)unaff_EDI[8])();
          pbVar8 = (byte *)*unaff_EDI;
          if (pbVar4 <= pbVar8) {
            return 3;
          }
          while ((((bVar1 = *pbVar8, bVar1 == 0x20 || (bVar1 == 9)) || (bVar1 == 0xd)) ||
                 (bVar1 == 10))) {
            pbVar8 = pbVar8 + 1;
            if (pbVar4 <= pbVar8) {
              return 3;
            }
          }
          if (pbVar4 <= pbVar8) {
            return 3;
          }
          _Size = (unaff_EDI[0x13] - (int)pbVar8) + unaff_EDI[0x14];
          if (*(char *)((int)unaff_EDI + 0x5d) == '\0') {
            unaff_EDI[0x15] = unaff_EDI[0x13];
            *(undefined1 *)((int)unaff_EDI + 0x5e) = 1;
            unaff_EDI[0x13] = 0;
            unaff_EDI[0x14] = 0;
          }
          else {
            iVar5 = FUN_00692230(local_4,_Size + 1,&local_c);
            unaff_EDI[0x15] = iVar5;
            if (local_c != 0) {
              return local_c;
            }
          }
          unaff_EDI[0x16] = _Size;
          uVar6 = (uint)*pbVar8;
          if (((((uVar6 - 0x30 < 10) || (uVar6 - 0x61 < 6)) || (uVar6 - 0x41 < 6)) &&
              ((((uVar6 = (uint)pbVar8[1], uVar6 - 0x30 < 10 || (uVar6 - 0x61 < 6)) ||
                (uVar6 - 0x41 < 6)) &&
               (((uVar6 = (uint)pbVar8[2], uVar6 - 0x30 < 10 || (uVar6 - 0x61 < 6)) ||
                (uVar6 - 0x41 < 6)))))) &&
             (((uVar6 = (uint)pbVar8[3], uVar6 - 0x30 < 10 || (uVar6 - 0x61 < 6)) ||
              (uVar6 - 0x41 < 6)))) {
            *unaff_EDI = (int)pbVar8;
            (**(code **)(*(int *)(param_1 + 4) + 0x18))();
            unaff_EDI[0x16] = local_4;
            *(undefined1 *)(local_4 + unaff_EDI[0x15]) = 0;
          }
          else {
            memmove((void *)unaff_EDI[0x15],pbVar8,_Size);
          }
          goto LAB_006bb71f;
        }
        (*(code *)unaff_EDI[8])();
        if (unaff_EDI[3] != 0) break;
        (*(code *)unaff_EDI[7])();
        pbVar8 = (byte *)*unaff_EDI;
      }
      pbVar8 = (byte *)unaff_EDI[0x13];
      pbVar7 = pbVar8 + unaff_EDI[0x14];
    } while( true );
  }
  uVar2 = FUN_00690930(iVar5);
  unaff_EDI[0x16] = 0;
  iVar3 = FUN_006bb130(local_10);
  if (iVar3 != 0) {
    return iVar3;
  }
  local_c = 0;
  while (local_10[0] == -0x7ffe) {
    unaff_EDI[0x16] = unaff_EDI[0x16] + local_8;
    local_c = FUN_00690900(iVar5,local_8);
    if (local_c != 0) {
      return local_c;
    }
    local_c = FUN_006bb130(local_10);
    if (local_c != 0) {
      return local_c;
    }
  }
  if (unaff_EDI[0x16] == 0) {
    return 3;
  }
  local_c = FUN_006908c0(iVar5,uVar2);
  if (local_c != 0) {
    return local_c;
  }
  iVar3 = FUN_00692230(local_4,unaff_EDI[0x16],&local_c);
  unaff_EDI[0x15] = iVar3;
  if (local_c != 0) {
    return local_c;
  }
  unaff_EDI[0x16] = 0;
  iVar3 = FUN_006bb130(local_10);
  if (iVar3 == 0) {
    local_c = 0;
    do {
      iVar3 = local_8;
      if (local_10[0] != -0x7ffe) break;
      local_c = FUN_00691ec0(iVar5,unaff_EDI[0x16] + unaff_EDI[0x15],local_8);
      if (local_c != 0) {
        return local_c;
      }
      unaff_EDI[0x16] = unaff_EDI[0x16] + iVar3;
      local_c = FUN_006bb130(local_10);
    } while (local_c == 0);
  }
  local_c = 0;
LAB_006bb71f:
  (**(code **)(param_1 + 0x10))(unaff_EDI[0x15],unaff_EDI[0x16],0xd971);
  *(undefined1 *)unaff_EDI[0x15] = 0x20;
  *(undefined1 *)(unaff_EDI[0x15] + 1) = 0x20;
  *(undefined1 *)(unaff_EDI[0x15] + 2) = 0x20;
  *(undefined1 *)(unaff_EDI[0x15] + 3) = 0x20;
  iVar5 = unaff_EDI[0x15];
  unaff_EDI[1] = iVar5;
  *unaff_EDI = iVar5;
  unaff_EDI[2] = unaff_EDI[0x16] + iVar5;
  return local_c;
}


/* FUN_006bb770 @ 006bb770  kind=gamemisc  attributed-by=none  size=498 */

int FUN_006bb770(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint in_EAX;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  int local_4;
  
  uVar1 = *(undefined4 *)(in_ECX + 100);
  puVar3 = *(uint **)(in_ECX + 0x214);
  local_4 = 0;
  if (puVar3 == (uint *)0x0) {
    puVar3 = (uint *)FUN_00692230(uVar1,0x1a4,&local_4);
    if (local_4 != 0) {
      return local_4;
    }
    puVar3[0x68] = 0;
    *(uint **)(in_ECX + 0x214) = puVar3;
  }
  if (in_EAX != 0) {
    if (*puVar3 == 0) {
      uVar4 = FUN_00693a60(uVar1,0x20,0);
      puVar3[0x25] = uVar4;
      if (local_4 != 0) {
        return local_4;
      }
      uVar4 = FUN_00693a60(uVar1,0xc4,0);
      puVar3[0x36] = uVar4;
      if (local_4 != 0) {
        return local_4;
      }
      uVar4 = FUN_00693a60(uVar1,0x10,0);
      puVar3[0x48] = uVar4;
      if (local_4 != 0) {
        return local_4;
      }
      uVar4 = FUN_00693a60(uVar1,4,0,in_EAX * 2,0,&local_4);
      puVar3[0x22] = uVar4;
      if (local_4 != 0) {
        return local_4;
      }
      puVar3[0x23] = uVar4 + in_EAX * 4;
      puVar3[0x24] = in_ECX + 0x84;
      puVar3[0x35] = in_ECX + 0xa8;
      puVar3[0x47] = in_ECX + 0x1cc;
      if (1 < in_EAX) {
        puVar6 = puVar3 + 0x37;
        iVar7 = in_EAX - 1;
        do {
          *puVar6 = puVar6[-1] + 0xc4;
          puVar6[-0x11] = puVar6[-0x12] + 0x20;
          puVar6[0x12] = puVar6[0x11] + 0x10;
          puVar6 = puVar6 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      *puVar3 = in_EAX;
    }
    else if (*puVar3 != in_EAX) {
      return 3;
    }
  }
  if (param_1 != 0) {
    if ((puVar3[1] != 0) && (puVar3[1] != param_1)) {
      return 3;
    }
    puVar3[1] = param_1;
  }
  uVar4 = *puVar3;
  uVar2 = puVar3[1];
  if (((uVar4 != 0) && (uVar2 != 0)) && (puVar3[6] == 0)) {
    uVar5 = FUN_00693a60(uVar1,4,0,uVar4 * uVar2,0,&local_4);
    puVar3[6] = uVar5;
    if ((local_4 == 0) && (1 < uVar4)) {
      puVar6 = puVar3 + 7;
      iVar8 = uVar4 - 1;
      iVar7 = uVar2 * 4;
      do {
        *puVar6 = puVar3[6] + iVar7;
        puVar6 = puVar6 + 1;
        iVar7 = iVar7 + uVar2 * 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return local_4;
}


/* FUN_006bb970 @ 006bb970  kind=gamemisc  attributed-by=none  size=99 */

undefined4 FUN_006bb970(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  puVar1 = *(undefined4 **)(param_1 + 0x214);
  uVar2 = 6;
  if (puVar1 != (undefined4 *)0x0) {
    *param_2 = puVar1[1];
    uVar5 = 0;
    param_2[1] = *puVar1;
    if (puVar1[1] != 0) {
      puVar4 = puVar1 + 2;
      param_2 = param_2 + 4;
      piVar3 = puVar1 + 0x17;
      do {
        param_2[-2] = *puVar4;
        param_2[-1] = *(undefined4 *)*piVar3;
        *param_2 = *(undefined4 *)(*piVar3 + -4 + (uint)*(byte *)(piVar3 + -1) * 4);
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 1;
        param_2 = param_2 + 3;
        piVar3 = piVar3 + 3;
      } while (uVar5 < (uint)puVar1[1]);
    }
    uVar2 = 0;
  }
  return uVar2;
}


/* FUN_006bb9e0 @ 006bb9e0  kind=gamemisc  attributed-by=none  size=122 */

int FUN_006bb9e0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int in_EDX;
  int iVar5;
  byte *unaff_EDI;
  
  piVar4 = *(int **)(unaff_EDI + 8);
  if (in_EDX <= *piVar4) {
    return **(int **)(unaff_EDI + 4) << 0x10;
  }
  uVar1 = (uint)*unaff_EDI;
  iVar5 = 1;
  if (1 < uVar1) {
    do {
      piVar4 = piVar4 + 1;
      if (in_EDX <= *piVar4) {
        piVar4 = (int *)(*(int *)(unaff_EDI + 8) + iVar5 * 4);
        iVar3 = piVar4[-1];
        uVar2 = FUN_0068ea60(in_EDX - iVar3,0x10000,*piVar4 - iVar3);
        iVar3 = FUN_0068ea60(uVar2,*(int *)(*(int *)(unaff_EDI + 4) + iVar5 * 4) -
                                   *(int *)(*(int *)(unaff_EDI + 4) + -4 + iVar5 * 4),1);
        return iVar3 + *(int *)(*(int *)(unaff_EDI + 4) + -4 + iVar5 * 4) * 0x10000;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar1);
  }
  return *(int *)(*(int *)(unaff_EDI + 4) + -4 + uVar1 * 4) << 0x10;
}


/* FUN_006bba60 @ 006bba60  kind=gamemisc  attributed-by=none  size=189 */

void FUN_006bba60(void)

{
  int in_EAX;
  int *in_ECX;
  int in_EDX;
  
  if (in_EDX == 1) {
    *in_ECX = *(int *)(in_EAX + 4);
    return;
  }
  if (in_EDX == 2) {
    *in_ECX = *(int *)(in_EAX + 4) + *(int *)(in_EAX + 0xc);
    in_ECX[1] = *(int *)(in_EAX + 8) + *(int *)(in_EAX + 0xc);
    return;
  }
  if (in_EDX == 3) {
    *in_ECX = *(int *)(in_EAX + 4) + *(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 0xc) +
              *(int *)(in_EAX + 0x1c);
    in_ECX[1] = *(int *)(in_EAX + 8) + *(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 0x1c) +
                *(int *)(in_EAX + 0x18);
    in_ECX[2] = *(int *)(in_EAX + 0x10) + *(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 0x1c) +
                *(int *)(in_EAX + 0x18);
    return;
  }
  *in_ECX = *(int *)(in_EAX + 4) + *(int *)(in_EAX + 0x34) + *(int *)(in_EAX + 0x14) +
            *(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 0x3c) + *(int *)(in_EAX + 0x1c) +
            *(int *)(in_EAX + 0x2c) + *(int *)(in_EAX + 0x24);
  in_ECX[1] = *(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x28) + *(int *)(in_EAX + 0x38) +
              *(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 0x3c) + *(int *)(in_EAX + 0x1c) +
              *(int *)(in_EAX + 0x2c) + *(int *)(in_EAX + 0x18);
  in_ECX[2] = *(int *)(in_EAX + 0x10) + *(int *)(in_EAX + 0x38) + *(int *)(in_EAX + 0x34) +
              *(int *)(in_EAX + 0x30) + *(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 0x3c) +
              *(int *)(in_EAX + 0x1c) + *(int *)(in_EAX + 0x18);
  in_ECX[3] = *(int *)(in_EAX + 0x20) + *(int *)(in_EAX + 0x28) + *(int *)(in_EAX + 0x38) +
              *(int *)(in_EAX + 0x34) + *(int *)(in_EAX + 0x30) + *(int *)(in_EAX + 0x3c) +
              *(int *)(in_EAX + 0x2c) + *(int *)(in_EAX + 0x24);
  return;
}


/* FUN_006bbd60 @ 006bbd60  kind=gamemisc  attributed-by=none  size=137 */

undefined4 FUN_006bbd60(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = *(uint **)(param_1 + 0x214);
  uVar2 = 6;
  if ((puVar1 != (uint *)0x0) && (puVar1[1] == param_2)) {
    uVar4 = 0;
    if (*puVar1 != 0) {
      do {
        uVar5 = 0;
        uVar2 = 0x10000;
        if (puVar1[1] != 0) {
          do {
            iVar3 = *(int *)(param_3 + uVar5 * 4);
            if (iVar3 < 0) {
              iVar3 = 0;
            }
            else if (0x10000 < iVar3) {
              iVar3 = 0x10000;
            }
            if ((uVar4 & 1 << ((byte)uVar5 & 0x1f)) == 0) {
              iVar3 = 0x10000 - iVar3;
            }
            uVar2 = FUN_0068ebc0(uVar2,iVar3);
            uVar5 = uVar5 + 1;
          } while (uVar5 < puVar1[1]);
        }
        *(undefined4 *)(puVar1[0x22] + uVar4 * 4) = uVar2;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *puVar1);
    }
    uVar2 = 0;
  }
  return uVar2;
}


/* FUN_006bbdf0 @ 006bbdf0  kind=gamemisc  attributed-by=none  size=280 */

void FUN_006bbdf0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint local_58 [3];
  int local_4c;
  int local_48;
  int local_44 [16];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)local_58;
  local_58[2] = *(int *)(param_1 + 0x214);
  local_4c = param_1;
  if ((local_58[2] != 0) && (*(int *)(local_58[2] + 4) == param_2)) {
    local_58[0] = 0;
    if (*(int *)(local_58[2] + 4) != 0) {
      pbVar7 = (byte *)(local_58[2] + 0x58);
      local_48 = param_3 - (int)local_44;
      do {
        iVar5 = *(int *)(pbVar7 + 4);
        uVar8 = (uint)*pbVar7;
        iVar1 = *(int *)((int)local_44 + local_48 + local_58[0] * 4);
        uVar6 = 0xffffffff;
        local_58[1] = 0xffffffff;
        uVar3 = 0;
        if (uVar8 == 0) {
LAB_006bbe88:
          iVar5 = **(int **)(pbVar7 + 8);
        }
        else {
          do {
            uVar4 = uVar3;
            iVar2 = *(int *)(iVar5 + uVar4 * 4);
            if (iVar1 == iVar2) {
              iVar5 = *(int *)(*(int *)(pbVar7 + 8) + uVar4 * 4);
              goto LAB_006bbec2;
            }
            if (iVar1 < iVar2) goto LAB_006bbe84;
            uVar3 = uVar4 + 1;
            uVar6 = uVar4;
          } while (uVar4 + 1 < uVar8);
          uVar4 = 0xffffffff;
LAB_006bbe84:
          if ((int)uVar6 < 0) goto LAB_006bbe88;
          if ((int)uVar4 < 0) {
            iVar5 = *(int *)(*(int *)(pbVar7 + 8) + -4 + uVar8 * 4);
          }
          else {
            iVar2 = *(int *)(iVar5 + uVar6 * 4);
            iVar5 = FUN_0068ea60(iVar1 - iVar2,
                                 *(int *)(*(int *)(pbVar7 + 8) + uVar4 * 4) -
                                 *(int *)(*(int *)(pbVar7 + 8) + uVar6 * 4),
                                 *(int *)(iVar5 + uVar4 * 4) - iVar2);
          }
        }
LAB_006bbec2:
        local_44[local_58[0]] = iVar5;
        local_58[0] = local_58[0] + 1;
        pbVar7 = pbVar7 + 0xc;
      } while (local_58[0] < *(uint *)(local_58[2] + 4));
    }
    FUN_006bbd60(local_4c,param_2,local_44);
  }
  __security_check_cookie(local_4 ^ (uint)local_58);
  return;
}


/* FUN_006bbf90 @ 006bbf90  kind=gamemisc  attributed-by=none  size=296 */

void FUN_006bbf90(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 100);
  puVar6 = *(uint **)(param_1 + 0x214);
  if (puVar6 != (uint *)0x0) {
    uVar5 = puVar6[1];
    uVar4 = *puVar6;
    FUN_00691290(uVar1,puVar6[6]);
    puVar6[6] = 0;
    if (1 < uVar4) {
      puVar2 = puVar6 + 7;
      uVar3 = uVar4;
      while (uVar3 = uVar3 - 1, uVar3 != 0) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
    }
    FUN_00691290(uVar1,puVar6[0x36]);
    puVar6[0x36] = 0;
    FUN_00691290(uVar1,puVar6[0x25]);
    puVar6[0x25] = 0;
    FUN_00691290(uVar1,puVar6[0x48]);
    puVar6[0x48] = 0;
    if (uVar4 != 0) {
      puVar2 = puVar6 + 0x24;
      do {
        puVar2[0x11] = 0;
        *puVar2 = 0;
        puVar2[0x23] = 0;
        puVar2 = puVar2 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    FUN_00691290(uVar1,puVar6[0x22]);
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    if (uVar5 != 0) {
      puVar2 = puVar6 + 2;
      uVar4 = uVar5;
      do {
        FUN_00691290(uVar1,*puVar2);
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      if (uVar5 != 0) {
        puVar6 = puVar6 + 0x17;
        do {
          FUN_00691290(uVar1,*puVar6);
          *puVar6 = 0;
          *(undefined1 *)(puVar6 + -1) = 0;
          puVar6 = puVar6 + 3;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x214));
    *(undefined4 *)(param_1 + 0x214) = 0;
  }
  return;
}


/* FUN_006bc720 @ 006bc720  kind=gamemisc  attributed-by=none  size=215 */

undefined4 FUN_006bc720(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 8);
  if (iVar1 == 10) {
    (**(code **)(unaff_EDI + 0xc))();
    return *(undefined4 *)(unaff_ESI + 0xc);
  }
  switch(*(undefined4 *)(unaff_EDI + 4)) {
  case 2:
  default:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 8:
  }
  if ((iVar1 != 8) && (iVar1 != 9)) {
    uVar2 = (**(code **)(unaff_ESI + 0x40))();
    return uVar2;
  }
  uVar2 = (**(code **)(unaff_ESI + 0x44))();
  return uVar2;
}


/* FUN_006bd5a0 @ 006bd5a0  kind=gamemisc  attributed-by=none  size=930 */

int FUN_006bd5a0(undefined4 param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  int in_EAX;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  int in_EDX;
  byte *pbVar8;
  char *pcVar9;
  uint uVar10;
  bool bVar11;
  undefined **ppuStack_14;
  byte *local_10;
  byte *local_c;
  
  pbVar8 = (byte *)(in_EAX + in_EDX);
  *param_2 = in_EAX;
  local_c = (byte *)0x0;
  bVar11 = false;
  param_2[2] = (int)pbVar8;
  param_2[3] = 0;
  local_10 = pbVar8;
  (*(code *)param_2[7])(param_2);
  if (pbVar8 <= (byte *)*param_2) {
LAB_006bd937:
    return param_2[3];
  }
LAB_006bd5d5:
  pbVar6 = local_10;
  pbVar8 = (byte *)*param_2;
  if (((*pbVar8 == 0x65) &&
      (((pbVar8 + 6 == local_10 ||
        ((pbVar8 + 6 < local_10 &&
         ((((((((bVar1 = pbVar8[5], bVar1 == 0x20 || (bVar1 == 0xd)) || (bVar1 == 10)) ||
              ((bVar1 == 9 || (bVar1 == 0xc)))) || (bVar1 == 0)) ||
            (((bVar1 == 0x2f || (bVar1 == 0x28)) ||
             ((bVar1 == 0x29 || (((bVar1 == 0x3c || (bVar1 == 0x3e)) || (bVar1 == 0x5b)))))))) ||
           ((bVar1 == 0x5d || (bVar1 == 0x7b)))) || ((bVar1 == 0x7d || (bVar1 == 0x25)))))))) &&
       (iVar5 = strncmp((char *)pbVar8,"eexec",5), iVar5 == 0)))) ||
     ((*pbVar8 == 99 &&
      (((pbVar8 + 10 == pbVar6 ||
        ((pbVar8 + 10 < pbVar6 &&
         (((((bVar1 = pbVar8[9], bVar1 == 0x20 || (bVar1 == 0xd)) ||
            ((bVar1 == 10 || (((bVar1 == 9 || (bVar1 == 0xc)) || (bVar1 == 0)))))) ||
           ((bVar1 == 0x2f || (bVar1 == 0x28)))) ||
          ((bVar1 == 0x29 ||
           (((bVar1 == 0x3c || (bVar1 == 0x3e)) ||
            ((bVar1 == 0x5b ||
             ((((bVar1 == 0x5d || (bVar1 == 0x7b)) || (bVar1 == 0x7d)) || (bVar1 == 0x25))))))))))))
        )) && (iVar5 = strncmp((char *)pbVar8,"closefile",9), iVar5 == 0)))))) goto LAB_006bd937;
  if (((*pbVar8 == 0x46) &&
      ((pbVar8 + 0xe == pbVar6 ||
       ((pbVar8 + 0xe < pbVar6 &&
        ((((bVar1 = pbVar8[0xd], bVar1 == 0x20 || (bVar1 == 0xd)) ||
          ((bVar1 == 10 || ((bVar1 == 9 || (bVar1 == 0xc)))))) ||
         ((((bVar1 == 0 ||
            ((((bVar1 == 0x2f || (bVar1 == 0x28)) || (bVar1 == 0x29)) ||
             (((bVar1 == 0x3c || (bVar1 == 0x3e)) ||
              ((bVar1 == 0x5b || ((bVar1 == 0x5d || (bVar1 == 0x7b)))))))))) || (bVar1 == 0x7d)) ||
          (bVar1 == 0x25)))))))))) &&
     (iVar5 = strncmp((char *)pbVar8,"FontDirectory",0xd), iVar5 == 0)) {
    if ((param_2[0x5d] & 1U) != 0) {
      param_2[0x5d] = param_2[0x5d] | 2;
    }
    *param_2 = *param_2 + 0xd;
    goto LAB_006bd91e;
  }
  bVar1 = *pbVar8;
  if (bVar1 - 0x30 < 10) {
    local_c = pbVar8;
    (*(code *)param_2[8])(param_2);
    if (param_2[3] == 0) {
      bVar11 = true;
      goto LAB_006bd91e;
    }
    goto LAB_006bd937;
  }
  if (((((bVar1 == 0x52) && (pbVar8 + 6 < pbVar6)) && (pbVar8[1] == 0x44)) && (bVar11)) ||
     (((bVar1 == 0x2d && (pbVar8 + 6 < pbVar6)) && ((pbVar8[1] == 0x7c && (bVar11)))))) {
    *param_2 = (int)local_c;
    iVar5 = FUN_006bc830(&ppuStack_14);
    if (iVar5 == 0) {
      return 3;
    }
  }
  else {
    if ((bVar1 == 0x2f) && (pbVar8 + 2 < pbVar6)) {
      pbVar8 = pbVar8 + 1;
      *param_2 = (int)pbVar8;
      (*(code *)param_2[8])(param_2);
      if (param_2[3] == 0) {
        uVar10 = *param_2 - (int)pbVar8;
        if ((uVar10 - 1 < 0x15) && ((byte *)*param_2 < local_10)) {
          pcVar9 = "version";
          ppuStack_14 = &PTR_s_version_007354f0;
          do {
            if (*pbVar8 == *pcVar9) {
              pbVar6 = (byte *)pcVar9;
              do {
                bVar1 = *pbVar6;
                pbVar6 = pbVar6 + 1;
              } while (bVar1 != 0);
              pbVar2 = pbVar8;
              uVar3 = uVar10;
              pbVar4 = (byte *)pcVar9;
              if (uVar10 == (int)pbVar6 - (int)(pcVar9 + 1)) {
                for (; 3 < uVar3; uVar3 = uVar3 - 4) {
                  if (*(int *)pbVar2 != *(int *)pbVar4) goto LAB_006bd880;
                  pbVar2 = pbVar2 + 4;
                  pbVar4 = pbVar4 + 4;
                }
                if ((uVar3 == 0) ||
                   ((*pbVar4 == *pbVar2 &&
                    ((uVar3 < 2 ||
                     ((pbVar4[1] == pbVar2[1] && ((uVar3 < 3 || (pbVar4[2] == pbVar2[2])))))))))) {
                  if (((uint)ppuStack_14[8] & ((param_2[0x5d] & 1U) != 0) + 1) != 0) {
                    if ((param_2[0x5d] & 2U) == 0) goto LAB_006bd8e9;
                    pcVar7 = "CharStrings";
                    goto LAB_006bd8c0;
                  }
                  break;
                }
              }
            }
LAB_006bd880:
            pcVar9 = ppuStack_14[9];
            ppuStack_14 = ppuStack_14 + 9;
          } while ((byte *)pcVar9 != (byte *)0x0);
        }
        goto LAB_006bd919;
      }
      goto LAB_006bd937;
    }
    (*(code *)param_2[8])(param_2);
    if (param_2[3] != 0) goto LAB_006bd937;
  }
LAB_006bd919:
  bVar11 = false;
LAB_006bd91e:
  (*(code *)param_2[7])(param_2);
  if (local_10 <= (byte *)*param_2) goto LAB_006bd937;
  goto LAB_006bd5d5;
  while( true ) {
    bVar1 = pcVar9[1];
    bVar11 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_006bd8e0;
    pcVar9 = pcVar9 + 2;
    pcVar7 = pcVar7 + 2;
    if (bVar1 == 0) break;
LAB_006bd8c0:
    bVar1 = *pcVar9;
    bVar11 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_006bd8e0:
      iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_006bd8e5;
    }
    if (bVar1 == 0) break;
  }
  iVar5 = 0;
LAB_006bd8e5:
  if (iVar5 == 0) {
LAB_006bd8e9:
    iVar5 = FUN_006bc720();
    param_2[3] = iVar5;
    if (iVar5 != 0) {
      if ((char)iVar5 != -0x5e) {
        return iVar5;
      }
      param_2[3] = 0;
    }
  }
  goto LAB_006bd919;
}


/* FUN_006bd9a0 @ 006bd9a0  kind=gamemisc  attributed-by=none  size=117 */

void FUN_006bd9a0(void)

{
  int in_EAX;
  
  if (*(code **)(in_EAX + 0x94) != (code *)0x0) {
    (**(code **)(in_EAX + 0x94))(in_EAX + 100);
  }
  if (*(code **)(in_EAX + 0x100) != (code *)0x0) {
    (**(code **)(in_EAX + 0x100))(in_EAX + 0xd0);
  }
  if (*(code **)(in_EAX + 0xcc) != (code *)0x0) {
    (**(code **)(in_EAX + 0xcc))(in_EAX + 0x9c);
  }
  if (*(code **)(in_EAX + 0x134) != (code *)0x0) {
    (**(code **)(in_EAX + 0x134))(in_EAX + 0x104);
  }
  if (*(code **)(in_EAX + 0x16c) != (code *)0x0) {
    (**(code **)(in_EAX + 0x16c))(in_EAX + 0x13c);
  }
  FUN_006bb3c0();
  return;
}


/* FUN_006bda20 @ 006bda20  kind=gamemisc  attributed-by=none  size=956 */

int FUN_006bda20(int param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  undefined4 *puVar11;
  bool bVar12;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  byte *local_17c;
  undefined1 local_178 [96];
  undefined4 local_118;
  int local_104;
  int local_fc;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_c4;
  undefined4 local_a8;
  int local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_40;
  undefined4 local_3c;
  int local_30;
  undefined4 local_24;
  undefined4 local_20;
  
  uVar4 = *(undefined4 *)(param_1 + 0x1e8);
  FUN_006bd950();
  *(undefined4 *)(param_1 + 0x218) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x21c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x118) = 7;
  *(undefined4 *)(param_1 + 0x11c) = 1;
  *(undefined4 *)(param_1 + 0xac) = 4;
  *(undefined4 *)(param_1 + 0x15c) = 0xf5c;
  *(undefined4 *)(param_1 + 0x114) = 0x27a000;
  local_188 = FUN_006bb260(*(undefined4 *)(param_1 + 100));
  if ((((local_188 == 0) && (local_188 = FUN_006bd5a0(param_1,local_178), local_188 == 0)) &&
      (local_188 = FUN_006bb400(uVar4), local_188 == 0)) &&
     (local_188 = FUN_006bd5a0(param_1,local_178), local_188 == 0)) {
    *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) & 0xfe;
    iVar10 = *(int *)(param_1 + 0x214);
    if (((iVar10 != 0) && (*(int *)(iVar10 + 0x1a0) != 0)) &&
       (*(int *)(iVar10 + 0x1a0) != *(int *)(iVar10 + 4))) {
      *(undefined4 *)(iVar10 + 0x1a0) = 0;
    }
    piVar2 = *(int **)(param_1 + 0x214);
    if ((piVar2 != (int *)0x0) && ((*piVar2 == 0 || (piVar2[1] == 0)))) {
      FUN_006bbf90(param_1);
    }
    iVar10 = *(int *)(param_1 + 0x214);
    if ((iVar10 != 0) && (uVar3 = 0, *(int *)(iVar10 + 4) != 0)) {
      pcVar7 = (char *)(iVar10 + 0x58);
      do {
        if (*pcVar7 == '\0') {
          FUN_006bbf90(param_1);
          break;
        }
        uVar3 = uVar3 + 1;
        pcVar7 = pcVar7 + 0xc;
      } while (uVar3 < *(uint *)(*(int *)(param_1 + 0x214) + 4));
    }
    if ((*(int *)(param_1 + 0x214) != 0) && (*(int *)(param_1 + 0x220) != 0)) {
      uVar4 = FUN_00693a60(*(undefined4 *)(param_1 + 100),4,0,*(int *)(param_1 + 0x220),0,&local_188
                          );
      *(undefined4 *)(param_1 + 0x224) = uVar4;
      if (local_188 != 0) {
        *(undefined4 *)(param_1 + 0x220) = 0;
        goto LAB_006bddc4;
      }
    }
    *(undefined4 *)(param_1 + 0x1a0) = local_e0;
    if (local_30 != 0) {
      *(undefined4 *)(param_1 + 0x194) = local_40;
      local_30 = 0;
      *(undefined4 *)(param_1 + 0x188) = local_3c;
      *(undefined4 *)(param_1 + 0x198) = local_24;
      *(undefined4 *)(param_1 + 0x19c) = local_20;
    }
    if ((*(int *)(*(int *)(param_1 + 0x80) + 0x34) == 0) && (local_9c == 0)) {
      local_188 = 3;
    }
    *(undefined4 *)(param_1 + 0x18c) = local_a8;
    *(undefined4 *)(param_1 + 0x1a8) = local_90;
    local_9c = 0;
    *(undefined4 *)(param_1 + 0x1ac) = local_8c;
    *(undefined4 *)(param_1 + 400) = local_dc;
    *(undefined4 *)(param_1 + 0x1a4) = local_c4;
    local_dc = 0;
    local_c4 = 0;
    if (*(int *)(param_1 + 0x170) == 1) {
      local_184 = 0;
      local_180 = 0;
      local_18c = 0;
      if (0 < local_104) {
LAB_006bdca1:
        *(undefined2 *)(*(int *)(param_1 + 0x180) + local_18c * 2) = 0;
        *(char **)(*(int *)(param_1 + 0x184) + local_18c * 4) = ".notdef";
        local_17c = *(byte **)(local_fc + local_18c * 4);
        if ((local_17c != (byte *)0x0) && (iVar10 = 0, 0 < *(int *)(param_1 + 0x1a0))) {
          puVar11 = *(undefined4 **)(param_1 + 0x1a4);
          do {
            pbVar9 = (byte *)*puVar11;
            pbVar5 = local_17c;
            pbVar8 = pbVar9;
            do {
              bVar1 = *pbVar5;
              bVar12 = bVar1 < *pbVar8;
              if (bVar1 != *pbVar8) {
LAB_006bdd10:
                iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                goto LAB_006bdd15;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar5[1];
              bVar12 = bVar1 < pbVar8[1];
              if (bVar1 != pbVar8[1]) goto LAB_006bdd10;
              pbVar5 = pbVar5 + 2;
              pbVar8 = pbVar8 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_006bdd15:
            if (iVar6 == 0) {
              *(short *)(*(int *)(param_1 + 0x180) + local_18c * 2) = (short)iVar10;
              *(byte **)(*(int *)(param_1 + 0x184) + local_18c * 4) = pbVar9;
              pcVar7 = ".notdef";
              goto LAB_006bdd45;
            }
            iVar10 = iVar10 + 1;
            puVar11 = puVar11 + 1;
          } while (iVar10 < *(int *)(param_1 + 0x1a0));
        }
        goto LAB_006bdd91;
      }
LAB_006bdda3:
      *(int *)(param_1 + 0x178) = local_184;
      *(int *)(param_1 + 0x17c) = local_180;
      *(undefined4 *)(param_1 + 0x174) = local_118;
    }
  }
LAB_006bddc4:
  FUN_006bd9a0();
  return local_188;
  while( true ) {
    bVar1 = pcVar7[1];
    bVar12 = bVar1 < pbVar9[1];
    if (bVar1 != pbVar9[1]) goto LAB_006bdd65;
    pcVar7 = pcVar7 + 2;
    pbVar9 = pbVar9 + 2;
    if (bVar1 == 0) break;
LAB_006bdd45:
    bVar1 = *pcVar7;
    bVar12 = bVar1 < *pbVar9;
    if (bVar1 != *pbVar9) {
LAB_006bdd65:
      iVar10 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_006bdd6a;
    }
    if (bVar1 == 0) break;
  }
  iVar10 = 0;
LAB_006bdd6a:
  if (iVar10 != 0) {
    if (local_18c < local_184) {
      local_184 = local_18c;
    }
    if (local_180 <= local_18c) {
      local_180 = local_18c + 1;
    }
  }
LAB_006bdd91:
  local_18c = local_18c + 1;
  if (local_104 <= local_18c) goto LAB_006bdda3;
  goto LAB_006bdca1;
}


/* FUN_006bdff0 @ 006bdff0  kind=gamemisc  attributed-by=none  size=322 */

void FUN_006bdff0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *unaff_EBX;
  int unaff_ESI;
  int aiStack_14 [3];
  int iStack_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)aiStack_14;
  iVar2 = *(int *)(unaff_ESI + 4);
  piVar1 = *(int **)(*(int *)(iVar2 + 0x80) + 0x34);
  *(undefined4 *)(unaff_ESI + 0x560) = *(undefined4 *)(iVar2 + 0x1b4);
  *(undefined4 *)(unaff_ESI + 0x564) = *(undefined4 *)(iVar2 + 0x1b8);
  *(undefined4 *)(unaff_ESI + 0x568) = *(undefined4 *)(iVar2 + 0x1bc);
  *(undefined4 *)(unaff_ESI + 0x56c) = *(undefined4 *)(iVar2 + 0x1c0);
  *(undefined4 *)(unaff_ESI + 0x570) = *(undefined4 *)(iVar2 + 0x1c4);
  *(undefined4 *)(unaff_ESI + 0x574) = *(undefined4 *)(iVar2 + 0x1c8);
  if (piVar1 == (int *)0x0) {
    *unaff_EBX = *(undefined4 *)(*(int *)(iVar2 + 0x1a8) + param_1 * 4);
    unaff_EBX[1] = *(undefined4 *)(*(int *)(iVar2 + 0x1ac) + param_1 * 4);
  }
  else {
    iVar2 = (**(code **)*piVar1)(piVar1[1],param_1);
    if (iVar2 != 0) goto LAB_006be105;
  }
  iVar2 = (**(code **)(unaff_ESI + 0x5cc))();
  if (((iVar2 == 0) && (piVar1 != (int *)0x0)) && (*(int *)(*piVar1 + 8) != 0)) {
    aiStack_14[0] = FUN_0068e970(*(undefined4 *)(unaff_ESI + 0x20));
    aiStack_14[0] = aiStack_14[0] >> 0x10;
    aiStack_14[1] = 0;
    aiStack_14[2] = FUN_0068e970(*(undefined4 *)(unaff_ESI + 0x28));
    aiStack_14[2] = aiStack_14[2] >> 0x10;
    iStack_8 = FUN_0068e970(*(undefined4 *)(unaff_ESI + 0x2c));
    iStack_8 = iStack_8 >> 0x10;
    (**(code **)(*piVar1 + 8))(piVar1[1],param_1,0,aiStack_14);
    *(int *)(unaff_ESI + 0x20) = aiStack_14[0] << 0x10;
    *(int *)(unaff_ESI + 0x28) = aiStack_14[2] << 0x10;
    *(int *)(unaff_ESI + 0x2c) = iStack_8 << 0x10;
  }
LAB_006be105:
  __security_check_cookie(local_4 ^ (uint)aiStack_14);
  return;
}


/* FUN_006be190 @ 006be190  kind=gamemisc  attributed-by=none  size=254 */

void FUN_006be190(void)

{
  int iVar1;
  int iVar2;
  int *unaff_EBX;
  int unaff_ESI;
  undefined1 local_5e0 [40];
  int iStack_5b8;
  undefined1 uStack_59c;
  undefined1 uStack_59a;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)local_5e0;
  iVar1 = *(int *)(unaff_ESI + 0x1e8);
  *unaff_EBX = 0;
  iVar2 = (*(code *)**(undefined4 **)(iVar1 + 0xc))(local_5e0);
  if (iVar2 == 0) {
    uStack_88 = *(undefined4 *)(unaff_ESI + 0x198);
    uStack_84 = *(undefined4 *)(unaff_ESI + 0x19c);
    uStack_59c = 0;
    uStack_8c = *(undefined4 *)(unaff_ESI + 0x194);
    uStack_10 = *(undefined4 *)(unaff_ESI + 0x224);
    uStack_c = *(undefined4 *)(unaff_ESI + 0x220);
    iVar2 = 0;
    *unaff_EBX = 0;
    uStack_59a = 1;
    if (0 < *(int *)(unaff_ESI + 0x1a0)) {
      do {
        FUN_006be140(local_5e0,iVar2);
        if ((iVar2 == 0) || (*unaff_EBX < iStack_5b8)) {
          *unaff_EBX = iStack_5b8;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(unaff_ESI + 0x1a0));
    }
    (**(code **)(*(int *)(iVar1 + 0xc) + 4))(local_5e0);
  }
  __security_check_cookie(local_4 ^ (uint)local_5e0);
  return;
}


/* FUN_006be990 @ 006be990  kind=gamemisc  attributed-by=none  size=491 */

int FUN_006be990(int param_1)

{
  ushort *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int in_ECX;
  ushort *puVar6;
  int iVar7;
  int unaff_EBX;
  ushort *puVar8;
  int local_10;
  ushort *local_c;
  undefined4 local_8;
  int local_4;
  
  local_8 = *(undefined4 *)(in_ECX + 0x1c);
  puVar8 = *(ushort **)(in_ECX + 0x20);
  puVar1 = *(ushort **)(in_ECX + 0x24);
  local_10 = 0;
  if ((ushort *)((int)puVar8 + 0x65U) <= puVar1) {
    puVar6 = (ushort *)((int)puVar8 + *(ushort *)((int)puVar8 + 99) + 0x75);
    if (puVar1 < puVar6 + 9) {
      return 0;
    }
    if (*puVar6 < 0x12) {
      return 0;
    }
    puVar6 = (ushort *)(*(int *)(puVar6 + 7) + (int)puVar8);
    if (puVar6 == puVar8) {
      return 0;
    }
    puVar8 = puVar6 + 1;
    if (puVar8 <= puVar1) {
      uVar2 = (uint)*puVar6;
      *(uint *)(param_1 + 0x28) = uVar2;
      if (puVar8 + uVar2 * 2 <= puVar1) {
        if (uVar2 == 0) {
          return 0;
        }
        puVar3 = (undefined4 *)FUN_00693a60(local_8,0x10,0,uVar2,0,&local_10);
        *(undefined4 **)(param_1 + 0x24) = puVar3;
        if (local_10 == 0) {
          local_4 = *(int *)(unaff_EBX + 0x5c);
          local_c = puVar8 + *(int *)(param_1 + 0x28) * 2;
          iVar7 = 0;
          if (0 < *(int *)(unaff_EBX + 0x24)) {
            piVar4 = *(int **)(unaff_EBX + 0x28);
            do {
              if (*(short *)(*piVar4 + 8) == 7) {
                local_10 = FUN_00691a90();
                if (local_10 != 0) goto LAB_006beb57;
                break;
              }
              iVar7 = iVar7 + 1;
              piVar4 = piVar4 + 1;
            } while (iVar7 < *(int *)(unaff_EBX + 0x24));
          }
          if (puVar8 < local_c) {
            do {
              uVar5 = FUN_0068fb90();
              *puVar3 = uVar5;
              uVar5 = FUN_0068fb90();
              puVar3[1] = uVar5;
              puVar3[2] = (int)(short)((short)*(char *)((int)puVar8 + 3) << 8) |
                          (uint)(byte)puVar8[1];
              puVar3[3] = 0;
              puVar8 = puVar8 + 2;
              puVar3 = puVar3 + 4;
            } while (puVar8 < local_c);
          }
          if (local_4 != 0) {
            local_10 = FUN_00691a90();
          }
          if ((local_10 == 0) &&
             (qsort(*(void **)(param_1 + 0x24),*(size_t *)(param_1 + 0x28),0x10,FUN_006a9ed0),
             local_10 == 0)) {
            return 0;
          }
        }
        goto LAB_006beb57;
      }
    }
  }
  local_10 = 2;
LAB_006beb57:
  FUN_00691290(local_8,*(undefined4 *)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return local_10;
}


/* FUN_006bf480 @ 006bf480  kind=gamemisc  attributed-by=none  size=290 */

int FUN_006bf480(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  sbyte sVar5;
  uint in_ECX;
  int iVar6;
  uint uVar7;
  uint uStack_4;
  
  iVar1 = (**(code **)(in_EAX + 0x1fc))();
  if (iVar1 == 0x8e) {
    *(undefined4 *)(in_EAX + 0x2c0) = 0;
  }
  else if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = (**(code **)(in_EAX + 0x1fc))();
  if (iVar1 == 0) {
    if (*(short *)(in_EAX + 0xd2) == 0) {
      sVar5 = 1;
      if (0x1ffff < in_ECX) {
        return 8;
      }
      uVar2 = in_ECX >> 1;
    }
    else {
      sVar5 = 2;
      if (0x3ffff < in_ECX) {
        return 8;
      }
      uVar2 = in_ECX >> 2;
    }
    *(uint *)(in_EAX + 0x2dc) = uVar2;
    uStack_4 = in_ECX;
    if (uVar2 < *(uint *)(in_EAX + 0x10)) {
      uVar2 = *(uint *)(in_EAX + 0x9c);
      uVar3 = *(uint *)(in_EAX + 0x10) << sVar5;
      uVar7 = (uint)*(ushort *)(in_EAX + 0x98) * 0x10 + uVar2;
      iVar4 = FUN_00690930(param_1);
      iVar1 = 0x7fffffff;
      for (; uVar2 < uVar7; uVar2 = uVar2 + 0x10) {
        iVar6 = *(int *)(uVar2 + 8) - iVar4;
        if ((0 < iVar6) && (iVar6 < iVar1)) {
          iVar1 = iVar6;
        }
      }
      uStack_4 = in_ECX;
      if ((int)uVar3 <= iVar1) {
        *(undefined4 *)(in_EAX + 0x2dc) = *(undefined4 *)(in_EAX + 0x10);
        uStack_4 = uVar3;
      }
    }
    iVar1 = FUN_00693a30(param_1,uStack_4,in_EAX + 0x2e0);
    return iVar1;
  }
  return 0x90;
}


/* FUN_006bf5b0 @ 006bf5b0  kind=gamemisc  attributed-by=none  size=198 */

void FUN_006bf5b0(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x2dc);
  uVar4 = 0;
  uVar5 = 0;
  if (param_2 < uVar2) {
    iVar3 = *(int *)(param_1 + 0x2e0);
    if (*(short *)(param_1 + 0xd2) == 0) {
      uVar1 = iVar3 + 4 + param_2 * 2;
      uVar4 = (uint)CONCAT11(*(undefined1 *)(iVar3 + param_2 * 2),
                             *(undefined1 *)(iVar3 + 1 + param_2 * 2));
      uVar5 = uVar4;
      if (uVar1 <= iVar3 + uVar2 * 2) {
        uVar5 = (uint)CONCAT11(*(undefined1 *)(uVar1 - 2),*(undefined1 *)(uVar1 - 1));
      }
      uVar4 = uVar4 * 2;
      uVar5 = uVar5 * 2;
    }
    else {
      uVar1 = iVar3 + 8 + param_2 * 4;
      uVar4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar3 + param_2 * 4),
                                         *(undefined1 *)(iVar3 + 1 + param_2 * 4)),
                                *(undefined1 *)(iVar3 + 2 + param_2 * 4)),
                       *(undefined1 *)(iVar3 + 3 + param_2 * 4));
      uVar5 = uVar4;
      if (iVar3 + uVar2 * 4 < uVar1) goto LAB_006bf66a;
      uVar5 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar1 - 4),*(undefined1 *)(uVar1 - 3)),
                                *(undefined1 *)(uVar1 - 2)),*(undefined1 *)(uVar1 - 1));
    }
    if (uVar5 < uVar4) {
      uVar5 = *(uint *)(param_1 + 0x2c0);
    }
  }
LAB_006bf66a:
  *param_3 = uVar5 - uVar4;
  return;
}


/* FUN_006bf740 @ 006bf740  kind=gamemisc  attributed-by=none  size=388 */

int FUN_006bf740(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint local_c;
  undefined4 local_8;
  undefined1 *puStack_4;
  
  iVar2 = param_2;
  iVar1 = param_1;
  local_8 = *(undefined4 *)(param_2 + 0x1c);
  param_1 = (**(code **)(param_1 + 0x1fc))(param_1,0x68646d78,param_2,&local_c);
  if ((param_1 != 0) || (local_c < 8)) {
    return 0;
  }
  param_1 = FUN_00693a30(iVar2,local_c,(undefined4 *)(iVar1 + 0x2e4));
  if (param_1 == 0) {
    puVar6 = *(undefined1 **)(iVar1 + 0x2e4);
    puStack_4 = puVar6 + local_c;
    uVar5 = (uint)CONCAT11(puVar6[2],puVar6[3]);
    uVar7 = CONCAT31(CONCAT21(CONCAT11(puVar6[4],puVar6[5]),puVar6[6]),puVar6[7]);
    if (0xfffeffff < uVar7) {
      uVar7 = uVar7 & 0xffff;
    }
    if (((CONCAT11(*puVar6,puVar6[1]) == 0) && (uVar5 < 0x100)) && (uVar7 < 0x10002)) {
      uVar3 = FUN_00693a60(local_8,1,0,uVar5,0,&param_1);
      *(undefined4 *)(iVar1 + 0x2f4) = uVar3;
      if (param_1 == 0) {
        uVar4 = 0;
        puVar6 = puVar6 + 8;
        if (uVar5 != 0) {
          do {
            if (puStack_4 < puVar6 + uVar7) break;
            *(undefined1 *)(uVar4 + *(int *)(iVar1 + 0x2f4)) = *puVar6;
            uVar4 = uVar4 + 1;
            puVar6 = puVar6 + uVar7;
          } while (uVar4 < uVar5);
        }
        *(uint *)(iVar1 + 0x2ec) = uVar4;
        *(uint *)(iVar1 + 0x2f0) = uVar7;
        *(uint *)(iVar1 + 0x2e8) = local_c;
        return 0;
      }
    }
    else {
      param_1 = 3;
    }
    FUN_00691ee0(param_2,iVar1 + 0x2e4);
    *(undefined4 *)(iVar1 + 0x2e8) = 0;
  }
  return param_1;
}


/* FUN_006bf910 @ 006bf910  kind=gamemisc  attributed-by=none  size=81 */

int FUN_006bf910(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int in_EDX;
  
  iVar1 = 0;
  uVar2 = 0;
  if (*(uint *)(in_EDX + 0x2ec) != 0) {
    while (*(byte *)(*(int *)(in_EDX + 0x2f4) + uVar2) != param_1) {
      uVar2 = uVar2 + 1;
      if (*(uint *)(in_EDX + 0x2ec) <= uVar2) {
        return iVar1;
      }
    }
    if (param_2 + 2U < *(uint *)(in_EDX + 0x2f0)) {
      iVar1 = *(int *)(in_EDX + 0x2e4) + 8 + uVar2 * *(uint *)(in_EDX + 0x2f0) + param_2 + 2U;
    }
  }
  return iVar1;
}


/* FUN_006bfa80 @ 006bfa80  kind=gamemisc  attributed-by=none  size=155 */

void FUN_006bfa80(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int *unaff_ESI;
  int local_14 [3];
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)local_14;
  piVar1 = *(int **)(*(int *)(*unaff_ESI + 0x80) + 0x34);
  if ((piVar1 != (int *)0x0) && (*(int *)(*piVar1 + 8) != 0)) {
    local_14[2] = unaff_ESI[0xe];
    local_14[0] = unaff_ESI[0xd];
    local_14[1] = 0;
    local_8 = 0;
    piVar1 = *(int **)(*(int *)(*unaff_ESI + 0x80) + 0x34);
    iVar2 = (**(code **)(*piVar1 + 8))(piVar1[1],param_1,0,local_14);
    if (iVar2 == 0) {
      unaff_ESI[0xd] = (int)(short)local_14[0];
      unaff_ESI[0xe] = local_14[2] & 0xffffU;
      unaff_ESI[0x2c] = 0;
      unaff_ESI[0x2d] = 0;
      if ((char)unaff_ESI[0x10] == '\0') {
        *(undefined1 *)(unaff_ESI + 0x10) = 1;
        unaff_ESI[0xf] = local_14[2] & 0xffffU;
      }
    }
  }
  __security_check_cookie(local_4 ^ (uint)local_14);
  return;
}


/* FUN_006bfb20 @ 006bfb20  kind=gamemisc  attributed-by=none  size=44 */

void FUN_006bfb20(void)

{
  uint uVar1;
  int *piVar2;
  int in_ECX;
  uint in_EDX;
  int unaff_ESI;
  int unaff_EDI;
  
  if ((unaff_ESI != 0) && (uVar1 = 0, in_EDX != 0)) {
    do {
      piVar2 = (int *)(in_ECX + uVar1 * 8);
      *piVar2 = *piVar2 + unaff_ESI;
      uVar1 = uVar1 + 1;
    } while (uVar1 < in_EDX);
  }
  if ((unaff_EDI != 0) && (in_EDX != 0)) {
    piVar2 = (int *)(in_ECX + 4);
    do {
      *piVar2 = *piVar2 + unaff_EDI;
      piVar2 = piVar2 + 2;
      in_EDX = in_EDX - 1;
    } while (in_EDX != 0);
  }
  return;
}


/* FUN_006c0280 @ 006c0280  kind=gamemisc  attributed-by=none  size=51 */

void FUN_006c0280(void)

{
  int in_EAX;
  
  *(undefined1 **)(in_EAX + 0x200) = &LAB_006bfb50;
  *(undefined1 **)(in_EAX + 0x208) = &LAB_006bfbb0;
  *(code **)(in_EAX + 0x20c) = FUN_006bfc40;
  *(code **)(in_EAX + 0x210) = FUN_006c0030;
  *(undefined1 **)(in_EAX + 0x204) = &LAB_006bfba0;
  return;
}


/* FUN_006c02c0 @ 006c02c0  kind=gamemisc  attributed-by=none  size=78 */

void FUN_006c02c0(void)

{
  int iVar1;
  int in_EAX;
  short *in_ECX;
  int in_EDX;
  int unaff_EDI;
  
  *(short *)(in_EAX + 8) = in_ECX[1] - (short)in_EDX;
  *(short *)(in_EAX + 10) = *in_ECX - (short)unaff_EDI;
  iVar1 = in_EDX * 8;
  *(int *)(in_EAX + 0xc) = *(int *)(in_ECX + 10) + iVar1;
  *(int *)(in_EAX + 0x10) = *(int *)(in_ECX + 2) + iVar1;
  *(int *)(in_EAX + 0x14) = *(int *)(in_ECX + 0xc) + iVar1;
  *(int *)(in_EAX + 0x18) = *(int *)(in_ECX + 4) + in_EDX;
  *(int *)(in_EAX + 0x1c) = *(int *)(in_ECX + 6) + unaff_EDI * 2;
  *(short *)(in_EAX + 0x20) = (short)in_EDX;
  return;
}


/* FUN_006c0310 @ 006c0310  kind=gamemisc  attributed-by=none  size=388 */

undefined4 FUN_006c0310(int param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  iVar3 = *(int *)(param_1 + 0xc);
  bVar1 = *(byte *)(param_2 + 4);
  uVar7 = (uint)*(short *)(iVar3 + 0x16);
  if (((bVar1 & 200) != 0) && (param_4 < uVar7)) {
    iVar9 = *(int *)(iVar3 + 0x18) + param_4 * 8;
    iVar8 = uVar7 - param_4;
    do {
      FUN_00690500(iVar9,param_2 + 0x10);
      iVar9 = iVar9 + 8;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if ((*(ushort *)(param_2 + 4) & 2) == 0) {
    uVar2 = *(int *)(param_2 + 8) + param_3;
    uVar6 = *(int *)(param_2 + 0xc) + param_4;
    if ((param_4 <= uVar2) || (uVar7 <= uVar6)) {
      return 0x15;
    }
    iVar3 = *(int *)(iVar3 + 0x18);
    uVar7 = *(int *)(iVar3 + uVar2 * 8) - *(int *)(iVar3 + uVar6 * 8);
    uVar2 = *(int *)(iVar3 + 4 + uVar2 * 8) - *(int *)(iVar3 + 4 + uVar6 * 8);
  }
  else {
    uVar7 = *(uint *)(param_2 + 8);
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar7 == 0) && (uVar2 == 0)) {
      return 0;
    }
    if (((bVar1 & 200) != 0) && ((*(ushort *)(param_2 + 4) & 0x800) != 0)) {
      uVar5 = *(undefined4 *)(param_2 + 0x14);
      iVar3 = FUN_0068ebc0(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x10));
      iVar9 = FUN_0068ebc0(uVar5,uVar5);
      uVar4 = FUN_0068eec0(iVar3 + iVar9);
      uVar5 = *(undefined4 *)(param_2 + 0x1c);
      iVar3 = FUN_0068ebc0(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x18));
      iVar9 = FUN_0068ebc0(uVar5,uVar5);
      uVar5 = FUN_0068eec0(iVar3 + iVar9);
      uVar7 = FUN_0068ebc0(uVar7,uVar4);
      uVar2 = FUN_0068ebc0(uVar2,uVar5);
    }
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
      uVar5 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x34);
      uVar7 = FUN_0068ebc0(uVar7,*(undefined4 *)(*(int *)(param_1 + 4) + 0x30));
      uVar2 = FUN_0068ebc0(uVar2,uVar5);
      if ((*(byte *)(param_2 + 4) & 4) != 0) {
        uVar7 = uVar7 + 0x20 & 0xffffffc0;
        uVar2 = uVar2 + 0x20 & 0xffffffc0;
      }
    }
  }
  if ((uVar7 != 0) || (uVar2 != 0)) {
    FUN_006bfb20();
  }
  return 0;
}


/* FUN_006c04a0 @ 006c04a0  kind=gamemisc  attributed-by=none  size=582 */

void FUN_006c04a0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  short sVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  int *in_ECX;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  uint local_c;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_30;
  iVar8 = *in_ECX;
  iVar1 = in_ECX[2];
  iVar2 = in_ECX[1];
  local_28 = param_1;
  local_2c = 0x10000;
  if ((*(byte *)(in_ECX + 4) & 1) == 0) {
    local_2c = *(undefined4 *)(iVar2 + 0x14);
  }
  if (*(int *)(iVar1 + 0x48) == 0x636f6d70) {
    local_24 = in_ECX[9];
    local_20 = in_ECX[10];
    local_1c = in_ECX[0xb];
    local_18 = in_ECX[0xc];
  }
  else {
    FUN_00690430(iVar1 + 0x6c,&local_24);
  }
  uVar6 = in_ECX[0xf];
  if ((*(int *)(iVar8 + 0x1e0) != 0) && ((in_ECX[4] & 0x200U) == 0)) {
    uVar6 = (uint)*(ushort *)(iVar8 + 0xe2);
  }
  *(uint *)(iVar1 + 0x38) = uVar6;
  *(int *)(iVar1 + 0x20) = local_24;
  *(int *)(iVar1 + 0x24) = local_18;
  *(int *)(iVar1 + 0x28) = in_ECX[0x13] - in_ECX[0x11];
  if ((*(int *)(iVar8 + 0x1e0) == 0) && ((*(byte *)(in_ECX + 4) & 2) == 0)) {
    pbVar7 = (byte *)FUN_006bf910(*(undefined2 *)(iVar2 + 0xc),local_28);
    if (pbVar7 != (byte *)0x0) {
      *(uint *)(iVar1 + 0x28) = (uint)*pbVar7 << 6;
    }
  }
  *(int *)(iVar1 + 0x18) = local_1c - local_24;
  *(int *)(iVar1 + 0x1c) = local_18 - local_20;
  if ((*(char *)(iVar8 + 0x128) == '\0') || (*(short *)(iVar8 + 0x14e) == 0)) {
    sVar5 = FUN_0068ec40(local_18 - local_20,local_2c);
    if (*(short *)(iVar8 + 0x170) == -1) {
      uVar6 = (int)*(short *)(iVar8 + 0xdc) - (int)*(short *)(iVar8 + 0xde);
    }
    else {
      uVar6 = (int)*(short *)(iVar8 + 0x1b6) - (int)*(short *)(iVar8 + 0x1b8);
    }
    local_30 = (int)(uVar6 - (int)sVar5) / 2;
  }
  else {
    sVar5 = FUN_0068ec40(in_ECX[0x2f] - local_18,local_2c);
    local_30 = (int)sVar5;
    if (in_ECX[0x31] < in_ECX[0x2f]) {
      uVar6 = FUN_0068ec40(in_ECX[0x2f] - in_ECX[0x31],local_2c);
      uVar6 = uVar6 & 0xffff;
    }
    else {
      uVar6 = 0;
    }
  }
  piVar3 = *(int **)(*(int *)(iVar8 + 0x80) + 0x34);
  if ((piVar3 != (int *)0x0) && (*(int *)(*piVar3 + 8) != 0)) {
    local_10 = local_30;
    local_14 = 0;
    local_c = uVar6;
    iVar8 = (**(code **)(*piVar3 + 8))(piVar3[1],local_28,1,&local_14);
    if (iVar8 != 0) goto LAB_006c06d3;
    local_30 = local_10;
    uVar6 = local_c;
  }
  uVar4 = local_2c;
  *(uint *)(iVar1 + 0x3c) = uVar6;
  if ((*(byte *)(in_ECX + 4) & 1) == 0) {
    local_30 = FUN_0068ebc0(local_30,local_2c);
    uVar6 = FUN_0068ebc0(uVar6,uVar4);
  }
  *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x20) - *(int *)(iVar1 + 0x28) / 2;
  *(int *)(iVar1 + 0x30) = local_30;
  *(uint *)(iVar1 + 0x34) = uVar6;
LAB_006c06d3:
  __security_check_cookie(local_4 ^ (uint)&local_30);
  return;
}


/* FUN_006c06f0 @ 006c06f0  kind=gamemisc  attributed-by=none  size=204 */

void FUN_006c06f0(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int unaff_ESI;
  byte local_8;
  byte bStack_7;
  char cStack_6;
  char cStack_5;
  byte bStack_4;
  char cStack_3;
  char cStack_2;
  byte bStack_1;
  
  iVar1 = *(int *)(unaff_ESI + 4);
  iVar1 = (**(code **)(*(int *)(iVar1 + 0x214) + 0x68))
                    (iVar1,*(undefined4 *)(param_1 + 0x70),param_2,param_3,
                     *(undefined4 *)(iVar1 + 0x68),unaff_ESI + 0x4c,&local_8);
  if (iVar1 == 0) {
    *(undefined4 *)(unaff_ESI + 0x6c) = 0;
    *(uint *)(unaff_ESI + 0x1c) = (uint)local_8 << 6;
    *(uint *)(unaff_ESI + 0x18) = (uint)bStack_7 << 6;
    *(int *)(unaff_ESI + 0x20) = (int)cStack_6 << 6;
    *(int *)(unaff_ESI + 0x24) = (int)cStack_5 << 6;
    *(uint *)(unaff_ESI + 0x28) = (uint)bStack_4 << 6;
    *(int *)(unaff_ESI + 0x2c) = (int)cStack_3 << 6;
    *(int *)(unaff_ESI + 0x30) = (int)cStack_2 << 6;
    *(uint *)(unaff_ESI + 0x34) = (uint)bStack_1 << 6;
    *(undefined4 *)(unaff_ESI + 0x48) = 0x62697473;
    if ((param_3 & 0x10) != 0) {
      *(int *)(unaff_ESI + 100) = (int)cStack_3;
      *(int *)(unaff_ESI + 0x68) = (int)cStack_2;
      return;
    }
    *(int *)(unaff_ESI + 100) = (int)cStack_6;
    *(int *)(unaff_ESI + 0x68) = (int)cStack_5;
  }
  return;
}


/* FUN_006c0910 @ 006c0910  kind=gamemisc  attributed-by=none  size=49 */

undefined4 FUN_006c0910(void)

{
  char *pcVar1;
  char *_SubStr;
  char *unaff_EDI;
  
  if (unaff_EDI == (char *)0x0) {
    return 0;
  }
  _SubStr = "DFKaiSho-SB";
  do {
    pcVar1 = strstr(unaff_EDI,_SubStr);
    if (pcVar1 != (char *)0x0) {
      return 1;
    }
    _SubStr = _SubStr + 0x11;
  } while ((int)_SubStr < 0x735e07);
  return 0;
}


/* FUN_006c0950 @ 006c0950  kind=gamemisc  attributed-by=none  size=170 */

void FUN_006c0950(void)

{
  undefined4 uVar1;
  int *unaff_EDI;
  
  uVar1 = *(undefined4 *)(*unaff_EDI + 100);
  if ((char)unaff_EDI[0x49] != '\0') {
    unaff_EDI[0x4a] = 0;
    *(undefined1 *)(unaff_EDI + 0x49) = 0;
  }
  FUN_00691290(uVar1,unaff_EDI[0x3d]);
  unaff_EDI[0x3d] = 0;
  unaff_EDI[0x3c] = 0;
  FUN_00691290(uVar1,unaff_EDI[0x3f]);
  unaff_EDI[0x3f] = 0;
  *(undefined2 *)(unaff_EDI + 0x3e) = 0;
  FUN_006c07c0();
  FUN_00691290(uVar1,unaff_EDI[0x1f]);
  unaff_EDI[0x1f] = 0;
  FUN_00691290(uVar1,unaff_EDI[0x22]);
  unaff_EDI[0x22] = 0;
  unaff_EDI[0x1d] = 0;
  unaff_EDI[0x1e] = 0;
  unaff_EDI[0x20] = 0;
  unaff_EDI[0x21] = 0;
  unaff_EDI[0x23] = 0;
  unaff_EDI[0x24] = 0;
  *(undefined2 *)(unaff_EDI + 0x4b) = 0;
  return;
}


/* FUN_006c0a40 @ 006c0a40  kind=gamemisc  attributed-by=none  size=331 */

undefined4 FUN_006c0a40(void)

{
  int iVar1;
  int iVar2;
  int *unaff_EBX;
  int *piVar3;
  int *piVar4;
  
  iVar1 = *unaff_EBX;
  *(undefined1 *)(unaff_EBX + 0x1b) = 0;
  piVar3 = unaff_EBX + 3;
  piVar4 = unaff_EBX + 0xb;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  if ((*(ushort *)(unaff_EBX + 0xb) != 0) && (*(short *)((int)unaff_EBX + 0x2e) != 0)) {
    if ((*(byte *)(iVar1 + 0xb0) & 8) != 0) {
      iVar2 = FUN_0068ec40((uint)*(ushort *)(unaff_EBX + 0xb) << 6,*(undefined2 *)(iVar1 + 0x44));
      unaff_EBX[0xc] = iVar2;
      iVar2 = FUN_0068ec40((uint)*(ushort *)((int)unaff_EBX + 0x2e) << 6,
                           *(undefined2 *)(iVar1 + 0x44));
      unaff_EBX[0xd] = iVar2;
      iVar2 = FUN_0068ebc0((int)*(short *)(iVar1 + 0x46),iVar2);
      unaff_EBX[0xe] = iVar2 + 0x20U & 0xffffffc0;
      iVar2 = FUN_0068ebc0((int)*(short *)(iVar1 + 0x48),unaff_EBX[0xd]);
      unaff_EBX[0xf] = iVar2 + 0x20U & 0xffffffc0;
      iVar2 = FUN_0068ebc0((int)*(short *)(iVar1 + 0x4a),unaff_EBX[0xd]);
      unaff_EBX[0x10] = iVar2 + 0x20U & 0xffffffc0;
      iVar1 = FUN_0068ebc0((int)*(short *)(iVar1 + 0x4c),unaff_EBX[0xc]);
      unaff_EBX[0x11] = iVar1 + 0x20U & 0xffffffc0;
    }
    if (*(ushort *)(unaff_EBX + 0xb) < *(ushort *)((int)unaff_EBX + 0x2e)) {
      unaff_EBX[0x16] = unaff_EBX[0xd];
      *(undefined2 *)(unaff_EBX + 0x14) = *(undefined2 *)((int)unaff_EBX + 0x2e);
      iVar1 = FUN_0068ea60((short)unaff_EBX[0xb],0x10000,*(undefined2 *)((int)unaff_EBX + 0x2e));
      unaff_EBX[0x12] = iVar1;
      unaff_EBX[0x13] = 0x10000;
    }
    else {
      unaff_EBX[0x16] = unaff_EBX[0xc];
      *(short *)(unaff_EBX + 0x14) = (short)unaff_EBX[0xb];
      unaff_EBX[0x12] = 0x10000;
      iVar1 = FUN_0068ea60(*(undefined2 *)((int)unaff_EBX + 0x2e),0x10000,(short)unaff_EBX[0xb]);
      unaff_EBX[0x13] = iVar1;
    }
    *(undefined1 *)((int)unaff_EBX + 0x12d) = 0;
    *(undefined1 *)(unaff_EBX + 0x1b) = 1;
    return 0;
  }
  return 0x97;
}


/* FUN_006c0bb0 @ 006c0bb0  kind=gamemisc  attributed-by=none  size=45 */

undefined4 FUN_006c0bb0(undefined4 param_1)

{
  int in_EAX;
  int in_ECX;
  
  *(undefined4 *)(in_EAX + 0x164) = *(undefined4 *)(in_EAX + 0x1b4 + in_ECX * 8);
  *(undefined4 *)(in_EAX + 0x16c) = *(undefined4 *)(in_EAX + 0x1b8 + in_ECX * 8);
  *(undefined4 *)(in_EAX + 0x168) = param_1;
  *(int *)(in_EAX + 0x160) = in_ECX;
  return 0;
}


/* FUN_006c0be0 @ 006c0be0  kind=gamemisc  attributed-by=none  size=21 */

undefined4 FUN_006c0be0(undefined4 param_1)

{
  int in_EAX;
  int in_ECX;
  undefined4 in_EDX;
  
  *(undefined4 *)(in_ECX + 0x1b4 + in_EAX * 8) = in_EDX;
  *(undefined4 *)(in_ECX + 0x1b8 + in_EAX * 8) = param_1;
  return 0;
}


/* FUN_006c0c00 @ 006c0c00  kind=gamemisc  attributed-by=none  size=19 */

undefined4 FUN_006c0c00(void)

{
  int in_EAX;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1b4 + in_EAX * 8) = 0;
  *(undefined4 *)(in_ECX + 0x1b8 + in_EAX * 8) = 0;
  return 0;
}


/* FUN_006c0d40 @ 006c0d40  kind=gamemisc  attributed-by=none  size=483 */

void FUN_006c0d40(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  *param_1 = param_2;
  param_1[1] = in_EAX;
  if (in_EAX != 0) {
    param_1[99] = *(undefined4 *)(in_EAX + 0x74);
    param_1[100] = *(undefined4 *)(in_EAX + 0x78);
    param_1[0x66] = *(undefined4 *)(in_EAX + 0x80);
    param_1[0x67] = *(undefined4 *)(in_EAX + 0x84);
    param_1[0x65] = *(undefined4 *)(in_EAX + 0x7c);
    param_1[0x68] = *(undefined4 *)(in_EAX + 0x88);
    puVar4 = (undefined4 *)(in_EAX + 0x48);
    puVar5 = param_1 + 0x3d;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar4 = (undefined4 *)(in_EAX + 0x2c);
    puVar5 = param_1 + 0x36;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    param_1[0x69] = *(undefined4 *)(in_EAX + 0x8c);
    param_1[0x6a] = *(undefined4 *)(in_EAX + 0x90);
    param_1[0x6f] = *(undefined4 *)(in_EAX + 0x94);
    param_1[0x70] = *(undefined4 *)(in_EAX + 0x98);
    param_1[0x71] = *(undefined4 *)(in_EAX + 0x9c);
    param_1[0x72] = *(undefined4 *)(in_EAX + 0xa0);
    param_1[0x73] = *(undefined4 *)(in_EAX + 0xa4);
    param_1[0x74] = *(undefined4 *)(in_EAX + 0xa8);
    puVar4 = (undefined4 *)(in_EAX + 0xac);
    puVar5 = param_1 + 0x47;
    for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    param_1[0x5f] = *(undefined4 *)(in_EAX + 0xf0);
    param_1[0x60] = *(undefined4 *)(in_EAX + 0xf4);
    *(undefined2 *)(param_1 + 0x75) = *(undefined2 *)(in_EAX + 0xf8);
    param_1[0x76] = *(undefined4 *)(in_EAX + 0xfc);
    puVar4 = (undefined4 *)(in_EAX + 0x100);
    puVar5 = param_1 + 0x2d;
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  uVar1 = param_1[5];
  iVar3 = FUN_006c0d00(param_1[2]);
  param_1[5] = uVar1;
  if (iVar3 == 0) {
    uVar2 = param_1[0x61];
    iVar3 = FUN_006c0d00(param_1[2]);
    param_1[0x61] = uVar2 & 0xffff;
    if (iVar3 == 0) {
      param_1[0x26] = 0;
      puVar4 = param_1 + 0x24;
      puVar5 = param_1 + 0x12;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar4 = param_1 + 0x24;
      puVar5 = param_1 + 0x1b;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar4 = param_1 + 0x24;
      puVar5 = param_1 + 9;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined1 *)(param_1 + 0x7a) = 0;
    }
  }
  return;
}


/* FUN_006c0f30 @ 006c0f30  kind=gamemisc  attributed-by=none  size=120 */

undefined4 FUN_006c0f30(void)

{
  int in_EAX;
  int in_ECX;
  
  *(undefined4 *)(in_EAX + 0x74) = *(undefined4 *)(in_ECX + 0x18c);
  *(undefined4 *)(in_EAX + 0x80) = *(undefined4 *)(in_ECX + 0x198);
  *(undefined4 *)(in_EAX + 0x8c) = *(undefined4 *)(in_ECX + 0x1a4);
  *(undefined4 *)(in_EAX + 0x90) = *(undefined4 *)(in_ECX + 0x1a8);
  *(undefined4 *)(in_EAX + 0x94) = *(undefined4 *)(in_ECX + 0x1bc);
  *(undefined4 *)(in_EAX + 0x98) = *(undefined4 *)(in_ECX + 0x1c0);
  *(undefined4 *)(in_EAX + 0x9c) = *(undefined4 *)(in_ECX + 0x1c4);
  *(undefined4 *)(in_EAX + 0xa0) = *(undefined4 *)(in_ECX + 0x1c8);
  *(undefined4 *)(in_EAX + 0xa4) = *(undefined4 *)(in_ECX + 0x1cc);
  *(undefined4 *)(in_EAX + 0xa8) = *(undefined4 *)(in_ECX + 0x1d0);
  return 0;
}


/* FUN_006c0fb0 @ 006c0fb0  kind=gamemisc  attributed-by=none  size=179 */

void FUN_006c0fb0(void)

{
  int iVar1;
  int *unaff_EBX;
  int *piVar2;
  int *piVar3;
  
  iVar1 = FUN_006c0bb0(0);
  if (iVar1 == 0) {
    piVar2 = unaff_EBX + 0x24;
    piVar3 = unaff_EBX + 9;
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    }
    piVar2 = unaff_EBX + 0x24;
    piVar3 = unaff_EBX + 0x12;
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    }
    piVar2 = unaff_EBX + 0x24;
    piVar3 = unaff_EBX + 0x1b;
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    }
    *(undefined2 *)(unaff_EBX + 0x56) = 1;
    *(undefined2 *)(unaff_EBX + 0x57) = 1;
    *(undefined4 *)((int)unaff_EBX + 0x126) = 0x4000;
    unaff_EBX[0x4e] = 1;
    unaff_EBX[0x4c] = 1;
    *(undefined2 *)((int)unaff_EBX + 0x15a) = 1;
    *(undefined4 *)((int)unaff_EBX + 0x12a) = *(undefined4 *)((int)unaff_EBX + 0x126);
    *(undefined4 *)((int)unaff_EBX + 0x122) = *(undefined4 *)((int)unaff_EBX + 0x126);
    unaff_EBX[4] = 0;
    unaff_EBX[0x6b] = 0;
    (**(code **)(*unaff_EBX + 0x2b0))();
  }
  return;
}


/* FUN_006c10c0 @ 006c10c0  kind=gamemisc  attributed-by=none  size=78 */

uint FUN_006c10c0(void)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  uint in_ECX;
  uint uVar3;
  uint uVar4;
  
  uVar4 = in_ECX ^ in_EAX;
  if ((int)in_ECX < 0) {
    in_ECX = -in_ECX;
  }
  if ((int)in_EAX < 0) {
    in_EAX = -in_EAX;
  }
  uVar1 = ((int)in_ECX >> 0x10 & 0xffffU) * in_EAX;
  uVar2 = uVar1 * 0x10000 + 0x2000;
  uVar3 = (in_ECX & 0xffff) * in_EAX + uVar2;
  uVar1 = uVar1 >> 0x10;
  if (uVar3 < uVar2) {
    uVar1 = uVar1 + 1;
  }
  uVar1 = uVar1 << 0x12 | uVar3 >> 0xe;
  if ((int)uVar4 < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}


/* FUN_006c11c0 @ 006c11c0  kind=gamemisc  attributed-by=none  size=132 */

undefined4 FUN_006c11c0(void)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x100) == 0) {
    if (*(short *)(unaff_ESI + 0x128) == 0) {
      *(undefined4 *)(unaff_ESI + 0x100) = *(undefined4 *)(unaff_ESI + 0xf4);
      return *(undefined4 *)(unaff_ESI + 0xf4);
    }
    if (*(short *)(unaff_ESI + 0x126) == 0) {
      *(undefined4 *)(unaff_ESI + 0x100) = *(undefined4 *)(unaff_ESI + 0xf8);
      return *(undefined4 *)(unaff_ESI + 0xf8);
    }
    FUN_0068ea60((int)*(short *)(unaff_ESI + 0x126),*(undefined4 *)(unaff_ESI + 0xf4),0x4000);
    FUN_0068ea60((int)*(short *)(unaff_ESI + 0x128),*(undefined4 *)(unaff_ESI + 0xf8),0x4000);
    uVar1 = FUN_006c11a0();
    *(undefined4 *)(unaff_ESI + 0x100) = uVar1;
  }
  return *(undefined4 *)(unaff_ESI + 0x100);
}


/* FUN_006c1360 @ 006c1360  kind=gamemisc  attributed-by=none  size=35 */

undefined2 FUN_006c1360(void)

{
  int in_EAX;
  int iVar1;
  
  *(int *)(in_EAX + 0x168) = *(int *)(in_EAX + 0x168) + 2;
  iVar1 = *(int *)(in_EAX + 0x168) + *(int *)(in_EAX + 0x164);
  return CONCAT11(*(undefined1 *)(iVar1 + -2),*(undefined1 *)(iVar1 + -1));
}


/* FUN_006c1390 @ 006c1390  kind=gamemisc  attributed-by=none  size=92 */

undefined4 FUN_006c1390(void)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  uint unaff_ESI;
  
  if (2 < in_ECX - 1U) {
    *(undefined4 *)(in_EAX + 0xc) = 0x84;
    return 1;
  }
  iVar1 = *(int *)(in_EAX + 0x1b4 + in_ECX * 8);
  if (iVar1 == 0) {
    *(undefined4 *)(in_EAX + 0xc) = 0x8a;
    return 1;
  }
  if (*(uint *)(in_EAX + 0x1b8 + in_ECX * 8) < unaff_ESI) {
    *(undefined4 *)(in_EAX + 0xc) = 0x83;
    return 1;
  }
  *(int *)(in_EAX + 0x164) = iVar1;
  *(undefined4 *)(in_EAX + 0x16c) = *(undefined4 *)(in_EAX + 0x1b8 + in_ECX * 8);
  *(uint *)(in_EAX + 0x168) = unaff_ESI;
  *(int *)(in_EAX + 0x160) = in_ECX;
  return 0;
}


/* FUN_006c1590 @ 006c1590  kind=gamemisc  attributed-by=none  size=38 */

int FUN_006c1590(undefined4 param_1,int param_2,int param_3)

{
  if (param_2 < 0) {
    param_3 = param_2 - param_3;
    if (0 < param_3) {
      param_3 = 0;
    }
  }
  else {
    param_3 = param_3 + param_2;
    if ((param_2 != 0) && (param_3 < 0)) {
      return 0;
    }
  }
  return param_3;
}


/* FUN_006c1aa0 @ 006c1aa0  kind=gamemisc  attributed-by=none  size=341 */

void FUN_006c1aa0(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  
  sVar1 = *(short *)(in_EAX + 0x12a);
  if (sVar1 == 0x4000) {
    iVar2 = (int)*(short *)(in_EAX + 0x126) << 0x10;
  }
  else {
    if (*(short *)(in_EAX + 300) == 0x4000) {
      *(int *)(in_EAX + 0x234) = (int)*(short *)(in_EAX + 0x128) << 0x10;
      goto LAB_006c1b08;
    }
    iVar2 = ((int)*(short *)(in_EAX + 0x128) * (int)*(short *)(in_EAX + 300) +
            (int)*(short *)(in_EAX + 0x126) * (int)sVar1) * 4;
  }
  *(int *)(in_EAX + 0x234) = iVar2;
LAB_006c1b08:
  if (*(short *)(in_EAX + 0x126) == 0x4000) {
    *(undefined1 **)(in_EAX + 0x23c) = &LAB_006c1a80;
  }
  else if (*(short *)(in_EAX + 0x128) == 0x4000) {
    *(undefined1 **)(in_EAX + 0x23c) = &LAB_006c1a90;
  }
  else {
    *(undefined1 **)(in_EAX + 0x23c) = &LAB_006c1a20;
  }
  if (*(short *)(in_EAX + 0x122) == 0x4000) {
    *(undefined1 **)(in_EAX + 0x240) = &LAB_006c1a80;
  }
  else if (*(short *)(in_EAX + 0x124) == 0x4000) {
    *(undefined1 **)(in_EAX + 0x240) = &LAB_006c1a90;
  }
  else {
    *(undefined1 **)(in_EAX + 0x240) = &LAB_006c1a50;
  }
  iVar2 = *(int *)(in_EAX + 0x234);
  *(code **)(in_EAX + 0x248) = FUN_006c13f0;
  *(code **)(in_EAX + 0x24c) = FUN_006c1480;
  if (iVar2 == 0x40000000) {
    if (sVar1 == 0x4000) {
      *(undefined1 **)(in_EAX + 0x248) = &LAB_006c1500;
      *(undefined1 **)(in_EAX + 0x24c) = &LAB_006c1550;
    }
    else if (*(short *)(in_EAX + 300) == 0x4000) {
      *(undefined1 **)(in_EAX + 0x248) = &LAB_006c1520;
      *(undefined1 **)(in_EAX + 0x24c) = &LAB_006c1570;
    }
  }
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  *(undefined4 *)(in_EAX + 0x100) = 0;
  if (iVar2 < 0x4000000) {
    *(undefined4 *)(in_EAX + 0x234) = 0x40000000;
  }
  return;
}


/* FUN_006c1c00 @ 006c1c00  kind=gamemisc  attributed-by=none  size=283 */

uint FUN_006c1c00(short *param_1)

{
  short sVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint in_ECX;
  bool bVar5;
  bool bVar6;
  
  if (((int)((in_ECX ^ (int)in_ECX >> 0x1f) - ((int)in_ECX >> 0x1f)) < 0x10000) &&
     ((int)((in_EAX ^ (int)in_EAX >> 0x1f) - ((int)in_EAX >> 0x1f)) < 0x10000)) {
    iVar2 = FUN_006c11a0();
    uVar3 = 0;
    if (iVar2 != 0) {
      sVar1 = FUN_0068ea60(in_ECX << 8,0x4000,iVar2);
      *param_1 = sVar1;
      uVar3 = FUN_0068ea60(in_EAX << 8,0x4000,iVar2);
      param_1[1] = (short)uVar3;
      return uVar3 & 0xffffff00;
    }
  }
  else {
    FUN_006c11a0();
    iVar4 = FUN_0068ea60();
    uVar3 = FUN_0068ea60();
    iVar2 = iVar4 * iVar4 + uVar3 * uVar3;
    bVar5 = iVar4 < 0;
    if (bVar5) {
      iVar4 = -iVar4;
    }
    bVar6 = (int)uVar3 < 0;
    if (bVar6) {
      uVar3 = -uVar3;
    }
    while (iVar2 < 0x10000000) {
      if (iVar4 < (int)uVar3) {
        iVar4 = iVar4 + 1;
      }
      else {
        uVar3 = uVar3 + 1;
      }
      iVar2 = iVar4 * iVar4 + uVar3 * uVar3;
    }
    while (0x10003fff < iVar2) {
      if (iVar4 < (int)uVar3) {
        iVar4 = iVar4 + -1;
      }
      else {
        uVar3 = uVar3 - 1;
      }
      iVar2 = iVar4 * iVar4 + uVar3 * uVar3;
    }
    sVar1 = (short)iVar4;
    if (bVar5) {
      sVar1 = -sVar1;
    }
    if (bVar6) {
      uVar3 = -uVar3;
    }
    *param_1 = sVar1;
    param_1[1] = (short)uVar3;
  }
  return uVar3 & 0xffffff00;
}


/* FUN_006c1df0 @ 006c1df0  kind=gamemisc  attributed-by=none  size=134 */

undefined4 FUN_006c1df0(void)

{
  byte bVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  
  *(int *)(in_EAX + 0x168) = *(int *)(in_EAX + 0x168) + *(int *)(in_EAX + 0x174);
  iVar2 = *(int *)(in_EAX + 0x16c);
  if (*(int *)(in_EAX + 0x168) < iVar2) {
    bVar1 = *(byte *)(*(int *)(in_EAX + 0x164) + *(int *)(in_EAX + 0x168));
    *(byte *)(in_EAX + 0x170) = bVar1;
    iVar3 = (int)(char)(&DAT_00735f50)[bVar1];
    *(int *)(in_EAX + 0x174) = iVar3;
    if (iVar3 < 0) {
      if (iVar2 < *(int *)(in_EAX + 0x168) + 1) goto LAB_006c1e6a;
      *(uint *)(in_EAX + 0x174) =
           2 - (uint)*(byte *)(*(int *)(in_EAX + 0x164) + 1 + *(int *)(in_EAX + 0x168)) * iVar3;
    }
    if (*(int *)(in_EAX + 0x168) + *(int *)(in_EAX + 0x174) <= iVar2) {
      return 0;
    }
  }
LAB_006c1e6a:
  *(undefined4 *)(in_EAX + 0xc) = 0x83;
  return 1;
}


/* FUN_006c2a40 @ 006c2a40  kind=gamemisc  attributed-by=none  size=216 */

uint FUN_006c2a40(undefined4 *param_1,uint *param_2,undefined4 *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  ushort *in_EDX;
  int unaff_EBX;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_24 [2];
  ushort local_1c;
  
  iVar5 = 9;
  puVar7 = local_24;
  if ((*(byte *)(unaff_EBX + 0x170) & 1) == 0) {
    uVar1 = *(ushort *)(unaff_EBX + 0x120);
    puVar6 = (undefined4 *)(unaff_EBX + 0x48);
  }
  else {
    uVar1 = *(ushort *)(unaff_EBX + 0x11e);
    puVar6 = (undefined4 *)(unaff_EBX + 0x24);
  }
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  if (local_1c <= uVar1) {
    if (*(char *)(unaff_EBX + 0x231) != '\0') {
      *(undefined4 *)(unaff_EBX + 0xc) = 0x86;
    }
    *in_EDX = 0;
    return 1;
  }
  puVar7 = local_24;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *param_3 = *puVar7;
    puVar7 = puVar7 + 1;
    param_3 = param_3 + 1;
  }
  *in_EDX = uVar1;
  uVar2 = (**(code **)(unaff_EBX + 0x23c))();
  uVar3 = FUN_0068ea60(uVar2,(int)*(short *)(unaff_EBX + 0x12a) << 0x10,
                       *(undefined4 *)(unaff_EBX + 0x234));
  *param_1 = uVar3;
  uVar4 = FUN_0068ea60(uVar2,(int)*(short *)(unaff_EBX + 300) << 0x10,
                       *(undefined4 *)(unaff_EBX + 0x234));
  *param_2 = uVar4;
  return uVar4 & 0xffffff00;
}


/* FUN_006c2b20 @ 006c2b20  kind=gamemisc  attributed-by=none  size=84 */

void FUN_006c2b20(int param_1)

{
  int *piVar1;
  byte *pbVar2;
  int in_EAX;
  ushort in_CX;
  char unaff_BL;
  uint uVar3;
  int unaff_EDI;
  
  uVar3 = (uint)in_CX;
  if ((*(short *)(in_EAX + 0x12a) != 0) &&
     (piVar1 = (int *)(*(int *)(in_EAX + 0x7c) + uVar3 * 8), *piVar1 = *piVar1 + unaff_EDI,
     unaff_BL != '\0')) {
    pbVar2 = (byte *)(uVar3 + *(int *)(in_EAX + 0x84));
    *pbVar2 = *pbVar2 | 8;
  }
  if ((*(short *)(in_EAX + 300) != 0) &&
     (piVar1 = (int *)(*(int *)(in_EAX + 0x7c) + 4 + uVar3 * 8), *piVar1 = *piVar1 + param_1,
     unaff_BL != '\0')) {
    pbVar2 = (byte *)(*(int *)(in_EAX + 0x84) + uVar3);
    *pbVar2 = *pbVar2 | 0x10;
  }
  return;
}


/* FUN_006c3b40 @ 006c3b40  kind=gamemisc  attributed-by=none  size=53 */

void FUN_006c3b40(void)

{
  int *piVar1;
  uint in_EAX;
  int iVar2;
  uint unaff_EBX;
  int *unaff_ESI;
  uint unaff_EDI;
  
  iVar2 = *(int *)(unaff_ESI[1] + unaff_EDI * 8) - *(int *)(*unaff_ESI + unaff_EDI * 8);
  if (iVar2 != 0) {
    for (; in_EAX < unaff_EDI; in_EAX = in_EAX + 1) {
      piVar1 = (int *)(unaff_ESI[1] + in_EAX * 8);
      *piVar1 = *piVar1 + iVar2;
    }
    while (unaff_EDI = unaff_EDI + 1, unaff_EDI <= unaff_EBX) {
      piVar1 = (int *)(unaff_ESI[1] + unaff_EDI * 8);
      *piVar1 = *piVar1 + iVar2;
    }
  }
  return;
}


/* FUN_006c3b80 @ 006c3b80  kind=gamemisc  attributed-by=none  size=300 */

void FUN_006c3b80(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint in_EAX;
  uint uVar4;
  int iVar5;
  uint in_ECX;
  int iVar6;
  int iVar7;
  int *unaff_ESI;
  int iVar8;
  int local_10;
  undefined4 local_8;
  
  if (((param_1 <= param_2) && (in_EAX < (uint)unaff_ESI[3])) && (in_ECX < (uint)unaff_ESI[3])) {
    iVar1 = *(int *)(unaff_ESI[2] + in_EAX * 8);
    local_10 = *(int *)(unaff_ESI[2] + in_ECX * 8);
    uVar4 = in_EAX;
    iVar8 = iVar1;
    if (local_10 < iVar1) {
      uVar4 = in_ECX;
      in_ECX = in_EAX;
      iVar8 = local_10;
      local_10 = iVar1;
    }
    iVar1 = *(int *)(*unaff_ESI + in_ECX * 8);
    iVar6 = *(int *)(unaff_ESI[1] + in_ECX * 8) - iVar1;
    iVar2 = *(int *)(*unaff_ESI + uVar4 * 8);
    iVar7 = *(int *)(unaff_ESI[1] + uVar4 * 8) - iVar2;
    if (iVar8 == local_10) {
      do {
        iVar1 = *(int *)(*unaff_ESI + param_1 * 8);
        iVar8 = iVar6;
        if (iVar1 <= iVar2) {
          iVar8 = iVar7;
        }
        *(int *)(unaff_ESI[1] + param_1 * 8) = iVar1 + iVar8;
        param_1 = param_1 + 1;
      } while (param_1 <= param_2);
      return;
    }
    local_8 = 0;
    bVar3 = false;
    do {
      iVar5 = *(int *)(*unaff_ESI + param_1 * 8);
      if (iVar2 < iVar5) {
        if (iVar5 < iVar1) {
          if (!bVar3) {
            bVar3 = true;
            local_8 = FUN_0068ea60(((iVar6 - iVar7) - iVar2) + iVar1,0x10000,local_10 - iVar8);
          }
          iVar5 = FUN_0068ebc0(*(int *)(unaff_ESI[2] + param_1 * 8) - iVar8,local_8);
          iVar5 = iVar5 + iVar7 + iVar2;
        }
        else {
          iVar5 = iVar5 + iVar6;
        }
      }
      else {
        iVar5 = iVar5 + iVar7;
      }
      *(int *)(unaff_ESI[1] + param_1 * 8) = iVar5;
      param_1 = param_1 + 1;
    } while (param_1 <= param_2);
  }
  return;
}


/* FUN_006c4ee0 @ 006c4ee0  kind=gamemisc  attributed-by=none  size=296 */

int FUN_006c4ee0(uint *param_1)

{
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int unaff_EDI;
  int local_4;
  
  uVar1 = *(undefined4 *)(unaff_EDI + 0x1c);
  local_4 = 0;
  uVar6 = FUN_00690a20();
  uVar9 = uVar6 & 0xff;
  *param_1 = uVar9;
  if (uVar9 == 0) {
    return -1;
  }
  if ((char)uVar6 < '\0') {
    uVar9 = FUN_00690a20();
    uVar9 = uVar9 & 0xff | (uVar6 & 0x7f) << 8;
  }
  iVar7 = FUN_00693a60(uVar1,2,0,uVar9,0,&local_4);
  if (local_4 == 0) {
    iVar10 = 0;
    if (uVar9 != 0) {
      do {
        uVar8 = FUN_00690a20();
        uVar6 = uVar8 & 0xff;
        if ((char)uVar8 < '\0') {
          uVar8 = uVar8 & 0x7f;
          sVar2 = FUN_00690a40();
          *(short *)(iVar7 + iVar10 * 2) = sVar2;
          if (uVar8 == 0) {
            return iVar7;
          }
          for (; iVar10 = iVar10 + 1, uVar8 != 0; uVar8 = uVar8 - 1) {
            sVar3 = FUN_00690a40();
            sVar2 = sVar2 + sVar3;
            *(short *)(iVar7 + iVar10 * 2) = sVar2;
          }
        }
        else {
          uVar4 = FUN_00690a20();
          uVar4 = uVar4 & 0xff;
          *(ushort *)(iVar7 + iVar10 * 2) = uVar4;
          if (uVar6 == 0) {
            return iVar7;
          }
          for (; iVar10 = iVar10 + 1, uVar6 != 0; uVar6 = uVar6 - 1) {
            uVar5 = FUN_00690a20();
            uVar4 = uVar4 + (uVar5 & 0xff);
            *(ushort *)(iVar7 + iVar10 * 2) = uVar4;
          }
        }
      } while (iVar10 < (int)uVar9);
    }
    return iVar7;
  }
  return 0;
}


/* FUN_006c5010 @ 006c5010  kind=gamemisc  attributed-by=none  size=253 */

int FUN_006c5010(int param_1,uint param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_8;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0x1c);
  uVar6 = 0;
  local_8 = 0;
  iVar3 = FUN_00693a60(local_4,2,0,param_2,0,&local_8);
  if (local_8 != 0) {
    return 0;
  }
  if (param_2 != 0) {
    do {
      uVar4 = FUN_00690a20(param_1);
      uVar5 = 0;
      if ((char)uVar4 < '\0') {
        do {
          if (param_2 <= uVar6) break;
          *(undefined2 *)(iVar3 + uVar6 * 2) = 0;
          uVar5 = uVar5 + 1;
          uVar6 = uVar6 + 1;
        } while (uVar5 <= (uVar4 & 0x3f));
      }
      else if ((uVar4 & 0x40) == 0) {
        do {
          if (param_2 <= uVar6) break;
          cVar1 = FUN_00690a20(param_1);
          *(short *)(iVar3 + uVar6 * 2) = (short)cVar1;
          uVar5 = uVar5 + 1;
          uVar6 = uVar6 + 1;
        } while (uVar5 <= (uVar4 & 0x3f));
      }
      else {
        do {
          if (param_2 <= uVar6) break;
          uVar2 = FUN_00690a40(param_1);
          *(undefined2 *)(iVar3 + uVar6 * 2) = uVar2;
          uVar5 = uVar5 + 1;
          uVar6 = uVar6 + 1;
        } while (uVar5 <= (uVar4 & 0x3f));
      }
      if (uVar5 <= (uVar4 & 0x3f)) {
        FUN_00691290(local_4,iVar3);
        return 0;
      }
    } while (uVar6 < param_2);
  }
  return iVar3;
}


/* FUN_006c5120 @ 006c5120  kind=gamemisc  attributed-by=none  size=420 */

void FUN_006c5120(void)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  short sVar4;
  int in_EAX;
  int iVar5;
  ushort *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_14;
  int iStack_10;
  int iStack_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(in_EAX + 0x68);
  iVar2 = *(int *)(in_EAX + 0x2c8);
  uVar8 = *(undefined4 *)(iVar1 + 0x1c);
  local_14 = 0;
  *(undefined1 *)(iVar2 + 0x10) = 1;
  local_4 = uVar8;
  local_14 = (**(code **)(in_EAX + 0x1fc))();
  if ((local_14 == 0) && (local_14 = FUN_00691f30(iVar1,local_8), local_14 == 0)) {
    iVar5 = FUN_00690aa0(iVar1);
    iStack_c = FUN_00690aa0(iVar1);
    if ((iVar5 == 0x10000) && (iStack_c == **(int **)(iVar2 + 8))) {
      puVar6 = (ushort *)FUN_00693a60(uVar8,8,0,iStack_c,0,&local_14);
      *(ushort **)(iVar2 + 0x14) = puVar6;
      if ((local_14 == 0) && (iStack_10 = 0, 0 < iStack_c)) {
        while( true ) {
          uVar3 = FUN_00690a40(iVar1);
          *puVar6 = uVar3;
          uVar7 = FUN_00693a60(uVar8,8,0,uVar3,0,&local_14);
          *(undefined4 *)(puVar6 + 2) = uVar7;
          if (local_14 != 0) break;
          if (*puVar6 != 0) {
            iVar5 = 0;
            do {
              sVar4 = FUN_00690a40(iVar1);
              *(int *)(*(int *)(puVar6 + 2) + iVar5 * 8) = sVar4 * 4;
              sVar4 = FUN_00690a40(iVar1);
              *(int *)(*(int *)(puVar6 + 2) + 4 + iVar5 * 8) = sVar4 * 4;
              iVar5 = iVar5 + 1;
            } while (iVar5 < (int)(uint)*puVar6);
          }
          iStack_10 = iStack_10 + 1;
          puVar6 = puVar6 + 4;
          uVar8 = local_4;
          if (iStack_c <= iStack_10) {
            FUN_00691fe0(iVar1);
            return;
          }
        }
        iVar5 = iStack_10 + -1;
        while (-1 < iVar5) {
          FUN_00691290(uVar8,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 4 + iVar5 * 8));
          iVar5 = iVar5 + -1;
          *(undefined4 *)(*(int *)(iVar2 + 0x14) + 0xc + iVar5 * 8) = 0;
        }
        FUN_00691290(uVar8,*(undefined4 *)(iVar2 + 0x14));
        *(undefined4 *)(iVar2 + 0x14) = 0;
      }
    }
    FUN_00691fe0(iVar1);
  }
  return;
}


/* FUN_006c52d0 @ 006c52d0  kind=gamemisc  attributed-by=none  size=584 */

void FUN_006c52d0(int param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iStack_28;
  int iStack_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int iStack_18;
  ushort uStack_14;
  ushort uStack_12;
  int iStack_10;
  ushort uStack_c;
  byte bStack_a;
  int iStack_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&iStack_28;
  iVar1 = *(int *)(param_1 + 0x68);
  iVar2 = *(int *)(param_1 + 0x2c8);
  uVar5 = *(undefined4 *)(iVar1 + 0x1c);
  local_20 = uVar5;
  iStack_28 = (**(code **)(param_1 + 0x1fc))(param_1,0x67766172,iVar1,local_1c);
  if (iStack_28 == 0) {
    iVar4 = FUN_00690930(iVar1);
    iStack_24 = iVar4;
    iStack_28 = FUN_00692010(iVar1,&DAT_00735d04,&iStack_18);
    if (iStack_28 == 0) {
      *(uint *)(iVar2 + 0x18) = (uint)uStack_12;
      *(uint *)(iVar2 + 0x20) = (uint)uStack_c;
      if ((iStack_18 != 0x10000) || (uStack_14 != **(ushort **)(iVar2 + 8))) {
        __security_check_cookie(local_4 ^ (uint)&iStack_28);
        return;
      }
      uVar5 = FUN_00693a60(uVar5,4,0,uStack_c + 1,0,&iStack_28);
      *(undefined4 *)(iVar2 + 0x24) = uVar5;
      if (iStack_28 == 0) {
        if ((bStack_a & 1) == 0) {
          iStack_28 = FUN_00691f30(iVar1,*(int *)(iVar2 + 0x20) * 2 + 2);
          if (iStack_28 != 0) goto LAB_006c54ee;
          uVar8 = 0;
          do {
            uVar7 = FUN_00690a40(iVar1);
            *(uint *)(*(int *)(iVar2 + 0x24) + uVar8 * 4) = iVar4 + iStack_8 + (uVar7 & 0xffff) * 2;
            uVar8 = uVar8 + 1;
          } while (uVar8 <= *(uint *)(iVar2 + 0x20));
        }
        else {
          iStack_28 = FUN_00691f30(iVar1,*(int *)(iVar2 + 0x20) * 4 + 4);
          if (iStack_28 != 0) goto LAB_006c54ee;
          uVar8 = 0;
          do {
            iVar6 = FUN_00690aa0(iVar1);
            *(int *)(*(int *)(iVar2 + 0x24) + uVar8 * 4) = iVar6 + iVar4 + iStack_8;
            uVar8 = uVar8 + 1;
          } while (uVar8 <= *(uint *)(iVar2 + 0x20));
        }
        FUN_00691fe0(iVar1);
        if (*(int *)(iVar2 + 0x18) != 0) {
          uVar5 = FUN_00693a60(local_20,4,0,(uint)uStack_14 * *(int *)(iVar2 + 0x18),0,&iStack_28);
          *(undefined4 *)(iVar2 + 0x1c) = uVar5;
          if (((iStack_28 == 0) &&
              (iStack_28 = FUN_006908c0(iVar1,iStack_10 + iStack_24), iStack_28 == 0)) &&
             (iStack_28 = FUN_00691f30(iVar1,(uint)uStack_14 * *(int *)(iVar2 + 0x18) * 2),
             iStack_28 == 0)) {
            uVar8 = 0;
            if (*(int *)(iVar2 + 0x18) != 0) {
              uVar7 = (uint)uStack_14;
              do {
                uVar9 = 0;
                if (uVar7 != 0) {
                  do {
                    sVar3 = FUN_00690a40(iVar1);
                    *(int *)(*(int *)(iVar2 + 0x1c) + (uStack_14 * uVar8 + uVar9) * 4) = sVar3 * 4;
                    uVar7 = (uint)uStack_14;
                    uVar9 = uVar9 + 1;
                  } while (uVar9 < uVar7);
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < *(uint *)(iVar2 + 0x18));
            }
            FUN_00691fe0(iVar1);
          }
        }
      }
    }
  }
LAB_006c54ee:
  __security_check_cookie(local_4 ^ (uint)&iStack_28);
  return;
}


/* FUN_006c5520 @ 006c5520  kind=gamemisc  attributed-by=none  size=268 */

undefined4 FUN_006c5520(uint *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  int iVar3;
  undefined4 uVar4;
  int in_EDX;
  int iVar5;
  undefined4 uVar6;
  uint local_8;
  
  uVar6 = 0x10000;
  local_8 = 0;
  if (*param_1 == 0) {
    return 0x10000;
  }
  iVar5 = in_EDX - (int)in_EAX;
  param_3 = param_3 - (int)in_EAX;
  do {
    iVar1 = *in_EAX;
    if (iVar1 != 0) {
      iVar3 = *(int *)(param_1[1] + local_8 * 4);
      if (((iVar3 == 0) || ((iVar3 < 0 && (0 < iVar1)))) || ((0 < iVar3 && (iVar1 < 0)))) {
        return 0;
      }
      if ((param_2 & 0x4000) == 0) {
        if (iVar3 < 1) {
          iVar3 = -iVar3;
        }
        uVar6 = FUN_0068ea60(uVar6,iVar3,0x10000);
      }
      else {
        if (iVar3 <= *(int *)(iVar5 + (int)in_EAX)) {
          return 0;
        }
        if (*(int *)((int)in_EAX + param_3) <= iVar3) {
          return 0;
        }
        if (iVar3 < iVar1) {
          iVar2 = *(int *)(iVar5 + (int)in_EAX);
          uVar4 = FUN_0068ea60(iVar3 - iVar2,0x10000,iVar1 - iVar2);
          uVar6 = FUN_0068ea60(uVar6,uVar4,0x10000);
        }
        else {
          iVar2 = *(int *)((int)in_EAX + param_3);
          uVar4 = FUN_0068ea60(iVar2 - iVar3,0x10000,iVar2 - iVar1);
          uVar6 = FUN_0068ea60(uVar6,uVar4,0x10000);
        }
      }
    }
    local_8 = local_8 + 1;
    in_EAX = in_EAX + 1;
    if (*param_1 <= local_8) {
      return uVar6;
    }
  } while( true );
}


/* FUN_006c5630 @ 006c5630  kind=gamemisc  attributed-by=none  size=1096 */

void FUN_006c5630(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  uint local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  ushort uStack_24;
  short sStack_22;
  ushort uStack_20;
  short sStack_1e;
  ushort uStack_1c;
  ushort uStack_1a;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  ushort uStack_6;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_40;
  uVar1 = *(undefined4 *)(param_1 + 0x68);
  local_38 = param_2;
  uVar6 = *(undefined4 *)(param_1 + 100);
  local_30 = param_1;
  local_40 = 0;
  local_3c = uVar6;
  if (*(int *)(param_1 + 0x2c8) == 0) {
    local_40 = (**(code **)(param_1 + 0x1fc))(param_1,0x67766172,uVar1,&local_34);
    if ((local_40 != 0) ||
       (local_40 = (**(code **)(param_1 + 0x1fc))(param_1,0x66766172,uVar1,&local_34), local_40 != 0
       )) goto LAB_006c5a70;
    iStack_2c = FUN_00690930(uVar1);
    local_40 = FUN_00692010(uVar1,&DAT_00736050,&iStack_28);
    if (local_40 != 0) goto LAB_006c5a70;
    if ((((iStack_28 != 0x10000) || (sStack_22 != 2)) || (sStack_1e != 0x14)) ||
       (0x3ffe < uStack_20)) {
LAB_006c5a15:
      __security_check_cookie(local_4 ^ (uint)&local_40);
      return;
    }
    if ((((uint)uStack_1a != (uint)uStack_20 * 4 + 4) || (0x7eff < uStack_1c)) ||
       (local_34 < (uint)uStack_1c * (uint)uStack_1a + (uint)uStack_20 * 0x14 + (uint)uStack_24))
    goto LAB_006c5a15;
    iVar2 = FUN_00692230(uVar6,0x28,&local_40);
    *(int *)(param_1 + 0x2c8) = iVar2;
    if (local_40 != 0) goto LAB_006c5a70;
    *(uint *)(iVar2 + 0xc) =
         ((uint)uStack_1c * 4 + 0x1d) * (uint)uStack_20 + 0x14 + (uint)uStack_1c * 8;
    puVar3 = (uint *)FUN_00692230(uVar6,*(undefined4 *)(*(int *)(param_1 + 0x2c8) + 0xc),&local_40);
    if (local_40 != 0) goto LAB_006c5a70;
    *(uint **)(*(int *)(param_1 + 0x2c8) + 8) = puVar3;
    *puVar3 = (uint)uStack_20;
    puVar3[1] = 0xffffffff;
    puVar3[2] = (uint)uStack_1c;
    puVar4 = puVar3 + 5;
    puVar3[3] = (uint)puVar4;
    puVar3[4] = (uint)(puVar4 + (uint)uStack_20 * 6);
    iVar2 = 0;
    puVar4 = puVar4 + (uint)uStack_20 * 6 + (uint)uStack_1c * 2;
    if (uStack_1c != 0) {
      do {
        *(uint **)(puVar3[4] + iVar2 * 8) = puVar4;
        puVar4 = puVar4 + uStack_20;
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uint)uStack_1c);
    }
    iVar8 = 0;
    iVar2 = 0;
    if (uStack_20 != 0) {
      do {
        *(uint **)(iVar8 + puVar3[3]) = puVar4;
        iVar2 = iVar2 + 1;
        puVar4 = (uint *)((int)puVar4 + 5);
        iVar8 = iVar8 + 0x18;
      } while (iVar2 < (int)(uint)uStack_20);
    }
    local_40 = FUN_006908c0(uVar1,(uint)uStack_24 + iStack_2c);
    if (local_40 != 0) goto LAB_006c5a70;
    piVar9 = (int *)puVar3[3];
    iVar2 = 0;
    if (uStack_20 != 0) {
      do {
        local_40 = 0;
        local_40 = FUN_00692010(uVar1,&DAT_00736074,&iStack_18);
        if (local_40 != 0) goto LAB_006c5a70;
        piVar9[1] = iStack_14;
        piVar9[2] = iStack_10;
        piVar9[4] = iStack_18;
        piVar9[3] = iStack_c;
        piVar9[5] = (uint)uStack_6;
        *(char *)*piVar9 = (char)((uint)iStack_18 >> 0x18);
        *(undefined1 *)(*piVar9 + 1) = *(undefined1 *)((int)piVar9 + 0x12);
        *(undefined1 *)(*piVar9 + 2) = *(undefined1 *)((int)piVar9 + 0x11);
        *(char *)(*piVar9 + 3) = (char)piVar9[4];
        *(undefined1 *)(*piVar9 + 4) = 0;
        iVar2 = iVar2 + 1;
        piVar9 = piVar9 + 6;
      } while (iVar2 < (int)(uint)uStack_20);
    }
    piVar9 = (int *)puVar3[4];
    if (uStack_1c != 0) {
      iVar2 = 0;
      do {
        local_40 = FUN_00691f30(uVar1,(uint)uStack_20 * 4 + 4);
        if (local_40 != 0) goto LAB_006c5a70;
        uVar5 = FUN_00690a40(uVar1);
        piVar9[1] = uVar5 & 0xffff;
        FUN_00690a40(uVar1);
        iVar8 = 0;
        if (uStack_20 != 0) {
          do {
            uVar6 = FUN_00690aa0(uVar1);
            *(undefined4 *)(*piVar9 + iVar8 * 4) = uVar6;
            iVar8 = iVar8 + 1;
          } while (iVar8 < (int)(uint)uStack_20);
        }
        FUN_00691fe0(uVar1);
        iVar2 = iVar2 + 1;
        piVar9 = piVar9 + 2;
      } while (iVar2 < (int)(uint)uStack_1c);
    }
  }
  iVar2 = local_30;
  if ((local_38 != (undefined4 *)0x0) &&
     (puVar3 = (uint *)FUN_00692230(local_3c,*(undefined4 *)(*(int *)(local_30 + 0x2c8) + 0xc),
                                    &local_40), local_40 == 0)) {
    memcpy(puVar3,*(void **)(*(int *)(iVar2 + 0x2c8) + 8),*(size_t *)(*(int *)(iVar2 + 0x2c8) + 0xc)
          );
    puVar4 = puVar3 + 5;
    puVar3[3] = (uint)puVar4;
    puVar3[4] = (uint)(puVar4 + *puVar3 * 6);
    puVar4 = puVar4 + *puVar3 * 6 + puVar3[2] * 2;
    uVar5 = 0;
    if (puVar3[2] != 0) {
      do {
        *(uint **)(puVar3[4] + uVar5 * 8) = puVar4;
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + *puVar3;
      } while (uVar5 < puVar3[2]);
    }
    puVar7 = (undefined4 *)puVar3[3];
    uVar5 = 0;
    if (*puVar3 != 0) {
      do {
        iVar2 = puVar7[4];
        *puVar7 = puVar4;
        if (iVar2 == 0x77676874) {
          *puVar7 = "Weight";
        }
        else if (iVar2 == 0x77647468) {
          *puVar7 = "Width";
        }
        else if (iVar2 == 0x6f70737a) {
          *puVar7 = "OpticalSize";
        }
        else if (iVar2 == 0x736c6e74) {
          *puVar7 = "Slant";
        }
        uVar5 = uVar5 + 1;
        puVar4 = (uint *)((int)puVar4 + 5);
        puVar7 = puVar7 + 6;
      } while (uVar5 < *puVar3);
    }
    *local_38 = puVar3;
  }
LAB_006c5a70:
  __security_check_cookie(local_4 ^ (uint)&local_40);
  return;
}


/* FUN_006c5a90 @ 006c5a90  kind=gamemisc  attributed-by=none  size=930 */

int FUN_006c5a90(int param_1)

{
  short *psVar1;
  int iVar2;
  ushort uVar3;
  short sVar4;
  int *in_EAX;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  short *psVar9;
  uint *puVar10;
  int iVar11;
  int local_40;
  int iStack_3c;
  short *psStack_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint uStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  uint *local_14;
  uint uStack_10;
  int iStack_8;
  int iStack_4;
  
  puVar10 = *(uint **)(param_1 + 0x2c8);
  iVar11 = in_EAX[7];
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_34 = iVar11;
  local_14 = puVar10;
  if ((((puVar10 == (uint *)0x0) || (*(int *)(param_1 + 0x2a0) == 0)) ||
      (local_40 = (**(code **)(param_1 + 0x1fc))(param_1,0x63766172), local_40 != 0)) ||
     (local_40 = FUN_00691f30(), local_40 != 0)) {
    local_40 = 0;
  }
  else {
    iVar8 = in_EAX[8];
    iVar2 = *in_EAX;
    iVar5 = FUN_00690aa0();
    if (iVar5 == 0x10000) {
      local_30 = FUN_00693a60(iVar11,4,0,*puVar10,0,&local_40);
      uVar6 = uStack_10;
      if (((local_40 == 0) &&
          (local_2c = FUN_00693a60(iVar11,4,0,*puVar10,0,&local_40), uVar6 = uStack_10,
          local_40 == 0)) &&
         (local_28 = FUN_00693a60(iVar11,4,0,*puVar10,0,&local_40), uVar6 = uStack_10, local_40 == 0
         )) {
        uVar6 = FUN_00690a40();
        uVar7 = FUN_00690a40();
        iStack_3c = (uVar7 & 0xffff) + (iVar8 - iVar2);
        uVar7 = uVar6 & 0xfff;
        iVar11 = local_34;
        uVar6 = uStack_10;
        while (uStack_10 = uVar7, local_34 = iVar11, uStack_10 != 0) {
          uStack_24 = FUN_00690a40();
          uStack_24 = uStack_24 & 0xffff;
          uVar3 = FUN_00690a40();
          if ((uVar3 & 0x8000) == 0) {
            if (((uVar3 & 0x4000) != 0) && (uVar6 = 0, (*puVar10 & 0x7fffffff) != 0)) {
              do {
                FUN_00690a40();
                uVar6 = uVar6 + 1;
              } while (uVar6 < *puVar10 * 2);
            }
LAB_006c5de6:
            iStack_3c = iStack_3c + uStack_24;
          }
          else {
            uVar6 = 0;
            if (*puVar10 != 0) {
              do {
                sVar4 = FUN_00690a40();
                *(int *)(local_30 + uVar6 * 4) = sVar4 * 4;
                uVar6 = uVar6 + 1;
              } while (uVar6 < *puVar10);
            }
            if ((uVar3 & 0x4000) != 0) {
              uVar6 = 0;
              if (*puVar10 != 0) {
                do {
                  sVar4 = FUN_00690a40();
                  *(int *)(local_2c + uVar6 * 4) = sVar4 * 4;
                  uVar6 = uVar6 + 1;
                } while (uVar6 < *puVar10);
              }
              uVar6 = 0;
              if (*puVar10 != 0) {
                do {
                  sVar4 = FUN_00690a40();
                  *(int *)(local_28 + uVar6 * 4) = sVar4 * 4;
                  uVar6 = uVar6 + 1;
                } while (uVar6 < *puVar10);
              }
            }
            iStack_1c = FUN_006c5520(puVar10,uVar3,local_28);
            if ((iStack_1c == 0) || ((uVar3 & 0x2000) == 0)) goto LAB_006c5de6;
            iStack_4 = in_EAX[8] - *in_EAX;
            in_EAX[8] = *in_EAX + iStack_3c;
            iVar8 = FUN_006c4ee0(&iStack_20);
            iVar11 = iStack_20;
            iStack_8 = iVar8;
            psVar9 = (short *)FUN_006c5010();
            psStack_38 = psVar9;
            if ((iVar8 == 0) || (psVar9 == (short *)0x0)) {
LAB_006c5d8a:
              if (iVar8 != -1) {
                FUN_00691290(local_34,iVar8);
              }
            }
            else {
              if (iVar8 != -1) {
                if (iVar11 != 0) {
                  iVar8 = iVar8 - (int)psVar9;
                  iStack_18 = iStack_20;
                  do {
                    psVar1 = (short *)(*(int *)(param_1 + 0x2a0) +
                                      (uint)*(ushort *)((int)psVar9 + iVar8) * 2);
                    sVar4 = FUN_0068ebc0((int)*psVar9,iStack_1c);
                    *psVar1 = *psVar1 + sVar4;
                    psVar9 = psVar9 + 1;
                    iStack_18 = iStack_18 + -1;
                  } while (iStack_18 != 0);
                  iStack_18 = 0;
                  iVar8 = iStack_8;
                  puVar10 = local_14;
                }
                goto LAB_006c5d8a;
              }
              uVar6 = 0;
              if (*(int *)(param_1 + 0x29c) != 0) {
                do {
                  psVar9 = (short *)(*(int *)(param_1 + 0x2a0) + uVar6 * 2);
                  sVar4 = FUN_0068ebc0((int)psStack_38[uVar6],iStack_1c);
                  *psVar9 = *psVar9 + sVar4;
                  uVar6 = uVar6 + 1;
                  puVar10 = local_14;
                } while (uVar6 < *(uint *)(param_1 + 0x29c));
              }
            }
            FUN_00691290(local_34,psStack_38);
            iStack_3c = iStack_3c + uStack_24;
            in_EAX[8] = *in_EAX + iStack_4;
          }
          uVar6 = uStack_10 - 1;
          iVar11 = local_34;
          uVar7 = uVar6;
        }
      }
    }
    else {
      local_40 = 0;
      uVar6 = uStack_10;
    }
    uStack_10 = uVar6;
    FUN_00691fe0();
  }
  FUN_00691290(iVar11,local_30);
  FUN_00691290(iVar11,local_2c);
  FUN_00691290(iVar11,local_28);
  return local_40;
}


/* FUN_006c5e40 @ 006c5e40  kind=gamemisc  attributed-by=none  size=1269 */

int FUN_006c5e40(uint param_1,int *param_2,uint param_3)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  int *piVar4;
  int iVar5;
  short sVar6;
  int in_EAX;
  int iVar7;
  uint uVar8;
  uint uVar9;
  short *psVar10;
  int iVar11;
  uint *puVar12;
  ushort *puVar13;
  int local_54;
  int local_50;
  ushort *local_4c;
  int local_48;
  int local_44;
  short *local_40;
  void *local_3c;
  int local_38;
  uint local_34;
  ushort *local_30;
  int local_2c;
  int local_28;
  ushort *local_24;
  uint local_20;
  uint local_1c;
  uint *local_18;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;
  uint local_4;
  
  puVar12 = *(uint **)(in_EAX + 0x2c8);
  piVar4 = *(int **)(in_EAX + 0x68);
  iVar11 = piVar4[7];
  local_20 = 0;
  local_24 = (ushort *)0x0;
  local_4c = (ushort *)0x0;
  if ((*(char *)(in_EAX + 0x2c4) == '\0') || (puVar12 == (uint *)0x0)) {
    return 6;
  }
  local_38 = iVar11;
  local_18 = puVar12;
  iVar7 = FUN_00693a60(iVar11,8,0,param_3,0,&local_54);
  if (local_54 == 0) {
    *param_2 = iVar7;
    if ((puVar12[8] <= param_1) ||
       (*(int *)(puVar12[9] + param_1 * 4) == *(int *)(puVar12[9] + 4 + param_1 * 4))) {
      return 0;
    }
    local_54 = FUN_006908c0(piVar4,*(undefined4 *)(puVar12[9] + param_1 * 4));
    if ((local_54 == 0) &&
       (local_54 = FUN_00691f30(piVar4,*(int *)(puVar12[9] + 4 + param_1 * 4) -
                                       *(int *)(puVar12[9] + param_1 * 4)), local_54 == 0)) {
      local_10 = piVar4[8] - *piVar4;
      local_3c = (void *)FUN_00693a60(iVar11,4,0,*puVar12,0,&local_54);
      if ((local_54 == 0) &&
         ((local_2c = FUN_00693a60(iVar11,4,0,*puVar12,0,&local_54), local_54 == 0 &&
          (local_28 = FUN_00693a60(iVar11,4,0,*puVar12,0,&local_54), local_54 == 0)))) {
        uVar8 = FUN_00690a40(piVar4);
        local_14 = uVar8 & 0xffff;
        uVar9 = FUN_00690a40(piVar4);
        local_50 = (uVar9 & 0xffff) + local_10;
        local_4 = uVar8 & 0xffff;
        if ((uVar8 & 0x8000) != 0) {
          iVar11 = *piVar4;
          iVar5 = piVar4[8];
          piVar4[8] = iVar11 + local_50;
          local_24 = (ushort *)FUN_006c4ee0(&local_20);
          local_50 = piVar4[8] - *piVar4;
          piVar4[8] = *piVar4 + (iVar5 - iVar11);
          local_4 = local_14;
        }
        local_4 = local_4 & 0xfff;
        local_10 = 0;
        if (local_4 != 0) {
          do {
            local_14 = FUN_00690a40(piVar4);
            local_14 = local_14 & 0xffff;
            uVar8 = FUN_00690a40(piVar4);
            local_40 = (short *)(uVar8 & 0xffff);
            if ((uVar8 & 0x8000) == 0) {
              if (puVar12[6] <= (uVar8 & 0xfff)) {
                local_54 = 8;
                break;
              }
              memcpy(local_3c,(void *)(puVar12[7] + (uVar8 & 0xfff) * *puVar12 * 4),*puVar12 * 4);
            }
            else {
              uVar8 = 0;
              if (*puVar12 != 0) {
                do {
                  sVar6 = FUN_00690a40(piVar4);
                  *(int *)((int)local_3c + uVar8 * 4) = sVar6 * 4;
                  uVar8 = uVar8 + 1;
                } while (uVar8 < *puVar12);
              }
            }
            if (((uint)local_40 & 0x4000) != 0) {
              uVar8 = 0;
              if (*puVar12 != 0) {
                do {
                  sVar6 = FUN_00690a40(piVar4);
                  *(int *)(local_2c + uVar8 * 4) = sVar6 * 4;
                  uVar8 = uVar8 + 1;
                } while (uVar8 < *puVar12);
              }
              uVar8 = 0;
              if (*puVar12 != 0) {
                do {
                  sVar6 = FUN_00690a40(piVar4);
                  *(int *)(local_28 + uVar8 * 4) = sVar6 * 4;
                  uVar8 = uVar8 + 1;
                } while (uVar8 < *puVar12);
              }
            }
            local_48 = FUN_006c5520(puVar12,local_40,local_28);
            if (local_48 == 0) {
              local_50 = local_50 + local_14;
            }
            else {
              local_8 = piVar4[8] - *piVar4;
              if (((uint)local_40 & 0x2000) == 0) {
                local_30 = local_24;
                local_34 = local_20;
              }
              else {
                piVar4[8] = *piVar4 + local_50;
                local_4c = (ushort *)FUN_006c4ee0(&local_34);
                local_30 = local_4c;
              }
              uVar8 = local_34;
              uVar9 = param_3;
              if (local_34 != 0) {
                uVar9 = local_34;
              }
              local_44 = FUN_006c5010(piVar4,uVar9);
              uVar9 = param_3;
              if (uVar8 != 0) {
                uVar9 = uVar8;
              }
              psVar10 = (short *)FUN_006c5010(piVar4,uVar9);
              local_40 = psVar10;
              if (((local_30 != (ushort *)0x0) && (psVar10 != (short *)0x0)) && (local_44 != 0)) {
                if (local_30 == (ushort *)0xffffffff) {
                  uVar8 = 0;
                  if (param_3 != 0) {
                    local_30 = (ushort *)(local_44 - (int)psVar10);
                    do {
                      iVar11 = FUN_0068ebc0((int)*(short *)((int)local_30 + (int)psVar10),local_48);
                      piVar1 = (int *)(iVar7 + uVar8 * 8);
                      *piVar1 = *piVar1 + iVar11;
                      iVar11 = FUN_0068ebc0((int)*psVar10,local_48);
                      piVar1 = (int *)(iVar7 + 4 + uVar8 * 8);
                      *piVar1 = *piVar1 + iVar11;
                      uVar8 = uVar8 + 1;
                      psVar10 = psVar10 + 1;
                      puVar12 = local_18;
                    } while (uVar8 < param_3);
                  }
                }
                else if (uVar8 != 0) {
                  local_30 = (ushort *)(local_44 - (int)psVar10);
                  local_c = (int)psVar10 - (int)local_4c;
                  local_1c = local_34;
                  puVar13 = local_4c;
                  do {
                    psVar10 = (short *)(local_c + (int)puVar13);
                    iVar11 = FUN_0068ebc0((int)*(short *)((int)local_30 + (int)psVar10),local_48);
                    *(int *)(iVar7 + (uint)*puVar13 * 8) =
                         iVar11 + *(int *)(iVar7 + (uint)*puVar13 * 8);
                    iVar11 = FUN_0068ebc0((int)*psVar10,local_48);
                    uVar2 = *puVar13;
                    uVar3 = *puVar13;
                    puVar13 = puVar13 + 1;
                    local_1c = local_1c - 1;
                    *(int *)(iVar7 + 4 + (uint)uVar3 * 8) =
                         iVar11 + *(int *)(iVar7 + 4 + (uint)uVar2 * 8);
                    puVar12 = local_18;
                  } while (local_1c != 0);
                }
              }
              iVar11 = local_38;
              if (local_4c != (ushort *)0xffffffff) {
                FUN_00691290(local_38,local_4c);
                local_4c = (ushort *)0x0;
              }
              FUN_00691290(iVar11,local_44);
              FUN_00691290(iVar11,local_40);
              local_50 = local_50 + local_14;
              piVar4[8] = *piVar4 + local_8;
            }
            local_10 = local_10 + 1;
          } while (local_10 < local_4);
        }
        iVar11 = local_38;
        FUN_00691290(local_38,local_3c);
        FUN_00691290(iVar11,local_2c);
        FUN_00691290(iVar11,local_28);
      }
      FUN_00691fe0(piVar4);
      if (local_54 == 0) {
        return 0;
      }
    }
    FUN_00691290(iVar11,iVar7);
    *param_2 = 0;
  }
  return local_54;
}


/* FUN_006c6340 @ 006c6340  kind=gamemisc  attributed-by=none  size=132 */

void FUN_006c6340(void)

{
  uint *unaff_ESI;
  uint uVar1;
  
  if (unaff_ESI != (uint *)0x0) {
    FUN_00691290();
    unaff_ESI[1] = 0;
    FUN_00691290();
    unaff_ESI[2] = 0;
    if (unaff_ESI[5] != 0) {
      uVar1 = 0;
      if (*unaff_ESI != 0) {
        do {
          FUN_00691290();
          *(undefined4 *)(unaff_ESI[5] + 4 + uVar1 * 8) = 0;
          uVar1 = uVar1 + 1;
        } while (uVar1 < *unaff_ESI);
      }
      FUN_00691290();
      unaff_ESI[5] = 0;
    }
    FUN_00691290();
    unaff_ESI[7] = 0;
    FUN_00691290();
    unaff_ESI[9] = 0;
    FUN_00691290();
  }
  return;
}


/* FUN_006c6480 @ 006c6480  kind=gamemisc  attributed-by=none  size=80 */

int FUN_006c6480(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  param_1[0x1c] = param_2;
  if ((*(byte *)(iVar1 + 8) & 1) != 0) {
    FUN_0068f560(iVar1,param_2);
    FUN_006c0a40();
    return 0;
  }
  iVar1 = (**(code **)(*(int *)(iVar1 + 0x214) + 0x98))(iVar1,param_2,param_1 + 3);
  if (iVar1 != 0) {
    param_1[0x1c] = -1;
  }
  return iVar1;
}


/* FUN_006c6540 @ 006c6540  kind=gamemisc  attributed-by=none  size=222 */

int FUN_006c6540(int param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_ECX;
  int unaff_ESI;
  undefined2 *puVar5;
  
  iVar4 = param_1;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  param_1 = (**(code **)(unaff_ESI + 0x1fc))();
  if (param_1 != 0) {
    *(undefined4 *)(unaff_ESI + 0x29c) = 0;
    *(undefined4 *)(unaff_ESI + 0x2a0) = 0;
    return 0;
  }
  *(uint *)(unaff_ESI + 0x29c) = in_ECX >> 1;
  uVar3 = FUN_00693a60(uVar3,2,0,in_ECX >> 1,0,&param_1);
  *(undefined4 *)(unaff_ESI + 0x2a0) = uVar3;
  if ((param_1 == 0) &&
     (param_1 = FUN_00691f30(iVar4,*(int *)(unaff_ESI + 0x29c) * 2), param_1 == 0)) {
    puVar5 = *(undefined2 **)(unaff_ESI + 0x2a0);
    puVar1 = puVar5 + *(int *)(unaff_ESI + 0x29c);
    for (; puVar5 < puVar1; puVar5 = puVar5 + 1) {
      uVar2 = FUN_00690a40(iVar4);
      *puVar5 = uVar2;
    }
    FUN_00691fe0(iVar4);
    if (*(char *)(unaff_ESI + 0x2c4) != '\0') {
      iVar4 = FUN_006c5a90();
      return iVar4;
    }
  }
  return param_1;
}


/* FUN_006c6620 @ 006c6620  kind=gamemisc  attributed-by=none  size=613 */

int FUN_006c6620(int param_1,char param_2)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x8c);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x8c) + -0x20 + (uint)*(ushort *)(param_1 + 0x84) * 8);
  if ((uVar1 + 0x20 & 0xffffffc0) != uVar1) {
    FUN_006bfb20();
  }
  if (iVar3 != 0) {
    memcpy(*(void **)(param_1 + 0x88),*(void **)(param_1 + 0x8c),
           (uint)*(ushort *)(param_1 + 0x84) * 8);
  }
  puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + 0xac);
  puVar6 = (undefined4 *)(*(int *)(param_1 + 0xa0) + 0x11c);
  for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if (param_2 == '\0') {
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0xdc) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x30)
    ;
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0xe0) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x34)
    ;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0xdc) = 0x10000;
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0xe0) = 0x10000;
    memcpy(*(void **)(param_1 + 0x90),*(void **)(param_1 + 0x8c),
           (uint)*(ushort *)(param_1 + 0x84) * 8);
  }
  *(uint *)(*(int *)(param_1 + 0x8c) + -0x18 + (uint)*(ushort *)(param_1 + 0x84) * 8) =
       *(int *)(*(int *)(param_1 + 0x8c) + -0x18 + (uint)*(ushort *)(param_1 + 0x84) * 8) + 0x20U &
       0xffffffc0;
  *(uint *)(*(int *)(param_1 + 0x8c) + -4 + (uint)*(ushort *)(param_1 + 0x84) * 8) =
       *(int *)(*(int *)(param_1 + 0x8c) + -4 + (uint)*(ushort *)(param_1 + 0x84) * 8) + 0x20U &
       0xffffffc0;
  if (iVar3 != 0) {
    pbVar2 = *(byte **)(*(int *)(param_1 + 0xc) + 0x40);
    iVar3 = FUN_006c0be0(iVar3);
    if (iVar3 != 0) {
      return iVar3;
    }
    *(char *)(*(int *)(param_1 + 0xa0) + 0x230) = param_2;
    puVar5 = (undefined4 *)(param_1 + 0x7c);
    puVar6 = (undefined4 *)(*(int *)(param_1 + 0xa0) + 0x90);
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar3 = FUN_006c0fb0();
    if ((iVar3 != 0) && (*(char *)(*(int *)(param_1 + 0xa0) + 0x231) != '\0')) {
      return iVar3;
    }
    *pbVar2 = *pbVar2 | *(char *)(*(int *)(param_1 + 0xa0) + 0x154) << 5 | 4U;
  }
  if (*(char *)(param_1 + 0x41) == '\0') {
    *(undefined4 *)(param_1 + 0x44) =
         *(undefined4 *)(*(int *)(param_1 + 0x8c) + -0x20 + (uint)*(ushort *)(param_1 + 0x84) * 8);
    *(undefined4 *)(param_1 + 0x48) =
         *(undefined4 *)(*(int *)(param_1 + 0x8c) + -0x1c + (uint)*(ushort *)(param_1 + 0x84) * 8);
    *(undefined4 *)(param_1 + 0x4c) =
         *(undefined4 *)(*(int *)(param_1 + 0x8c) + -0x18 + (uint)*(ushort *)(param_1 + 0x84) * 8);
    *(undefined4 *)(param_1 + 0x50) =
         *(undefined4 *)(*(int *)(param_1 + 0x8c) + -0x14 + (uint)*(ushort *)(param_1 + 0x84) * 8);
    *(undefined4 *)(param_1 + 0xb8) =
         *(undefined4 *)(*(int *)(param_1 + 0x8c) + -0x10 + (uint)*(ushort *)(param_1 + 0x84) * 8);
    *(undefined4 *)(param_1 + 0xbc) =
         *(undefined4 *)(*(int *)(param_1 + 0x8c) + -0xc + (uint)*(ushort *)(param_1 + 0x84) * 8);
    *(undefined4 *)(param_1 + 0xc0) =
         *(undefined4 *)(*(int *)(param_1 + 0x8c) + -8 + (uint)*(ushort *)(param_1 + 0x84) * 8);
    *(undefined4 *)(param_1 + 0xc4) =
         *(undefined4 *)(*(int *)(param_1 + 0x8c) + -4 + (uint)*(ushort *)(param_1 + 0x84) * 8);
  }
  return 0;
}


/* FUN_006c6a90 @ 006c6a90  kind=gamemisc  attributed-by=none  size=582 */

int FUN_006c6a90(int *param_1)

{
  int iVar1;
  short sVar2;
  int *piVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint extraout_EDX;
  
  piVar3 = param_1;
  iVar5 = param_1[3];
  iVar1 = *(short *)(iVar5 + 0x16) + 4;
  if ((iVar1 == 0) ||
     ((uint)(*(short *)(iVar5 + 0x16) + 4 +
            (int)*(short *)(iVar5 + 0x3a) + (int)*(short *)(iVar5 + 0x16)) <= *(uint *)(iVar5 + 4)))
  {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = (int *)FUN_00693c40(iVar5,iVar1,0);
    if (param_1 != (int *)0x0) {
      return (int)param_1;
    }
  }
  sVar2 = *(short *)(iVar5 + 0x16);
  iVar1 = *(int *)(iVar5 + 0x18);
  *(int *)(iVar1 + sVar2 * 8) = piVar3[0x11];
  *(int *)(iVar1 + 4 + sVar2 * 8) = piVar3[0x12];
  sVar2 = *(short *)(iVar5 + 0x16);
  iVar1 = *(int *)(iVar5 + 0x18);
  *(int *)(iVar1 + 8 + sVar2 * 8) = piVar3[0x13];
  *(int *)(iVar1 + 0xc + sVar2 * 8) = piVar3[0x14];
  sVar2 = *(short *)(iVar5 + 0x16);
  iVar1 = *(int *)(iVar5 + 0x18);
  *(int *)(iVar1 + 0x10 + sVar2 * 8) = piVar3[0x2e];
  *(int *)(iVar1 + 0x14 + sVar2 * 8) = piVar3[0x2f];
  sVar2 = *(short *)(iVar5 + 0x16);
  iVar1 = *(int *)(iVar5 + 0x18);
  *(int *)(iVar1 + 0x18 + sVar2 * 8) = piVar3[0x30];
  *(int *)(iVar1 + 0x1c + sVar2 * 8) = piVar3[0x31];
  *(undefined1 *)((int)*(short *)(iVar5 + 0x16) + *(int *)(iVar5 + 0x1c)) = 0;
  *(undefined1 *)(*(short *)(iVar5 + 0x16) + 1 + *(int *)(iVar5 + 0x1c)) = 0;
  *(undefined1 *)(*(short *)(iVar5 + 0x16) + 2 + *(int *)(iVar5 + 0x1c)) = 0;
  *(undefined1 *)(*(short *)(iVar5 + 0x16) + 3 + *(int *)(iVar5 + 0x1c)) = 0;
  iVar1 = piVar3[6];
  param_1 = (int *)FUN_006908c0(iVar1,piVar3[0x2a]);
  if (param_1 == (int *)0x0) {
    uVar4 = FUN_00690b80(iVar1,&param_1);
    if (param_1 == (int *)0x0) {
      if (*(ushort *)(*piVar3 + 0x11e) < uVar4) {
        if (piVar3[7] < (int)(uint)uVar4) {
          return 0x16;
        }
        uVar6 = *(uint *)(piVar3[0x28] + 0x184);
        iVar5 = FUN_006c0d00(*(undefined4 *)(piVar3[0x28] + 8));
        *(uint *)(piVar3[0x28] + 0x184) = uVar6 & 0xffff;
        if (iVar5 != 0) {
          return iVar5;
        }
        param_1 = (int *)0x0;
      }
      else if (uVar4 == 0) {
        return 0;
      }
      param_1 = (int *)FUN_00691ec0(iVar1,*(undefined4 *)(piVar3[0x28] + 0x188),(uint)uVar4);
      if (param_1 == (int *)0x0) {
        *(undefined4 *)(piVar3[2] + 0x88) = *(undefined4 *)(piVar3[0x28] + 0x188);
        *(uint *)(piVar3[2] + 0x8c) = (uint)uVar4;
        FUN_006c02c0();
        uVar6 = extraout_EDX;
        if (extraout_EDX < *(ushort *)(piVar3 + 0x21)) {
          do {
            *(byte *)(piVar3[0x25] + uVar6) = *(byte *)(piVar3[0x25] + uVar6) & 0xe7;
            uVar6 = uVar6 + 1;
          } while (uVar6 < *(ushort *)(piVar3 + 0x21));
        }
        *(short *)(piVar3 + 0x21) = (short)piVar3[0x21] + 4;
        param_1 = (int *)FUN_006c6620(piVar3,1);
      }
    }
  }
  return (int)param_1;
}


/* FUN_006c6ce0 @ 006c6ce0  kind=gamemisc  attributed-by=none  size=1813 */

int FUN_006c6ce0(int *param_1,uint param_2,uint param_3,char param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int *local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  uint uStack_64;
  int iStack_60;
  int iStack_5c;
  undefined4 local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_70 = *param_1;
  iVar7 = param_1[3];
  bVar4 = false;
  local_80 = (int *)0x0;
  bVar3 = false;
  if ((1 < param_3) && (*(ushort *)(local_70 + 0x122) < param_3)) {
    return 0x15;
  }
  if (*(uint *)(local_70 + 0x10) <= param_2) {
    return 0x10;
  }
  param_1[5] = param_2;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    local_78 = *(uint *)(param_1[1] + 0x30);
    local_7c = *(uint *)(param_1[1] + 0x34);
  }
  else {
    local_78 = 0x10000;
    local_7c = 0x10000;
  }
  FUN_006bf9f0(param_1);
  iVar9 = local_70;
  if (*(int *)(*(int *)(local_70 + 0x80) + 0x34) == 0) {
    local_74 = FUN_006bf5b0(local_70,param_2,param_1 + 7);
  }
  else {
    puVar1 = *(undefined4 **)(*(int *)(local_70 + 0x80) + 0x34);
    iVar5 = (**(code **)*puVar1)(puVar1[1],param_2,&local_58);
    if (iVar5 != 0) {
      return iVar5;
    }
    local_74 = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_c = 0;
    uStack_8 = 0;
    uStack_4 = 0;
    bVar3 = true;
    param_1[7] = iStack_54;
    FUN_00690880(&uStack_28,local_58,iStack_54);
    param_1[6] = (int)&uStack_28;
  }
  iVar5 = 0;
  if (param_1[7] < 1) {
LAB_006c6ea5:
    if ((param_1[7] == 0) || ((short)param_1[8] == 0)) {
      param_1[9] = 0;
      param_1[0xb] = 0;
      param_1[10] = 0;
      param_1[0xc] = 0;
      if (param_4 == '\0') {
        param_1[0x11] = -param_1[0xd];
        param_1[0x2f] = param_1[0x2c];
        param_1[0x12] = 0;
        param_1[0x13] = param_1[0xe] + -param_1[0xd];
        param_1[0x14] = 0;
        param_1[0x2e] = 0;
        param_1[0x30] = 0;
        param_1[0x31] = param_1[0x2c] - param_1[0x2d];
        FUN_006bfa80(param_2);
        if (*(char *)(*param_1 + 0x2c4) != '\0') {
          uVar2 = *(undefined4 *)(*param_1 + 100);
          iVar5 = FUN_006c5e40(param_2,&local_80,4);
          if (iVar5 != 0) goto LAB_006c73d9;
          param_1[0x11] = param_1[0x11] + *local_80;
          param_1[0x12] = param_1[0x12] + local_80[1];
          param_1[0x13] = param_1[0x13] + local_80[2];
          param_1[0x14] = param_1[0x14] + local_80[3];
          param_1[0x2e] = param_1[0x2e] + local_80[4];
          param_1[0x2f] = param_1[0x2f] + local_80[5];
          param_1[0x30] = param_1[0x30] + local_80[6];
          param_1[0x31] = param_1[0x31] + local_80[7];
          FUN_00691290(uVar2,local_80);
        }
        uVar10 = local_78;
        if ((*(byte *)(param_1 + 4) & 1) == 0) {
          iVar7 = FUN_0068ebc0(param_1[0x11],local_78);
          param_1[0x11] = iVar7;
          iVar7 = FUN_0068ebc0(param_1[0x13],uVar10);
          uVar10 = local_7c;
          param_1[0x13] = iVar7;
          iVar7 = FUN_0068ebc0(param_1[0x2f],local_7c);
          param_1[0x2f] = iVar7;
          iVar7 = FUN_0068ebc0(param_1[0x31],uVar10);
          param_1[0x31] = iVar7;
        }
        iVar5 = 0;
      }
    }
    else {
      param_1[0x11] = param_1[9] - param_1[0xd];
      param_1[0x12] = 0;
      param_1[0x2f] = param_1[0x2c] + param_1[0xc];
      param_1[0x13] = param_1[0xe] + (param_1[9] - param_1[0xd]);
      param_1[0x31] = (param_1[0x2c] + param_1[0xc]) - param_1[0x2d];
      param_1[0x14] = 0;
      param_1[0x2e] = 0;
      param_1[0x30] = 0;
      FUN_006bfa80(param_2);
      if ((short)param_1[8] < 1) {
        if ((short)param_1[8] == -1) {
          local_74 = (uint)*(short *)(iVar7 + 0x16);
          iStack_5c = (int)*(short *)(iVar7 + 0x14);
          iVar5 = (**(code **)(iVar9 + 0x210))(param_1);
          if (iVar5 == 0) {
            iStack_60 = param_1[0x2a];
            (**(code **)(iVar9 + 0x204))(param_1);
            if (*(char *)(iVar9 + 0x2c4) != '\0') {
              iStack_68 = *(int *)(iVar9 + 100);
              iVar5 = FUN_006c5e40(param_2,&local_80,*(int *)(iVar7 + 0x54) + 4);
              if (iVar5 != 0) goto LAB_006c7277;
              iStack_6c = *(int *)(iVar7 + 0x54);
              iVar6 = 0;
              if (0 < iStack_6c) {
                piVar8 = (int *)(*(int *)(iVar7 + 0x30) * 0x20 + *(int *)(iVar7 + 0x58) + 8);
                iVar6 = 0;
                do {
                  if ((*(byte *)(piVar8 + -1) & 2) != 0) {
                    *piVar8 = *piVar8 + (int)(short)local_80[iVar6 * 2];
                    piVar8[1] = piVar8[1] + (int)(short)local_80[iVar6 * 2 + 1];
                  }
                  iVar6 = iVar6 + 1;
                  piVar8 = piVar8 + 8;
                  iVar9 = local_70;
                } while (iVar6 < iStack_6c);
              }
              param_1[0x11] = param_1[0x11] + local_80[iVar6 * 2];
              param_1[0x12] = param_1[0x12] + local_80[iVar6 * 2 + 1];
              param_1[0x13] = param_1[0x13] + local_80[iVar6 * 2 + 2];
              param_1[0x14] = param_1[0x14] + local_80[iVar6 * 2 + 3];
              param_1[0x2e] = param_1[0x2e] + local_80[iVar6 * 2 + 4];
              param_1[0x2f] = param_1[0x2f] + local_80[iVar6 * 2 + 5];
              param_1[0x30] = param_1[0x30] + local_80[iVar6 * 2 + 6];
              param_1[0x31] = param_1[0x31] + local_80[iVar6 * 2 + 7];
              FUN_00691290(iStack_68,local_80);
            }
            if ((*(byte *)(param_1 + 4) & 1) == 0) {
              iVar6 = FUN_0068ebc0(param_1[0x11],local_78);
              param_1[0x11] = iVar6;
              iVar6 = FUN_0068ebc0(param_1[0x13],local_78);
              param_1[0x13] = iVar6;
              iVar6 = FUN_0068ebc0(param_1[0x2f],local_7c);
              param_1[0x2f] = iVar6;
              iVar6 = FUN_0068ebc0(param_1[0x31],local_7c);
              param_1[0x31] = iVar6;
            }
            if ((param_1[4] & 0x400U) == 0) {
              local_78 = *(uint *)(iVar7 + 0x54);
              iStack_50 = param_1[6];
              iVar9 = *(int *)(iVar7 + 0x30);
              uStack_64 = local_74;
              iStack_4c = param_1[7];
              iStack_6c = 0;
              FUN_0068f0c0(iVar7);
              local_7c = 0;
              uVar10 = uStack_64;
              if (local_78 != 0) {
                iStack_68 = param_3 + 1;
                local_80 = (int *)(iVar9 << 5);
                do {
                  iStack_44 = param_1[0x12];
                  iStack_40 = param_1[0x13];
                  iVar6 = param_1[0x11];
                  iStack_3c = param_1[0x14];
                  iStack_38 = param_1[0x2e];
                  iStack_34 = param_1[0x2f];
                  iStack_30 = param_1[0x30];
                  iStack_2c = param_1[0x31];
                  uStack_64 = (uint)*(short *)(iVar7 + 0x16);
                  iVar5 = FUN_006c6ce0(param_1,*(undefined4 *)
                                                (*(int *)(iVar7 + 0x34) + (int)local_80),iStack_68,0
                                      );
                  iVar9 = local_70;
                  if (iVar5 != 0) goto LAB_006c7277;
                  iStack_6c = *(int *)(iVar7 + 0x34) + (int)local_80;
                  if ((*(ushort *)(iStack_6c + 4) & 0x200) == 0) {
                    param_1[0x12] = iStack_44;
                    param_1[0x13] = iStack_40;
                    param_1[0x14] = iStack_3c;
                    param_1[0x2e] = iStack_38;
                    param_1[0x2f] = iStack_34;
                    param_1[0x11] = iVar6;
                    param_1[0x30] = iStack_30;
                    param_1[0x31] = iStack_2c;
                  }
                  uVar10 = (uint)*(short *)(iVar7 + 0x16);
                  if (uVar10 != uStack_64) {
                    FUN_006c0310(param_1,iStack_6c,local_74,uStack_64);
                  }
                  local_80 = local_80 + 8;
                  local_7c = local_7c + 1;
                } while (local_7c < local_78);
              }
              param_1[6] = iStack_50;
              param_1[7] = iStack_4c;
              param_1[0x2a] = iStack_60;
              iVar9 = local_70;
              if ((((*(byte *)(param_1 + 4) & 2) == 0) &&
                  ((*(ushort *)(iStack_6c + 4) & 0x100) != 0)) && (local_74 < uVar10)) {
                FUN_006c6a90(param_1,local_74,iStack_5c);
                iVar9 = local_70;
              }
            }
            else {
              FUN_0068f0c0(iVar7);
              *(undefined4 *)(param_1[2] + 0x48) = 0x636f6d70;
            }
            goto LAB_006c7277;
          }
        }
        else {
          iVar5 = 0x14;
        }
      }
      else {
        iVar5 = (**(code **)(iVar9 + 0x20c))(param_1);
        if (iVar5 == 0) {
          (**(code **)(iVar9 + 0x204))(param_1);
          iVar5 = FUN_006c6890(param_1);
          if (iVar5 == 0) {
            FUN_0068f0c0(iVar7);
          }
          goto LAB_006c7277;
        }
      }
    }
LAB_006c73d9:
    if (!bVar4) goto LAB_006c7277;
  }
  else {
    if ((param_1[0x15] == 0) && (*(int *)(*(int *)(iVar9 + 0x80) + 0x34) == 0)) {
      iVar5 = 8;
      goto LAB_006c7277;
    }
    iVar5 = (**(code **)(iVar9 + 0x200))(param_1,param_2,param_1[0x15] + local_74,param_1[7]);
    if (iVar5 != 0) goto LAB_006c7277;
    bVar4 = true;
    iVar5 = (**(code **)(iVar9 + 0x208))(param_1);
    if ((iVar5 == 0) && (param_4 == '\0')) goto LAB_006c6ea5;
  }
  (**(code **)(iVar9 + 0x204))(param_1);
LAB_006c7277:
  if (bVar3) {
    piVar8 = *(int **)(*(int *)(iVar9 + 0x80) + 0x34);
    (**(code **)(*piVar8 + 4))(piVar8[1],&local_58);
  }
  return iVar5;
}


/* FUN_006c75e0 @ 006c75e0  kind=gamemisc  attributed-by=none  size=275 */

int FUN_006c75e0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  if ((char)param_1[0x49] == '\0') {
    iVar3 = *(int *)(*(int *)(iVar1 + 0x60) + 0x28);
  }
  else {
    iVar3 = param_1[0x4a];
  }
  if (iVar3 == 0) {
    return 0x99;
  }
  FUN_006c0d40(iVar3,iVar1);
  *(undefined4 *)(iVar3 + 0x1ac) = 0;
  *(undefined4 *)(iVar3 + 0x10) = 0;
  *(undefined4 *)(iVar3 + 0x1dc) = 0x40;
  *(undefined4 *)(iVar3 + 0x1e0) = 0;
  *(undefined4 *)(iVar3 + 0x1e4) = 0;
  *(undefined1 *)(iVar3 + 0x1e8) = 0;
  *(undefined4 *)(iVar3 + 0x234) = 0x10000;
  *(undefined4 *)(iVar3 + 0xd8) = 0;
  *(undefined4 *)(iVar3 + 0xdc) = 0;
  *(undefined4 *)(iVar3 + 0xe0) = 0;
  *(undefined4 *)(iVar3 + 0x100) = 0x10000;
  *(undefined2 *)(iVar3 + 0xfc) = 0;
  *(undefined4 *)(iVar3 + 0x104) = 0;
  FUN_006c0be0(*(undefined4 *)(iVar1 + 0x28c));
  FUN_006c0c00();
  FUN_006c0c00();
  if (*(int *)(iVar1 + 0x28c) != 0) {
    iVar2 = FUN_006c0bb0(0);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(iVar1 + 0x2b0))(iVar3);
      if (iVar2 == 0) {
        FUN_006c0f30();
      }
    }
    return iVar2;
  }
  FUN_006c0f30();
  return 0;
}


/* FUN_006c7700 @ 006c7700  kind=gamemisc  attributed-by=none  size=200 */

int FUN_006c7700(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  iVar1 = *param_1;
  if ((char)param_1[0x49] == '\0') {
    iVar3 = *(int *)(*(int *)(iVar1 + 0x60) + 0x28);
  }
  else {
    iVar3 = param_1[0x4a];
  }
  iVar2 = 0;
  if (iVar3 == 0) {
    return 0x99;
  }
  FUN_006c0d40(iVar3,iVar1);
  *(undefined4 *)(iVar3 + 0x1ac) = 0;
  *(undefined4 *)(iVar3 + 0x10) = 0;
  *(undefined1 *)(iVar3 + 0x1e8) = 0;
  FUN_006c0be0(*(undefined4 *)(iVar1 + 0x294));
  FUN_006c0c00();
  if (*(int *)(iVar1 + 0x294) != 0) {
    iVar2 = FUN_006c0bb0(0);
    if ((iVar2 == 0) && ((char)param_1[0x49] == '\0')) {
      iVar2 = (**(code **)(iVar1 + 0x2b0))(iVar3);
    }
  }
  piVar4 = (int *)(iVar3 + 0x11c);
  piVar5 = param_1 + 0x2b;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  FUN_006c0f30();
  return iVar2;
}


/* FUN_006c7970 @ 006c7970  kind=gamemisc  attributed-by=none  size=248 */

void FUN_006c7970(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  
  if ((((char)param_1[0x4b] != '\0') || (iVar1 = FUN_006c77d0(param_1), iVar1 == 0)) &&
     (*(char *)((int)param_1 + 0x12d) == '\0')) {
    uVar3 = 0;
    iVar1 = *param_1;
    if (param_1[0x3c] != 0) {
      do {
        uVar2 = FUN_0068ebc0((int)*(short *)(*(int *)(iVar1 + 0x2a0) + uVar3 * 2),param_1[0x16]);
        *(undefined4 *)(param_1[0x3d] + uVar3 * 4) = uVar2;
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)param_1[0x3c]);
    }
    uVar3 = 0;
    if ((short)param_1[0x42] != 0) {
      do {
        *(undefined4 *)(param_1[0x43] + uVar3 * 8) = 0;
        *(undefined4 *)(param_1[0x43] + 4 + uVar3 * 8) = 0;
        *(undefined4 *)(param_1[0x44] + uVar3 * 8) = 0;
        *(undefined4 *)(param_1[0x44] + 4 + uVar3 * 8) = 0;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)(param_1 + 0x42));
    }
    uVar3 = 0;
    if ((short)param_1[0x3e] != 0) {
      do {
        *(undefined4 *)(param_1[0x3f] + uVar3 * 4) = 0;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)(param_1 + 0x3e));
    }
    piVar4 = &DAT_00735e08;
    piVar5 = param_1 + 0x2b;
    for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    iVar1 = FUN_006c7700(param_1);
    if (iVar1 == 0) {
      *(undefined1 *)((int)param_1 + 0x12d) = 1;
    }
  }
  return;
}


/* FUN_006c7ab0 @ 006c7ab0  kind=gamemisc  attributed-by=none  size=372 */

int FUN_006c7ab0(int param_1,uint param_2,int *param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int local_8 [2];
  
  uVar1 = *(undefined4 *)(param_1 + 100);
  iVar5 = 0;
  local_8[0] = 0;
  *(undefined1 *)(param_1 + 0x2c4) = 0;
  if ((*(int *)(param_1 + 0x2c8) != 0) || (local_8[0] = FUN_006c5630(param_1,0), local_8[0] == 0)) {
    puVar2 = *(uint **)(param_1 + 0x2c8);
    if (param_2 != *(uint *)puVar2[2]) {
      return 6;
    }
    uVar3 = 0;
    if (param_2 != 0) {
      do {
        if (param_3[uVar3] < -0x10000) {
          return 6;
        }
        if (0x10000 < param_3[uVar3]) {
          return 6;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_2);
    }
    if ((puVar2[9] != 0) || (local_8[0] = FUN_006c52d0(param_1), local_8[0] == 0)) {
      if (puVar2[1] == 0) {
        uVar3 = FUN_00693a60(uVar1,4,0,param_2,0,local_8);
        puVar2[1] = uVar3;
        if (local_8[0] != 0) {
          return local_8[0];
        }
        iVar5 = 1;
      }
      else {
        uVar3 = 0;
        local_8[1] = 0;
        if (param_2 != 0) {
          piVar4 = param_3;
          do {
            if (*(int *)((puVar2[1] - (int)param_3) + (int)piVar4) != *piVar4) {
              iVar5 = 2;
              goto LAB_006c7baa;
            }
            uVar3 = uVar3 + 1;
            piVar4 = piVar4 + 1;
          } while (uVar3 < param_2);
          iVar5 = 0;
        }
      }
LAB_006c7baa:
      *puVar2 = param_2;
      memcpy((void *)puVar2[1],param_3,param_2 * 4);
      *(undefined1 *)(param_1 + 0x2c4) = 1;
      if (*(int *)(param_1 + 0x2a0) != 0) {
        if (iVar5 == 1) {
          FUN_006c5a90(param_1);
        }
        else if (iVar5 == 2) {
          FUN_00691290(uVar1,*(int *)(param_1 + 0x2a0));
          *(undefined4 *)(param_1 + 0x2a0) = 0;
          FUN_006c6540(*(undefined4 *)(param_1 + 0x68));
          return local_8[0];
        }
      }
    }
  }
  return local_8[0];
}


/* FUN_006c7e30 @ 006c7e30  kind=gamemisc  attributed-by=none  size=482 */

int FUN_006c7e30(int *param_1,int param_2,int param_3,uint param_4,char param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  
  iVar1 = *(int *)(param_3 + 4);
  iVar2 = *(int *)(iVar1 + 0x68);
  memset(param_1,0,0xd0);
  if (((param_4 & 2) == 0) && (param_5 == '\0')) {
    if ((*(char *)(param_2 + 0x12d) == '\0') && (iVar3 = FUN_006c7970(param_2), iVar3 != 0)) {
      return iVar3;
    }
    if (*(char *)(param_2 + 0x124) == '\0') {
      iVar3 = *(int *)(*(int *)(iVar1 + 0x60) + 0x28);
    }
    else {
      iVar3 = *(int *)(param_2 + 0x128);
    }
    if (iVar3 == 0) {
      return 0x99;
    }
    bVar9 = (param_4 & 0xf0000) != 0x20000;
    FUN_006c0d40(iVar3,iVar1);
    if (bVar9 != (bool)*(char *)(iVar3 + 0x25c)) {
      uVar6 = 0;
      *(bool *)(iVar3 + 0x25c) = bVar9;
      if (*(int *)(param_2 + 0xf0) != 0) {
        do {
          uVar4 = FUN_0068ebc0((int)*(short *)(*(int *)(iVar1 + 0x2a0) + uVar6 * 2),
                               *(undefined4 *)(param_2 + 0x58));
          *(undefined4 *)(*(int *)(param_2 + 0xf4) + uVar6 * 4) = uVar4;
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)(param_2 + 0xf0));
      }
      FUN_006c7700(param_2);
    }
    if ((*(byte *)(iVar3 + 0x150) & 1) != 0) {
      param_4 = param_4 | 2;
    }
    if ((*(byte *)(iVar3 + 0x150) & 2) != 0) {
      puVar7 = &DAT_00735e08;
      puVar8 = (undefined4 *)(iVar3 + 0x11c);
      for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    *(byte *)(iVar3 + 0x231) = (byte)param_4 & 0x80;
    param_1[0x28] = iVar3;
    param_1[0x29] = *(int *)(iVar3 + 0x188);
  }
  if (*(int *)(*(int *)(iVar1 + 0x80) + 0x34) == 0) {
    iVar3 = (**(code **)(iVar1 + 0x1fc))(iVar1,0x676c7966,iVar2,0);
    if (iVar3 == 0x8e) {
      param_1[0x15] = 0;
    }
    else {
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_00690930(iVar2);
      param_1[0x15] = iVar3;
    }
  }
  else {
    param_1[0x15] = 0;
  }
  if (param_5 == '\0') {
    iVar3 = **(int **)(param_3 + 0x9c);
    FUN_0068f020(iVar3);
    param_1[3] = iVar3;
  }
  param_1[4] = param_4;
  *param_1 = iVar1;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[6] = iVar2;
  return 0;
}


/* FUN_006c8670 @ 006c8670  kind=gamemisc  attributed-by=none  size=21 */

uint FUN_006c8670(void)

{
  uint in_EAX;
  int in_ECX;
  
  if (in_EAX < *(uint *)(in_ECX + 4)) {
    return *(byte *)(*(int *)(in_ECX + 8) + in_EAX) & 0x80;
  }
  return in_EAX & 0xffffff00;
}


/* FUN_006c8710 @ 006c8710  kind=gamemisc  attributed-by=none  size=217 */

int FUN_006c8710(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  short *psVar1;
  short *_Dst;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBX;
  short *psVar4;
  short *psVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  int local_4;
  
  iVar3 = *(int *)(unaff_EBX + 0x10);
  local_4 = 0;
  if (*(int *)(unaff_EBX + 0xc) < iVar3) {
LAB_006c8777:
    psVar1 = *(short **)(unaff_EBX + 0x14);
    psVar4 = psVar1 + *(int *)(unaff_EBX + 0xc) * 0x18;
    _Dst = psVar4;
    while (psVar1 < _Dst) {
      psVar4 = psVar4 + -0x18;
      if ((*psVar4 < param_1) || ((*psVar4 == param_1 && (param_2 == *(int *)(unaff_EBX + 0x18)))))
      break;
      psVar5 = _Dst + -0x18;
      psVar7 = psVar4;
      psVar8 = _Dst;
      for (iVar3 = 0xc; _Dst = psVar5, iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)psVar8 = *(undefined4 *)psVar7;
        psVar7 = psVar7 + 2;
        psVar8 = psVar8 + 2;
      }
    }
    *(int *)(unaff_EBX + 0xc) = *(int *)(unaff_EBX + 0xc) + 1;
    memset(_Dst,0,0x30);
    *_Dst = (short)param_1;
    *(undefined1 *)((int)_Dst + 0xd) = (undefined1)param_2;
    *param_4 = _Dst;
    return local_4;
  }
  if (iVar3 < 0x2aaaaaa) {
    iVar6 = (iVar3 >> 2) + 4 + iVar3;
    if ((iVar6 < iVar3) || (0x2aaaaaa < iVar6)) {
      iVar6 = 0x2aaaaaa;
    }
    uVar2 = FUN_00693a60(param_3,0x30,iVar3,iVar6,*(undefined4 *)(unaff_EBX + 0x14),&local_4);
    *(undefined4 *)(unaff_EBX + 0x14) = uVar2;
    if (local_4 == 0) {
      *(int *)(unaff_EBX + 0x10) = iVar6;
      goto LAB_006c8777;
    }
  }
  else {
    local_4 = 0x40;
  }
  *param_4 = 0;
  return local_4;
}


/* FUN_006c87f0 @ 006c87f0  kind=gamemisc  attributed-by=none  size=93 */

undefined4 FUN_006c87f0(void)

{
  uint in_EAX;
  undefined4 uVar1;
  uint in_ECX;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar2 = in_ECX;
  if ((int)in_EAX < (int)in_ECX) {
    if ((int)in_EAX < (int)-in_ECX) {
      uVar4 = 0xfffffffe;
    }
    else {
      uVar4 = 1;
      uVar2 = in_EAX;
      in_EAX = in_ECX;
    }
  }
  else if ((int)in_EAX < (int)-in_ECX) {
    uVar4 = 0xffffffff;
    uVar2 = in_EAX;
    in_EAX = -in_ECX;
  }
  else {
    uVar4 = 2;
  }
  uVar3 = (int)(uVar2 * 0xe) >> 0x1f;
  uVar1 = 4;
  if ((int)((uVar2 * 0xe ^ uVar3) - uVar3) <
      (int)((in_EAX ^ (int)in_EAX >> 0x1f) - ((int)in_EAX >> 0x1f))) {
    uVar1 = uVar4;
  }
  return uVar1;
}


/* FUN_006c8870 @ 006c8870  kind=gamemisc  attributed-by=none  size=129 */

void FUN_006c8870(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = param_1;
  if ((param_1 != (int *)0x0) && (iVar1 = *param_1, iVar1 != 0)) {
    piVar3 = param_1 + 0xe;
    param_1 = (int *)0x2;
    do {
      piVar3[-2] = 0;
      piVar3[-1] = 0;
      FUN_00691290(iVar1,*piVar3);
      *piVar3 = 0;
      piVar3[1] = 0;
      piVar3[2] = 0;
      FUN_00691290(iVar1,piVar3[3]);
      piVar3[3] = 0;
      piVar3 = piVar3 + 7;
      param_1 = (int *)((int)param_1 + -1);
    } while (param_1 != (int *)0x0);
    FUN_00691290(iVar1,piVar2[0xb]);
    piVar2[0xb] = 0;
    piVar2[9] = 0;
    piVar2[10] = 0;
    FUN_00691290(iVar1,piVar2[8]);
    piVar2[8] = 0;
    piVar2[7] = 0;
    piVar2[6] = 0;
    *piVar2 = 0;
  }
  return;
}


/* FUN_006ca150 @ 006ca150  kind=gamemisc  attributed-by=none  size=354 */

void FUN_006ca150(void)

{
  uint uVar1;
  int in_ECX;
  int in_EDX;
  
  uVar1 = *(uint *)(in_EDX + 0x6c);
  if (((uVar1 & 4) != 0) && (*(char *)(in_ECX * 0x18c + *(int *)(in_EDX + 0x70) + 0xfc) == '\0')) {
    if (in_ECX == 1) {
      uVar1 = uVar1 & 2;
    }
    else {
      uVar1 = uVar1 & 1;
    }
    if (uVar1 != 0) {
      FUN_006cb000();
    }
  }
  return;
}


/* FUN_006cb000 @ 006cb000  kind=gamemisc  attributed-by=none  size=80 */

int FUN_006cb000(void)

{
  int in_EAX;
  int in_ECX;
  int iVar1;
  uint uVar2;
  int in_EDX;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0x62;
  iVar3 = in_EAX;
  if (0 < in_ECX) {
    piVar4 = (int *)(in_EDX + 4);
    do {
      iVar1 = in_EAX - *piVar4;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (iVar1 < iVar5) {
        iVar3 = *piVar4;
        iVar5 = iVar1;
      }
      piVar4 = piVar4 + 3;
      in_ECX = in_ECX + -1;
    } while (in_ECX != 0);
  }
  uVar2 = iVar3 + 0x20U & 0xffffffc0;
  if (in_EAX < iVar3) {
    if ((int)(uVar2 - 0x30) < in_EAX) {
      in_EAX = iVar3;
    }
  }
  else if (in_EAX < (int)(uVar2 + 0x30)) {
    return iVar3;
  }
  return in_EAX;
}


/* FUN_006cb050 @ 006cb050  kind=gamemisc  attributed-by=none  size=297 */

void FUN_006cb050(int param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = *(uint *)(param_1 + 0x6c);
  if ((uVar1 & 4) != 0) {
    if (in_ECX == 1) {
      uVar1 = uVar1 & 2;
    }
    else {
      uVar1 = uVar1 & 1;
    }
    if (uVar1 != 0) {
      FUN_006cb000();
    }
  }
  return;
}


/* FUN_006cb1a0 @ 006cb1a0  kind=gamemisc  attributed-by=none  size=13 */

void FUN_006cb1a0(void)

{
  int in_EAX;
  int in_ECX;
  
  *(int *)(in_EAX + 8) = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) + *(int *)(in_EAX + 4);
  return;
}


/* FUN_006cb1b0 @ 006cb1b0  kind=gamemisc  attributed-by=none  size=399 */

uint FUN_006cb1b0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  uint uVar5;
  int in_EDX;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar1 = *(uint *)(in_EDX + 0x6c) & 4;
  iVar7 = 0x40;
  if (uVar1 == 0) {
    if (((*(byte *)(param_1 + 0xc) & 1) == 0) || ((*(byte *)(param_2 + 0xc) & 1) == 0)) {
      iVar7 = (uint)(in_ECX == 1) * 2 + 0x3b;
    }
    else {
      iVar7 = (-(uint)(in_ECX != 1) & 0xfffffffa) + 0x37;
    }
  }
  iVar3 = *(int *)(param_2 + 4);
  iVar6 = *(int *)(param_1 + 4);
  uVar2 = FUN_006cb050();
  uVar5 = ((iVar3 + iVar6) / 2 - (int)uVar2 / 2) + param_3;
  iVar6 = uVar5 - (uVar5 & 0xffffffc0);
  iVar3 = (uVar5 + uVar2) - (uVar5 + uVar2 & 0xffffffc0);
  uVar9 = 0x40 - iVar6;
  uVar8 = 0;
  if ((iVar6 == 0) || (iVar3 == 0)) goto LAB_006cb2a9;
  if (iVar7 < (int)uVar2) {
    if ((0x3f < iVar7) ||
       ((((iVar6 < iVar7 && ((int)uVar9 < iVar7)) && (iVar3 < iVar7)) && (0x40 - iVar3 < iVar7)))) {
      uVar4 = uVar2 & 0x8000003f;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
      }
      if ((int)uVar4 < 0x20) {
        if (((int)uVar9 <= (int)uVar4) || (iVar3 <= (int)uVar4)) goto LAB_006cb2a5;
      }
      else {
        uVar4 = 0x40 - iVar7;
      }
      uVar8 = iVar7 - iVar3;
      uVar10 = uVar9 - uVar4;
      if ((int)(iVar7 - uVar9) <= (int)uVar10) {
        uVar10 = -(iVar7 - uVar9);
      }
      if ((int)(iVar3 - uVar4) <= (int)uVar8) {
        uVar8 = -(iVar3 - uVar4);
      }
      if ((int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f)) <=
          (int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f))) {
        uVar8 = uVar10;
      }
      goto LAB_006cb2a9;
    }
  }
  else if (iVar3 < (int)uVar2) {
    uVar8 = uVar9;
    if (iVar3 < (int)uVar9) {
      uVar8 = -iVar3;
    }
    goto LAB_006cb2a9;
  }
LAB_006cb2a5:
  uVar8 = 0;
LAB_006cb2a9:
  if (uVar1 == 0) {
    if ((int)uVar8 < 0xf) {
      if ((int)uVar8 < -0xe) {
        uVar8 = 0xfffffff2;
      }
    }
    else {
      uVar8 = 0xe;
    }
  }
  iVar7 = uVar5 + uVar8;
  if (*(int *)(param_2 + 4) <= *(int *)(param_1 + 4)) {
    *(uint *)(param_1 + 8) = uVar2 + iVar7;
    *(int *)(param_2 + 8) = iVar7;
    return uVar8;
  }
  *(int *)(param_1 + 8) = iVar7;
  *(uint *)(param_2 + 8) = iVar7 + uVar2;
  return uVar8;
}


/* FUN_006cb810 @ 006cb810  kind=gamemisc  attributed-by=none  size=2030 */

void FUN_006cb810(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint local_64;
  uint local_60;
  int local_5c;
  int local_58;
  uint local_54;
  int local_50;
  int local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int *local_3c;
  int *local_38;
  int local_34;
  int local_30;
  uint local_2c;
  undefined2 local_28;
  undefined2 uStack_26;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_64;
  local_3c = (int *)param_1[0x22];
  local_50 = param_2;
  iVar1 = *(int *)(*param_1 + 0x54);
  local_38 = *(int **)(iVar1 + 0x9c);
  iVar7 = param_1[2];
  iVar4 = FUN_00692620(*param_1,param_3,param_4);
  if (iVar4 == 0) {
    iVar4 = local_38[2];
    *(char *)(param_1 + 0x23) = (char)iVar4;
    if ((char)iVar4 != '\0') {
      param_1[0x24] = local_38[3];
      param_1[0x25] = local_38[4];
      param_1[0x26] = local_38[5];
      param_1[0x27] = local_38[6];
      param_1[0x28] = local_38[7];
      local_10 = param_1[0x25];
      local_14 = param_1[0x24];
      param_1[0x29] = local_38[8];
      local_c = param_1[0x26];
      local_8 = param_1[0x27];
      FUN_0068ecd0(&local_14);
      FUN_00690500(param_1 + 0x28,&local_14);
    }
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar1 + 0x28);
    *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(iVar1 + 0x34);
    if (*(int *)(iVar1 + 0x48) == 0x636f6d70) {
      uVar9 = *(uint *)(iVar1 + 0x80);
      local_58 = (int)*(short *)(iVar7 + 0x16);
      local_48 = uVar9;
      local_5c = FUN_00693db0(iVar7,uVar9);
      if (local_5c != 0) goto LAB_006cbfeb;
      memcpy(*(void **)(iVar7 + 0x58),*(void **)(iVar1 + 0x84),uVar9 << 5);
      *(uint *)(iVar7 + 0x54) = uVar9;
      local_64 = 0;
      if (uVar9 != 0) {
        local_4c = *(int *)(iVar7 + 0x30) << 5;
        do {
          local_30 = param_1[0x2b];
          local_34 = param_1[0x2a];
          uVar9 = (uint)*(short *)(iVar7 + 0x16);
          local_10 = param_1[0x2d];
          local_14 = param_1[0x2c];
          local_60 = uVar9;
          local_5c = FUN_006cb810(param_1,local_50,
                                  *(undefined4 *)(*(int *)(iVar7 + 0x34) + local_4c),param_4,
                                  param_5 + 1);
          if (local_5c != 0) goto LAB_006cbfeb;
          local_40 = *(int *)(iVar7 + 0x34) + local_4c;
          if ((*(ushort *)(local_40 + 4) & 0x200) == 0) {
            param_1[0x2a] = local_34;
            param_1[0x2b] = local_30;
            param_1[0x2c] = local_14;
            param_1[0x2d] = local_10;
          }
          local_54 = (int)*(short *)(iVar7 + 0x16) - uVar9;
          if ((*(byte *)(local_40 + 4) & 200) != 0) {
            uVar10 = *(int *)(iVar7 + 0x18) + uVar9 * 8;
            local_2c = uVar10 + local_54 * 8;
            uVar9 = local_60;
            if (uVar10 < local_2c) {
              do {
                FUN_00690500(uVar10,local_40 + 0x10);
                uVar10 = uVar10 + 8;
                uVar9 = local_60;
              } while (uVar10 < local_2c);
            }
          }
          if ((*(byte *)(local_40 + 4) & 2) == 0) {
            uVar5 = local_58 + *(int *)(local_40 + 8);
            if ((uVar9 <= uVar5) || (local_54 <= *(uint *)(local_40 + 0xc))) {
              __security_check_cookie(local_4 ^ (uint)&local_64);
              return;
            }
            iVar4 = *(int *)(iVar7 + 0x18);
            iVar8 = *(uint *)(local_40 + 0xc) + uVar9 + local_58;
            uVar10 = *(int *)(iVar4 + uVar5 * 8) - *(int *)(iVar4 + iVar8 * 8);
            uVar9 = *(int *)(iVar4 + 4 + uVar5 * 8) - *(int *)(iVar4 + 4 + iVar8 * 8);
          }
          else {
            iVar4 = FUN_0068ebc0(*(undefined4 *)(local_40 + 8),param_1[4]);
            uVar10 = iVar4 + param_1[5] + 0x20U & 0xffffffc0;
            iVar4 = FUN_0068ebc0(*(undefined4 *)(local_40 + 0xc),param_1[6]);
            uVar9 = iVar4 + 0x20 + param_1[7] & 0xffffffc0;
          }
          local_20 = *(undefined4 *)(iVar7 + 0x1c);
          local_1c = *(undefined4 *)(iVar7 + 0x20);
          local_18 = *(undefined4 *)(iVar7 + 0x24);
          local_24 = *(int *)(iVar7 + 0x18) + local_60 * 8;
          _local_28 = CONCAT22((undefined2)local_54,(short)*(undefined4 *)(iVar7 + 0x14));
          FUN_006904c0(&local_28,uVar10,uVar9);
          local_4c = local_4c + 0x20;
          local_64 = local_64 + 1;
        } while (local_64 < local_48);
      }
    }
    else if (*(int *)(iVar1 + 0x48) == 0x6f75746c) {
      if ((char)param_1[0x23] != '\0') {
        FUN_006904c0(iVar1 + 0x6c,param_1[0x28],param_1[0x29]);
      }
      local_64 = (int)*(short *)(iVar1 + 0x6e) + 4;
      if (((local_64 == 0) ||
          ((uint)(*(short *)(iVar7 + 0x16) + 4 +
                 (int)*(short *)(iVar7 + 0x3a) + (int)*(short *)(iVar1 + 0x6e)) <=
           *(uint *)(iVar7 + 4))) &&
         ((*(short *)(iVar1 + 0x6c) == 0 ||
          ((uint)((int)*(short *)(iVar7 + 0x38) + (int)*(short *)(iVar7 + 0x14) +
                 (int)*(short *)(iVar1 + 0x6c)) <= *(uint *)(iVar7 + 8))))) {
        local_5c = 0;
      }
      else {
        local_5c = FUN_00693c40(iVar7,local_64,(int)*(short *)(iVar1 + 0x6c));
        if (local_5c != 0) goto LAB_006cbfeb;
      }
      memcpy(*(void **)(iVar7 + 0x3c),*(void **)(iVar1 + 0x70),*(short *)(iVar1 + 0x6e) * 8);
      memcpy(*(void **)(iVar7 + 0x44),*(void **)(iVar1 + 0x78),*(short *)(iVar1 + 0x6c) * 2);
      memcpy(*(void **)(iVar7 + 0x40),*(void **)(iVar1 + 0x74),(int)*(short *)(iVar1 + 0x6e));
      *(undefined2 *)(iVar7 + 0x3a) = *(undefined2 *)(iVar1 + 0x6e);
      *(undefined2 *)(iVar7 + 0x38) = *(undefined2 *)(iVar1 + 0x6c);
      param_1[0x2a] = param_1[5];
      param_1[0x2b] = param_1[7];
      iVar4 = FUN_0068ebc0(*(undefined4 *)(iVar1 + 0x28),param_1[4]);
      param_1[0x2c] = iVar4 + param_1[5];
      param_1[0x2d] = param_1[7];
      if (*(short *)(iVar1 + 0x6e) != 0) {
        if (*(code **)(*local_3c + 0x1c) != (code *)0x0) {
          (**(code **)(*local_3c + 0x1c))(param_1 + 3,iVar7 + 0x38,local_3c);
        }
        if (*(int *)(local_50 + 0x14) == 1) {
          iVar4 = param_1[0x2a];
          iVar8 = param_1[0x2c];
          param_1[0x2a] = param_1[0x20] + 0x20 + iVar4 & 0xffffffc0;
          param_1[0x2c] = param_1[0x21] + 0x20 + iVar8 & 0xffffffc0;
          *(int *)(iVar1 + 0x90) = param_1[0x2a] - iVar4;
          *(int *)(iVar1 + 0x94) = param_1[0x2c] - iVar8;
          FUN_0068f0c0(iVar7);
        }
        else {
          iVar4 = param_1[0x14];
          local_58 = iVar4 + -0x30 + param_1[0x12] * 0x30;
          if ((param_1[0x12] < 2) || ((*(byte *)(param_1 + 0x1d) & 4) != 0)) {
            iVar4 = param_1[0x2a];
            iVar8 = param_1[0x2c];
            uVar9 = iVar4 + 0x20U & 0xffffffc0;
            param_1[0x2a] = uVar9;
            param_1[0x2c] = iVar8 + 0x20U & 0xffffffc0;
            *(uint *)(iVar1 + 0x90) = uVar9 - iVar4;
            *(int *)(iVar1 + 0x94) = param_1[0x2c] - iVar8;
            FUN_0068f0c0(iVar7);
          }
          else {
            local_60 = *(uint *)(iVar4 + 4);
            local_50 = param_1[0x2c] - *(int *)(local_58 + 4);
            local_64 = *(uint *)(iVar4 + 8);
            iVar8 = local_64 - local_60;
            iVar4 = *(int *)(local_58 + 8) + local_50;
            if ((int)local_60 < 0x18) {
              iVar8 = iVar8 + -8;
            }
            if (local_50 < 0x18) {
              iVar4 = iVar4 + 8;
            }
            uVar9 = iVar8 + 0x20U & 0xffffffc0;
            local_54 = iVar4 + 0x20U & 0xffffffc0;
            param_1[0x2a] = uVar9;
            param_1[0x2c] = local_54;
            if (((int)local_64 <= (int)uVar9) && (0 < (int)local_60)) {
              param_1[0x2a] = uVar9 - 0x40;
            }
            if (((int)local_54 <= *(int *)(local_58 + 8)) && (0 < local_50)) {
              param_1[0x2c] = local_54 + 0x40;
            }
            *(int *)(iVar1 + 0x90) = param_1[0x2a] - iVar8;
            *(int *)(iVar1 + 0x94) = param_1[0x2c] - iVar4;
            FUN_0068f0c0(iVar7);
          }
        }
      }
    }
    else {
      local_5c = 7;
    }
    piVar2 = local_3c;
    if (param_5 == 0) {
      local_48 = *(int *)(iVar1 + 0x2c) - *(int *)(iVar1 + 0x20);
      local_44 = *(int *)(iVar1 + 0x30) - *(int *)(iVar1 + 0x24);
      local_48 = FUN_0068ebc0(local_48,local_3c[2]);
      local_44 = FUN_0068ebc0(local_44,piVar2[3]);
      if ((char)param_1[0x23] != '\0') {
        FUN_00690560(iVar7 + 0x14,param_1 + 0x24);
        FUN_00690500(&local_48,param_1 + 0x24);
      }
      if (param_1[0x2a] != 0) {
        FUN_006904c0(iVar7 + 0x14,-param_1[0x2a],0);
      }
      FUN_00690430(iVar7 + 0x14,&local_14);
      local_10 = local_10 & 0xffffffc0;
      local_c = local_c + 0x3f & 0xffffffc0;
      local_14 = local_14 & 0xffffffc0;
      local_8 = local_8 + 0x3f & 0xffffffc0;
      *(uint *)(iVar1 + 0x18) = local_c - local_14;
      *(uint *)(iVar1 + 0x20) = local_14;
      *(uint *)(iVar1 + 0x24) = local_8;
      *(uint *)(iVar1 + 0x1c) = local_8 - local_10;
      *(uint *)(iVar1 + 0x2c) = local_14 + local_48 & 0xffffffc0;
      *(uint *)(iVar1 + 0x30) = local_8 + local_44 & 0xffffffc0;
      if (((*(byte *)(*(int *)(iVar1 + 4) + 8) & 4) == 0) &&
         ((cVar3 = FUN_006c8670(), cVar3 == '\0' || ((char)piVar2[8] == '\0')))) {
        if (*(int *)(iVar1 + 0x28) != 0) {
          *(int *)(iVar1 + 0x28) = param_1[0x2c] - param_1[0x2a];
        }
      }
      else {
        uVar6 = FUN_0068ebc0(*(undefined4 *)(iVar1 + 0x28),piVar2[2]);
        *(undefined4 *)(iVar1 + 0x28) = uVar6;
        *(undefined4 *)(iVar1 + 0x90) = 0;
        *(undefined4 *)(iVar1 + 0x94) = 0;
      }
      iVar4 = FUN_0068ebc0(*(undefined4 *)(iVar1 + 0x34),piVar2[3]);
      piVar2 = local_38;
      *(uint *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + 0x20U & 0xffffffc0;
      *(uint *)(iVar1 + 0x34) = iVar4 + 0x20U & 0xffffffc0;
      FUN_0068f020(*local_38);
      iVar7 = FUN_00693e10(*piVar2,iVar7);
      if (iVar7 == 0) {
        iVar7 = *piVar2;
        *(undefined4 *)(iVar1 + 0x6c) = *(undefined4 *)(iVar7 + 0x14);
        *(undefined4 *)(iVar1 + 0x70) = *(undefined4 *)(iVar7 + 0x18);
        *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(iVar7 + 0x1c);
        *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(iVar7 + 0x20);
        *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(iVar7 + 0x24);
        *(undefined4 *)(iVar1 + 0x48) = 0x6f75746c;
        __security_check_cookie(local_4 ^ (uint)&local_64);
        return;
      }
    }
  }
LAB_006cbfeb:
  __security_check_cookie(local_4 ^ (uint)&local_64);
  return;
}


/* FUN_006cc610 @ 006cc610  kind=gamemisc  attributed-by=none  size=112 */

undefined4 FUN_006cc610(int param_1,char *param_2)

{
  FILE *_File;
  long lVar1;
  
  if (param_1 == 0) {
    return 0x28;
  }
  _File = fopen(param_2,"rb");
  if (_File == (FILE *)0x0) {
    return 1;
  }
  fseek(_File,0,2);
  lVar1 = ftell(_File);
  *(long *)(param_1 + 4) = lVar1;
  fseek(_File,0,0);
  *(FILE **)(param_1 + 0xc) = _File;
  *(char **)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 **)(param_1 + 0x14) = &LAB_006cc5c0;
  *(code **)(param_1 + 0x18) = FUN_006cc5a0;
  return 0;
}


/* FUN_006cc6c0 @ 006cc6c0  kind=gamemisc  attributed-by=none  size=58 */

void FUN_006cc6c0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


/* FUN_006cc700 @ 006cc700  kind=gamemisc  attributed-by=none  size=224 */

int FUN_006cc700(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  void *_Dst;
  int *piVar2;
  int *piVar3;
  int iVar4;
  size_t _Size;
  
  piVar3 = param_3;
  piVar2 = param_2;
  uVar1 = *param_1;
  iVar4 = param_2[2];
  param_1 = (undefined4 *)0x0;
  if (param_2 == param_3) {
    return 0;
  }
  if (param_2[3] == 0) {
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    param_3[3] = param_2[3];
    param_3[4] = param_2[4];
    param_3[5] = param_2[5];
    return 0;
  }
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  _Size = *param_2 * iVar4;
  if (param_3[3] == 0) {
    iVar4 = FUN_00691240(uVar1,_Size,&param_1);
  }
  else {
    iVar4 = param_3[2];
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (*param_3 * iVar4 - _Size == 0) goto LAB_006cc7a1;
    iVar4 = FUN_00692290(uVar1,1,*param_3 * iVar4,_Size,param_3[3],&param_1);
  }
  piVar3[3] = iVar4;
  if (param_1 != (undefined4 *)0x0) {
    return (int)param_1;
  }
LAB_006cc7a1:
  _Dst = (void *)piVar3[3];
  *piVar3 = *piVar2;
  piVar3[1] = piVar2[1];
  piVar3[2] = piVar2[2];
  piVar3[3] = piVar2[3];
  piVar3[4] = piVar2[4];
  piVar3[5] = piVar2[5];
  piVar3[3] = (int)_Dst;
  memcpy(_Dst,(void *)piVar2[3],_Size);
  return (int)param_1;
}


/* FUN_006cc850 @ 006cc850  kind=gamemisc  attributed-by=none  size=57 */

int FUN_006cc850(void)

{
  int iVar1;
  undefined2 in_CX;
  
  iVar1 = FUN_006908c0();
  if (iVar1 == 0) {
    iVar1 = FUN_00691ec0();
    if ((iVar1 == 0) && (((char)in_CX != '\x1f' || ((char)((ushort)in_CX >> 8) != -99)))) {
      iVar1 = 3;
    }
  }
  return iVar1;
}


/* FUN_006cc8e0 @ 006cc8e0  kind=gamemisc  attributed-by=none  size=197 */

uint FUN_006cc8e0(void)

{
  byte *pbVar1;
  byte bVar2;
  int in_EAX;
  int iVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  
  uVar5 = *(uint *)(in_EAX + 0x18);
  uVar8 = *(uint *)(in_EAX + 0x34);
  if (((*(char *)(in_EAX + 0x20) != '\0') || (*(int *)(in_EAX + 0x1c) <= (int)uVar5)) ||
     (*(uint *)(in_EAX + 0x3c) <= *(uint *)(in_EAX + 0x38))) {
    if (*(uint *)(in_EAX + 0x3c) <= *(uint *)(in_EAX + 0x38)) {
      uVar8 = uVar8 + 1;
      *(uint *)(in_EAX + 0x34) = uVar8;
      if (uVar8 < *(uint *)(in_EAX + 0x28)) {
        iVar3 = (1 << ((byte)uVar8 & 0x1f)) + -0x100;
      }
      else {
        iVar3 = *(int *)(in_EAX + 0x30) + 1;
      }
      *(int *)(in_EAX + 0x3c) = iVar3;
    }
    if (*(char *)(in_EAX + 0x20) != '\0') {
      uVar8 = 9;
      *(undefined4 *)(in_EAX + 0x34) = 9;
      *(undefined4 *)(in_EAX + 0x3c) = 0x100;
      *(undefined1 *)(in_EAX + 0x20) = 0;
    }
    iVar3 = FUN_006cc890();
    if (iVar3 < 0) {
      return 0xffffffff;
    }
    uVar5 = 0;
  }
  pbVar1 = (byte *)(((int)uVar5 >> 3) + 8 + in_EAX);
  *(uint *)(in_EAX + 0x18) = uVar5 + uVar8;
  iVar3 = -(uVar5 & 7);
  iVar7 = iVar3 + 8;
  uVar8 = uVar8 - iVar7;
  uVar5 = (uint)(*pbVar1 >> (sbyte)(uVar5 & 7));
  pbVar6 = pbVar1 + 1;
  if (7 < uVar8) {
    bVar2 = *pbVar6;
    bVar4 = (byte)iVar7;
    pbVar6 = pbVar1 + 2;
    iVar7 = iVar3 + 0x10;
    uVar5 = uVar5 | (uint)bVar2 << (bVar4 & 0x1f);
    uVar8 = uVar8 - 8;
  }
  if (uVar8 != 0) {
    uVar5 = uVar5 | ((1 << ((byte)uVar8 & 0x1f)) - 1U & (uint)*pbVar6) << ((byte)iVar7 & 0x1f);
  }
  return uVar5;
}


/* FUN_006cc9b0 @ 006cc9b0  kind=gamemisc  attributed-by=none  size=87 */

undefined4 FUN_006cc9b0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int unaff_ESI;
  int local_4;
  
  uVar2 = *(uint *)(unaff_ESI + 0x60);
  if (uVar2 <= *(uint *)(unaff_ESI + 0x5c)) {
    iVar1 = (uVar2 >> 1) + 4 + uVar2;
    if (*(int *)(unaff_ESI + 0x58) == unaff_ESI + 100) {
      *(undefined4 *)(unaff_ESI + 0x58) = 0;
      uVar2 = 0;
    }
    uVar3 = FUN_00693a60(*(undefined4 *)(unaff_ESI + 0xa8),1,uVar2,iVar1,
                         *(undefined4 *)(unaff_ESI + 0x58),&local_4);
    *(undefined4 *)(unaff_ESI + 0x58) = uVar3;
    if (local_4 != 0) {
      return 0xffffffff;
    }
    *(int *)(unaff_ESI + 0x60) = iVar1;
  }
  return 0;
}


/* FUN_006cca10 @ 006cca10  kind=gamemisc  attributed-by=none  size=98 */

undefined4 FUN_006cca10(void)

{
  void *_Dst;
  uint _Size;
  int iVar1;
  int iVar2;
  int unaff_ESI;
  int local_4;
  
  _Size = *(uint *)(unaff_ESI + 0x54);
  if (_Size == 0) {
    iVar2 = 0x200;
  }
  else {
    iVar2 = (_Size >> 2) + _Size;
  }
  iVar1 = FUN_00693a60(*(undefined4 *)(unaff_ESI + 0xa8),3,_Size,iVar2,
                       *(undefined4 *)(unaff_ESI + 0x4c),&local_4);
  *(int *)(unaff_ESI + 0x4c) = iVar1;
  if (local_4 != 0) {
    return 0xffffffff;
  }
  _Dst = (void *)(iVar1 + iVar2 * 2);
  *(void **)(unaff_ESI + 0x50) = _Dst;
  memmove(_Dst,(void *)(iVar1 + _Size * 2),_Size);
  *(int *)(unaff_ESI + 0x54) = iVar2;
  return 0;
}


/* FUN_006cca80 @ 006cca80  kind=gamemisc  attributed-by=none  size=34 */

void FUN_006cca80(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[0x17] = 0;
  param_1[0xd] = 9;
  *param_1 = 0;
  return;
}


/* FUN_006ccb10 @ 006ccb10  kind=gamemisc  attributed-by=none  size=91 */

void FUN_006ccb10(void *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xa8);
  FUN_006cca80(param_1);
  if (*(int *)((int)param_1 + 0x58) != (int)param_1 + 100) {
    FUN_00691290(uVar1,*(int *)((int)param_1 + 0x58));
    *(undefined4 *)((int)param_1 + 0x58) = 0;
  }
  FUN_00691290(uVar1,*(undefined4 *)((int)param_1 + 0x4c));
  *(undefined4 *)((int)param_1 + 0x4c) = 0;
  *(undefined4 *)((int)param_1 + 0x50) = 0;
  memset(param_1,0,0xac);
  return;
}


/* FUN_006ccb70 @ 006ccb70  kind=gamemisc  attributed-by=none  size=668 */

uint FUN_006ccb70(int *param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint local_c;
  uint local_8;
  uint local_4;
  
  uVar4 = param_3;
  piVar2 = param_1;
  local_8 = param_1[0x11];
  uVar1 = param_1[0x10];
  local_4 = param_1[0x12];
  uVar7 = 0;
  local_c = uVar1;
  if (param_3 != 0) {
    iVar5 = *param_1;
    if (iVar5 == 0) {
      iVar5 = FUN_006908c0(param_1[0x29],2);
      if ((iVar5 == 0) && (iVar5 = FUN_006909c0(piVar2[0x29],&param_1,1), iVar5 == 1)) {
        uVar6 = (uint)param_1 & 0x1f;
        iVar5 = 1 << (sbyte)uVar6;
        piVar2[10] = uVar6;
        piVar2[0xb] = (uint)param_1 & 0x80;
        piVar2[0xc] = iVar5 + -0x100;
        if (uVar6 < 0x11) {
          piVar2[0xd] = 9;
          local_4 = 0;
          iVar3 = 0x100;
          piVar2[0xe] = (uint)(((uint)param_1 & 0x80) != 0);
          if (uVar6 < 10) {
            iVar3 = iVar5 + -0xff;
          }
          piVar2[0xf] = iVar3;
          local_c = FUN_006cc8e0();
          if (-1 < (int)local_c) {
            if (param_2 != (undefined1 *)0x0) {
              *param_2 = (char)local_c;
            }
            uVar7 = 1;
            local_8 = local_c;
            if (1 < uVar4) {
              *piVar2 = 1;
              goto LAB_006ccc7b;
            }
            goto LAB_006ccdee;
          }
        }
      }
LAB_006ccde7:
      local_c = uVar1;
      *piVar2 = 3;
    }
    else {
      if (iVar5 == 1) goto LAB_006ccc7b;
      if (iVar5 == 2) {
        do {
          iVar5 = piVar2[0x17];
          while (iVar5 != 0) {
            piVar2[0x17] = piVar2[0x17] + -1;
            if (param_2 != (undefined1 *)0x0) {
              param_2[uVar7] = *(undefined1 *)(piVar2[0x17] + piVar2[0x16]);
            }
            uVar7 = uVar7 + 1;
            if (uVar7 == param_3) goto LAB_006ccdee;
            iVar5 = piVar2[0x17];
          }
          if ((uint)piVar2[0xe] < (uint)piVar2[0xc]) {
            if (((uint)piVar2[0x15] <= (uint)piVar2[0xe]) &&
               (iVar5 = FUN_006cca10(), uVar1 = local_c, iVar5 < 0)) goto LAB_006ccde7;
            *(undefined2 *)(piVar2[0x13] + piVar2[0xe] * 2) = (undefined2)local_c;
            *(undefined1 *)(piVar2[0x14] + piVar2[0xe]) = (undefined1)local_8;
            piVar2[0xe] = piVar2[0xe] + 1;
          }
          local_c = local_4;
          *piVar2 = 1;
LAB_006ccc7b:
          uVar4 = FUN_006cc8e0();
          uVar1 = local_c;
          if ((int)uVar4 < 0) goto LAB_006ccde7;
          if ((uVar4 == 0x100) && (piVar2[0xb] != 0)) {
            piVar2[0xe] = 0;
            *(undefined1 *)(piVar2 + 8) = 1;
            uVar4 = FUN_006cc8e0();
            if ((int)uVar4 < 0) goto LAB_006ccde7;
          }
          local_4 = uVar4;
          if (0xff < uVar4) {
            if ((uint)piVar2[0xe] <= uVar4 - 0x100) {
              if (((uint)piVar2[0x18] <= (uint)piVar2[0x17]) && (iVar5 = FUN_006cc9b0(), iVar5 < 0))
              goto LAB_006ccde7;
              *(undefined1 *)(piVar2[0x16] + piVar2[0x17]) = (undefined1)local_8;
              piVar2[0x17] = piVar2[0x17] + 1;
              uVar4 = local_c;
            }
            for (; 0xff < uVar4; uVar4 = (uint)*(ushort *)(piVar2[0x13] + -0x200 + uVar4 * 2)) {
              if ((piVar2[0x13] == 0) ||
                 (((uint)piVar2[0x18] <= (uint)piVar2[0x17] && (iVar5 = FUN_006cc9b0(), iVar5 < 0)))
                 ) goto LAB_006ccde7;
              *(undefined1 *)(piVar2[0x16] + piVar2[0x17]) =
                   *(undefined1 *)(piVar2[0x14] + -0x100 + uVar4);
              piVar2[0x17] = piVar2[0x17] + 1;
            }
          }
          local_8 = uVar4;
          if (((uint)piVar2[0x18] <= (uint)piVar2[0x17]) && (iVar5 = FUN_006cc9b0(), iVar5 < 0))
          goto LAB_006ccde7;
          *(char *)(piVar2[0x16] + piVar2[0x17]) = (char)uVar4;
          piVar2[0x17] = piVar2[0x17] + 1;
          *piVar2 = 2;
        } while( true );
      }
    }
  }
LAB_006ccdee:
  piVar2[0x11] = local_8;
  piVar2[0x10] = local_c;
  piVar2[0x12] = local_4;
  return uVar7;
}


/* FUN_006ccf00 @ 006ccf00  kind=gamemisc  attributed-by=none  size=104 */

undefined4 FUN_006ccf00(void)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int unaff_EDI;
  
  uVar1 = *(int *)(unaff_EDI + 0x10c0) - *(int *)(unaff_EDI + 0x10bc);
  if (in_EAX <= uVar1) {
    uVar1 = in_EAX;
  }
  *(int *)(unaff_EDI + 0x10b8) = *(int *)(unaff_EDI + 0x10b8) + uVar1;
  uVar3 = in_EAX - uVar1;
  *(uint *)(unaff_EDI + 0x10bc) = *(int *)(unaff_EDI + 0x10bc) + uVar1;
  if (uVar3 != 0) {
    while( true ) {
      uVar1 = 0x1000;
      if (uVar3 < 0x1000) {
        uVar1 = uVar3;
      }
      uVar2 = FUN_006ccb70(unaff_EDI + 0xc,0,uVar1);
      if (uVar2 < uVar1) break;
      *(int *)(unaff_EDI + 0x10b8) = *(int *)(unaff_EDI + 0x10b8) + uVar1;
      uVar3 = uVar3 - uVar1;
      if (uVar3 == 0) {
        return 0;
      }
    }
    return 0x55;
  }
  return 0;
}


/* FUN_006cd080 @ 006cd080  kind=gamemisc  attributed-by=none  size=170 */

int FUN_006cd080(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  param_2 = FUN_006cc850();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[7] = uVar1;
    uVar2 = FUN_00692230(uVar1,0x10c4,&param_2);
    if (param_2 == 0) {
      param_2 = FUN_006cce10();
      if (param_2 != 0) {
        FUN_00691290(uVar1,uVar2);
        return param_2;
      }
      param_1[3] = uVar2;
      param_2 = 0;
    }
    param_1[1] = 0x7fffffff;
    param_1[2] = 0;
    *param_1 = 0;
    param_1[5] = &LAB_006cd060;
    param_1[6] = FUN_006cd030;
  }
  return param_2;
}


/* FUN_006cd130 @ 006cd130  kind=gamemisc  attributed-by=none  size=1240 */

/* WARNING: Type propagation algorithm not settling */

void FUN_006cd130(undefined4 *param_1,undefined4 ***param_2,int param_3,int param_4,
                 undefined4 *param_5,undefined4 ****param_6,uint *param_7,uint *param_8)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 **ppuVar3;
  uint uVar4;
  uint uVar5;
  int *in_ECX;
  undefined4 ***pppuVar6;
  undefined4 ***pppuVar7;
  int iVar8;
  int *piVar9;
  undefined4 ****ppppuVar10;
  int in_EDX;
  byte bVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  undefined4 ***pppuVar16;
  undefined4 ***local_110;
  undefined4 **local_10c;
  uint *local_108;
  undefined4 ***local_104;
  int local_100;
  undefined4 ****local_fc;
  int *local_f8;
  undefined4 *local_f4;
  undefined4 ***local_f0;
  undefined4 *local_ec;
  int local_e8;
  undefined4 local_e4;
  uint local_dc;
  uint *local_d8;
  uint *local_d4;
  undefined4 *local_d0;
  int local_c8;
  undefined4 *****local_c4 [16];
  undefined4 **local_84 [18];
  int aiStack_3c [14];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_110;
  local_d0 = param_5;
  local_d4 = param_7;
  local_ec = param_1;
  local_fc = param_6;
  local_d8 = param_8;
  pppuVar16 = (undefined4 ***)0x0;
  local_84[0] = (undefined4 **)0x0;
  local_84[1] = (undefined4 **)0x0;
  local_84[2] = (undefined4 **)0x0;
  local_84[3] = (undefined4 **)0x0;
  local_84[4] = (undefined4 **)0x0;
  local_84[5] = (undefined4 **)0x0;
  local_84[6] = (undefined4 **)0x0;
  local_84[7] = (undefined4 **)0x0;
  local_84[8] = (undefined4 **)0x0;
  local_84[9] = (undefined4 **)0x0;
  local_84[10] = (undefined4 **)0x0;
  local_84[0xb] = (undefined4 **)0x0;
  local_84[0xc] = (undefined4 **)0x0;
  local_84[0xd] = (undefined4 **)0x0;
  local_84[0xe] = (undefined4 **)0x0;
  local_84[0xf] = (undefined4 **)0x0;
  piVar9 = in_ECX;
  puVar13 = param_1;
  do {
    iVar14 = *piVar9;
    local_84[iVar14] = (undefined4 **)((int)local_84[iVar14] + 1);
    pppuVar6 = local_84 + iVar14;
    piVar9 = piVar9 + 1;
    puVar13 = (undefined4 *)((int)puVar13 + -1);
  } while (puVar13 != (undefined4 *)0x0);
  iVar14 = local_100;
  if (local_84[0] == (undefined4 **)param_1) {
    *param_5 = 0;
    *param_6 = (undefined4 ***)0x0;
    local_f8 = in_ECX;
  }
  else {
    pppuVar6 = (undefined4 ***)0x1;
    do {
      if (local_84[(int)pppuVar6] != (undefined4 **)0x0) break;
      pppuVar6 = (undefined4 ***)((int)pppuVar6 + 1);
    } while (pppuVar6 < (undefined4 ***)0x10);
    local_110 = *param_6;
    if (*param_6 < pppuVar6) {
      local_110 = pppuVar6;
    }
    local_f0 = (undefined4 ***)0xf;
    do {
      if (local_84[(int)local_f0] != (undefined4 **)0x0) break;
      local_f0 = (undefined4 ***)((int)local_f0 + -1);
    } while (local_f0 != (undefined4 ***)0x0);
    if (local_f0 < local_110) {
      local_110 = local_f0;
    }
    *param_6 = local_110;
    iVar12 = 1 << ((byte)pppuVar6 & 0x1f);
    for (pppuVar7 = pppuVar6; local_104 = pppuVar6, pppuVar7 < local_f0;
        pppuVar7 = (undefined4 ***)((int)pppuVar7 + 1)) {
      local_f8 = in_ECX;
      if (iVar12 - (int)local_84[(int)pppuVar7] < 0) goto LAB_006cd5f9;
      iVar12 = (iVar12 - (int)local_84[(int)pppuVar7]) * 2;
    }
    local_10c = (undefined4 **)((int)local_f0 * 4);
    local_c8 = iVar12 - (int)local_84[(int)local_f0];
    local_f8 = in_ECX;
    if (-1 < local_c8) {
      local_84[(int)local_f0] = (undefined4 **)((int)local_84[(int)local_f0] + local_c8);
      iVar14 = (int)local_f0 + -1;
      local_84[0x11] = (undefined4 **)0x0;
      if (iVar14 != 0) {
        iVar8 = 0;
        iVar12 = 0;
        do {
          iVar8 = iVar8 + *(int *)((int)local_84 + iVar12 + 4U);
          iVar14 = iVar14 + -1;
          *(int *)((int)aiStack_3c + iVar12) = iVar8;
          iVar12 = iVar12 + 4;
        } while (iVar14 != 0);
      }
      puVar13 = (undefined4 *)0x0;
      piVar9 = in_ECX;
      do {
        iVar14 = *piVar9;
        piVar9 = piVar9 + 1;
        if (iVar14 != 0) {
          puVar1 = local_84[iVar14 + 0x10];
          param_8[(int)puVar1] = (uint)puVar13;
          local_84[iVar14 + 0x10] = (undefined4 **)((int)puVar1 + 1);
        }
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      } while (puVar13 < param_1);
      local_ec = local_84[(int)(local_f0 + 4)];
      iVar12 = -(int)local_110;
      uVar15 = 0;
      local_f4 = (undefined4 *)0x0;
      local_84[0x10] = (undefined4 **)0x0;
      local_108 = param_8;
      local_100 = -1;
      local_c4[1] = (undefined4 *****)0x0;
      local_fc = (undefined4 ****)0x0;
      iVar14 = local_100;
      local_f8 = in_ECX;
      if ((int)pppuVar6 <= (int)local_f0) {
        local_10c = local_84 + (int)pppuVar6;
        do {
          piVar9 = *local_10c;
          if (piVar9 != (int *)0x0) {
            local_dc = (int)piVar9 + 1;
            do {
              local_dc = local_dc - 1;
              piVar9 = (int *)((int)piVar9 + -1);
              local_f8 = piVar9;
              if (iVar12 + (int)local_110 < (int)local_104) {
                local_e8 = iVar12 - (int)local_110;
                iVar8 = iVar12 + (int)local_110;
                do {
                  iVar12 = iVar8;
                  iVar14 = local_100 + 1;
                  local_e8 = local_e8 + (int)local_110;
                  pppuVar6 = (undefined4 ***)((int)local_f0 - iVar12);
                  if (local_110 < (undefined4 ***)((int)local_f0 - iVar12)) {
                    pppuVar6 = local_110;
                  }
                  pppuVar7 = (undefined4 ***)((int)local_104 - iVar12);
                  uVar15 = 1 << ((byte)pppuVar7 & 0x1f);
                  if ((local_dc < uVar15) &&
                     (iVar8 = uVar15 + (-1 - (int)piVar9), ppuVar3 = local_10c, pppuVar7 < pppuVar6)
                     ) {
                    while (pppuVar7 = (undefined4 ***)((int)pppuVar7 + 1), pppuVar7 < pppuVar6) {
                      if ((undefined4 *)(iVar8 * 2) <= ppuVar3[1]) break;
                      iVar8 = iVar8 * 2 - (int)ppuVar3[1];
                      ppuVar3 = ppuVar3 + 1;
                    }
                  }
                  uVar15 = 1 << ((byte)pppuVar7 & 0x1f);
                  pppuVar6 = (undefined4 ***)(*param_7 + uVar15);
                  if ((undefined4 ***)0x5a0 < pppuVar6) goto LAB_006cd5f9;
                  local_fc = (undefined4 ****)(in_EDX + *param_7 * 8);
                  local_c4[0] = local_c4 + local_100 + 2;
                  local_c4[local_100 + 2] = (undefined4 *****)local_fc;
                  *param_7 = (uint)pppuVar6;
                  if (iVar14 == 0) {
                    *param_5 = local_fc;
                  }
                  else {
                    local_84[local_100 + 0x11] = (undefined4 **)local_f4;
                    uVar4 = (uint)local_f4 >> ((byte)local_e8 & 0x1f);
                    ppppuVar10 = local_c4[iVar14];
                    local_e4._0_2_ = CONCAT11(local_110._0_1_,(byte)pppuVar7);
                    pppuVar16 = (undefined4 ***)(((int)local_fc - (int)ppppuVar10 >> 3) - uVar4);
                    ppppuVar10[uVar4 * 2] = local_e4;
                    ppppuVar10[uVar4 * 2 + 1] = pppuVar16;
                  }
                  iVar8 = iVar12 + (int)local_110;
                  local_100 = iVar14;
                } while (iVar12 + (int)local_110 < (int)local_104);
              }
              cVar2 = (char)local_104;
              bVar11 = (byte)iVar12;
              if (local_108 < param_8 + (int)local_ec) {
                pppuVar16 = (undefined4 ***)*local_108;
                if (pppuVar16 < param_2) {
                  local_e4._0_1_ = (-(pppuVar16 < (undefined4 ***)0x100) & 0xa0U) + 0x60;
                }
                else {
                  iVar14 = ((int)pppuVar16 - (int)param_2) * 4;
                  local_e4._0_1_ = *(char *)(iVar14 + param_4) + 'P';
                  pppuVar16 = *(undefined4 ****)(iVar14 + param_3);
                }
                local_108 = local_108 + 1;
              }
              else {
                local_e4._0_1_ = -0x40;
              }
              local_e4 = (undefined4 ***)
                         CONCAT31(CONCAT21(local_e4._2_2_,cVar2 - bVar11),(char)local_e4);
              iVar14 = 1 << (cVar2 - bVar11 & 0x1f);
              uVar4 = (uint)local_f4 >> (bVar11 & 0x1f);
              if (uVar4 < uVar15) {
                ppppuVar10 = local_fc + uVar4 * 2;
                do {
                  *ppppuVar10 = local_e4;
                  ppppuVar10[1] = pppuVar16;
                  uVar4 = uVar4 + iVar14;
                  ppppuVar10 = ppppuVar10 + iVar14 * 2;
                } while (uVar4 < uVar15);
              }
              uVar5 = 1 << (cVar2 - 1U & 0x1f);
              uVar4 = (uint)local_f4 & uVar5;
              while (uVar4 != 0) {
                local_f4 = (undefined4 *)((uint)local_f4 ^ uVar5);
                uVar5 = uVar5 >> 1;
                uVar4 = (uint)local_f4 & uVar5;
              }
              local_f4 = (undefined4 *)((uint)local_f4 ^ uVar5);
              if ((undefined4 **)((1 << (bVar11 & 0x1f)) - 1U & (uint)local_f4) !=
                  local_84[local_100 + 0x10]) {
                do {
                  iVar12 = iVar12 - (int)local_110;
                  iVar8 = local_100 + -1;
                  iVar14 = local_100 + 0xf;
                  local_100 = iVar8;
                } while ((undefined4 **)((1 << ((byte)iVar12 & 0x1f)) - 1U & (uint)local_f4) !=
                         local_84[iVar14]);
              }
            } while (piVar9 != (int *)0x0);
          }
          local_10c = local_10c + 1;
          pppuVar6 = (undefined4 ***)((int)local_104 + 1);
          local_104 = pppuVar6;
          iVar14 = local_100;
        } while ((int)pppuVar6 <= (int)local_f0);
      }
    }
  }
LAB_006cd5f9:
  local_100 = iVar14;
  __security_check_cookie(local_4 ^ (uint)&local_110,pppuVar6);
  return;
}


/* FUN_006cd870 @ 006cd870  kind=gamemisc  attributed-by=none  size=228 */

int FUN_006cd870(int param_1)

{
  void *_Src;
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 local_4;
  
  local_4 = *(void **)(unaff_EDI + 0xc);
  pvVar3 = *(void **)(unaff_ESI + 0x34);
  _Src = *(void **)(unaff_ESI + 0x30);
  if (pvVar3 < _Src) {
    pvVar3 = *(void **)(unaff_ESI + 0x2c);
  }
  uVar1 = *(uint *)(unaff_EDI + 0x10);
  uVar4 = (int)pvVar3 - (int)_Src;
  if (uVar1 < (uint)((int)pvVar3 - (int)_Src)) {
    uVar4 = uVar1;
  }
  if ((uVar4 != 0) && (param_1 == -5)) {
    param_1 = 0;
  }
  *(int *)(unaff_EDI + 0x14) = *(int *)(unaff_EDI + 0x14) + uVar4;
  *(uint *)(unaff_EDI + 0x10) = uVar1 - uVar4;
  if (*(code **)(unaff_ESI + 0x38) != (code *)0x0) {
    uVar2 = (**(code **)(unaff_ESI + 0x38))(*(undefined4 *)(unaff_ESI + 0x3c),_Src,uVar4);
    *(undefined4 *)(unaff_ESI + 0x3c) = uVar2;
    *(undefined4 *)(unaff_EDI + 0x30) = uVar2;
  }
  memcpy(local_4,_Src,uVar4);
  local_4 = (void *)((int)local_4 + uVar4);
  iVar5 = (int)_Src + uVar4;
  if (iVar5 == *(int *)(unaff_ESI + 0x2c)) {
    pvVar3 = *(void **)(unaff_ESI + 0x28);
    if (*(int *)(unaff_ESI + 0x34) == *(int *)(unaff_ESI + 0x2c)) {
      *(void **)(unaff_ESI + 0x34) = pvVar3;
    }
    uVar1 = *(uint *)(unaff_EDI + 0x10);
    uVar4 = *(int *)(unaff_ESI + 0x34) - (int)pvVar3;
    if (uVar1 < uVar4) {
      uVar4 = uVar1;
    }
    if ((uVar4 != 0) && (param_1 == -5)) {
      param_1 = 0;
    }
    *(int *)(unaff_EDI + 0x14) = *(int *)(unaff_EDI + 0x14) + uVar4;
    *(uint *)(unaff_EDI + 0x10) = uVar1 - uVar4;
    if (*(code **)(unaff_ESI + 0x38) != (code *)0x0) {
      uVar2 = (**(code **)(unaff_ESI + 0x38))(*(undefined4 *)(unaff_ESI + 0x3c),pvVar3,uVar4);
      *(undefined4 *)(unaff_ESI + 0x3c) = uVar2;
      *(undefined4 *)(unaff_EDI + 0x30) = uVar2;
    }
    memcpy(local_4,pvVar3,uVar4);
    local_4 = (void *)((int)local_4 + uVar4);
    iVar5 = (int)pvVar3 + uVar4;
  }
  *(void **)(unaff_EDI + 0xc) = local_4;
  *(int *)(unaff_ESI + 0x30) = iVar5;
  return param_1;
}


/* FUN_006cdf40 @ 006cdf40  kind=gamemisc  attributed-by=none  size=106 */

void FUN_006cdf40(void)

{
  int *in_EAX;
  int iVar1;
  int *unaff_ESI;
  int unaff_EDI;
  
  if (in_EAX != (int *)0x0) {
    *in_EAX = unaff_ESI[0xf];
  }
  if ((*unaff_ESI == 4) || (*unaff_ESI == 5)) {
    (**(code **)(unaff_EDI + 0x24))(*(undefined4 *)(unaff_EDI + 0x28),unaff_ESI[3]);
  }
  if (*unaff_ESI == 6) {
    FUN_006cdf30();
  }
  unaff_ESI[0xd] = unaff_ESI[10];
  unaff_ESI[0xc] = unaff_ESI[10];
  *unaff_ESI = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[8] = 0;
  if ((code *)unaff_ESI[0xe] != (code *)0x0) {
    iVar1 = (*(code *)unaff_ESI[0xe])(0,0,0);
    unaff_ESI[0xf] = iVar1;
    *(int *)(unaff_EDI + 0x30) = iVar1;
  }
  return;
}


/* FUN_006cdfb0 @ 006cdfb0  kind=gamemisc  attributed-by=none  size=153 */

undefined4 * FUN_006cdfb0(undefined4 param_1)

{
  int in_EAX;
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBX;
  
  puVar1 = (undefined4 *)(**(code **)(in_EAX + 0x20))(*(undefined4 *)(in_EAX + 0x28),1,0x40);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (**(code **)(in_EAX + 0x20))(*(undefined4 *)(in_EAX + 0x28),8,0x5a0);
    puVar1[9] = iVar2;
    if (iVar2 != 0) {
      iVar2 = (**(code **)(in_EAX + 0x20))(*(undefined4 *)(in_EAX + 0x28),1);
      puVar1[10] = iVar2;
      if (iVar2 == 0) {
        (**(code **)(in_EAX + 0x24))(*(undefined4 *)(in_EAX + 0x28),puVar1[9]);
        (**(code **)(in_EAX + 0x24))(*(undefined4 *)(in_EAX + 0x28),puVar1);
        return (undefined4 *)0x0;
      }
      puVar1[0xb] = iVar2 + unaff_EBX;
      puVar1[0xe] = param_1;
      *puVar1 = 0;
      FUN_006cdf40();
      return puVar1;
    }
    (**(code **)(in_EAX + 0x24))(*(undefined4 *)(in_EAX + 0x28),puVar1);
  }
  return (undefined4 *)0x0;
}


/* thunk_FUN_006cf090 @ 006cf0c0  kind=gamemisc  attributed-by=none  size=5 */

void thunk_FUN_006cf090(undefined4 param_1,int param_2,int param_3)

{
  FUN_00692230(param_1,param_2 * param_3,&param_2);
  return;
}


/* FUN_006cf0e0 @ 006cf0e0  kind=gamemisc  attributed-by=none  size=322 */

/* WARNING: Removing unreachable block (ram,0x006cf1ff) */
/* WARNING: Removing unreachable block (ram,0x006cf1c0) */

int FUN_006cf0e0(void)

{
  char cVar1;
  int iVar2;
  undefined4 local_4;
  
  iVar2 = FUN_006908c0();
  if ((iVar2 == 0) && (iVar2 = FUN_00691ec0(), iVar2 == 0)) {
    if (((char)local_4 == '\x1f') &&
       ((((char)(local_4 >> 8) == -0x75 && (local_4._2_1_ == '\b')) && ((local_4 & 0xe0000000) == 0)
        ))) {
      iVar2 = FUN_00690900();
      if (((local_4 & 0x4000000) == 0) ||
         ((FUN_00690bf0(), iVar2 == 0 && (iVar2 = FUN_00690900(), iVar2 == 0)))) {
        if ((local_4 & 0x8000000) != 0) {
          cVar1 = FUN_00690b20();
          if (iVar2 != 0) {
            return iVar2;
          }
          while (cVar1 != '\0') {
            cVar1 = FUN_00690b20();
          }
        }
        if ((local_4 & 0x10000000) != 0) {
          cVar1 = FUN_00690b20();
          if (iVar2 != 0) {
            return iVar2;
          }
          while (cVar1 != '\0') {
            cVar1 = FUN_00690b20();
          }
        }
        if ((local_4 & 0x2000000) != 0) {
          iVar2 = FUN_00690900();
          return iVar2;
        }
      }
    }
    else {
      iVar2 = 3;
    }
  }
  return iVar2;
}


/* FUN_006cf2b0 @ 006cf2b0  kind=gamemisc  attributed-by=none  size=114 */

undefined4 FUN_006cf2b0(int *param_1)

{
  int *piVar1;
  size_t _Size;
  
  piVar1 = (int *)*param_1;
  if ((code *)piVar1[5] == (code *)0x0) {
    _Size = piVar1[1] - piVar1[2];
    if (_Size < 0x1001) {
      if (_Size == 0) {
        return 0x55;
      }
    }
    else {
      _Size = 0x1000;
    }
    memcpy(param_1 + 0x12,(void *)(*piVar1 + piVar1[2]),_Size);
  }
  else {
    _Size = (*(code *)piVar1[5])(piVar1,piVar1[2],param_1 + 0x12,0x1000);
    if (_Size == 0) {
      return 0x55;
    }
  }
  piVar1[2] = piVar1[2] + _Size;
  param_1[4] = _Size;
  param_1[3] = (int)(param_1 + 0x12);
  return 0;
}


/* FUN_006cf330 @ 006cf330  kind=gamemisc  attributed-by=none  size=110 */

int FUN_006cf330(void)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  *(int *)(unaff_EDI + 0x204c) = unaff_EDI + 0x1048;
  *(int *)(unaff_EDI + 0x18) = unaff_EDI + 0x1048;
  *(undefined4 *)(unaff_EDI + 0x1c) = 0x1000;
  iVar2 = 0;
  while( true ) {
    if ((*(int *)(unaff_EDI + 0x10) == 0) && (iVar2 = FUN_006cf2b0(), iVar2 != 0)) {
      return iVar2;
    }
    iVar1 = FUN_006ceb90(0);
    if (iVar1 == 1) {
      *(int *)(unaff_EDI + 0x2050) = *(int *)(unaff_EDI + 0x18);
      if (*(int *)(unaff_EDI + 0x18) != *(int *)(unaff_EDI + 0x204c)) {
        return iVar2;
      }
      return 0x55;
    }
    if (iVar1 != 0) break;
    if (*(int *)(unaff_EDI + 0x1c) == 0) {
      return iVar2;
    }
  }
  return 0x55;
}


