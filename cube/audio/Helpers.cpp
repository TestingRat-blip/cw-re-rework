// Helpers (audio) -- cube. 87 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Helpers.h"

/* FUN_00401000 @ 00401000  kind=gamemisc  attributed-by=caller-vote  size=17 */

byte FUN_00401000(int *param_1)

{
  return *(byte *)(*param_1 + 5) & 1;
}


/* FUN_00401020 @ 00401020  kind=gamemisc  attributed-by=caller-vote  size=17 */

byte FUN_00401020(int *param_1)

{
  return *(byte *)(*param_1 + 5) & 2;
}


/* FUN_00401060 @ 00401060  kind=gamemisc  attributed-by=caller-vote  size=140 */

undefined8 FUN_00401060(int *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_1 + 10);
  return CONCAT44((((uVar1 >> 0x18) << 8 | (uVar1 & 0xffffff) >> 0x10) << 8 |
                  (uVar1 << 8 & 0xffffff) >> 0x10) << 8 | (uVar1 << 8 & 0xffff) >> 8,
                  *(undefined4 *)(*param_1 + 6));
}


/* FUN_004010f0 @ 004010f0  kind=gamemisc  attributed-by=caller-vote  size=41 */

undefined4 FUN_004010f0(int *param_1)

{
  return *(undefined4 *)(*param_1 + 0xe);
}


/* FUN_004011e0 @ 004011e0  kind=gamemisc  attributed-by=caller-vote  size=78 */

undefined4 FUN_004011e0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((void *)*param_1 != (void *)0x0) {
      free((void *)*param_1);
    }
    if ((void *)param_1[4] != (void *)0x0) {
      free((void *)param_1[4]);
    }
    if ((void *)param_1[5] != (void *)0x0) {
      free((void *)param_1[5]);
    }
    memset(param_1,0,0x168);
  }
  return 0;
}


/* FUN_00401230 @ 00401230  kind=gamemisc  attributed-by=caller-vote  size=106 */

undefined4 FUN_00401230(void)

{
  void *pvVar1;
  int in_ECX;
  int in_EDX;
  
  if (*(int *)(in_ECX + 0x1c) + in_EDX < *(int *)(in_ECX + 0x18)) {
    return 0;
  }
  pvVar1 = realloc(*(void **)(in_ECX + 0x10),(*(int *)(in_ECX + 0x18) + in_EDX) * 4 + 0x80);
  if (pvVar1 != (void *)0x0) {
    *(void **)(in_ECX + 0x10) = pvVar1;
    pvVar1 = realloc(*(void **)(in_ECX + 0x14),(*(int *)(in_ECX + 0x18) + in_EDX) * 8 + 0x100);
    if (pvVar1 != (void *)0x0) {
      *(void **)(in_ECX + 0x14) = pvVar1;
      *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + in_EDX + 0x20;
      return 0;
    }
  }
  FUN_004011e0();
  return 0xffffffff;
}


/* FUN_00401360 @ 00401360  kind=gamemisc  attributed-by=caller-vote  size=56 */

undefined4 FUN_00401360(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if (*(void **)param_1 != (void *)0x0) {
      free(*(void **)param_1);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  return 0;
}


/* FUN_004013a0 @ 004013a0  kind=gamemisc  attributed-by=caller-vote  size=174 */

int FUN_004013a0(int *param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  size_t _Size;
  
  if (param_1[1] < 0) {
    return 0;
  }
  iVar1 = param_1[3];
  if (iVar1 != 0) {
    param_1[2] = param_1[2] - iVar1;
    if (0 < param_1[2]) {
      memmove((void *)*param_1,(void *)(iVar1 + *param_1),param_1[2]);
    }
    param_1[3] = 0;
  }
  if (param_1[1] - param_1[2] < param_2) {
    _Size = param_2 + 0x1000 + param_1[2];
    if ((void *)*param_1 == (void *)0x0) {
      pvVar2 = malloc(_Size);
    }
    else {
      pvVar2 = realloc((void *)*param_1,_Size);
    }
    if (pvVar2 == (void *)0x0) {
      if ((void *)*param_1 != (void *)0x0) {
        free((void *)*param_1);
      }
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      return 0;
    }
    *param_1 = (int)pvVar2;
    param_1[1] = _Size;
  }
  return param_1[2] + *param_1;
}


/* FUN_00401450 @ 00401450  kind=gamemisc  attributed-by=caller-vote  size=35 */

undefined4 FUN_00401450(int param_1,int param_2)

{
  if ((-1 < *(int *)(param_1 + 4)) &&
     (param_2 = param_2 + *(int *)(param_1 + 8), param_2 <= *(int *)(param_1 + 4))) {
    *(int *)(param_1 + 8) = param_2;
    return 0;
  }
  return 0xffffffff;
}


/* FUN_00401480 @ 00401480  kind=gamemisc  attributed-by=caller-vote  size=312 */

int FUN_00401480(int *param_1,int *param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar4 = param_1[2] - param_1[3];
  piVar6 = (int *)(*param_1 + param_1[3]);
  if (param_1[1] < 0) {
    return 0;
  }
  if (param_1[5] == 0) {
    if (iVar4 < 0x1b) {
      return 0;
    }
    if (*piVar6 != 0x5367674f) goto LAB_00401535;
    iVar1 = *(byte *)((int)piVar6 + 0x1a) + 0x1b;
    if (iVar4 < iVar1) {
      return 0;
    }
    iVar3 = 0;
    if (*(byte *)((int)piVar6 + 0x1a) != 0) {
      iVar5 = param_1[6];
      do {
        iVar5 = iVar5 + (uint)*(byte *)((int)piVar6 + iVar3 + 0x1b);
        param_1[6] = iVar5;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)*(byte *)((int)piVar6 + 0x1a));
    }
    param_1[5] = iVar1;
  }
  if (iVar4 < param_1[5] + param_1[6]) {
    return 0;
  }
  iVar1 = *(int *)((int)piVar6 + 0x16);
  *(undefined4 *)((int)piVar6 + 0x16) = 0;
  FUN_004012a0();
  if (iVar1 == *(int *)((int)piVar6 + 0x16)) {
    iVar4 = *param_1;
    iVar1 = param_1[3];
    if (param_2 != (int *)0x0) {
      *param_2 = iVar4 + iVar1;
      param_2[1] = param_1[5];
      param_2[2] = param_1[5] + iVar4 + iVar1;
      param_2[3] = param_1[6];
    }
    iVar4 = param_1[5];
    iVar1 = param_1[6];
    param_1[3] = param_1[3] + iVar4 + iVar1;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    return iVar4 + iVar1;
  }
  *(int *)((int)piVar6 + 0x16) = iVar1;
LAB_00401535:
  param_1[5] = 0;
  param_1[6] = 0;
  pvVar2 = memchr((void *)((int)piVar6 + 1),0x4f,iVar4 - 1);
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)(param_1[2] + *param_1);
  }
  param_1[3] = (int)pvVar2 - *param_1;
  return (int)piVar6 - (int)pvVar2;
}


/* FUN_004015c0 @ 004015c0  kind=gamemisc  attributed-by=caller-vote  size=799 */

undefined4 FUN_004015c0(int *param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  void *pvVar11;
  byte bVar12;
  byte *pbVar13;
  int iVar14;
  size_t _Size;
  int iVar15;
  undefined8 uVar16;
  void *local_34;
  
  local_34 = (void *)param_2[2];
  _Size = param_2[3];
  iVar5 = *param_2;
  cVar3 = *(char *)(iVar5 + 4);
  bVar4 = *(byte *)(iVar5 + 5);
  bVar12 = bVar4 & 2;
  iVar15 = 0;
  uVar16 = FUN_00401060(param_2);
  iVar9 = *(int *)(iVar5 + 0xe);
  iVar7 = *(int *)(iVar5 + 0x12);
  uVar8 = (uint)*(byte *)(iVar5 + 0x1a);
  if ((param_1 != (int *)0x0) && (pvVar11 = (void *)*param_1, pvVar11 != (void *)0x0)) {
    iVar6 = param_1[3];
    iVar14 = param_1[9];
    if (iVar6 != 0) {
      piVar1 = param_1 + 2;
      *piVar1 = *piVar1 - iVar6;
      if (*piVar1 != 0) {
        memmove(pvVar11,(void *)(iVar6 + (int)pvVar11),param_1[2]);
      }
      param_1[3] = 0;
    }
    if (iVar14 != 0) {
      if (param_1[7] - iVar14 != 0) {
        memmove((void *)param_1[4],(void *)(param_1[4] + iVar14 * 4),(param_1[7] - iVar14) * 4);
        memmove((void *)param_1[5],(void *)(param_1[5] + iVar14 * 8),(param_1[7] - iVar14) * 8);
      }
      param_1[7] = param_1[7] - iVar14;
      param_1[8] = param_1[8] - iVar14;
      param_1[9] = 0;
    }
    if (((iVar9 == param_1[0x54]) && (cVar3 == '\0')) && (iVar9 = FUN_00401230(), iVar9 == 0)) {
      iVar9 = param_1[0x55];
      if (iVar7 != iVar9) {
        iVar6 = param_1[8];
        if (iVar6 < param_1[7]) {
          iVar9 = param_1[2];
          iVar14 = param_1[7] - iVar6;
          pbVar13 = (byte *)(param_1[4] + iVar6 * 4);
          do {
            iVar9 = iVar9 - (uint)*pbVar13;
            param_1[2] = iVar9;
            pbVar13 = pbVar13 + 4;
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
          iVar9 = param_1[0x55];
        }
        param_1[7] = iVar6;
        if (iVar9 != -1) {
          *(undefined4 *)(param_1[4] + iVar6 * 4) = 0x400;
          param_1[7] = param_1[7] + 1;
          param_1[8] = param_1[8] + 1;
        }
      }
      if ((((bVar4 & 1) != 0) &&
          ((param_1[7] < 1 || (*(int *)(param_1[4] + -4 + param_1[7] * 4) == 0x400)))) &&
         (bVar12 = 0, uVar8 != 0)) {
        do {
          iVar15 = iVar15 + 1;
          uVar10 = (uint)*(byte *)(iVar5 + 0x1a + iVar15);
          local_34 = (void *)((int)local_34 + uVar10);
          _Size = _Size - uVar10;
          if (uVar10 < 0xff) break;
        } while (iVar15 < (int)uVar8);
      }
      if (_Size != 0) {
        if (param_1[1] <= (int)(param_1[2] + _Size)) {
          pvVar11 = realloc((void *)*param_1,param_1[1] + 0x400 + _Size);
          if (pvVar11 == (void *)0x0) {
            FUN_004011e0(param_1);
            return 0xffffffff;
          }
          param_1[1] = param_1[1] + _Size + 0x400;
          *param_1 = (int)pvVar11;
        }
        memcpy((void *)(param_1[2] + *param_1),local_34,_Size);
        param_1[2] = param_1[2] + _Size;
      }
      iVar9 = -1;
      if (iVar15 < (int)uVar8) {
        do {
          uVar10 = (uint)*(byte *)(iVar5 + 0x1b + iVar15);
          *(uint *)(param_1[4] + param_1[7] * 4) = uVar10;
          iVar6 = param_1[5];
          iVar14 = param_1[7];
          *(undefined4 *)(iVar6 + iVar14 * 8) = 0xffffffff;
          *(undefined4 *)(iVar6 + 4 + iVar14 * 8) = 0xffffffff;
          if (bVar12 != 0) {
            puVar2 = (uint *)(param_1[4] + param_1[7] * 4);
            *puVar2 = *puVar2 | 0x100;
            bVar12 = 0;
          }
          if (uVar10 < 0xff) {
            iVar9 = param_1[7];
          }
          param_1[7] = param_1[7] + 1;
          iVar15 = iVar15 + 1;
          if (uVar10 < 0xff) {
            param_1[8] = param_1[7];
          }
        } while (iVar15 < (int)uVar8);
        if (iVar9 != -1) {
          iVar5 = param_1[5];
          *(int *)(iVar5 + iVar9 * 8) = (int)uVar16;
          *(int *)(iVar5 + 4 + iVar9 * 8) = (int)((ulonglong)uVar16 >> 0x20);
        }
      }
      if ((bVar4 & 4) != 0) {
        param_1[0x52] = 1;
        if (0 < param_1[7]) {
          puVar2 = (uint *)(param_1[4] + -4 + param_1[7] * 4);
          *puVar2 = *puVar2 | 0x200;
        }
      }
      param_1[0x55] = iVar7 + 1;
      return 0;
    }
  }
  return 0xffffffff;
}


/* FUN_004018f0 @ 004018f0  kind=gamemisc  attributed-by=caller-vote  size=56 */

undefined4 FUN_004018f0(int param_1)

{
  if (*(int *)(param_1 + 4) < 0) {
    return 0xffffffff;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return 0;
}


/* FUN_00401930 @ 00401930  kind=gamemisc  attributed-by=caller-vote  size=139 */

undefined4 FUN_00401930(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0x51] = 0;
    param_1[0x52] = 0;
    param_1[0x53] = 0;
    param_1[0x55] = -1;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    return 0;
  }
  return 0xffffffff;
}


/* FUN_004019c0 @ 004019c0  kind=gamemisc  attributed-by=caller-vote  size=45 */

undefined4 FUN_004019c0(int *param_1,int param_2)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    FUN_00401930(param_1);
    param_1[0x54] = param_2;
    return 0;
  }
  return 0xffffffff;
}


/* FUN_004019f0 @ 004019f0  kind=gamemisc  attributed-by=caller-vote  size=280 */

undefined4 FUN_004019f0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int *in_ECX;
  uint uVar4;
  int *in_EDX;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = in_ECX[9];
  if (in_ECX[8] <= iVar7) {
    return 0;
  }
  uVar2 = *(uint *)(in_ECX[4] + iVar7 * 4);
  iVar6 = in_ECX[4] + iVar7 * 4;
  if ((uVar2 & 0x400) == 0) {
    if ((in_EDX != (int *)0x0) || (param_1 != 0)) {
      uVar3 = uVar2 & 0xff;
      uVar5 = uVar2 & 0x200;
      if (uVar3 == 0xff) {
        uVar3 = 0xff;
        do {
          puVar1 = (uint *)(iVar6 + 4);
          iVar6 = iVar6 + 4;
          iVar7 = iVar7 + 1;
          uVar4 = *puVar1 & 0xff;
          if ((*puVar1 & 0x200) != 0) {
            uVar5 = 0x200;
          }
          uVar3 = uVar3 + uVar4;
        } while (uVar4 == 0xff);
      }
      if (in_EDX != (int *)0x0) {
        in_EDX[3] = uVar5;
        in_EDX[2] = uVar2 & 0x100;
        *in_EDX = in_ECX[3] + *in_ECX;
        in_EDX[6] = in_ECX[0x56];
        in_EDX[7] = in_ECX[0x57];
        iVar6 = in_ECX[5];
        in_EDX[4] = *(int *)(iVar6 + iVar7 * 8);
        in_EDX[5] = *(int *)(iVar6 + 4 + iVar7 * 8);
        in_EDX[1] = uVar3;
      }
      if (param_1 != 0) {
        in_ECX[3] = in_ECX[3] + uVar3;
        puVar1 = (uint *)(in_ECX + 0x56);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 + 1;
        in_ECX[9] = iVar7 + 1;
        in_ECX[0x57] = in_ECX[0x57] + (uint)(0xfffffffe < uVar2);
      }
    }
    return 1;
  }
  puVar1 = (uint *)(in_ECX + 0x56);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  in_ECX[0x57] = in_ECX[0x57] + (uint)(0xfffffffe < uVar2);
  in_ECX[9] = iVar7 + 1;
  return 0xffffffff;
}


/* FUN_00401b10 @ 00401b10  kind=gamemisc  attributed-by=caller-vote  size=34 */

undefined4 FUN_00401b10(int *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    uVar1 = FUN_004019f0(1);
    return uVar1;
  }
  return 0;
}


/* FUN_00401b40 @ 00401b40  kind=gamemisc  attributed-by=caller-vote  size=248 */

undefined4 FUN_00401b40(int *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint local_8;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  iVar5 = param_1[9];
  if (param_1[8] <= iVar5) {
    return 0;
  }
  uVar2 = *(uint *)(param_1[4] + iVar5 * 4);
  iVar4 = param_1[4] + iVar5 * 4;
  if ((uVar2 & 0x400) == 0) {
    if (param_2 != (int *)0x0) {
      local_8 = uVar2 & 0xff;
      uVar6 = uVar2 & 0x200;
      if (local_8 == 0xff) {
        local_8 = 0xff;
        do {
          puVar1 = (uint *)(iVar4 + 4);
          iVar4 = iVar4 + 4;
          iVar5 = iVar5 + 1;
          uVar3 = *puVar1 & 0xff;
          if ((*puVar1 & 0x200) != 0) {
            uVar6 = 0x200;
          }
          local_8 = local_8 + uVar3;
        } while (uVar3 == 0xff);
      }
      param_2[3] = uVar6;
      param_2[2] = uVar2 & 0x100;
      *param_2 = param_1[3] + *param_1;
      param_2[6] = param_1[0x56];
      param_2[7] = param_1[0x57];
      iVar4 = param_1[5];
      param_2[4] = *(int *)(iVar4 + iVar5 * 8);
      param_2[5] = *(int *)(iVar4 + 4 + iVar5 * 8);
      param_2[1] = local_8;
    }
    return 1;
  }
  puVar1 = (uint *)(param_1 + 0x56);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  param_1[0x57] = param_1[0x57] + (uint)(0xfffffffe < uVar2);
  param_1[9] = iVar5 + 1;
  return 0xffffffff;
}


/* FUN_00401e80 @ 00401e80  kind=gamemisc  attributed-by=caller-vote  size=242 */

uint FUN_00401e80(void)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int *in_ECX;
  uint in_EDX;
  uint uVar4;
  uint uVar5;
  
  if (in_EDX < 0x21) {
    uVar1 = *(uint *)(&DAT_00745d00 + in_EDX * 4);
    iVar3 = in_ECX[1];
    uVar5 = in_EDX + iVar3;
    if (in_ECX[4] + -4 <= *in_ECX) {
      if (in_ECX[4] - ((int)(uVar5 + 7) >> 3) < *in_ECX) goto LAB_00401f55;
      if (uVar5 == 0) {
        return 0;
      }
    }
    bVar2 = (byte)iVar3;
    uVar4 = (uint)(*(byte *)in_ECX[3] >> (bVar2 & 0x1f));
    if ((((8 < (int)uVar5) &&
         (uVar4 = uVar4 | (uint)((byte *)in_ECX[3])[1] << (8 - bVar2 & 0x1f), 0x10 < (int)uVar5)) &&
        (uVar4 = uVar4 | (uint)*(byte *)(in_ECX[3] + 2) << (0x10 - bVar2 & 0x1f), 0x18 < (int)uVar5)
        ) && ((uVar4 = uVar4 | (uint)*(byte *)(in_ECX[3] + 3) << (0x18 - bVar2 & 0x1f),
              0x20 < (int)uVar5 && (iVar3 != 0)))) {
      uVar4 = uVar4 | (uint)*(byte *)(in_ECX[3] + 4) << (0x20 - bVar2 & 0x1f);
    }
    iVar3 = (int)(uVar5 + ((int)uVar5 >> 0x1f & 7U)) >> 3;
    in_ECX[3] = in_ECX[3] + iVar3;
    *in_ECX = *in_ECX + iVar3;
    in_ECX[1] = uVar5 & 7;
    return uVar4 & uVar1;
  }
LAB_00401f55:
  *in_ECX = in_ECX[4];
  in_ECX[3] = 0;
  in_ECX[1] = 1;
  return 0xffffffff;
}


/* FUN_004042e0 @ 004042e0  kind=gamemisc  attributed-by=caller-vote  size=215 */

void FUN_004042e0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  undefined1 local_34 [4];
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e13a8;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = FUN_00408fc0(param_1);
  if (iVar1 != *in_ECX) {
    piVar2 = (int *)(iVar1 + 0x10);
    if (0xf < *(uint *)(iVar1 + 0x24)) {
      piVar2 = (int *)*piVar2;
    }
    iVar3 = FUN_0040c520(0,*(undefined4 *)(param_1 + 0x10),piVar2,*(undefined4 *)(iVar1 + 0x20));
    if (-1 < iVar3) goto LAB_00404399;
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  FUN_0040c0a0(param_1,0,0xffffffff);
  local_18 = 0;
  local_8 = 0;
  iVar3 = FUN_004021e0(local_30);
  FUN_004028d0(local_34,iVar1,iVar3 + 0x10,iVar3);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_30[0]);
  }
LAB_00404399:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00405e10 @ 00405e10  kind=gamemisc  attributed-by=caller-vote  size=76 */

void FUN_00405e10(void *param_1)

{
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    return;
  }
  FUN_00405e10(*(undefined4 *)((int)param_1 + 8));
  if (0xf < *(uint *)((int)param_1 + 0x24)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x10));
  }
  *(undefined4 *)((int)param_1 + 0x24) = 0xf;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  *(undefined1 *)((int)param_1 + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_1);
}


/* FUN_0040c790 @ 0040c790  kind=gamemisc  attributed-by=caller-vote  size=189 */

undefined4 * FUN_0040c790(undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *in_ECX;
  undefined1 local_8 [4];
  
  piVar2 = (int *)*in_ECX;
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    FUN_00405e10(piVar2[1]);
    *(int *)(*in_ECX + 4) = *in_ECX;
    *(int *)*in_ECX = *in_ECX;
    *(int *)(*in_ECX + 8) = *in_ECX;
    in_ECX[1] = 0;
    *param_1 = *(undefined4 *)*in_ECX;
    return param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0xd) == '\0') {
      param_2 = (int *)piVar3[2];
      if (*(char *)((int)param_2 + 0xd) == '\0') {
        cVar1 = *(char *)(*param_2 + 0xd);
        piVar2 = (int *)*param_2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0xd);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0xd);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    FUN_0040c850(local_8,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return param_1;
}


/* FUN_0040c850 @ 0040c850  kind=gamemisc  attributed-by=caller-vote  size=645 */

/* WARNING: Removing unreachable block (ram,0x0040c91d) */
/* WARNING: Removing unreachable block (ram,0x0040c92d) */
/* WARNING: Removing unreachable block (ram,0x0040c936) */
/* WARNING: Removing unreachable block (ram,0x0040c939) */
/* WARNING: Removing unreachable block (ram,0x0040c929) */
/* WARNING: Removing unreachable block (ram,0x0040c947) */
/* WARNING: Removing unreachable block (ram,0x0040c956) */
/* WARNING: Removing unreachable block (ram,0x0040c961) */
/* WARNING: Removing unreachable block (ram,0x0040c95d) */
/* WARNING: Removing unreachable block (ram,0x0040c951) */
/* WARNING: Removing unreachable block (ram,0x0040c964) */

void FUN_0040c850(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  
  if (*(char *)((int)param_2 + 0xd) != '\0') {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid map/set<T> iterator");
  }
  FUN_005c3ea0();
  piVar6 = (int *)*param_2;
  if (*(char *)((int)piVar6 + 0xd) == '\0') {
    if (*(char *)(param_2[2] + 0xd) == '\0') {
      piVar6 = (int *)param_2[2];
    }
  }
  else {
    piVar6 = (int *)param_2[2];
  }
  piVar5 = (int *)param_2[1];
  if (*(char *)((int)piVar6 + 0xd) == '\0') {
    piVar6[1] = (int)piVar5;
  }
  if (*(int **)(*in_ECX + 4) == param_2) {
    *(int **)(*in_ECX + 4) = piVar6;
  }
  else if ((int *)*piVar5 == param_2) {
    *piVar5 = (int)piVar6;
  }
  else {
    piVar5[2] = (int)piVar6;
  }
  puVar1 = (undefined4 *)*in_ECX;
  if ((int *)*puVar1 == param_2) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar6 + 0xd) == '\0') {
      piVar3 = (int *)FUN_004e6ce0(piVar6);
    }
    *puVar1 = piVar3;
  }
  iVar2 = *in_ECX;
  if (*(int **)(iVar2 + 8) == param_2) {
    if (*(char *)((int)piVar6 + 0xd) == '\0') {
      uVar4 = FUN_00428aa0(piVar6);
      *(undefined4 *)(iVar2 + 8) = uVar4;
    }
    else {
      *(int **)(iVar2 + 8) = piVar5;
    }
  }
  if ((char)param_2[3] == '\x01') {
    if (piVar6 != *(int **)(*in_ECX + 4)) {
      do {
        piVar3 = piVar5;
        if ((char)piVar6[3] != '\x01') break;
        piVar5 = (int *)*piVar3;
        if (piVar6 == piVar5) {
          piVar5 = (int *)piVar3[2];
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar3 + 3) = 0;
            FUN_004e37e0(piVar3);
            piVar5 = (int *)piVar3[2];
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(*piVar5 + 0xc) != '\x01') || (*(char *)(piVar5[2] + 0xc) != '\x01')) {
              if (*(char *)(piVar5[2] + 0xc) == '\x01') {
                *(undefined1 *)(*piVar5 + 0xc) = 1;
                *(undefined1 *)(piVar5 + 3) = 0;
                FUN_0042cac0(piVar5);
                piVar5 = (int *)piVar3[2];
              }
              *(char *)(piVar5 + 3) = (char)piVar3[3];
              *(undefined1 *)(piVar3 + 3) = 1;
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              FUN_004e37e0(piVar3);
              *(undefined1 *)(piVar6 + 3) = 1;
              goto LAB_0040caae;
            }
LAB_0040ca50:
            *(undefined1 *)(piVar5 + 3) = 0;
          }
        }
        else {
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar3 + 3) = 0;
            FUN_0042cac0(piVar3);
            piVar5 = (int *)*piVar3;
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(piVar5[2] + 0xc) == '\x01') && (*(char *)(*piVar5 + 0xc) == '\x01'))
            goto LAB_0040ca50;
            if (*(char *)(*piVar5 + 0xc) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              *(undefined1 *)(piVar5 + 3) = 0;
              FUN_004e37e0(piVar5);
              piVar5 = (int *)*piVar3;
            }
            *(char *)(piVar5 + 3) = (char)piVar3[3];
            *(undefined1 *)(piVar3 + 3) = 1;
            *(undefined1 *)(*piVar5 + 0xc) = 1;
            FUN_0042cac0(piVar3);
            *(undefined1 *)(piVar6 + 3) = 1;
            goto LAB_0040caae;
          }
        }
        piVar5 = (int *)piVar3[1];
        piVar6 = piVar3;
      } while (piVar3 != *(int **)(*in_ECX + 4));
    }
    *(undefined1 *)(piVar6 + 3) = 1;
  }
LAB_0040caae:
  if (0xf < (uint)param_2[9]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_2[4]);
  }
  param_2[9] = 0xf;
  param_2[8] = 0;
  *(undefined1 *)(param_2 + 4) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_2);
}


/* FUN_00428aa0 @ 00428aa0  kind=gamemisc  attributed-by=caller-vote  size=31 */

int FUN_00428aa0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = *(char *)(*(int *)(param_1 + 8) + 0xd);
  iVar2 = *(int *)(param_1 + 8);
  while (iVar3 = iVar2, cVar1 == '\0') {
    iVar2 = *(int *)(iVar3 + 8);
    cVar1 = *(char *)(iVar2 + 0xd);
    param_1 = iVar3;
  }
  return param_1;
}


/* FUN_0042cac0 @ 0042cac0  kind=gamemisc  attributed-by=caller-vote  size=88 */

void FUN_0042cac0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
  if (param_1 == *(int **)(*in_ECX + 4)) {
    *(int *)(*in_ECX + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_1[1];
  if (param_1 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_1;
  param_1[1] = iVar1;
  return;
}


/* FUN_00623100 @ 00623100  kind=gamemisc  attributed-by=caller-vote  size=214 */

undefined4 FUN_00623100(int *param_1,int *param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *local_c;
  int *local_8;
  
  param_1[3] = 0;
  iVar3 = *param_1;
  iVar4 = 0;
  local_c = (int *)0x0;
  uVar2 = param_1[1] - iVar3;
  if (uVar2 != 0) {
    local_8 = param_1;
    piVar6 = param_1;
    while( true ) {
      iVar1 = param_1[3];
      if (iVar1 + 4 <= (int)uVar2) {
        local_8 = *(int **)(iVar3 + iVar1);
        uVar2 = iVar1 + 4;
      }
      param_1[3] = uVar2;
      iVar1 = param_1[3];
      iVar3 = param_1[1] - *param_1;
      piVar5 = piVar6;
      if (iVar1 + 4 <= iVar3) {
        piVar5 = *(int **)(*param_1 + iVar1);
        iVar3 = iVar1 + 4;
      }
      param_1[3] = iVar3;
      if (local_8 == (int *)0x46464952) {
        piVar6 = (int *)0x4;
        iVar3 = param_1[3] + 4;
        if (param_1[1] - *param_1 < param_1[3] + 4) {
          iVar3 = param_1[1] - *param_1;
        }
        param_1[3] = iVar3;
        local_c = piVar5;
      }
      else {
        param_1[3] = param_1[3] + (int)piVar5;
        piVar6 = piVar5;
      }
      if (local_8 == param_2) break;
      iVar4 = iVar4 + 8 + (int)piVar6;
      if (local_c == (int *)0x0) {
        return 1;
      }
      iVar3 = *param_1;
      uVar2 = param_1[1] - iVar3;
      if (uVar2 <= (uint)param_1[3]) {
        return 0;
      }
    }
    *param_3 = piVar6;
    *param_4 = iVar4 + 8;
  }
  return 0;
}


/* FUN_006231e0 @ 006231e0  kind=gamemisc  attributed-by=caller-vote  size=337 */

uint FUN_006231e0(HANDLE param_1,int param_2,int *param_3,int *param_4)

{
  DWORD DVar1;
  BOOL BVar2;
  DWORD DVar3;
  int iVar4;
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  DWORD local_c;
  int local_8;
  
  DVar3 = 0;
  DVar1 = SetFilePointer(param_1,0,(PLONG)0x0,0);
  if (DVar1 == 0xffffffff) {
    DVar1 = GetLastError();
    if ((int)DVar1 < 1) {
      return DVar1;
    }
    return DVar1 & 0xffff | 0x80070000;
  }
  local_14 = 0;
  iVar4 = 0;
  do {
    BVar2 = ReadFile(param_1,&local_10,4,&local_c,(LPOVERLAPPED)0x0);
    if ((BVar2 == 0) && (DVar3 = GetLastError(), 0 < (int)DVar3)) {
      DVar3 = DVar3 & 0xffff | 0x80070000;
    }
    BVar2 = ReadFile(param_1,&local_8,4,&local_c,(LPOVERLAPPED)0x0);
    if ((BVar2 == 0) && (DVar3 = GetLastError(), 0 < (int)DVar3)) {
      DVar3 = DVar3 & 0xffff | 0x80070000;
    }
    if (local_10 == 0x46464952) {
      local_14 = local_8;
      local_8 = 4;
      BVar2 = ReadFile(param_1,local_18,4,&local_c,(LPOVERLAPPED)0x0);
      if ((BVar2 == 0) && (DVar3 = GetLastError(), 0 < (int)DVar3)) {
        DVar3 = DVar3 & 0xffff | 0x80070000;
      }
    }
    else {
      DVar1 = SetFilePointer(param_1,local_8,(PLONG)0x0,1);
      if (DVar1 == 0xffffffff) {
        DVar1 = GetLastError();
        if ((int)DVar1 < 1) {
          return DVar1;
        }
        return DVar1 & 0xffff | 0x80070000;
      }
    }
    if (local_10 == param_2) {
      *param_3 = local_8;
      *param_4 = iVar4 + 8;
      return 0;
    }
    iVar4 = iVar4 + 8 + local_8;
    if (local_14 == 0) {
      return 1;
    }
  } while (DVar3 == 0);
  return 0;
}


/* FUN_00623340 @ 00623340  kind=gamemisc  attributed-by=caller-vote  size=86 */

undefined4 FUN_00623340(int *param_1,void *param_2,size_t param_3,int param_4)

{
  int iVar1;
  
  if ((uint)(param_1[1] - *param_1) < param_3 + param_4) {
    return 1;
  }
  param_1[3] = param_4;
  iVar1 = param_1[1] - *param_1;
  if (iVar1 < (int)(param_3 + param_4)) {
    param_1[3] = iVar1;
    return 0;
  }
  memcpy(param_2,(void *)(*param_1 + param_4),param_3);
  param_1[3] = param_1[3] + param_3;
  return 0;
}


/* FUN_006233a0 @ 006233a0  kind=gamemisc  attributed-by=caller-vote  size=102 */

uint FUN_006233a0(HANDLE param_1,LPVOID param_2,DWORD param_3,LONG param_4)

{
  DWORD DVar1;
  BOOL BVar2;
  uint uVar3;
  DWORD local_8;
  
  uVar3 = 0;
  DVar1 = SetFilePointer(param_1,param_4,(PLONG)0x0,0);
  if (DVar1 == 0xffffffff) {
    uVar3 = GetLastError();
    if (0 < (int)uVar3) {
      return uVar3 & 0xffff | 0x80070000;
    }
  }
  else {
    BVar2 = ReadFile(param_1,param_2,param_3,&local_8,(LPOVERLAPPED)0x0);
    if ((BVar2 == 0) && (uVar3 = GetLastError(), 0 < (int)uVar3)) {
      uVar3 = uVar3 & 0xffff | 0x80070000;
    }
  }
  return uVar3;
}


/* FUN_00623710 @ 00623710  kind=gamemisc  attributed-by=caller-vote  size=610 */

void FUN_00623710(char *param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  ushort uVar2;
  int *piVar3;
  FILE *pFVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  uint uVar7;
  undefined1 local_54 [4];
  int local_50;
  undefined4 local_44;
  undefined4 local_40;
  int iStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined6 uStack_1a;
  int local_14;
  undefined4 uStack_10;
  undefined2 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  piVar3 = *(int **)(in_ECX + 0x1e000c);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x50))(piVar3,0,0);
    FUN_00625a60(in_ECX + 0x1e0020);
    *(undefined1 *)(in_ECX + 0x1e0010) = 0;
    *(undefined2 *)(in_ECX + 0x1e0012) = 0;
    (**(code **)(**(int **)(in_ECX + 0x1e000c) + 0x48))(*(int **)(in_ECX + 0x1e000c));
  }
  if (0xf < *(uint *)(param_1 + 0x14)) {
    param_1 = *(char **)param_1;
  }
  pFVar4 = fopen(param_1,"rb");
  if (pFVar4 == (FILE *)0x0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar6 = in_ECX + 0x1e0020;
  iVar5 = FUN_006271b0(pFVar4,iVar6,0,0);
  if (-1 < iVar5) {
    iVar5 = FUN_00626a70(iVar6,0xffffffff);
    local_c = 0x12;
    uVar2 = *(ushort *)(iVar5 + 4);
    _local_1c = CONCAT62(CONCAT42(*(int *)(iVar5 + 8),uVar2),1);
    uVar7 = 0;
    _local_14 = CONCAT44(CONCAT22(0x10,uVar2 * 2),(uint)uVar2 * *(int *)(iVar5 + 8) * 2);
    local_20 = 0;
    memset((void *)(*(int *)(in_ECX + 0x1e0014) * 0xa0000 + 8 + in_ECX),0,0xa0000);
    do {
      if (0x9ffff < uVar7) break;
      iVar5 = FUN_00626de0(iVar6,*(int *)(in_ECX + 0x1e0014) * 0xa0000 + 8 + in_ECX + uVar7,
                           0xa0000 - uVar7,0,2,1,&local_20);
      uVar7 = uVar7 + iVar5;
    } while (iVar5 != 0);
    puVar1 = (undefined4 *)(in_ECX + 0x1e000c);
    iVar6 = (**(code **)(**(int **)(in_ECX + 0x1e0008) + 0x20))
                      (*(int **)(in_ECX + 0x1e0008),puVar1,&local_1c,0,0x40000000,0,0,0);
    if (-1 < iVar6) {
      local_44 = 0;
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      _local_40 = CONCAT44(*(int *)(in_ECX + 0x1e0014) * 0xa0000 + 8 + in_ECX,0xa0000);
      iVar6 = (**(code **)(*(int *)*puVar1 + 0x54))((int *)*puVar1,&local_44,0);
      if (-1 < iVar6) {
        *(uint *)(in_ECX + 0x1e0014) = (*(int *)(in_ECX + 0x1e0014) + 1U) % 3;
        (**(code **)(*(int *)*puVar1 + 0x4c))((int *)*puVar1,0,0);
        (**(code **)(*(int *)*puVar1 + 0x30))((int *)*puVar1,*(undefined4 *)(in_ECX + 0x1e0018),0);
        (**(code **)(*(int *)*puVar1 + 100))((int *)*puVar1,local_54);
        *(bool *)(in_ECX + 0x1e0010) = local_50 != 0;
        *(undefined1 *)(in_ECX + 0x1e0011) = param_2;
        *(undefined2 *)(in_ECX + 0x1e0012) = 0;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00623ee0 @ 00623ee0  kind=gamemisc  attributed-by=caller-vote  size=455 */

void FUN_00623ee0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  undefined4 local_3c;
  undefined4 local_38;
  int iStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18 [4];
  uint local_14;
  undefined4 local_8;
  
  piVar1 = *(int **)(in_ECX + 0x1e000c);
  if (((piVar1 != (int *)0x0) && (*(char *)(in_ECX + 0x1e0010) != '\0')) &&
     ((**(code **)(*piVar1 + 100))(piVar1,local_18), local_14 < 2)) {
    if ((*(char *)(in_ECX + 0x1e0013) != '\0') && (*(char *)(in_ECX + 0x1e0011) == '\0')) {
      (**(code **)(**(int **)(in_ECX + 0x1e000c) + 0x50))(*(int **)(in_ECX + 0x1e000c),0,0);
    }
    if ((*(char *)(in_ECX + 0x1e0012) != '\0') && (*(char *)(in_ECX + 0x1e0011) == '\0')) {
      *(undefined1 *)(in_ECX + 0x1e0013) = 1;
    }
    memset((void *)(*(int *)(in_ECX + 0x1e0014) * 0xa0000 + 8 + in_ECX),0,0xa0000);
    local_8 = 0;
    iVar2 = 1;
    uVar3 = 0;
    do {
      if (0x9ffff < uVar3) {
        if (iVar2 != 0) goto LAB_0062402f;
        break;
      }
      iVar2 = FUN_00626de0(in_ECX + 0x1e0020,
                           *(int *)(in_ECX + 0x1e0014) * 0xa0000 + 8 + uVar3 + in_ECX,
                           0xa0000 - uVar3,0,2,1,&local_8);
      uVar3 = uVar3 + iVar2;
    } while (iVar2 != 0);
    if (*(char *)(in_ECX + 0x1e0011) == '\0') {
      *(undefined1 *)(in_ECX + 0x1e0012) = 1;
    }
    else {
      FUN_00626740(in_ECX + 0x1e0020,0,0);
      do {
        if (0x9ffff < uVar3) break;
        iVar2 = FUN_00626de0(in_ECX + 0x1e0020,
                             *(int *)(in_ECX + 0x1e0014) * 0xa0000 + 8 + uVar3 + in_ECX,
                             0xa0000 - uVar3,0,2,1,&local_8);
        uVar3 = uVar3 + iVar2;
      } while (iVar2 != 0);
    }
LAB_0062402f:
    local_3c = 0;
    if (*(char *)(in_ECX + 0x1e0012) != '\0') {
      local_3c = 0x40;
    }
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    _local_38 = CONCAT44(*(int *)(in_ECX + 0x1e0014) * 0xa0000 + 8 + in_ECX,0xa0000);
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x1e000c) + 0x54))
                      (*(int **)(in_ECX + 0x1e000c),&local_3c,0);
    if (iVar2 == 0) {
      *(uint *)(in_ECX + 0x1e0014) = (*(int *)(in_ECX + 0x1e0014) + 1U) % 3;
    }
  }
  return;
}


/* FUN_00624790 @ 00624790  kind=gamemisc  attributed-by=caller-vote  size=88 */

undefined4 FUN_00624790(int param_1,int param_2)

{
  int *in_EAX;
  int iVar1;
  
  if (*in_EAX == 0) {
    return 0xffffff7f;
  }
  if ((code *)in_EAX[0xb1] != (code *)0x0) {
    iVar1 = (*(code *)in_EAX[0xb1])(*in_EAX,param_1,param_2,0);
    if (iVar1 != -1) {
      in_EAX[2] = param_1;
      in_EAX[3] = param_2;
      FUN_004018f0(in_EAX + 6);
      return 0;
    }
  }
  return 0xffffff80;
}


/* FUN_006247f0 @ 006247f0  kind=gamemisc  attributed-by=caller-vote  size=268 */

undefined8 FUN_006247f0(undefined4 param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int *unaff_ESI;
  uint uVar9;
  bool bVar10;
  
  uVar9 = param_2;
  if ((-1 < param_3) && ((0 < param_3 || (param_2 != 0)))) {
    bVar10 = CARRY4(param_2,unaff_ESI[2]);
    param_2 = param_2 + unaff_ESI[2];
    param_3 = param_3 + unaff_ESI[3] + (uint)bVar10;
    uVar9 = param_2;
  }
  while( true ) {
    while( true ) {
      if (((-1 < param_3) && ((0 < param_3 || (uVar9 != 0)))) &&
         ((param_3 < unaff_ESI[3] || ((param_3 <= unaff_ESI[3] && (uVar9 <= (uint)unaff_ESI[2]))))))
      {
        return 0xffffffffffffffff;
      }
      piVar8 = unaff_ESI + 6;
      uVar4 = FUN_00401480(piVar8,param_1);
      if (-1 < (int)uVar4) break;
      puVar1 = (uint *)(unaff_ESI + 2);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - uVar4;
      unaff_ESI[3] = (unaff_ESI[3] - ((int)uVar4 >> 0x1f)) - (uint)(uVar2 < uVar4);
    }
    if (uVar4 != 0) {
      uVar9 = unaff_ESI[2];
      uVar3 = *(undefined8 *)(unaff_ESI + 2);
      unaff_ESI[3] = ((int)uVar4 >> 0x1f) + unaff_ESI[3] + (uint)CARRY4(uVar4,uVar9);
      unaff_ESI[2] = uVar4 + uVar9;
      return uVar3;
    }
    if (uVar9 == 0 && param_3 == 0) break;
    piVar5 = _errno();
    *piVar5 = 0;
    if (unaff_ESI[0xb0] == 0) {
      return 0xffffffffffffff80;
    }
    if (*unaff_ESI == 0) {
      return 0xfffffffffffffffe;
    }
    uVar6 = FUN_004013a0(piVar8,0x800);
    iVar7 = (*(code *)unaff_ESI[0xb0])(uVar6,1,0x800,*unaff_ESI);
    if (0 < iVar7) {
      FUN_00401450(piVar8,iVar7);
    }
    if (iVar7 == 0) {
      piVar8 = _errno();
      if (*piVar8 != 0) {
        return 0xffffffffffffff80;
      }
      return 0xfffffffffffffffe;
    }
    uVar9 = param_2;
    if (iVar7 < 0) {
      return 0xffffffffffffff80;
    }
  }
  return 0xffffffffffffffff;
}


/* FUN_00624900 @ 00624900  kind=gamemisc  attributed-by=caller-vote  size=363 */

longlong FUN_00624900(void)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int *in_EAX;
  int iVar4;
  int iVar5;
  int extraout_EDX;
  undefined4 *unaff_EDI;
  bool bVar6;
  longlong lVar7;
  uint local_c;
  int local_8;
  
  uVar1 = in_EAX[2];
  iVar5 = in_EAX[3];
  lVar3 = -1;
  local_c = uVar1;
  local_8 = iVar5;
  do {
    bVar6 = 0xffff < local_c;
    local_c = local_c - 0x10000;
    local_8 = local_8 + -1 + (uint)bVar6;
    if ((local_8 < 1) && (local_8 < 0)) {
      local_c = 0;
      local_8 = 0;
    }
    if (*in_EAX == 0) {
      iVar4 = -0x81;
    }
    else if (((code *)in_EAX[0xb1] == (code *)0x0) ||
            (iVar4 = (*(code *)in_EAX[0xb1])(*in_EAX,local_c,local_8,0), iVar4 == -1)) {
      iVar4 = -0x80;
    }
    else {
      in_EAX[2] = local_c;
      in_EAX[3] = local_8;
      FUN_004018f0(in_EAX + 6);
      iVar4 = 0;
    }
    if (iVar4 != 0) {
      return (longlong)iVar4;
    }
    if (in_EAX[3] <= iVar5) {
      if (in_EAX[3] < iVar5) goto LAB_006249b0;
      uVar2 = in_EAX[2];
      while (uVar2 < uVar1) {
LAB_006249b0:
        do {
          *unaff_EDI = 0;
          unaff_EDI[1] = 0;
          unaff_EDI[2] = 0;
          unaff_EDI[3] = 0;
          lVar7 = FUN_006247f0();
          if (lVar7 == -0x80) {
            return -0x80;
          }
          if (lVar7 < 0) goto LAB_006249fc;
          lVar3 = lVar7;
        } while (in_EAX[3] < iVar5);
        if (iVar5 < in_EAX[3]) break;
        uVar2 = in_EAX[2];
      }
    }
LAB_006249fc:
    if (lVar3 != -1) {
      lVar7 = lVar3;
      if (unaff_EDI[1] == 0) {
        iVar5 = FUN_00624790(lVar3);
        lVar7 = (longlong)iVar5;
        if (iVar5 == 0) {
          FUN_006247f0();
          lVar7 = lVar3;
          if ((extraout_EDX < 1) && (extraout_EDX < 0)) {
            return -0x81;
          }
        }
      }
      return lVar7;
    }
  } while( true );
}


/* FUN_00624c70 @ 00624c70  kind=gamemisc  attributed-by=caller-vote  size=770 */

int FUN_00624c70(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5)

{
  undefined1 *in_EAX;
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  int *piVar5;
  int extraout_EDX;
  longlong lVar6;
  undefined1 local_40 [32];
  undefined1 local_20 [16];
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  if (in_EAX == (undefined1 *)0x0) {
    lVar6 = FUN_006247f0(local_20,0x10000);
    if (lVar6 == -0x80) {
      return -0x80;
    }
    if (((int)((ulonglong)lVar6 >> 0x20) < 1) && (lVar6 < 0)) {
      return -0x84;
    }
    in_EAX = local_20;
  }
  FUN_006d0230(param_2);
  FUN_006d0300(param_3);
  *(undefined4 *)(param_1 + 0x58) = 2;
  iVar1 = FUN_00401020(in_EAX);
  while (iVar1 != 0) {
    if (param_4 != (int *)0x0) {
      iVar1 = *param_5;
      piVar5 = (int *)*param_4;
      iVar2 = FUN_004010f0(in_EAX);
      if (piVar5 != (int *)0x0) {
        while (iVar1 != 0) {
          iVar1 = iVar1 + -1;
          if (*piVar5 == iVar2) {
            if ((void *)*param_4 != (void *)0x0) {
              free((void *)*param_4);
            }
            *param_4 = 0;
            *param_5 = 0;
            goto LAB_00624e4a;
          }
          piVar5 = piVar5 + 1;
        }
      }
      local_c = FUN_004010f0(in_EAX);
      *param_5 = *param_5 + 1;
      if ((void *)*param_4 == (void *)0x0) {
        pvVar3 = malloc(4);
      }
      else {
        pvVar3 = realloc((void *)*param_4,*param_5 * 4);
      }
      *param_4 = (int)pvVar3;
      *(int *)(*param_4 + -4 + *param_5 * 4) = local_c;
    }
    if (*(int *)(param_1 + 0x58) < 3) {
      iVar1 = param_1 + 0x78;
      uVar4 = FUN_004010f0(in_EAX);
      FUN_004019c0(iVar1,uVar4);
      FUN_004015c0(iVar1,in_EAX);
      iVar1 = FUN_00401b10(iVar1,local_40);
      if ((0 < iVar1) && (iVar1 = FUN_006cf9e0(local_40), iVar1 != 0)) {
        *(undefined4 *)(param_1 + 0x58) = 3;
        iVar1 = FUN_006cf8e0(param_2,param_3,local_40);
        if (iVar1 != 0) goto LAB_00624e4a;
      }
    }
    lVar6 = FUN_006247f0(in_EAX,0x10000,0);
    if (lVar6 == -0x80) {
      iVar1 = -0x80;
      goto LAB_00624e4f;
    }
    if (lVar6 < 0) goto LAB_00624e7e;
    if ((*(int *)(param_1 + 0x58) == 3) &&
       (iVar1 = FUN_004010f0(in_EAX), *(int *)(param_1 + 0x1c8) == iVar1)) {
      FUN_004015c0(param_1 + 0x78,in_EAX);
      break;
    }
    iVar1 = FUN_00401020(in_EAX);
  }
  if (*(int *)(param_1 + 0x58) == 3) {
    local_c = 0;
    do {
      if (1 < local_c) {
        return 0;
      }
      local_10 = param_1 + 0x78;
      while (iVar2 = local_c, iVar1 = FUN_00401b10(local_10,local_40), iVar1 != 0) {
        if (iVar1 == -1) goto LAB_00624e4a;
        iVar1 = FUN_006cf8e0(param_2,param_3,local_40);
        if (iVar1 != 0) goto LAB_00624e4f;
        local_c = iVar2 + 1;
        if (1 < local_c) {
          return 0;
        }
      }
      if (1 < iVar2) {
        return 0;
      }
      while( true ) {
        FUN_006247f0(in_EAX,0x10000,0);
        if (extraout_EDX < 0) goto LAB_00624e4a;
        iVar1 = FUN_004010f0(in_EAX);
        if (*(int *)(param_1 + 0x1c8) == iVar1) break;
        iVar1 = FUN_00401020();
        if (iVar1 != 0) {
          if (local_8 != 0) goto LAB_00624e4a;
          local_8 = 1;
        }
      }
      FUN_004015c0(param_1 + 0x78,in_EAX);
    } while( true );
  }
LAB_00624e7e:
  iVar1 = -0x84;
LAB_00624e4f:
  FUN_006cffb0(param_2);
  FUN_006d0290(param_3);
  *(undefined4 *)(param_1 + 0x58) = 2;
  return iVar1;
LAB_00624e4a:
  iVar1 = -0x85;
  goto LAB_00624e4f;
}


/* FUN_006255d0 @ 006255d0  kind=gamemisc  attributed-by=caller-vote  size=103 */

undefined4 FUN_006255d0(void)

{
  int iVar1;
  int unaff_ESI;
  
  if (3 < *(int *)(unaff_ESI + 0x58)) {
    return 0;
  }
  if (*(int *)(unaff_ESI + 0x58) < 3) {
    return 0xffffff7f;
  }
  if (*(int *)(unaff_ESI + 4) == 0) {
    iVar1 = *(int *)(unaff_ESI + 0x48);
  }
  else {
    iVar1 = *(int *)(unaff_ESI + 0x60) * 0x20 + *(int *)(unaff_ESI + 0x48);
  }
  iVar1 = FUN_006d1220(unaff_ESI + 0x1e0,iVar1);
  if (iVar1 != 0) {
    return 0xffffff77;
  }
  FUN_006d19d0(unaff_ESI + 0x1e0,unaff_ESI + 0x250);
  *(undefined8 *)(unaff_ESI + 0x68) = 0;
  *(undefined8 *)(unaff_ESI + 0x70) = 0;
  *(undefined4 *)(unaff_ESI + 0x58) = 4;
  return 0;
}


/* FUN_00625640 @ 00625640  kind=gamemisc  attributed-by=caller-vote  size=35 */

void FUN_00625640(void)

{
  int unaff_ESI;
  
  FUN_006d12e0(unaff_ESI + 0x1e0);
  FUN_006d1920(unaff_ESI + 0x250);
  *(undefined4 *)(unaff_ESI + 0x58) = 2;
  return;
}


/* FUN_00625670 @ 00625670  kind=gamemisc  attributed-by=caller-vote  size=957 */

int FUN_00625670(undefined1 *param_1,int param_2,int param_3)

{
  int in_EAX;
  int iVar1;
  uint *puVar2;
  int iVar3;
  int extraout_EDX;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  bool bVar9;
  undefined1 local_50 [32];
  undefined1 local_30 [4];
  int local_2c;
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_c;
  int local_8;
  
  do {
    if (*(int *)(in_EAX + 0x58) == 3) {
      if (*(int *)(in_EAX + 4) == 0) {
        iVar1 = *(int *)(in_EAX + 0x48);
      }
      else {
        iVar1 = *(int *)(in_EAX + 0x60) * 0x20 + *(int *)(in_EAX + 0x48);
      }
      iVar1 = FUN_006d1220(in_EAX + 0x1e0,iVar1);
      if (iVar1 != 0) {
        return -0x89;
      }
      FUN_006d19d0(in_EAX + 0x1e0,in_EAX + 0x250);
      *(undefined8 *)(in_EAX + 0x68) = 0;
      *(undefined8 *)(in_EAX + 0x70) = 0;
      *(undefined4 *)(in_EAX + 0x58) = 4;
LAB_006256df:
      local_c = FUN_006d0420(*(undefined4 *)(in_EAX + 0x48));
      while( true ) {
        puVar7 = param_1;
        if (param_1 == (undefined1 *)0x0) {
          puVar7 = local_50;
        }
        iVar1 = FUN_00401b10(in_EAX + 0x78,puVar7);
        param_1 = (undefined1 *)0x0;
        if (iVar1 == -1) {
          return -3;
        }
        if (iVar1 < 1) break;
        local_18 = *(uint *)(puVar7 + 0x10);
        uVar5 = *(uint *)(puVar7 + 0x14);
        local_14 = uVar5;
        iVar1 = FUN_006d0610(in_EAX + 0x250,puVar7);
        if (iVar1 == 0) {
          iVar1 = FUN_006d0b50(in_EAX + 0x1e0,0);
          if (iVar1 == 0) {
            FUN_006d0bb0(in_EAX + 0x1e0,in_EAX + 0x250);
            local_8 = FUN_006d0b50(in_EAX + 0x1e0,0);
            local_8 = local_8 << ((byte)local_c & 0x1f);
            *(double *)(in_EAX + 0x70) = (double)local_8 + *(double *)(in_EAX + 0x70);
            local_8 = *(int *)(puVar7 + 4) * 8;
            *(double *)(in_EAX + 0x68) =
                 (double)(*(int *)(puVar7 + 4) * 8) + *(double *)(in_EAX + 0x68);
            if (((local_18 & uVar5) != 0xffffffff) && (*(int *)(puVar7 + 0xc) == 0)) {
              if (*(int *)(in_EAX + 4) == 0) {
                local_8 = 0;
              }
              else {
                local_8 = *(int *)(in_EAX + 0x60);
                if (0 < local_8) {
                  puVar2 = (uint *)(*(int *)(in_EAX + 0x44) + local_8 * 0x10);
                  bVar9 = local_18 < *puVar2;
                  local_18 = local_18 - *puVar2;
                  uVar5 = (uVar5 - *(int *)(*(int *)(in_EAX + 0x44) + 4 + local_8 * 0x10)) -
                          (uint)bVar9;
                  local_14 = uVar5;
                }
              }
              if (((int)uVar5 < 1) && ((int)uVar5 < 0)) {
                local_18 = 0;
                local_14 = 0;
              }
              local_20 = 0;
              local_1c = 0;
              uVar8 = 0;
              iVar6 = 0;
              iVar1 = FUN_006d0b50(in_EAX + 0x1e0,0);
              uVar5 = iVar1 << ((byte)local_c & 0x1f);
              bVar9 = local_18 < uVar5;
              local_18 = local_18 - uVar5;
              local_14 = (local_14 - ((int)uVar5 >> 0x1f)) - (uint)bVar9;
              iVar1 = 0;
              if (1 < local_8) {
                puVar2 = (uint *)(*(int *)(in_EAX + 0x44) + 0x18);
                local_c = (local_8 - 2U >> 1) + 1;
                iVar1 = local_c * 2;
                do {
                  bVar9 = CARRY4(local_20,puVar2[-4]);
                  local_20 = local_20 + puVar2[-4];
                  local_1c = local_1c + puVar2[-3] + (uint)bVar9;
                  bVar9 = CARRY4(uVar8,*puVar2);
                  uVar8 = uVar8 + *puVar2;
                  iVar6 = iVar6 + puVar2[1] + (uint)bVar9;
                  puVar2 = puVar2 + 8;
                  local_c = local_c + -1;
                } while (local_c != 0);
              }
              if (iVar1 < local_8) {
                uVar5 = *(uint *)(*(int *)(in_EAX + 0x44) + 8 + iVar1 * 0x10);
                bVar9 = CARRY4(local_18,uVar5);
                local_18 = local_18 + uVar5;
                local_14 = local_14 + *(int *)(*(int *)(in_EAX + 0x44) + 0xc + iVar1 * 0x10) +
                           (uint)bVar9;
              }
              *(uint *)(in_EAX + 0x50) = uVar8 + local_20 + local_18;
              *(uint *)(in_EAX + 0x54) =
                   iVar6 + local_1c + (uint)CARRY4(uVar8,local_20) + local_14 +
                   (uint)CARRY4(uVar8 + local_20,local_18);
            }
            return 1;
          }
          return -0x81;
        }
      }
    }
    else if (*(int *)(in_EAX + 0x58) == 4) goto LAB_006256df;
    if (*(int *)(in_EAX + 0x58) < 2) {
LAB_0062581c:
      if (*(int *)(in_EAX + 0x58) != 4) {
LAB_00625825:
        if (*(int *)(in_EAX + 0x58) < 3) {
          if (*(int *)(in_EAX + 4) != 0) goto LAB_00625835;
          iVar1 = FUN_00624c70();
          if (iVar1 != 0) {
            return iVar1;
          }
          *(int *)(in_EAX + 0x60) = *(int *)(in_EAX + 0x60) + 1;
          *(undefined4 *)(in_EAX + 0x5c) = *(undefined4 *)(in_EAX + 0x1c8);
        }
      }
      goto LAB_006258ab;
    }
    do {
      if (param_2 == 0) {
        return 0;
      }
      FUN_006247f0(local_30,0xffffffff,0xffffffff);
      if (extraout_EDX < 0) {
        return -2;
      }
      local_c = local_2c * 8;
      *(double *)(in_EAX + 0x68) = (double)local_c + *(double *)(in_EAX + 0x68);
      if (*(int *)(in_EAX + 0x58) != 4) goto LAB_00625825;
      iVar1 = FUN_004010f0(local_30);
      if (*(int *)(in_EAX + 0x5c) == iVar1) goto LAB_0062581c;
      iVar1 = FUN_00401020(local_30);
    } while (iVar1 == 0);
    if (param_3 == 0) {
      return -2;
    }
    FUN_006d12e0(in_EAX + 0x1e0);
    FUN_006d1920(in_EAX + 0x250);
    *(undefined4 *)(in_EAX + 0x58) = 2;
    if (*(int *)(in_EAX + 4) == 0) {
      FUN_006cffb0(*(undefined4 *)(in_EAX + 0x48));
      FUN_006d0290(*(undefined4 *)(in_EAX + 0x4c));
      goto LAB_0062581c;
    }
LAB_00625835:
    iVar6 = FUN_004010f0(local_30);
    iVar1 = *(int *)(in_EAX + 0x34);
    iVar3 = 0;
    if (0 < iVar1) {
      piVar4 = *(int **)(in_EAX + 0x40);
      iVar3 = 0;
      do {
        if (*piVar4 == iVar6) break;
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < iVar1);
    }
    if (iVar3 != iVar1) {
      *(int *)(in_EAX + 0x60) = iVar3;
      *(int *)(in_EAX + 0x5c) = iVar6;
      FUN_004019c0(in_EAX + 0x78,iVar6);
      *(undefined4 *)(in_EAX + 0x58) = 3;
LAB_006258ab:
      FUN_004015c0(in_EAX + 0x78,local_30);
    }
  } while( true );
}


/* FUN_00625a60 @ 00625a60  kind=gamemisc  attributed-by=caller-vote  size=261 */

undefined4 FUN_00625a60(int *param_1)

{
  int *piVar1;
  int *_Dst;
  int iVar2;
  int iVar3;
  code *pcVar4;
  
  _Dst = param_1;
  iVar3 = 0;
  if (param_1 != (int *)0x0) {
    FUN_006d1920(param_1 + 0x94);
    FUN_006d12e0(param_1 + 0x78);
    FUN_004011e0(param_1 + 0x1e);
    pcVar4 = free_exref;
    if ((param_1[0x12] != 0) && (piVar1 = param_1 + 0xd, *piVar1 != 0)) {
      param_1 = (int *)0x0;
      if (0 < *piVar1) {
        iVar2 = 0;
        do {
          FUN_006cffb0(_Dst[0x12] + iVar3);
          FUN_006d0290(_Dst[0x13] + iVar2);
          param_1 = (int *)((int)param_1 + 1);
          iVar3 = iVar3 + 0x20;
          iVar2 = iVar2 + 0x10;
        } while ((int)param_1 < _Dst[0xd]);
      }
      pcVar4 = free_exref;
      free((void *)_Dst[0x12]);
      free((void *)_Dst[0x13]);
    }
    if (_Dst[0xf] != 0) {
      (*pcVar4)(_Dst[0xf]);
    }
    if (_Dst[0x11] != 0) {
      (*pcVar4)(_Dst[0x11]);
    }
    if (_Dst[0x10] != 0) {
      (*pcVar4)(_Dst[0x10]);
    }
    if (_Dst[0xe] != 0) {
      (*pcVar4)(_Dst[0xe]);
    }
    FUN_00401360(_Dst + 6);
    if ((*_Dst != 0) && ((code *)_Dst[0xb2] != (code *)0x0)) {
      (*(code *)_Dst[0xb2])(*_Dst);
    }
    memset(_Dst,0,0x2d0);
  }
  return 0;
}


/* FUN_00625b70 @ 00625b70  kind=gamemisc  attributed-by=caller-vote  size=133 */

longlong FUN_00625b70(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x58) < 2) {
    return -0x83;
  }
  if ((*(int *)(param_1 + 4) != 0) && (param_2 < *(int *)(param_1 + 0x34))) {
    if (-1 < param_2) {
      return CONCAT44(*(undefined4 *)(*(int *)(param_1 + 0x44) + 0xc + param_2 * 0x10),
                      *(undefined4 *)(*(int *)(param_1 + 0x44) + 8 + param_2 * 0x10));
    }
    iVar2 = 0;
    lVar1 = 0;
    lVar3 = 0;
    if (0 < *(int *)(param_1 + 0x34)) {
      do {
        lVar3 = FUN_00625b70(param_1,iVar2);
        lVar1 = lVar3 + lVar1;
        iVar2 = iVar2 + 1;
        lVar3 = lVar1;
      } while (iVar2 < *(int *)(param_1 + 0x34));
    }
    return lVar3;
  }
  return -0x83;
}


/* FUN_00625c00 @ 00625c00  kind=gamemisc  attributed-by=caller-vote  size=1204 */

/* WARNING: Removing unreachable block (ram,0x00626063) */

void FUN_00625c00(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined1 local_1bc [16];
  uint local_1ac;
  uint local_1a8;
  undefined1 local_19c [16];
  uint local_18c;
  int local_188;
  uint local_184;
  int local_180;
  undefined8 local_17c;
  int local_174;
  undefined1 local_170 [360];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (*(int *)(param_1 + 0x58) < 2) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (*(int *)(param_1 + 4) == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (((param_3 < 0) || (*(int *)(param_1 + 0x14) < param_3)) ||
     ((*(int *)(param_1 + 0x14) <= param_3 && (*(uint *)(param_1 + 0x10) < param_2)))) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (2 < *(int *)(param_1 + 0x58)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x38) + 4 + *(int *)(param_1 + 0x60) * 8);
    puVar3 = (uint *)(*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x60) * 8);
    if (((param_3 < iVar1) || ((param_3 <= iVar1 && (param_2 < *puVar3)))) ||
       (((int)puVar3[3] <= param_3 && (((int)puVar3[3] < param_3 || (puVar3[2] <= param_2)))))) {
      FUN_00625640();
    }
  }
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  FUN_004019c0(param_1 + 0x78,*(undefined4 *)(param_1 + 0x5c));
  FUN_006d1260(param_1 + 0x1e0);
  iVar1 = FUN_00624790(param_2,param_3);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
    FUN_004011e0(local_170);
    FUN_00625640();
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_180 = 0;
  local_18c = 0;
  local_174 = 0;
  local_188 = 0;
  FUN_00401120(local_170,*(undefined4 *)(param_1 + 0x5c));
  FUN_00401930(local_170);
LAB_00625d50:
  while (2 < *(int *)(param_1 + 0x58)) {
    iVar1 = FUN_00401b10(local_170,local_1bc);
    if (iVar1 < 1) break;
    iVar1 = *(int *)(param_1 + 0x60) * 0x20 + *(int *)(param_1 + 0x48);
    if (*(int *)(iVar1 + 0x1c) == 0) {
      FUN_00401b10(param_1 + 0x78,0);
      break;
    }
    iVar1 = FUN_006d0470(iVar1,local_1bc);
    if (iVar1 < 0) {
      FUN_00401b10(param_1 + 0x78,0);
      iVar1 = 0;
    }
    else if ((local_174 == 0) || (local_188 != 0)) {
      if (local_180 != 0) {
        local_18c = local_18c + (iVar1 + local_180 >> 2);
      }
    }
    else {
      FUN_00401b10(param_1 + 0x78,0);
    }
    local_180 = iVar1;
    if ((local_1ac & local_1a8) != 0xffffffff) {
      local_174 = *(int *)(param_1 + 0x60);
      iVar1 = *(int *)(param_1 + 0x44);
      puVar3 = (uint *)(iVar1 + local_174 * 0x10);
      local_17c._0_4_ = local_1ac - *puVar3;
      local_17c._4_4_ =
           (local_1a8 - *(int *)(iVar1 + 4 + local_174 * 0x10)) - (uint)(local_1ac < *puVar3);
      uVar5 = 0;
      if ((local_17c._4_4_ < 1) && (local_17c._4_4_ < 0)) {
        local_17c._0_4_ = 0;
        local_17c._4_4_ = 0;
      }
      iVar8 = 0;
      iVar7 = 0;
      local_184 = 0;
      local_180 = 0;
      if (1 < local_174) {
        local_174 = (*(int *)(param_1 + 0x60) - 2U >> 1) + 1;
        puVar3 = (uint *)(iVar1 + 0x18);
        iVar7 = local_174 * 2;
        do {
          bVar9 = CARRY4(local_184,puVar3[-4]);
          local_184 = local_184 + puVar3[-4];
          local_180 = local_180 + puVar3[-3] + (uint)bVar9;
          bVar9 = CARRY4(uVar5,*puVar3);
          uVar5 = uVar5 + *puVar3;
          iVar8 = iVar8 + puVar3[1] + (uint)bVar9;
          puVar3 = puVar3 + 8;
          local_174 = local_174 + -1;
        } while (local_174 != 0);
        local_174 = 0;
        local_188 = iVar7;
      }
      iVar1 = local_17c._4_4_;
      if (iVar7 < *(int *)(param_1 + 0x60)) {
        local_174 = iVar7 * 0x10;
        uVar6 = *(uint *)(local_174 + 8 + *(int *)(param_1 + 0x44));
        bVar9 = CARRY4((uint)local_17c,uVar6);
        local_17c._0_4_ = (uint)local_17c + uVar6;
        iVar1 = local_17c._4_4_ + *(int *)(local_174 + 0xc + *(int *)(param_1 + 0x44)) + (uint)bVar9
        ;
      }
      uVar6 = (uVar5 - local_18c) + local_184;
      iVar1 = ((iVar8 - ((int)local_18c >> 0x1f)) - (uint)(uVar5 < local_18c)) + local_180 +
              (uint)CARRY4(uVar5 - local_18c,local_184) + iVar1 +
              (uint)CARRY4(uVar6,(uint)local_17c);
      uVar4 = 0;
      *(uint *)(param_1 + 0x50) = uVar6 + (uint)local_17c;
      *(int *)(param_1 + 0x54) = iVar1;
      if ((iVar1 < 1) && (iVar1 < 0)) {
LAB_00626078:
        *(undefined4 *)(param_1 + 0x54) = uVar4;
LAB_0062607b:
        *(undefined4 *)(param_1 + 0x50) = uVar4;
      }
      FUN_004011e0(local_170);
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0x70) = 0;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  if (local_180 != 0) {
    uVar4 = 0xffffffff;
    goto LAB_00626078;
  }
  lVar10 = FUN_006247f0(local_19c,0xffffffff,0xffffffff);
  local_17c = lVar10;
  if (lVar10 < 0) {
    uVar11 = FUN_00625b70(param_1,0xffffffff);
    uVar4 = (undefined4)uVar11;
    *(int *)(param_1 + 0x54) = (int)((ulonglong)uVar11 >> 0x20);
    goto LAB_0062607b;
  }
  if (*(int *)(param_1 + 0x58) < 3) {
LAB_00625ea8:
    iVar7 = FUN_004010f0(local_19c);
    iVar1 = *(int *)(param_1 + 0x34);
    iVar8 = 0;
    if (0 < iVar1) {
      piVar2 = *(int **)(param_1 + 0x40);
      do {
        if (*piVar2 == iVar7) break;
        iVar8 = iVar8 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar8 < iVar1);
    }
    if (iVar8 == iVar1) goto LAB_00625d50;
    *(int *)(param_1 + 0x60) = iVar8;
    *(int *)(param_1 + 0x5c) = iVar7;
    FUN_004019c0(param_1 + 0x78,iVar7);
    FUN_004019c0(local_170,iVar7);
    *(undefined4 *)(param_1 + 0x58) = 3;
    iVar1 = *(int *)(*(int *)(param_1 + 0x3c) + 4 + iVar8 * 8);
    if ((iVar1 < local_17c._4_4_) ||
       ((iVar1 <= local_17c._4_4_ &&
        (*(uint *)(*(int *)(param_1 + 0x3c) + iVar8 * 8) < (uint)local_17c)))) {
      local_188 = 0;
    }
    else {
      local_188 = 1;
    }
  }
  else {
    iVar1 = FUN_004010f0(local_19c);
    if (*(int *)(param_1 + 0x5c) != iVar1) {
      iVar1 = FUN_00401020(local_19c);
      if (iVar1 != 0) {
        FUN_00625640();
        FUN_004011e0(local_170);
      }
    }
    if (*(int *)(param_1 + 0x58) < 3) goto LAB_00625ea8;
  }
  FUN_004015c0(param_1 + 0x78,local_19c);
  FUN_004015c0(local_170,local_19c);
  local_174 = FUN_00401040(local_19c);
  goto LAB_00625d50;
}


/* FUN_006260c0 @ 006260c0  kind=gamemisc  attributed-by=caller-vote  size=1656 */

/* WARNING: Removing unreachable block (ram,0x0062648a) */
/* WARNING: Removing unreachable block (ram,0x006261ec) */
/* WARNING: Removing unreachable block (ram,0x00626121) */
/* WARNING: Removing unreachable block (ram,0x006263bf) */
/* WARNING: Removing unreachable block (ram,0x006266d4) */
/* WARNING: Removing unreachable block (ram,0x006264b1) */

undefined4 FUN_006260c0(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint *puVar9;
  int iVar10;
  uint extraout_EDX;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 local_9c [16];
  uint local_8c;
  uint local_88;
  undefined1 local_7c [16];
  int local_6c;
  int iStack_68;
  undefined8 local_64;
  undefined1 local_5c [8];
  undefined8 local_54;
  uint local_4c;
  uint local_48;
  longlong local_44;
  undefined8 local_3c;
  longlong local_34;
  uint local_2c;
  int local_28;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  uint local_c;
  uint local_8;
  
  lVar17 = FUN_00625b70(param_1,0xffffffff);
  lVar19 = CONCAT44(local_54._4_4_,(undefined4)local_54);
  if (param_1[0x16] < 2) {
    return 0xffffff7d;
  }
  if (param_1[1] == 0) {
    return 0xffffff76;
  }
  if ((param_3 < 0) || (lVar17 < CONCAT44(param_3,param_2))) {
    return 0xffffff7d;
  }
  iVar13 = param_1[0xd] + -1;
  if (-1 < iVar13) {
    puVar9 = (uint *)(param_1[0x11] + 8 + iVar13 * 0x10);
    do {
      uVar6 = (uint)lVar17 - *puVar9;
      iVar10 = ((int)((ulonglong)lVar17 >> 0x20) - puVar9[1]) - (uint)((uint)lVar17 < *puVar9);
      lVar17 = CONCAT44(iVar10,uVar6);
      if ((iVar10 < param_3) || ((iVar10 <= param_3 && (uVar6 <= param_2)))) break;
      puVar9 = puVar9 + -4;
      iVar13 = iVar13 + -1;
    } while (-1 < iVar13);
  }
  local_24._4_4_ = (int)((ulonglong)lVar17 >> 0x20);
  local_24._0_4_ = (uint)lVar17;
  uVar6 = *(uint *)(param_1[0xe] + 8 + iVar13 * 8);
  puVar9 = (uint *)(param_1[0xe] + iVar13 * 8);
  uVar11 = puVar9[3];
  lVar5 = CONCAT44(uVar11,uVar6);
  puVar14 = (uint *)(iVar13 * 0x10 + param_1[0x11]);
  local_c = *puVar9;
  local_8 = puVar9[1];
  uVar7 = *puVar14;
  iVar10 = puVar14[2] + uVar7;
  iVar15 = puVar14[3] + puVar14[1] + (uint)CARRY4(puVar14[2],uVar7);
  lVar3 = CONCAT44(iVar15,iVar10);
  local_2c = (uVar7 - (uint)local_24) + param_2;
  local_28 = ((puVar14[1] - local_24._4_4_) - (uint)(uVar7 < (uint)local_24)) + param_3 +
             (uint)CARRY4(uVar7 - (uint)local_24,param_2);
  local_24 = lVar17;
  local_3c = *(longlong *)puVar14;
  lVar18 = CONCAT44(local_14._4_4_,(int)local_14);
  lVar17 = lVar3;
  local_54 = CONCAT44(local_54._4_4_,(undefined4)local_54);
  lVar4 = *(longlong *)puVar9;
  local_1c = CONCAT44(uVar11,uVar6);
  local_64 = CONCAT44(local_64._4_4_,(undefined4)local_64);
  if (((int)local_8 <= (int)uVar11) &&
     ((lVar2 = *(longlong *)puVar14, lVar17 = CONCAT44(iVar15,iVar10),
      local_34 = *(longlong *)puVar9, local_54 = lVar19, local_1c = lVar5,
      (int)local_8 < (int)uVar11 ||
      (lVar2 = *(longlong *)puVar14, local_3c = *(longlong *)puVar14, lVar18 = local_14,
      lVar17 = lVar3, local_34 = *(longlong *)puVar9, lVar4 = *(longlong *)puVar9,
      local_64 = CONCAT44(local_64._4_4_,(undefined4)local_64), local_c < uVar6)))) {
    do {
      local_3c._4_4_ = (int)((ulonglong)lVar2 >> 0x20);
      local_3c._0_4_ = (uint)lVar2;
      local_64 = local_1c - CONCAT44(local_8,local_c);
      if (local_64 < 0x10000) {
LAB_00626256:
        uVar6 = local_c;
        uVar11 = local_8;
        lVar19 = local_14;
      }
      else {
        local_6c = local_2c - (uint)local_3c;
        iStack_68 = (local_28 - local_3c._4_4_) - (uint)(local_2c < (uint)local_3c);
        local_54 = lVar17 - lVar2;
        local_3c = lVar2;
        local_44 = lVar17;
        lVar17 = FUN_0068d946();
        lVar17 = lVar17 + CONCAT44(local_8,local_c);
        uVar11 = (uint)lVar17;
        uVar6 = uVar11 - 0x10000;
        uVar11 = (int)((ulonglong)lVar17 >> 0x20) - (uint)(uVar11 < 0x10000);
        iVar10 = local_8 + (0xfffeffff < local_c);
        lVar2 = local_3c;
        lVar17 = local_44;
        lVar19 = local_14;
        if (((int)uVar11 <= iVar10) && (((int)uVar11 < iVar10 || (uVar6 < local_c + 0x10000))))
        goto LAB_00626256;
      }
      local_14._4_4_ = (undefined4)((ulonglong)lVar19 >> 0x20);
      if ((uVar6 != param_1[2]) || (lVar3 = local_1c, uVar11 != param_1[3])) {
        if (*param_1 == 0) {
          iVar10 = -0x81;
        }
        else {
          if ((code *)param_1[0xb1] != (code *)0x0) {
            local_3c = lVar2;
            local_14 = lVar19;
            local_44 = lVar17;
            iVar10 = (*(code *)param_1[0xb1])(*param_1,uVar6,uVar11,0);
            lVar2 = local_3c;
            lVar17 = local_44;
            if (iVar10 != -1) {
              param_1[2] = uVar6;
              param_1[3] = uVar11;
              FUN_004018f0(param_1 + 6);
              iVar10 = 0;
              lVar2 = local_3c;
              lVar17 = local_44;
              goto LAB_006262a7;
            }
          }
          iVar10 = -0x80;
        }
LAB_006262a7:
        local_3c = lVar2;
        local_44 = lVar17;
        lVar18 = CONCAT44(local_14._4_4_,iVar10);
        lVar19 = CONCAT44(local_14._4_4_,iVar10);
        lVar3 = local_1c;
        if (iVar10 != 0) goto LAB_006266f8;
      }
LAB_006262b3:
      local_1c._4_4_ = (int)((ulonglong)lVar3 >> 0x20);
      local_1c._0_4_ = (uint)lVar3;
      bVar16 = (uint)local_1c < (uint)param_1[2];
      iVar15 = (uint)local_1c - param_1[2];
      iVar10 = local_1c._4_4_ - param_1[3];
      local_3c = lVar2;
      local_44 = lVar17;
      local_14 = lVar19;
      local_1c = lVar3;
      lVar18 = FUN_006247f0(local_7c,iVar15,iVar10 - (uint)bVar16);
      local_14._4_4_ = (undefined4)((ulonglong)lVar18 >> 0x20);
      if (lVar18 == -0x80) goto LAB_006266f8;
      local_14 = lVar18;
      if ((lVar18 < 0x100000000) && (lVar18 < 0)) {
        uVar7 = local_8 + (0xfffffffe < local_c);
        lVar17 = local_44;
        lVar4 = local_34;
        if (((int)uVar11 < (int)uVar7) || (((int)uVar11 <= (int)uVar7 && (uVar6 <= local_c + 1))))
        break;
        if (uVar6 == 0 && uVar11 == 0) goto LAB_006266f8;
        uVar12 = uVar6 - 0x10000;
        uVar11 = (uVar11 - 1) + (uint)(0xffff < uVar6);
        uVar6 = uVar12;
        if (((int)uVar11 <= (int)local_8) && (((int)uVar11 < (int)local_8 || (uVar12 <= local_c))))
        {
          uVar6 = local_c + 1;
          uVar11 = uVar7;
        }
        if (*param_1 == 0) {
          iVar10 = -0x81;
        }
        else {
          if ((code *)param_1[0xb1] != (code *)0x0) {
            iVar10 = (*(code *)param_1[0xb1])(*param_1,uVar6,uVar11,0);
            if (iVar10 != -1) {
              param_1[2] = uVar6;
              param_1[3] = uVar11;
              FUN_004018f0(param_1 + 6);
              iVar10 = 0;
              goto LAB_00626470;
            }
          }
          iVar10 = -0x80;
        }
LAB_00626470:
        local_14 = CONCAT44(local_14._4_4_,iVar10);
        lVar2 = local_3c;
        lVar18 = local_14;
        lVar17 = local_44;
        if (iVar10 != 0) goto LAB_006266f8;
LAB_0062647c:
        local_3c = lVar2;
        lVar18 = local_14;
        lVar19 = local_14;
        lVar4 = local_34;
        lVar3 = local_1c;
        if (local_1c <= CONCAT44(local_8,local_c)) break;
        goto LAB_006262b3;
      }
      iVar10 = FUN_004010f0(local_7c);
      lVar2 = local_3c;
      lVar17 = local_44;
      if (iVar10 != *(int *)(param_1[0x10] + iVar13 * 4)) goto LAB_0062647c;
      lVar19 = FUN_00401060(local_7c);
      lVar2 = local_3c;
      lVar17 = local_44;
      if (lVar19 == -1) goto LAB_0062647c;
      if (lVar19 < CONCAT44(local_28,local_2c)) {
        uVar6 = param_1[2];
        uVar11 = param_1[3];
        uVar7 = (uint)(local_2c < (uint)lVar19);
        uVar12 = local_28 - (int)((ulonglong)lVar19 >> 0x20);
        bVar16 = -1 < (int)(uVar12 - uVar7);
        local_c = uVar6;
        local_8 = uVar11;
        local_3c = lVar19;
        local_34 = local_14;
        lVar18 = local_1c;
        if ((uVar12 != uVar7 && bVar16) ||
           ((lVar2 = lVar19, bVar16 && (0xac44 < local_2c - (uint)lVar19)))) goto LAB_006264a6;
        goto LAB_0062647c;
      }
      local_4c = local_c + 1;
      local_48 = local_8 + (0xfffffffe < local_c);
      lVar18 = local_14;
      lVar4 = local_34;
      if (((int)uVar11 < (int)local_48) || (((int)uVar11 <= (int)local_48 && (uVar6 <= local_4c))))
      break;
      lVar17 = lVar19;
      lVar18 = CONCAT44(uVar11,uVar6);
      if (((uint)local_1c == param_1[2]) &&
         (lVar18 = CONCAT44(uVar11,uVar6), local_1c._4_4_ == param_1[3])) {
        uVar7 = uVar6 - 0x10000;
        uVar11 = (uVar11 - 1) + (uint)(0xffff < uVar6);
        uVar6 = uVar7;
        if (((int)uVar11 <= (int)local_8) && (((int)uVar11 < (int)local_8 || (uVar7 <= local_c)))) {
          uVar6 = local_4c;
          uVar11 = local_48;
        }
        local_1c = local_14;
        iVar10 = FUN_00624790(uVar6,uVar11);
        goto LAB_00626470;
      }
LAB_006264a6:
      local_1c = lVar18;
      lVar2 = local_3c;
      lVar18 = local_14;
      lVar4 = local_34;
    } while (CONCAT44(local_8,local_c) < local_1c);
  }
  local_14 = lVar18;
  local_44 = lVar17;
  local_34 = lVar4;
  iVar10 = FUN_00624790(lVar4);
  lVar18 = CONCAT44(local_14._4_4_,iVar10);
  param_1[0x14] = -1;
  param_1[0x15] = -1;
  if (iVar10 == 0) {
    local_14._0_4_ = iVar10;
    lVar17 = FUN_006247f0(local_5c,0xffffffff,0xffffffff);
    local_14._0_4_ = (int)lVar17;
    lVar18 = CONCAT44(local_14._4_4_,(int)local_14);
    if (-1 < lVar17) {
      if (iVar13 == param_1[0x18]) {
        FUN_006d1260(param_1 + 0x78);
      }
      else {
        FUN_00625640();
        param_1[0x18] = iVar13;
        param_1[0x17] = *(int *)(param_1[0x10] + iVar13 * 4);
        param_1[0x16] = 3;
      }
      piVar1 = param_1 + 0x1e;
      FUN_004019c0(piVar1,param_1[0x17]);
      FUN_004015c0(piVar1,local_5c);
      iVar13 = FUN_00401b40(piVar1,local_9c);
      while( true ) {
        if (iVar13 == 0) break;
        if (iVar13 >> 0x1f < 0) {
          local_14._0_4_ = 0xffffff78;
LAB_006266f1:
          lVar18 = CONCAT44(0xffffffff,(int)local_14);
          goto LAB_006266f8;
        }
        if ((local_8c & local_88) != 0xffffffff) {
          puVar9 = (uint *)(param_1[0x11] + param_1[0x18] * 0x10);
          iVar13 = (local_88 - *(int *)(param_1[0x11] + 4 + param_1[0x18] * 0x10)) -
                   (uint)(local_8c < *puVar9);
          param_1[0x14] = local_8c - *puVar9;
          param_1[0x15] = iVar13;
          if ((iVar13 < 1) && (iVar13 < 0)) {
            param_1[0x14] = 0;
            param_1[0x15] = 0;
          }
          puVar9 = (uint *)(param_1 + 0x14);
          uVar6 = *puVar9;
          *puVar9 = *puVar9 + (uint)local_24;
          param_1[0x15] =
               param_1[0x15] + (int)((ulonglong)local_24 >> 0x20) +
               (uint)CARRY4(uVar6,(uint)local_24);
          if ((param_1[0x15] <= param_3) &&
             ((param_1[0x15] < param_3 || ((uint)param_1[0x14] <= param_2)))) {
            lVar17 = FUN_00625b70(param_1,0xffffffff);
            if (CONCAT44(param_3,param_2) <= lVar17) {
              param_1[0x1a] = 0;
              param_1[0x1b] = 0;
              param_1[0x1c] = 0;
              param_1[0x1d] = 0;
              return 0;
            }
          }
          local_14._0_4_ = 0xffffff7f;
          goto LAB_006266f1;
        }
        FUN_00401b10(piVar1,0);
        iVar13 = FUN_00401b40(piVar1,local_9c);
      }
      local_14._0_4_ = FUN_00624790(local_34);
      lVar18 = CONCAT44(local_14._4_4_,(int)local_14);
      if (-1 < (int)local_14 >> 0x1f) {
        lVar17 = FUN_00624900();
        local_14._0_4_ = (int)lVar17;
        lVar18 = CONCAT44(local_14._4_4_,(int)local_14);
        while (-1 < lVar17) {
          do {
            iVar13 = FUN_004010f0(local_5c);
            if (iVar13 == param_1[0x17]) {
              FUN_00401060(local_5c);
              if (extraout_EDX < 0x80000000) {
LAB_0062665f:
                local_14._0_4_ = (int)lVar17;
                uVar8 = FUN_00625c00(param_1,lVar17);
                return uVar8;
              }
              iVar13 = FUN_00401000(local_5c);
              if (iVar13 == 0) goto LAB_0062665f;
            }
            *(longlong *)(param_1 + 2) = lVar17;
            lVar17 = FUN_00624900();
            lVar18 = CONCAT44(local_14._4_4_,(int)lVar17);
          } while (0xffffffff < lVar17);
        }
      }
    }
  }
LAB_006266f8:
  param_1[0x14] = -1;
  param_1[0x15] = -1;
  local_14 = lVar18;
  FUN_006d12e0(param_1 + 0x78);
  FUN_006d1920(param_1 + 0x94);
  param_1[0x16] = 2;
  return (int)local_14;
}


/* FUN_00626740 @ 00626740  kind=gamemisc  attributed-by=caller-vote  size=803 */

int FUN_00626740(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  int extraout_EDX;
  undefined8 uVar11;
  undefined1 local_40 [16];
  uint local_30;
  uint local_2c;
  undefined1 local_20 [8];
  undefined8 local_18;
  int local_10;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  iVar2 = FUN_006260c0(param_1,param_2,param_3);
  if ((-1 < iVar2) && (iVar2 = FUN_006255d0(), iVar2 == 0)) {
LAB_00626780:
    while( true ) {
      iVar2 = param_1 + 0x78;
      iVar3 = FUN_00401b40(iVar2,local_40);
      if (iVar3 < 1) break;
      iVar3 = FUN_006d0470(*(int *)(param_1 + 0x60) * 0x20 + *(int *)(param_1 + 0x48),local_40);
      local_10 = iVar3;
      if (iVar3 < 0) {
        FUN_00401b10(iVar2,0);
      }
      else {
        if (local_8 != 0) {
          uVar4 = local_8 + iVar3 >> 2;
          puVar7 = (uint *)(param_1 + 0x50);
          uVar6 = *puVar7;
          *puVar7 = *puVar7 + uVar4;
          *(int *)(param_1 + 0x54) =
               *(int *)(param_1 + 0x54) + (local_8 + iVar3 >> 0x1f) + (uint)CARRY4(uVar6,uVar4);
        }
        iVar5 = FUN_006d0270(*(undefined4 *)(param_1 + 0x48),1);
        uVar6 = iVar5 + iVar3 >> 2;
        iVar5 = (iVar5 + iVar3 >> 0x1f) + *(int *)(param_1 + 0x54) +
                (uint)CARRY4(uVar6,*(uint *)(param_1 + 0x50));
        if ((param_3 < iVar5) ||
           ((param_3 <= iVar5 && (param_2 <= uVar6 + *(uint *)(param_1 + 0x50)))))
        goto LAB_00626969;
        FUN_00401b10(iVar2,0);
        FUN_006d0500(param_1 + 0x250,local_40);
        FUN_006d0bb0(param_1 + 0x1e0,param_1 + 0x250);
        local_8 = iVar3;
        if ((-2 < (int)local_2c) && (local_2c < 0x80000000)) {
          iVar2 = *(int *)(param_1 + 0x60);
          iVar3 = *(int *)(param_1 + 0x44);
          puVar7 = (uint *)(iVar3 + iVar2 * 0x10);
          uVar6 = *puVar7;
          iVar5 = *(int *)(iVar3 + 4 + iVar2 * 0x10);
          *(uint *)(param_1 + 0x50) = local_30 - *puVar7;
          *(uint *)(param_1 + 0x54) = (local_2c - iVar5) - (uint)(local_30 < uVar6);
          iVar5 = 0;
          if ((*(int *)(param_1 + 0x54) < 1) && (*(int *)(param_1 + 0x54) < 0)) {
            *(undefined4 *)(param_1 + 0x50) = 0;
            *(undefined4 *)(param_1 + 0x54) = 0;
          }
          local_8 = local_10;
          if (0 < iVar2) {
            puVar7 = (uint *)(iVar3 + 8);
            do {
              uVar4 = *puVar7;
              puVar1 = (uint *)(param_1 + 0x50);
              uVar6 = *puVar1;
              *puVar1 = *puVar1 + uVar4;
              *(int *)(param_1 + 0x54) =
                   *(int *)(param_1 + 0x54) + puVar7[1] + (uint)CARRY4(uVar6,uVar4);
              iVar5 = iVar5 + 1;
              puVar7 = puVar7 + 4;
              local_8 = local_10;
            } while (iVar5 < iVar2);
          }
        }
      }
    }
    if (((-1 < iVar3) || (iVar3 == -3)) &&
       (FUN_006247f0(local_20,0xffffffff,0xffffffff), -1 < extraout_EDX)) {
      iVar2 = FUN_00401020(local_20);
      if (iVar2 != 0) {
        FUN_006d12e0(param_1 + 0x1e0);
        FUN_006d1920(param_1 + 0x250);
        *(undefined4 *)(param_1 + 0x58) = 2;
      }
      if (*(int *)(param_1 + 0x58) < 3) goto code_r0x006268f3;
      goto LAB_00626957;
    }
LAB_00626969:
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    local_10 = FUN_006d0420(*(undefined4 *)(param_1 + 0x48));
    __allshr();
    uVar11 = __allshl();
    iVar2 = (int)((ulonglong)uVar11 >> 0x20);
    if ((*(int *)(param_1 + 0x54) <= iVar2) &&
       ((*(int *)(param_1 + 0x54) < iVar2 || (*(uint *)(param_1 + 0x50) < (uint)uVar11)))) {
      do {
        local_18 = uVar11;
        uVar11 = __allshr();
        iVar2 = (int)((ulonglong)uVar11 >> 0x20);
        local_c = (uint)uVar11;
        uVar6 = FUN_006d0b50(param_1 + 0x1e0,0);
        if ((iVar2 <= (int)uVar6 >> 0x1f) && ((iVar2 < (int)uVar6 >> 0x1f || (local_c < uVar6)))) {
          uVar6 = local_c;
        }
        FUN_006d0b20(param_1 + 0x1e0,uVar6);
        uVar9 = uVar6 << ((byte)local_10 & 0x1f);
        puVar7 = (uint *)(param_1 + 0x50);
        uVar4 = *puVar7;
        *puVar7 = *puVar7 + uVar9;
        *(int *)(param_1 + 0x54) =
             *(int *)(param_1 + 0x54) + ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar4,uVar9);
        uVar11 = local_18;
        if (((int)uVar6 >> 0x1f <= iVar2) && (((int)uVar6 >> 0x1f < iVar2 || (uVar6 < local_c)))) {
          iVar2 = FUN_00625670(0,1,1);
          uVar11 = local_18;
          if (iVar2 < 1) {
            uVar11 = FUN_00625b70(param_1,0xffffffff);
            *(undefined8 *)(param_1 + 0x50) = uVar11;
            uVar11 = local_18;
          }
        }
        local_18._4_4_ = (int)((ulonglong)uVar11 >> 0x20);
        local_18._0_4_ = (uint)uVar11;
      } while ((*(int *)(param_1 + 0x54) < local_18._4_4_) ||
              ((*(int *)(param_1 + 0x54) <= local_18._4_4_ &&
               (*(uint *)(param_1 + 0x50) < (uint)local_18))));
    }
    iVar2 = 0;
  }
  return iVar2;
code_r0x006268f3:
  iVar3 = FUN_004010f0(local_20);
  iVar2 = *(int *)(param_1 + 0x34);
  iVar5 = 0;
  if (0 < iVar2) {
    piVar10 = *(int **)(param_1 + 0x40);
    do {
      if (*piVar10 == iVar3) break;
      iVar5 = iVar5 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar5 < iVar2);
  }
  if (iVar5 != iVar2) {
    *(int *)(param_1 + 0x60) = iVar5;
    *(undefined4 *)(param_1 + 0x58) = 3;
    uVar8 = FUN_004010f0(local_20);
    *(undefined4 *)(param_1 + 0x5c) = uVar8;
    FUN_004019c0(param_1 + 0x78,iVar3);
    iVar2 = FUN_006255d0();
    if (iVar2 != 0) {
      return iVar2;
    }
    local_8 = 0;
LAB_00626957:
    FUN_004015c0(param_1 + 0x78,local_20);
  }
  goto LAB_00626780;
}


/* FUN_00626a70 @ 00626a70  kind=gamemisc  attributed-by=caller-vote  size=50 */

int FUN_00626a70(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    if (param_2 < 0) {
      if (*(int *)(param_1 + 0x58) < 3) goto LAB_00626a9d;
      param_2 = *(int *)(param_1 + 0x60);
    }
    else if (*(int *)(param_1 + 0x34) <= param_2) {
      return 0;
    }
    return param_2 * 0x20 + *(int *)(param_1 + 0x48);
  }
LAB_00626a9d:
  return *(int *)(param_1 + 0x48);
}


/* FUN_00626ab0 @ 00626ab0  kind=gamemisc  attributed-by=caller-vote  size=791 */

int FUN_00626ab0(int param_1,short *param_2,int param_3,int param_4,int param_5,int param_6,
                undefined4 *param_7,code *param_8,undefined4 param_9)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  int local_10;
  int local_8;
  
  if (*(int *)(param_1 + 0x58) < 2) {
    return -0x83;
  }
  do {
    if ((*(int *)(param_1 + 0x58) == 4) &&
       (iVar4 = FUN_006d0b50(param_1 + 0x1e0,&local_8), iVar4 != 0)) {
      if (iVar4 < 1) {
        return iVar4;
      }
      if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 0x58) < 3)) {
        iVar5 = *(int *)(param_1 + 0x48);
      }
      else {
        iVar5 = *(int *)(param_1 + 0x60) * 0x20 + *(int *)(param_1 + 0x48);
      }
      iVar5 = *(int *)(iVar5 + 4);
      param_3 = param_3 / (iVar5 * param_5);
      if (param_3 < iVar4) {
        iVar4 = param_3;
      }
      if (iVar4 < 1) {
        return -0x83;
      }
      if (param_8 != (code *)0x0) {
        (*param_8)(local_8,iVar5,iVar4,param_9);
      }
      if (param_5 == 1) {
        iVar10 = 0;
        if (0 < iVar4) {
          do {
            iVar6 = 0;
            if (0 < iVar5) {
              do {
                iVar8 = (int)ROUND(*(float *)(*(int *)(local_8 + iVar6 * 4) + iVar10 * 4) * 128.0);
                if (iVar8 < 0x80) {
                  if (iVar8 < -0x80) {
                    iVar8 = -0x80;
                  }
                }
                else {
                  iVar8 = 0x7f;
                }
                *(byte *)param_2 = (char)iVar8 + -0x80 + (-(param_6 != 0) & 0x80U);
                iVar6 = iVar6 + 1;
                param_2 = (short *)((int)param_2 + 1);
              } while (iVar6 < iVar5);
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar4);
        }
      }
      else if (param_4 == 0) {
        local_10 = 0;
        if (param_6 == 0) {
          if (0 < iVar5) {
            do {
              iVar10 = *(int *)(local_8 + local_10 * 4);
              iVar6 = 0;
              psVar9 = param_2;
              if (0 < iVar4) {
                do {
                  iVar8 = (int)ROUND(*(float *)(iVar10 + iVar6 * 4) * 32768.0);
                  if (iVar8 < 0x8000) {
                    if (iVar8 < -0x8000) {
                      iVar8 = -0x8000;
                    }
                  }
                  else {
                    iVar8 = 0x7fff;
                  }
                  *psVar9 = (short)iVar8 + -0x8000;
                  iVar6 = iVar6 + 1;
                  psVar9 = psVar9 + iVar5;
                } while (iVar6 < iVar4);
              }
              local_10 = local_10 + 1;
              param_2 = param_2 + 1;
            } while (local_10 < iVar5);
          }
        }
        else if (0 < iVar5) {
          do {
            iVar10 = *(int *)(local_8 + local_10 * 4);
            iVar6 = 0;
            psVar9 = param_2;
            if (0 < iVar4) {
              do {
                iVar8 = (int)ROUND(*(float *)(iVar10 + iVar6 * 4) * 32768.0);
                if (iVar8 < 0x8000) {
                  if (iVar8 < -0x8000) {
                    iVar8 = -0x8000;
                  }
                }
                else {
                  iVar8 = 0x7fff;
                }
                *psVar9 = (short)iVar8;
                iVar6 = iVar6 + 1;
                psVar9 = psVar9 + iVar5;
              } while (iVar6 < iVar4);
            }
            local_10 = local_10 + 1;
            param_2 = param_2 + 1;
          } while (local_10 < iVar5);
        }
      }
      else {
        iVar10 = 0;
        if (0 < iVar4) {
          do {
            iVar6 = 0;
            if (0 < iVar5) {
              do {
                iVar8 = (int)ROUND(*(float *)(*(int *)(local_8 + iVar6 * 4) + iVar10 * 4) * 32768.0)
                ;
                if (iVar8 < 0x8000) {
                  if (iVar8 < -0x8000) {
                    iVar8 = -0x8000;
                  }
                }
                else {
                  iVar8 = 0x7fff;
                }
                iVar8 = iVar8 + (-(uint)(param_6 != 0) & 0xffff8000) + 0x8000;
                *(char *)param_2 = (char)((uint)iVar8 >> 8);
                *(char *)((int)param_2 + 1) = (char)iVar8;
                iVar6 = iVar6 + 1;
                param_2 = param_2 + 1;
              } while (iVar6 < iVar5);
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar4);
        }
      }
      FUN_006d0b20(param_1 + 0x1e0,iVar4);
      bVar3 = FUN_006d0420(*(undefined4 *)(param_1 + 0x48));
      uVar7 = iVar4 << (bVar3 & 0x1f);
      puVar1 = (uint *)(param_1 + 0x50);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + uVar7;
      *(int *)(param_1 + 0x54) =
           *(int *)(param_1 + 0x54) + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar2,uVar7);
      if (param_7 != (undefined4 *)0x0) {
        *param_7 = *(undefined4 *)(param_1 + 0x60);
      }
      return iVar5 * param_5 * iVar4;
    }
    iVar4 = FUN_00625670(0,1,1);
    if (iVar4 == -2) {
      return 0;
    }
  } while (0 < iVar4);
  return iVar4;
}


/* FUN_00626de0 @ 00626de0  kind=gamemisc  attributed-by=caller-vote  size=45 */

void FUN_00626de0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_00626ab0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0,0);
  return;
}


/* FUN_00626e10 @ 00626e10  kind=gamemisc  attributed-by=caller-vote  size=373 */

undefined4 FUN_00626e10(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *in_EAX;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  uVar4 = *(undefined4 *)in_EAX[0xf];
  uVar5 = ((undefined4 *)in_EAX[0xf])[1];
  uVar6 = in_EAX[0x72];
  uVar10 = FUN_00624f80(in_EAX[0x12]);
  if (((code *)in_EAX[0xb1] == (code *)0x0) || (in_EAX[0xb3] == 0)) {
    in_EAX[4] = 0xffffffff;
    in_EAX[5] = 0xffffffff;
    in_EAX[2] = 0xffffffff;
    in_EAX[3] = 0xffffffff;
  }
  else {
    (*(code *)in_EAX[0xb1])(*in_EAX,0,0,2);
    iVar8 = (*(code *)in_EAX[0xb3])(*in_EAX);
    in_EAX[4] = iVar8;
    in_EAX[2] = iVar8;
    in_EAX[5] = iVar8 >> 0x1f;
    in_EAX[3] = iVar8 >> 0x1f;
  }
  if ((in_EAX[4] & in_EAX[5]) != 0xffffffff) {
    lVar11 = FUN_00624a70();
    uVar9 = (undefined4)lVar11;
    if ((0xffffffff < lVar11) || (-1 < lVar11)) {
      iVar8 = FUN_00625130();
      if (iVar8 < 0) {
        return 0xffffff80;
      }
      puVar7 = (undefined4 *)in_EAX[0xe];
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined4 *)in_EAX[0x10] = uVar6;
      puVar7 = (undefined4 *)in_EAX[0xf];
      *puVar7 = uVar4;
      puVar7[1] = uVar5;
      *(undefined8 *)in_EAX[0x11] = uVar10;
      iVar8 = in_EAX[0x11];
      puVar1 = (uint *)(iVar8 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - (uint)uVar10;
      piVar2 = (int *)(iVar8 + 0xc);
      *piVar2 = (*piVar2 - (int)((ulonglong)uVar10 >> 0x20)) - (uint)(uVar3 < (uint)uVar10);
      iVar8 = in_EAX[0x11];
      if ((*(int *)(iVar8 + 0xc) < 1) && (*(int *)(iVar8 + 0xc) < 0)) {
        *(undefined4 *)(iVar8 + 8) = 0;
        *(undefined4 *)(iVar8 + 0xc) = 0;
      }
      uVar9 = FUN_00625c00();
    }
    return uVar9;
  }
  return 0xffffff7d;
}


/* FUN_00626f90 @ 00626f90  kind=gamemisc  attributed-by=caller-vote  size=400 */

/* WARNING: Removing unreachable block (ram,0x0062710e) */

int FUN_00626f90(void *param_1,size_t param_2,int param_3,code *param_4,int param_5,int param_6)

{
  int in_EAX;
  void *pvVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *unaff_ESI;
  int local_c;
  
  if ((in_EAX == 0) || (param_4 == (code *)0x0)) {
    local_c = -1;
  }
  else {
    local_c = (*param_4)();
  }
  memset(unaff_ESI,0,0x2d0);
  unaff_ESI[0xb0] = param_3;
  *unaff_ESI = in_EAX;
  unaff_ESI[0xb1] = (int)param_4;
  piVar3 = unaff_ESI + 6;
  unaff_ESI[0xb2] = param_5;
  unaff_ESI[0xb3] = param_6;
  FUN_00401330(piVar3);
  if (param_1 != (void *)0x0) {
    pvVar1 = (void *)FUN_004013a0(piVar3,param_2);
    memcpy(pvVar1,param_1,param_2);
    FUN_00401450(piVar3,param_2);
  }
  if (local_c != -1) {
    unaff_ESI[1] = 1;
  }
  unaff_ESI[0xd] = 1;
  pvVar1 = calloc(1,0x20);
  unaff_ESI[0x12] = (int)pvVar1;
  pvVar1 = calloc(1,0x10);
  unaff_ESI[0x13] = (int)pvVar1;
  FUN_00401120(unaff_ESI + 0x1e,0xffffffff);
  iVar2 = FUN_00624c70();
  if (iVar2 < 0) {
    *unaff_ESI = 0;
    FUN_00625a60();
  }
  else {
    piVar3 = calloc(2,4);
    unaff_ESI[0x10] = (int)piVar3;
    unaff_ESI[0x17] = unaff_ESI[0x72];
    *piVar3 = unaff_ESI[0x72];
    *(undefined4 *)(unaff_ESI[0x10] + 4) = 0;
    memcpy((void *)(unaff_ESI[0x10] + 8),(void *)0x0,0);
    puVar4 = calloc(1,8);
    unaff_ESI[0xe] = (int)puVar4;
    pvVar1 = calloc(1,8);
    unaff_ESI[0xf] = (int)pvVar1;
    *puVar4 = 0;
    puVar4[1] = 0;
    piVar3 = (int *)unaff_ESI[0xf];
    *piVar3 = unaff_ESI[2];
    piVar3[1] = unaff_ESI[3];
    unaff_ESI[0x16] = 1;
  }
  return iVar2;
}


/* FUN_00627120 @ 00627120  kind=gamemisc  attributed-by=caller-vote  size=134 */

int FUN_00627120(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  iVar1 = FUN_00626f90(param_3,param_4,param_5,param_6,param_7,param_8);
  if (iVar1 == 0) {
    if (param_2[0x16] != 1) {
      return -0x83;
    }
    param_2[0x16] = 2;
    if (param_2[1] != 0) {
      iVar1 = FUN_00626e10();
      if (iVar1 != 0) {
        *param_2 = 0;
        FUN_00625a60(param_2);
      }
      return iVar1;
    }
    param_2[0x16] = 3;
    iVar1 = 0;
  }
  return iVar1;
}


/* FUN_006271b0 @ 006271b0  kind=gamemisc  attributed-by=caller-vote  size=72 */

void FUN_006271b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00627120(param_1,param_2,param_3,param_4,fread_exref,FUN_00625a30,fclose_exref,ftell_exref);
  return;
}


/* __allshl @ 0068df30  kind=gamemisc  attributed-by=caller-vote  size=31 */

/* Library Function - Single Match
    __allshl
   
   Library: Visual Studio */

longlong __allshl(void)

{
  uint in_EAX;
  byte in_CL;
  int in_EDX;
  
  if (0x3f < in_CL) {
    return 0;
  }
  if (in_CL < 0x20) {
    return CONCAT44(in_EDX << (in_CL & 0x1f) | in_EAX >> 0x20 - (in_CL & 0x1f),
                    in_EAX << (in_CL & 0x1f));
  }
  return (ulonglong)(in_EAX << (in_CL & 0x1f)) << 0x20;
}


/* __allshr @ 0068e3a0  kind=gamemisc  attributed-by=caller-vote  size=33 */

/* Library Function - Single Match
    __allshr
   
   Library: Visual Studio */

undefined8 __allshr(void)

{
  uint in_EAX;
  byte in_CL;
  int in_EDX;
  int iVar1;
  
  iVar1 = in_EDX >> 0x1f;
  if (0x3f < in_CL) {
    return CONCAT44(iVar1,iVar1);
  }
  if (in_CL < 0x20) {
    return CONCAT44(in_EDX >> (in_CL & 0x1f),
                    in_EAX >> (in_CL & 0x1f) | in_EDX << 0x20 - (in_CL & 0x1f));
  }
  return CONCAT44(iVar1,in_EDX >> (in_CL & 0x1f));
}


/* FUN_006cf8e0 @ 006cf8e0  kind=gamemisc  attributed-by=caller-vote  size=242 */

/* WARNING: Removing unreachable block (ram,0x006cf948) */
/* WARNING: Removing unreachable block (ram,0x006cf950) */
/* WARNING: Removing unreachable block (ram,0x006cf995) */
/* WARNING: Removing unreachable block (ram,0x006cf99b) */
/* WARNING: Removing unreachable block (ram,0x006cf9af) */
/* WARNING: Removing unreachable block (ram,0x006cf953) */
/* WARNING: Removing unreachable block (ram,0x006cf97b) */
/* WARNING: Removing unreachable block (ram,0x006cf984) */
/* WARNING: Removing unreachable block (ram,0x006cf958) */
/* WARNING: Removing unreachable block (ram,0x006cf95d) */
/* WARNING: Removing unreachable block (ram,0x006cf965) */
/* WARNING: Removing unreachable block (ram,0x006cf96d) */
/* WARNING: Removing unreachable block (ram,0x006cf9a4) */

undefined4 FUN_006cf8e0(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    FUN_00401e80();
    FUN_006d0320(6);
    return 0xffffff7c;
  }
  return 0xffffff7b;
}


/* FUN_006cf9e0 @ 006cf9e0  kind=gamemisc  attributed-by=caller-vote  size=130 */

/* WARNING: Removing unreachable block (ram,0x006cfa4b) */
/* WARNING: Removing unreachable block (ram,0x006cfa53) */

undefined4 FUN_006cf9e0(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    if ((param_1[2] != 0) && (iVar1 = FUN_00401e80(0,*param_1,*param_1,param_1[1]), iVar1 == 1)) {
      FUN_006d0320(6);
    }
  }
  return 0;
}


/* FUN_006cfa70 @ 006cfa70  kind=gamemisc  attributed-by=caller-vote  size=727 */

undefined4 FUN_006cfa70(void)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  int *piVar7;
  int *local_c;
  
  iVar5 = *(int *)(in_ECX + 0x1c);
  if (iVar5 == 0) {
    return 0xffffff7f;
  }
  iVar1 = FUN_00401e80();
  iVar1 = iVar1 + 1;
  *(int *)(iVar5 + 0x18) = iVar1;
  if (0 < iVar1) {
    iVar6 = 0;
    if (0 < iVar1) {
      local_c = (int *)(iVar5 + 0x720);
      do {
        iVar1 = FUN_006d3840();
        *local_c = iVar1;
        if (iVar1 == 0) goto LAB_006cfd36;
        iVar6 = iVar6 + 1;
        local_c = local_c + 1;
      } while (iVar6 < *(int *)(iVar5 + 0x18));
    }
    iVar1 = FUN_00401e80();
    iVar1 = iVar1 + 1;
    if (0 < iVar1) {
      iVar6 = 0;
      if (0 < iVar1) {
        do {
          iVar2 = FUN_00401e80();
          if (iVar2 != 0) goto LAB_006cfd36;
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar1);
      }
      iVar1 = FUN_00401e80();
      *(int *)(iVar5 + 0x10) = iVar1 + 1;
      if (0 < iVar1 + 1) {
        local_c = (int *)0x0;
        piVar7 = (int *)(iVar5 + 0x420);
        do {
          iVar1 = FUN_00401e80();
          piVar7[-0x40] = iVar1;
          if ((iVar1 < 0) || (1 < iVar1)) goto LAB_006cfd36;
          iVar1 = (**(code **)((&PTR_DAT_00737958)[iVar1] + 4))(in_ECX);
          *piVar7 = iVar1;
          if (iVar1 == 0) goto LAB_006cfd36;
          local_c = (int *)((int)local_c + 1);
          piVar7 = piVar7 + 1;
        } while ((int)local_c < *(int *)(iVar5 + 0x10));
        iVar1 = FUN_00401e80();
        *(int *)(iVar5 + 0x14) = iVar1 + 1;
        if (0 < iVar1 + 1) {
          local_c = (int *)0x0;
          piVar7 = (int *)(iVar5 + 0x620);
          do {
            iVar1 = FUN_00401e80();
            piVar7[-0x40] = iVar1;
            if ((iVar1 < 0) || (2 < iVar1)) goto LAB_006cfd36;
            iVar1 = (**(code **)((&PTR_DAT_00737948)[iVar1] + 4))(in_ECX);
            *piVar7 = iVar1;
            if (iVar1 == 0) goto LAB_006cfd36;
            local_c = (int *)((int)local_c + 1);
            piVar7 = piVar7 + 1;
          } while ((int)local_c < *(int *)(iVar5 + 0x14));
          iVar1 = FUN_00401e80();
          *(int *)(iVar5 + 0xc) = iVar1 + 1;
          if (0 < iVar1 + 1) {
            local_c = (int *)0x0;
            piVar7 = (int *)(iVar5 + 0x220);
            do {
              iVar1 = FUN_00401e80();
              piVar7[-0x40] = iVar1;
              if ((iVar1 < 0) || (0 < iVar1)) goto LAB_006cfd36;
              iVar1 = (**(code **)((&PTR_PTR_00737954)[iVar1] + 4))(in_ECX);
              *piVar7 = iVar1;
              if (iVar1 == 0) goto LAB_006cfd36;
              local_c = (int *)((int)local_c + 1);
              piVar7 = piVar7 + 1;
            } while ((int)local_c < *(int *)(iVar5 + 0xc));
            iVar1 = FUN_00401e80();
            *(int *)(iVar5 + 8) = iVar1 + 1;
            if (0 < iVar1 + 1) {
              local_c = (int *)0x0;
              piVar7 = (int *)(iVar5 + 0x20);
              do {
                pvVar3 = calloc(1,0x10);
                *piVar7 = (int)pvVar3;
                uVar4 = FUN_00401e80();
                *(undefined4 *)*piVar7 = uVar4;
                uVar4 = FUN_00401e80();
                *(undefined4 *)(*piVar7 + 4) = uVar4;
                uVar4 = FUN_00401e80();
                *(undefined4 *)(*piVar7 + 8) = uVar4;
                uVar4 = FUN_00401e80();
                *(undefined4 *)(*piVar7 + 0xc) = uVar4;
                iVar1 = *piVar7;
                if ((((0 < *(int *)(iVar1 + 4)) || (0 < *(int *)(iVar1 + 8))) ||
                    (*(int *)(iVar5 + 0xc) <= *(int *)(iVar1 + 0xc))) || (*(int *)(iVar1 + 0xc) < 0)
                   ) goto LAB_006cfd36;
                local_c = (int *)((int)local_c + 1);
                piVar7 = piVar7 + 1;
              } while ((int)local_c < *(int *)(iVar5 + 8));
              iVar5 = FUN_00401e80();
              if (iVar5 == 1) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
LAB_006cfd36:
  FUN_006cffb0(in_ECX);
  return 0xffffff7b;
}


/* FUN_006cfd50 @ 006cfd50  kind=gamemisc  attributed-by=caller-vote  size=324 */

undefined4 FUN_006cfd50(void)

{
  int iVar1;
  void *pvVar2;
  int *in_ECX;
  int *in_EDX;
  int local_8;
  
  iVar1 = FUN_00401e80();
  if ((-1 < iVar1) && (iVar1 <= in_EDX[4] + -8)) {
    pvVar2 = calloc(iVar1 + 1,1);
    in_ECX[3] = (int)pvVar2;
    FUN_006d0320(iVar1);
    iVar1 = FUN_00401e80();
    if ((-1 < iVar1) &&
       (iVar1 <= (in_EDX[4] - ((int)(in_EDX[1] + 7 + (in_EDX[1] + 7 >> 0x1f & 7U)) >> 3)) - *in_EDX
                 >> 2)) {
      in_ECX[2] = iVar1;
      pvVar2 = calloc(iVar1 + 1U,4);
      *in_ECX = (int)pvVar2;
      pvVar2 = calloc(iVar1 + 1U,4);
      in_ECX[1] = (int)pvVar2;
      local_8 = 0;
      if (0 < in_ECX[2]) {
        do {
          iVar1 = FUN_00401e80();
          if ((iVar1 < 0) ||
             ((in_EDX[4] - ((int)(in_EDX[1] + 7 + (in_EDX[1] + 7 >> 0x1f & 7U)) >> 3)) - *in_EDX <
              iVar1)) goto LAB_006cfe7f;
          *(int *)(in_ECX[1] + local_8 * 4) = iVar1;
          pvVar2 = calloc(iVar1 + 1,1);
          *(void **)(*in_ECX + local_8 * 4) = pvVar2;
          FUN_006d0320(iVar1);
          local_8 = local_8 + 1;
        } while (local_8 < in_ECX[2]);
      }
      iVar1 = FUN_00401e80();
      if (iVar1 == 1) {
        return 0;
      }
    }
  }
LAB_006cfe7f:
  FUN_006d0290();
  return 0xffffff7b;
}


/* FUN_006cfea0 @ 006cfea0  kind=gamemisc  attributed-by=caller-vote  size=267 */

undefined4 FUN_006cfea0(void)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int *in_ECX;
  
  piVar1 = (int *)in_ECX[7];
  if (piVar1 == (int *)0x0) {
    return 0xffffff7f;
  }
  iVar3 = FUN_00401e80();
  *in_ECX = iVar3;
  if (iVar3 != 0) {
    return 0xffffff7a;
  }
  iVar3 = FUN_00401e80();
  in_ECX[1] = iVar3;
  iVar3 = FUN_00401e80();
  in_ECX[2] = iVar3;
  iVar3 = FUN_00401e80();
  in_ECX[3] = iVar3;
  iVar3 = FUN_00401e80();
  in_ECX[4] = iVar3;
  iVar3 = FUN_00401e80();
  in_ECX[5] = iVar3;
  bVar2 = FUN_00401e80();
  *piVar1 = 1 << (bVar2 & 0x1f);
  bVar2 = FUN_00401e80();
  iVar3 = 1 << (bVar2 & 0x1f);
  piVar1[1] = iVar3;
  if ((((0 < in_ECX[2]) && (0 < in_ECX[1])) && (0x3f < *piVar1)) &&
     ((*piVar1 <= iVar3 && (iVar3 < 0x2001)))) {
    iVar3 = FUN_00401e80();
    if (iVar3 == 1) {
      return 0;
    }
  }
  FUN_006cffb0();
  return 0xffffff7b;
}


/* FUN_006cffb0 @ 006cffb0  kind=gamemisc  attributed-by=caller-vote  size=619 */

void FUN_006cffb0(undefined8 *param_1)

{
  void *pvVar1;
  void *_Memory;
  undefined8 *_Memory_00;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int local_10;
  int local_c;
  
  _Memory = *(void **)((int)param_1 + 0x1c);
  if (_Memory != (void *)0x0) {
    iVar3 = 0;
    if (0 < *(int *)((int)_Memory + 8)) {
      puVar2 = (undefined4 *)((int)_Memory + 0x20);
      do {
        if ((void *)*puVar2 != (void *)0x0) {
          free((void *)*puVar2);
        }
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar3 < *(int *)((int)_Memory + 8));
    }
    local_c = 0;
    if (0 < *(int *)((int)_Memory + 0xc)) {
      piVar4 = (int *)((int)_Memory + 0x220);
      do {
        if (*piVar4 != 0) {
          (**(code **)((&PTR_PTR_00737954)[piVar4[-0x40]] + 8))(*piVar4);
        }
        local_c = local_c + 1;
        piVar4 = piVar4 + 1;
      } while (local_c < *(int *)((int)_Memory + 0xc));
    }
    local_c = 0;
    if (0 < *(int *)((int)_Memory + 0x10)) {
      piVar4 = (int *)((int)_Memory + 0x420);
      do {
        if (*piVar4 != 0) {
          (**(code **)((&PTR_DAT_00737958)[piVar4[-0x40]] + 0xc))(*piVar4);
        }
        local_c = local_c + 1;
        piVar4 = piVar4 + 1;
      } while (local_c < *(int *)((int)_Memory + 0x10));
    }
    local_c = 0;
    if (0 < *(int *)((int)_Memory + 0x14)) {
      piVar4 = (int *)((int)_Memory + 0x620);
      do {
        if (*piVar4 != 0) {
          (**(code **)((&PTR_DAT_00737948)[piVar4[-0x40]] + 0xc))(*piVar4);
        }
        local_c = local_c + 1;
        piVar4 = piVar4 + 1;
      } while (local_c < *(int *)((int)_Memory + 0x14));
    }
    local_10 = 0;
    if (0 < *(int *)((int)_Memory + 0x18)) {
      puVar2 = (undefined4 *)((int)_Memory + 0x720);
      local_c = 0;
      do {
        _Memory_00 = (undefined8 *)*puVar2;
        if ((_Memory_00 != (undefined8 *)0x0) && (*(int *)((int)_Memory_00 + 0x24) != 0)) {
          if (*(void **)(_Memory_00 + 4) != (void *)0x0) {
            free(*(void **)(_Memory_00 + 4));
          }
          if (*(void **)(_Memory_00 + 1) != (void *)0x0) {
            free(*(void **)(_Memory_00 + 1));
          }
          *_Memory_00 = 0;
          _Memory_00[1] = 0;
          _Memory_00[2] = 0;
          _Memory_00[3] = 0;
          _Memory_00[4] = 0;
          free(_Memory_00);
        }
        if (*(int *)((int)_Memory + 0xb20) != 0) {
          pvVar1 = (void *)(local_c + *(int *)((int)_Memory + 0xb20));
          if (*(void **)((int)pvVar1 + 0x10) != (void *)0x0) {
            free(*(void **)((int)pvVar1 + 0x10));
          }
          if (*(void **)((int)pvVar1 + 0x14) != (void *)0x0) {
            free(*(void **)((int)pvVar1 + 0x14));
          }
          if (*(void **)((int)pvVar1 + 0x18) != (void *)0x0) {
            free(*(void **)((int)pvVar1 + 0x18));
          }
          if (*(void **)((int)pvVar1 + 0x1c) != (void *)0x0) {
            free(*(void **)((int)pvVar1 + 0x1c));
          }
          if (*(void **)((int)pvVar1 + 0x20) != (void *)0x0) {
            free(*(void **)((int)pvVar1 + 0x20));
          }
          memset(pvVar1,0,0x38);
        }
        local_10 = local_10 + 1;
        puVar2 = puVar2 + 1;
        local_c = local_c + 0x38;
      } while (local_10 < *(int *)((int)_Memory + 0x18));
    }
    if (*(void **)((int)_Memory + 0xb20) != (void *)0x0) {
      free(*(void **)((int)_Memory + 0xb20));
    }
    local_10 = 0;
    if (0 < *(int *)((int)_Memory + 0x1c)) {
      puVar2 = (undefined4 *)((int)_Memory + 0xb24);
      do {
        pvVar1 = (void *)*puVar2;
        if (pvVar1 != (void *)0x0) {
          memset(pvVar1,0,0x208);
          free(pvVar1);
        }
        local_10 = local_10 + 1;
        puVar2 = puVar2 + 1;
      } while (local_10 < *(int *)((int)_Memory + 0x1c));
    }
    free(_Memory);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


/* FUN_006d0230 @ 006d0230  kind=gamemisc  attributed-by=caller-vote  size=51 */

void FUN_006d0230(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  pvVar1 = calloc(1,0xe50);
  *(void **)((int)param_1 + 0x1c) = pvVar1;
  return;
}


/* FUN_006d0270 @ 006d0270  kind=gamemisc  attributed-by=caller-vote  size=26 */

undefined4 FUN_006d0270(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_2 * 4);
  }
  return 0xffffffff;
}


/* FUN_006d0290 @ 006d0290  kind=gamemisc  attributed-by=caller-vote  size=103 */

void FUN_006d0290(int *param_1)

{
  void *_Memory;
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      iVar1 = 0;
      if (0 < param_1[2]) {
        do {
          _Memory = *(void **)(*param_1 + iVar1 * 4);
          if (_Memory != (void *)0x0) {
            free(_Memory);
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < param_1[2]);
      }
      free((void *)*param_1);
    }
    if ((void *)param_1[1] != (void *)0x0) {
      free((void *)param_1[1]);
    }
    if ((void *)param_1[3] != (void *)0x0) {
      free((void *)param_1[3]);
    }
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}


/* FUN_006d0300 @ 006d0300  kind=gamemisc  attributed-by=caller-vote  size=20 */

void FUN_006d0300(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


/* FUN_006d0320 @ 006d0320  kind=gamemisc  attributed-by=caller-vote  size=242 */

void FUN_006d0320(int param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  byte *in_EDX;
  byte bVar3;
  uint uVar4;
  
  do {
    if (param_1 == 0) {
      return;
    }
    iVar2 = in_ECX[4];
    param_1 = param_1 + -1;
    uVar4 = in_ECX[1] + 8;
    if (*in_ECX < iVar2 + -4) {
LAB_006d037b:
      bVar3 = *(byte *)in_ECX[3] >> (*(byte *)(in_ECX + 1) & 0x1f);
      if (8 < (int)uVar4) {
        cVar1 = -(char)in_ECX[1];
        bVar3 = bVar3 | ((byte *)in_ECX[3])[1] << (cVar1 + 8U & 0x1f);
        if ((((0x10 < (int)uVar4) &&
             (bVar3 = bVar3 | *(char *)(in_ECX[3] + 2) << (cVar1 + 0x10U & 0x1f), 0x18 < (int)uVar4)
             ) && (bVar3 = bVar3 | *(char *)(in_ECX[3] + 3) << (cVar1 + 0x18U & 0x1f),
                  0x20 < (int)uVar4)) && (in_ECX[1] != 0)) {
          bVar3 = bVar3 | *(char *)(in_ECX[3] + 4) << (cVar1 + 0x20U & 0x1f);
        }
      }
      iVar2 = (int)(uVar4 + ((int)uVar4 >> 0x1f & 7U)) >> 3;
      in_ECX[3] = in_ECX[3] + iVar2;
      *in_ECX = *in_ECX + iVar2;
      in_ECX[1] = uVar4 & 7;
    }
    else if (iVar2 - (in_ECX[1] + 0xf >> 3) < *in_ECX) {
      in_ECX[3] = 0;
      *in_ECX = iVar2;
      in_ECX[1] = 1;
      bVar3 = 0xff;
    }
    else {
      if (uVar4 != 0) goto LAB_006d037b;
      bVar3 = 0;
    }
    *in_EDX = bVar3;
    in_EDX = in_EDX + 1;
  } while( true );
}


/* FUN_006d0420 @ 006d0420  kind=gamemisc  attributed-by=caller-vote  size=17 */

undefined4 FUN_006d0420(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xe48);
}


/* FUN_006d0470 @ 006d0470  kind=gamemisc  attributed-by=caller-vote  size=132 */

undefined4 FUN_006d0470(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = FUN_00401e80();
  if (iVar2 != 0) {
    return 0xffffff79;
  }
  for (iVar2 = *(int *)(iVar1 + 8); 1 < iVar2; iVar2 = iVar2 >> 1) {
  }
  iVar2 = FUN_00401e80();
  if (iVar2 != -1) {
    return *(undefined4 *)(iVar1 + **(int **)(iVar1 + 0x20 + iVar2 * 4) * 4);
  }
  return 0xffffff78;
}


/* FUN_006d0500 @ 006d0500  kind=gamemisc  attributed-by=caller-vote  size=258 */

undefined4 FUN_006d0500(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(int *)(param_1[0x10] + 4) + 0x1c);
  FUN_006d1b10();
  uVar4 = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  param_1[5] = uVar4;
  param_1[4] = uVar1;
  param_1[3] = uVar1;
  iVar3 = FUN_00401e80();
  if (iVar3 != 0) {
    return 0xffffff79;
  }
  iVar3 = FUN_00401e80();
  if (iVar3 != -1) {
    param_1[10] = iVar3;
    piVar2 = *(int **)(iVar5 + 0x20 + iVar3 * 4);
    if (piVar2 != (int *)0x0) {
      iVar5 = *piVar2;
      param_1[7] = iVar5;
      if (iVar5 == 0) {
        param_1[6] = 0;
        param_1[8] = 0;
      }
      else {
        uVar4 = FUN_00401e80();
        param_1[6] = uVar4;
        iVar5 = FUN_00401e80();
        param_1[8] = iVar5;
        if (iVar5 == -1) {
          return 0xffffff78;
        }
      }
      param_1[0xc] = param_2[4];
      param_1[0xd] = param_2[5];
      param_1[0xe] = param_2[6];
      param_1[0xf] = param_2[7];
      param_1[0xb] = param_2[3];
      param_1[9] = 0;
      *param_1 = 0;
      return 0;
    }
  }
  return 0xffffff78;
}


/* FUN_006d0610 @ 006d0610  kind=gamemisc  attributed-by=caller-vote  size=426 */

undefined4 FUN_006d0610(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
LAB_006d0639:
    iVar7 = 0;
    iVar5 = 0;
  }
  else {
    iVar1 = param_1[0x10];
    if (iVar1 == 0) goto LAB_006d0639;
    iVar5 = *(int *)(iVar1 + 4);
    iVar7 = *(int *)(iVar1 + 0x68);
    if (iVar5 != 0) {
      iVar4 = *(int *)(iVar5 + 0x1c);
      goto LAB_006d0642;
    }
  }
  iVar4 = 0;
LAB_006d0642:
  if (param_1 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = param_1 + 1;
  }
  if ((((iVar1 != 0) && (iVar7 != 0)) && (iVar5 != 0)) && ((iVar4 != 0 && (piVar6 != (int *)0x0))))
  {
    FUN_006d1b10();
    iVar1 = param_2[1];
    iVar7 = *param_2;
    piVar6[0] = 0;
    piVar6[1] = 0;
    piVar6[2] = 0;
    piVar6[3] = 0;
    piVar6[4] = 0;
    piVar6[4] = iVar1;
    piVar6[3] = iVar7;
    piVar6[2] = iVar7;
    iVar1 = FUN_00401e80();
    if (iVar1 != 0) {
      return 0xffffff79;
    }
    iVar1 = FUN_00401e80();
    if (iVar1 != -1) {
      param_1[10] = iVar1;
      piVar2 = (int *)(iVar4 + iVar1 * 4 + 0x20);
      piVar6 = (int *)*piVar2;
      if (piVar6 != (int *)0x0) {
        iVar1 = *piVar6;
        param_1[7] = iVar1;
        if (iVar1 == 0) {
          param_1[6] = 0;
          param_1[8] = 0;
        }
        else {
          iVar1 = FUN_00401e80();
          param_1[6] = iVar1;
          iVar1 = FUN_00401e80();
          param_1[8] = iVar1;
          if (iVar1 == -1) {
            return 0xffffff78;
          }
        }
        param_1[0xc] = param_2[4];
        param_1[0xd] = param_2[5];
        param_1[0xe] = param_2[6];
        param_1[0xf] = param_2[7];
        param_1[0xb] = param_2[3];
        param_1[9] = *(int *)(iVar4 + param_1[7] * 4);
        iVar1 = FUN_006d1ab0();
        iVar7 = 0;
        *param_1 = iVar1;
        if (0 < *(int *)(iVar5 + 4)) {
          do {
            uVar3 = FUN_006d1ab0();
            iVar7 = iVar7 + 1;
            *(undefined4 *)(*param_1 + -4 + iVar7 * 4) = uVar3;
          } while (iVar7 < *(int *)(iVar5 + 4));
        }
        iVar1 = *(int *)(*piVar2 + 0xc);
        uVar3 = (**(code **)((&PTR_PTR_00737954)[*(int *)(iVar4 + 0x120 + iVar1 * 4)] + 0x10))
                          (param_1,*(undefined4 *)(iVar4 + 0x220 + iVar1 * 4));
        return uVar3;
      }
    }
  }
  return 0xffffff78;
}


/* FUN_006d0b20 @ 006d0b20  kind=gamemisc  attributed-by=caller-vote  size=37 */

undefined4 FUN_006d0b20(int param_1,int param_2)

{
  if ((param_2 != 0) && (*(int *)(param_1 + 0x14) < *(int *)(param_1 + 0x18) + param_2)) {
    return 0xffffff7d;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_2;
  return 0;
}


/* FUN_006d0b50 @ 006d0b50  kind=gamemisc  attributed-by=caller-vote  size=85 */

int FUN_006d0b50(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  if ((-1 < *(int *)(param_1 + 0x18)) && (*(int *)(param_1 + 0x18) < *(int *)(param_1 + 0x14))) {
    if (param_2 != (undefined4 *)0x0) {
      iVar3 = 0;
      if (0 < *(int *)(iVar2 + 4)) {
        do {
          iVar1 = iVar3 * 4;
          iVar3 = iVar3 + 1;
          *(int *)(*(int *)(param_1 + 0xc) + -4 + iVar3 * 4) =
               *(int *)(*(int *)(param_1 + 8) + iVar1) + *(int *)(param_1 + 0x18) * 4;
        } while (iVar3 < *(int *)(iVar2 + 4));
      }
      *param_2 = *(undefined4 *)(param_1 + 0xc);
    }
    return *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18);
  }
  return 0;
}


/* FUN_006d0bb0 @ 006d0bb0  kind=gamemisc  attributed-by=caller-vote  size=1639 */

undefined4 FUN_006d0bb0(int param_1,int *param_2)

{
  uint *puVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  byte bVar17;
  float *pfVar18;
  float *pfVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int local_2c;
  int local_20;
  int local_18;
  int local_10;
  
  iVar26 = *(int *)(param_1 + 4);
  iVar15 = *(int *)(param_1 + 0x68);
  piVar5 = *(int **)(iVar26 + 0x1c);
  iVar6 = piVar5[0x392];
  if ((param_2 != (int *)0x0) &&
     ((*(int *)(param_1 + 0x14) <= *(int *)(param_1 + 0x18) || (*(int *)(param_1 + 0x18) == -1)))) {
    uVar7 = *(uint *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = param_2[7];
    *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
    if ((((uVar7 & *(uint *)(param_1 + 0x44)) == 0xffffffff) || (uVar7 + 1 != param_2[0xe])) ||
       (*(uint *)(param_1 + 0x44) + (uint)(0xfffffffe < uVar7) != param_2[0xf])) {
      *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
      *(undefined4 *)(iVar15 + 0x80) = 0xffffffff;
      *(undefined4 *)(iVar15 + 0x84) = 0xffffffff;
    }
    *(int *)(param_1 + 0x40) = param_2[0xe];
    *(int *)(param_1 + 0x44) = param_2[0xf];
    bVar11 = (byte)iVar6;
    if (*param_2 != 0) {
      bVar17 = bVar11 + 1;
      iVar12 = piVar5[*(int *)(param_1 + 0x28)] >> (bVar17 & 0x1f);
      iVar22 = *piVar5 >> (bVar17 & 0x1f);
      iVar13 = piVar5[1] >> (bVar17 & 0x1f);
      uVar16 = param_2[0x16];
      puVar1 = (uint *)(param_1 + 0x48);
      uVar7 = *puVar1;
      *puVar1 = *puVar1 + uVar16;
      *(int *)(param_1 + 0x4c) =
           *(int *)(param_1 + 0x4c) + ((int)uVar16 >> 0x1f) + (uint)CARRY4(uVar7,uVar16);
      uVar16 = param_2[0x17];
      puVar1 = (uint *)(param_1 + 0x50);
      uVar7 = *puVar1;
      *puVar1 = *puVar1 + uVar16;
      *(int *)(param_1 + 0x54) =
           *(int *)(param_1 + 0x54) + ((int)uVar16 >> 0x1f) + (uint)CARRY4(uVar7,uVar16);
      uVar16 = param_2[0x18];
      puVar1 = (uint *)(param_1 + 0x58);
      uVar7 = *puVar1;
      *puVar1 = *puVar1 + uVar16;
      *(int *)(param_1 + 0x5c) =
           *(int *)(param_1 + 0x5c) + ((int)uVar16 >> 0x1f) + (uint)CARRY4(uVar7,uVar16);
      uVar16 = param_2[0x19];
      puVar1 = (uint *)(param_1 + 0x60);
      uVar7 = *puVar1;
      *puVar1 = *puVar1 + uVar16;
      *(int *)(param_1 + 100) =
           *(int *)(param_1 + 100) + ((int)uVar16 >> 0x1f) + (uint)CARRY4(uVar7,uVar16);
      if (*(int *)(param_1 + 0x30) == 0) {
        local_2c = 0;
        local_18 = iVar13;
      }
      else {
        local_18 = 0;
        local_2c = iVar13;
      }
      local_10 = 0;
      if (0 < *(int *)(iVar26 + 4)) {
        do {
          if (*(int *)(param_1 + 0x24) == 0) {
            iVar14 = *(int *)(iVar15 + 4) - iVar6;
            if (*(int *)(param_1 + 0x28) == 0) {
              puVar8 = (&PTR_DAT_0073fe10)[iVar14];
              pfVar2 = (float *)(*(int *)(*(int *)(param_1 + 8) + local_10 * 4) + local_18 * 4);
              iVar14 = *(int *)(*param_2 + local_10 * 4);
              if (0 < iVar22) {
                pfVar18 = (float *)(puVar8 + (iVar22 + -1) * 4);
                pfVar19 = pfVar2;
                iVar23 = iVar22;
                do {
                  fVar4 = *pfVar18;
                  pfVar3 = (float *)(((int)puVar8 - (int)pfVar2) + (int)pfVar19);
                  pfVar18 = pfVar18 + -1;
                  *pfVar19 = *(float *)((int)pfVar3 + (iVar14 - (int)puVar8)) * *pfVar3 +
                             *pfVar19 * fVar4;
                  iVar23 = iVar23 + -1;
                  pfVar19 = pfVar19 + 1;
                } while (iVar23 != 0);
              }
            }
            else {
              puVar8 = (&PTR_DAT_0073fe10)[iVar14];
              pfVar2 = (float *)(*(int *)(*(int *)(param_1 + 8) + local_10 * 4) + local_18 * 4);
              iVar14 = *(int *)(*param_2 + local_10 * 4) + (iVar13 / 2 - iVar22 / 2) * 4;
              local_20 = 0;
              if (0 < iVar22) {
                pfVar18 = (float *)(puVar8 + (iVar22 + -1) * 4);
                pfVar19 = pfVar2;
                iVar23 = iVar22;
                do {
                  fVar4 = *pfVar18;
                  pfVar3 = (float *)(((int)puVar8 - (int)pfVar2) + (int)pfVar19);
                  pfVar18 = pfVar18 + -1;
                  *pfVar19 = *(float *)((int)pfVar3 + (iVar14 - (int)puVar8)) * *pfVar3 +
                             *pfVar19 * fVar4;
                  iVar23 = iVar23 + -1;
                  pfVar19 = pfVar19 + 1;
                  local_20 = iVar22;
                } while (iVar23 != 0);
              }
              iVar23 = iVar22 / 2 + iVar13 / 2;
              if (local_20 < iVar23) {
                if (3 < iVar23 - local_20) {
                  pfVar19 = (float *)(iVar14 + 0xc + local_20 * 4);
                  pfVar18 = pfVar2 + local_20 + 1;
                  iVar24 = ((iVar23 - local_20) - 4U >> 2) + 1;
                  local_20 = local_20 + iVar24 * 4;
                  do {
                    pfVar18[-1] = pfVar19[-3];
                    *pfVar18 = *(float *)((iVar14 - (int)pfVar2) + (int)pfVar18);
                    pfVar18[1] = pfVar19[-1];
                    pfVar18[2] = *pfVar19;
                    pfVar18 = pfVar18 + 4;
                    pfVar19 = pfVar19 + 4;
                    iVar24 = iVar24 + -1;
                  } while (iVar24 != 0);
                }
                if (local_20 < iVar23) {
                  pfVar18 = pfVar2 + local_20;
                  iVar23 = iVar23 - local_20;
                  do {
                    *pfVar18 = *(float *)((int)pfVar18 + (iVar14 - (int)pfVar2));
                    pfVar18 = pfVar18 + 1;
                    iVar23 = iVar23 + -1;
                  } while (iVar23 != 0);
                }
              }
            }
          }
          else if (*(int *)(param_1 + 0x28) == 0) {
            puVar8 = (&PTR_DAT_0073fe10)[*(int *)(iVar15 + 4) - iVar6];
            pfVar2 = (float *)(*(int *)(*(int *)(param_1 + 8) + local_10 * 4) +
                              ((iVar13 / 2 - iVar22 / 2) + local_18) * 4);
            iVar14 = *(int *)(*param_2 + local_10 * 4);
            if (0 < iVar22) {
              pfVar18 = (float *)(puVar8 + (iVar22 + -1) * 4);
              pfVar19 = pfVar2;
              iVar23 = iVar22;
              do {
                fVar4 = *pfVar18;
                pfVar3 = (float *)(((int)puVar8 - (int)pfVar2) + (int)pfVar19);
                pfVar18 = pfVar18 + -1;
                *pfVar19 = *(float *)((int)pfVar3 + (iVar14 - (int)puVar8)) * *pfVar3 +
                           *pfVar19 * fVar4;
                iVar23 = iVar23 + -1;
                pfVar19 = pfVar19 + 1;
              } while (iVar23 != 0);
            }
          }
          else {
            puVar8 = (&PTR_DAT_0073fe10)[*(int *)(iVar15 + 8) - iVar6];
            pfVar2 = (float *)(*(int *)(*(int *)(param_1 + 8) + local_10 * 4) + local_18 * 4);
            iVar14 = *(int *)(*param_2 + local_10 * 4);
            if (0 < iVar13) {
              pfVar18 = (float *)(puVar8 + (iVar13 + -1) * 4);
              pfVar19 = pfVar2;
              iVar23 = iVar13;
              do {
                fVar4 = *pfVar18;
                pfVar3 = (float *)(((int)puVar8 - (int)pfVar2) + (int)pfVar19);
                pfVar18 = pfVar18 + -1;
                *pfVar19 = *(float *)((int)pfVar3 + (iVar14 - (int)puVar8)) * *pfVar3 +
                           fVar4 * *pfVar19;
                iVar23 = iVar23 + -1;
                pfVar19 = pfVar19 + 1;
              } while (iVar23 != 0);
            }
          }
          iVar24 = *(int *)(*(int *)(param_1 + 8) + local_10 * 4) + local_2c * 4;
          iVar23 = *(int *)(*param_2 + local_10 * 4) + iVar12 * 4;
          iVar14 = 0;
          if (3 < iVar12) {
            puVar20 = (undefined4 *)(iVar24 + 4);
            iVar25 = (iVar12 - 4U >> 2) + 1;
            puVar21 = (undefined4 *)(iVar23 + 0xc);
            iVar14 = iVar25 * 4;
            do {
              puVar20[-1] = puVar21[-3];
              *puVar20 = *(undefined4 *)((iVar23 - iVar24) + (int)puVar20);
              puVar20[1] = puVar21[-1];
              puVar20[2] = *puVar21;
              puVar20 = puVar20 + 4;
              puVar21 = puVar21 + 4;
              iVar25 = iVar25 + -1;
            } while (iVar25 != 0);
          }
          if (iVar14 < iVar12) {
            puVar20 = (undefined4 *)(iVar24 + iVar14 * 4);
            iVar14 = iVar12 - iVar14;
            do {
              *puVar20 = *(undefined4 *)((int)puVar20 + (iVar23 - iVar24));
              puVar20 = puVar20 + 1;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
          }
          local_10 = local_10 + 1;
        } while (local_10 < *(int *)(iVar26 + 4));
      }
      if (*(int *)(param_1 + 0x30) != 0) {
        iVar13 = 0;
      }
      *(int *)(param_1 + 0x30) = iVar13;
      if (*(int *)(param_1 + 0x18) == -1) {
        *(int *)(param_1 + 0x18) = local_2c;
        *(int *)(param_1 + 0x14) = local_2c;
      }
      else {
        *(int *)(param_1 + 0x18) = local_18;
        *(int *)(param_1 + 0x14) =
             (((int)((piVar5[*(int *)(param_1 + 0x28)] >> 0x1f & 3U) +
                    piVar5[*(int *)(param_1 + 0x28)]) >> 2) +
              ((int)(piVar5[*(int *)(param_1 + 0x24)] +
                    (piVar5[*(int *)(param_1 + 0x24)] >> 0x1f & 3U)) >> 2) >> (bVar11 & 0x1f)) +
             local_18;
      }
    }
    uVar7 = *(uint *)(iVar15 + 0x80);
    if ((uVar7 & *(uint *)(iVar15 + 0x84)) == 0xffffffff) {
      *(undefined4 *)(iVar15 + 0x80) = 0;
      *(undefined4 *)(iVar15 + 0x84) = 0;
    }
    else {
      uVar16 = ((int)(piVar5[*(int *)(param_1 + 0x24)] +
                     (piVar5[*(int *)(param_1 + 0x24)] >> 0x1f & 3U)) >> 2) +
               ((int)((piVar5[*(int *)(param_1 + 0x28)] >> 0x1f & 3U) +
                     piVar5[*(int *)(param_1 + 0x28)]) >> 2);
      *(uint *)(iVar15 + 0x80) = uVar16 + uVar7;
      *(uint *)(iVar15 + 0x84) =
           ((int)uVar16 >> 0x1f) + *(uint *)(iVar15 + 0x84) + (uint)CARRY4(uVar16,uVar7);
    }
    uVar7 = *(uint *)(param_1 + 0x38);
    if ((uVar7 & *(uint *)(param_1 + 0x3c)) == 0xffffffff) {
      uVar7 = param_2[0xd];
      if ((param_2[0xc] & uVar7) != 0xffffffff) {
        *(int *)(param_1 + 0x38) = param_2[0xc];
        *(uint *)(param_1 + 0x3c) = uVar7;
        if (((int)uVar7 <= *(int *)(iVar15 + 0x84)) &&
           (((int)uVar7 < *(int *)(iVar15 + 0x84) ||
            (*(uint *)(param_1 + 0x38) < *(uint *)(iVar15 + 0x80))))) {
          iVar26 = *(int *)(iVar15 + 0x80) - param_2[0xc];
          if (iVar26 < 0) {
            iVar26 = 0;
          }
          if (param_2[0xb] == 0) {
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (iVar26 >> (bVar11 & 0x1f));
            if (*(int *)(param_1 + 0x14) < *(int *)(param_1 + 0x18)) {
              *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
            }
          }
          else {
            iVar15 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18) << (bVar11 & 0x1f);
            if (iVar15 < iVar26) {
              iVar26 = iVar15;
            }
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - (iVar26 >> (bVar11 & 0x1f));
          }
        }
      }
    }
    else {
      uVar16 = ((int)(piVar5[*(int *)(param_1 + 0x24)] +
                     (piVar5[*(int *)(param_1 + 0x24)] >> 0x1f & 3U)) >> 2) +
               ((int)((piVar5[*(int *)(param_1 + 0x28)] >> 0x1f & 3U) +
                     piVar5[*(int *)(param_1 + 0x28)]) >> 2);
      *(uint *)(param_1 + 0x38) = uVar16 + uVar7;
      *(uint *)(param_1 + 0x3c) =
           ((int)uVar16 >> 0x1f) + *(uint *)(param_1 + 0x3c) + (uint)CARRY4(uVar16,uVar7);
      uVar7 = param_2[0xc];
      uVar16 = param_2[0xd];
      if ((uVar7 & uVar16) != 0xffffffff) {
        uVar9 = *(uint *)(param_1 + 0x38);
        uVar10 = *(uint *)(param_1 + 0x3c);
        if ((uVar9 != uVar7) || (uVar10 != uVar16)) {
          if (((((int)uVar16 <= (int)uVar10) && (((int)uVar16 < (int)uVar10 || (uVar7 < uVar9)))) &&
              (iVar26 = uVar9 - param_2[0xc], iVar26 != 0)) && (param_2[0xb] != 0)) {
            iVar15 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18) << (bVar11 & 0x1f);
            if (iVar15 < iVar26) {
              iVar26 = iVar15;
            }
            if (iVar26 < 0) {
              iVar26 = 0;
            }
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - (iVar26 >> (bVar11 & 0x1f));
          }
          *(int *)(param_1 + 0x38) = param_2[0xc];
          *(int *)(param_1 + 0x3c) = param_2[0xd];
        }
      }
    }
    if (param_2[0xb] != 0) {
      *(undefined4 *)(param_1 + 0x20) = 1;
    }
    return 0;
  }
  return 0xffffff7d;
}


/* FUN_006d1220 @ 006d1220  kind=gamemisc  attributed-by=caller-vote  size=55 */

undefined4 FUN_006d1220(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_006d1570();
  if (iVar1 != 0) {
    FUN_006d12e0();
    return 1;
  }
  FUN_006d1260(param_1);
  return 0;
}


/* FUN_006d1260 @ 006d1260  kind=gamemisc  attributed-by=caller-vote  size=128 */

undefined4 FUN_006d1260(int param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x68);
  if (((iVar1 != 0) && (*(int *)(param_1 + 4) != 0)) &&
     (iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x1c), iVar3 != 0)) {
    bVar2 = (byte)*(undefined4 *)(iVar3 + 0xe48);
    iVar3 = *(int *)(iVar3 + 4) >> (bVar2 + 1 & 0x1f);
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    *(int *)(param_1 + 0x30) = iVar3;
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
    *(int *)(param_1 + 0x14) = iVar3 >> (bVar2 & 0x1f);
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x80) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x84) = 0xffffffff;
    return 0;
  }
  return 0xffffffff;
}


/* FUN_006d12e0 @ 006d12e0  kind=gamemisc  attributed-by=caller-vote  size=644 */

void FUN_006d12e0(void *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int local_c;
  
  pcVar7 = free_exref;
  if (param_1 != (void *)0x0) {
    iVar2 = *(int *)((int)param_1 + 4);
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar2 + 0x1c);
    }
    piVar3 = *(int **)((int)param_1 + 0x68);
    if (piVar3 != (int *)0x0) {
      if (*piVar3 != 0) {
        FUN_006d8900();
        free((void *)*piVar3);
      }
      if (piVar3[3] != 0) {
        FUN_006da1b0();
        free(*(void **)piVar3[3]);
        free((void *)piVar3[3]);
      }
      if (piVar3[4] != 0) {
        FUN_006da1b0();
        free(*(void **)piVar3[4]);
        free((void *)piVar3[4]);
      }
      if (piVar3[0xc] != 0) {
        if ((iVar5 != 0) && (0 < *(int *)(iVar5 + 0x10))) {
          iVar6 = 0;
          do {
            (**(code **)((&PTR_DAT_00737958)[*(int *)(iVar5 + 800 + iVar6 * 4)] + 0x10))
                      (*(undefined4 *)(piVar3[0xc] + iVar6 * 4));
            iVar6 = iVar6 + 1;
            pcVar7 = free_exref;
          } while (iVar6 < *(int *)(iVar5 + 0x10));
        }
        (*pcVar7)(piVar3[0xc]);
      }
      if (piVar3[0xd] != 0) {
        if ((iVar5 != 0) && (0 < *(int *)(iVar5 + 0x14))) {
          iVar6 = 0;
          do {
            (**(code **)((&PTR_DAT_00737948)[*(int *)(iVar5 + 0x520 + iVar6 * 4)] + 0x10))
                      (*(undefined4 *)(piVar3[0xd] + iVar6 * 4));
            iVar6 = iVar6 + 1;
            pcVar7 = free_exref;
          } while (iVar6 < *(int *)(iVar5 + 0x14));
        }
        (*pcVar7)(piVar3[0xd]);
      }
      if (piVar3[0xe] != 0) {
        if ((iVar5 != 0) && (local_c = 0, 0 < *(int *)(iVar5 + 0x1c))) {
          do {
            FUN_006d6490();
            local_c = local_c + 1;
            pcVar7 = free_exref;
          } while (local_c < *(int *)(iVar5 + 0x1c));
        }
        (*pcVar7)(piVar3[0xe]);
      }
      puVar4 = (undefined8 *)piVar3[0xf];
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        *(undefined4 *)(puVar4 + 4) = 0;
        (*pcVar7)(puVar4);
      }
      memset(piVar3 + 0x14,0,0x30);
      piVar1 = piVar3 + 5;
      if (piVar1 != (int *)0x0) {
        if (piVar3[6] != 0) {
          (*pcVar7)(piVar3[6]);
        }
        if (piVar3[7] != 0) {
          (*pcVar7)(piVar3[7]);
        }
        piVar1[0] = 0;
        piVar1[1] = 0;
        piVar3[7] = 0;
      }
      piVar1 = piVar3 + 8;
      if (piVar1 != (int *)0x0) {
        if (piVar3[9] != 0) {
          (*pcVar7)(piVar3[9]);
        }
        if (piVar3[10] != 0) {
          (*pcVar7)(piVar3[10]);
        }
        piVar1[0] = 0;
        piVar1[1] = 0;
        piVar3[10] = 0;
      }
    }
    if (*(int *)((int)param_1 + 8) != 0) {
      if ((iVar2 != 0) && (iVar5 = 0, 0 < *(int *)(iVar2 + 4))) {
        do {
          iVar6 = *(int *)(*(int *)((int)param_1 + 8) + iVar5 * 4);
          if (iVar6 != 0) {
            (*pcVar7)(iVar6);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(iVar2 + 4));
      }
      (*pcVar7)(*(undefined4 *)((int)param_1 + 8));
      if (*(int *)((int)param_1 + 0xc) != 0) {
        (*pcVar7)(*(int *)((int)param_1 + 0xc));
      }
    }
    if (piVar3 != (int *)0x0) {
      if (piVar3[0x10] != 0) {
        (*pcVar7)(piVar3[0x10]);
      }
      if (piVar3[0x11] != 0) {
        (*pcVar7)(piVar3[0x11]);
      }
      if (piVar3[0x12] != 0) {
        (*pcVar7)(piVar3[0x12]);
      }
      (*pcVar7)(piVar3);
    }
    memset(param_1,0,0x70);
  }
  return;
}


/* FUN_006d1570 @ 006d1570  kind=gamemisc  attributed-by=caller-vote  size=924 */

undefined4 FUN_006d1570(void)

{
  int *piVar1;
  size_t _Count;
  undefined8 *_Memory;
  void *pvVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *in_ECX;
  uint uVar6;
  int in_EDX;
  int iVar7;
  code *pcVar8;
  int *piVar9;
  int local_18;
  int local_14;
  int *local_10;
  
  piVar1 = *(int **)(in_EDX + 0x1c);
  if (piVar1 == (int *)0x0) {
    return 1;
  }
  memset(in_ECX,0,0x70);
  pvVar2 = calloc(1,0x88);
  *(void **)((int)in_ECX + 0x68) = pvVar2;
  *(int *)((int)in_ECX + 4) = in_EDX;
  iVar7 = 0;
  if (piVar1[2] != 0) {
    for (uVar6 = piVar1[2] - 1; uVar6 != 0; uVar6 = uVar6 >> 1) {
      iVar7 = iVar7 + 1;
    }
  }
  *(int *)((int)pvVar2 + 0x2c) = iVar7;
  puVar3 = calloc(1,4);
  *(undefined4 **)((int)pvVar2 + 0xc) = puVar3;
  pvVar4 = calloc(1,4);
  *(void **)((int)pvVar2 + 0x10) = pvVar4;
  pvVar4 = calloc(1,0x14);
  *puVar3 = pvVar4;
  pvVar4 = calloc(1,0x14);
  **(undefined4 **)((int)pvVar2 + 0x10) = pvVar4;
  FUN_006da1f0();
  FUN_006da1f0();
  iVar7 = 0;
  if (*piVar1 != 0) {
    for (uVar6 = *piVar1 - 1; uVar6 != 0; uVar6 = uVar6 >> 1) {
      iVar7 = iVar7 + 1;
    }
  }
  *(int *)((int)pvVar2 + 4) = iVar7 + -6;
  iVar7 = 0;
  if (piVar1[1] != 0) {
    for (uVar6 = piVar1[1] - 1; uVar6 != 0; uVar6 = uVar6 >> 1) {
      iVar7 = iVar7 + 1;
    }
  }
  *(int *)((int)pvVar2 + 8) = iVar7 + -6;
  if (piVar1[0x2c8] == 0) {
    _Count = piVar1[6];
    pvVar4 = calloc(_Count,0x38);
    piVar1[0x2c8] = (int)pvVar4;
    local_18 = 0;
    if (0 < (int)_Count) {
      local_10 = piVar1 + 0x1c8;
      piVar9 = local_10;
      do {
        if ((*piVar9 == 0) || (iVar7 = FUN_006d21b0(), iVar7 != 0)) {
          local_14 = 0;
          pcVar8 = free_exref;
          if (0 < piVar1[6]) {
            do {
              _Memory = (undefined8 *)*local_10;
              if (_Memory != (undefined8 *)0x0) {
                if (*(int *)((int)_Memory + 0x24) != 0) {
                  if (*(int *)(_Memory + 4) != 0) {
                    (*pcVar8)(*(int *)(_Memory + 4));
                    pcVar8 = free_exref;
                  }
                  if (*(int *)(_Memory + 1) != 0) {
                    (*pcVar8)(*(int *)(_Memory + 1));
                  }
                  *_Memory = 0;
                  _Memory[1] = 0;
                  _Memory[2] = 0;
                  _Memory[3] = 0;
                  _Memory[4] = 0;
                  free(_Memory);
                  pcVar8 = free_exref;
                }
                *local_10 = 0;
              }
              local_14 = local_14 + 1;
              local_10 = local_10 + 1;
            } while (local_14 < piVar1[6]);
          }
          FUN_006d12e0();
          return 0xffffffff;
        }
        FUN_006d29b0();
        *piVar9 = 0;
        local_18 = local_18 + 1;
        piVar9 = piVar9 + 1;
      } while (local_18 < piVar1[6]);
    }
  }
  *(int *)((int)in_ECX + 0x10) = piVar1[1];
  pvVar4 = malloc(*(int *)(in_EDX + 4) << 2);
  *(void **)((int)in_ECX + 8) = pvVar4;
  pvVar4 = malloc(*(int *)(in_EDX + 4) << 2);
  *(void **)((int)in_ECX + 0xc) = pvVar4;
  iVar7 = 0;
  if (0 < *(int *)(in_EDX + 4)) {
    do {
      pvVar4 = calloc(*(size_t *)((int)in_ECX + 0x10),4);
      iVar7 = iVar7 + 1;
      *(void **)(*(int *)((int)in_ECX + 8) + -4 + iVar7 * 4) = pvVar4;
    } while (iVar7 < *(int *)(in_EDX + 4));
  }
  *(undefined4 *)((int)in_ECX + 0x24) = 0;
  *(undefined4 *)((int)in_ECX + 0x28) = 0;
  iVar7 = piVar1[1];
  *(int *)((int)in_ECX + 0x30) = iVar7 / 2;
  *(int *)((int)in_ECX + 0x14) = iVar7 / 2;
  pvVar4 = calloc(piVar1[4],4);
  *(void **)((int)pvVar2 + 0x30) = pvVar4;
  pvVar4 = calloc(piVar1[5],4);
  *(void **)((int)pvVar2 + 0x34) = pvVar4;
  local_10 = (int *)0x0;
  if (0 < piVar1[4]) {
    piVar9 = piVar1 + 200;
    do {
      uVar5 = (**(code **)((&PTR_DAT_00737958)[*piVar9] + 8))();
      piVar9 = piVar9 + 1;
      *(undefined4 *)((*(int *)((int)pvVar2 + 0x30) - (int)piVar1) + -0x324 + (int)piVar9) = uVar5;
      local_10 = (int *)((int)local_10 + 1);
    } while ((int)local_10 < piVar1[4]);
  }
  local_10 = (int *)0x0;
  if (0 < piVar1[5]) {
    piVar9 = piVar1 + 0x148;
    do {
      uVar5 = (**(code **)((&PTR_DAT_00737948)[*piVar9] + 8))();
      piVar9 = piVar9 + 1;
      *(undefined4 *)((*(int *)((int)pvVar2 + 0x34) - (int)piVar1) + -0x524 + (int)piVar9) = uVar5;
      local_10 = (int *)((int)local_10 + 1);
    } while ((int)local_10 < piVar1[5]);
  }
  return 0;
}


/* FUN_006d1920 @ 006d1920  kind=gamemisc  attributed-by=caller-vote  size=159 */

undefined4 FUN_006d1920(void *param_1)

{
  void *_Memory;
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  _Memory = *(void **)((int)param_1 + 0x68);
  FUN_006d1b10();
  if (*(void **)((int)param_1 + 0x44) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x44));
  }
  if (_Memory != (void *)0x0) {
    iVar3 = 0;
    puVar2 = (undefined4 *)((int)_Memory + 0xc);
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (*(void **)(puVar1 + 1) != (void *)0x0) {
        free(*(void **)(puVar1 + 1));
      }
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      if (iVar3 != 7) {
        free((void *)*puVar2);
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < 0xf);
    free(_Memory);
  }
  memset(param_1,0,0x70);
  return 0;
}


/* FUN_006d19d0 @ 006d19d0  kind=gamemisc  attributed-by=caller-vote  size=179 */

undefined4 FUN_006d19d0(int *param_1,void *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  undefined1 *puVar4;
  int iVar5;
  
  memset(param_2,0,0x70);
  *(int **)((int)param_2 + 0x40) = param_1;
  *(undefined4 *)((int)param_2 + 0x4c) = 0;
  *(undefined4 *)((int)param_2 + 0x44) = 0;
  if (*param_1 != 0) {
    pvVar2 = calloc(1,0x48);
    *(void **)((int)param_2 + 0x68) = pvVar2;
    *(undefined4 *)((int)pvVar2 + 4) = 0xc61c3c00;
    iVar5 = 0;
    do {
      if (iVar5 == 7) {
        *(int *)((int)pvVar2 + 0x28) = (int)param_2 + 4;
      }
      else {
        pvVar3 = calloc(1,0x14);
        *(void **)((int)pvVar2 + iVar5 * 4 + 0xc) = pvVar3;
      }
      puVar1 = *(undefined8 **)((int)pvVar2 + iVar5 * 4 + 0xc);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      puVar4 = malloc(0x100);
      *(undefined1 **)(puVar1 + 1) = puVar4;
      *(undefined1 **)((int)puVar1 + 0xc) = puVar4;
      iVar5 = iVar5 + 1;
      *puVar4 = 0;
      *(undefined4 *)(puVar1 + 2) = 0x100;
    } while (iVar5 < 0xf);
  }
  return 0;
}


/* FUN_006d1ab0 @ 006d1ab0  kind=gamemisc  attributed-by=caller-vote  size=96 */

int FUN_006d1ab0(void)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int in_ECX;
  int in_EDX;
  uint _Size;
  
  _Size = in_EDX + 7U & 0xfffffff8;
  if (*(int *)(in_ECX + 0x4c) < (int)(*(int *)(in_ECX + 0x48) + _Size)) {
    if (*(int *)(in_ECX + 0x44) != 0) {
      puVar2 = malloc(8);
      *(int *)(in_ECX + 0x50) = *(int *)(in_ECX + 0x50) + *(int *)(in_ECX + 0x48);
      puVar2[1] = *(undefined4 *)(in_ECX + 0x54);
      *puVar2 = *(undefined4 *)(in_ECX + 0x44);
      *(undefined4 **)(in_ECX + 0x54) = puVar2;
    }
    *(uint *)(in_ECX + 0x4c) = _Size;
    pvVar3 = malloc(_Size);
    *(void **)(in_ECX + 0x44) = pvVar3;
    *(undefined4 *)(in_ECX + 0x48) = 0;
  }
  iVar1 = *(int *)(in_ECX + 0x48);
  *(uint *)(in_ECX + 0x48) = iVar1 + _Size;
  return *(int *)(in_ECX + 0x44) + iVar1;
}


/* FUN_006d1b10 @ 006d1b10  kind=gamemisc  attributed-by=caller-vote  size=109 */

void FUN_006d1b10(void)

{
  undefined8 *puVar1;
  undefined8 *_Memory;
  void *pvVar2;
  int in_ECX;
  
  _Memory = *(undefined8 **)(in_ECX + 0x54);
  while (_Memory != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)((int)_Memory + 4);
    free(*(void **)_Memory);
    *_Memory = 0;
    free(_Memory);
    _Memory = puVar1;
  }
  if (*(int *)(in_ECX + 0x50) != 0) {
    pvVar2 = realloc(*(void **)(in_ECX + 0x44),*(int *)(in_ECX + 0x4c) + *(int *)(in_ECX + 0x50));
    *(void **)(in_ECX + 0x44) = pvVar2;
    *(int *)(in_ECX + 0x4c) = *(int *)(in_ECX + 0x4c) + *(int *)(in_ECX + 0x50);
    *(undefined4 *)(in_ECX + 0x50) = 0;
  }
  *(undefined4 *)(in_ECX + 0x54) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  return;
}


/* FUN_006d1c20 @ 006d1c20  kind=gamemisc  attributed-by=caller-vote  size=728 */

void * FUN_006d1c20(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *in_ECX;
  int iVar10;
  int in_EDX;
  int *piVar11;
  int iVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  int *local_1c;
  int *local_18;
  int local_14;
  int local_c;
  
  if ((in_ECX[3] != 1) && (in_ECX[3] != 2)) {
    return (void *)0x0;
  }
  uVar1 = in_ECX[4];
  dVar13 = (double)(uVar1 & 0x1fffff);
  if ((int)uVar1 < 0) {
    dVar13 = -dVar13;
  }
  dVar15 = ldexp(dVar13,((int)uVar1 >> 0x15 & 0x3ffU) - 0x314);
  uVar1 = in_ECX[5];
  dVar13 = (double)(uVar1 & 0x1fffff);
  if ((int)uVar1 < 0) {
    dVar13 = -dVar13;
  }
  dVar13 = ldexp(dVar13,((int)uVar1 >> 0x15 & 0x3ffU) - 0x314);
  iVar2 = *in_ECX;
  pvVar6 = calloc(iVar2 * in_EDX,4);
  if (in_ECX[3] == 1) {
    iVar8 = FUN_006d1f00();
    iVar10 = in_ECX[1];
    local_14 = 0;
    if (0 < iVar10) {
      local_c = 0;
      local_1c = param_1;
      do {
        if ((param_1 == (int *)0x0) || (*(int *)(in_ECX[2] + local_14 * 4) != 0)) {
          iVar7 = 0;
          fVar14 = 0.0;
          iVar12 = 1;
          if (0 < iVar2) {
            iVar3 = in_ECX[8];
            iVar4 = in_ECX[7];
            do {
              fVar5 = ABS((float)*(int *)(iVar3 + ((local_14 / iVar12) % iVar8) * 4)) *
                      (float)dVar13 + (float)dVar15 + fVar14;
              if (iVar4 != 0) {
                fVar14 = fVar5;
              }
              iVar9 = local_c;
              if (param_1 != (int *)0x0) {
                iVar9 = *local_1c * iVar2;
              }
              iVar12 = iVar12 * iVar8;
              iVar9 = iVar9 + iVar7;
              iVar7 = iVar7 + 1;
              *(float *)((int)pvVar6 + iVar9 * 4) = fVar5;
            } while (iVar7 < iVar2);
          }
          local_1c = local_1c + 1;
          local_c = local_c + iVar2;
        }
        local_14 = local_14 + 1;
      } while (local_14 < iVar10);
    }
  }
  else if ((in_ECX[3] == 2) && (0 < in_ECX[1])) {
    local_c = 0;
    local_18 = param_1;
    local_1c = (int *)0x0;
    local_14 = 0;
    do {
      if ((param_1 == (int *)0x0) || (*(int *)(in_ECX[2] + local_14 * 4) != 0)) {
        iVar10 = 0;
        fVar14 = 0.0;
        if (0 < iVar2) {
          iVar8 = in_ECX[7];
          piVar11 = (int *)(in_ECX[8] + (int)local_1c);
          do {
            fVar5 = ABS((float)*piVar11) * (float)dVar13 + (float)dVar15 + fVar14;
            if (iVar8 != 0) {
              fVar14 = fVar5;
            }
            iVar7 = local_c;
            if (param_1 != (int *)0x0) {
              iVar7 = *local_18 * iVar2;
            }
            iVar7 = iVar7 + iVar10;
            iVar10 = iVar10 + 1;
            piVar11 = piVar11 + 1;
            *(float *)((int)pvVar6 + iVar7 * 4) = fVar5;
          } while (iVar10 < iVar2);
        }
        local_18 = local_18 + 1;
        local_c = local_c + iVar2;
      }
      local_14 = local_14 + 1;
      local_1c = (int *)((int)local_1c + iVar2 * 4);
    } while (local_14 < in_ECX[1]);
    return pvVar6;
  }
  return pvVar6;
}


/* FUN_006d1f00 @ 006d1f00  kind=gamemisc  attributed-by=caller-vote  size=158 */

int FUN_006d1f00(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  
  iVar1 = *in_ECX;
  iVar2 = in_ECX[1];
  dVar8 = (double)iVar2;
  libm_sse2_pow_precise();
  dVar8 = floor(dVar8);
  iVar6 = (int)dVar8;
  iVar7 = iVar6 + 1;
  while( true ) {
    while( true ) {
      iVar3 = 1;
      iVar4 = 1;
      iVar5 = iVar1;
      if (0 < iVar1) {
        do {
          iVar3 = iVar3 * iVar6;
          iVar4 = iVar4 * iVar7;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      if (iVar3 <= iVar2) break;
      iVar6 = iVar6 + -1;
      iVar7 = iVar7 + -1;
    }
    if (iVar2 < iVar4) break;
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + 1;
  }
  return iVar6;
}


/* FUN_006d1fa0 @ 006d1fa0  kind=gamemisc  attributed-by=caller-vote  size=406 */

uint * FUN_006d1fa0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  int in_EDX;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint local_94 [33];
  uint *local_10;
  int local_c;
  int local_8;
  
  iVar7 = in_EDX;
  if (param_1 != 0) {
    iVar7 = param_1;
  }
  local_8 = in_EDX;
  local_10 = malloc(iVar7 << 2);
  memset(local_94,0,0x84);
  iVar8 = 0;
  iVar4 = local_8;
  iVar7 = local_c;
  puVar9 = local_10;
  if (0 < in_EDX) {
    do {
      iVar1 = *(int *)(iVar7 + iVar8 * 4);
      if (iVar1 < 1) {
        if (param_1 == 0) {
          puVar9 = puVar9 + 1;
        }
      }
      else {
        uVar5 = local_94[iVar1];
        if ((iVar1 < 0x20) && (uVar5 >> ((byte)iVar1 & 0x1f) != 0)) goto LAB_006d2121;
        *puVar9 = uVar5;
        puVar9 = puVar9 + 1;
        iVar3 = iVar1;
        do {
          if ((local_94[iVar3] & 1) != 0) {
            if (iVar3 == 1) {
              local_94[1] = local_94[1] + 1;
              iVar7 = local_c;
              iVar4 = local_8;
            }
            else {
              local_94[iVar3] = local_94[iVar3 + -1] * 2;
              iVar7 = local_c;
              iVar4 = local_8;
            }
            break;
          }
          local_94[iVar3] = local_94[iVar3] + 1;
          iVar3 = iVar3 + -1;
          iVar7 = local_c;
          iVar4 = local_8;
        } while (0 < iVar3);
        while ((iVar3 = iVar1 + 1, local_c = iVar7, local_8 = iVar4, iVar3 < 0x21 &&
               (uVar2 = local_94[iVar3], uVar2 >> 1 == uVar5))) {
          local_94[iVar3] = local_94[iVar1] * 2;
          uVar5 = uVar2;
          iVar7 = local_c;
          iVar4 = local_8;
          iVar1 = iVar3;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar4);
  }
  if (param_1 != 1) {
    iVar7 = 1;
    do {
      if ((local_94[iVar7] & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f)) != 0) {
LAB_006d2121:
        free(local_10);
        return (uint *)0x0;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x21);
  }
  if (0 < local_8) {
    iVar7 = 0;
    puVar9 = local_10;
    do {
      uVar5 = 0;
      iVar4 = *(int *)(local_c + iVar7 * 4);
      iVar8 = 0;
      if (0 < iVar4) {
        do {
          bVar6 = (byte)iVar8;
          iVar8 = iVar8 + 1;
          uVar5 = uVar5 * 2 | *puVar9 >> (bVar6 & 0x1f) & 1;
        } while (iVar8 < iVar4);
      }
      if ((param_1 == 0) || (iVar4 != 0)) {
        *puVar9 = uVar5;
        puVar9 = puVar9 + 1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_8);
  }
  return local_10;
}


/* FUN_006d21b0 @ 006d21b0  kind=gamemisc  attributed-by=caller-vote  size=1714 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006d21b0(void)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *in_ECX;
  int iVar10;
  uint uVar11;
  undefined4 *in_EDX;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  uint *puVar15;
  int *piVar16;
  undefined1 auVar17 [16];
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  undefined4 auStackY_48 [2];
  int iStack_2c;
  undefined1 *local_28;
  int local_24;
  int *local_20;
  int *local_1c;
  undefined4 *local_18;
  uint *local_14;
  int *local_10;
  int *local_c;
  undefined4 *local_8;
  
  piVar16 = (int *)0x0;
  local_10 = (int *)0x0;
  auStackY_48[1] = 0x6d21ce;
  local_18 = in_EDX;
  local_8 = in_ECX;
  memset(in_ECX,0,0x38);
  local_1c = (int *)local_18[1];
  if (0 < (int)local_1c) {
    piVar9 = (int *)local_18[2];
    iVar12 = (int)local_1c;
    do {
      if (0 < *piVar9) {
        piVar16 = (int *)((int)piVar16 + 1);
      }
      piVar9 = piVar9 + 1;
      iVar12 = iVar12 + -1;
      local_10 = piVar16;
    } while (iVar12 != 0);
  }
  in_ECX[1] = local_1c;
  in_ECX[2] = piVar16;
  *in_ECX = *local_18;
  if (0 < (int)piVar16) {
    puVar4 = (uint *)FUN_006d1fa0();
    local_14 = puVar4;
    local_28 = (undefined1 *)((int)piVar16 * 4);
    iVar12 = (int)piVar16 * -4;
    puVar14 = &stack0xffffffcc + iVar12;
    local_1c = (int *)(&stack0xffffffcc + iVar12);
    if (puVar4 == (uint *)0x0) {
      if (in_ECX[4] != 0) {
        *(undefined4 *)(&stack0xffffffc8 + iVar12) = in_ECX[4];
        *(undefined4 *)(&stack0xffffffc4 + iVar12) = 0x6d2242;
        free(*(void **)(&stack0xffffffc8 + iVar12));
        puVar14 = &stack0xffffffcc + iVar12;
      }
      if (in_ECX[5] != 0) {
        *(undefined4 *)(puVar14 + -4) = in_ECX[5];
        *(undefined4 *)(puVar14 + -8) = 0x6d224f;
        free(*(void **)(puVar14 + -4));
      }
      if (in_ECX[6] != 0) {
        *(undefined4 *)(puVar14 + -4) = in_ECX[6];
        *(undefined4 *)(puVar14 + -8) = 0x6d225c;
        free(*(void **)(puVar14 + -4));
      }
      if (in_ECX[7] != 0) {
        *(undefined4 *)(puVar14 + -4) = in_ECX[7];
        *(undefined4 *)(puVar14 + -8) = 0x6d2269;
        free(*(void **)(puVar14 + -4));
      }
      if (in_ECX[8] != 0) {
        *(undefined4 *)(puVar14 + -4) = in_ECX[8];
        *(undefined4 *)(puVar14 + -8) = 0x6d2276;
        free(*(void **)(puVar14 + -4));
      }
      *(undefined4 *)(puVar14 + -4) = 0x38;
      *(undefined4 *)(puVar14 + -8) = 0;
      *(undefined4 **)(puVar14 + -0xc) = in_ECX;
      *(undefined4 *)(puVar14 + -0x10) = 0x6d2283;
      memset(*(void **)(puVar14 + -0xc),*(int *)(puVar14 + -8),*(size_t *)(puVar14 + -4));
      return 0xffffffff;
    }
    iVar5 = 0;
    piVar9 = piVar16;
    if (0 < (int)piVar16) {
      if (((int *)0x3 < piVar16) && (1 < DAT_0076e2a0)) {
        if ((puVar4 + (int)piVar16 + -1 < &stack0xffffffcc + iVar12) || (&stack0xffffffc8 < puVar4))
        {
          uVar6 = (uint)piVar16 & 0x80000003;
          if ((int)uVar6 < 0) {
            uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
          }
          local_c = (int *)(&stack0xffffffcc + (iVar12 - (int)puVar4));
          iVar5 = 0;
          local_20 = (int *)((int)piVar16 - uVar6);
          puVar15 = puVar4;
          do {
            lVar18 = SUB168(ZEXT416(0x10),0);
            uVar6 = *puVar15 << 0x10 | *puVar15 >> lVar18 & 0xffff;
            uVar11 = puVar15[1] << 0x10 | puVar15[1] >> lVar18 & 0xffff;
            uVar19 = puVar15[2] << 0x10 | puVar15[2] >> lVar18 & 0xffff;
            uVar20 = puVar15[3] << 0x10 | puVar15[3] >> lVar18 & 0xffff;
            lVar18 = SUB168(ZEXT416(8),0);
            uVar6 = (uVar6 & 0xff00ff) << 8 | uVar6 >> lVar18 & 0xff00ff;
            uVar11 = (uVar11 & 0xff00ff) << 8 | uVar11 >> lVar18 & 0xff00ff;
            uVar19 = (uVar19 & 0xff00ff) << 8 | uVar19 >> lVar18 & 0xff00ff;
            uVar20 = (uVar20 & 0xff00ff) << 8 | uVar20 >> lVar18 & 0xff00ff;
            lVar18 = SUB168(ZEXT416(4),0);
            uVar6 = (uVar6 & 0xf0f0f0f) << 4 | uVar6 >> lVar18 & 0xf0f0f0f;
            uVar11 = (uVar11 & 0xf0f0f0f) << 4 | uVar11 >> lVar18 & 0xf0f0f0f;
            uVar19 = (uVar19 & 0xf0f0f0f) << 4 | uVar19 >> lVar18 & 0xf0f0f0f;
            uVar20 = (uVar20 & 0xf0f0f0f) << 4 | uVar20 >> lVar18 & 0xf0f0f0f;
            uVar6 = (uVar6 & 0x33333333) << 2 | uVar6 >> 2 & 0x33333333;
            uVar11 = (uVar11 & 0x33333333) << 2 | uVar11 >> 2 & 0x33333333;
            uVar19 = (uVar19 & 0x33333333) << 2 | uVar19 >> 2 & 0x33333333;
            uVar20 = (uVar20 & 0x33333333) << 2 | uVar20 >> 2 & 0x33333333;
            lVar18 = SUB168(ZEXT416(1),0);
            *puVar15 = (uVar6 & 0x55555555) << 1 | uVar6 >> lVar18 & 0x55555555;
            puVar15[1] = (uVar11 & 0x55555555) << 1 | uVar11 >> lVar18 & 0x55555555;
            puVar15[2] = (uVar19 & 0x55555555) << 1 | uVar19 >> lVar18 & 0x55555555;
            puVar15[3] = (uVar20 & 0x55555555) << 1 | uVar20 >> lVar18 & 0x55555555;
            auVar17._4_4_ = iVar5 + 1;
            auVar17._0_4_ = iVar5;
            auVar17._8_4_ = iVar5 + 2;
            auVar17._12_4_ = iVar5 + 3;
            auVar17 = pmulld(auVar17,_DAT_00745ec0);
            iVar5 = iVar5 + 4;
            piVar9 = (int *)(&stack0xffffffcc + (iVar12 - (int)puVar4) + -0x10 + (int)(puVar15 + 4))
            ;
            *piVar9 = auVar17._0_4_ + (int)puVar4;
            piVar9[1] = auVar17._4_4_ + (int)puVar4;
            piVar9[2] = auVar17._8_4_ + (int)puVar4;
            piVar9[3] = auVar17._12_4_ + (int)puVar4;
            in_ECX = local_8;
            puVar15 = puVar15 + 4;
            piVar9 = local_10;
          } while (iVar5 < (int)local_20);
        }
        else {
          iVar5 = 0;
        }
      }
      if (iVar5 < (int)piVar9) {
        local_20 = piVar9;
        puVar15 = puVar4 + iVar5;
        local_c = (int *)((int)local_1c - (int)puVar4);
        iVar5 = (int)piVar9 - iVar5;
        do {
          uVar6 = *puVar15 << 0x10 | *puVar15 >> 0x10;
          uVar6 = (uVar6 >> 8 ^ uVar6 << 8) & 0xff00ff ^ uVar6 << 8;
          uVar6 = (uVar6 >> 4 ^ uVar6 << 4) & 0xf0f0f0f ^ uVar6 << 4;
          uVar6 = (uVar6 >> 2 ^ uVar6 * 4) & 0x33333333 ^ uVar6 * 4;
          *puVar15 = (uVar6 >> 1 ^ uVar6 * 2) & 0x55555555 ^ uVar6 * 2;
          *(uint **)((int)puVar15 + (int)((int)local_1c - (int)puVar4)) = puVar15;
          puVar15 = puVar15 + 1;
          iVar5 = iVar5 + -1;
          in_ECX = local_8;
          piVar9 = local_10;
        } while (iVar5 != 0);
      }
    }
    piVar3 = local_1c;
    *(code **)(&stack0xffffffc8 + iVar12) = FUN_006d1b80;
    *(undefined4 *)(&stack0xffffffc4 + iVar12) = 4;
    *(int **)(&stack0xffffffc0 + iVar12) = piVar9;
    auStackY_48[1 - (int)piVar16] = piVar3;
    auStackY_48[-(int)piVar16] = 0x6d24ba;
    qsort((void *)auStackY_48[1 - (int)piVar16],*(size_t *)(&stack0xffffffc0 + iVar12),
          *(size_t *)(&stack0xffffffc4 + iVar12),*(_PtFuncCompare **)(&stack0xffffffc8 + iVar12));
    *(undefined4 *)(&stack0xffffffc8 + iVar12) = 0x6d24c9;
    iVar5 = (int)piVar9 * -4;
    local_c = (int *)(&stack0xffffffcc + iVar5 + iVar12);
    *(int *)(&stack0xffffffc8 + iVar5 + iVar12) = (int)piVar9 * 4;
    *(undefined4 *)(&stack0xffffffc4 + iVar5 + iVar12) = 0x6d24da;
    pvVar7 = malloc(*(size_t *)(&stack0xffffffc8 + iVar5 + iVar12));
    iVar10 = 0;
    in_ECX[5] = pvVar7;
    if (0 < (int)piVar9) {
      do {
        local_c[local_1c[iVar10] - (int)local_14 >> 2] = iVar10;
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)piVar9);
      in_ECX = local_8;
      if (0 < (int)piVar9) {
        local_20 = local_c;
        local_24 = (int)local_14 - (int)local_c;
        iVar10 = (int)local_14 - (int)local_c;
        piVar16 = local_c;
        local_1c = piVar9;
        do {
          local_1c = (int *)((int)local_1c + -1);
          iVar13 = *piVar16;
          puVar1 = (undefined4 *)(iVar10 + (int)piVar16);
          piVar16 = piVar16 + 1;
          *(undefined4 *)(local_8[5] + iVar13 * 4) = *puVar1;
          iVar10 = local_24;
        } while (local_1c != (int *)0x0);
      }
    }
    *(uint **)(&stack0xffffffc8 + iVar5 + iVar12) = local_14;
    *(undefined4 *)(&stack0xffffffc4 + iVar5 + iVar12) = 0x6d253a;
    free(*(void **)(&stack0xffffffc8 + iVar5 + iVar12));
    puVar1 = local_18;
    *(int **)(&stack0xffffffc8 + iVar5 + iVar12) = local_c;
    *(undefined4 *)(&stack0xffffffc4 + iVar5 + iVar12) = 0x6d254c;
    uVar8 = FUN_006d1c20();
    in_ECX[4] = uVar8;
    *(undefined1 **)(&stack0xffffffc8 + iVar5 + iVar12) = local_28;
    *(undefined4 *)(&stack0xffffffc4 + iVar5 + iVar12) = 0x6d255b;
    pvVar7 = malloc(*(size_t *)(&stack0xffffffc8 + iVar5 + iVar12));
    iVar10 = 0;
    in_ECX[6] = pvVar7;
    iVar13 = 0;
    local_1c = (int *)0x0;
    if (0 < (int)puVar1[1]) {
      iVar10 = 0;
      do {
        if (0 < *(int *)(puVar1[2] + iVar13 * 4)) {
          *(int *)(in_ECX[6] + local_c[iVar10] * 4) = iVar13;
          iVar10 = (int)local_1c + 1;
          local_1c = (int *)iVar10;
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < (int)puVar1[1]);
    }
    *(int *)(&stack0xffffffc8 + iVar5 + iVar12) = iVar10;
    *(undefined4 *)(&stack0xffffffc4 + iVar5 + iVar12) = 0x6d2599;
    pvVar7 = malloc(*(size_t *)(&stack0xffffffc8 + iVar5 + iVar12));
    in_ECX[7] = pvVar7;
    iVar10 = 0;
    local_10 = (int *)0x0;
    local_1c = (int *)0x0;
    if (0 < (int)local_18[1]) {
      do {
        local_28 = (undefined1 *)(local_18[2] + (int)local_1c * 4);
        if (0 < *(int *)(local_18[2] + (int)local_1c * 4)) {
          piVar16 = local_c + iVar10;
          iVar10 = iVar10 + 1;
          *(undefined1 *)(*piVar16 + in_ECX[7]) = *local_28;
        }
        local_1c = (int *)((int)local_1c + 1);
      } while ((int)local_1c < (int)local_18[1]);
      local_10 = (int *)iVar10;
    }
    uVar6 = in_ECX[2];
    iVar10 = 0;
    if (uVar6 != 0) {
      iVar10 = 0;
      do {
        iVar10 = iVar10 + 1;
        uVar6 = uVar6 >> 1;
      } while (uVar6 != 0);
    }
    iVar10 = iVar10 + -4;
    if (iVar10 < 5) {
      iVar10 = 5;
    }
    in_ECX[9] = iVar10;
    if (8 < iVar10) {
      iVar10 = 8;
    }
    in_ECX[9] = iVar10;
    iVar10 = 1 << ((byte)in_ECX[9] & 0x1f);
    *(undefined4 *)(&stack0xffffffc8 + iVar5 + iVar12) = 4;
    *(int *)(&stack0xffffffc4 + iVar5 + iVar12) = iVar10;
    local_14 = (uint *)iVar10;
    *(undefined4 *)(&stack0xffffffc0 + iVar5 + iVar12) = 0x6d262b;
    pvVar7 = calloc(*(size_t *)(&stack0xffffffc4 + iVar5 + iVar12),
                    *(size_t *)(&stack0xffffffc8 + iVar5 + iVar12));
    in_ECX[8] = pvVar7;
    in_ECX[10] = 0;
    local_1c = (int *)0x0;
    if (0 < (int)local_10) {
      do {
        iVar12 = (int)*(char *)(in_ECX[7] + (int)local_1c);
        if ((int)in_ECX[10] < iVar12) {
          in_ECX[10] = iVar12;
        }
        cVar2 = *(char *)(in_ECX[7] + (int)local_1c);
        if ((int)cVar2 <= (int)in_ECX[9]) {
          uVar6 = *(uint *)(in_ECX[5] + (int)local_1c * 4);
          uVar6 = uVar6 << 0x10 | uVar6 >> 0x10;
          uVar6 = (uVar6 >> 8 ^ uVar6 << 8) & 0xff00ff ^ uVar6 << 8;
          uVar6 = (uVar6 >> 4 ^ uVar6 << 4) & 0xf0f0f0f ^ uVar6 << 4;
          uVar6 = (uVar6 >> 2 ^ uVar6 * 4) & 0x33333333 ^ uVar6 * 4;
          local_18 = (undefined4 *)0x0;
          if (0 < 1 << ((char)in_ECX[9] - cVar2 & 0x1fU)) {
            do {
              *(int *)(in_ECX[8] +
                      ((int)local_18 << (*(byte *)((int)local_1c + in_ECX[7]) & 0x1f) |
                      (uVar6 >> 1 ^ uVar6 * 2) & 0x55555555 ^ uVar6 * 2) * 4) = (int)local_1c + 1;
              local_18 = (undefined4 *)((int)local_18 + 1);
            } while ((int)local_18 <
                     1 << ((char)in_ECX[9] - *(char *)(in_ECX[7] + (int)local_1c) & 0x1fU));
          }
        }
        local_1c = (int *)((int)local_1c + 1);
      } while ((int)local_1c < (int)local_10);
    }
    uVar8 = in_ECX[9];
    iVar12 = 0;
    local_c = (int *)0x0;
    local_18 = (undefined4 *)0x0;
    if (0 < (int)local_14) {
      do {
        uVar6 = (int)local_18 << (0x20U - (char)in_ECX[9] & 0x1f);
        uVar11 = uVar6 << 0x10 | uVar6 >> 0x10;
        uVar11 = (uVar11 >> 8 ^ uVar11 << 8) & 0xff00ff ^ uVar11 << 8;
        uVar11 = (uVar11 >> 4 ^ uVar11 << 4) & 0xf0f0f0f ^ uVar11 << 4;
        uVar11 = (uVar11 >> 2 ^ uVar11 * 4) & 0x33333333 ^ uVar11 * 4;
        uVar11 = (uVar11 >> 1 ^ uVar11 * 2) & 0x55555555 ^ uVar11 * 2;
        piVar16 = in_ECX + 8;
        if (*(int *)(*piVar16 + uVar11 * 4) == 0) {
          iVar5 = (int)local_c + 1;
          if (iVar5 < (int)local_10) {
            puVar4 = (uint *)(in_ECX[5] + (int)local_c * 4);
            do {
              puVar4 = puVar4 + 1;
              in_ECX = local_8;
              if (uVar6 < *puVar4) break;
              local_c = (int *)((int)local_c + 1);
              iVar5 = iVar5 + 1;
            } while (iVar5 < (int)local_10);
          }
          if (iVar12 < (int)local_10) {
            puVar4 = (uint *)(in_ECX[5] + iVar12 * 4);
            do {
              in_ECX = local_8;
              if (uVar6 < (-2 << (0x1fU - (char)uVar8 & 0x1f) & *puVar4)) break;
              iVar12 = iVar12 + 1;
              puVar4 = puVar4 + 1;
            } while (iVar12 < (int)local_10);
          }
          uVar6 = (int)local_10 - iVar12;
          piVar9 = local_c;
          if (0x7fff < local_c) {
            piVar9 = (int *)0x7fff;
          }
          if (0x7fff < uVar6) {
            uVar6 = 0x7fff;
          }
          *(uint *)(*piVar16 + uVar11 * 4) = ((uint)piVar9 | 0xffff0000) << 0xf | uVar6;
        }
        local_18 = (undefined4 *)((int)local_18 + 1);
      } while ((int)local_18 < (int)local_14);
    }
  }
  return 0;
}


/* FUN_006d29b0 @ 006d29b0  kind=gamemisc  attributed-by=caller-vote  size=78 */

void FUN_006d29b0(void)

{
  undefined8 *in_ECX;
  
  if (*(int *)((int)in_ECX + 0x24) != 0) {
    if (*(void **)(in_ECX + 4) != (void *)0x0) {
      free(*(void **)(in_ECX + 4));
    }
    if (*(void **)(in_ECX + 1) != (void *)0x0) {
      free(*(void **)(in_ECX + 1));
    }
    *in_ECX = 0;
    in_ECX[1] = 0;
    in_ECX[2] = 0;
    in_ECX[3] = 0;
    in_ECX[4] = 0;
    free(in_ECX);
  }
  return;
}


/* FUN_006d3840 @ 006d3840  kind=gamemisc  attributed-by=caller-vote  size=946 */

uint * FUN_006d3840(void)

{
  uint *_Memory;
  int iVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  uint uVar6;
  int iVar7;
  int local_8;
  
  _Memory = calloc(1,0x28);
  _Memory[9] = 1;
  iVar1 = FUN_00401e80();
  if (iVar1 == 0x564342) {
    uVar2 = FUN_00401e80();
    *_Memory = uVar2;
    uVar2 = FUN_00401e80();
    _Memory[1] = uVar2;
    if (uVar2 != 0xffffffff) {
      iVar1 = 0;
      for (uVar6 = *_Memory; uVar6 != 0; uVar6 = uVar6 >> 1) {
        iVar1 = iVar1 + 1;
      }
      iVar7 = 0;
      for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
        iVar7 = iVar7 + 1;
      }
      if (iVar7 + iVar1 < 0x19) {
        iVar1 = FUN_00401e80();
        if (iVar1 == 0) {
          iVar1 = FUN_00401e80();
          if ((in_ECX[4] - ((int)(in_ECX[1] + 7 + (in_ECX[1] + 7 >> 0x1f & 7U)) >> 3)) - *in_ECX <
              (int)(((uint)(iVar1 == 0) * 4 + 1) * _Memory[1] + 7) >> 3) goto LAB_006d3bb3;
          pvVar3 = malloc(_Memory[1] * 4);
          iVar7 = 0;
          _Memory[2] = (uint)pvVar3;
          if (iVar1 == 0) {
            if (0 < (int)_Memory[1]) {
              do {
                iVar1 = FUN_00401e80();
                if (iVar1 == -1) goto LAB_006d3bb3;
                iVar7 = iVar7 + 1;
                *(int *)((_Memory[2] - 4) + iVar7 * 4) = iVar1 + 1;
              } while (iVar7 < (int)_Memory[1]);
            }
          }
          else if (0 < (int)_Memory[1]) {
            do {
              iVar1 = FUN_00401e80();
              if (iVar1 == 0) {
                *(undefined4 *)(_Memory[2] + iVar7 * 4) = 0;
              }
              else {
                iVar1 = FUN_00401e80();
                if (iVar1 == -1) goto LAB_006d3bb3;
                *(int *)(_Memory[2] + iVar7 * 4) = iVar1 + 1;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < (int)_Memory[1]);
          }
        }
        else {
          if (iVar1 != 1) goto LAB_006d3bb3;
          local_8 = FUN_00401e80();
          iVar1 = local_8 + 1;
          if (iVar1 == 0) goto LAB_006d3bb3;
          uVar2 = _Memory[1];
          pvVar3 = malloc(uVar2 * 4);
          iVar7 = 0;
          _Memory[2] = (uint)pvVar3;
          if (0 < (int)uVar2) {
            do {
              for (uVar2 = _Memory[1] - iVar7; uVar2 != 0; uVar2 = uVar2 >> 1) {
              }
              iVar4 = FUN_00401e80();
              if (((iVar4 == -1) || (0x1f < local_8)) || ((int)(_Memory[1] - iVar7) < iVar4))
              goto LAB_006d3bb3;
              if (0 < iVar4) {
                if (1 < iVar4 + -1 >> ((byte)local_8 & 0x1f)) goto LAB_006d3bb3;
                if (0 < iVar4) {
                  do {
                    iVar7 = iVar7 + 1;
                    *(int *)((_Memory[2] - 4) + iVar7 * 4) = iVar1;
                    iVar4 = iVar4 + -1;
                  } while (iVar4 != 0);
                }
              }
              local_8 = local_8 + 1;
              iVar1 = iVar1 + 1;
            } while (iVar7 < (int)_Memory[1]);
          }
        }
        uVar2 = FUN_00401e80();
        _Memory[3] = uVar2;
        if (uVar2 == 0) {
          return _Memory;
        }
        if (uVar2 - 1 < 2) {
          uVar2 = FUN_00401e80();
          _Memory[4] = uVar2;
          uVar2 = FUN_00401e80();
          _Memory[5] = uVar2;
          iVar1 = FUN_00401e80();
          _Memory[6] = iVar1 + 1;
          uVar2 = FUN_00401e80();
          _Memory[7] = uVar2;
          if (uVar2 != 0xffffffff) {
            local_8 = 0;
            if (_Memory[3] == 1) {
              if (*_Memory == 0) {
                local_8 = 0;
              }
              else {
                local_8 = FUN_006d1f00();
              }
            }
            else if (_Memory[3] == 2) {
              local_8 = *_Memory * _Memory[1];
            }
            if ((int)(_Memory[6] * local_8 + 7) >> 3 <=
                (in_ECX[4] - ((int)(in_ECX[1] + 7 + (in_ECX[1] + 7 >> 0x1f & 7U)) >> 3)) - *in_ECX)
            {
              pvVar3 = malloc(local_8 * 4);
              _Memory[8] = (uint)pvVar3;
              iVar1 = 0;
              if (0 < local_8) {
                do {
                  uVar5 = FUN_00401e80();
                  iVar1 = iVar1 + 1;
                  *(undefined4 *)((_Memory[8] - 4) + iVar1 * 4) = uVar5;
                } while (iVar1 < local_8);
              }
              if (local_8 == 0) {
                return _Memory;
              }
              if (*(int *)((local_8 * 4 - 4U) + _Memory[8]) != -1) {
                return _Memory;
              }
            }
          }
        }
      }
    }
  }
LAB_006d3bb3:
  if (_Memory[9] != 0) {
    if ((void *)_Memory[8] != (void *)0x0) {
      free((void *)_Memory[8]);
    }
    if ((void *)_Memory[2] != (void *)0x0) {
      free((void *)_Memory[2]);
    }
    _Memory[0] = 0;
    _Memory[1] = 0;
    _Memory[2] = 0;
    _Memory[3] = 0;
    _Memory[4] = 0;
    _Memory[5] = 0;
    _Memory[6] = 0;
    _Memory[7] = 0;
    _Memory[8] = 0;
    _Memory[9] = 0;
    free(_Memory);
  }
  return (uint *)0x0;
}


/* FUN_006d6490 @ 006d6490  kind=gamemisc  attributed-by=caller-vote  size=179 */

void FUN_006d6490(void)

{
  void *in_ECX;
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = free_exref;
  if (in_ECX != (void *)0x0) {
    if (*(void **)((int)in_ECX + 0x10) != (void *)0x0) {
      free(*(void **)((int)in_ECX + 0x10));
    }
    if (*(void **)((int)in_ECX + 0x14) != (void *)0x0) {
      free(*(void **)((int)in_ECX + 0x14));
    }
    if (*(void **)((int)in_ECX + 0x18) != (void *)0x0) {
      free(*(void **)((int)in_ECX + 0x18));
    }
    if (*(int *)((int)in_ECX + 8) != 0) {
      iVar1 = 0;
      do {
        iVar2 = 0;
        do {
          free(*(void **)(*(int *)(iVar1 + *(int *)((int)in_ECX + 8)) + iVar2));
          pcVar3 = free_exref;
          iVar2 = iVar2 + 4;
        } while (iVar2 < 0x20);
        free(*(void **)(iVar1 + *(int *)((int)in_ECX + 8)));
        iVar1 = iVar1 + 4;
      } while (iVar1 < 0x44);
      free(*(void **)((int)in_ECX + 8));
    }
    if (*(int *)((int)in_ECX + 0xc) != 0) {
      iVar1 = 0;
      do {
        (*pcVar3)(*(undefined4 *)(*(int *)((int)in_ECX + 0xc) + iVar1));
        iVar1 = iVar1 + 4;
      } while (iVar1 < 0xc);
      (*pcVar3)(*(undefined4 *)((int)in_ECX + 0xc));
    }
    memset(in_ECX,0,0x34);
  }
  return;
}


/* FUN_006d8900 @ 006d8900  kind=gamemisc  attributed-by=caller-vote  size=140 */

void FUN_006d8900(void)

{
  void *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  if ((undefined8 *)((int)in_ECX + 0x10) != (undefined8 *)0x0) {
    if (*(void **)((int)in_ECX + 0x18) != (void *)0x0) {
      free(*(void **)((int)in_ECX + 0x18));
    }
    if (*(void **)((int)in_ECX + 0x1c) != (void *)0x0) {
      free(*(void **)((int)in_ECX + 0x1c));
    }
    *(undefined8 *)((int)in_ECX + 0x10) = 0;
    *(undefined8 *)((int)in_ECX + 0x18) = 0;
    *(undefined4 *)((int)in_ECX + 0x20) = 0;
  }
  puVar2 = (undefined4 *)((int)in_ECX + 0x30);
  iVar1 = 7;
  do {
    free((void *)*puVar2);
    puVar2 = puVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  free(*(void **)((int)in_ECX + 0x24));
  free(*(void **)((int)in_ECX + 0x98));
  free(*(void **)((int)in_ECX + 0xa0));
  memset(in_ECX,0,0xb4);
  return;
}


/* FUN_006da1b0 @ 006da1b0  kind=gamemisc  attributed-by=caller-vote  size=62 */

void FUN_006da1b0(void)

{
  undefined8 *in_ECX;
  
  if (in_ECX != (undefined8 *)0x0) {
    if (*(void **)(in_ECX + 1) != (void *)0x0) {
      free(*(void **)(in_ECX + 1));
    }
    if (*(void **)((int)in_ECX + 0xc) != (void *)0x0) {
      free(*(void **)((int)in_ECX + 0xc));
    }
    *in_ECX = 0;
    in_ECX[1] = 0;
    *(undefined4 *)(in_ECX + 2) = 0;
  }
  return;
}


/* FUN_006da1f0 @ 006da1f0  kind=gamemisc  attributed-by=caller-vote  size=687 */

void FUN_006da1f0(void)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  int *in_ECX;
  int in_EDX;
  uint uVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  int local_20;
  int local_c;
  int local_8;
  
  iVar1 = (int)(in_EDX + (in_EDX >> 0x1f & 3U)) >> 2;
  pvVar2 = malloc(iVar1 * 4);
  pvVar3 = malloc((in_EDX + iVar1) * 4);
  fVar12 = (float)in_EDX;
  dVar14 = (double)in_EDX;
  libm_sse2_log_precise();
  dVar15 = 2.0;
  libm_sse2_log_precise();
  floor(dVar14 / dVar15 + 0.5);
  iVar4 = FUN_0068d910();
  in_ECX[1] = iVar4;
  *in_ECX = in_EDX;
  in_ECX[2] = (int)pvVar3;
  in_ECX[3] = (int)pvVar2;
  local_8 = 0;
  if (0 < iVar1) {
    local_20 = 0;
    local_c = 1;
    pfVar8 = (float *)((int)pvVar3 + (in_EDX >> 1) * 4);
    do {
      fVar13 = (float)local_20 * (3.1415927 / fVar12);
      dVar14 = (double)fVar13;
      libm_sse2_cos_precise();
      *(float *)((int)pvVar3 + local_8 * 8) = (float)dVar14;
      dVar14 = (double)fVar13;
      libm_sse2_sin_precise();
      *(float *)((int)pvVar3 + local_8 * 8 + 4) = (float)-dVar14;
      fVar13 = (float)local_c * (3.1415927 / (float)(in_EDX * 2));
      dVar14 = (double)fVar13;
      libm_sse2_cos_precise();
      *pfVar8 = (float)dVar14;
      dVar14 = (double)fVar13;
      libm_sse2_sin_precise();
      local_c = local_c + 2;
      local_8 = local_8 + 1;
      local_20 = local_20 + 4;
      pfVar8[1] = (float)dVar14;
      pfVar8 = pfVar8 + 2;
    } while (local_8 < iVar1);
  }
  iVar1 = (int)(in_EDX + (in_EDX >> 0x1f & 7U)) >> 3;
  if (0 < iVar1) {
    iVar10 = 2;
    pfVar8 = (float *)((int)pvVar3 + in_EDX * 4);
    local_20 = iVar1;
    do {
      fVar13 = (float)iVar10 * (3.1415927 / fVar12);
      dVar14 = (double)fVar13;
      libm_sse2_cos_precise();
      *pfVar8 = (float)(dVar14 * 0.5);
      dVar14 = (double)fVar13;
      libm_sse2_sin_precise();
      iVar10 = iVar10 + 4;
      local_20 = local_20 + -1;
      pfVar8[1] = (float)(dVar14 * -0.5);
      pfVar8 = pfVar8 + 2;
    } while (local_20 != 0);
  }
  uVar11 = 1 << ((char)iVar4 - 2U & 0x1f);
  uVar9 = 0;
  if (0 < iVar1) {
    do {
      uVar7 = 0;
      bVar6 = 0;
      uVar5 = uVar11;
      while (uVar5 != 0) {
        if ((uVar9 & uVar5) != 0) {
          uVar7 = uVar7 | 1 << (bVar6 & 0x1f);
        }
        bVar6 = bVar6 + 1;
        uVar5 = (int)uVar11 >> (bVar6 & 0x1f);
      }
      *(uint *)((int)pvVar2 + uVar9 * 8 + 4) = uVar7;
      *(uint *)((int)pvVar2 + uVar9 * 8) = (~uVar7 & (1 << ((char)iVar4 - 1U & 0x1f)) - 1U) - 1;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < iVar1);
  }
  in_ECX[4] = (int)(4.0 / fVar12);
  return;
}


