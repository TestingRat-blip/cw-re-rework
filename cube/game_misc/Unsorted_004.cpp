// Unsorted_004 (game_misc) -- cube. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_004.h"

/* FUN_00697df0 @ 00697df0  kind=gamemisc  attributed-by=none  size=63 */

undefined ** FUN_00697df0(void)

{
  uint uVar1;
  char *in_EAX;
  int iVar2;
  int unaff_ESI;
  
  if ((in_EAX != (char *)0x0) && (*in_EAX != '\0')) {
    iVar2 = FUN_00697430();
    if (iVar2 != 0) {
      uVar1 = *(uint *)(iVar2 + 4);
      if (0x52 < uVar1) {
        return (undefined **)((uVar1 - 0x53) * 0x10 + *(int *)(unaff_ESI + 0x408c));
      }
      return &PTR_s_ADD_STYLE_NAME_00722d78 + uVar1 * 4;
    }
  }
  return (undefined **)0x0;
}


/* FUN_00697ea0 @ 00697ea0  kind=gamemisc  attributed-by=none  size=378 */

void FUN_00697ea0(int param_1)

{
  char cVar1;
  char *_Src;
  char *pcVar2;
  int iVar3;
  undefined4 *in_ECX;
  int local_114 [2];
  int local_10c;
  undefined1 local_104 [256];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)local_114;
  if (((in_ECX == (undefined4 *)0x0) || ((char *)*in_ECX == (char *)0x0)) ||
     (*(char *)*in_ECX == '\0')) {
    __security_check_cookie(local_4 ^ (uint)local_114);
    return;
  }
  FUN_00697440(in_ECX[0x1022]);
  in_ECX[7] = *(undefined4 *)(param_1 + 0xc);
  _Src = (char *)*in_ECX;
  pcVar2 = _Src;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + (1 - (int)(_Src + 1));
  if ((char *)0xff < pcVar2) {
    __security_check_cookie(local_4 ^ (uint)local_114);
    return;
  }
  memcpy(local_104,_Src,(size_t)pcVar2);
  iVar3 = FUN_006975c0(local_104,pcVar2);
  if ((iVar3 == 0) && (local_10c == 0xf)) {
    switch(**(undefined1 **)(local_114[0] + 0x2c)) {
    case 0x43:
    case 99:
      in_ECX[7] = 0x20;
      FUN_00697460();
      __security_check_cookie(local_4 ^ (uint)local_114);
      return;
    case 0x4d:
    case 0x6d:
      in_ECX[7] = 0x10;
      FUN_00697460();
      __security_check_cookie(local_4 ^ (uint)local_114);
      return;
    case 0x50:
    case 0x70:
      in_ECX[7] = 8;
    }
  }
  FUN_00697460();
  __security_check_cookie(local_4 ^ (uint)local_114);
  return;
}


/* FUN_00698130 @ 00698130  kind=gamemisc  attributed-by=none  size=961 */

int FUN_00698130(int *param_1,char *param_2)

{
  char cVar1;
  undefined *puVar2;
  int *piVar3;
  int *piVar4;
  int in_EAX;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined **ppuVar8;
  char *pcVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int local_8;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(in_EAX + 0x4088);
  local_8 = 0;
  iVar5 = FUN_00697430();
  uVar6 = local_4;
  if (iVar5 != 0) {
    iVar13 = *(int *)(iVar5 + 4) * 0x10 + *(int *)(in_EAX + 0x50);
    iVar5 = *(int *)(iVar13 + 4);
    if (iVar5 == 1) {
      FUN_00691290(local_4,*(undefined4 *)(iVar13 + 0xc));
      *(undefined4 *)(iVar13 + 0xc) = 0;
      if (param_2 == (char *)0x0) {
        return local_8;
      }
      if (*param_2 == '\0') {
        return local_8;
      }
      uVar6 = FUN_00691310(uVar6,param_2,&local_8);
      *(undefined4 *)(iVar13 + 0xc) = uVar6;
      return local_8;
    }
    if (iVar5 == 2) {
      uVar6 = FUN_00697b00(0);
      *(undefined4 *)(iVar13 + 0xc) = uVar6;
      return local_8;
    }
    if (iVar5 != 3) {
      return local_8;
    }
    uVar6 = FUN_00697a40(0);
    *(undefined4 *)(iVar13 + 0xc) = uVar6;
    return local_8;
  }
  iVar5 = FUN_00697430();
  if (iVar5 == 0) {
    local_8 = FUN_00697ce0(param_1,1);
    if (local_8 != 0) {
      return local_8;
    }
    iVar5 = FUN_00697430();
  }
  iVar13 = *(int *)(in_EAX + 0x48);
  if (*(int *)(in_EAX + 0x4c) == iVar13) {
    if (iVar13 == 0) {
      uVar6 = 0;
      iVar14 = 1;
      iVar13 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(in_EAX + 0x50);
      iVar14 = iVar13 + 1;
    }
    uVar6 = FUN_00693a60(local_4,0x10,iVar13,iVar14,uVar6,&local_8);
    *(undefined4 *)(in_EAX + 0x50) = uVar6;
    if (local_8 != 0) {
      return local_8;
    }
    puVar7 = (undefined4 *)(*(int *)(in_EAX + 0x48) * 0x10 + *(int *)(in_EAX + 0x50));
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(int *)(in_EAX + 0x48) = *(int *)(in_EAX + 0x48) + 1;
  }
  uVar11 = *(uint *)(iVar5 + 4);
  if (uVar11 < 0x53) {
    ppuVar8 = &PTR_s_ADD_STYLE_NAME_00722d78 + uVar11 * 4;
  }
  else {
    ppuVar8 = (undefined **)((uVar11 - 0x53) * 0x10 + *(int *)(in_EAX + 0x408c));
  }
  puVar7 = (undefined4 *)(*(int *)(in_EAX + 0x4c) * 0x10 + *(int *)(in_EAX + 0x50));
  *puVar7 = *ppuVar8;
  puVar7[1] = ppuVar8[1];
  puVar7[2] = ppuVar8[2];
  puVar2 = ppuVar8[1];
  if (puVar2 == (undefined *)0x1) {
    puVar7[3] = 0;
    if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
      uVar6 = FUN_00691310(local_4,param_2,&local_8);
      puVar7[3] = uVar6;
      if (local_8 != 0) {
        return local_8;
      }
    }
  }
  else if (puVar2 == (undefined *)0x2) {
    uVar6 = FUN_00697b00(0);
    puVar7[3] = uVar6;
  }
  else if (puVar2 == (undefined *)0x3) {
    uVar6 = FUN_00697a40(0);
    puVar7[3] = uVar6;
  }
  if (((((*param_1 != 0x4d4d4f43) || ((char)param_1[1] != 'E')) ||
       (*(char *)((int)param_1 + 5) != 'N')) || (*(char *)((int)param_1 + 6) != 'T')) &&
     (local_8 = FUN_006973a0(*(undefined4 *)(in_EAX + 0x4c),local_4), local_8 != 0)) {
    return local_8;
  }
  *(int *)(in_EAX + 0x4c) = *(int *)(in_EAX + 0x4c) + 1;
  pcVar9 = "DEFAULT_CHAR";
  uVar11 = 0xc;
  while (*(int *)((int)(param_1 + -0x1c8b2c) + (int)pcVar9) == *(int *)pcVar9) {
    uVar11 = uVar11 - 4;
    pcVar9 = (char *)((int)pcVar9 + 4);
    if (uVar11 < 4) {
      *(undefined4 *)(in_EAX + 0x24) = puVar7[3];
      return local_8;
    }
  }
  uVar11 = 0xb;
  piVar3 = (int *)"FONT_ASCENT";
  piVar4 = param_1;
  do {
    piVar12 = piVar4;
    piVar10 = piVar3;
    if (*piVar12 != *piVar10) goto LAB_0069840c;
    uVar11 = uVar11 - 4;
    piVar3 = piVar10 + 1;
    piVar4 = piVar12 + 1;
  } while (3 < uVar11);
  if ((((char)piVar10[1] == (char)piVar12[1]) &&
      (*(char *)((int)piVar10 + 5) == *(char *)((int)piVar12 + 5))) &&
     (*(char *)((int)piVar10 + 6) == *(char *)((int)piVar12 + 6))) {
    *(undefined4 *)(in_EAX + 0x28) = puVar7[3];
    return local_8;
  }
LAB_0069840c:
  pcVar9 = "FONT_DESCENT";
  uVar11 = 0xc;
  while (*(int *)((int)(param_1 + -0x1c8b09) + (int)pcVar9) == *(int *)pcVar9) {
    uVar11 = uVar11 - 4;
    pcVar9 = (char *)((int)pcVar9 + 4);
    if (uVar11 < 4) {
      *(undefined4 *)(in_EAX + 0x2c) = puVar7[3];
      return local_8;
    }
  }
  if (((*param_1 == 0x43415053) && ((char)param_1[1] == 'I')) &&
     ((*(char *)((int)param_1 + 5) == 'N' && (*(char *)((int)param_1 + 6) == 'G')))) {
    if ((char *)puVar7[3] == (char *)0x0) {
      return 3;
    }
    cVar1 = *(char *)puVar7[3];
    if ((cVar1 == 'p') || (cVar1 == 'P')) {
      *(undefined4 *)(in_EAX + 0x1c) = 8;
      return local_8;
    }
    if ((cVar1 == 'm') || (cVar1 == 'M')) {
      *(undefined4 *)(in_EAX + 0x1c) = 0x10;
      return local_8;
    }
    if ((cVar1 == 'c') || (cVar1 == 'C')) {
      *(undefined4 *)(in_EAX + 0x1c) = 0x20;
      return local_8;
    }
  }
  return local_8;
}


/* FUN_00698e00 @ 00698e00  kind=gamemisc  attributed-by=none  size=483 */

void FUN_00698e00(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *unaff_ESI;
  int iVar3;
  undefined4 *puVar4;
  
  uVar2 = 0;
  if (unaff_ESI != (undefined4 *)0x0) {
    uVar1 = unaff_ESI[0x1022];
    FUN_00691290(uVar1,*unaff_ESI);
    *unaff_ESI = 0;
    if (unaff_ESI[0x20] != 0) {
      FUN_00697350(unaff_ESI[0x20]);
      FUN_00691290(uVar1,unaff_ESI[0x20]);
      unaff_ESI[0x20] = 0;
    }
    FUN_00691290(uVar1,unaff_ESI[0x15]);
    unaff_ESI[0x15] = 0;
    if (unaff_ESI[0x12] != 0) {
      iVar3 = 0;
      do {
        if (*(int *)(unaff_ESI[0x14] + 4 + iVar3) == 1) {
          FUN_00691290(uVar1,*(undefined4 *)(unaff_ESI[0x14] + 0xc + iVar3));
          *(undefined4 *)(iVar3 + 0xc + unaff_ESI[0x14]) = 0;
        }
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0x10;
      } while (uVar2 < (uint)unaff_ESI[0x12]);
    }
    uVar2 = 0;
    FUN_00691290(uVar1,unaff_ESI[0x14]);
    puVar4 = (undefined4 *)unaff_ESI[0xe];
    unaff_ESI[0x14] = 0;
    if (unaff_ESI[0xd] != 0) {
      do {
        FUN_00691290(uVar1,*puVar4);
        *puVar4 = 0;
        FUN_00691290(uVar1,puVar4[6]);
        puVar4[6] = 0;
        uVar2 = uVar2 + 1;
        puVar4 = puVar4 + 9;
      } while (uVar2 < (uint)unaff_ESI[0xd]);
    }
    puVar4 = (undefined4 *)unaff_ESI[0x11];
    uVar2 = 0;
    if (unaff_ESI[0x10] != 0) {
      do {
        FUN_00691290(uVar1,*puVar4);
        *puVar4 = 0;
        FUN_00691290(uVar1,puVar4[6]);
        puVar4[6] = 0;
        uVar2 = uVar2 + 1;
        puVar4 = puVar4 + 9;
      } while (uVar2 < (uint)unaff_ESI[0x10]);
    }
    FUN_00691290(uVar1,unaff_ESI[0xe]);
    uVar2 = 0;
    unaff_ESI[0xe] = 0;
    FUN_00691290(uVar1,unaff_ESI[0x11]);
    puVar4 = (undefined4 *)unaff_ESI[0x1a];
    unaff_ESI[0x11] = 0;
    if (unaff_ESI[0x1c] != 0) {
      do {
        FUN_00691290(uVar1,*puVar4);
        *puVar4 = 0;
        FUN_00691290(uVar1,puVar4[6]);
        puVar4[6] = 0;
        uVar2 = uVar2 + 1;
        puVar4 = puVar4 + 9;
      } while (uVar2 < (uint)unaff_ESI[0x1c]);
    }
    FUN_00691290(uVar1,unaff_ESI[0x1a]);
    uVar2 = 0;
    unaff_ESI[0x1a] = 0;
    FUN_00697350(unaff_ESI + 0x1025);
    puVar4 = (undefined4 *)unaff_ESI[0x1023];
    if (unaff_ESI[0x1024] != 0) {
      do {
        FUN_00691290(uVar1,*puVar4);
        *puVar4 = 0;
        if (puVar4[1] == 1) {
          FUN_00691290(uVar1,puVar4[3]);
          puVar4[3] = 0;
        }
        uVar2 = uVar2 + 1;
        puVar4 = puVar4 + 4;
      } while (uVar2 < (uint)unaff_ESI[0x1024]);
    }
    FUN_00691290(uVar1,unaff_ESI[0x1023]);
    unaff_ESI[0x1023] = 0;
  }
  return;
}


/* FUN_00698ff0 @ 00698ff0  kind=gamemisc  attributed-by=none  size=52 */

int FUN_00698ff0(void)

{
  char *in_EAX;
  int iVar1;
  int unaff_ESI;
  
  if ((((unaff_ESI != 0) && (*(int *)(unaff_ESI + 0x48) != 0)) && (in_EAX != (char *)0x0)) &&
     (*in_EAX != '\0')) {
    iVar1 = FUN_00697430();
    if (iVar1 != 0) {
      return *(int *)(iVar1 + 4) * 0x10 + *(int *)(unaff_ESI + 0x50);
    }
  }
  return 0;
}


/* FUN_00699130 @ 00699130  kind=gamemisc  attributed-by=none  size=486 */

void FUN_00699130(int param_1)

{
  char *pcVar1;
  char cVar2;
  uint _Size;
  int iVar3;
  char *pcVar4;
  undefined1 *_Dst;
  uint uVar5;
  uint uVar6;
  int local_2c;
  char *local_28 [4];
  int local_18;
  uint local_14 [4];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_2c;
  local_18 = param_1;
  local_2c = 0;
  local_28[0] = (char *)0x0;
  local_28[1] = (undefined1 *)0x0;
  local_28[2] = (char *)0x0;
  local_28[3] = (char *)0x0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar3 = FUN_00698ff0();
  if ((((iVar3 != 0) && (*(int *)(iVar3 + 4) == 1)) && (*(char **)(iVar3 + 0xc) != (char *)0x0)) &&
     (((cVar2 = **(char **)(iVar3 + 0xc), cVar2 == 'O' || (cVar2 == 'o')) ||
      ((cVar2 == 'I' || (cVar2 == 'i')))))) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    if ((**(char **)(iVar3 + 0xc) == 'O') ||
       (local_28[2] = "Italic", **(char **)(iVar3 + 0xc) == 'o')) {
      local_28[2] = "Oblique";
    }
  }
  iVar3 = FUN_00698ff0();
  if ((((iVar3 != 0) && (*(int *)(iVar3 + 4) == 1)) && (*(char **)(iVar3 + 0xc) != (char *)0x0)) &&
     ((cVar2 = **(char **)(iVar3 + 0xc), cVar2 == 'B' || (cVar2 == 'b')))) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
    local_28[1] = "Bold";
  }
  iVar3 = FUN_00698ff0();
  if (((iVar3 != 0) && (*(int *)(iVar3 + 4) == 1)) &&
     ((pcVar4 = *(char **)(iVar3 + 0xc), pcVar4 != (char *)0x0 &&
      (((cVar2 = *pcVar4, cVar2 != '\0' && (cVar2 != 'N')) && (cVar2 != 'n')))))) {
    local_28[3] = pcVar4;
  }
  iVar3 = FUN_00698ff0();
  if (((iVar3 != 0) && (*(int *)(iVar3 + 4) == 1)) &&
     (((pcVar4 = *(char **)(iVar3 + 0xc), pcVar4 != (char *)0x0 &&
       ((cVar2 = *pcVar4, cVar2 != '\0' && (cVar2 != 'N')))) && (cVar2 != 'n')))) {
    local_28[0] = pcVar4;
  }
  iVar3 = 0;
  uVar6 = 0;
  do {
    pcVar4 = *(char **)((int)local_28 + uVar6);
    *(undefined4 *)((int)local_14 + uVar6) = 0;
    if (pcVar4 != (char *)0x0) {
      pcVar1 = pcVar4 + 1;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      *(int *)((int)local_14 + uVar6) = (int)pcVar4 - (int)pcVar1;
      iVar3 = iVar3 + 1 + ((int)pcVar4 - (int)pcVar1);
    }
    uVar6 = uVar6 + 4;
  } while (uVar6 < 0x10);
  if (iVar3 == 0) {
    local_28[0] = "Regular";
    local_14[0] = 7;
    iVar3 = 8;
  }
  _Dst = (undefined1 *)FUN_00692230(*(undefined4 *)(param_1 + 100),iVar3,&local_2c);
  *(undefined1 **)(param_1 + 0x18) = _Dst;
  if (local_2c == 0) {
    uVar6 = 0;
    do {
      pcVar4 = local_28[uVar6];
      _Size = local_14[uVar6];
      if (pcVar4 != (char *)0x0) {
        if (_Dst != *(undefined1 **)(local_18 + 0x18)) {
          *_Dst = 0x20;
          _Dst = _Dst + 1;
        }
        memcpy(_Dst,pcVar4,_Size);
        if (((uVar6 == 0) || (uVar6 == 3)) && (uVar5 = 0, _Size != 0)) {
          do {
            if (_Dst[uVar5] == ' ') {
              _Dst[uVar5] = 0x2d;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < _Size);
        }
        _Dst = _Dst + _Size;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 4);
    *_Dst = 0;
  }
  __security_check_cookie(local_4 ^ (uint)&local_2c);
  return;
}


/* FUN_00699320 @ 00699320  kind=gamemisc  attributed-by=none  size=155 */

void FUN_00699320(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 100);
    FUN_00698e00();
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0x90) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x84));
    *(undefined4 *)(param_1 + 0x84) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x88) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x8c));
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  return;
}


/* FUN_00699f90 @ 00699f90  kind=gamemisc  attributed-by=none  size=588 */

int FUN_00699f90(undefined4 param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_EAX;
  uint *puVar4;
  undefined4 uVar5;
  undefined1 local_4 [4];
  
  uVar3 = param_2;
  param_2 = 0;
  puVar4 = (uint *)FUN_00692230(uVar3,0x203c,&param_2);
  if (param_2 != 0) goto LAB_0069a1ba;
  if (in_EAX == (undefined4 *)0x0) {
    in_EAX = &DAT_00722d68;
  }
  puVar4[9] = (uint)in_EAX;
  *(undefined2 *)(puVar4 + 3) = 0x7fff;
  puVar4[0x80e] = uVar3;
  FUN_00697440(uVar3);
  param_2 = FUN_006977d0(param_1,puVar4,local_4);
  if (param_2 == 0) {
    uVar1 = puVar4[8];
    if (uVar1 != 0) {
      if (*(int *)(uVar1 + 0x1c) != 8) {
        *(undefined2 *)(uVar1 + 0x20) = *(undefined2 *)(uVar1 + 4);
      }
      uVar1 = puVar4[8];
      if (puVar4[1] != *(int *)(uVar1 + 0x40) + *(int *)(uVar1 + 0x34)) {
        *(undefined2 *)(uVar1 + 0x4084) = 1;
      }
      if ((*(int *)puVar4[9] != 0) &&
         ((uVar1 = puVar4[8], *(int *)(uVar1 + 0x34) != 0 || (*(int *)(uVar1 + 0x40) != 0)))) {
        if ((int)(short)puVar4[4] - (int)(short)puVar4[3] != (uint)*(ushort *)(uVar1 + 4)) {
          *(short *)(uVar1 + 4) = (short)puVar4[4] - (short)puVar4[3];
          *(undefined2 *)(puVar4[8] + 0x4084) = 1;
        }
        if (*(short *)(puVar4[8] + 8) != (short)puVar4[3]) {
          *(short *)(puVar4[8] + 8) = (short)puVar4[3];
          *(undefined2 *)(puVar4[8] + 0x4084) = 1;
        }
        if (*(short *)(puVar4[8] + 0xc) != *(short *)((int)puVar4 + 0x12)) {
          *(short *)(puVar4[8] + 0xc) = *(short *)((int)puVar4 + 0x12);
          *(undefined2 *)(puVar4[8] + 0x4084) = 1;
        }
        if (*(short *)(puVar4[8] + 0xe) != (short)puVar4[5]) {
          *(short *)(puVar4[8] + 0xe) = (short)puVar4[5];
          *(short *)(puVar4[8] + 10) = -(short)puVar4[5];
          *(undefined2 *)(puVar4[8] + 0x4084) = 1;
        }
        if ((int)(short)puVar4[5] + (int)*(short *)((int)puVar4 + 0x12) !=
            (uint)*(ushort *)(puVar4[8] + 6)) {
          *(short *)(puVar4[8] + 6) = (short)puVar4[5] + *(short *)((int)puVar4 + 0x12);
        }
      }
    }
    if ((*puVar4 & 1) != 0) {
      param_2 = ((*puVar4 & 0x20) != 0) + 0xb9;
      goto LAB_0069a1ba;
    }
    uVar1 = puVar4[8];
    if (uVar1 == 0) {
      param_2 = 3;
    }
    else {
      iVar2 = *(int *)(uVar1 + 0x58);
      if (iVar2 != 0) {
        uVar5 = FUN_00693a60(*(undefined4 *)(uVar1 + 0x4088),1,iVar2,iVar2 + 1,
                             *(undefined4 *)(uVar1 + 0x54),&param_2);
        *(undefined4 *)(puVar4[8] + 0x54) = uVar5;
        if (param_2 != 0) goto LAB_0069a175;
        *(undefined1 *)(*(int *)(puVar4[8] + 0x58) + *(int *)(puVar4[8] + 0x54)) = 0;
      }
    }
    *param_3 = puVar4[8];
  }
  else {
LAB_0069a175:
    FUN_00698e00();
    FUN_00691290(uVar3,puVar4[8]);
    puVar4[8] = 0;
  }
LAB_0069a1ba:
  if (puVar4 != (uint *)0x0) {
    FUN_00697460();
    FUN_00691290(uVar3,puVar4);
  }
  return param_2;
}


/* FUN_0069a7f0 @ 0069a7f0  kind=gamemisc  attributed-by=none  size=109 */

void FUN_0069a7f0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *in_EDX;
  int iVar4;
  
  iVar4 = *in_EDX;
  if (in_EDX[6] < *in_EDX) {
    iVar4 = in_EDX[6];
  }
  piVar1 = (int *)(in_EDX[0x14e] + in_EDX[1] * 4);
  piVar3 = (int *)*piVar1;
  while ((piVar3 != (int *)0x0 && (*piVar3 <= iVar4))) {
    if (*piVar3 == iVar4) {
      return;
    }
    piVar1 = piVar3 + 3;
    piVar3 = (int *)*piVar1;
  }
  iVar2 = in_EDX[0xd];
  if (iVar2 < in_EDX[0xc]) {
    piVar3 = (int *)(iVar2 * 0x10 + in_EDX[0xb]);
    in_EDX[0xd] = iVar2 + 1;
    *piVar3 = iVar4;
    piVar3[2] = 0;
    piVar3[1] = 0;
    piVar3[3] = *piVar1;
    *piVar1 = (int)piVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  longjmp(in_EDX + 0x13c,1);
}


/* FUN_0069a890 @ 0069a890  kind=gamemisc  attributed-by=none  size=99 */

void FUN_0069a890(void)

{
  int in_EAX;
  int in_ECX;
  int *in_EDX;
  uint uVar1;
  int iVar2;
  
  uVar1 = in_EAX - in_EDX[4];
  if (in_EDX[3] < in_ECX) {
    in_ECX = in_EDX[3];
  }
  iVar2 = in_ECX - in_EDX[2];
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  if ((iVar2 != *in_EDX) || (uVar1 != in_EDX[1])) {
    if (in_EDX[10] == 0) {
      FUN_0069a860();
    }
    in_EDX[8] = 0;
    in_EDX[9] = 0;
  }
  *in_EDX = iVar2;
  in_EDX[1] = uVar1;
  if ((uVar1 < (uint)in_EDX[7]) && (iVar2 < in_EDX[6])) {
    in_EDX[10] = 0;
    return;
  }
  in_EDX[10] = 1;
  return;
}


/* FUN_0069a950 @ 0069a950  kind=gamemisc  attributed-by=none  size=355 */

void FUN_0069a950(undefined4 param_1,int param_2,int param_3)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EDX;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_ESI;
  int iVar8;
  int local_18;
  int local_14;
  int local_10;
  
  iVar8 = in_EDX >> 8;
  iVar7 = in_EAX - in_EDX;
  iVar4 = in_EDX + iVar8 * -0x100;
  iVar6 = in_EAX >> 8;
  iVar1 = in_EAX + iVar6 * -0x100;
  if (param_2 == param_3) {
    FUN_0069a890();
    return;
  }
  iVar5 = param_3 - param_2;
  if (iVar8 != iVar6) {
    local_10 = 0x100;
    local_14 = 1;
    iVar3 = 0x100 - iVar4;
    if (iVar7 < 0) {
      local_10 = 0;
      local_14 = -1;
      iVar7 = -iVar7;
      iVar3 = iVar4;
    }
    iVar2 = (iVar3 * iVar5) / iVar7;
    local_18 = (iVar3 * iVar5) % iVar7;
    if (local_18 < 0) {
      iVar2 = iVar2 + -1;
      local_18 = local_18 + iVar7;
    }
    iVar8 = iVar8 + local_14;
    *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + iVar2;
    *(int *)(unaff_ESI + 0x20) = *(int *)(unaff_ESI + 0x20) + (local_10 + iVar4) * iVar2;
    FUN_0069a890();
    param_2 = param_2 + iVar2;
    if (iVar8 != iVar6) {
      iVar5 = ((iVar2 - param_2) + param_3) * 0x100;
      iVar4 = iVar5 / iVar7;
      iVar5 = iVar5 % iVar7;
      if (iVar5 < 0) {
        iVar4 = iVar4 + -1;
        iVar5 = iVar5 + iVar7;
      }
      local_18 = local_18 - iVar7;
      do {
        local_18 = local_18 + iVar5;
        iVar3 = iVar4;
        if (-1 < local_18) {
          local_18 = local_18 - iVar7;
          iVar3 = iVar4 + 1;
        }
        iVar8 = iVar8 + local_14;
        *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + iVar3;
        param_2 = param_2 + iVar3;
        *(int *)(unaff_ESI + 0x20) = *(int *)(unaff_ESI + 0x20) + iVar3 * 0x100;
        FUN_0069a890();
      } while (iVar8 != iVar6);
    }
    *(int *)(unaff_ESI + 0x20) =
         *(int *)(unaff_ESI + 0x20) + ((iVar1 - local_10) + 0x100) * (param_3 - param_2);
    *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + (param_3 - param_2);
    return;
  }
  *(int *)(unaff_ESI + 0x20) = *(int *)(unaff_ESI + 0x20) + (iVar1 + iVar4) * iVar5;
  *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + iVar5;
  return;
}


/* FUN_0069aac0 @ 0069aac0  kind=gamemisc  attributed-by=none  size=639 */

void FUN_0069aac0(int param_1,int param_2)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar3 = param_2 >> 8;
  iVar2 = *(int *)(in_EAX + 0x44) - *(int *)(in_EAX + 0x48);
  iVar4 = param_2 + iVar3 * -0x100;
  iVar1 = *(int *)(in_EAX + 0x40);
  iVar5 = param_1 - iVar1;
  iVar7 = *(int *)(in_EAX + 0x48) >> 8;
  iVar6 = param_2 - *(int *)(in_EAX + 0x44);
  local_1c = iVar3;
  local_18 = iVar7;
  if (iVar3 < iVar7) {
    local_1c = iVar7;
    local_18 = iVar3;
  }
  if ((local_18 < *(int *)(in_EAX + 0x14)) && (*(int *)(in_EAX + 0x10) <= local_1c)) {
    if (iVar7 != iVar3) {
      local_1c = 1;
      local_24 = 0x100;
      if (iVar5 == 0) {
        iVar1 = (iVar1 + (iVar1 >> 8) * -0x100) * 2;
        if (iVar6 < 0) {
          local_24 = 0;
          local_1c = -1;
        }
        *(int *)(in_EAX + 0x24) = *(int *)(in_EAX + 0x24) + (local_24 - iVar2);
        *(int *)(in_EAX + 0x20) = *(int *)(in_EAX + 0x20) + (local_24 - iVar2) * iVar1;
        FUN_0069a890();
        while (iVar7 = iVar7 + local_1c, iVar7 != iVar3) {
          *(int *)(in_EAX + 0x20) = *(int *)(in_EAX + 0x20) + (local_24 * 2 + -0x100) * iVar1;
          *(int *)(in_EAX + 0x24) = *(int *)(in_EAX + 0x24) + local_24 * 2 + -0x100;
          FUN_0069a890();
        }
        iVar4 = local_24 + -0x100 + iVar4;
        *(int *)(in_EAX + 0x20) = *(int *)(in_EAX + 0x20) + iVar4 * iVar1;
        *(int *)(in_EAX + 0x24) = *(int *)(in_EAX + 0x24) + iVar4;
        goto LAB_0069ad2b;
      }
      local_1c = 1;
      iVar1 = 0x100 - iVar2;
      if (iVar6 < 0) {
        local_24 = 0;
        local_1c = -1;
        iVar6 = -iVar6;
        iVar1 = iVar2;
      }
      local_20 = (iVar1 * iVar5) % iVar6;
      if (local_20 < 0) {
        local_20 = local_20 + iVar6;
      }
      FUN_0069a950(iVar7,iVar2,local_24);
      iVar7 = iVar7 + local_1c;
      FUN_0069a890();
      if (iVar7 != iVar3) {
        local_14 = (iVar5 * 0x100) % iVar6;
        if (local_14 < 0) {
          local_14 = local_14 + iVar6;
        }
        local_20 = local_20 - iVar6;
        do {
          local_20 = local_20 + local_14;
          if (-1 < local_20) {
            local_20 = local_20 - iVar6;
          }
          FUN_0069a950(iVar7,0x100 - local_24,local_24);
          iVar7 = iVar7 + local_1c;
          FUN_0069a890();
        } while (iVar7 != iVar3);
      }
      iVar2 = 0x100 - local_24;
    }
    FUN_0069a950(iVar7,iVar2,iVar4);
  }
LAB_0069ad2b:
  *(int *)(in_EAX + 0x40) = param_1;
  *(int *)(in_EAX + 0x44) = param_2;
  *(int *)(in_EAX + 0x48) = iVar3 * 0x100;
  return;
}


/* FUN_0069c020 @ 0069c020  kind=gamemisc  attributed-by=none  size=42 */

int * FUN_0069c020(void)

{
  int *piVar1;
  int in_ECX;
  int *piVar2;
  int in_EDX;
  
  piVar1 = *(int **)(in_ECX + 0x9c);
  piVar2 = piVar1 + (uint)*(ushort *)(in_ECX + 0x98) * 4;
  while( true ) {
    if (piVar2 <= piVar1) {
      return (int *)0x0;
    }
    if ((*piVar1 == in_EDX) && (piVar1[3] != 0)) break;
    piVar1 = piVar1 + 4;
  }
  return piVar1;
}


/* FUN_0069c050 @ 0069c050  kind=gamemisc  attributed-by=none  size=54 */

undefined4
FUN_0069c050(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0069c020();
  if (iVar1 != 0) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(iVar1 + 0xc);
    }
    uVar2 = FUN_006908c0(param_3,*(undefined4 *)(iVar1 + 8));
    return uVar2;
  }
  return 0x8e;
}


/* FUN_0069c090 @ 0069c090  kind=gamemisc  attributed-by=none  size=407 */

void FUN_0069c090(void)

{
  int iVar1;
  int unaff_EBX;
  ushort uVar2;
  int unaff_ESI;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_c;
  uint local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_28;
  uVar2 = 0;
  local_24 = 0;
  local_20 = 0;
  local_18 = 0;
  local_1c = 0;
  local_28 = FUN_006908c0();
  if (local_28 == 0) {
    if (*(short *)(unaff_EBX + 4) != 0) {
      local_28 = 0;
      do {
        local_28 = FUN_00692010();
        if (local_28 != 0) {
          *(ushort *)(unaff_EBX + 4) = uVar2 - 1;
          break;
        }
        if (local_8 + local_c <= *(uint *)(unaff_ESI + 4)) {
          local_24 = local_24 + 1;
          if ((local_14 == 0x68656164) || (local_14 == 0x62686564)) {
            local_20 = 1;
            if (local_8 < 0x36) goto LAB_0069c1e9;
            local_28 = FUN_006908c0();
            if ((local_28 != 0) || (iVar1 = FUN_00690cd0(), local_28 != 0)) goto LAB_0069c216;
            if (iVar1 != 0x5f0f3cf5) goto LAB_0069c1e9;
            local_28 = FUN_006908c0();
            if (local_28 != 0) goto LAB_0069c216;
          }
          else if (local_14 == 0x53494e47) {
            local_18 = 1;
          }
          else if (local_14 == 0x4d455441) {
            local_1c = 1;
          }
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)(unaff_EBX + 4));
    }
    *(short *)(unaff_EBX + 4) = (short)local_24;
    if ((short)local_24 == 0) {
      __security_check_cookie(local_4 ^ (uint)&local_28);
      return;
    }
    if ((local_20 == 0) && ((local_18 == 0 || (local_1c == 0)))) {
LAB_0069c1e9:
      __security_check_cookie(local_4 ^ (uint)&local_28);
      return;
    }
  }
LAB_0069c216:
  __security_check_cookie(local_4 ^ (uint)&local_28);
  return;
}


/* FUN_0069d190 @ 0069d190  kind=gamemisc  attributed-by=none  size=424 */

undefined4 FUN_0069d190(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  
  uVar8 = (uint)CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  puVar2 = (undefined1 *)(uVar8 + param_1);
  if ((*(undefined1 **)(param_2 + 4) < puVar2) || (uVar8 < 0x206)) {
    FUN_0068f190(param_2,8);
  }
  puVar10 = (undefined1 *)(param_1 + 6);
  uVar8 = 0;
  param_1 = 0x100;
  do {
    puVar11 = puVar10;
    uVar3 = *puVar11;
    bVar4 = puVar11[1];
    if ((1 < *(int *)(param_2 + 8)) && ((bVar4 & 7) != 0)) {
      FUN_0068f190(param_2,8);
    }
    uVar9 = (uint)(ushort)(CONCAT11(uVar3,bVar4) >> 3);
    if (uVar8 < uVar9) {
      uVar8 = uVar9;
    }
    param_1 = param_1 + -1;
    puVar10 = puVar11 + 2;
  } while (param_1 != 0);
  if (*(undefined1 **)(param_2 + 4) < puVar11 + uVar8 * 8 + 10) {
    FUN_0068f190(param_2,8);
  }
  param_1 = uVar8 + 1;
  do {
    uVar3 = puVar10[4];
    uVar9 = (uint)CONCAT11(puVar10[2],puVar10[3]);
    uVar5 = puVar10[5];
    puVar12 = puVar10 + 8;
    uVar6 = puVar10[6];
    uVar7 = puVar10[7];
    if (uVar9 != 0) {
      if ((1 < *(int *)(param_2 + 8)) &&
         ((0xff < CONCAT11(*puVar10,puVar10[1]) || (0x100 < CONCAT11(*puVar10,puVar10[1]) + uVar9)))
         ) {
        FUN_0068f190(param_2,8);
      }
      if (CONCAT11(uVar6,uVar7) != 0) {
        if ((puVar12 + (CONCAT11(uVar6,uVar7) - 2) < puVar11 + uVar8 * 8 + 10) ||
           (puVar2 < puVar12 + (CONCAT11(uVar6,uVar7) - 2) + uVar9 * 2)) {
          FUN_0068f190(param_2,9);
        }
        if (0 < *(int *)(param_2 + 8)) {
          puVar10 = puVar12 + uVar9 * 2;
          while (puVar12 < puVar10) {
            uVar6 = *puVar12;
            puVar13 = puVar12 + 2;
            puVar1 = puVar12 + 1;
            puVar12 = puVar13;
            if ((CONCAT11(uVar6,*puVar1) != 0) &&
               (*(uint *)(param_2 + 0x50) <=
                (uint)(ushort)(CONCAT11(uVar6,*puVar1) + CONCAT11(uVar3,uVar5)))) {
              FUN_0068f190(param_2,0x10);
            }
          }
        }
      }
    }
    param_1 = param_1 + -1;
    puVar10 = puVar12;
  } while (param_1 != 0);
  return 0;
}


/* FUN_0069d340 @ 0069d340  kind=gamemisc  attributed-by=none  size=95 */

int FUN_0069d340(void)

{
  int iVar1;
  undefined1 *puVar2;
  uint in_EAX;
  int iVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBX;
  
  iVar3 = 0;
  if (in_EAX < 0x10000) {
    uVar5 = in_EAX >> 8;
    iVar1 = unaff_EBX + 0x206;
    if (uVar5 == 0) {
      puVar2 = (undefined1 *)(unaff_EBX + 6 + (in_EAX & 0xff) * 2);
      if (CONCAT11(*puVar2,puVar2[1]) == 0) {
        return iVar1;
      }
    }
    else {
      iVar4 = (CONCAT11(*(undefined1 *)(unaff_EBX + 6 + uVar5 * 2),
                        *(undefined1 *)(unaff_EBX + 7 + uVar5 * 2)) & 0xfffffff8) + iVar1;
      if (iVar4 != iVar1) {
        iVar3 = iVar4;
      }
    }
  }
  return iVar3;
}


/* FUN_0069d600 @ 0069d600  kind=gamemisc  attributed-by=none  size=330 */

undefined4 FUN_0069d600(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint in_EAX;
  undefined1 *puVar4;
  undefined1 *puVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  int *unaff_EDI;
  undefined1 *local_14;
  
  iVar1 = unaff_EDI[4];
  uVar2 = unaff_EDI[8];
  if (in_EAX < uVar2) {
    iVar3 = uVar2 * 2;
    local_14 = (undefined1 *)(iVar1 + 0xe + in_EAX * 2);
    pcVar6 = (char *)(iVar1 + 0x10 + (iVar3 + in_EAX) * 2);
    puVar5 = (undefined1 *)(iVar3 + 0x10 + in_EAX * 2 + iVar1);
    iVar7 = uVar2 * -2 + 1;
    puVar4 = (undefined1 *)(iVar1 + uVar2 * 6 + 0x10 + in_EAX * 2);
    do {
      unaff_EDI[0xb] = (uint)CONCAT11(*local_14,puVar5[1 - (iVar3 + 2)]);
      unaff_EDI[10] = (uint)CONCAT11(*puVar5,pcVar6[iVar7]);
      unaff_EDI[0xc] = (uint)(byte)puVar4[iVar7] | (int)(short)((short)*pcVar6 << 8);
      uVar8 = (uint)CONCAT11(*puVar4,puVar4[1]);
      if ((((uVar2 - 1 <= in_EAX) && (unaff_EDI[10] == 0xffff)) && (unaff_EDI[0xb] == 0xffff)) &&
         ((uVar8 != 0 &&
          ((undefined1 *)(*(int *)(*unaff_EDI + 0x1f8) + *(int *)(*unaff_EDI + 500)) <
           puVar4 + uVar8 + 2)))) {
        unaff_EDI[0xc] = 1;
LAB_0069d71a:
        unaff_EDI[9] = in_EAX;
        unaff_EDI[0xd] = 0;
        return 0;
      }
      if (uVar8 != 0xffff) {
        if (uVar8 != 0) {
          unaff_EDI[9] = in_EAX;
          unaff_EDI[0xd] = (int)(puVar4 + uVar8);
          return 0;
        }
        goto LAB_0069d71a;
      }
      local_14 = local_14 + 2;
      in_EAX = in_EAX + 1;
      pcVar6 = pcVar6 + 2;
      puVar5 = puVar5 + 2;
      puVar4 = puVar4 + 2;
    } while (in_EAX < (uint)unaff_EDI[8]);
  }
  return 0xffffffff;
}


/* FUN_0069d750 @ 0069d750  kind=gamemisc  attributed-by=none  size=157 */

void FUN_0069d750(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int in_EAX;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (*(uint *)(in_EAX + 0x18) < 0xffff) {
    uVar6 = *(uint *)(in_EAX + 0x18) + 1;
    do {
      uVar4 = *(uint *)(in_EAX + 0x28);
      if (uVar6 < uVar4) {
        uVar6 = uVar4;
      }
      uVar3 = *(uint *)(in_EAX + 0x2c);
      if (uVar6 <= uVar3) {
        if (*(int *)(in_EAX + 0x34) == 0) {
          do {
            uVar4 = *(int *)(in_EAX + 0x30) + uVar6 & 0xffff;
            if (uVar4 != 0) goto LAB_0069d7e5;
            uVar6 = uVar6 + 1;
          } while (uVar6 <= uVar3);
        }
        else {
          iVar5 = *(int *)(in_EAX + 0x34) + -1 + (uVar6 - uVar4) * 2;
          do {
            puVar1 = (undefined1 *)(iVar5 + 1);
            puVar2 = (undefined1 *)(iVar5 + 2);
            iVar5 = iVar5 + 2;
            uVar4 = (uint)CONCAT11(*puVar1,*puVar2);
            if ((uVar4 != 0) && (uVar4 = uVar4 + *(int *)(in_EAX + 0x30) & 0xffff, uVar4 != 0)) {
LAB_0069d7e5:
              *(uint *)(in_EAX + 0x18) = uVar6;
              *(uint *)(in_EAX + 0x1c) = uVar4;
              return;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 <= uVar3);
        }
      }
      iVar5 = FUN_0069d600();
    } while (-1 < iVar5);
  }
  *(undefined4 *)(in_EAX + 0x18) = 0xffffffff;
  *(undefined4 *)(in_EAX + 0x1c) = 0;
  return;
}


/* FUN_0069f380 @ 0069f380  kind=gamemisc  attributed-by=none  size=191 */

void FUN_0069f380(void)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBX;
  uint uVar4;
  uint local_4;
  
  if (*(int *)(unaff_EBX + 0x1c) != -1) {
    uVar4 = *(uint *)(unaff_EBX + 0x24);
    local_4 = *(int *)(unaff_EBX + 0x1c) + 1;
    if (uVar4 < *(uint *)(unaff_EBX + 0x28)) {
      puVar1 = (undefined1 *)(*(int *)(unaff_EBX + 0x10) + 0x15 + uVar4 * 0xc);
      do {
        uVar2 = CONCAT31(CONCAT21(CONCAT11(puVar1[-5],puVar1[-4]),puVar1[-3]),puVar1[-2]);
        iVar3 = CONCAT31(CONCAT21(CONCAT11(puVar1[3],puVar1[4]),puVar1[5]),puVar1[6]);
        if (local_4 < uVar2) {
          local_4 = uVar2;
        }
        if ((local_4 <= CONCAT31(CONCAT21(CONCAT11(puVar1[-1],*puVar1),puVar1[1]),puVar1[2])) &&
           (iVar3 != 0)) {
          *(uint *)(unaff_EBX + 0x24) = uVar4;
          *(uint *)(unaff_EBX + 0x1c) = local_4;
          *(int *)(unaff_EBX + 0x20) = iVar3;
          return;
        }
        uVar4 = uVar4 + 1;
        puVar1 = puVar1 + 0xc;
      } while (uVar4 < *(uint *)(unaff_EBX + 0x28));
    }
  }
  *(undefined1 *)(unaff_EBX + 0x18) = 0;
  return;
}


/* FUN_0069fa90 @ 0069fa90  kind=gamemisc  attributed-by=none  size=108 */

undefined4 FUN_0069fa90(void)

{
  uint uVar1;
  uint uVar2;
  undefined1 *in_EDX;
  uint unaff_EBX;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar3 = CONCAT31(CONCAT21(CONCAT11(*in_EDX,in_EDX[1]),in_EDX[2]),in_EDX[3]);
  if (uVar3 != 0) {
    do {
      uVar2 = uVar3 + uVar4 >> 1;
      uVar1 = (uint)CONCAT21(CONCAT11(in_EDX[uVar2 * 4 + 4],in_EDX[uVar2 * 4 + 5]),
                             in_EDX[uVar2 * 4 + 6]);
      if (uVar1 <= unaff_EBX) {
        if (unaff_EBX <= (byte)in_EDX[uVar2 * 4 + 7] + uVar1) {
          return 1;
        }
        uVar4 = uVar2 + 1;
        uVar2 = uVar3;
      }
      uVar3 = uVar2;
    } while (uVar4 < uVar2);
  }
  return 0;
}


/* FUN_0069fb00 @ 0069fb00  kind=gamemisc  attributed-by=none  size=127 */

undefined2 FUN_0069fb00(uint param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *in_EAX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  uVar5 = CONCAT31(CONCAT21(CONCAT11(*in_EAX,in_EAX[1]),in_EAX[2]),in_EAX[3]);
  if (uVar5 != 0) {
    do {
      uVar4 = uVar5 + uVar6 >> 1;
      iVar2 = uVar4 * 4 + 4;
      puVar1 = in_EAX + uVar4 + 3 + iVar2;
      uVar3 = (uint)CONCAT21(CONCAT11(puVar1[-3],in_EAX[uVar4 + 1 + iVar2]),puVar1[-1]);
      if (uVar3 <= param_1) {
        if (param_1 <= uVar3) {
          return CONCAT11(*puVar1,puVar1[1]);
        }
        uVar6 = uVar4 + 1;
        uVar4 = uVar5;
      }
      uVar5 = uVar4;
    } while (uVar6 < uVar4);
  }
  return 0;
}


/* FUN_0069ff10 @ 0069ff10  kind=gamemisc  attributed-by=none  size=55 */

int FUN_0069ff10(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 *in_EDX;
  byte *pbVar4;
  
  iVar2 = 0;
  pbVar4 = in_EDX + 7;
  for (iVar3 = CONCAT31(CONCAT21(CONCAT11(*in_EDX,in_EDX[1]),in_EDX[2]),in_EDX[3]); iVar3 != 0;
      iVar3 = iVar3 + -1) {
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 4;
    iVar2 = iVar2 + 1 + (uint)bVar1;
  }
  return iVar2;
}


/* FUN_006a03d0 @ 006a03d0  kind=gamemisc  attributed-by=none  size=584 */

void FUN_006a03d0(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  int local_94;
  undefined4 local_90;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined1 *local_88;
  uint local_84;
  int local_80;
  undefined4 local_7c;
  undefined **local_78;
  undefined *local_74;
  int local_70;
  undefined1 *local_6c;
  undefined **local_68;
  undefined **local_64;
  undefined **local_60;
  undefined1 local_5c [12];
  int local_50;
  undefined1 local_4c [64];
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&local_78;
  local_88 = *(undefined1 **)(param_1 + 500);
  local_78 = (undefined **)(local_88 + *(int *)(param_1 + 0x1f8));
  local_70 = param_1;
  if (((local_88 == (undefined1 *)0x0) || (local_78 < local_88 + 4)) ||
     (CONCAT11(*local_88,local_88[1]) != 0)) {
    local_60 = (undefined **)local_88;
    __security_check_cookie(DAT_0076aa78);
    return;
  }
  local_68 = (undefined **)(uint)CONCAT11(local_88[2],local_88[3]);
  ppuVar2 = (undefined **)(local_88 + 4);
  ppuVar4 = local_68;
  iVar1 = param_1;
  iVar3 = local_94;
  do {
    local_94 = iVar1;
    local_70 = local_94;
    if ((local_68 == (undefined **)0x0) || (local_78 < ppuVar2 + 2)) {
      local_94 = iVar3;
      local_60 = ppuVar2;
      __security_check_cookie(local_8 ^ (uint)&local_78,ppuVar4);
      return;
    }
    local_8c = CONCAT11(*(undefined1 *)ppuVar2,*(undefined1 *)((int)ppuVar2 + 1));
    local_8a = CONCAT11(*(undefined1 *)((int)ppuVar2 + 2),*(undefined1 *)((int)ppuVar2 + 3));
    local_90 = 0;
    local_60 = ppuVar2 + 2;
    ppuVar2 = (undefined **)
              CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(ppuVar2 + 1),
                                         *(undefined1 *)((int)ppuVar2 + 5)),
                                *(undefined1 *)((int)ppuVar2 + 6)),*(undefined1 *)((int)ppuVar2 + 7)
                      );
    ppuVar4 = local_60;
    if ((ppuVar2 != (undefined **)0x0) &&
       (ppuVar4 = (undefined **)(*(int *)(local_94 + 0x1f8) + -2), ppuVar2 <= ppuVar4)) {
      local_6c = (undefined1 *)((int)ppuVar2 + (int)local_88);
      local_84 = (uint)CONCAT11(*local_6c,local_6c[1]);
      local_64 = &PTR_DAT_007238ec;
      do {
        local_74 = *local_64;
        if (*(uint *)(local_74 + 0x28) == local_84) {
          local_7c = 0;
          FUN_0068f170(local_5c,local_6c,local_78,0);
          local_c = (uint)*(ushort *)(local_70 + 0x108);
          iVar3 = setjmp3(local_4c,0);
          if (iVar3 == 0) {
            local_7c = (**(code **)(local_74 + 0x2c))(local_6c,local_5c);
          }
          ppuVar4 = local_64;
          if ((local_50 == 0) &&
             (iVar3 = FUN_00693ed0(local_74,local_6c,&local_94,&local_80), ppuVar4 = local_64,
             iVar3 == 0)) {
            *(undefined4 *)(local_80 + 0x14) = local_7c;
          }
          break;
        }
        ppuVar4 = local_64 + 1;
        local_64 = ppuVar4;
      } while (*ppuVar4 != (undefined *)0x0);
    }
    local_68 = (undefined **)((int)local_68 + -1);
    ppuVar2 = local_60;
    iVar1 = local_70;
    iVar3 = local_94;
  } while( true );
}


/* FUN_006a0a80 @ 006a0a80  kind=gamemisc  attributed-by=none  size=115 */

int FUN_006a0a80(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x10);
  uVar6 = (uint)(*(ushort *)(param_1 + 8) >> 1);
  iVar3 = FUN_00693a60(param_2,1,0,uVar6 + 1,0,&param_1);
  if (param_1 == 0) {
    uVar5 = 0;
    if (uVar6 != 0) {
      iVar7 = iVar7 + -1;
      do {
        puVar1 = (undefined1 *)(iVar7 + 1);
        puVar2 = (undefined1 *)(iVar7 + 2);
        iVar7 = iVar7 + 2;
        uVar4 = CONCAT11(*puVar1,*puVar2);
        if ((uVar4 < 0x20) || (0x7f < uVar4)) {
          uVar4 = 0x3f;
        }
        *(char *)(uVar5 + iVar3) = (char)uVar4;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar6);
    }
    *(undefined1 *)(uVar6 + iVar3) = 0;
    return iVar3;
  }
  return 0;
}


/* FUN_006a0b70 @ 006a0b70  kind=gamemisc  attributed-by=none  size=536 */

int FUN_006a0b70(short param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int in_EAX;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  undefined2 *puVar7;
  int iVar8;
  bool bVar9;
  int local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_14 = *(undefined4 *)(in_EAX + 100);
  puVar1 = *(undefined2 **)(in_EAX + 0x168);
  local_18 = 0;
  local_8 = -1;
  local_c = -1;
  iVar8 = -1;
  local_4 = -1;
  bVar9 = false;
  puVar7 = puVar1;
  if (*(ushort *)(in_EAX + 0x158) != 0) {
    iVar5 = 0;
    local_10 = (uint)*(ushort *)(in_EAX + 0x158);
    do {
      iVar2 = local_c;
      if ((puVar7[3] == param_1) && (puVar7[4] != 0)) {
        switch(*puVar7) {
        case 0:
        case 2:
          local_4 = iVar5;
          break;
        case 1:
          iVar2 = iVar5;
          if ((puVar7[2] != 0) && (iVar2 = local_c, puVar7[1] == 0)) {
            local_8 = iVar5;
          }
          break;
        case 3:
          if (((iVar8 == -1) || ((puVar7[2] & 0x3ff) == 9)) &&
             (((ushort)puVar7[1] < 2 || (puVar7[1] == 10)))) {
            bVar9 = (puVar7[2] & 0x3ff) == 9;
            iVar8 = iVar5;
          }
        }
      }
      local_c = iVar2;
      iVar5 = iVar5 + 1;
      puVar7 = puVar7 + 10;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
    local_10 = 0;
  }
  iVar5 = local_8;
  if (-1 < local_c) {
    iVar5 = local_c;
  }
  pcVar6 = (code *)0x0;
  if ((iVar8 < 0) || ((-1 < iVar5 && (!bVar9)))) {
    if (iVar5 < 0) {
      if (-1 < local_4) {
        puVar7 = puVar1 + local_4 * 10;
        goto LAB_006a0caa;
      }
    }
    else {
      puVar7 = puVar1 + iVar5 * 10;
      pcVar6 = (code *)&LAB_006a0b00;
    }
  }
  else {
    puVar7 = puVar1 + iVar8 * 10;
    if (((ushort)puVar1[iVar8 * 10 + 1] < 2) || (puVar1[iVar8 * 10 + 1] == 10)) {
LAB_006a0caa:
      pcVar6 = FUN_006a0a80;
    }
  }
  if (puVar7 == (undefined2 *)0x0) {
    *param_2 = 0;
    return 0;
  }
  if (pcVar6 != (code *)0x0) {
    if (*(int *)(puVar7 + 8) == 0) {
      uVar4 = *(undefined4 *)(in_EAX + 0x16c);
      uVar3 = FUN_00693a60(local_14,1,0,puVar7[4],0,&local_18);
      *(undefined4 *)(puVar7 + 8) = uVar3;
      if (((local_18 != 0) ||
          (local_18 = FUN_006908c0(uVar4,*(undefined4 *)(puVar7 + 6)), local_18 != 0)) ||
         (local_18 = FUN_00691ec0(uVar4,*(undefined4 *)(puVar7 + 8),puVar7[4]), local_18 != 0)) {
        FUN_00691290(local_14,*(undefined4 *)(puVar7 + 8));
        *(undefined4 *)(puVar7 + 8) = 0;
        puVar7[4] = 0;
        goto LAB_006a0d43;
      }
    }
    uVar4 = (*pcVar6)(puVar7,local_14);
    *param_2 = uVar4;
    return local_18;
  }
LAB_006a0d43:
  *param_2 = 0;
  return local_18;
}


/* FUN_006a0da0 @ 006a0da0  kind=gamemisc  attributed-by=none  size=38 */

int FUN_006a0da0(void)

{
  int *piVar1;
  int in_EDX;
  int unaff_ESI;
  
  piVar1 = &DAT_00723920;
  while ((*piVar1 != unaff_ESI || ((piVar1[1] != in_EDX && (piVar1[1] != -1))))) {
    piVar1 = piVar1 + 3;
    if (&UNK_007239a3 < piVar1) {
      return 0;
    }
  }
  return piVar1[2];
}


/* FUN_006a1ab0 @ 006a1ab0  kind=gamemisc  attributed-by=none  size=353 */

void FUN_006a1ab0(byte *param_1,int param_2,char param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int *in_EAX;
  byte *pbVar5;
  int in_ECX;
  int iVar6;
  byte bVar7;
  uint in_EDX;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint local_10;
  byte *local_c;
  int local_4;
  
  iVar1 = in_EAX[2];
  uVar10 = 0;
  iVar6 = in_EAX[3];
  if (iVar1 < 0) {
    iVar6 = iVar6 - (*in_EAX + -1) * iVar1;
  }
  local_c = (byte *)(((int)in_EDX >> 3) + iVar6 + iVar1 * param_4);
  local_10 = 0;
  if (0 < in_ECX) {
    bVar8 = (byte)in_EDX & 7;
    bVar4 = 8 - bVar8;
    local_4 = in_ECX;
    do {
      pbVar5 = local_c;
      iVar6 = param_2;
      if (7 < param_2) {
        iVar3 = param_2 + -8;
        iVar2 = -uVar10;
        do {
          iVar6 = iVar3;
          iVar9 = iVar2 + 8;
          if (uVar10 < 8) {
            bVar7 = *param_1;
            param_1 = param_1 + 1;
            uVar10 = uVar10 + 8;
            local_10 = (uint)(ushort)((ushort)local_10 | (ushort)bVar7 << ((byte)(iVar2 + 8) & 0x1f)
                                     );
            iVar9 = iVar2;
          }
          bVar7 = (byte)(local_10 >> 8);
          if ((in_EDX & 7) == 0) {
            *pbVar5 = *pbVar5 | bVar7;
          }
          else {
            *pbVar5 = *pbVar5 | bVar7 >> bVar8;
            pbVar5[1] = pbVar5[1] | bVar7 << (bVar4 & 0x1f);
          }
          local_10 = local_10 << 8;
          pbVar5 = pbVar5 + 1;
          uVar10 = uVar10 - 8;
          iVar3 = iVar6 + -8;
          iVar2 = iVar9;
        } while (-1 < iVar6 + -8);
      }
      if (0 < iVar6) {
        if ((int)uVar10 < iVar6) {
          bVar7 = *param_1;
          param_1 = param_1 + 1;
          local_10._0_2_ = (ushort)local_10 | (ushort)bVar7 << (8U - (char)uVar10 & 0x1f);
          uVar10 = uVar10 + 8;
        }
        bVar7 = ~(byte)(0xff >> ((byte)iVar6 & 0x1f)) & (byte)((ushort)local_10 >> 8);
        *pbVar5 = *pbVar5 | bVar7 >> bVar8;
        if ((int)(uint)bVar4 < iVar6) {
          pbVar5[1] = pbVar5[1] | bVar7 << (bVar4 & 0x1f);
        }
        local_10 = (uint)(ushort)((ushort)local_10 << ((byte)iVar6 & 0x1f));
        uVar10 = uVar10 - iVar6;
      }
      if (param_3 != '\0') {
        uVar10 = 0;
        local_10 = 0;
      }
      local_c = local_c + iVar1;
      local_4 = local_4 + -1;
    } while (0 < local_4);
  }
  return;
}


/* FUN_006a1c60 @ 006a1c60  kind=gamemisc  attributed-by=none  size=228 */

int FUN_006a1c60(char param_1)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int unaff_EBX;
  uint uVar6;
  int unaff_EDI;
  int local_8;
  int local_4;
  
  uVar4 = *(undefined4 *)(unaff_EBX + 0x1c);
  uVar2 = FUN_00690cd0();
  if (local_8 == 0) {
    *(uint *)(unaff_EDI + 0x18) = uVar2;
    if (param_1 == '\0') {
      local_4 = uVar2 * 2;
    }
    else {
      uVar3 = FUN_00693a60(uVar4,4,0,uVar2,0,&local_8);
      *(undefined4 *)(unaff_EDI + 0x1c) = uVar3;
      if (local_8 != 0) {
        return local_8;
      }
      local_4 = uVar2 * 4;
    }
    uVar4 = FUN_00693a60(uVar4,2,0,uVar2,0,&local_8);
    *(undefined4 *)(unaff_EDI + 0x20) = uVar4;
    if ((local_8 == 0) && (local_8 = FUN_00691f30(), local_8 == 0)) {
      uVar6 = 0;
      if (uVar2 != 0) {
        do {
          uVar1 = FUN_00690a40();
          *(undefined2 *)(*(int *)(unaff_EDI + 0x20) + uVar6 * 2) = uVar1;
          if (param_1 != '\0') {
            uVar5 = FUN_00690a40();
            *(uint *)(*(int *)(unaff_EDI + 0x1c) + uVar6 * 4) =
                 (uVar5 & 0xffff) + *(int *)(unaff_EDI + 8);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar2);
      }
      FUN_00691fe0();
    }
  }
  return local_8;
}


/* FUN_006a1d50 @ 006a1d50  kind=gamemisc  attributed-by=none  size=295 */

int FUN_006a1d50(void)

{
  ushort uVar1;
  int in_EAX;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ushort *in_ECX;
  uint uVar5;
  uint uVar6;
  int local_4;
  
  uVar1 = in_ECX[2];
  uVar2 = *(undefined4 *)(in_EAX + 0x1c);
  switch(uVar1) {
  case 1:
  case 3:
    if (*in_ECX <= in_ECX[1]) {
      iVar4 = (uint)in_ECX[1] - (uint)*in_ECX;
      *(int *)(in_ECX + 0xc) = iVar4 + 1;
      uVar5 = iVar4 + 2;
      uVar2 = FUN_00693a60(uVar2,4,0,uVar5,0,&local_4);
      *(undefined4 *)(in_ECX + 0xe) = uVar2;
      if (local_4 != 0) {
        return local_4;
      }
      iVar4 = FUN_00691f30();
      if (iVar4 != 0) {
        return iVar4;
      }
      uVar6 = 0;
      local_4 = 0;
      if (uVar5 != 0) {
        do {
          if (uVar1 == 1) {
            uVar3 = FUN_00690aa0();
          }
          else {
            uVar3 = FUN_00690a40();
            uVar3 = uVar3 & 0xffff;
          }
          *(uint *)(*(int *)(in_ECX + 0xe) + uVar6 * 4) = *(int *)(in_ECX + 4) + uVar3;
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar5);
      }
      FUN_00691fe0();
      return local_4;
    }
  default:
    local_4 = 3;
    break;
  case 2:
    iVar4 = FUN_006a1c20();
    return iVar4;
  case 4:
    iVar4 = FUN_006a1c60(1);
    return iVar4;
  case 5:
    local_4 = FUN_006a1c20();
    if (local_4 == 0) {
      iVar4 = FUN_006a1c60(0);
      return iVar4;
    }
  }
  return local_4;
}


/* FUN_006a22d0 @ 006a22d0  kind=gamemisc  attributed-by=none  size=261 */

undefined4 FUN_006a22d0(undefined4 *param_1,int *param_2)

{
  ushort *puVar1;
  int *in_ECX;
  uint uVar2;
  ushort *puVar3;
  uint unaff_EDI;
  
  if ((*(ushort *)(in_ECX + 10) <= unaff_EDI) && (unaff_EDI <= *(ushort *)((int)in_ECX + 0x2a))) {
    puVar1 = (ushort *)in_ECX[1];
    puVar3 = puVar1 + *in_ECX * 0x14;
    if (puVar1 != (ushort *)0x0) {
      for (; puVar1 < puVar3; puVar1 = puVar1 + 0x14) {
        if ((*puVar1 <= unaff_EDI) && (unaff_EDI <= puVar1[1])) {
          uVar2 = (uint)(ushort)((short)unaff_EDI - *puVar1);
          switch(puVar1[2]) {
          case 1:
          case 3:
            *param_2 = *(int *)(*(int *)(puVar1 + 0xe) + uVar2 * 4);
            *param_1 = puVar1;
            return 0;
          case 2:
            *param_2 = uVar2 * *(int *)(puVar1 + 6) + *(int *)(puVar1 + 4);
            *param_1 = puVar1;
            return 0;
          case 4:
          case 5:
            uVar2 = 0;
            if (*(uint *)(puVar1 + 0xc) != 0) {
              puVar3 = *(ushort **)(puVar1 + 0x10);
              do {
                if (*puVar3 == unaff_EDI) {
                  if (puVar1[2] != 4) {
                    *param_2 = *(int *)(puVar1 + 6) * uVar2 + *(int *)(puVar1 + 4);
                    *param_1 = puVar1;
                    return 0;
                  }
                  *param_2 = *(int *)(*(int *)(puVar1 + 0xe) + uVar2 * 4);
                  *param_1 = puVar1;
                  return 0;
                }
                uVar2 = uVar2 + 1;
                puVar3 = puVar3 + 1;
              } while (uVar2 < *(uint *)(puVar1 + 0xc));
            }
          }
          break;
        }
      }
    }
  }
  *param_1 = 0;
  *param_2 = 0;
  return 6;
}


/* FUN_006a23f0 @ 006a23f0  kind=gamemisc  attributed-by=none  size=111 */

undefined4
FUN_006a23f0(int param_1,undefined4 param_2,uint param_3,undefined4 *param_4,int *param_5,
            undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x268);
  if ((iVar1 != 0) && (param_3 < *(uint *)(param_1 + 0x264))) {
    iVar2 = FUN_006a22d0(param_4,param_6);
    if (iVar2 == 0) {
      *param_5 = param_3 * 0x30 + iVar1;
      return 0;
    }
  }
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  return 6;
}


/* FUN_006a2460 @ 006a2460  kind=gamemisc  attributed-by=none  size=172 */

int FUN_006a2460(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  
  iVar1 = 0;
  switch(*(undefined2 *)(param_2 + 6)) {
  case 1:
  case 2:
  case 8:
    iVar1 = FUN_00692010(param_1,&DAT_00723b4c,&local_8);
    if (iVar1 == 0) {
      *(undefined1 *)param_3 = local_8;
      *(undefined1 *)((int)param_3 + 1) = local_7;
      *(undefined1 *)((int)param_3 + 2) = local_6;
      *(undefined1 *)((int)param_3 + 3) = local_5;
      *(undefined1 *)(param_3 + 1) = local_4;
      *(undefined2 *)((int)param_3 + 5) = 0;
      *(undefined1 *)((int)param_3 + 7) = 0;
      return 0;
    }
    break;
  default:
    if ((*(short *)(param_2 + 4) != 2) && (*(short *)(param_2 + 4) != 5)) {
      return 3;
    }
    *param_3 = *(undefined4 *)(param_2 + 0x10);
    param_3[1] = *(undefined4 *)(param_2 + 0x14);
    break;
  case 6:
  case 7:
  case 9:
    iVar1 = FUN_00692010();
    return iVar1;
  }
  return iVar1;
}


/* FUN_006a2530 @ 006a2530  kind=gamemisc  attributed-by=none  size=437 */

void FUN_006a2530(char *param_1)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  byte *pbVar5;
  byte bVar6;
  int *unaff_EBX;
  int iVar7;
  byte *pbVar8;
  char *pcVar9;
  char *pcVar10;
  byte *pbVar11;
  int iVar12;
  int local_c;
  
  iVar7 = *unaff_EBX;
  pcVar9 = (char *)unaff_EBX[3];
  iVar2 = unaff_EBX[2];
  local_c = 0;
  pcVar4 = pcVar9;
  if (iVar7 < 1) {
LAB_006a2585:
    unaff_EBX[1] = 0;
    *unaff_EBX = 0;
    unaff_EBX[2] = 0;
    *(undefined1 *)((int)unaff_EBX + 0x12) = 1;
    return;
  }
  do {
    pcVar10 = pcVar4 + iVar2;
    for (; pcVar4 < pcVar10; pcVar4 = pcVar4 + 1) {
      if (*pcVar4 != '\0') {
        if (iVar7 <= local_c) goto LAB_006a2585;
        if (0 < local_c) {
          iVar7 = iVar7 - local_c;
          memmove(pcVar9,pcVar9 + local_c * iVar2,iVar7 * iVar2);
          cVar3 = (char)local_c;
          *param_1 = *param_1 - cVar3;
          param_1[3] = param_1[3] - cVar3;
          param_1[6] = param_1[6] - cVar3;
          *unaff_EBX = *unaff_EBX - local_c;
        }
        pcVar9 = (char *)((iVar7 + -1) * iVar2 + unaff_EBX[3]);
        local_c = 0;
        if (iVar7 < 1) goto LAB_006a2616;
        pcVar4 = pcVar9 + iVar2;
        pcVar10 = pcVar9;
        goto joined_r0x006a25e9;
      }
    }
    local_c = local_c + 1;
    pcVar4 = pcVar10;
    if (iVar7 <= local_c) {
      unaff_EBX[1] = 0;
      *unaff_EBX = 0;
      unaff_EBX[2] = 0;
      *(undefined1 *)((int)unaff_EBX + 0x12) = 1;
      return;
    }
  } while( true );
joined_r0x006a25e9:
  if (pcVar9 < pcVar4) {
    if (*pcVar9 != '\0') goto LAB_006a2608;
    pcVar9 = pcVar9 + 1;
    goto joined_r0x006a25e9;
  }
  local_c = local_c + 1;
  pcVar9 = pcVar10 + -iVar2;
  pcVar4 = pcVar4 + -iVar2;
  pcVar10 = pcVar9;
  if (iVar7 <= local_c) {
LAB_006a2608:
    if (0 < local_c) {
      *param_1 = *param_1 - (char)local_c;
      iVar7 = iVar7 - local_c;
      *unaff_EBX = *unaff_EBX - local_c;
    }
LAB_006a2616:
    iVar7 = iVar2 * iVar7;
    do {
      pbVar8 = (byte *)unaff_EBX[3];
      for (pbVar5 = pbVar8; pbVar5 < pbVar8 + iVar7; pbVar5 = pbVar5 + iVar2) {
        if ((*pbVar5 & 0x80) != 0) goto LAB_006a269b;
      }
      pbVar5 = pbVar8 + iVar7;
      for (; pbVar8 < pbVar5; pbVar8 = pbVar8 + iVar2) {
        bVar6 = *pbVar8 * '\x02';
        pbVar11 = pbVar8;
        if (8 < unaff_EBX[1]) {
          iVar12 = (unaff_EBX[1] - 9U >> 3) + 1;
          do {
            pbVar1 = pbVar11 + 1;
            *pbVar11 = *pbVar1 >> 7 | bVar6;
            pbVar11 = pbVar11 + 1;
            iVar12 = iVar12 + -1;
            bVar6 = *pbVar1 * '\x02';
          } while (iVar12 != 0);
        }
        *pbVar11 = bVar6;
      }
      unaff_EBX[1] = unaff_EBX[1] + -1;
      param_1[2] = param_1[2] + '\x01';
      param_1[5] = param_1[5] + '\x01';
      param_1[1] = param_1[1] + -1;
    } while (0 < unaff_EBX[1]);
LAB_006a269b:
    iVar12 = unaff_EBX[1];
    do {
      iVar12 = iVar12 + -1;
      pbVar5 = (byte *)((iVar12 >> 3) + unaff_EBX[3]);
      pbVar8 = pbVar5 + iVar7;
      for (; pbVar5 < pbVar8; pbVar5 = pbVar5 + iVar2) {
        if ((*pbVar5 & (byte)(0x80 >> ((byte)iVar12 & 7))) != 0) {
          return;
        }
      }
      unaff_EBX[1] = iVar12;
      param_1[1] = param_1[1] + -1;
      iVar12 = unaff_EBX[1];
    } while (0 < iVar12);
    return;
  }
  goto joined_r0x006a25e9;
}


/* FUN_006a26f0 @ 006a26f0  kind=gamemisc  attributed-by=none  size=282 */

int FUN_006a26f0(int *param_1,int param_2,int param_3,undefined2 param_4,byte *param_5,int param_6)

{
  uint uVar1;
  int unaff_EBX;
  uint uVar2;
  int iVar3;
  
  if ((((param_2 < 0) || (uVar1 = (uint)param_5[1], param_1[1] < (int)(uVar1 + param_2))) ||
      (param_3 < 0)) || (uVar2 = (uint)*param_5, *param_1 < (int)(uVar2 + param_3))) {
    iVar3 = 6;
  }
  else {
    param_2 = 0;
    switch(param_4) {
    case 1:
    case 6:
      if (unaff_EBX == 1) {
        iVar3 = ((int)(uVar1 + 7) >> 3) * uVar2;
        param_2 = 1;
      }
      else if (unaff_EBX == 2) {
        iVar3 = ((int)(uVar1 + 3) >> 2) * uVar2;
        param_2 = 1;
      }
      else if (unaff_EBX == 4) {
        iVar3 = ((int)(uVar1 + 1) >> 1) * uVar2;
        param_2 = 1;
      }
      else {
        iVar3 = uVar1 * uVar2;
        param_2 = 1;
      }
      break;
    case 2:
    case 5:
    case 7:
      iVar3 = (int)(uVar1 * unaff_EBX * uVar2 + 7) >> 3;
      break;
    default:
      return 3;
    }
    iVar3 = FUN_00691f30(param_6,iVar3);
    if (iVar3 == 0) {
      FUN_006a1ab0(*(undefined4 *)(param_6 + 0x20),uVar1 * unaff_EBX,param_2,param_3);
      FUN_00691fe0(param_6);
      return 0;
    }
  }
  return iVar3;
}


/* FUN_006a2820 @ 006a2820  kind=gamemisc  attributed-by=none  size=691 */

int FUN_006a2820(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
                ,int param_8,byte *param_9,int param_10)

{
  uint *puVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined1 uVar4;
  ushort uVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  undefined1 *puVar12;
  uint local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8 [8];
  
  iVar8 = param_8;
  uVar2 = *(undefined4 *)(param_8 + 0x1c);
  puVar1 = (uint *)(param_5 + 0x4c);
  param_8 = FUN_006908c0(param_8,param_3 + param_4);
  pbVar3 = param_9;
  if (param_8 != 0) {
    return param_8;
  }
  iVar7 = FUN_006a2460(iVar8,param_2,param_9);
  if (iVar7 != 0) {
    return iVar7;
  }
  param_8 = 0;
  if (param_10 != 0) goto LAB_006a2904;
  *(uint *)(param_5 + 0x50) = (uint)pbVar3[1];
  *puVar1 = (uint)*pbVar3;
  switch(*(undefined1 *)(param_1 + 0x2e)) {
  case 1:
    *(undefined1 *)(param_5 + 0x5e) = 1;
    *(int *)(param_5 + 0x54) = *(int *)(param_5 + 0x50) + 7 >> 3;
    break;
  case 2:
    *(undefined1 *)(param_5 + 0x5e) = 3;
    iVar9 = *(int *)(param_5 + 0x50) + 3 >> 2;
    goto LAB_006a28dd;
  default:
    goto switchD_006a289f_caseD_3;
  case 4:
    *(undefined1 *)(param_5 + 0x5e) = 4;
    *(int *)(param_5 + 0x54) = *(int *)(param_5 + 0x50) + 1 >> 1;
    break;
  case 8:
    iVar9 = *(int *)(param_5 + 0x50);
    *(undefined1 *)(param_5 + 0x5e) = 2;
LAB_006a28dd:
    *(int *)(param_5 + 0x54) = iVar9;
  }
  iVar9 = *puVar1 * *(int *)(param_5 + 0x54);
  if ((iVar9 != 0) && (param_8 = iVar7, param_8 = FUN_00692520(param_5,iVar9), param_8 == 0)) {
LAB_006a2904:
    switch(*(undefined2 *)(param_2 + 6)) {
    case 1:
    case 2:
    case 5:
    case 6:
    case 7:
      iVar8 = FUN_006a26f0(puVar1,param_6,param_7,*(undefined2 *)(param_2 + 6),pbVar3,iVar8);
      return iVar8;
    default:
switchD_006a289f_caseD_3:
      param_8 = 3;
      break;
    case 8:
      param_8 = FUN_00690900(iVar8,1);
      if (param_8 != 0) {
        return 0x53;
      }
    case 9:
      uVar5 = FUN_00690b80(iVar8,&param_8);
      local_18 = (uint)uVar5;
      if ((param_8 == 0) && (iVar7 = FUN_00693a60(uVar2,4,0,local_18,0,&param_8), param_8 == 0)) {
        param_8 = FUN_00691f30(iVar8,local_18 * 4);
        if (param_8 == 0) {
          if (uVar5 != 0) {
            puVar12 = (undefined1 *)(iVar7 + 3);
            uVar10 = local_18;
            do {
              uVar6 = FUN_00690a40(iVar8);
              *(undefined2 *)(puVar12 + -3) = uVar6;
              uVar4 = FUN_00690a20(iVar8);
              puVar12[-1] = uVar4;
              uVar4 = FUN_00690a20(iVar8);
              *puVar12 = uVar4;
              uVar10 = uVar10 + 0xffff;
              puVar12 = puVar12 + 4;
            } while ((short)uVar10 != 0);
          }
          FUN_00691fe0(iVar8);
          if (uVar5 != 0) {
            pcVar11 = (char *)(iVar7 + 2);
            iVar9 = param_8;
            do {
              param_8 = iVar9;
              param_8 = FUN_006a22d0(&local_c,&local_10);
              if ((param_8 != 0) ||
                 (param_8 = FUN_006a2820(param_1,local_c,param_3,local_10,param_5,*pcVar11 + param_6
                                         ,pcVar11[1] + param_7,iVar8,local_8,param_10 + 1),
                 param_8 != 0)) break;
              local_18 = local_18 + 0xffff;
              pcVar11 = pcVar11 + 4;
              iVar9 = 0;
            } while ((short)local_18 != 0);
          }
        }
        FUN_00691290(uVar2,iVar7);
        return param_8;
      }
    }
  }
  return param_8;
}


/* FUN_006a2c30 @ 006a2c30  kind=gamemisc  attributed-by=none  size=533 */

int FUN_006a2c30(int param_1,int param_2)

{
  int *piVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int local_18;
  undefined4 local_14;
  undefined4 *local_10;
  int local_c;
  uint local_8;
  uint local_4;
  
  uVar11 = *(undefined4 *)(param_2 + 0x1c);
  local_10 = (undefined4 *)0x0;
  local_14 = uVar11;
  uVar3 = FUN_00690b80(param_2,&local_18);
  uVar3 = uVar3 & 0xffff;
  if (local_18 != 0) {
    return local_18;
  }
  if (*(ushort *)(param_1 + 0x108) < uVar3) {
    return 3;
  }
  local_8 = uVar3;
  iVar4 = FUN_00693a60(uVar11,2,0,uVar3,0,&local_18);
  local_c = iVar4;
  if ((local_18 == 0) && (local_18 = FUN_00691f30(param_2,uVar3 * 2), local_18 == 0)) {
    iVar9 = 0;
    if (uVar3 != 0) {
      do {
        uVar2 = FUN_00690a40(param_2);
        *(undefined2 *)(iVar4 + iVar9 * 2) = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)uVar3);
    }
    FUN_00691fe0(param_2);
    uVar8 = 0;
    iVar9 = 0;
    if (uVar3 != 0) {
      do {
        uVar5 = (uint)*(ushort *)(iVar4 + iVar9 * 2);
        if ((0x101 < uVar5) && (uVar5 = uVar5 - 0x101, (int)uVar8 < (int)uVar5)) {
          uVar8 = uVar5 & 0xffff;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)uVar3);
    }
    local_4 = uVar8;
    local_10 = (undefined4 *)FUN_00693a60(local_14,4,0,uVar8,0,&local_18);
    uVar11 = local_14;
    if (local_18 == 0) {
      uVar7 = (ushort)uVar8;
      if (uVar7 != 0) {
        uVar6 = 0;
        do {
          uVar8 = FUN_00690b20(param_2,&local_18);
          uVar8 = uVar8 & 0xff;
          puVar10 = local_10;
          uVar3 = local_4;
          if (local_18 != 0) goto LAB_006a2e00;
          iVar4 = FUN_00693a60(local_14,1,0,uVar8 + 1,0,&local_18);
          piVar1 = local_10 + uVar6;
          *piVar1 = iVar4;
          puVar10 = local_10;
          uVar3 = local_4;
          if ((local_18 != 0) ||
             (local_18 = FUN_00691ec0(param_2,iVar4,uVar8), puVar10 = local_10, uVar3 = local_4,
             local_18 != 0)) goto LAB_006a2e00;
          uVar6 = uVar6 + 1;
          *(undefined1 *)(uVar8 + *piVar1) = 0;
          uVar3 = local_8;
        } while (uVar6 < uVar7);
      }
      *(short *)(param_1 + 0x278) = (short)uVar3;
      *(ushort *)(param_1 + 0x27a) = uVar7;
      *(int *)(param_1 + 0x27c) = local_c;
      *(undefined4 **)(param_1 + 0x280) = local_10;
      return 0;
    }
  }
LAB_006a2e24:
  FUN_00691290(uVar11,local_10);
  FUN_00691290(uVar11,iVar4);
  return local_18;
LAB_006a2e00:
  do {
    FUN_00691290(local_14,*puVar10);
    *puVar10 = 0;
    uVar3 = uVar3 - 1;
    iVar4 = local_c;
    puVar10 = puVar10 + 1;
    uVar11 = local_14;
  } while (uVar3 != 0);
  goto LAB_006a2e24;
}


/* FUN_006a2e50 @ 006a2e50  kind=gamemisc  attributed-by=none  size=194 */

int FUN_006a2e50(int param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_EBX;
  uint uVar6;
  int local_4;
  
  uVar1 = *(undefined4 *)(unaff_EBX + 0x1c);
  uVar2 = FUN_00690b80();
  uVar6 = (uint)uVar2;
  if (local_4 == 0) {
    if ((uVar6 <= *(ushort *)(param_1 + 0x108)) && (uVar6 < 0x103)) {
      iVar3 = FUN_00693a60(uVar1,1,0,uVar6,0,&local_4);
      if (local_4 == 0) {
        local_4 = FUN_00691ec0();
        if (local_4 == 0) {
          iVar4 = 0;
          if (uVar6 != 0) {
            do {
              iVar5 = *(char *)(iVar4 + iVar3) + iVar4;
              if ((iVar5 < 0) || ((int)uVar6 < iVar5)) {
                local_4 = 3;
                goto LAB_006a2ef5;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < (int)uVar6);
          }
          *(int *)(param_1 + 0x27c) = iVar3;
          *(ushort *)(param_1 + 0x278) = uVar2;
          return 0;
        }
      }
LAB_006a2ef5:
      FUN_00691290(uVar1,iVar3);
      return local_4;
    }
    local_4 = 3;
  }
  return local_4;
}


/* FUN_006a2f20 @ 006a2f20  kind=gamemisc  attributed-by=none  size=120 */

int FUN_006a2f20(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  
  uVar1 = *(undefined4 *)(unaff_ESI + 0x68);
  iVar3 = (**(code **)(unaff_ESI + 0x1fc))();
  if (iVar3 == 0) {
    iVar2 = *(int *)(unaff_ESI + 0x1d4);
    iVar3 = FUN_00690900(uVar1,0x20);
    if (iVar3 == 0) {
      if (iVar2 == 0x20000) {
        iVar3 = FUN_006a2c30();
        *(undefined1 *)(unaff_ESI + 0x274) = 1;
        return iVar3;
      }
      if (iVar2 == 0x28000) {
        iVar3 = FUN_006a2e50();
        *(undefined1 *)(unaff_ESI + 0x274) = 1;
        return iVar3;
      }
      iVar3 = 3;
      *(undefined1 *)(unaff_ESI + 0x274) = 1;
    }
  }
  return iVar3;
}


/* FUN_006a30a0 @ 006a30a0  kind=gamemisc  attributed-by=none  size=289 */

undefined4 FUN_006a30a0(int param_1,uint param_2,undefined4 *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_2 < *(ushort *)(param_1 + 0x108)) {
    iVar2 = *(int *)(param_1 + 0x218);
    if (iVar2 == 0) {
      return 7;
    }
    uVar3 = (**(code **)(iVar2 + 0x10))(0);
    *param_3 = uVar3;
    iVar4 = *(int *)(param_1 + 0x1d4);
    if (iVar4 == 0x10000) {
      if (param_2 < 0x102) {
        uVar3 = (**(code **)(iVar2 + 0x10))(param_2);
        *param_3 = uVar3;
        return 0;
      }
    }
    else if (iVar4 == 0x20000) {
      if ((*(char *)(param_1 + 0x274) == '\0') && (iVar4 = FUN_006a2f20(), iVar4 != 0)) {
        return 0;
      }
      if (param_2 < *(ushort *)(param_1 + 0x278)) {
        uVar1 = *(ushort *)(*(int *)(param_1 + 0x27c) + param_2 * 2);
        if (0x101 < uVar1) {
          *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x280) + -0x408 + (uint)uVar1 * 4);
          return 0;
        }
        uVar3 = (**(code **)(iVar2 + 0x10))((uint)uVar1);
        *param_3 = uVar3;
        return 0;
      }
    }
    else if (iVar4 == 0x28000) {
      if ((*(char *)(param_1 + 0x274) == '\0') && (iVar4 = FUN_006a2f20(), iVar4 != 0)) {
        return 0;
      }
      if (param_2 < *(ushort *)(param_1 + 0x278)) {
        uVar3 = (**(code **)(iVar2 + 0x10))
                          (param_2 + (int)*(char *)(*(int *)(param_1 + 0x27c) + param_2));
        *param_3 = uVar3;
      }
    }
    return 0;
  }
  return 0x10;
}


/* FUN_006a3210 @ 006a3210  kind=gamemisc  attributed-by=none  size=446 */

undefined4 FUN_006a3210(undefined4 param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint local_10;
  
  piVar2 = (int *)(in_ECX + 0x318);
  *piVar2 = 0;
  *(undefined4 *)(in_ECX + 0x31c) = 0;
  *(undefined4 *)(in_ECX + 800) = 0;
  *(undefined4 *)(in_ECX + 0x324) = 0;
  *(undefined4 *)(in_ECX + 0x328) = 0;
  *(undefined4 *)(in_ECX + 0x32c) = 0;
  iVar4 = FUN_0069c050();
  if (((iVar4 != 0) || (local_10 < 8)) ||
     (iVar4 = FUN_00693a30(param_1,local_10,piVar2), iVar4 != 0)) {
    return 8;
  }
  puVar3 = (undefined1 *)*piVar2;
  *(undefined1 **)(in_ECX + 0x31c) = puVar3 + local_10;
  uVar9 = (uint)CONCAT11(puVar3[2],puVar3[3]);
  uVar6 = CONCAT31(CONCAT21(CONCAT11(puVar3[4],puVar3[5]),puVar3[6]),puVar3[7]);
  if (((CONCAT11(*puVar3,puVar3[1]) == 1) && (7 < uVar6)) &&
     ((uVar9 <= uVar6 - 8 >> 2 && (uVar6 + 1 <= local_10)))) {
    iVar7 = *piVar2 + 8;
    *(uint *)(in_ECX + 800) = *piVar2 + uVar6;
    iVar5 = 0;
    iVar8 = 0;
    iVar4 = iVar7 + uVar9 * 4;
    *(uint *)(in_ECX + 0x328) = uVar9;
    *(uint *)(in_ECX + 0x324) = local_10 - uVar6;
    if (1 < uVar9) {
      local_10 = (uVar9 - 2 >> 1) + 1;
      do {
        puVar3 = (undefined1 *)(iVar7 + 7);
        iVar5 = iVar5 + (uint)CONCAT11(*(undefined1 *)(iVar7 + 2),*(undefined1 *)(iVar7 + 3)) * 10;
        puVar1 = (undefined1 *)(iVar7 + 6);
        iVar7 = iVar7 + 8;
        uVar9 = uVar9 - 2;
        local_10 = local_10 + -1;
        iVar8 = iVar8 + (uint)CONCAT11(*puVar1,*puVar3) * 10;
      } while (local_10 != 0);
    }
    if (uVar9 != 0) {
      iVar4 = iVar4 + (uint)CONCAT11(*(undefined1 *)(iVar7 + 2),*(undefined1 *)(iVar7 + 3)) * 10;
    }
    if ((uint)(iVar8 + iVar5 + iVar4) <= *piVar2 + uVar6) {
      *(undefined1 *)(in_ECX + 0x32c) = 1;
      return 0;
    }
  }
  FUN_00691ee0(param_1,piVar2);
  *piVar2 = 0;
  *(undefined4 *)(in_ECX + 0x31c) = 0;
  *(undefined4 *)(in_ECX + 800) = 0;
  *(undefined4 *)(in_ECX + 0x324) = 0;
  *(undefined4 *)(in_ECX + 0x328) = 0;
  *(undefined4 *)(in_ECX + 0x32c) = 0;
  return 8;
}


/* FUN_006a33d0 @ 006a33d0  kind=gamemisc  attributed-by=none  size=543 */

int FUN_006a33d0(uint param_1,char *param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  void *pvVar10;
  char *pcVar11;
  int iVar12;
  uint _MaxCount;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  int local_c;
  int local_8;
  
  iVar7 = param_1;
  iVar9 = *(int *)(param_1 + 0x58);
  *param_3 = 0;
  if ((*(char *)(param_1 + 0x32c) != '\0') ||
     (local_c = FUN_006a3210(*(undefined4 *)(param_1 + 0x68)), local_c == 0)) {
    iVar12 = *(int *)(param_1 + 0x318);
    param_1 = *(int *)(param_1 + 0x328);
    local_8 = iVar12 + 8 + param_1 * 4;
    local_c = 6;
    if ((iVar9 != 0) && (param_2 != (char *)0x0)) {
      pcVar11 = param_2;
      do {
        cVar5 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar5 != '\0');
      if ((pcVar11 != param_2 + 1) && (param_1 != 0)) {
        iVar13 = iVar12 + 7;
        iVar12 = iVar12 + 6;
        while( true ) {
          puVar1 = (undefined1 *)(iVar12 + 2);
          puVar2 = (undefined1 *)(iVar13 + 4);
          puVar3 = (undefined1 *)(iVar13 + 2);
          puVar4 = (undefined1 *)(iVar12 + 4);
          iVar12 = iVar12 + 4;
          iVar13 = iVar13 + 4;
          uVar8 = (uint)CONCAT11(*puVar4,*puVar2);
          if (CONCAT11(*puVar1,*puVar3) == *(short *)(iVar9 + 0xe)) break;
          param_1 = param_1 + -1;
          local_8 = local_8 + uVar8 * 10;
          if (param_1 == 0) {
            return 6;
          }
        }
        if (uVar8 != 0) {
          pbVar15 = (byte *)(local_8 + 5);
          param_1 = uVar8;
          do {
            bVar6 = *pbVar15;
            if ((bVar6 & 0x10) == 0) goto switchD_006a355e_default;
            uVar8 = CONCAT31(CONCAT21(CONCAT11(pbVar15[-5],pbVar15[-4]),pbVar15[-3]),pbVar15[-2]);
            uVar14 = CONCAT31(CONCAT21(CONCAT11(pbVar15[1],pbVar15[2]),pbVar15[3]),pbVar15[4]);
            if (((*(uint *)(iVar7 + 0x324) <= uVar8) ||
                (_MaxCount = *(uint *)(iVar7 + 0x324) - uVar8,
                _MaxCount <= (uint)((int)pcVar11 - (int)(param_2 + 1)))) ||
               (iVar9 = strncmp(param_2,(char *)(*(int *)(iVar7 + 800) + uVar8),_MaxCount),
               iVar9 != 0)) goto switchD_006a355e_default;
            switch(bVar6 & 0xf) {
            case 0:
            case 1:
              if ((uVar14 < *(uint *)(iVar7 + 0x324)) &&
                 (pvVar10 = memchr((void *)(*(int *)(iVar7 + 800) + uVar14),0,
                                   *(uint *)(iVar7 + 0x324)), pvVar10 != (void *)0x0)) {
                *param_3 = 1;
                param_3[1] = *(int *)(iVar7 + 800) + uVar14;
                return 0;
              }
            default:
switchD_006a355e_default:
              pbVar15 = pbVar15 + 10;
              param_1 = param_1 - 1;
              if (param_1 == 0) {
                return 6;
              }
              break;
            case 2:
              *param_3 = 2;
              goto LAB_006a35df;
            case 3:
              *param_3 = 3;
LAB_006a35df:
              param_3[1] = uVar14;
              return 0;
            }
          } while( true );
        }
      }
    }
  }
  return local_c;
}


/* FUN_006a3910 @ 006a3910  kind=gamemisc  attributed-by=none  size=85 */

void FUN_006a3910(int param_1)

{
  int iVar1;
  int *unaff_EDI;
  
  if (param_1 == 0) {
    *unaff_EDI = 6;
    unaff_EDI[5] = 0x20;
    unaff_EDI[6] = 2;
  }
  else {
    *unaff_EDI = 0xc;
    unaff_EDI[5] = 0x100;
    unaff_EDI[6] = 0x32;
  }
  iVar1 = 1 << ((byte)*unaff_EDI & 0x1f);
  unaff_EDI[4] = *unaff_EDI + -6;
  unaff_EDI[1] = iVar1;
  unaff_EDI[3] = -iVar1;
  unaff_EDI[2] = iVar1 / 2;
  return;
}


/* FUN_006a3970 @ 006a3970  kind=gamemisc  attributed-by=none  size=166 */

undefined4 FUN_006a3970(void)

{
  uint *puVar1;
  int iVar2;
  int in_EAX;
  char unaff_BL;
  int unaff_ESI;
  
  if (*(int *)(in_EAX + 0x60) == 0) {
    iVar2 = *(int *)(in_EAX + 0x2c);
    *(int *)(in_EAX + 0x5c) = iVar2;
    *(int *)(in_EAX + 0x60) = iVar2;
    *(int *)(in_EAX + 0x2c) = iVar2 + 0x20;
  }
  if (*(uint *)(in_EAX + 0x28) <= *(uint *)(in_EAX + 0x2c)) {
    *(undefined4 *)(in_EAX + 0x30) = 0x62;
    return 1;
  }
  *(undefined4 *)(*(int *)(in_EAX + 0x5c) + 0xc) = 0;
  *(undefined4 *)(*(int *)(in_EAX + 0x5c) + 0x14) = 0;
  *(undefined4 *)(*(int *)(in_EAX + 0x5c) + 0x10) = 0;
  *(undefined4 *)(*(int *)(in_EAX + 0x5c) + 8) = *(undefined4 *)(in_EAX + 0x2c);
  *(undefined4 *)(*(int *)(in_EAX + 0x5c) + 4) = 0;
  *(undefined4 *)(*(int *)(in_EAX + 0x5c) + 0x1c) = 0;
  *(uint *)(*(int *)(in_EAX + 0x5c) + 0xc) = (uint)*(byte *)(in_EAX + 0xb8);
  if (unaff_ESI == 1) {
    puVar1 = (uint *)(*(int *)(in_EAX + 0x5c) + 0xc);
    *puVar1 = *puVar1 | 8;
    if (unaff_BL != '\0') {
      puVar1 = (uint *)(*(int *)(in_EAX + 0x5c) + 0xc);
      *puVar1 = *puVar1 | 0x20;
    }
  }
  else {
    if (unaff_ESI != 2) {
      *(undefined4 *)(in_EAX + 0x30) = 0x14;
      return 1;
    }
    if (unaff_BL != '\0') {
      puVar1 = (uint *)(*(int *)(in_EAX + 0x5c) + 0xc);
      *puVar1 = *puVar1 | 0x10;
    }
  }
  if (*(int *)(in_EAX + 100) == 0) {
    *(undefined4 *)(in_EAX + 100) = *(undefined4 *)(in_EAX + 0x5c);
  }
  *(int *)(in_EAX + 0x68) = unaff_ESI;
  *(undefined2 *)(in_EAX + 0x5a) = 1;
  return 0;
}


/* FUN_006a3a20 @ 006a3a20  kind=gamemisc  attributed-by=none  size=128 */

undefined4 FUN_006a3a20(char param_1)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = *(int *)(in_EAX + 0x2c) - *(int *)(*(int *)(in_EAX + 0x5c) + 8) >> 2;
  if (iVar1 < 0) {
    *(undefined4 *)(in_EAX + 0x30) = 99;
    return 1;
  }
  if (0 < iVar1) {
    *(int *)(*(int *)(in_EAX + 0x5c) + 0x10) = iVar1;
    if (param_1 != '\0') {
      iVar1 = *(int *)(in_EAX + 0x5c);
      if ((*(byte *)(iVar1 + 0xc) & 8) == 0) {
        *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 0x20;
      }
      else {
        *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 0x10;
      }
    }
    iVar1 = *(int *)(in_EAX + 0x5c);
    *(int *)(in_EAX + 0x5c) = *(int *)(in_EAX + 0x2c);
    *(int *)(in_EAX + 0x2c) = *(int *)(in_EAX + 0x2c) + 0x20;
    *(undefined4 *)(*(int *)(in_EAX + 0x5c) + 0x10) = 0;
    *(undefined4 *)(*(int *)(in_EAX + 0x5c) + 8) = *(undefined4 *)(in_EAX + 0x2c);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(in_EAX + 0x5c);
    *(short *)(in_EAX + 0x58) = *(short *)(in_EAX + 0x58) + 1;
  }
  if (*(uint *)(in_EAX + 0x28) <= *(uint *)(in_EAX + 0x2c)) {
    *(undefined4 *)(in_EAX + 0x30) = 0x62;
    return 1;
  }
  *(undefined1 *)(in_EAX + 0x5b) = 0;
  return 0;
}


/* FUN_006a3aa0 @ 006a3aa0  kind=gamemisc  attributed-by=none  size=99 */

uint FUN_006a3aa0(void)

{
  uint uVar1;
  int iVar2;
  int in_EDX;
  int iVar3;
  int unaff_ESI;
  
  uVar1 = *(uint *)(unaff_ESI + 0x34);
  iVar2 = *(int *)(unaff_ESI + 0x24) + uVar1 * -4;
  do {
    uVar1 = uVar1 - 1;
    if ((int)uVar1 < 0) goto LAB_006a3add;
  } while (in_EDX < *(int *)(iVar2 + uVar1 * 4));
  if (-1 < (int)uVar1) {
    iVar3 = in_EDX;
    if (in_EDX <= *(int *)(iVar2 + uVar1 * 4)) goto LAB_006a3b05;
    do {
      uVar1 = uVar1 - 1;
      in_EDX = *(int *)(iVar2 + 4 + uVar1 * 4);
      *(int *)(iVar2 + 4 + uVar1 * 4) = iVar3;
      iVar3 = in_EDX;
    } while (-1 < (int)uVar1);
  }
LAB_006a3add:
  *(int *)(unaff_ESI + 0x28) = *(int *)(unaff_ESI + 0x28) + -4;
  if (*(uint *)(unaff_ESI + 0x28) <= *(uint *)(unaff_ESI + 0x2c)) {
    *(undefined4 *)(unaff_ESI + 0x30) = 0x62;
    return CONCAT31((int3)(*(uint *)(unaff_ESI + 0x28) >> 8),1);
  }
  *(int *)(unaff_ESI + 0x34) = *(int *)(unaff_ESI + 0x34) + 1;
  uVar1 = *(int *)(unaff_ESI + 0x34) * 4;
  *(int *)(*(int *)(unaff_ESI + 0x24) + *(int *)(unaff_ESI + 0x34) * -4) = in_EDX;
LAB_006a3b05:
  return uVar1 & 0xffffff00;
}


/* FUN_006a3b10 @ 006a3b10  kind=gamemisc  attributed-by=none  size=171 */

undefined1 FUN_006a3b10(void)

{
  char cVar1;
  int in_EAX;
  ushort uVar2;
  int iVar3;
  
  uVar2 = *(ushort *)(in_EAX + 0x58);
  iVar3 = *(int *)(in_EAX + 0x60);
  if ((uVar2 < 2) || (iVar3 == 0)) {
    *(undefined4 *)(in_EAX + 0x60) = 0;
  }
  else if (uVar2 != 0) {
    while( true ) {
      if (uVar2 < 2) {
        *(undefined4 *)(iVar3 + 4) = 0;
      }
      else {
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 8) + *(int *)(iVar3 + 0x10) * 4;
      }
      if ((*(byte *)(iVar3 + 0xc) & 8) == 0) {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + *(int *)(iVar3 + 0x10) * 4 + -4;
        *(int *)(iVar3 + 0x14) = (*(int *)(iVar3 + 0x14) - *(int *)(iVar3 + 0x10)) + 1;
      }
      cVar1 = FUN_006a3aa0();
      if ((cVar1 != '\0') || (cVar1 = FUN_006a3aa0(), cVar1 != '\0')) break;
      iVar3 = *(int *)(iVar3 + 4);
      uVar2 = uVar2 - 1;
      if (uVar2 == 0) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}


/* FUN_006a3bc0 @ 006a3bc0  kind=gamemisc  attributed-by=none  size=96 */

void FUN_006a3bc0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  param_1[8] = param_1[4];
  iVar2 = param_1[2];
  iVar1 = (*param_1 + iVar2) / 2;
  param_1[2] = iVar1;
  iVar2 = (param_1[4] + iVar2) / 2;
  param_1[4] = (iVar1 + iVar2) / 2;
  param_1[9] = param_1[5];
  param_1[6] = iVar2;
  iVar2 = (param_1[1] + param_1[3]) / 2;
  iVar1 = (param_1[5] + param_1[3]) / 2;
  param_1[3] = iVar2;
  param_1[7] = iVar1;
  param_1[5] = (iVar2 + iVar1) / 2;
  return;
}


/* FUN_006a3c20 @ 006a3c20  kind=gamemisc  attributed-by=none  size=140 */

void FUN_006a3c20(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  param_1[0xc] = param_1[6];
  iVar2 = param_1[6] + 1 + param_1[4] >> 1;
  param_1[10] = iVar2;
  iVar1 = *param_1 + 1 + param_1[2] >> 1;
  iVar3 = param_1[4] + 1 + param_1[2] >> 1;
  iVar2 = iVar2 + 1 + iVar3 >> 1;
  param_1[2] = iVar1;
  param_1[8] = iVar2;
  iVar1 = iVar1 + 1 + iVar3 >> 1;
  param_1[6] = iVar2 + 1 + iVar1 >> 1;
  param_1[4] = iVar1;
  param_1[0xd] = param_1[7];
  iVar2 = param_1[7] + 1 + param_1[5] >> 1;
  iVar1 = param_1[1] + 1 + param_1[3] >> 1;
  param_1[0xb] = iVar2;
  iVar3 = param_1[5] + 1 + param_1[3] >> 1;
  param_1[3] = iVar1;
  iVar2 = iVar2 + 1 + iVar3 >> 1;
  iVar1 = iVar1 + 1 + iVar3 >> 1;
  param_1[9] = iVar2;
  param_1[5] = iVar1;
  param_1[7] = iVar2 + 1 + iVar1 >> 1;
  return;
}


/* FUN_006a3cb0 @ 006a3cb0  kind=gamemisc  attributed-by=none  size=375 */

uint FUN_006a3cb0(int param_1,uint param_2,int param_3,int param_4)

{
  uint in_EAX;
  int iVar1;
  int iVar2;
  byte bVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *unaff_ESI;
  int iVar8;
  int local_4;
  
  iVar4 = in_ECX - param_1;
  iVar8 = param_2 - in_EAX;
  if (((iVar8 < 1) || ((int)param_2 < param_3)) || (param_4 < (int)in_EAX)) {
    return in_EAX & 0xffffff00;
  }
  if ((int)in_EAX < param_3) {
    iVar1 = FUN_0068ea60(iVar4,param_3 - in_EAX,iVar8);
    param_1 = param_1 + iVar1;
    bVar3 = (byte)*unaff_ESI;
    param_3 = param_3 >> (bVar3 & 0x1f);
    uVar6 = 0;
  }
  else {
    bVar3 = (byte)*unaff_ESI;
    param_3 = (int)in_EAX >> (bVar3 & 0x1f);
    uVar6 = unaff_ESI[1] - 1 & in_EAX;
  }
  if (param_4 < (int)param_2) {
    param_4 = param_4 >> (bVar3 & 0x1f);
    uVar5 = 0;
  }
  else {
    param_4 = (int)param_2 >> (bVar3 & 0x1f);
    uVar5 = unaff_ESI[1] - 1 & param_2;
  }
  if ((int)uVar6 < 1) {
    if (*(char *)((int)unaff_ESI + 0x5b) != '\0') {
      unaff_ESI[0xb] = unaff_ESI[0xb] + -4;
      *(undefined1 *)((int)unaff_ESI + 0x5b) = 0;
    }
  }
  else {
    if (param_3 == param_4) goto LAB_006a3e1d;
    param_1 = param_1 + (int)((unaff_ESI[1] - uVar6) * iVar4) / iVar8;
    param_3 = param_3 + 1;
  }
  *(bool *)((int)unaff_ESI + 0x5b) = uVar5 == 0;
  if (*(char *)((int)unaff_ESI + 0x5a) != '\0') {
    *(int *)(unaff_ESI[0x17] + 0x14) = param_3;
    *(undefined1 *)((int)unaff_ESI + 0x5a) = 0;
  }
  iVar1 = (param_4 - param_3) + 1;
  uVar6 = unaff_ESI[0xb] + iVar1 * 4;
  if ((uint)unaff_ESI[10] <= uVar6) {
    unaff_ESI[0xc] = 0x62;
    return CONCAT31((int3)(uVar6 >> 8),1);
  }
  if (iVar4 < 1) {
    iVar2 = FUN_0068ea60(unaff_ESI[1],-iVar4,iVar8);
    iVar2 = -iVar2;
    iVar4 = -(unaff_ESI[1] * iVar4);
    local_4 = -1;
  }
  else {
    iVar2 = FUN_0068ea60(unaff_ESI[1],iVar4,iVar8);
    iVar4 = unaff_ESI[1] * iVar4;
    local_4 = 1;
  }
  piVar7 = (int *)unaff_ESI[0xb];
  param_2 = -iVar8;
  for (; 0 < iVar1; iVar1 = iVar1 + -1) {
    *piVar7 = param_1;
    param_1 = param_1 + iVar2;
    piVar7 = piVar7 + 1;
    param_2 = param_2 + iVar4 % iVar8;
    if (-1 < (int)param_2) {
      param_2 = param_2 - iVar8;
      param_1 = param_1 + local_4;
    }
  }
  unaff_ESI[0xb] = piVar7;
LAB_006a3e1d:
  return param_2 & 0xffffff00;
}


/* FUN_006a3e80 @ 006a3e80  kind=gamemisc  attributed-by=none  size=356 */

uint FUN_006a3e80(code *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *unaff_EDI;
  uint local_8;
  
  piVar5 = (int *)unaff_EDI[0xb];
  piVar1 = (int *)unaff_EDI[0xe];
  iVar3 = piVar1[in_EAX * 2 + 1];
  if (((int)param_2 <= piVar1[1]) && (iVar3 <= (int)param_3)) {
    uVar4 = -unaff_EDI[1] & piVar1[1];
    if ((int)param_3 < (int)uVar4) {
      uVar4 = param_3;
    }
    local_8 = param_2;
    if (((int)param_2 <= iVar3) &&
       (local_8 = unaff_EDI[1] + -1 + iVar3 & -unaff_EDI[1], param_2 = local_8,
       (ushort)((ushort)iVar3 & *(short *)(unaff_EDI + 1) - 1U) == 0)) {
      if (*(char *)((int)unaff_EDI + 0x5b) != '\0') {
        piVar5 = piVar5 + -1;
        *(undefined1 *)((int)unaff_EDI + 0x5b) = 0;
      }
      *piVar5 = piVar1[in_EAX * 2];
      piVar5 = piVar5 + 1;
      param_2 = local_8 + unaff_EDI[1];
    }
    if (*(char *)((int)unaff_EDI + 0x5a) != '\0') {
      *(int *)(unaff_EDI[0x17] + 0x14) = (int)local_8 >> ((byte)*unaff_EDI & 0x1f);
      *(undefined1 *)((int)unaff_EDI + 0x5a) = 0;
    }
    if ((int)param_2 <= (int)uVar4) {
      piVar6 = piVar1;
      if ((int *)unaff_EDI[10] <= piVar5 + ((int)(uVar4 - param_2) >> ((byte)*unaff_EDI & 0x1f)) + 1
         ) {
        unaff_EDI[0xb] = piVar5;
        unaff_EDI[0xc] = 0x62;
        return CONCAT31((int3)((uint)(in_EAX * 8) >> 8),1);
      }
      do {
        if ((int)uVar4 < (int)param_2) break;
        *(undefined1 *)((int)unaff_EDI + 0x5b) = 0;
        uVar2 = piVar6[1];
        if ((int)param_2 < (int)uVar2) {
          iVar3 = uVar2 - piVar6[in_EAX * 2 + 1];
          if (iVar3 < (int)unaff_EDI[5]) {
            piVar7 = piVar6 + in_EAX * -2;
            *piVar5 = (int)((*piVar6 - piVar6[in_EAX * 2]) * (param_2 - piVar6[in_EAX * 2 + 1])) /
                      iVar3 + piVar6[in_EAX * 2];
            param_2 = param_2 + unaff_EDI[1];
            piVar5 = piVar5 + 1;
          }
          else {
            (*param_1)(piVar6);
            piVar7 = piVar6 + in_EAX * 2;
          }
        }
        else {
          if (uVar2 == param_2) {
            *(undefined1 *)((int)unaff_EDI + 0x5b) = 1;
            *piVar5 = *piVar6;
            piVar5 = piVar5 + 1;
            param_2 = param_2 + unaff_EDI[1];
          }
          piVar7 = piVar6 + in_EAX * -2;
        }
        piVar6 = piVar7;
      } while (piVar1 <= piVar7);
    }
  }
  unaff_EDI[0xe] = unaff_EDI[0xe] + in_EAX * -8;
  unaff_EDI[0xb] = piVar5;
  return in_EAX * 8 & 0xffffff00;
}


/* FUN_006a3ff0 @ 006a3ff0  kind=gamemisc  attributed-by=none  size=102 */

void FUN_006a3ff0(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int in_EAX;
  int in_ECX;
  int in_EDX;
  
  iVar2 = *(int *)(param_1 + 0x38);
  *(int *)(iVar2 + 4) = -*(int *)(iVar2 + 4);
  *(int *)(iVar2 + 0xc) = -*(int *)(iVar2 + 0xc);
  *(int *)(iVar2 + 0x14) = -*(int *)(iVar2 + 0x14);
  if (2 < in_EAX) {
    *(int *)(iVar2 + 0x1c) = -*(int *)(iVar2 + 0x1c);
  }
  cVar1 = *(char *)(param_1 + 0x5a);
  FUN_006a3e80(param_2,-in_ECX,-in_EDX);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x5a) == '\0')) {
    *(int *)(*(int *)(param_1 + 0x5c) + 0x14) = -*(int *)(*(int *)(param_1 + 0x5c) + 0x14);
  }
  *(int *)(iVar2 + 4) = -*(int *)(iVar2 + 4);
  return;
}


/* FUN_006a4060 @ 006a4060  kind=gamemisc  attributed-by=none  size=306 */

undefined4 FUN_006a4060(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 0x68);
  if (iVar1 == 0) {
    if ((param_2 <= *(int *)(unaff_EDI + 0x4c)) && (*(int *)(unaff_EDI + 0x4c) <= param_2))
    goto LAB_006a412f;
  }
  else {
    if (iVar1 == 1) {
      uVar2 = *(uint *)(unaff_EDI + 0x4c);
      if ((int)uVar2 <= param_2) goto LAB_006a412f;
      cVar3 = FUN_006a3a20(*(int *)(unaff_EDI + 8) <=
                           (int)(uVar2 - (-*(int *)(unaff_EDI + 4) & uVar2)));
    }
    else {
      if ((iVar1 != 2) || (iVar1 = *(int *)(unaff_EDI + 0x4c), param_2 <= iVar1)) goto LAB_006a412f;
      cVar3 = FUN_006a3a20(*(int *)(unaff_EDI + 8) <=
                           (*(int *)(unaff_EDI + 4) + -1 + iVar1 & -*(int *)(unaff_EDI + 4)) - iVar1
                          );
    }
    if (cVar3 != '\0') {
      return 1;
    }
  }
  cVar3 = FUN_006a3970();
  if (cVar3 != '\0') {
    return 1;
  }
LAB_006a412f:
  if (*(int *)(unaff_EDI + 0x68) == 1) {
    cVar3 = FUN_006a3cb0(*(undefined4 *)(unaff_EDI + 0x48),param_2,*(undefined4 *)(unaff_EDI + 0x50)
                         ,*(undefined4 *)(unaff_EDI + 0x54));
    if (cVar3 != '\0') {
      return 1;
    }
  }
  else if ((*(int *)(unaff_EDI + 0x68) == 2) && (cVar3 = FUN_006a3e30(), cVar3 != '\0')) {
    return 1;
  }
  *(int *)(unaff_EDI + 0x4c) = param_2;
  *(undefined4 *)(unaff_EDI + 0x48) = param_1;
  return 0;
}


/* FUN_006a41a0 @ 006a41a0  kind=gamemisc  attributed-by=none  size=338 */

undefined4 FUN_006a41a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar6;
  int in_EAX;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  
  *(int *)(in_EAX + 0x38) = in_EAX + 0xbc;
  *(undefined4 *)(in_EAX + 0xcc) = *(undefined4 *)(in_EAX + 0x48);
  *(undefined4 *)(*(int *)(in_EAX + 0x38) + 0x14) = *(undefined4 *)(in_EAX + 0x4c);
  *(undefined4 *)(*(int *)(in_EAX + 0x38) + 8) = param_1;
  *(undefined4 *)(*(int *)(in_EAX + 0x38) + 0xc) = param_2;
  **(undefined4 **)(in_EAX + 0x38) = param_3;
  *(undefined4 *)(*(int *)(in_EAX + 0x38) + 4) = param_4;
  do {
    puVar2 = *(undefined4 **)(in_EAX + 0x38);
    uVar3 = puVar2[5];
    uVar4 = puVar2[1];
    uVar5 = *puVar2;
    uVar7 = uVar4;
    uVar9 = uVar3;
    if ((int)uVar3 <= (int)uVar4) {
      uVar7 = uVar3;
      uVar9 = uVar4;
    }
    if (((int)puVar2[3] < (int)uVar7) || ((int)uVar9 < (int)puVar2[3])) {
      FUN_006a3bc0(puVar2);
      *(int *)(in_EAX + 0x38) = *(int *)(in_EAX + 0x38) + 0x10;
    }
    else if (uVar3 == uVar4) {
      *(undefined4 **)(in_EAX + 0x38) = puVar2 + -4;
    }
    else {
      iVar1 = ((int)uVar4 <= (int)uVar3) + 1;
      if (*(int *)(in_EAX + 0x68) != iVar1) {
        iVar8 = *(int *)(in_EAX + 4);
        if (iVar1 == 1) {
          iVar8 = (iVar8 + -1 + uVar3 & -iVar8) - uVar3;
          bVar10 = SBORROW4(iVar8,*(int *)(in_EAX + 8));
          iVar8 = iVar8 - *(int *)(in_EAX + 8);
        }
        else {
          iVar8 = uVar3 - (-iVar8 & uVar3);
          bVar10 = SBORROW4(iVar8,*(int *)(in_EAX + 8));
          iVar8 = iVar8 - *(int *)(in_EAX + 8);
        }
        if ((*(int *)(in_EAX + 0x68) != 0) &&
           (cVar6 = FUN_006a3a20(bVar10 == iVar8 < 0), cVar6 != '\0')) {
          return 1;
        }
        cVar6 = FUN_006a3970();
        if (cVar6 != '\0') {
          return 1;
        }
      }
      if (iVar1 == 1) {
        cVar6 = FUN_006a3e80(FUN_006a3bc0,*(undefined4 *)(in_EAX + 0x50),
                             *(undefined4 *)(in_EAX + 0x54));
      }
      else {
        cVar6 = FUN_006a3ff0();
      }
      if (cVar6 != '\0') {
        return 1;
      }
    }
    if (*(uint *)(in_EAX + 0x38) < in_EAX + 0xbcU) {
      *(uint *)(in_EAX + 0x4c) = uVar4;
      *(undefined4 *)(in_EAX + 0x48) = uVar5;
      return 0;
    }
  } while( true );
}


/* FUN_006a4300 @ 006a4300  kind=gamemisc  attributed-by=none  size=392 */

undefined4
FUN_006a4300(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  int in_EAX;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  *(int *)(in_EAX + 0x38) = in_EAX + 0xbc;
  *(undefined4 *)(in_EAX + 0xd4) = *(undefined4 *)(in_EAX + 0x48);
  *(undefined4 *)(*(int *)(in_EAX + 0x38) + 0x1c) = *(undefined4 *)(in_EAX + 0x4c);
  *(uint *)(*(int *)(in_EAX + 0x38) + 0x10) = param_1;
  *(uint *)(*(int *)(in_EAX + 0x38) + 0x14) = param_2;
  *(undefined4 *)(*(int *)(in_EAX + 0x38) + 8) = param_3;
  *(undefined4 *)(*(int *)(in_EAX + 0x38) + 0xc) = param_4;
  **(undefined4 **)(in_EAX + 0x38) = param_5;
  *(undefined4 *)(*(int *)(in_EAX + 0x38) + 4) = param_6;
  do {
    puVar1 = *(undefined4 **)(in_EAX + 0x38);
    uVar2 = puVar1[7];
    uVar3 = puVar1[1];
    uVar4 = *puVar1;
    iVar5 = puVar1[5];
    iVar8 = puVar1[3];
    param_1 = uVar3;
    param_2 = uVar2;
    if ((int)uVar2 <= (int)uVar3) {
      param_1 = uVar2;
      param_2 = uVar3;
    }
    iVar7 = iVar5;
    if (iVar5 <= iVar8) {
      iVar7 = iVar8;
      iVar8 = iVar5;
    }
    if ((iVar8 < (int)param_1) || ((int)param_2 < iVar7)) {
      FUN_006a3c20(puVar1);
      *(int *)(in_EAX + 0x38) = *(int *)(in_EAX + 0x38) + 0x18;
    }
    else if (uVar2 == uVar3) {
      *(undefined4 **)(in_EAX + 0x38) = puVar1 + -6;
    }
    else {
      iVar5 = ((int)uVar3 < (int)uVar2) + 1;
      if (*(int *)(in_EAX + 0x68) != iVar5) {
        iVar8 = *(int *)(in_EAX + 4);
        if (iVar5 == 1) {
          iVar8 = (iVar8 + -1 + uVar2 & -iVar8) - uVar2;
          bVar9 = SBORROW4(iVar8,*(int *)(in_EAX + 8));
          iVar8 = iVar8 - *(int *)(in_EAX + 8);
        }
        else {
          iVar8 = uVar2 - (-iVar8 & uVar2);
          bVar9 = SBORROW4(iVar8,*(int *)(in_EAX + 8));
          iVar8 = iVar8 - *(int *)(in_EAX + 8);
        }
        if ((*(int *)(in_EAX + 0x68) != 0) &&
           (cVar6 = FUN_006a3a20(bVar9 == iVar8 < 0), cVar6 != '\0')) {
          return 1;
        }
        cVar6 = FUN_006a3970();
        if (cVar6 != '\0') {
          return 1;
        }
      }
      if (iVar5 == 1) {
        cVar6 = FUN_006a3e80(FUN_006a3c20,*(undefined4 *)(in_EAX + 0x50),
                             *(undefined4 *)(in_EAX + 0x54));
      }
      else {
        cVar6 = FUN_006a3ff0();
      }
      if (cVar6 != '\0') {
        return 1;
      }
    }
    if (*(uint *)(in_EAX + 0x38) < in_EAX + 0xbcU) {
      *(uint *)(in_EAX + 0x4c) = uVar3;
      *(undefined4 *)(in_EAX + 0x48) = uVar4;
      return 0;
    }
  } while( true );
}


/* FUN_006a4490 @ 006a4490  kind=gamemisc  attributed-by=none  size=847 */

undefined4 FUN_006a4490(uint param_1,uint param_2,int param_3)

{
  char cVar1;
  int in_EAX;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int *local_1c;
  int local_18;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar10 = *(int *)(in_EAX + 0x88);
  local_1c = (int *)(iVar10 + (param_2 & 0xffff) * 8);
  uVar3 = param_1 & 0xffff;
  piVar13 = (int *)(iVar10 + uVar3 * 8);
  iVar8 = *(int *)(in_EAX + 8);
  bVar2 = (byte)*(undefined4 *)(in_EAX + 0x1c);
  iVar12 = (*(int *)(iVar10 + uVar3 * 8) << (bVar2 & 0x1f)) - iVar8;
  local_c = (*(int *)(iVar10 + 4 + uVar3 * 8) << (bVar2 & 0x1f)) - iVar8;
  iVar4 = (*local_1c << (bVar2 & 0x1f)) - iVar8;
  iVar8 = (local_1c[1] << (bVar2 & 0x1f)) - iVar8;
  iVar10 = iVar4;
  local_10 = iVar12;
  if (param_3 != 0) {
    iVar10 = iVar8;
    iVar8 = iVar4;
    local_10 = local_c;
    local_c = iVar12;
  }
  pbVar6 = (byte *)(*(int *)(in_EAX + 0x8c) + (param_1 & 0xffff));
  if ((*pbVar6 & 4) != 0) {
    *(byte *)(in_EAX + 0xb8) = *pbVar6 >> 5;
  }
  if ((*pbVar6 & 3) != 2) {
    if ((*pbVar6 & 3) == 0) {
      if ((*(byte *)(*(int *)(in_EAX + 0x8c) + (param_2 & 0xffff)) & 3) == 1) {
        local_1c = local_1c + -2;
        local_10 = iVar10;
        local_c = iVar8;
      }
      else {
        local_10 = (iVar10 + local_10) / 2;
        local_c = (local_c + iVar8) / 2;
      }
      piVar13 = piVar13 + -2;
      pbVar6 = pbVar6 + -1;
    }
    *(int *)(in_EAX + 0x48) = local_10;
    *(int *)(in_EAX + 0x4c) = local_c;
    do {
      if (local_1c <= piVar13) {
        cVar1 = FUN_006a4060(local_10,local_c);
joined_r0x006a47b1:
        if (cVar1 != '\0') {
          return 1;
        }
        return 0;
      }
      pbVar7 = pbVar6 + 1;
      piVar14 = piVar13 + 2;
      if ((pbVar6[1] & 3) == 0) {
        bVar2 = (byte)*(undefined4 *)(in_EAX + 0x1c);
        iVar10 = (*piVar14 << (bVar2 & 0x1f)) - *(int *)(in_EAX + 8);
        local_8 = (piVar13[3] << (bVar2 & 0x1f)) - *(int *)(in_EAX + 8);
        local_4 = iVar10;
        if (param_3 == 0) goto LAB_006a46c0;
        while( true ) {
          iVar10 = local_8;
          local_8 = local_4;
LAB_006a46c0:
          local_4 = local_8;
          local_8 = iVar10;
          if (local_1c <= piVar14) {
            cVar1 = FUN_006a41a0(local_8,local_4,local_10,local_c);
            goto joined_r0x006a47b1;
          }
          pbVar6 = pbVar7 + 1;
          piVar13 = piVar14 + 3;
          pbVar7 = pbVar7 + 1;
          piVar14 = piVar14 + 2;
          bVar2 = (byte)*(undefined4 *)(in_EAX + 0x1c);
          iVar4 = (*piVar14 << (bVar2 & 0x1f)) - *(int *)(in_EAX + 8);
          iVar8 = (*piVar13 << (bVar2 & 0x1f)) - *(int *)(in_EAX + 8);
          iVar10 = iVar4;
          if (param_3 != 0) {
            iVar10 = iVar8;
            iVar8 = iVar4;
          }
          if ((*pbVar6 & 3) == 1) break;
          if ((*pbVar6 & 3) != 0) goto LAB_006a47bd;
          cVar1 = FUN_006a41a0(local_8,local_4,(iVar10 + local_8) / 2,(local_4 + iVar8) / 2);
          local_8 = iVar10;
          local_4 = iVar8;
          if (cVar1 != '\0') {
            return 1;
          }
        }
        cVar1 = FUN_006a41a0(local_8,local_4,iVar10,iVar8);
        piVar13 = piVar14;
        pbVar6 = pbVar7;
      }
      else if ((pbVar6[1] & 3) == 1) {
        bVar2 = (byte)*(undefined4 *)(in_EAX + 0x1c);
        iVar4 = (*piVar14 << (bVar2 & 0x1f)) - *(int *)(in_EAX + 8);
        iVar8 = (piVar13[3] << (bVar2 & 0x1f)) - *(int *)(in_EAX + 8);
        iVar10 = iVar4;
        if (param_3 != 0) {
          iVar10 = iVar8;
          iVar8 = iVar4;
        }
        cVar1 = FUN_006a4060(iVar10,iVar8);
        piVar13 = piVar14;
        pbVar6 = pbVar7;
      }
      else {
        if ((local_1c < piVar13 + 4) || ((pbVar6[2] & 3) != 2)) break;
        iVar10 = *(int *)(in_EAX + 8);
        piVar14 = piVar13 + 6;
        bVar2 = (byte)*(undefined4 *)(in_EAX + 0x1c);
        iVar9 = (piVar13[4] << (bVar2 & 0x1f)) - iVar10;
        param_2 = (piVar13[5] << (bVar2 & 0x1f)) - iVar10;
        iVar5 = (piVar13[2] << (bVar2 & 0x1f)) - iVar10;
        iVar12 = (piVar13[3] << (bVar2 & 0x1f)) - iVar10;
        local_18 = (*piVar14 << (bVar2 & 0x1f)) - iVar10;
        iVar10 = (piVar13[7] << (bVar2 & 0x1f)) - iVar10;
        iVar8 = iVar9;
        iVar4 = iVar5;
        iVar11 = iVar10;
        if (param_3 != 0) {
          iVar8 = param_2;
          iVar4 = iVar12;
          iVar12 = iVar5;
          iVar11 = local_18;
          param_2 = iVar9;
          local_18 = iVar10;
        }
        if (local_1c < piVar14) {
          cVar1 = FUN_006a4300(iVar4,iVar12,iVar8,param_2,local_10,local_c);
          goto joined_r0x006a47b1;
        }
        cVar1 = FUN_006a4300(iVar4,iVar12,iVar8,param_2,local_18,iVar11);
        piVar13 = piVar14;
        pbVar6 = pbVar6 + 3;
      }
      if (cVar1 != '\0') {
        return 1;
      }
    } while( true );
  }
LAB_006a47bd:
  *(undefined4 *)(in_EAX + 0x30) = 0x14;
  return 1;
}


/* FUN_006a47f0 @ 006a47f0  kind=gamemisc  attributed-by=none  size=283 */

bool FUN_006a47f0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  int iVar6;
  bool bVar7;
  
  *(int *)(unaff_ESI + 0x28) = *(int *)(unaff_ESI + 0x24) + -0x20;
  iVar5 = *(int *)(unaff_ESI + 0x2c);
  *(int *)(unaff_ESI + 0x5c) = iVar5;
  *(undefined4 *)(unaff_ESI + 0x60) = 0;
  *(undefined2 *)(unaff_ESI + 0x5a) = 0;
  *(undefined4 *)(unaff_ESI + 0x34) = 0;
  *(int *)(iVar5 + 8) = iVar5;
  iVar6 = 0;
  iVar5 = 0;
  *(undefined2 *)(unaff_ESI + 0x58) = 0;
  if (0 < *(short *)(unaff_ESI + 0x84)) {
    do {
      *(undefined4 *)(unaff_ESI + 0x68) = 0;
      *(undefined4 *)(unaff_ESI + 100) = 0;
      cVar3 = FUN_006a4490(iVar6,*(undefined2 *)(*(int *)(unaff_ESI + 0x90) + iVar5 * 2),param_1);
      if (cVar3 != '\0') {
        return true;
      }
      iVar4 = *(int *)(unaff_ESI + 4);
      uVar1 = *(uint *)(unaff_ESI + 0x4c);
      iVar6 = *(short *)(*(int *)(unaff_ESI + 0x90) + iVar5 * 2) + 1;
      if (((((uVar1 & iVar4 - 1U) == 0) && (*(int *)(unaff_ESI + 0x50) <= (int)uVar1)) &&
          ((int)uVar1 <= *(int *)(unaff_ESI + 0x54))) &&
         ((*(int *)(unaff_ESI + 100) != 0 &&
          (((*(uint *)(*(int *)(unaff_ESI + 0x5c) + 0xc) ^
            *(uint *)(*(int *)(unaff_ESI + 100) + 0xc)) & 8) == 0)))) {
        *(int *)(unaff_ESI + 0x2c) = *(int *)(unaff_ESI + 0x2c) + -4;
      }
      iVar2 = *(int *)(unaff_ESI + 0x5c);
      if ((*(byte *)(iVar2 + 0xc) & 8) == 0) {
        iVar4 = ((uVar1 - 1) + iVar4 & -iVar4) - uVar1;
        bVar7 = SBORROW4(iVar4,*(int *)(unaff_ESI + 8));
        iVar4 = iVar4 - *(int *)(unaff_ESI + 8);
      }
      else {
        iVar4 = uVar1 - (-iVar4 & uVar1);
        bVar7 = SBORROW4(iVar4,*(int *)(unaff_ESI + 8));
        iVar4 = iVar4 - *(int *)(unaff_ESI + 8);
      }
      cVar3 = FUN_006a3a20(bVar7 == iVar4 < 0);
      if (cVar3 != '\0') {
        return true;
      }
      if (*(int *)(unaff_ESI + 100) != 0) {
        *(int *)(iVar2 + 0x1c) = *(int *)(unaff_ESI + 100);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(short *)(unaff_ESI + 0x84));
  }
  cVar3 = FUN_006a3b10();
  if (cVar3 != '\0') {
    return true;
  }
  return *(uint *)(unaff_ESI + 0x28) <= *(uint *)(unaff_ESI + 0x2c);
}


/* FUN_006a4920 @ 006a4920  kind=gamemisc  attributed-by=none  size=36 */

void FUN_006a4920(void)

{
  int *piVar1;
  int *in_ECX;
  int *in_EDX;
  
  piVar1 = (int *)*in_ECX;
  while ((piVar1 != (int *)0x0 && (*piVar1 <= *in_EDX))) {
    in_ECX = piVar1 + 1;
    piVar1 = (int *)*in_ECX;
  }
  in_EDX[1] = (int)piVar1;
  *in_ECX = (int)in_EDX;
  return;
}


/* FUN_006a4950 @ 006a4950  kind=gamemisc  attributed-by=none  size=26 */

void FUN_006a4950(void)

{
  int iVar1;
  int *in_ECX;
  int in_EDX;
  
  iVar1 = *in_ECX;
  if (iVar1 != 0) {
    while (iVar1 != in_EDX) {
      in_ECX = (int *)(iVar1 + 4);
      iVar1 = *in_ECX;
      if (iVar1 == 0) {
        return;
      }
    }
    *in_ECX = *(int *)(iVar1 + 4);
  }
  return;
}


/* FUN_006a4970 @ 006a4970  kind=gamemisc  attributed-by=none  size=115 */

void FUN_006a4970(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *unaff_EDI;
  
  for (puVar1 = (undefined4 *)*unaff_EDI; puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[1]) {
    *puVar1 = *(undefined4 *)puVar1[2];
    puVar1[4] = puVar1[4] + -1;
    puVar1[2] = (undefined4 *)puVar1[2] + (uint)((*(byte *)(puVar1 + 3) & 8) != 0) * 2 + -1;
  }
  piVar4 = (int *)*unaff_EDI;
  if (piVar4 != (int *)0x0) {
    piVar2 = (int *)piVar4[1];
    piVar3 = unaff_EDI;
    while (piVar2 != (int *)0x0) {
      piVar5 = piVar4 + 1;
      if (*piVar2 < *piVar4) {
        *piVar3 = (int)piVar2;
        *piVar5 = piVar2[1];
        piVar2[1] = (int)piVar4;
        piVar4 = (int *)*unaff_EDI;
        piVar5 = unaff_EDI;
      }
      else {
        piVar4 = (int *)*piVar5;
        if (piVar4 == (int *)0x0) {
          return;
        }
      }
      piVar3 = piVar5;
      piVar2 = (int *)piVar4[1];
    }
  }
  return;
}


/* FUN_006a4eb0 @ 006a4eb0  kind=gamemisc  attributed-by=none  size=789 */

undefined4 FUN_006a4eb0(undefined4 *param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  bool bVar5;
  undefined4 *puVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *local_28;
  uint *local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint *puStack_14;
  uint uStack_10;
  int iStack_c;
  uint uStack_8;
  uint uStack_4;
  
  FUN_006a4910();
  FUN_006a4910();
  FUN_006a4910();
  local_18 = (int)param_1[0x14] >> ((byte)*param_1 & 0x1f) & 0xffff;
  local_1c = (int)param_1[0x15] >> ((byte)*param_1 & 0x1f) & 0xffff;
  puVar6 = (undefined4 *)param_1[0x18];
  while (puVar6 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)puVar6[1];
    uVar8 = (*(short *)(puVar6 + 4) + *(short *)(puVar6 + 5)) - 1;
    bVar5 = (short)*(ushort *)(puVar6 + 5) < (short)local_1c;
    if (bVar5) {
      local_1c = (uint)*(ushort *)(puVar6 + 5);
    }
    bVar5 = (short)local_18 < (short)uVar8;
    if (bVar5) {
      local_18 = (uint)uVar8;
    }
    *puVar6 = 0;
    FUN_006a4920();
    puVar6 = puVar3;
  }
  if (param_1[0xd] == 0) {
    param_1[0xc] = 0x14;
    return 1;
  }
  (*(code *)param_1[0x2a])(param_1,&local_1c,&local_18);
  for (iVar10 = local_20; iVar10 != 0; iVar10 = *(int *)(iVar10 + 4)) {
    *(uint *)(iVar10 + 0x18) = (uint)(ushort)(*(short *)(iVar10 + 0x14) - (short)local_1c);
  }
  iVar10 = param_1[0xd];
  uStack_10 = local_1c & 0xffff;
  if ((0 < iVar10) && (*(int *)(param_1[9] + iVar10 * -4) == (int)(short)local_1c)) {
    param_1[0xd] = iVar10 + -1;
  }
  iVar10 = param_1[0xd];
  uVar13 = uStack_10;
  uVar11 = 0;
  while (0 < iVar10) {
    if (local_20 != 0) {
      iVar10 = local_20;
      do {
        piVar1 = (int *)(iVar10 + 0x18);
        *piVar1 = *piVar1 - (int)(short)uVar11;
        iVar10 = *(int *)(iVar10 + 4);
        if (*piVar1 == 0) {
          FUN_006a4950();
          FUN_006a4920();
        }
      } while (iVar10 != 0);
    }
    FUN_006a4970();
    FUN_006a4970();
    uVar8 = *(ushort *)(param_1[9] + param_1[0xd] * -4);
    uStack_4 = (uint)uVar8;
    param_1[0xd] = param_1[0xd] + -1;
    uStack_8 = uStack_4 - uVar13 & 0xffff;
    puVar4 = local_28;
    if ((short)uVar13 < (short)uVar8) {
      while( true ) {
        iStack_c = 0;
        puStack_14 = local_24;
        puVar14 = local_28;
        if (local_28 != (uint *)0x0) {
          do {
            uVar13 = uStack_10;
            uVar11 = *puVar14;
            uVar9 = *puStack_14;
            uVar7 = uVar11;
            if ((int)uVar9 < (int)uVar11) {
              uVar7 = uVar9;
              uVar9 = uVar11;
            }
            iVar10 = param_1[1];
            uVar11 = iVar10 + -1 + uVar9 & -iVar10;
            uVar12 = -iVar10 & uVar7;
            if ((((iVar10 < (int)(uVar9 - uVar7)) || (uVar12 == uVar7)) || (uVar11 == uVar9)) ||
               (((int)uVar12 <= (int)uVar11 && (uVar11 != iVar10 + uVar12)))) {
              (*(code *)param_1[0x2b])(param_1,uStack_10,uVar7,uVar9,puVar14,puStack_14);
            }
            else if (((byte)puVar14[3] & 7) != 2) {
              *puVar14 = uVar7;
              *puStack_14 = uVar9;
              iStack_c = iStack_c + 1;
              puVar14[6] = 1;
            }
            puVar15 = puVar14 + 1;
            puStack_14 = (uint *)puStack_14[1];
            puVar14 = (uint *)*puVar15;
          } while ((uint *)*puVar15 != (uint *)0x0);
          puVar14 = local_28;
          puVar15 = local_24;
          if (0 < (short)iStack_c) {
            do {
              if (puVar14[6] != 0) {
                puVar14[6] = 0;
                (*(code *)param_1[0x2c])(param_1,uVar13,*puVar14,*puVar15,puVar14,puVar15);
              }
              puVar2 = puVar14 + 1;
              puVar14 = (uint *)*puVar2;
              puVar15 = (uint *)puVar15[1];
            } while ((uint *)*puVar2 != (uint *)0x0);
          }
        }
        (*(code *)param_1[0x2d])(param_1);
        uVar13 = uVar13 + 1;
        uStack_10 = uVar13;
        if ((short)uStack_4 <= (short)uVar13) break;
        FUN_006a4970();
        FUN_006a4970();
      }
    }
    while (puVar14 = local_24, puVar4 != (uint *)0x0) {
      puVar14 = puVar4 + 4;
      puVar4 = (uint *)puVar4[1];
      if (*puVar14 == 0) {
        FUN_006a4950();
      }
    }
    while (puVar14 != (uint *)0x0) {
      puVar4 = puVar14 + 4;
      puVar14 = (uint *)puVar14[1];
      if (*puVar4 == 0) {
        FUN_006a4950();
      }
    }
    uVar11 = uStack_8;
    iVar10 = param_1[0xd];
  }
  if ((short)uVar13 <= (short)local_18) {
    do {
      (*(code *)param_1[0x2d])(param_1);
      uVar13 = uVar13 + 1;
    } while ((short)uVar13 <= (short)local_18);
  }
  return 0;
}


/* FUN_006a51d0 @ 006a51d0  kind=gamemisc  attributed-by=none  size=272 */

undefined4 FUN_006a51d0(char param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  char cVar5;
  int in_EAX;
  
  iVar3 = *(int *)(in_EAX + 0x404);
  do {
    if (iVar3 < 0) {
      return 0;
    }
    *(int *)(in_EAX + 0x54) =
         (int)*(short *)(in_EAX + 0x3c6 + *(int *)(in_EAX + 0x404) * 4) * *(int *)(in_EAX + 4);
    *(int *)(in_EAX + 0x50) =
         (int)*(short *)(in_EAX + 0x3c4 + *(int *)(in_EAX + 0x404) * 4) * *(int *)(in_EAX + 4);
    *(undefined4 *)(in_EAX + 0x2c) = *(undefined4 *)(in_EAX + 0x20);
    *(undefined4 *)(in_EAX + 0x30) = 0;
    cVar5 = FUN_006a47f0((int)param_1);
    if (cVar5 == '\0') {
      if ((*(int *)(in_EAX + 0x60) != 0) && (cVar5 = FUN_006a4eb0(), cVar5 != '\0')) {
        return *(undefined4 *)(in_EAX + 0x30);
      }
      *(int *)(in_EAX + 0x404) = *(int *)(in_EAX + 0x404) + -1;
    }
    else {
      if (*(int *)(in_EAX + 0x30) != 0x62) {
        return 1;
      }
      iVar3 = *(int *)(in_EAX + 0x404);
      *(undefined4 *)(in_EAX + 0x30) = 0;
      sVar1 = *(short *)(in_EAX + 0x3c4 + iVar3 * 4);
      sVar2 = *(short *)(in_EAX + 0x3c6 + iVar3 * 4);
      sVar4 = (short)(((int)sVar2 + (int)sVar1) / 2);
      if ((6 < iVar3) || (sVar4 < sVar1)) {
        *(undefined4 *)(in_EAX + 0x404) = 0;
        *(undefined4 *)(in_EAX + 0x30) = 0x14;
        return 0x14;
      }
      *(short *)(in_EAX + 0x3c8 + iVar3 * 4) = sVar4;
      *(short *)(in_EAX + 0x3ca + *(int *)(in_EAX + 0x404) * 4) = sVar2;
      *(short *)(in_EAX + 0x3c6 + *(int *)(in_EAX + 0x404) * 4) = sVar4 + -1;
      *(int *)(in_EAX + 0x404) = *(int *)(in_EAX + 0x404) + 1;
    }
    iVar3 = *(int *)(in_EAX + 0x404);
  } while( true );
}


/* FUN_006a52f0 @ 006a52f0  kind=gamemisc  attributed-by=none  size=296 */

int FUN_006a52f0(void)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  
  FUN_006a3910(*(uint *)(in_EAX + 0x94) & 0x100);
  uVar1 = *(uint *)(in_EAX + 0x94);
  *(undefined4 *)(in_EAX + 0x1c) = *(undefined4 *)(in_EAX + 0x10);
  if ((uVar1 & 8) == 0) {
    if ((uVar1 & 0x10) == 0) {
      *(undefined1 *)(in_EAX + 0xb8) = 0;
    }
    else {
      *(undefined1 *)(in_EAX + 0xb8) = 4;
    }
    if ((uVar1 & 0x20) == 0) {
      *(char *)(in_EAX + 0xb8) = *(char *)(in_EAX + 0xb8) + '\x01';
    }
  }
  else {
    *(undefined1 *)(in_EAX + 0xb8) = 2;
  }
  *(byte *)(in_EAX + 0xb9) = ~(byte)(uVar1 >> 9) & 1;
  *(undefined2 *)(in_EAX + 0x3c4) = 0;
  *(short *)(in_EAX + 0x3c6) = *(short *)(in_EAX + 0x6c) + -1;
  *(undefined1 **)(in_EAX + 0xa8) = &LAB_006a49f0;
  *(code **)(in_EAX + 0xac) = FUN_006a4a40;
  *(undefined **)(in_EAX + 0xb0) = &DAT_006a4b20;
  *(undefined1 **)(in_EAX + 0xb4) = &LAB_006a4ca0;
  *(undefined4 *)(in_EAX + 0x404) = 0;
  *(undefined2 *)(in_EAX + 0x3c) = *(undefined2 *)(in_EAX + 0x70);
  *(undefined4 *)(in_EAX + 0x40) = *(undefined4 *)(in_EAX + 0x78);
  iVar2 = FUN_006a51d0(0);
  if (iVar2 == 0) {
    if ((*(char *)(in_EAX + 0xb9) != '\0') && (*(char *)(in_EAX + 0xb8) != '\x02')) {
      *(undefined4 *)(in_EAX + 0x404) = 0;
      *(undefined2 *)(in_EAX + 0x3c4) = 0;
      *(code **)(in_EAX + 0xa8) = cube::Controller::vfunction12;
      *(undefined1 **)(in_EAX + 0xac) = &LAB_006a4cc0;
      *(undefined **)(in_EAX + 0xb0) = &DAT_006a4d30;
      *(code **)(in_EAX + 0xb4) = cube::Controller::vfunction12;
      *(short *)(in_EAX + 0x3c6) = *(short *)(in_EAX + 0x70) + -1;
      iVar2 = FUN_006a51d0(1);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}


/* FUN_006a58c0 @ 006a58c0  kind=gamemisc  attributed-by=none  size=63 */

void FUN_006a58c0(undefined4 param_1)

{
  undefined4 uVar1;
  uint in_EDX;
  uint uVar2;
  int unaff_EDI;
  int local_4;
  
  local_4 = 0;
  if (*(uint *)(unaff_EDI + 4) < in_EDX) {
    uVar2 = in_EDX + 7 & 0xfffffff8;
    uVar1 = FUN_00693a60(param_1,0xc,*(uint *)(unaff_EDI + 4),uVar2,*(undefined4 *)(unaff_EDI + 8),
                         &local_4);
    *(undefined4 *)(unaff_EDI + 8) = uVar1;
    if (local_4 == 0) {
      *(uint *)(unaff_EDI + 4) = uVar2;
    }
  }
  return;
}


/* FUN_006a5900 @ 006a5900  kind=gamemisc  attributed-by=none  size=77 */

int FUN_006a5900(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint *in_EAX;
  int iVar2;
  uint uVar3;
  
  uVar3 = *in_EAX + 1;
  if (in_EAX[1] <= uVar3) {
    iVar2 = FUN_006a58c0(param_1);
    if (iVar2 != 0) {
      *param_2 = 0;
      return iVar2;
    }
  }
  puVar1 = (undefined4 *)((in_EAX[2] - 0xc) + uVar3 * 0xc);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *in_EAX = uVar3;
  *param_2 = puVar1;
  return 0;
}


/* FUN_006a5970 @ 006a5970  kind=gamemisc  attributed-by=none  size=82 */

void FUN_006a5970(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int in_EDX;
  uint uVar3;
  int unaff_EDI;
  int local_4;
  
  uVar2 = *(int *)(unaff_EDI + 4) + 7U >> 3;
  uVar3 = in_EDX + 7U >> 3;
  local_4 = 0;
  if (uVar2 < uVar3) {
    uVar3 = uVar3 + 7 & 0xfffffff8;
    uVar1 = FUN_00693a60(param_1,1,uVar2,uVar3,*(undefined4 *)(unaff_EDI + 8),&local_4);
    *(undefined4 *)(unaff_EDI + 8) = uVar1;
    if (local_4 == 0) {
      *(uint *)(unaff_EDI + 4) = uVar3 * 8;
    }
  }
  return;
}


/* FUN_006a59d0 @ 006a59d0  kind=gamemisc  attributed-by=none  size=32 */

uint FUN_006a59d0(void)

{
  uint *in_EAX;
  uint in_ECX;
  
  if (*in_EAX <= in_ECX) {
    return 0;
  }
  return (uint)*(byte *)(in_EAX[2] + ((int)in_ECX >> 3)) & 0x80 >> ((byte)in_ECX & 7);
}


/* FUN_006a5a10 @ 006a5a10  kind=gamemisc  attributed-by=none  size=70 */

int FUN_006a5a10(void)

{
  int iVar1;
  uint *in_ECX;
  byte *pbVar2;
  uint unaff_EBX;
  
  if ((int)unaff_EBX < 0) {
    return 0;
  }
  if (*in_ECX <= unaff_EBX) {
    iVar1 = FUN_006a5970();
    if (iVar1 != 0) {
      return iVar1;
    }
    *in_ECX = unaff_EBX + 1;
  }
  pbVar2 = (byte *)(((int)unaff_EBX >> 3) + in_ECX[2]);
  *pbVar2 = *pbVar2 | (byte)(0x80 >> ((byte)unaff_EBX & 7));
  return 0;
}


/* FUN_006a5a60 @ 006a5a60  kind=gamemisc  attributed-by=none  size=57 */

void FUN_006a5a60(undefined4 param_1)

{
  undefined4 *unaff_EBX;
  int iVar1;
  
  for (iVar1 = unaff_EBX[1]; iVar1 != 0; iVar1 = iVar1 + -1) {
    FUN_006a5950();
  }
  FUN_00691290(param_1,unaff_EBX[2]);
  unaff_EBX[2] = 0;
  *unaff_EBX = 0;
  unaff_EBX[1] = 0;
  return;
}


/* FUN_006a5aa0 @ 006a5aa0  kind=gamemisc  attributed-by=none  size=63 */

void FUN_006a5aa0(undefined4 param_1)

{
  undefined4 uVar1;
  uint in_EDX;
  uint uVar2;
  int unaff_EDI;
  int local_4;
  
  local_4 = 0;
  if (*(uint *)(unaff_EDI + 4) < in_EDX) {
    uVar2 = in_EDX + 7 & 0xfffffff8;
    uVar1 = FUN_00693a60(param_1,0x10,*(uint *)(unaff_EDI + 4),uVar2,*(undefined4 *)(unaff_EDI + 8),
                         &local_4);
    *(undefined4 *)(unaff_EDI + 8) = uVar1;
    if (local_4 == 0) {
      *(uint *)(unaff_EDI + 4) = uVar2;
    }
  }
  return;
}


/* FUN_006a5ae0 @ 006a5ae0  kind=gamemisc  attributed-by=none  size=75 */

int FUN_006a5ae0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint *in_EAX;
  int iVar2;
  uint uVar3;
  
  uVar3 = *in_EAX + 1;
  if (in_EAX[1] < uVar3) {
    iVar2 = FUN_006a5aa0(param_1);
    if (iVar2 != 0) {
      *param_2 = 0;
      return iVar2;
    }
  }
  puVar1 = (undefined4 *)((in_EAX[2] - 0x10) + uVar3 * 0x10);
  *puVar1 = 0;
  puVar1[3] = 0;
  *in_EAX = uVar3;
  *param_2 = puVar1;
  return 0;
}


/* FUN_006a5c60 @ 006a5c60  kind=gamemisc  attributed-by=none  size=270 */

int FUN_006a5c60(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_EAX;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  undefined4 *_Dst;
  byte *pbVar11;
  
  iVar8 = in_EAX;
  if (param_2 < in_EAX) {
    iVar8 = param_2;
    param_2 = in_EAX;
  }
  if (((iVar8 < param_2) && (-1 < iVar8)) && (param_2 < *param_1)) {
    iVar1 = param_1[2];
    uVar7 = *(uint *)(param_2 * 0x10 + iVar1);
    _Dst = (undefined4 *)(param_2 * 0x10 + iVar1);
    uVar10 = *(uint *)(iVar1 + iVar8 * 0x10);
    if (uVar7 != 0) {
      if (uVar10 < uVar7) {
        iVar6 = FUN_006a5970(param_3);
        if (iVar6 != 0) {
          return iVar6;
        }
        for (; uVar10 < uVar7; uVar10 = uVar10 + 1) {
          FUN_006a59f0();
        }
      }
      pbVar9 = (byte *)_Dst[2];
      pbVar11 = *(byte **)(iVar1 + iVar8 * 0x10 + 8);
      for (uVar7 = uVar7 + 7 >> 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pbVar11 = *pbVar11 | *pbVar9;
        pbVar11 = pbVar11 + 1;
        pbVar9 = pbVar9 + 1;
      }
    }
    *_Dst = 0;
    _Dst[3] = 0;
    iVar8 = (*param_1 - param_2) + -1;
    if (0 < iVar8) {
      uVar2 = _Dst[2];
      uVar3 = _Dst[3];
      uVar4 = *_Dst;
      uVar5 = _Dst[1];
      memmove(_Dst,_Dst + 4,iVar8 * 0x10);
      _Dst[iVar8 * 4] = uVar4;
      _Dst[iVar8 * 4 + 1] = uVar5;
      _Dst[iVar8 * 4 + 2] = uVar2;
      _Dst[iVar8 * 4 + 3] = uVar3;
    }
    *param_1 = *param_1 + -1;
  }
  return 0;
}


/* FUN_006a5d80 @ 006a5d80  kind=gamemisc  attributed-by=none  size=90 */

int FUN_006a5d80(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *unaff_EBX;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar2 = *unaff_EBX + -1;
  do {
    do {
      if (iVar2 < 1) {
        return iVar4;
      }
      iVar5 = iVar2 + -1;
      bVar1 = iVar2 < 1;
      iVar2 = iVar5;
    } while (bVar1);
    do {
      iVar3 = FUN_006a5c00();
      if (iVar3 != 0) {
        iVar4 = FUN_006a5c60();
        if (iVar4 != 0) {
          return iVar4;
        }
        break;
      }
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  } while( true );
}


/* FUN_006a5e10 @ 006a5e10  kind=gamemisc  attributed-by=none  size=11 */

void FUN_006a5e10(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = 0;
  in_EAX[3] = 0;
  in_EAX[6] = 0;
  return;
}


/* FUN_006a5e20 @ 006a5e20  kind=gamemisc  attributed-by=none  size=17 */

void FUN_006a5e20(void)

{
  int in_ECX;
  undefined4 in_EDX;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0x14) + -4 + *(int *)(in_ECX + 0xc) * 0x10) = in_EDX;
  }
  return;
}


/* FUN_006a5e90 @ 006a5e90  kind=gamemisc  attributed-by=none  size=190 */

void FUN_006a5e90(int param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *unaff_EDI;
  int *local_4;
  
  iVar4 = 0;
  if (in_EAX < 0) {
    iVar4 = 1;
    if (in_EAX == -0x15) {
      param_1 = param_1 + -0x15;
      iVar4 = 3;
    }
    in_EAX = 0;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = 0xffffffff;
  }
  uVar1 = *unaff_EDI;
  local_4 = (int *)unaff_EDI[2];
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      if ((*local_4 == param_1) && (local_4[1] == in_EAX)) {
        if (uVar3 < uVar1) goto LAB_006a5f18;
        break;
      }
      uVar3 = uVar3 + 1;
      local_4 = local_4 + 3;
    } while (uVar3 < uVar1);
  }
  iVar2 = FUN_006a5900(param_2,&local_4);
  if (iVar2 == 0) {
    *local_4 = param_1;
    local_4[1] = in_EAX;
    local_4[2] = iVar4;
LAB_006a5f18:
    iVar4 = FUN_006a5b30(param_2);
    if (((iVar4 == 0) && (iVar4 = FUN_006a5a10(), iVar4 == 0)) && (param_3 != (uint *)0x0)) {
      *param_3 = uVar3;
    }
  }
  return;
}


/* FUN_006a5f50 @ 006a5f50  kind=gamemisc  attributed-by=none  size=168 */

void FUN_006a5f50(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_stack_00000010;
  int local_4;
  
  iVar2 = *(int *)(in_EAX + 0x20);
  iVar3 = *(int *)(in_EAX + 0x18);
  local_4 = iVar2;
  if (iVar3 != 0) {
    do {
      iVar1 = FUN_006a59d0();
      if (((iVar1 != 0) || (iVar1 = FUN_006a59d0(), iVar1 != 0)) ||
         (iVar1 = FUN_006a59d0(), iVar1 != 0)) break;
      iVar2 = iVar2 + 0x10;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    local_4 = iVar2;
    if (iVar3 != 0) goto LAB_006a5fc3;
  }
  iVar2 = FUN_006a5ae0(in_stack_00000010,&local_4);
  if (iVar2 != 0) {
    return;
  }
LAB_006a5fc3:
  iVar2 = FUN_006a5a10();
  if ((iVar2 == 0) && (iVar2 = FUN_006a5a10(), iVar2 == 0)) {
    FUN_006a5a10();
  }
  return;
}


/* FUN_006a60a0 @ 006a60a0  kind=gamemisc  attributed-by=none  size=93 */

void FUN_006a60a0(int param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  undefined4 *unaff_EBX;
  
  if (((unaff_EBX[1] == 0) && (unaff_EBX[3] - 1 < 2)) && (param_1 != 0)) {
    while (iVar1 = FUN_006a5e90(*in_ECX,*unaff_EBX,0), iVar1 == 0) {
      in_ECX = in_ECX + 2;
      param_1 = param_1 + -1;
      if (param_1 == 0) {
        return;
      }
    }
    unaff_EBX[1] = iVar1;
  }
  return;
}


/* FUN_006a64e0 @ 006a64e0  kind=gamemisc  attributed-by=none  size=119 */

void FUN_006a64e0(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  
  uVar2 = *(undefined4 *)(in_EAX * 0xcc + 200 + in_ECX);
  piVar1 = (int *)(in_EAX * 0xcc + 4 + in_ECX);
  iVar3 = *piVar1;
  if (iVar3 != 0) {
    iVar5 = FUN_0068ebc0(piVar1[1],uVar2);
    piVar1[2] = iVar5;
    piVar1[3] = iVar5 + 0x20U & 0xffffffc0;
    piVar4 = piVar1 + 1;
    while (iVar3 = iVar3 + -1, iVar3 != 0) {
      iVar6 = FUN_0068ebc0(piVar4[3],uVar2);
      iVar5 = piVar1[2];
      iVar7 = iVar6 - iVar5;
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      if (iVar7 < 0x80) {
        iVar6 = iVar5;
      }
      piVar4[4] = iVar6;
      piVar4[5] = iVar6 + 0x20U & 0xffffffc0;
      piVar4 = piVar4 + 3;
    }
  }
  return;
}


/* FUN_006a6560 @ 006a6560  kind=gamemisc  attributed-by=none  size=297 */

void FUN_006a6560(char param_1,short *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint in_ECX;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int local_c;
  int local_8;
  int local_4;
  
  local_8 = *param_4;
  local_c = *param_3;
  bVar1 = true;
  if (in_ECX < 2) {
    *param_3 = local_c;
    *param_4 = local_8;
    return;
  }
  local_4 = (in_ECX - 2 >> 1) + 1;
  do {
    bVar2 = false;
    if ((bVar1) || (param_1 != '\0')) {
      iVar7 = (int)param_2[1];
      iVar6 = *param_2 - iVar7;
      bVar1 = false;
      iVar3 = local_8;
      piVar5 = param_4;
    }
    else {
      iVar7 = (int)*param_2;
      iVar6 = param_2[1] - iVar7;
      bVar2 = true;
      iVar3 = local_c;
      piVar5 = param_3;
    }
    piVar5 = piVar5 + 1;
    if (iVar3 != 0) {
      while (*piVar5 <= iVar7) {
        if (iVar7 == *piVar5) {
          if (iVar6 < 0) {
            if (iVar6 < piVar5[1]) {
              piVar5[1] = iVar6;
            }
          }
          else if (piVar5[1] < iVar6) {
            piVar5[1] = iVar6;
          }
          goto LAB_006a665c;
        }
        piVar5 = piVar5 + 8;
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) goto LAB_006a6646;
      }
      if (iVar3 != 0) {
        piVar8 = piVar5 + iVar3 * 8;
        do {
          iVar3 = iVar3 + -1;
          piVar9 = piVar8 + -8;
          piVar10 = piVar8;
          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar10 = *piVar9;
            piVar9 = piVar9 + 1;
            piVar10 = piVar10 + 1;
          }
          piVar8 = piVar8 + -8;
        } while (iVar3 != 0);
      }
    }
LAB_006a6646:
    *piVar5 = iVar7;
    piVar5[1] = iVar6;
    if (bVar2) {
      local_c = local_c + 1;
    }
    else {
      local_8 = local_8 + 1;
    }
LAB_006a665c:
    param_2 = param_2 + 2;
    local_4 = local_4 + -1;
    if (local_4 == 0) {
      *param_3 = local_c;
      *param_4 = local_8;
      return;
    }
  } while( true );
}


/* FUN_006a67e0 @ 006a67e0  kind=gamemisc  attributed-by=none  size=465 */

void FUN_006a67e0(int *param_1,uint param_2)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar1 = param_2;
  if ((int)param_2 < 0x20c49ba) {
    *(bool *)(param_1 + 0x208) = (int)(param_2 * 0x7d) < param_1[0x204] * 8;
  }
  else {
    *(bool *)(param_1 + 0x208) = (int)param_2 < (param_1[0x204] * 8) / 0x7d;
  }
  iVar7 = param_1[0x205];
  while ((0 < iVar7 && (iVar2 = FUN_0068ebc0(iVar7,param_2), 0x20 < iVar2))) {
    iVar7 = iVar7 + -1;
  }
  param_1[0x206] = iVar7;
  param_2 = 0;
  do {
    piVar3 = param_1;
    if (param_2 != 0) {
      if (param_2 == 1) {
        piVar3 = param_1 + 0x81;
      }
      else if (param_2 == 2) {
        piVar3 = param_1 + 0x102;
      }
      else {
        piVar3 = param_1 + 0x183;
      }
    }
    piVar4 = piVar3 + 1;
    for (iVar7 = *piVar3; iVar7 != 0; iVar7 = iVar7 + -1) {
      iVar2 = FUN_0068ebc0(piVar4[2],iVar1);
      piVar4[7] = iVar2 + in_EAX;
      iVar2 = FUN_0068ebc0(piVar4[3],iVar1);
      piVar4[6] = iVar2 + in_EAX;
      iVar2 = FUN_0068ebc0(*piVar4,iVar1);
      piVar4[4] = iVar2 + in_EAX;
      iVar2 = FUN_0068ebc0(piVar4[1],iVar1);
      piVar4[5] = iVar2;
      piVar4[4] = piVar4[4] + 0x20U & 0xffffffc0;
      piVar4 = piVar4 + 8;
    }
    param_2 = param_2 + 1;
  } while (param_2 < 4);
  param_2 = 0;
  do {
    if (param_2 == 0) {
      piVar3 = param_1 + 0x102;
      piVar4 = param_1;
    }
    else {
      piVar3 = param_1 + 0x183;
      piVar4 = param_1 + 0x81;
    }
    piVar6 = piVar4 + 1;
    for (iVar7 = *piVar4; iVar7 != 0; iVar7 = iVar7 + -1) {
      piVar4 = piVar3 + 1;
      for (iVar2 = *piVar3; iVar2 != 0; iVar2 = iVar2 + -1) {
        iVar5 = *piVar6 - *piVar4;
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        iVar5 = FUN_0068ebc0(iVar5,iVar1);
        if (iVar5 < 0x40) {
          piVar6[7] = piVar4[7];
          piVar6[6] = piVar4[6];
          piVar6[4] = piVar4[4];
          piVar6[5] = piVar4[5];
          break;
        }
        piVar4 = piVar4 + 8;
      }
      piVar6 = piVar6 + 8;
    }
    param_2 = param_2 + 1;
    if (1 < param_2) {
      return;
    }
  } while( true );
}


/* FUN_006a69c0 @ 006a69c0  kind=gamemisc  attributed-by=none  size=217 */

void FUN_006a69c0(int param_1,uint *param_2)

{
  int iVar1;
  int in_EAX;
  int *piVar2;
  int iVar3;
  int *unaff_ESI;
  
  *param_2 = 0;
  iVar1 = unaff_ESI[0x208];
  iVar3 = *unaff_ESI;
  piVar2 = unaff_ESI + 1;
  if (iVar3 != 0) {
    while (-unaff_ESI[0x207] <= in_EAX - piVar2[3]) {
      if (in_EAX <= piVar2[2] + unaff_ESI[0x207]) {
        if (((char)iVar1 != '\0') || (in_EAX - piVar2[3] <= unaff_ESI[0x206])) {
          *param_2 = 1;
          param_2[1] = piVar2[4];
        }
        break;
      }
      piVar2 = piVar2 + 8;
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) break;
    }
  }
  iVar3 = unaff_ESI[0x81];
  piVar2 = unaff_ESI + iVar3 * 8 + 0x7a;
  if (iVar3 != 0) {
    while (-unaff_ESI[0x207] <= piVar2[2] - param_1) {
      if (piVar2[3] - unaff_ESI[0x207] <= param_1) {
        if (((char)iVar1 == '\0') && (unaff_ESI[0x206] <= piVar2[2] - param_1)) {
          return;
        }
        *param_2 = *param_2 | 2;
        param_2[2] = piVar2[4];
        return;
      }
      piVar2 = piVar2 + -8;
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        return;
      }
    }
  }
  return;
}


/* FUN_006a6cb0 @ 006a6cb0  kind=gamemisc  attributed-by=none  size=31 */

undefined4 FUN_006a6cb0(void)

{
  int *in_EDX;
  int *unaff_ESI;
  
  if ((*unaff_ESI <= in_EDX[1] + *in_EDX) && (*in_EDX <= unaff_ESI[1] + *unaff_ESI)) {
    return 1;
  }
  return 0;
}


/* FUN_006a6d10 @ 006a6d10  kind=gamemisc  attributed-by=none  size=29 */

void FUN_006a6d10(void)

{
  int *in_EAX;
  uint *puVar1;
  int iVar2;
  
  iVar2 = *in_EAX;
  if (iVar2 != 0) {
    puVar1 = (uint *)(in_EAX[2] + 0x10);
    do {
      *puVar1 = *puVar1 & 0xfffffffb;
      puVar1[2] = 0xffffffff;
      puVar1 = puVar1 + 7;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


/* FUN_006a6d30 @ 006a6d30  kind=gamemisc  attributed-by=none  size=116 */

void FUN_006a6d30(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint in_EAX;
  int iVar4;
  uint uVar5;
  
  iVar1 = param_1[2] + in_EAX * 0x1c;
  if ((in_EAX < *param_1) && ((*(uint *)(iVar1 + 0x10) & 4) == 0)) {
    *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 4;
    puVar2 = (undefined4 *)param_1[4];
    uVar5 = param_1[1];
    *(undefined4 *)(iVar1 + 0x14) = 0;
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      uVar3 = *puVar2;
      iVar4 = FUN_006a6cb0();
      if (iVar4 != 0) {
        *(undefined4 *)(iVar1 + 0x14) = uVar3;
        break;
      }
      puVar2 = puVar2 + 1;
    }
    if (param_1[1] < *param_1) {
      *(int *)(param_1[4] + param_1[1] * 4) = iVar1;
      param_1[1] = param_1[1] + 1;
    }
  }
  return;
}


/* FUN_006a6db0 @ 006a6db0  kind=gamemisc  attributed-by=none  size=73 */

void FUN_006a6db0(undefined4 param_1)

{
  uint uVar1;
  uint *in_EAX;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  pbVar2 = (byte *)in_EAX[2];
  uVar1 = *in_EAX;
  uVar4 = 0;
  uVar3 = 0;
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      if (uVar4 == 0) {
        uVar3 = (uint)*pbVar2;
        pbVar2 = pbVar2 + 1;
        uVar4 = 0x80;
      }
      if ((uVar4 & uVar3) != 0) {
        FUN_006a6d30(param_1);
      }
      uVar5 = uVar5 + 1;
      uVar4 = (int)uVar4 >> 1;
    } while (uVar5 < uVar1);
  }
  return;
}


/* FUN_006a6e00 @ 006a6e00  kind=gamemisc  attributed-by=none  size=272 */

int FUN_006a6e00(uint *param_1,int *param_2)

{
  uint uVar1;
  int in_ECX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *unaff_ESI;
  uint uVar4;
  int iVar5;
  
  uVar4 = *param_1;
  uVar1 = FUN_00693a60();
  unaff_ESI[3] = uVar1;
  if (in_ECX == 0) {
    uVar1 = FUN_00693a60();
    unaff_ESI[2] = uVar1;
    uVar1 = FUN_00693a60();
    unaff_ESI[6] = uVar1;
    puVar2 = (undefined4 *)unaff_ESI[2];
    unaff_ESI[4] = unaff_ESI[3] + uVar4 * 4;
    *unaff_ESI = uVar4;
    unaff_ESI[1] = 0;
    unaff_ESI[5] = 0;
    unaff_ESI[7] = 0;
    puVar3 = (undefined4 *)param_1[2];
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar2 = *puVar3;
      puVar2[1] = puVar3[1];
      puVar2[4] = puVar3[2];
      puVar2 = puVar2 + 7;
      puVar3 = puVar3 + 3;
    }
    if (param_2 != (int *)0x0) {
      iVar5 = *param_2;
      unaff_ESI[8] = (uint)param_2;
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        FUN_006a6db0();
      }
    }
    uVar4 = *unaff_ESI;
    if ((unaff_ESI[1] != uVar4) && (uVar1 = 0, uVar4 != 0)) {
      do {
        FUN_006a6d30();
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar4);
    }
  }
  return in_ECX;
}


/* FUN_006a6f10 @ 006a6f10  kind=gamemisc  attributed-by=none  size=186 */

void FUN_006a6f10(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *in_EAX;
  int iVar4;
  uint *in_ECX;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *local_8;
  uint local_4;
  
  iVar6 = *in_EAX;
  local_8 = (byte *)in_EAX[2];
  uVar8 = 0;
  uVar7 = 0;
  local_4 = 0;
  FUN_006a6d10();
  if (iVar6 != 0) {
    iVar5 = 0;
    do {
      if (uVar7 == 0) {
        local_4 = (uint)*local_8;
        local_8 = local_8 + 1;
        uVar7 = 0x80;
      }
      if ((local_4 & uVar7) != 0) {
        uVar1 = *(uint *)(in_ECX[2] + 0x10 + iVar5);
        iVar4 = in_ECX[2] + iVar5;
        if (((uVar1 & 4) == 0) && (*(uint *)(iVar4 + 0x10) = uVar1 | 4, uVar8 < *in_ECX)) {
          *(int *)(in_ECX[3] + uVar8 * 4) = iVar4;
          uVar8 = uVar8 + 1;
        }
      }
      uVar7 = (int)uVar7 >> 1;
      iVar5 = iVar5 + 0x1c;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  in_ECX[1] = uVar8;
  puVar2 = (undefined4 *)in_ECX[3];
  if (1 < (int)uVar8) {
    iVar6 = 0;
    local_4 = uVar8 - 1;
    local_8 = (byte *)puVar2;
    do {
      local_8 = (byte *)((int)local_8 + 4);
      piVar3 = *(int **)local_8;
      for (iVar5 = iVar6; (-1 < iVar5 && (*piVar3 <= *(int *)puVar2[iVar5])); iVar5 = iVar5 + -1) {
        puVar2[iVar5 + 1] = (int *)puVar2[iVar5];
        puVar2[iVar5] = piVar3;
      }
      iVar6 = iVar6 + 1;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return;
}


/* FUN_006a6fd0 @ 006a6fd0  kind=gamemisc  attributed-by=none  size=106 */

uint FUN_006a6fd0(char param_1)

{
  uint in_EAX;
  uint uVar1;
  int in_ECX;
  int iVar2;
  uint uVar3;
  
  if ((int)in_EAX < 0x41) {
    uVar1 = 0x40;
    goto LAB_006a702c;
  }
  uVar1 = *(uint *)(in_ECX + 8);
  iVar2 = in_EAX - uVar1;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if ((iVar2 < 0x28) && (in_EAX = uVar1, (int)uVar1 < 0x30)) {
    in_EAX = 0x30;
  }
  else if (0xbf < (int)in_EAX) {
    uVar1 = in_EAX + 0x20 & 0xffffffc0;
    goto LAB_006a702c;
  }
  uVar3 = in_EAX & 0x3f;
  uVar1 = in_EAX & 0xffffffc0;
  if (9 < uVar3) {
    if (uVar3 < 0x20) {
      uVar1 = uVar1 + 10;
      goto LAB_006a702c;
    }
    if (uVar3 < 0x36) {
      uVar1 = uVar1 + 0x36;
      goto LAB_006a702c;
    }
  }
  uVar1 = uVar1 + uVar3;
LAB_006a702c:
  if (param_1 != '\0') {
    uVar1 = uVar1 + 0x20 & 0xffffffc0;
  }
  return uVar1;
}


/* FUN_006a7040 @ 006a7040  kind=gamemisc  attributed-by=none  size=48 */

uint FUN_006a7040(void)

{
  int in_EAX;
  uint uVar1;
  int in_EDX;
  uint uVar2;
  
  uVar1 = ((in_EAX + 0x20 + in_EDX & 0xffffffc0U) - in_EAX) - in_EDX;
  uVar2 = (in_EAX + 0x20U & 0xffffffc0) - in_EAX;
  if ((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) <
      (int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f))) {
    uVar2 = uVar1;
  }
  return uVar2;
}


/* FUN_006a7070 @ 006a7070  kind=gamemisc  attributed-by=none  size=667 */

void FUN_006a7070(int *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int local_c;
  int local_8;
  int local_4;
  
  uVar1 = *(undefined4 *)(param_3 * 0xcc + 200 + param_2);
  iVar6 = *(int *)(param_3 * 0xcc + 0xcc + param_2);
  if ((*(byte *)(param_1 + 4) & 8) != 0) {
    return;
  }
  iVar5 = FUN_0068ebc0(*param_1,uVar1);
  uVar10 = iVar5 + iVar6;
  iVar6 = FUN_0068ebc0(param_1[1],uVar1);
  if (param_3 == 0) {
    if (*(char *)(param_4 + 0x78) == '\0') {
LAB_006a71ed:
      param_1[4] = param_1[4] | 8;
      param_1[2] = uVar10;
      param_1[3] = iVar6;
      return;
    }
    if (*(char *)(param_4 + 0x7a) == '\0') goto LAB_006a70f1;
LAB_006a7208:
    bVar4 = true;
  }
  else {
    if (param_3 == 1) {
      if (*(char *)(param_4 + 0x79) == '\0') goto LAB_006a71ed;
      if (*(char *)(param_4 + 0x7b) != '\0') goto LAB_006a7208;
    }
LAB_006a70f1:
    bVar4 = false;
  }
  param_1[3] = iVar6;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  if (param_3 == 1) {
    FUN_006a69c0(*param_1,&local_c);
  }
  if (local_c == 1) {
    local_4 = local_8 - iVar6;
LAB_006a7284:
    param_1[2] = local_4;
  }
  else {
    if (local_c == 2) goto LAB_006a7284;
    if (local_c == 3) {
      param_1[3] = local_8 - local_4;
      goto LAB_006a7284;
    }
    piVar2 = (int *)param_1[5];
    iVar5 = iVar6 >> 1;
    if (piVar2 != (int *)0x0) {
      if ((*(byte *)(piVar2 + 4) & 8) == 0) {
        FUN_006a7070(piVar2,param_2,param_3,param_4);
      }
      iVar8 = piVar2[3];
      iVar3 = piVar2[2];
      iVar7 = FUN_0068ebc0(((param_1[1] >> 1) + *param_1) - ((piVar2[1] >> 1) + *piVar2),uVar1);
      uVar10 = iVar7 + (((iVar8 >> 1) + iVar3) - iVar5);
    }
    param_1[2] = uVar10;
    param_1[3] = iVar6;
    uVar11 = uVar10;
    if (*(char *)(param_4 + 0x7c) != '\0') {
      if (iVar6 < 0x41) {
        if (iVar6 < 0x20) {
          if (iVar6 < 1) {
            uVar11 = uVar10 + 0x20 & 0xffffffc0;
          }
          else {
            uVar11 = iVar6 + 0x20 + uVar10 & 0xffffffc0;
            uVar9 = uVar10 + 0x20 & 0xffffffc0;
            iVar5 = (uVar11 - iVar6) - uVar10;
            iVar8 = uVar9 - uVar10;
            if (iVar8 < 0) {
              iVar8 = -iVar8;
            }
            if (iVar5 < 0) {
              iVar5 = -iVar5;
            }
            if (iVar8 <= iVar5) {
              uVar11 = uVar9;
            }
          }
        }
        else {
          iVar6 = 0x40;
          uVar11 = uVar10 + iVar5 & 0xffffffc0;
        }
      }
      else {
        iVar6 = FUN_006a6fd0(0);
      }
    }
    iVar5 = FUN_006a7040();
    param_1[2] = iVar5 + uVar11;
    param_1[3] = iVar6;
  }
  if (bVar4) {
    if (param_1[3] < 0x40) {
      uVar10 = 0x40;
    }
    else {
      uVar10 = param_1[3] + 0x20U & 0xffffffc0;
    }
    if (local_c == 1) {
      param_1[2] = local_8 - uVar10;
    }
    else if (local_c != 2) {
      if (local_c != 3) {
        iVar6 = (int)uVar10 >> 1;
        param_1[3] = uVar10;
        if ((uVar10 & 0x40) != 0) {
          param_1[4] = param_1[4] | 8;
          param_1[2] = ((iVar6 + param_1[2] & 0xffffffc0U) + 0x20) - iVar6;
          param_1[3] = uVar10;
          return;
        }
        param_1[4] = param_1[4] | 8;
        param_1[2] = (iVar6 + 0x20 + param_1[2] & 0xffffffc0U) - iVar6;
        param_1[3] = uVar10;
        return;
      }
      goto LAB_006a72ff;
    }
    param_1[3] = uVar10;
  }
LAB_006a72ff:
  param_1[4] = param_1[4] | 8;
  return;
}


/* FUN_006a7340 @ 006a7340  kind=gamemisc  attributed-by=none  size=385 */

void FUN_006a7340(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *local_1c;
  int local_18;
  int local_14;
  uint local_c;
  uint local_4;
  
  local_4 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      bVar4 = false;
      if (3 < *(uint *)(*(int *)(param_1 + 0xc) + 4 + local_4 * 8)) {
        piVar7 = *(int **)(*(int *)(param_1 + 0xc) + local_4 * 8);
        piVar5 = piVar7;
        do {
          piVar5 = (int *)piVar5[1];
          if (piVar5 == piVar7) goto LAB_006a74be;
          iVar9 = piVar5[9];
          iVar10 = piVar7[9];
          iVar1 = piVar5[10];
          iVar2 = piVar7[10];
          piVar3 = piVar7;
        } while ((iVar9 - iVar10 == 0) && (iVar1 - iVar2 == 0));
        do {
          piVar8 = piVar3;
          piVar3 = (int *)*piVar8;
          if (piVar3 == piVar7) goto LAB_006a74be;
          local_18 = piVar8[9] - piVar3[9];
          local_14 = piVar8[10] - piVar3[10];
        } while (((local_18 == 0) && (local_14 == 0)) ||
                (local_c = FUN_0068ef00(iVar9 - iVar10,iVar1 - iVar2,local_18,local_14),
                local_1c = piVar8, local_c == 0));
        do {
          do {
            piVar7 = piVar5;
            piVar5 = (int *)piVar7[1];
            if (piVar5 == piVar8) {
              bVar4 = true;
            }
            iVar9 = piVar5[9] - piVar7[9];
            iVar10 = piVar5[10] - piVar7[10];
          } while (((iVar9 == 0) && (iVar10 == 0)) ||
                  (uVar6 = FUN_0068ef00(local_18,local_14,iVar9,iVar10), uVar6 == 0));
          if ((int)(uVar6 ^ local_c) < 0) {
            do {
              local_1c[3] = local_1c[3] | 4;
              local_1c = (int *)local_1c[1];
            } while (local_1c != piVar7);
            local_1c[3] = local_1c[3] | 4;
          }
          local_1c = piVar7;
          local_18 = iVar9;
          local_14 = iVar10;
          local_c = uVar6;
        } while (!bVar4);
      }
LAB_006a74be:
      local_4 = local_4 + 1;
    } while (local_4 < *(uint *)(param_1 + 4));
  }
  return;
}


/* FUN_006a7520 @ 006a7520  kind=gamemisc  attributed-by=none  size=77 */

int FUN_006a7520(void)

{
  int iVar1;
  int iVar2;
  uint unaff_ESI;
  uint unaff_EDI;
  
  iVar2 = (unaff_ESI ^ (int)unaff_ESI >> 0x1f) - ((int)unaff_ESI >> 0x1f);
  iVar1 = (unaff_EDI ^ (int)unaff_EDI >> 0x1f) - ((int)unaff_EDI >> 0x1f);
  if (iVar1 * 0xc < iVar2) {
    return (uint)(-1 < (int)unaff_ESI) * 4 + -2;
  }
  if (iVar2 * 0xc < iVar1) {
    return (uint)((int)unaff_EDI < 0) * 2 + -1;
  }
  return 4;
}


/* FUN_006a7570 @ 006a7570  kind=gamemisc  attributed-by=none  size=65 */

void FUN_006a7570(void)

{
  int *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EBX;
  undefined4 uVar4;
  
  puVar3 = *(undefined4 **)(in_EAX[5] + 4);
  iVar2 = *in_EAX;
  if (iVar2 != 0) {
    puVar1 = (undefined4 *)(in_EAX[2] + 0x24);
    do {
      puVar1[-5] = 0;
      puVar1[-1] = 0;
      if (unaff_EBX == 0) {
        *puVar1 = *puVar3;
        uVar4 = puVar3[1];
      }
      else {
        *puVar1 = puVar3[1];
        uVar4 = *puVar3;
      }
      puVar1[1] = uVar4;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + 0xc;
      puVar3 = puVar3 + 2;
    } while (iVar2 != 0);
  }
  return;
}


/* FUN_006a7990 @ 006a7990  kind=gamemisc  attributed-by=none  size=470 */

void FUN_006a7990(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int in_EAX;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int unaff_EDI;
  
  iVar1 = *(int *)(in_EAX + 0xc);
  uVar2 = *(uint *)(in_EAX + 4);
  if (param_2 != 0) {
    puVar4 = (uint *)(param_1 + 0x10);
    do {
      uVar9 = *puVar4;
      uVar3 = puVar4[5];
      if ((uVar9 & 0x10) == 0) {
        iVar5 = (int)(char)puVar4[1];
        if (((((iVar5 == param_3) || (iVar5 == -param_3)) ||
             (iVar5 = (int)*(char *)((int)puVar4 + 5), iVar5 == param_3)) || (iVar5 == -param_3)) &&
           (iVar5 != 0)) {
          if (iVar5 == param_3) {
            uVar8 = 0;
            if (uVar2 != 0) {
              do {
                piVar7 = *(int **)(iVar1 + uVar8 * 4);
                iVar5 = uVar3 - *piVar7;
                if ((iVar5 < unaff_EDI) && (-iVar5 < unaff_EDI)) {
                  *puVar4 = uVar9 | 0x210;
                  puVar4[4] = (uint)piVar7;
                  break;
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar2);
            }
          }
          else if ((iVar5 == -param_3) && (uVar8 = 0, uVar2 != 0)) {
            do {
              piVar7 = *(int **)(iVar1 + uVar8 * 4);
              iVar5 = (uVar3 - piVar7[1]) - *piVar7;
              if ((iVar5 < unaff_EDI) && (-iVar5 < unaff_EDI)) {
                *puVar4 = uVar9 | 0x410;
                puVar4[4] = (uint)piVar7;
                break;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar2);
          }
        }
        else if ((uVar9 & 0x40) != 0) {
          if (param_3 == 2) {
            uVar8 = 0x80;
            uVar6 = 0x100;
          }
          else {
            uVar8 = 0x100;
            uVar6 = 0x80;
          }
          if ((uVar8 & uVar9) == 0) {
            if (((uVar6 & uVar9) != 0) && (uVar8 = 0, uVar2 != 0)) {
              do {
                piVar7 = *(int **)(iVar1 + uVar8 * 4);
                iVar5 = (uVar3 - piVar7[1]) - *piVar7;
                if ((iVar5 < unaff_EDI) && (-iVar5 < unaff_EDI)) {
                  uVar9 = uVar9 | 0x410;
                  goto LAB_006a7b04;
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar2);
            }
          }
          else {
            uVar8 = 0;
            if (uVar2 != 0) {
LAB_006a7ab1:
              piVar7 = *(int **)(iVar1 + uVar8 * 4);
              if ((unaff_EDI <= (int)(uVar3 - *piVar7)) || (unaff_EDI <= (int)-(uVar3 - *piVar7)))
              goto LAB_006a7ac3;
              uVar9 = uVar9 | 0x210;
LAB_006a7b04:
              *puVar4 = uVar9;
              puVar4[4] = (uint)piVar7;
            }
          }
LAB_006a7b0d:
          if ((puVar4[4] == 0) && (uVar9 = 0, uVar2 != 0)) {
            do {
              piVar7 = *(int **)(iVar1 + uVar9 * 4);
              if ((*piVar7 <= (int)uVar3) && ((int)uVar3 <= piVar7[1] + *piVar7)) {
                puVar4[4] = (uint)piVar7;
                break;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar2);
          }
        }
      }
      param_2 = param_2 + -1;
      puVar4 = puVar4 + 0xc;
    } while (param_2 != 0);
  }
  return;
LAB_006a7ac3:
  uVar8 = uVar8 + 1;
  if (uVar2 <= uVar8) goto LAB_006a7b0d;
  goto LAB_006a7ab1;
}


/* FUN_006a8560 @ 006a8560  kind=gamemisc  attributed-by=none  size=217 */

undefined2 FUN_006a8560(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  
  if ((param_1 != (char *)0x0) && (param_1 < param_2)) {
    pcVar6 = param_1 + 1;
    iVar8 = 0;
    iVar7 = 0x34;
    do {
      iVar2 = iVar7 + iVar8 >> 1;
      pbVar3 = &DAT_00725408 + CONCAT11((&UNK_0072540a)[iVar2 * 2],(&UNK_0072540b)[iVar2 * 2]);
      if ((*pbVar3 & 0x7f) == (int)*param_1) {
        while (pcVar6 < param_2) {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          if ((*pbVar3 & 0x80) == 0) {
            pbVar4 = pbVar3 + 1;
            uVar5 = pbVar3[1] & 0x7f;
            if ((char)pbVar3[1] < '\0') {
              pbVar4 = pbVar3 + 3;
            }
            pbVar4 = pbVar4 + 1;
            while( true ) {
              if ((int)uVar5 < 1) {
                return 0;
              }
              pbVar3 = &DAT_00725408 + CONCAT11(*pbVar4,pbVar4[1]);
              if ((int)cVar1 == (*pbVar3 & 0x7f)) break;
              uVar5 = uVar5 - 1;
              pbVar4 = pbVar4 + 2;
            }
          }
          else {
            pbVar4 = pbVar3 + 1;
            pbVar3 = pbVar3 + 1;
            if ((int)cVar1 != (*pbVar4 & 0x7f)) {
              return 0;
            }
          }
        }
        if ((*pbVar3 & 0x80) != 0) {
          return 0;
        }
        if ((pbVar3[1] & 0x80) == 0) {
          return 0;
        }
        return CONCAT11(pbVar3[2],pbVar3[3]);
      }
      if ((int)(*pbVar3 & 0x7f) < (int)*param_1) {
        iVar8 = iVar2 + 1;
        iVar2 = iVar7;
      }
      iVar7 = iVar2;
    } while (iVar8 < iVar2);
  }
  return 0;
}


/* FUN_006a8640 @ 006a8640  kind=gamemisc  attributed-by=none  size=217 */

uint FUN_006a8640(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  if (*param_1 == 'u') {
    pbVar7 = (byte *)(param_1 + 1);
    if ((param_1[1] == 'n') && (param_1[2] == 'i')) {
      uVar2 = 0;
      pbVar8 = (byte *)(param_1 + 3);
      iVar6 = 4;
      do {
        uVar5 = (uint)*pbVar8;
        uVar4 = uVar5 - 0x30;
        if (9 < uVar4) {
          if (5 < uVar5 - 0x41) break;
          uVar4 = uVar5 - 0x37;
        }
        if (0xf < uVar4) break;
        iVar6 = iVar6 + -1;
        uVar2 = uVar2 * 0x10 + uVar4;
        pbVar8 = pbVar8 + 1;
      } while (0 < iVar6);
      if (iVar6 == 0) {
        if (*pbVar8 == 0) {
          return uVar2;
        }
        if (*pbVar8 == 0x2e) goto LAB_006a8719;
      }
    }
    uVar2 = 0;
    iVar6 = 6;
    do {
      uVar5 = (uint)*pbVar7;
      uVar4 = uVar5 - 0x30;
      if (9 < uVar4) {
        if (5 < uVar5 - 0x41) break;
        uVar4 = uVar5 - 0x37;
      }
      if (0xf < uVar4) break;
      iVar6 = iVar6 + -1;
      uVar2 = uVar2 * 0x10 + uVar4;
      pbVar7 = pbVar7 + 1;
    } while (0 < iVar6);
    if (iVar6 < 3) {
      if (*pbVar7 == 0) {
        return uVar2;
      }
      if (*pbVar7 == 0x2e) goto LAB_006a8719;
    }
  }
  cVar1 = *param_1;
  pcVar3 = param_1;
  while( true ) {
    if (cVar1 == '\0') {
      uVar2 = FUN_006a8560(param_1,pcVar3);
      return uVar2;
    }
    if ((cVar1 == '.') && (param_1 < pcVar3)) break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 1;
  }
  uVar2 = FUN_006a8560(param_1,pcVar3);
LAB_006a8719:
  return uVar2 | 0x80000000;
}


/* FUN_006a8770 @ 006a8770  kind=gamemisc  attributed-by=none  size=96 */

void FUN_006a8770(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int unaff_EBX;
  uint uVar5;
  byte *unaff_EDI;
  bool bVar6;
  
  uVar5 = 0;
  do {
    pbVar2 = (byte *)("Delta" + (&DAT_00732a90)[uVar5]);
    pbVar4 = unaff_EDI;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_006a87b0:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_006a87b5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_006a87b0;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_006a87b5:
    if (iVar3 == 0) {
      if (*(int *)(unaff_EBX + uVar5 * 4) == 0) {
        *(undefined4 *)(unaff_EBX + uVar5 * 4) = 1;
        *(undefined4 *)(param_2 + uVar5 * 4) = param_1;
      }
      return;
    }
    uVar5 = uVar5 + 1;
    if (9 < uVar5) {
      return;
    }
  } while( true );
}


/* FUN_006a87e0 @ 006a87e0  kind=gamemisc  attributed-by=none  size=30 */

void FUN_006a87e0(int param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = 0;
  do {
    if (in_ECX == (&DAT_00732a10)[uVar1]) {
      *(undefined4 *)(param_1 + uVar1 * 4) = 2;
      return;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 10);
  return;
}


/* FUN_006a8cd0 @ 006a8cd0  kind=gamemisc  attributed-by=none  size=39 */

void FUN_006a8cd0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  
  piVar3 = (int *)in_ECX[6];
  iVar2 = *in_ECX;
  piVar1 = piVar3 + in_ECX[4];
  for (; piVar3 < piVar1; piVar3 = piVar3 + 1) {
    if (*piVar3 != 0) {
      *piVar3 = *piVar3 + (iVar2 - param_1);
    }
  }
  return;
}


/* FUN_006a8ed0 @ 006a8ed0  kind=gamemisc  attributed-by=none  size=26 */

void FUN_006a8ed0(void)

{
  char *pcVar1;
  undefined4 *in_EDX;
  char *unaff_ESI;
  
  for (pcVar1 = (char *)*in_EDX; ((pcVar1 < unaff_ESI && (*pcVar1 != '\r')) && (*pcVar1 != '\n'));
      pcVar1 = pcVar1 + 1) {
  }
  *in_EDX = pcVar1;
  return;
}


/* FUN_006a8ef0 @ 006a8ef0  kind=gamemisc  attributed-by=none  size=73 */

void FUN_006a8ef0(void)

{
  char cVar1;
  char *in_EAX;
  char *pcVar2;
  undefined4 *unaff_EDI;
  
  for (pcVar2 = (char *)*unaff_EDI; pcVar2 < in_EAX; pcVar2 = pcVar2 + 1) {
    cVar1 = *pcVar2;
    if ((((cVar1 != ' ') && (cVar1 != '\r')) && (cVar1 != '\n')) &&
       (((cVar1 != '\t' && (cVar1 != '\f')) && (cVar1 != '\0')))) {
      if (cVar1 != '%') break;
      FUN_006a8ed0();
    }
  }
  *unaff_EDI = pcVar2;
  return;
}


/* FUN_006a8f40 @ 006a8f40  kind=gamemisc  attributed-by=none  size=124 */

undefined4 FUN_006a8f40(undefined4 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte *unaff_EDI;
  
  pbVar4 = (byte *)*param_1;
  iVar5 = 0;
  uVar2 = 3;
  pbVar3 = pbVar4;
  if (unaff_EDI <= pbVar4) {
LAB_006a8fb6:
    *param_1 = pbVar4;
    return uVar2;
  }
  do {
    bVar1 = *pbVar3;
    pbVar4 = pbVar3 + 1;
    if (bVar1 == 0x5c) {
      uVar2 = 3;
      if (pbVar4 == unaff_EDI) goto LAB_006a8fb6;
      switch(*pbVar4) {
      case 0x28:
      case 0x29:
      case 0x5c:
      case 0x62:
      case 0x66:
      case 0x6e:
      case 0x72:
      case 0x74:
        pbVar4 = pbVar3 + 2;
        break;
      default:
        uVar6 = 0;
        do {
          uVar2 = 3;
          if (unaff_EDI <= pbVar4) goto LAB_006a8fb6;
          if ((*pbVar4 < 0x30) || (0x37 < *pbVar4)) break;
          uVar6 = uVar6 + 1;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 < 3);
      }
    }
    else if (bVar1 == 0x28) {
      iVar5 = iVar5 + 1;
    }
    else if ((bVar1 == 0x29) && (iVar5 = iVar5 + -1, iVar5 == 0)) {
      uVar2 = 0;
      goto LAB_006a8fb6;
    }
    pbVar3 = pbVar4;
    if (unaff_EDI <= pbVar4) {
      *param_1 = pbVar4;
      return 3;
    }
  } while( true );
}


/* FUN_006a9020 @ 006a9020  kind=gamemisc  attributed-by=none  size=95 */

undefined4 FUN_006a9020(void)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 *unaff_EBX;
  byte *unaff_ESI;
  
  pbVar2 = (byte *)*unaff_EBX;
  do {
    pbVar3 = pbVar2;
    pbVar2 = pbVar3 + 1;
    if ((unaff_ESI <= pbVar2) || (FUN_006a8ef0(), unaff_ESI <= pbVar2)) goto LAB_006a9066;
    bVar1 = *pbVar2;
  } while ((((0x2f < bVar1) && (bVar1 < 0x3a)) || ((0x40 < bVar1 && (bVar1 < 0x47)))) ||
          ((0x60 < bVar1 && (bVar1 < 0x67))));
  if (*pbVar2 != 0x3e) {
    *unaff_EBX = pbVar2;
    return 3;
  }
LAB_006a9066:
  *unaff_EBX = pbVar3 + 2;
  return 0;
}


/* FUN_006a9080 @ 006a9080  kind=gamemisc  attributed-by=none  size=153 */

int FUN_006a9080(undefined4 *param_1)

{
  undefined1 *in_EAX;
  int iVar1;
  int iVar2;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)*param_1;
  iVar2 = 0;
  iVar1 = 0;
  if (local_4 < in_EAX) {
    do {
      if (iVar1 != 0) break;
      switch(*local_4) {
      case 0x25:
        FUN_006a8ed0();
        break;
      case 0x28:
        iVar1 = FUN_006a8f40(&local_4);
        break;
      case 0x3c:
        iVar1 = FUN_006a9020();
        break;
      case 0x7b:
        iVar2 = iVar2 + 1;
        break;
      case 0x7d:
        iVar2 = iVar2 + -1;
        if (iVar2 == 0) {
          local_4 = local_4 + 1;
          goto LAB_006a90c4;
        }
      }
      local_4 = local_4 + 1;
    } while (local_4 < in_EAX);
    *param_1 = local_4;
    if (iVar2 != 0) {
      return 3;
    }
  }
  else {
LAB_006a90c4:
    *param_1 = local_4;
  }
  return iVar1;
}


/* FUN_006a9190 @ 006a9190  kind=gamemisc  attributed-by=none  size=295 */

void FUN_006a9190(int *param_1)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = param_1;
  pcVar2 = (char *)param_1[2];
  iVar4 = 0;
  param_1 = (int *)*param_1;
  FUN_006a8ef0();
  if (pcVar2 <= param_1) goto LAB_006a929a;
  cVar1 = *(char *)param_1;
  if ((cVar1 != '[') && (cVar1 != ']')) {
    if (cVar1 == '{') {
      iVar4 = FUN_006a9080(&param_1);
      goto LAB_006a929a;
    }
    if (cVar1 == '(') {
      iVar4 = FUN_006a8f40(&param_1);
      goto LAB_006a929a;
    }
    if (cVar1 == '<') {
      if (((char *)((int)param_1 + 1) < pcVar2) && (*(char *)((int)param_1 + 1) == '<')) {
        param_1 = (int *)((int)param_1 + 2);
      }
      else {
        iVar4 = FUN_006a9020();
      }
      goto LAB_006a929a;
    }
    if (cVar1 != '>') {
      if (cVar1 == '/') {
        param_1 = (int *)((int)param_1 + 1);
      }
      if (param_1 < pcVar2) {
        iVar4 = 0;
        while ((((((cVar1 = *(char *)param_1, cVar1 != ' ' && (cVar1 != '\r')) && (cVar1 != '\n'))
                 && ((cVar1 != '\t' && (cVar1 != '\f')))) &&
                ((cVar1 != '\0' && ((cVar1 != '/' && (cVar1 != '(')))))) && (cVar1 != ')'))) {
          if ((((cVar1 == '<') || (cVar1 == '>')) || (cVar1 == '[')) ||
             (((cVar1 == ']' || (cVar1 == '{')) ||
              ((cVar1 == '}' ||
               ((cVar1 == '%' || (param_1 = (int *)((int)param_1 + 1), pcVar2 <= param_1))))))))
          break;
        }
      }
      goto LAB_006a929a;
    }
    param_1 = (int *)((int)param_1 + 1);
    if ((pcVar2 <= param_1) || (*(char *)param_1 != '>')) {
      iVar4 = 3;
      goto LAB_006a929a;
    }
  }
  param_1 = (int *)((int)param_1 + 1);
LAB_006a929a:
  pcVar2 = (char *)*piVar3;
  *piVar3 = (int)param_1;
  if (param_1 != (int *)pcVar2) {
    piVar3[3] = iVar4;
    return;
  }
  piVar3[3] = 3;
  return;
}


/* FUN_006a92d0 @ 006a92d0  kind=gamemisc  attributed-by=none  size=281 */

void FUN_006a92d0(undefined4 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  bool bVar7;
  
  puVar4 = (undefined4 *)param_2;
  *(undefined4 *)((int)param_2 + 8) = 0;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  FUN_006a92c0(param_1);
  param_2 = (char *)*param_1;
  pcVar2 = (char *)param_1[2];
  if (pcVar2 <= param_2) {
    return;
  }
  cVar1 = *param_2;
  *puVar4 = param_2;
  if (cVar1 == '(') {
    puVar4[2] = 2;
    iVar6 = FUN_006a8f40(&param_2);
    bVar7 = iVar6 == 0;
  }
  else {
    if (cVar1 == '[') {
      puVar4[2] = 3;
      iVar6 = 1;
      *param_1 = param_2 + 1;
      FUN_006a92c0(param_1);
      pcVar5 = (char *)*param_1;
      pcVar3 = param_2;
      while ((param_2 = pcVar5, param_2 < pcVar2 && (param_1[3] == 0))) {
        if (*param_2 == '[') {
          iVar6 = iVar6 + 1;
        }
        else if ((*param_2 == ']') && (iVar6 = iVar6 + -1, iVar6 < 1)) {
          param_2 = param_2 + 1;
          goto LAB_006a9333;
        }
        param_2 = pcVar3;
        FUN_006a9190(param_1);
        FUN_006a92c0(param_1);
        pcVar5 = (char *)*param_1;
        pcVar3 = param_2;
      }
      goto LAB_006a9336;
    }
    if (cVar1 == '{') {
      puVar4[2] = 3;
      iVar6 = FUN_006a9080(&param_2);
      bVar7 = iVar6 == 0;
    }
    else {
      puVar4[2] = ((*param_2 != '/') - 1 & 3) + 1;
      FUN_006a9190(param_1);
      param_2 = (char *)*param_1;
      bVar7 = param_1[3] == 0;
    }
  }
  if (bVar7) {
LAB_006a9333:
    puVar4[1] = param_2;
  }
LAB_006a9336:
  if (puVar4[1] == 0) {
    *puVar4 = 0;
    puVar4[2] = 0;
  }
  *param_1 = param_2;
  return;
}


/* FUN_006a9560 @ 006a9560  kind=gamemisc  attributed-by=none  size=139 */

void FUN_006a9560(undefined4 *param_1,int param_2,int param_3,int param_4,char param_5)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_1[1] = param_2;
  param_1[2] = param_4;
  *param_1 = *(undefined4 *)(param_2 + 100);
  if (param_4 != 0) {
    iVar1 = **(int **)(param_4 + 0x9c);
    param_1[3] = iVar1;
    param_1[4] = iVar1 + 0x14;
    param_1[5] = iVar1 + 0x38;
    FUN_0068f020(iVar1);
    param_1[0x13] = *(undefined4 *)(param_3 + 0x28);
    param_1[0x12] = 0;
    if (param_5 != '\0') {
      param_1[0x12] = *(undefined4 *)(*(int *)(param_4 + 0x9c) + 0x24);
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  ppuVar2 = &PTR_FUN_00732e5c;
  puVar3 = param_1 + 0x14;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *ppuVar2;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


/* FUN_006a9620 @ 006a9620  kind=gamemisc  attributed-by=none  size=52 */

undefined4 FUN_006a9620(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (*(uint *)(iVar1 + 4) <
        (uint)((int)*(short *)(iVar1 + 0x16) + *(short *)(iVar1 + 0x3a) + param_2)) {
      uVar2 = FUN_00693c40(iVar1,param_2,0);
      return uVar2;
    }
  }
  return 0;
}


/* FUN_006a9700 @ 006a9700  kind=gamemisc  attributed-by=none  size=103 */

int FUN_006a9700(int param_1)

{
  short *psVar1;
  int iVar2;
  
  psVar1 = *(short **)(param_1 + 0x14);
  if (psVar1 == (short *)0x0) {
    return 3;
  }
  if (*(char *)(param_1 + 0x44) == '\0') {
    *psVar1 = *psVar1 + 1;
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0xc);
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


/* FUN_006a9840 @ 006a9840  kind=gamemisc  attributed-by=none  size=133 */

uint FUN_006a9840(void)

{
  byte bVar1;
  int in_EAX;
  byte *pbVar2;
  uint uVar3;
  uint in_ECX;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  if (0xff < in_ECX) {
    return 0xffffffff;
  }
  pbVar2 = (byte *)(**(code **)(*(int *)(in_EAX + 0x544) + 0x14))
                             (*(undefined2 *)
                               (*(int *)(*(int *)(in_EAX + 0x544) + 0x18) + in_ECX * 2));
  uVar3 = 0;
  if (*(uint *)(in_EAX + 0x548) != 0) {
    puVar7 = *(undefined4 **)(in_EAX + 0x54c);
    do {
      pbVar4 = (byte *)*puVar7;
      if ((pbVar4 != (byte *)0x0) && (pbVar6 = pbVar2, *pbVar4 == *pbVar2)) {
        do {
          bVar1 = *pbVar4;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_006a98a7:
            iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_006a98ac;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_006a98a7;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_006a98ac:
        if (iVar5 == 0) {
          return uVar3;
        }
      }
      uVar3 = uVar3 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar3 < *(uint *)(in_EAX + 0x548));
  }
  return 0xffffffff;
}


/* FUN_006a9a00 @ 006a9a00  kind=gamemisc  attributed-by=none  size=140 */

uint FUN_006a9a00(int param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  uint uVar7;
  bool bVar8;
  
  if (0xff < param_2) {
    return 0;
  }
  pbVar2 = (byte *)(**(code **)(param_1 + 0x14))
                             (*(undefined2 *)(*(int *)(param_1 + 0x10) + param_2 * 2));
  uVar7 = 0;
  if (*(uint *)(param_1 + 0x18) == 0) {
    return 0;
  }
  puVar6 = *(undefined4 **)(param_1 + 0x1c);
  do {
    pbVar3 = (byte *)*puVar6;
    if ((pbVar3 != (byte *)0x0) && (pbVar5 = pbVar2, *pbVar3 == *pbVar2)) {
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_006a9a62:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_006a9a67;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_006a9a62;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_006a9a67:
      if (iVar4 == 0) {
        return uVar7;
      }
    }
    uVar7 = uVar7 + 1;
    puVar6 = puVar6 + 1;
    if (*(uint *)(param_1 + 0x18) <= uVar7) {
      return 0;
    }
  } while( true );
}


/* FUN_006a9c50 @ 006a9c50  kind=gamemisc  attributed-by=none  size=102 */

uint FUN_006a9c50(void)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 *in_EDX;
  
  if (0 < (int)in_EDX[3]) {
    return 0x3b;
  }
  do {
    pbVar1 = (byte *)*in_EDX;
    if ((byte *)in_EDX[2] <= pbVar1) {
      in_EDX[3] = 3;
      return 0xffffffff;
    }
    uVar2 = (uint)*pbVar1;
    *in_EDX = pbVar1 + 1;
  } while ((uVar2 == 0x20) || (uVar2 == 9));
  if ((uVar2 == 0xd) || (uVar2 == 10)) {
    in_EDX[3] = 2;
  }
  else {
    if (uVar2 == 0x3b) {
      in_EDX[3] = 1;
      return 0x3b;
    }
    if ((uVar2 == 0xffffffff) || (uVar2 == 0x1a)) {
      in_EDX[3] = 3;
      return uVar2;
    }
  }
  return uVar2;
}


/* FUN_006a9cc0 @ 006a9cc0  kind=gamemisc  attributed-by=none  size=99 */

int FUN_006a9cc0(void)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int *extraout_EDX;
  
  FUN_006a9c50();
  if (0 < extraout_EDX[3]) {
    return 0;
  }
  iVar2 = *extraout_EDX + -1;
  while (pbVar1 = (byte *)*extraout_EDX, pbVar1 < (byte *)extraout_EDX[2]) {
    uVar3 = (uint)*pbVar1;
    *extraout_EDX = (int)(pbVar1 + 1);
    if ((uVar3 == 0x20) || (uVar3 == 9)) {
      return iVar2;
    }
    if ((uVar3 == 0xd) || (uVar3 == 10)) {
      extraout_EDX[3] = 2;
      return iVar2;
    }
    if (uVar3 == 0x3b) {
      extraout_EDX[3] = 1;
      return iVar2;
    }
    if ((uVar3 == 0xffffffff) || (uVar3 == 0x1a)) break;
  }
  extraout_EDX[3] = 3;
  return iVar2;
}


/* FUN_006a9d30 @ 006a9d30  kind=gamemisc  attributed-by=none  size=74 */

int FUN_006a9d30(void)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int *extraout_EDX;
  
  FUN_006a9c50();
  if (1 < extraout_EDX[3]) {
    return 0;
  }
  iVar1 = *extraout_EDX;
  while (pbVar2 = (byte *)*extraout_EDX, pbVar2 < (byte *)extraout_EDX[2]) {
    uVar3 = (uint)*pbVar2;
    *extraout_EDX = (int)(pbVar2 + 1);
    if ((uVar3 == 0xd) || (uVar3 == 10)) {
      extraout_EDX[3] = 2;
      return iVar1 + -1;
    }
    if ((uVar3 == 0xffffffff) || (uVar3 == 0x1a)) break;
  }
  extraout_EDX[3] = 3;
  return iVar1 + -1;
}


/* FUN_006a9d80 @ 006a9d80  kind=gamemisc  attributed-by=none  size=130 */

void FUN_006a9d80(char param_1,int *param_2)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined8 uVar3;
  
  iVar2 = *(int *)(in_EAX + 4);
  if (param_1 == '\0') {
    do {
      iVar1 = *(int *)(iVar2 + 0xc);
      while (iVar1 < 1) {
        FUN_006a9cc0();
        iVar2 = extraout_EDX_00;
        iVar1 = *(int *)(extraout_EDX_00 + 0xc);
      }
      *(undefined4 *)(iVar2 + 0xc) = 0;
      uVar3 = FUN_006a9cc0();
      iVar2 = (int)((ulonglong)uVar3 >> 0x20);
    } while ((((int)uVar3 == 0) && (*(int *)(iVar2 + 0xc) < 3)) && (0 < *(int *)(iVar2 + 0xc)));
  }
  else {
    do {
      if (*(int *)(iVar2 + 0xc) < 2) {
        FUN_006a9d30();
        iVar2 = extraout_EDX;
      }
      *(undefined4 *)(iVar2 + 0xc) = 0;
      uVar3 = FUN_006a9cc0();
      iVar2 = (int)((ulonglong)uVar3 >> 0x20);
    } while ((((int)uVar3 == 0) && (*(int *)(iVar2 + 0xc) < 3)) && (1 < *(int *)(iVar2 + 0xc)));
  }
  if (param_2 != (int *)0x0) {
    if ((int)uVar3 != 0) {
      *param_2 = (*(int *)((ulonglong)uVar3 >> 0x20) - (int)uVar3) + -1;
      return;
    }
    *param_2 = 0;
  }
  return;
}


/* FUN_006a9e10 @ 006a9e10  kind=gamemisc  attributed-by=none  size=72 */

int FUN_006a9e10(void)

{
  int iVar1;
  size_t unaff_EBX;
  int iVar2;
  char *unaff_EDI;
  
  iVar2 = 0;
  do {
    if (*(&PTR_s_Ascender_00732ff8)[iVar2] == *unaff_EDI) {
      for (; iVar2 < 0x4a; iVar2 = iVar2 + 1) {
        if (*(&PTR_s_Ascender_00732ff8)[iVar2] != *unaff_EDI) {
          return 0x4b;
        }
        iVar1 = strncmp((&PTR_s_Ascender_00732ff8)[iVar2],unaff_EDI,unaff_EBX);
        if (iVar1 == 0) {
          return iVar2;
        }
      }
    }
    iVar2 = iVar2 + 1;
    if (0x49 < iVar2) {
      return 0x4b;
    }
  } while( true );
}


/* FUN_006a9f80 @ 006a9f80  kind=gamemisc  attributed-by=none  size=145 */

int FUN_006a9f80(undefined4 *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  byte *unaff_ESI;
  int unaff_EDI;
  bool bVar5;
  
  pbVar4 = (byte *)*param_1;
  iVar3 = 0;
  bVar5 = false;
  if ((pbVar4 != unaff_ESI) && (unaff_EDI - 2U < 0x23)) {
    bVar1 = *pbVar4;
    if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
      bVar5 = bVar1 == 0x2d;
      pbVar4 = pbVar4 + 1;
      if (pbVar4 == unaff_ESI) {
        return 0;
      }
    }
    while (((((((pbVar4 < unaff_ESI && (bVar1 = *pbVar4, bVar1 != 0x20)) && (bVar1 != 0xd)) &&
              ((bVar1 != 10 && (bVar1 != 9)))) &&
             ((bVar1 != 0xc && ((bVar1 != 0 && (bVar1 < 0x80)))))) &&
            (cVar2 = (&DAT_00733120)[bVar1 & 0x7f], -1 < cVar2)) && (cVar2 < unaff_EDI))) {
      pbVar4 = pbVar4 + 1;
      iVar3 = iVar3 * unaff_EDI + (int)cVar2;
    }
    if (bVar5) {
      iVar3 = -iVar3;
    }
    *param_1 = pbVar4;
    return iVar3;
  }
  return 0;
}


/* FUN_006aa050 @ 006aa050  kind=gamemisc  attributed-by=none  size=349 */

int FUN_006aa050(uint *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  pbVar4 = (byte *)*param_1;
  iVar6 = 0;
  bVar7 = false;
  if (pbVar4 == param_2) {
    return 0;
  }
  bVar1 = *pbVar4;
  if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
    bVar7 = bVar1 == 0x2d;
    pbVar4 = pbVar4 + 1;
    if (pbVar4 == param_2) {
      return 0;
    }
  }
  if (*pbVar4 == 0x2e) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_006aa020();
    iVar2 = iVar2 << 0x10;
  }
  iVar5 = 1;
  if ((param_2 <= pbVar4) || (iVar5 = 1, iVar3 = 1, *pbVar4 != 0x2e)) {
LAB_006aa11f:
    if ((pbVar4 + 1 < param_2) && ((*pbVar4 == 0x65 || (*pbVar4 == 0x45)))) {
      iVar3 = FUN_006aa020();
      param_3 = param_3 + iVar3;
      pbVar4 = pbVar4 + 1;
    }
    for (; 0 < param_3; param_3 = param_3 + -1) {
      iVar2 = iVar2 * 10;
      iVar6 = iVar6 * 10;
    }
    if (param_3 < 0) {
      param_3 = -param_3;
      do {
        iVar2 = iVar2 / 10;
        iVar5 = iVar5 * 10;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    if (iVar6 != 0) {
      iVar6 = FUN_0068ec40(iVar6,iVar5);
      iVar2 = iVar2 + iVar6;
    }
    if (bVar7) {
      iVar2 = -iVar2;
    }
    *param_1 = (uint)pbVar4;
    return iVar2;
  }
joined_r0x006aa0c3:
  iVar5 = iVar3;
  pbVar4 = pbVar4 + 1;
  if ((((pbVar4 < param_2) &&
       ((((bVar1 = *pbVar4, bVar1 != 0x20 && (bVar1 != 0xd)) && (bVar1 != 10)) &&
        ((bVar1 != 9 && (bVar1 != 0xc)))))) && (bVar1 != 0)) &&
     ((bVar1 < 0x80 && ((byte)(&DAT_00733120)[bVar1 & 0x7f] < 10)))) {
    if ((iVar2 != 0) || (param_3 < 1)) goto LAB_006aa103;
    param_3 = param_3 + -1;
    goto LAB_006aa111;
  }
  goto LAB_006aa11f;
LAB_006aa103:
  iVar3 = iVar5;
  if (iVar5 < 10000000) {
    iVar5 = iVar5 * 10;
LAB_006aa111:
    iVar6 = (int)(char)(&DAT_00733120)[bVar1 & 0x7f] + iVar6 * 10;
    iVar3 = iVar5;
  }
  goto joined_r0x006aa0c3;
}


/* FUN_006aa1c0 @ 006aa1c0  kind=gamemisc  attributed-by=none  size=156 */

int FUN_006aa1c0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = *param_1;
  uVar5 = 0;
  iVar2 = 0;
  uVar4 = 1;
  uVar6 = in_ECX * 2;
  if ((uint)(param_2 - iVar1) < (uint)(in_ECX * 2)) {
    uVar6 = param_2 - iVar1;
  }
  if (uVar6 != 0) {
    do {
      uVar3 = (uint)*(byte *)(iVar1 + uVar5);
      if (((((uVar3 != 0x20) && (uVar3 != 0xd)) && (uVar3 != 10)) &&
          ((uVar3 != 9 && (uVar3 != 0xc)))) && (uVar3 != 0)) {
        if ((0x7f < uVar3) || (0xf < (uint)(int)(char)(&DAT_00733120)[uVar3 & 0x7f])) break;
        uVar4 = uVar4 << 4 | (int)(char)(&DAT_00733120)[uVar3 & 0x7f];
        if ((uVar4 & 0x100) != 0) {
          *(char *)(iVar2 + param_3) = (char)uVar4;
          iVar2 = iVar2 + 1;
          uVar4 = 1;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    if (uVar4 != 1) {
      *(char *)(iVar2 + param_3) = (char)uVar4 << 4;
      iVar2 = iVar2 + 1;
    }
  }
  *param_1 = iVar1 + uVar5;
  return iVar2;
}


/* FUN_006aa2e0 @ 006aa2e0  kind=gamemisc  attributed-by=none  size=246 */

int FUN_006aa2e0(undefined4 *param_1,char *param_2,int param_3,undefined4 *param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined2 extraout_var;
  char cVar3;
  undefined4 *puVar4;
  char *local_c;
  int local_8;
  undefined4 *local_4;
  
  pcVar1 = param_2;
  local_c = (char *)*param_1;
  local_8 = 0;
  if (param_2 <= local_c) goto LAB_006aa3c7;
  cVar3 = '\0';
  if (*local_c == '[') {
    cVar3 = ']';
LAB_006aa317:
    local_c = local_c + 1;
  }
  else if (*local_c == '{') {
    cVar3 = '}';
    goto LAB_006aa317;
  }
  if (local_c < param_2) {
    local_4 = param_4;
    while (FUN_006a8ef0(), pcVar2 = local_c, local_c < pcVar1) {
      if (*local_c == cVar3) {
        *param_1 = local_c + 1;
        return local_8;
      }
      if (param_4 == (undefined4 *)0x0) {
        puVar4 = &param_2;
      }
      else {
        puVar4 = local_4;
        if (param_3 <= local_8) break;
      }
      FUN_006aa050(&local_c,pcVar1,0);
      *(undefined2 *)puVar4 = extraout_var;
      if (pcVar2 == local_c) {
        local_8 = -1;
        break;
      }
      local_8 = local_8 + 1;
      local_4 = (undefined4 *)((int)local_4 + 2);
      if (cVar3 == '\0') break;
      if (pcVar1 <= local_c) {
        *param_1 = local_c;
        return local_8;
      }
    }
  }
LAB_006aa3c7:
  *param_1 = local_c;
  return local_8;
}


/* FUN_006aa3e0 @ 006aa3e0  kind=gamemisc  attributed-by=none  size=230 */

int FUN_006aa3e0(undefined4 *param_1,char *param_2,int param_3,undefined4 *param_4,
                undefined4 param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  char *local_c;
  undefined4 *local_8;
  undefined4 local_4;
  
  pcVar1 = param_2;
  local_c = (char *)*param_1;
  iVar4 = 0;
  if (param_2 <= local_c) goto LAB_006aa4b8;
  param_2._0_1_ = '\0';
  if (*local_c == '[') {
    param_2._0_1_ = ']';
LAB_006aa419:
    local_c = local_c + 1;
  }
  else if (*local_c == '{') {
    param_2._0_1_ = '}';
    goto LAB_006aa419;
  }
  if (local_c < pcVar1) {
    local_8 = param_4;
    while (FUN_006a8ef0(), pcVar2 = local_c, local_c < pcVar1) {
      if (*local_c == (char)param_2) {
        *param_1 = local_c + 1;
        return iVar4;
      }
      if (param_4 == (undefined4 *)0x0) {
        puVar5 = &local_4;
      }
      else {
        puVar5 = local_8;
        if (param_3 <= iVar4) break;
      }
      uVar3 = FUN_006aa050(&local_c,pcVar1,param_5);
      *puVar5 = uVar3;
      if (pcVar2 == local_c) {
        iVar4 = -1;
        break;
      }
      local_8 = local_8 + 1;
      iVar4 = iVar4 + 1;
      if ((char)param_2 == '\0') break;
      if (pcVar1 <= local_c) {
        *param_1 = local_c;
        return iVar4;
      }
    }
  }
LAB_006aa4b8:
  *param_1 = local_c;
  return iVar4;
}


/* FUN_006abbc0 @ 006abbc0  kind=gamemisc  attributed-by=none  size=300 */

uint FUN_006abbc0(char *param_1,uint param_2)

{
  char *pcVar1;
  char *_Str1;
  void *_Dst;
  int in_ECX;
  int iVar2;
  size_t _Size;
  int *piVar3;
  undefined8 uVar4;
  uint local_c;
  int iStack_4;
  
  pcVar1 = param_1;
  if (5 < param_2) {
    return 0;
  }
  local_c = 0;
  if (param_2 != 0) {
    piVar3 = (int *)(in_ECX + 4);
    do {
      if (piVar3[-1] == 0) {
        uVar4 = FUN_006a9d30();
      }
      else {
        uVar4 = FUN_006a9cc0();
      }
      _Str1 = (char *)uVar4;
      if (_Str1 == (char *)0x0) {
        return local_c;
      }
      iVar2 = *(int *)((ulonglong)uVar4 >> 0x20) - (int)_Str1;
      _Size = iVar2 - 1;
      param_1 = _Str1;
      switch(piVar3[-1]) {
      case 0:
      case 1:
        _Dst = (void *)FUN_00691240(*(undefined4 *)pcVar1,iVar2,&iStack_4);
        *piVar3 = (int)_Dst;
        if (iStack_4 == 0) {
          memcpy(_Dst,_Str1,_Size);
          *(undefined1 *)(_Size + *piVar3) = 0;
        }
        break;
      case 2:
        iVar2 = FUN_006aa050(&param_1,_Str1 + _Size,0);
        *piVar3 = iVar2;
        break;
      case 3:
        iVar2 = FUN_006aa020();
        *piVar3 = iVar2;
        break;
      case 4:
        if ((_Size == 4) && (iVar2 = strncmp(_Str1,"true",4), iVar2 == 0)) {
          *(undefined1 *)piVar3 = 1;
        }
        else {
          *(undefined1 *)piVar3 = 0;
        }
        break;
      case 5:
        if (*(code **)(pcVar1 + 0xc) == (code *)0x0) {
          *piVar3 = 0;
        }
        else {
          iVar2 = (**(code **)(pcVar1 + 0xc))(_Str1,_Size,*(undefined4 *)(pcVar1 + 0x10));
          *piVar3 = iVar2;
        }
      }
      local_c = local_c + 1;
      piVar3 = piVar3 + 2;
    } while (local_c < param_2);
  }
  return local_c;
}


/* FUN_006abd50 @ 006abd50  kind=gamemisc  attributed-by=none  size=205 */

void FUN_006abd50(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_40;
  int local_3c;
  int local_38;
  int *local_34;
  int local_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  int iStack_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_40;
  iVar3 = param_1[2];
  piVar5 = (int *)(iVar3 + 0x20);
  local_3c = -1;
  local_34 = piVar5;
  local_30 = iVar3;
  iVar1 = FUN_006abd10(piVar5);
  if (iVar1 == 0) {
    if (*piVar5 != 0) {
      uVar2 = FUN_00693a60(*param_1,0x14,0,*piVar5,0,&local_40);
      *(undefined4 *)(iVar3 + 0x1c) = uVar2;
      if (local_40 != 0) goto LAB_006abea8;
    }
    iVar3 = FUN_006a9d80(1,&local_40);
    if (iVar3 != 0) {
      local_38 = -0x14;
LAB_006abde0:
      uVar2 = FUN_006a9e10();
      switch(uVar2) {
      case 0x14:
      case 0x15:
      case 0x17:
        *piVar5 = local_3c + 1;
        __security_check_cookie(local_4 ^ (uint)&local_40);
        return;
      default:
        break;
      case 0x38:
        goto LAB_006abe05;
      case 0x4b:
        goto LAB_006abe8a;
      }
    }
  }
LAB_006abea3:
LAB_006abea8:
  __security_check_cookie(local_4 ^ (uint)&local_40);
  return;
LAB_006abe05:
  local_38 = local_38 + 0x14;
  local_3c = local_3c + 1;
  if (*piVar5 <= local_3c) goto LAB_006abea3;
  piVar4 = (int *)(*(int *)(local_30 + 0x1c) + local_38);
  uStack_2c = 3;
  uStack_24 = 2;
  uStack_1c = 2;
  uStack_14 = 2;
  uStack_c = 2;
  iVar3 = FUN_006abbc0(param_1,5);
  if (iVar3 != 5) goto LAB_006abea3;
  piVar4[1] = iStack_20;
  piVar4[3] = iStack_10;
  *piVar4 = iStack_28;
  piVar4[2] = iStack_18;
  piVar4[4] = iStack_8;
  piVar5 = local_34;
  if ((iStack_28 < 0) && (0 < iStack_18)) {
    piVar4[2] = -iStack_18;
  }
LAB_006abe8a:
  iVar3 = FUN_006a9d80(1,&local_40);
  if (iVar3 == 0) goto LAB_006abea3;
  goto LAB_006abde0;
}


/* FUN_006abf20 @ 006abf20  kind=gamemisc  attributed-by=none  size=422 */

void FUN_006abf20(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_34;
  iVar5 = param_1[2];
  local_30 = -1;
  local_28 = iVar5;
  iVar1 = FUN_006abd10((int *)(iVar5 + 0x28));
  if (iVar1 == 0) {
    iVar1 = *(int *)(iVar5 + 0x28);
    if (iVar1 != 0) {
      uVar2 = FUN_00693a60(*param_1,0x10,0,iVar1,0,&local_34);
      *(undefined4 *)(iVar5 + 0x24) = uVar2;
      if (local_34 != 0) goto LAB_006ac082;
    }
    iVar1 = FUN_006a9d80(1,&local_34);
    if (iVar1 != 0) {
      local_2c = -0x10;
LAB_006abfb0:
      iVar1 = FUN_006a9e10();
      switch(iVar1) {
      case 0x14:
      case 0x15:
      case 0x16:
        *(size_t *)(iVar5 + 0x28) = local_30 + 1U;
        qsort(*(void **)(iVar5 + 0x24),local_30 + 1U,0x10,FUN_006a9ed0);
        __security_check_cookie(local_4 ^ (uint)&local_34);
        return;
      default:
        break;
      case 0x22:
      case 0x24:
      case 0x25:
        goto switchD_006abfd0_caseD_22;
      case 0x4b:
        goto switchD_006abfd0_caseD_4b;
      }
    }
  }
switchD_006abfd0_caseD_17:
LAB_006ac082:
  __security_check_cookie(local_4 ^ (uint)&local_34);
  return;
switchD_006abfd0_caseD_22:
  local_2c = local_2c + 0x10;
  local_30 = local_30 + 1;
  if (*(int *)(iVar5 + 0x28) <= local_30) goto switchD_006abfd0_caseD_17;
  puVar4 = (undefined4 *)(*(int *)(iVar5 + 0x24) + local_2c);
  local_24 = 5;
  local_1c = 5;
  local_14 = 3;
  local_c = 3;
  iVar3 = FUN_006abbc0(param_1,4);
  if (iVar3 < 3) goto switchD_006abfd0_caseD_17;
  *puVar4 = local_20;
  puVar4[1] = local_18;
  iVar5 = local_28;
  if (iVar1 == 0x25) {
    puVar4[2] = 0;
    puVar4[3] = local_10;
  }
  else {
    puVar4[2] = local_10;
    if ((iVar1 != 0x22) || (uVar2 = local_8, iVar3 != 4)) {
      uVar2 = 0;
    }
    puVar4[3] = uVar2;
  }
switchD_006abfd0_caseD_4b:
  iVar1 = FUN_006a9d80(1,&local_34);
  if (iVar1 == 0) goto switchD_006abfd0_caseD_17;
  goto LAB_006abfb0;
}


/* FUN_006ac580 @ 006ac580  kind=gamemisc  attributed-by=none  size=482 */

int FUN_006ac580(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint local_c;
  
  iVar9 = param_2;
  uVar2 = *(undefined4 *)(param_2 + 100);
  piVar1 = (int *)(param_2 + 0xb8);
  param_2 = FUN_006908c0(param_1,0);
  if ((param_2 != 0) || (param_2 = FUN_00692010(param_1,&DAT_007331b0,piVar1), param_2 != 0)) {
    return 1;
  }
  if (((*piVar1 == 0x70636601) && (uVar12 = *(uint *)(iVar9 + 0xbc), uVar12 < 0x8000000)) &&
     (uVar12 != 0)) {
    iVar10 = FUN_00693a60(uVar2,0x10,0,uVar12,0,&param_2);
    *(int *)(iVar9 + 0xc0) = iVar10;
    if (param_2 != 0) {
      return 0x40;
    }
    uVar12 = 0;
    if (*(int *)(iVar9 + 0xbc) != 0) {
      do {
        param_2 = FUN_00692010(param_1,&DAT_007331c0,iVar10);
        if (param_2 != 0) {
          FUN_00691290(uVar2,*(undefined4 *)(iVar9 + 0xc0));
          *(undefined4 *)(iVar9 + 0xc0) = 0;
          return param_2;
        }
        uVar12 = uVar12 + 1;
        iVar10 = iVar10 + 0x10;
        param_2 = 0;
      } while (uVar12 < *(uint *)(iVar9 + 0xbc));
    }
    iVar10 = *(int *)(iVar9 + 0xbc);
    iVar3 = *(int *)(iVar9 + 0xc0);
    local_c = 0;
    if (iVar10 != 1) {
      do {
        bVar8 = false;
        if (iVar10 - local_c == 1) {
          return 0;
        }
        puVar11 = (uint *)(iVar3 + 0x1c);
        uVar12 = 0;
        do {
          if (*puVar11 < puVar11[-4]) {
            uVar4 = puVar11[-5];
            uVar5 = puVar11[-4];
            uVar6 = puVar11[-7];
            uVar7 = puVar11[-6];
            puVar11[-7] = puVar11[-3];
            puVar11[-6] = puVar11[-2];
            puVar11[-5] = puVar11[-1];
            puVar11[-3] = uVar6;
            puVar11[-2] = uVar7;
            puVar11[-1] = uVar4;
            puVar11[-4] = *puVar11;
            *puVar11 = uVar5;
            bVar8 = true;
          }
          if ((*puVar11 < puVar11[-5]) || (*puVar11 - puVar11[-5] < puVar11[-4])) {
            return 9;
          }
          uVar12 = uVar12 + 1;
          puVar11 = puVar11 + 4;
        } while (uVar12 < (*(int *)(iVar9 + 0xbc) - local_c) - 1);
        if (!bVar8) {
          return 0;
        }
        iVar10 = *(int *)(iVar9 + 0xbc);
        local_c = local_c + 1;
      } while (local_c < iVar10 - 1U);
    }
    return 0;
  }
  return 3;
}


/* FUN_006ac770 @ 006ac770  kind=gamemisc  attributed-by=none  size=134 */

void FUN_006ac770(void)

{
  uint in_EAX;
  int iVar1;
  short *unaff_ESI;
  byte local_8;
  byte local_7;
  byte local_6;
  byte local_5;
  byte local_4;
  
  if ((in_EAX & 0xffffff00) == 0) {
    FUN_00692010();
    return;
  }
  iVar1 = FUN_00692010();
  if (iVar1 == 0) {
    *unaff_ESI = local_8 - 0x80;
    unaff_ESI[1] = local_7 - 0x80;
    unaff_ESI[2] = local_6 - 0x80;
    unaff_ESI[3] = local_5 - 0x80;
    unaff_ESI[4] = local_4 - 0x80;
    unaff_ESI[5] = 0;
  }
  return;
}


/* FUN_006ac800 @ 006ac800  kind=gamemisc  attributed-by=none  size=119 */

undefined4 FUN_006ac800(int param_1,int *param_2,int *param_3)

{
  uint in_EAX;
  int iVar1;
  uint uVar2;
  int *piVar3;
  int unaff_EBX;
  int *unaff_EDI;
  
  uVar2 = 0;
  piVar3 = unaff_EDI;
  if (in_EAX != 0) {
    do {
      if (*piVar3 == param_1) {
        if ((*(uint *)(unaff_EBX + 8) <= (uint)unaff_EDI[uVar2 * 4 + 3]) &&
           (iVar1 = FUN_00690900(), iVar1 == 0)) {
          *param_3 = unaff_EDI[uVar2 * 4 + 2];
          *param_2 = unaff_EDI[uVar2 * 4 + 1];
          return 0;
        }
        *param_3 = 0;
        return 0x53;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 4;
    } while (uVar2 < in_EAX);
  }
  *param_3 = 0;
  return 3;
}


/* FUN_006ac880 @ 006ac880  kind=gamemisc  attributed-by=none  size=24 */

uint FUN_006ac880(void)

{
  uint uVar1;
  int *in_ECX;
  uint in_EDX;
  int unaff_ESI;
  
  uVar1 = 0;
  if (in_EDX != 0) {
    do {
      if (*in_ECX == unaff_ESI) {
        return CONCAT31((int3)(uVar1 >> 8),1);
      }
      uVar1 = uVar1 + 1;
      in_ECX = in_ECX + 4;
    } while (uVar1 < in_EDX);
  }
  return uVar1 & 0xffffff00;
}


/* FUN_006ac8a0 @ 006ac8a0  kind=gamemisc  attributed-by=none  size=128 */

undefined4 * FUN_006ac8a0(byte *param_1)

{
  byte bVar1;
  bool bVar2;
  int in_EAX;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  bVar2 = false;
  iVar6 = 0;
  puVar7 = *(undefined4 **)(in_EAX + 0x11c);
  if (0 < *(int *)(in_EAX + 0x118)) {
    do {
      if (bVar2) goto LAB_006ac907;
      pbVar3 = (byte *)*puVar7;
      pbVar5 = param_1;
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_006ac8f0:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_006ac8f5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_006ac8f0;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_006ac8f5:
      if (iVar4 == 0) {
        bVar2 = true;
      }
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 3;
    } while (iVar6 < *(int *)(in_EAX + 0x118));
    if (bVar2) {
LAB_006ac907:
      return *(undefined4 **)(in_EAX + 0x11c) + iVar6 * 3 + -3;
    }
  }
  return (undefined4 *)0x0;
}


/* FUN_006ac920 @ 006ac920  kind=gamemisc  attributed-by=none  size=751 */

int FUN_006ac920(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 *puVar8;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  uint local_8;
  uint local_4;
  
  local_14 = *(undefined4 *)(param_1 + 100);
  local_c = 0;
  local_10 = 0;
  local_18 = FUN_006ac800(1,&local_8,&local_4);
  if (((local_18 == 0) && (uVar2 = FUN_00690d40(), local_18 == 0)) && ((uVar2 & 0xffffff00) == 0)) {
    local_8 = uVar2 >> 2 & 1;
    if (local_8 == 0) {
      uVar2 = FUN_00690d40();
    }
    else {
      uVar2 = FUN_00690cd0();
    }
    if (local_18 == 0) {
      if (uVar2 <= local_4 / 9) {
        *(uint *)(param_1 + 0x118) = uVar2;
        local_c = FUN_00693a60(local_14,0xc,0,uVar2,0,&local_18);
        if (local_18 != 0) goto LAB_006acbe0;
        uVar7 = 0;
        iVar3 = local_18;
        if (uVar2 != 0) {
          do {
            iVar3 = FUN_00692010();
            local_18 = iVar3;
            if (iVar3 != 0) goto LAB_006acbe0;
            uVar7 = uVar7 + 1;
            local_18 = 0;
          } while (uVar7 < uVar2);
        }
        local_18 = iVar3;
        if (((uVar2 & 3) != 0) && (local_18 = FUN_00690900(), local_18 != 0)) {
          local_18 = 0x53;
          goto LAB_006acbe0;
        }
        if (local_8 == 1) {
          uVar7 = FUN_00690cd0();
        }
        else {
          uVar7 = FUN_00690d40();
        }
        if (local_18 != 0) goto LAB_006acbe0;
        if (uVar7 <= local_4 + uVar2 * -9) {
          local_10 = FUN_00693a60(local_14,1,0,uVar7,0,&local_18);
          if (((local_18 == 0) && (local_18 = FUN_00691ec0(), local_18 == 0)) &&
             (iVar3 = FUN_00693a60(local_14,0xc,0,uVar2,0,&local_18), local_18 == 0)) {
            uVar5 = 0;
            *(int *)(param_1 + 0x11c) = iVar3;
            if (uVar2 != 0) {
              puVar8 = (undefined4 *)(iVar3 + 8);
              local_4 = iVar3 - local_c;
              pcVar6 = (char *)(local_c + 4);
              do {
                uVar1 = *(uint *)(pcVar6 + -4);
                if (((int)uVar1 < 0) || (uVar7 < uVar1)) {
LAB_006acc08:
                  local_18 = 9;
                  goto LAB_006acbe0;
                }
                uVar4 = FUN_00691310(local_14,uVar1 + local_10,&local_18);
                puVar8[-2] = uVar4;
                if (local_18 != 0) goto LAB_006acbe0;
                pcVar6[local_4] = *pcVar6;
                if (*pcVar6 == '\0') {
                  *puVar8 = *(undefined4 *)(pcVar6 + 4);
                }
                else {
                  uVar1 = *(uint *)(pcVar6 + 4);
                  if (((int)uVar1 < 0) || (uVar7 < uVar1)) goto LAB_006acc08;
                  uVar4 = FUN_00691310(local_14,uVar1 + local_10,&local_18);
                  *puVar8 = uVar4;
                  if (local_18 != 0) goto LAB_006acbe0;
                }
                uVar5 = uVar5 + 1;
                pcVar6 = pcVar6 + 0xc;
                puVar8 = puVar8 + 3;
              } while (uVar5 < uVar2);
            }
            local_18 = 0;
          }
          goto LAB_006acbe0;
        }
      }
      local_18 = 8;
    }
  }
LAB_006acbe0:
  uVar4 = local_14;
  FUN_00691290(local_14,local_c);
  FUN_00691290(uVar4,local_10);
  return local_18;
}


/* FUN_006acc20 @ 006acc20  kind=gamemisc  attributed-by=none  size=437 */

int FUN_006acc20(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_c;
  uint local_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = *(undefined4 *)(param_2 + 100);
  param_2 = 0;
  param_2 = FUN_006ac800(4,&local_8,&local_c);
  if ((param_2 != 0) || (local_8 = FUN_00690d40(param_1,&param_2), param_2 != 0)) {
    return param_2;
  }
  uVar4 = local_8 & 0xffffff00;
  if ((uVar4 == 0) || (uVar4 == 0x100)) {
    if (uVar4 == 0) {
      if ((local_8 & 4) == 0) {
        uVar2 = FUN_00690d40(param_1,&param_2);
      }
      else {
        uVar2 = FUN_00690cd0(param_1,&param_2);
      }
    }
    else {
      if ((local_8 & 4) == 0) {
        uVar2 = FUN_00690bf0(param_1,&param_2);
      }
      else {
        uVar2 = FUN_00690b80(param_1,&param_2);
      }
      uVar2 = uVar2 & 0xffff;
    }
    if (param_2 == 0) {
      *(uint *)(iVar1 + 0x120) = uVar2;
      if (uVar2 == 0) {
        return 8;
      }
      if (uVar4 == 0) {
        if (local_c / 0xc < uVar2) {
          return 8;
        }
      }
      else if (local_c / 5 < uVar2) {
        return 8;
      }
      iVar3 = FUN_00693a60(local_4,0x10,0,uVar2,0,&param_2);
      *(int *)(iVar1 + 0x124) = iVar3;
      if (param_2 == 0) {
        uVar4 = 0;
        if (uVar2 == 0) {
          return 0;
        }
        do {
          param_2 = FUN_006ac770();
          *(undefined4 *)(iVar3 + 0xc) = 0;
          if (param_2 != 0) {
            FUN_00691290(local_4,*(undefined4 *)(iVar1 + 0x124));
            *(undefined4 *)(iVar1 + 0x124) = 0;
            return param_2;
          }
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + 0x10;
          param_2 = 0;
        } while (uVar4 < uVar2);
        return 0;
      }
      return 0x40;
    }
  }
  return 3;
}


/* FUN_006acde0 @ 006acde0  kind=gamemisc  attributed-by=none  size=473 */

void FUN_006acde0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  int in_EDX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  undefined4 local_1c;
  uint local_18 [5];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_2c;
  local_1c = *(undefined4 *)(in_EDX + 100);
  local_2c = 0;
  local_20 = in_EDX;
  local_2c = FUN_006ac800(8,&local_24,local_18);
  if ((local_2c != 0) || (local_2c = FUN_00691f30(), local_2c != 0)) {
LAB_006acfa7:
    __security_check_cookie(local_4 ^ (uint)&local_2c);
    return;
  }
  local_24 = FUN_00690ae0();
  uVar4 = local_24 >> 2 & 1;
  if (uVar4 == 0) {
    uVar1 = FUN_00690ae0();
  }
  else {
    uVar1 = FUN_00690aa0();
  }
  FUN_00691fe0();
  if (((((local_24 & 0xffffff00) != 0) || ((int)*(uint *)(in_EDX + 0x120) < 0)) ||
      (uVar1 != *(uint *)(in_EDX + 0x120))) ||
     (local_28 = FUN_00693a60(local_1c,4,0,uVar1,0,&local_2c), local_2c != 0)) goto LAB_006acfa7;
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      if (uVar4 == 1) {
        uVar2 = FUN_00690cd0();
      }
      else {
        uVar2 = FUN_00690d40();
      }
      *(undefined4 *)(local_28 + uVar5 * 4) = uVar2;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
    if (local_2c != 0) goto LAB_006acf78;
  }
  uVar5 = 0;
  do {
    if (uVar4 == 1) {
      FUN_00690cd0();
    }
    else {
      FUN_00690d40();
    }
    if (local_2c != 0) goto LAB_006acf78;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  if (uVar1 != 0) {
    iVar3 = 0;
    uVar4 = 0;
    do {
      uVar5 = *(uint *)(local_28 + uVar4 * 4);
      if ((-1 < (int)uVar5) && (uVar5 <= local_18[0])) {
        *(uint *)(*(int *)(local_20 + 0x124) + 0xc + iVar3) = *(int *)(in_ECX + 8) + uVar5;
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x10;
    } while (uVar4 < uVar1);
  }
  *(uint *)(local_20 + 0x134) = local_24;
LAB_006acf78:
  FUN_00691290(local_1c,local_28);
  __security_check_cookie(local_4 ^ (uint)&local_2c);
  return;
}


/* FUN_006acfc0 @ 006acfc0  kind=gamemisc  attributed-by=none  size=601 */

int FUN_006acfc0(int param_1)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  int local_4;
  
  local_20 = *(undefined4 *)(param_1 + 100);
  local_24 = 0;
  local_4 = 0;
  local_24 = FUN_006ac800(0x20,&local_14,&local_8);
  if ((local_24 != 0) || (local_24 = FUN_00691f30(), local_24 != 0)) {
    return local_24;
  }
  local_14 = FUN_00690ae0();
  local_c = local_14 >> 2 & 1;
  if (local_c == 0) {
    sVar1 = FUN_00690a70();
    local_18 = (int)sVar1;
    sVar2 = FUN_00690a70();
    sVar1 = FUN_00690a70();
    local_1c = (int)sVar1;
    sVar1 = FUN_00690a70();
    uVar3 = FUN_00690a70();
  }
  else {
    sVar1 = FUN_00690a40();
    local_18 = (int)sVar1;
    sVar2 = FUN_00690a40();
    sVar1 = FUN_00690a40();
    local_1c = (int)sVar1;
    sVar1 = FUN_00690a40();
    uVar3 = FUN_00690a40();
  }
  *(undefined2 *)(param_1 + 0x130) = uVar3;
  FUN_00691fe0();
  uVar9 = local_20;
  if ((local_14 & 0xffffff00) == 0) {
    local_8 = (sVar2 - local_18) + 1;
    local_10 = ((sVar1 - local_1c) + 1) * local_8;
    iVar4 = FUN_00693a60(local_20,8,0,local_10,0,&local_24);
    if (local_24 != 0) {
      return 0x40;
    }
    local_24 = FUN_00691f30();
    iVar5 = local_4;
    if (local_24 == 0) {
      iVar10 = 0;
      local_14 = 0;
      if (0 < local_10) {
        do {
          uVar8 = local_14;
          if (local_c == 1) {
            sVar1 = FUN_00690a40();
          }
          else {
            sVar1 = FUN_00690a70();
          }
          if (sVar1 != -1) {
            *(short *)(iVar4 + 4 + iVar10 * 8) = sVar1;
            iVar10 = iVar10 + 1;
            *(int *)(iVar4 + -8 + iVar10 * 8) =
                 ((int)uVar8 / local_8 + local_1c) * 0x100 + (int)uVar8 % local_8 + local_18;
            uVar8 = local_14;
          }
          local_14 = uVar8 + 1;
        } while ((int)local_14 < local_10);
      }
      FUN_00691fe0();
      iVar5 = FUN_00693a60(local_20,8,0,iVar10,0,&local_24);
      uVar9 = local_20;
      if (local_24 == 0) {
        iVar7 = 0;
        if (0 < iVar10) {
          puVar6 = (undefined2 *)(iVar5 + 4);
          do {
            *(undefined4 *)(puVar6 + -2) = *(undefined4 *)(iVar4 + iVar7 * 8);
            *puVar6 = *(undefined2 *)((iVar4 - iVar5) + (int)puVar6);
            iVar7 = iVar7 + 1;
            puVar6 = puVar6 + 4;
          } while (iVar7 < iVar10);
        }
        *(int *)(param_1 + 0x128) = iVar10;
        *(int *)(param_1 + 300) = iVar5;
        FUN_00691290(local_20,iVar4);
        return local_24;
      }
    }
    FUN_00691290(uVar9,iVar5);
    FUN_00691290(uVar9,iVar4);
    return local_24;
  }
  return 3;
}


/* FUN_006ad220 @ 006ad220  kind=gamemisc  attributed-by=none  size=322 */

void FUN_006ad220(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  uint local_8;
  uint local_4;
  
  iVar1 = FUN_006ac800(param_1,&local_8,&local_4);
  if (iVar1 == 0) {
    local_8 = FUN_00690d40();
    local_4 = local_8 & 0xffffff00;
    if ((((local_4 == 0) || (local_4 == 0x100)) && (iVar1 = FUN_00692010(), iVar1 == 0)) &&
       (iVar1 = FUN_006ac770(), iVar1 == 0)) {
      iVar1 = FUN_006ac770();
      if (iVar1 == 0) {
        if (local_4 == 0x100) {
          iVar1 = FUN_006ac770();
          if (iVar1 == 0) {
            FUN_006ac770();
            return;
          }
        }
        else {
          *(undefined4 *)(in_ECX + 0xf8) = *(undefined4 *)(in_ECX + 0xd8);
          *(undefined4 *)(in_ECX + 0xfc) = *(undefined4 *)(in_ECX + 0xdc);
          *(undefined4 *)(in_ECX + 0x100) = *(undefined4 *)(in_ECX + 0xe0);
          *(undefined4 *)(in_ECX + 0x104) = *(undefined4 *)(in_ECX + 0xe4);
          *(undefined4 *)(in_ECX + 0x108) = *(undefined4 *)(in_ECX + 0xe8);
          *(undefined4 *)(in_ECX + 0x10c) = *(undefined4 *)(in_ECX + 0xec);
          *(undefined4 *)(in_ECX + 0x110) = *(undefined4 *)(in_ECX + 0xf0);
          *(undefined4 *)(in_ECX + 0x114) = *(undefined4 *)(in_ECX + 0xf4);
        }
      }
    }
  }
  return;
}


/* FUN_006ad370 @ 006ad370  kind=gamemisc  attributed-by=none  size=467 */

void FUN_006ad370(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *_Dst;
  uint uVar5;
  uint uVar6;
  int unaff_EBX;
  uint uVar7;
  int local_28;
  char *local_24 [4];
  uint local_14 [4];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_28;
  uVar7 = 0;
  local_28 = 0;
  local_24[0] = (char *)0x0;
  local_24[1] = (undefined1 *)0x0;
  local_24[2] = (char *)0x0;
  local_24[3] = (char *)0x0;
  *(undefined4 *)(unaff_EBX + 0xc) = 0;
  iVar3 = FUN_006ac8a0("SLANT");
  if (((iVar3 != 0) && (*(char *)(iVar3 + 4) != '\0')) &&
     ((cVar2 = **(char **)(iVar3 + 8), cVar2 == 'O' ||
      (((cVar2 == 'o' || (cVar2 == 'I')) || (cVar2 == 'i')))))) {
    *(undefined4 *)(unaff_EBX + 0xc) = 1;
    if ((**(char **)(iVar3 + 8) == 'O') || (local_24[2] = "Italic", **(char **)(iVar3 + 8) == 'o'))
    {
      local_24[2] = "Oblique";
    }
  }
  iVar3 = FUN_006ac8a0("WEIGHT_NAME");
  if (((iVar3 != 0) && (*(char *)(iVar3 + 4) != '\0')) &&
     ((**(char **)(iVar3 + 8) == 'B' || (**(char **)(iVar3 + 8) == 'b')))) {
    *(uint *)(unaff_EBX + 0xc) = *(uint *)(unaff_EBX + 0xc) | 2;
    local_24[1] = "Bold";
  }
  iVar3 = FUN_006ac8a0("SETWIDTH_NAME");
  if ((iVar3 != 0) && (*(char *)(iVar3 + 4) != '\0')) {
    cVar2 = **(char **)(iVar3 + 8);
    if ((cVar2 != '\0') && ((cVar2 != 'N' && (cVar2 != 'n')))) {
      local_24[3] = *(char **)(iVar3 + 8);
    }
  }
  iVar3 = FUN_006ac8a0("ADD_STYLE_NAME");
  if ((iVar3 != 0) && (*(char *)(iVar3 + 4) != '\0')) {
    cVar2 = **(char **)(iVar3 + 8);
    if ((cVar2 != '\0') && ((cVar2 != 'N' && (cVar2 != 'n')))) {
      local_24[0] = *(char **)(iVar3 + 8);
    }
  }
  iVar3 = 0;
  uVar6 = 0;
  do {
    pcVar4 = *(char **)((int)local_24 + uVar6);
    *(undefined4 *)((int)local_14 + uVar6) = 0;
    if (pcVar4 != (char *)0x0) {
      pcVar1 = pcVar4 + 1;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      *(int *)((int)local_14 + uVar6) = (int)pcVar4 - (int)pcVar1;
      iVar3 = iVar3 + 1 + ((int)pcVar4 - (int)pcVar1);
    }
    uVar6 = uVar6 + 4;
  } while (uVar6 < 0x10);
  if (iVar3 == 0) {
    local_24[0] = "Regular";
    local_14[0] = 7;
    iVar3 = 8;
  }
  _Dst = (undefined1 *)FUN_00692230(*(undefined4 *)(unaff_EBX + 100),iVar3,&local_28);
  *(undefined1 **)(unaff_EBX + 0x18) = _Dst;
  if (local_28 == 0) {
    do {
      pcVar4 = local_24[uVar7];
      uVar6 = local_14[uVar7];
      if (pcVar4 != (char *)0x0) {
        if (_Dst != *(undefined1 **)(unaff_EBX + 0x18)) {
          *_Dst = 0x20;
          _Dst = _Dst + 1;
        }
        memcpy(_Dst,pcVar4,uVar6);
        if (((uVar7 == 0) || (uVar7 == 3)) && (uVar5 = 0, uVar6 != 0)) {
          do {
            if (_Dst[uVar5] == ' ') {
              _Dst[uVar5] = 0x2d;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar6);
        }
        _Dst = _Dst + uVar6;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 4);
    *_Dst = 0;
  }
  __security_check_cookie(local_4 ^ (uint)&local_28);
  return;
}


/* FUN_006ad550 @ 006ad550  kind=gamemisc  attributed-by=none  size=844 */

undefined4 FUN_006ad550(void)

{
  short sVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  short *psVar6;
  int iVar7;
  undefined4 uVar8;
  short sVar9;
  short sVar10;
  undefined4 *unaff_EDI;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = unaff_EDI[0x19];
  local_c = 0;
  local_c = FUN_006ac580();
  if ((((local_c == 0) && (local_c = FUN_006ac920(), local_c == 0)) &&
      ((cVar3 = FUN_006ac880(), cVar3 != '\0' || (local_c = FUN_006ad220(2), local_c == 0)))) &&
     ((((local_c = FUN_006acc20(), local_c == 0 && (local_c = FUN_006acde0(), local_c == 0)) &&
       (local_c = FUN_006acfc0(), local_c == 0)) &&
      ((iVar4 = 0, cVar3 == '\0' || (iVar4 = FUN_006ad220(0x100), iVar4 == 0)))))) {
    local_c = iVar4;
    *unaff_EDI = 1;
    unaff_EDI[1] = 0;
    unaff_EDI[2] = 0x92;
    if (*(char *)((int)unaff_EDI + 199) != '\0') {
      unaff_EDI[2] = 0x96;
    }
    local_c = FUN_006ad370();
    if (local_c == 0) {
      iVar4 = FUN_006ac8a0("FAMILY_NAME");
      if ((iVar4 == 0) || (*(char *)(iVar4 + 4) == '\0')) {
        unaff_EDI[5] = 0;
      }
      else {
        uVar5 = FUN_00691310(local_8,*(undefined4 *)(iVar4 + 8),&local_c);
        unaff_EDI[5] = uVar5;
        if (local_c != 0) {
          return 3;
        }
      }
      unaff_EDI[4] = unaff_EDI[0x48] + 1;
      unaff_EDI[7] = 1;
      psVar6 = (short *)FUN_00693a60(local_8,0x10,0,1,0,&local_c);
      unaff_EDI[8] = psVar6;
      if (local_c == 0) {
        psVar6[0] = 0;
        psVar6[1] = 0;
        psVar6[2] = 0;
        psVar6[3] = 0;
        psVar6[4] = 0;
        psVar6[5] = 0;
        psVar6[6] = 0;
        psVar6[7] = 0;
        local_4 = 0;
        sVar9 = *(short *)(unaff_EDI + 0x34);
        sVar1 = *(short *)(unaff_EDI + 0x33);
        sVar10 = 0;
        *psVar6 = sVar9 + sVar1;
        iVar4 = FUN_006ac8a0("AVERAGE_WIDTH");
        if (iVar4 == 0) {
          lVar2 = (longlong)((short)(sVar9 + sVar1) * 2) * 0x55555556;
          psVar6[1] = (short)((ulonglong)lVar2 >> 0x20) - (short)(lVar2 >> 0x3f);
        }
        else {
          iVar4 = *(int *)(iVar4 + 8) + 5;
          psVar6[1] = ((short)(iVar4 / 10) + (short)(iVar4 >> 0x1f)) -
                      (short)((longlong)iVar4 * 0x66666667 >> 0x3f);
        }
        iVar4 = FUN_006ac8a0("POINT_SIZE");
        if (iVar4 != 0) {
          *(int *)(psVar6 + 2) = (*(int *)(iVar4 + 8) * 0x70800 + 0x8d27) / 0x11a4e;
        }
        iVar4 = FUN_006ac8a0("PIXEL_SIZE");
        if (iVar4 != 0) {
          *(int *)(psVar6 + 6) = (int)*(short *)(iVar4 + 8) << 6;
        }
        iVar4 = FUN_006ac8a0("RESOLUTION_X");
        if (iVar4 == 0) {
          sVar9 = (short)local_4;
        }
        else {
          sVar9 = *(short *)(iVar4 + 8);
        }
        iVar4 = FUN_006ac8a0("RESOLUTION_Y");
        if (iVar4 != 0) {
          sVar10 = *(short *)(iVar4 + 8);
        }
        if (*(int *)(psVar6 + 6) == 0) {
          *(int *)(psVar6 + 6) = *(int *)(psVar6 + 2);
          if (sVar10 != 0) {
            *(int *)(psVar6 + 6) = ((int)sVar10 * *(int *)(psVar6 + 2)) / 0x48;
          }
        }
        if ((sVar9 == 0) || (sVar10 == 0)) {
          *(undefined4 *)(psVar6 + 4) = *(undefined4 *)(psVar6 + 6);
        }
        else {
          *(int *)(psVar6 + 4) = ((int)sVar9 * *(int *)(psVar6 + 6)) / (int)sVar10;
        }
        iVar4 = FUN_006ac8a0("CHARSET_REGISTRY");
        iVar7 = FUN_006ac8a0("CHARSET_ENCODING");
        uVar5 = local_8;
        if ((((iVar4 != 0) && (*(char *)(iVar4 + 4) != '\0')) && (iVar7 != 0)) &&
           (*(char *)(iVar7 + 4) != '\0')) {
          uVar8 = FUN_00691310(local_8,*(undefined4 *)(iVar7 + 8),&local_c);
          unaff_EDI[0x2c] = uVar8;
          if (local_c != 0) {
            return 3;
          }
          uVar5 = FUN_00691310(uVar5,*(undefined4 *)(iVar4 + 8),&local_c);
          unaff_EDI[0x2d] = uVar5;
        }
        if (local_c == 0) {
          return 0;
        }
      }
    }
  }
  return 3;
}


/* FUN_006ad990 @ 006ad990  kind=gamemisc  attributed-by=none  size=306 */

void FUN_006ad990(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = param_1;
  iVar3 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 100);
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 300));
    *(undefined4 *)(param_1 + 300) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x124));
    *(undefined4 *)(param_1 + 0x124) = 0;
    if ((*(int *)(param_1 + 0x11c) != 0) && (0 < *(int *)(param_1 + 0x118))) {
      param_1 = 0;
      do {
        puVar4 = (undefined4 *)(*(int *)(iVar2 + 0x11c) + param_1);
        if (puVar4 != (undefined4 *)0x0) {
          FUN_00691290(uVar1,*puVar4);
          *puVar4 = 0;
          if (*(char *)(puVar4 + 1) != '\0') {
            FUN_00691290(uVar1,puVar4[2]);
            puVar4[2] = 0;
          }
        }
        param_1 = param_1 + 0xc;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(iVar2 + 0x118));
    }
    FUN_00691290(uVar1,*(undefined4 *)(iVar2 + 0x11c));
    *(undefined4 *)(iVar2 + 0x11c) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(iVar2 + 0xc0));
    *(undefined4 *)(iVar2 + 0xc0) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(iVar2 + 0x14));
    *(undefined4 *)(iVar2 + 0x14) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(iVar2 + 0x18));
    *(undefined4 *)(iVar2 + 0x18) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(iVar2 + 0x20));
    *(undefined4 *)(iVar2 + 0x20) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(iVar2 + 0xb0));
    *(undefined4 *)(iVar2 + 0xb0) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(iVar2 + 0xb4));
    *(undefined4 *)(iVar2 + 0xb4) = 0;
    if (*(int *)(iVar2 + 0x68) == iVar2 + 0x84) {
      FUN_006908a0(iVar2 + 0x84);
      *(undefined4 *)(iVar2 + 0x68) = *(undefined4 *)(iVar2 + 0xac);
    }
  }
  return;
}


/* FUN_006adfd0 @ 006adfd0  kind=gamemisc  attributed-by=none  size=89 */

void FUN_006adfd0(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EDI;
  
  uVar1 = *(undefined4 *)(unaff_EDI + 100);
  iVar2 = *(int *)(unaff_EDI + 0x84);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0xa0) != 0) {
      FUN_00691ee0(*(undefined4 *)(unaff_EDI + 0x68),iVar2 + 0xa0);
    }
    FUN_00691290(uVar1,*(undefined4 *)(iVar2 + 0xa8));
    *(undefined4 *)(iVar2 + 0xa8) = 0;
    FUN_00691290(uVar1,iVar2);
    *(undefined4 *)(unaff_EDI + 0x84) = 0;
  }
  return;
}


/* FUN_006ae030 @ 006ae030  kind=gamemisc  attributed-by=none  size=187 */

int FUN_006ae030(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  
  iVar2 = FUN_006908c0();
  if ((iVar2 != 0) || (iVar2 = FUN_00692010(), iVar2 != 0)) {
    return iVar2;
  }
  sVar1 = *(short *)(in_EAX + 4);
  if (((sVar1 == 0x200) || (sVar1 == 0x300)) &&
     (((*(short *)(in_EAX + 4) != 0x300) - 1 & 0x1e) + 0x76 <= *(uint *)(in_EAX + 8))) {
    if (sVar1 == 0x200) {
      *(undefined4 *)(in_EAX + 0x84) = 0;
      *(undefined4 *)(in_EAX + 0x88) = 0;
      *(undefined4 *)(in_EAX + 0x8c) = 0;
    }
    if ((*(byte *)(in_EAX + 0x48) & 1) == 0) {
      iVar2 = FUN_006908c0();
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_00693a30();
      return iVar2;
    }
  }
  return 2;
}


/* FUN_006af480 @ 006af480  kind=gamemisc  attributed-by=none  size=33 */

undefined4 FUN_006af480(void)

{
  char in_AL;
  
  if ((((in_AL != ' ') && (in_AL != '\t')) && (in_AL != '\r')) &&
     (((in_AL != '\n' && (in_AL != '\f')) && (in_AL != '\0')))) {
    return 0;
  }
  return 1;
}


/* FUN_006b00f0 @ 006b00f0  kind=gamemisc  attributed-by=none  size=122 */

undefined4 FUN_006b00f0(void)

{
  int iVar1;
  int in_EAX;
  undefined4 uVar2;
  int unaff_ESI;
  
  iVar1 = *(int *)(in_EAX + 8);
  if (iVar1 == 10) {
    (**(code **)(in_EAX + 0xc))();
    return *(undefined4 *)(unaff_ESI + 0xc);
  }
  if ((iVar1 != 8) && (iVar1 != 9)) {
    uVar2 = (**(code **)(unaff_ESI + 0x40))();
    return uVar2;
  }
  uVar2 = (**(code **)(unaff_ESI + 0x44))();
  return uVar2;
}


/* FUN_006b0170 @ 006b0170  kind=gamemisc  attributed-by=none  size=505 */

uint FUN_006b0170(void)

{
  int *piVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  uint in_ECX;
  int *piVar4;
  uint *in_EDX;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  char *_Str1;
  int *piVar9;
  undefined **ppuStack_18;
  int iStack_4;
  
  *in_EDX = in_ECX;
  pcVar6 = (char *)(in_ECX + in_EAX);
  in_EDX[2] = (uint)pcVar6;
  in_EDX[3] = 0;
  (*(code *)in_EDX[7])();
  pcVar7 = (char *)*in_EDX;
  while (pcVar7 < pcVar6) {
    pcVar7 = (char *)*in_EDX;
    if (((*pcVar7 == 'F') && (pcVar7 + 0x19 < pcVar6)) &&
       (iVar3 = strncmp(pcVar7,"FontDirectory",0xd), iVar3 == 0)) {
      (*(code *)in_EDX[8])();
      (*(code *)in_EDX[7])();
      pcVar7 = (char *)*in_EDX;
      _Str1 = pcVar7;
      if (pcVar7 < pcVar6) {
        do {
          if (((*_Str1 == 'k') && (_Str1 + 5 < pcVar6)) &&
             (iVar3 = strncmp(_Str1,"known",5), iVar3 == 0)) {
            if (_Str1 < pcVar6) {
              (*(code *)in_EDX[8])();
              (*(code *)in_EDX[0xe])();
              if (iStack_4 == 3) {
                pcVar7 = (char *)*in_EDX;
              }
            }
            goto LAB_006b024f;
          }
          (*(code *)in_EDX[8])();
          if (in_EDX[3] != 0) goto LAB_006b035e;
          (*(code *)in_EDX[7])();
          _Str1 = (char *)*in_EDX;
        } while (_Str1 < pcVar6);
        *in_EDX = (uint)pcVar7;
      }
      else {
LAB_006b024f:
        *in_EDX = (uint)pcVar7;
      }
    }
    else if ((*pcVar7 == '/') && (pcVar7 + 2 < pcVar6)) {
      piVar9 = (int *)(pcVar7 + 1);
      *in_EDX = (uint)piVar9;
      (*(code *)in_EDX[8])();
      if (in_EDX[3] != 0) break;
      uVar8 = (int)*in_EDX - (int)piVar9;
      if ((uVar8 - 1 < 0x15) && ((char *)*in_EDX < pcVar6)) {
        ppuStack_18 = &PTR_s_version_00733640;
        do {
          piVar5 = (int *)*ppuStack_18;
          if ((piVar5 != (int *)0x0) && ((char)*piVar9 == (char)*piVar5)) {
            piVar4 = piVar5;
            do {
              iVar3 = *piVar4;
              piVar4 = (int *)((int)piVar4 + 1);
            } while ((char)iVar3 != '\0');
            piVar1 = piVar9;
            uVar2 = uVar8;
            if (uVar8 == (int)piVar4 - ((int)piVar5 + 1)) {
              for (; 3 < uVar2; uVar2 = uVar2 - 4) {
                if (*piVar1 != *piVar5) goto LAB_006b0310;
                piVar5 = piVar5 + 1;
                piVar1 = piVar1 + 1;
              }
              if ((uVar2 == 0) ||
                 (((char)*piVar5 == (char)*piVar1 &&
                  ((uVar2 < 2 ||
                   ((*(char *)((int)piVar5 + 1) == *(char *)((int)piVar1 + 1) &&
                    ((uVar2 < 3 || (*(char *)((int)piVar5 + 2) == *(char *)((int)piVar1 + 2)))))))))
                 )) {
                uVar8 = FUN_006b00f0();
                in_EDX[3] = uVar8;
                if (uVar8 != 0) {
                  return uVar8;
                }
                break;
              }
            }
          }
LAB_006b0310:
          ppuStack_18 = ppuStack_18 + 9;
        } while ((int)ppuStack_18 < 0x733910);
      }
    }
    else {
      (*(code *)in_EDX[8])();
      if (in_EDX[3] != 0) break;
    }
    (*(code *)in_EDX[7])();
    pcVar7 = (char *)*in_EDX;
  }
LAB_006b035e:
  return in_EDX[3];
}


/* FUN_006b0500 @ 006b0500  kind=gamemisc  attributed-by=none  size=609 */

int FUN_006b0500(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  int unaff_EBX;
  undefined4 *puVar9;
  int iVar10;
  bool bVar11;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  byte *local_134;
  undefined4 local_d8;
  int local_c4;
  int local_bc;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_84;
  undefined4 local_68;
  int local_5c;
  undefined4 local_50;
  undefined4 local_4c;
  
  uVar2 = *(undefined4 *)(unaff_EBX + 100);
  FUN_006b0370();
  uVar3 = FUN_00692230(uVar2,0xc,&local_140);
  *(undefined4 *)(unaff_EBX + 0x1ec) = uVar3;
  if (((local_140 == 0) && (local_140 = FUN_006af310(uVar2), local_140 == 0)) &&
     (local_140 = FUN_006b0170(), local_140 == 0)) {
    if (*(char *)(unaff_EBX + 0x1b1) == '*') {
      *(undefined4 *)(unaff_EBX + 0x1a0) = local_a0;
      if (local_5c == 0) {
        local_140 = 3;
      }
      *(undefined4 *)(unaff_EBX + 0x18c) = local_68;
      *(undefined4 *)(unaff_EBX + 0x1a8) = local_50;
      local_5c = 0;
      *(undefined4 *)(unaff_EBX + 0x1ac) = local_4c;
      *(undefined4 *)(unaff_EBX + 400) = local_9c;
      *(undefined4 *)(unaff_EBX + 0x1a4) = local_84;
      local_9c = 0;
      local_84 = 0;
      if (*(int *)(unaff_EBX + 0x170) == 1) {
        local_13c = 0;
        local_138 = 0;
        local_144 = 0;
        if (0 < local_c4) {
LAB_006b0632:
          iVar10 = 0;
          *(undefined2 *)(*(int *)(unaff_EBX + 0x180) + local_144 * 2) = 0;
          *(char **)(*(int *)(unaff_EBX + 0x184) + local_144 * 4) = ".notdef";
          local_134 = *(byte **)(local_bc + local_144 * 4);
          if ((local_134 != (byte *)0x0) && (0 < *(int *)(unaff_EBX + 0x1a0))) {
            puVar9 = *(undefined4 **)(unaff_EBX + 0x1a4);
            do {
              pbVar8 = (byte *)*puVar9;
              pbVar4 = local_134;
              pbVar7 = pbVar8;
              do {
                bVar1 = *pbVar4;
                bVar11 = bVar1 < *pbVar7;
                if (bVar1 != *pbVar7) {
LAB_006b06a0:
                  iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                  goto LAB_006b06a5;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar4[1];
                bVar11 = bVar1 < pbVar7[1];
                if (bVar1 != pbVar7[1]) goto LAB_006b06a0;
                pbVar4 = pbVar4 + 2;
                pbVar7 = pbVar7 + 2;
              } while (bVar1 != 0);
              iVar5 = 0;
LAB_006b06a5:
              if (iVar5 == 0) {
                *(short *)(*(int *)(unaff_EBX + 0x180) + local_144 * 2) = (short)iVar10;
                *(byte **)(*(int *)(unaff_EBX + 0x184) + local_144 * 4) = pbVar8;
                pcVar6 = ".notdef";
                goto LAB_006b06d5;
              }
              iVar10 = iVar10 + 1;
              puVar9 = puVar9 + 1;
            } while (iVar10 < *(int *)(unaff_EBX + 0x1a0));
          }
          goto LAB_006b071f;
        }
LAB_006b0731:
        *(int *)(unaff_EBX + 0x178) = local_13c;
        *(int *)(unaff_EBX + 0x17c) = local_138;
        *(undefined4 *)(unaff_EBX + 0x174) = local_d8;
      }
    }
    else {
      local_140 = 2;
    }
  }
  FUN_006b03a0();
  return local_140;
  while( true ) {
    bVar1 = pcVar6[1];
    bVar11 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_006b06f5;
    pcVar6 = pcVar6 + 2;
    pbVar8 = pbVar8 + 2;
    if (bVar1 == 0) break;
LAB_006b06d5:
    bVar1 = *pcVar6;
    bVar11 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_006b06f5:
      iVar10 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_006b06fa;
    }
    if (bVar1 == 0) break;
  }
  iVar10 = 0;
LAB_006b06fa:
  if (iVar10 != 0) {
    if (local_144 < local_13c) {
      local_13c = local_144;
    }
    if (local_138 <= local_144) {
      local_138 = local_144 + 1;
    }
  }
LAB_006b071f:
  local_144 = local_144 + 1;
  if (local_c4 <= local_144) goto LAB_006b0731;
  goto LAB_006b0632;
}


/* FUN_006b0a80 @ 006b0a80  kind=gamemisc  attributed-by=none  size=147 */

int FUN_006b0a80(uint *param_1,uint *param_2,undefined4 param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  byte *unaff_EBX;
  byte *pbVar5;
  byte *pbVar6;
  uint local_4;
  
  pbVar5 = (byte *)*param_1;
  pbVar6 = pbVar5 + 1;
  iVar4 = 0;
  if (pbVar6 <= unaff_EBX) {
    local_4 = (uint)*pbVar5;
    if (local_4 == 0) {
      *param_1 = (uint)pbVar6;
      return iVar4;
    }
    while (pbVar5 = pbVar6, pbVar6 + 2 <= unaff_EBX) {
      pbVar1 = pbVar6 + 1;
      pbVar5 = pbVar6 + 2;
      pbVar6 = pbVar5 + *pbVar6;
      if (unaff_EBX < pbVar6) break;
      if (param_2 != (uint *)0x0) {
        uVar2 = param_2[1];
        puVar3 = param_2;
        while (uVar2 != 0) {
          if (*puVar3 == (uint)*pbVar1) {
            iVar4 = (*(code *)puVar3[1])(pbVar5,pbVar6,param_3);
            if (iVar4 != 0) goto LAB_006b0af1;
            break;
          }
          uVar2 = puVar3[3];
          puVar3 = puVar3 + 2;
        }
      }
      local_4 = local_4 - 1;
      pbVar5 = pbVar6;
      if (local_4 == 0) {
LAB_006b0af1:
        *param_1 = (uint)pbVar5;
        return iVar4;
      }
    }
  }
  *param_1 = (uint)pbVar5;
  return 8;
}


/* FUN_006b0b20 @ 006b0b20  kind=gamemisc  attributed-by=none  size=44 */

void FUN_006b0b20(void)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = FUN_006908c0();
  if (iVar1 == 0) {
    iVar1 = FUN_00692010();
    if (iVar1 == 0) {
      *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + *(int *)(unaff_ESI + 0x48) * 0x10000
      ;
    }
  }
  return;
}


/* FUN_006b0b50 @ 006b0b50  kind=gamemisc  attributed-by=none  size=34 */

undefined1 FUN_006b0b50(void)

{
  undefined1 uVar1;
  int *in_ECX;
  
  uVar1 = 1;
  if ((((*in_ECX != 0x50465230) || (4 < (uint)in_ECX[1])) || ((uint)in_ECX[3] < 0x3a)) ||
     (in_ECX[2] != 0xd0a)) {
    uVar1 = 0;
  }
  return uVar1;
}


/* FUN_006b1050 @ 006b1050  kind=gamemisc  attributed-by=none  size=121 */

int FUN_006b1050(undefined4 param_1,undefined4 *param_2)

{
  uint in_EAX;
  uint uVar1;
  void *unaff_EBX;
  void *_Dst;
  int local_4;
  
  _Dst = (void *)0x0;
  local_4 = 0;
  if ((in_EAX != 0) && (*(char *)((int)unaff_EBX + (in_EAX - 1)) == '\0')) {
    in_EAX = in_EAX - 1;
  }
  uVar1 = 0;
  if (in_EAX != 0) {
    do {
      if ((*(byte *)(uVar1 + (int)unaff_EBX) < 0x20) || (0x7f < *(byte *)(uVar1 + (int)unaff_EBX)))
      goto LAB_006b10bb;
      uVar1 = uVar1 + 1;
    } while (uVar1 < in_EAX);
  }
  if (in_EAX != 0) {
    _Dst = (void *)FUN_00692230(param_1,in_EAX + 1,&local_4);
    if (local_4 == 0) {
      memcpy(_Dst,unaff_EBX,in_EAX);
      *(undefined1 *)((int)_Dst + in_EAX) = 0;
    }
  }
LAB_006b10bb:
  *param_2 = _Dst;
  return local_4;
}


/* FUN_006b1190 @ 006b1190  kind=gamemisc  attributed-by=none  size=1209 */

int FUN_006b1190(int param_1,int param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  short sVar3;
  int in_EAX;
  byte *pbVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined4 *unaff_EDI;
  int local_1c;
  byte *local_18;
  undefined4 local_14;
  uint local_10;
  byte *local_c;
  uint local_8;
  uint local_4;
  
  local_14 = *(undefined4 *)(param_1 + 0x1c);
  *unaff_EDI = local_14;
  unaff_EDI[1] = param_2;
  unaff_EDI[0x22] = 0;
  unaff_EDI[0x23] = unaff_EDI + 0x22;
  local_1c = FUN_006908c0(param_1,param_2);
  if (local_1c != 0) {
    return local_1c;
  }
  local_1c = FUN_00691f30(param_1);
  if (local_1c != 0) {
    return local_1c;
  }
  unaff_EDI[0x25] = *(undefined4 *)(param_1 + 0x20);
  puVar2 = *(undefined1 **)(param_1 + 0x20);
  pbVar14 = puVar2 + in_EAX;
  pbVar15 = local_18;
  local_c = pbVar14;
  if (puVar2 + 0xf <= pbVar14) {
    unaff_EDI[2] = (uint)CONCAT11(*puVar2,puVar2[1]);
    unaff_EDI[3] = (uint)CONCAT11(puVar2[2],puVar2[3]);
    unaff_EDI[4] = (uint)CONCAT11(puVar2[4],puVar2[5]);
    unaff_EDI[5] = (int)(short)((short)(char)puVar2[6] << 8) | (uint)(byte)puVar2[7];
    unaff_EDI[6] = (int)(short)((short)(char)puVar2[8] << 8) | (uint)(byte)puVar2[9];
    unaff_EDI[7] = (int)(short)((short)(char)puVar2[10] << 8) | (uint)(byte)puVar2[0xb];
    unaff_EDI[8] = (int)(short)((short)(char)puVar2[0xc] << 8) | (uint)(byte)puVar2[0xd];
    bVar1 = puVar2[0xe];
    local_4 = (uint)bVar1;
    local_8 = local_4 & 4;
    unaff_EDI[9] = local_4;
    local_18 = puVar2 + 0xf;
    if ((bVar1 & 4) == 0) {
      local_18 = puVar2 + 0x11;
      pbVar15 = puVar2 + 0xf;
      if (pbVar14 < local_18) goto LAB_006b1553;
      unaff_EDI[10] = (int)(short)((short)(char)puVar2[0xf] << 8) | (uint)(byte)puVar2[0x10];
    }
    iVar7 = 0;
    if (((char)bVar1 < '\0') &&
       (local_1c = FUN_006b0a80(&local_18,&DAT_00733ab4), iVar7 = local_1c, local_1c != 0))
    goto LAB_006b1621;
    local_1c = iVar7;
    pbVar4 = local_18 + 3;
    pbVar15 = local_18;
    if (pbVar4 <= pbVar14) {
      local_10 = (uint)CONCAT21(CONCAT11(*local_18,local_18[1]),local_18[2]);
      pbVar13 = pbVar4;
      if (local_10 != 0) {
        local_18 = pbVar4 + local_10;
        if (pbVar14 < pbVar4 + local_10) goto LAB_006b1553;
        do {
          pbVar13 = local_18;
          if (((local_18 < pbVar4 + 4) || (uVar12 = (uint)CONCAT11(*pbVar4,pbVar4[1]), uVar12 < 4))
             || (local_10 < uVar12)) break;
          sVar3 = CONCAT11(pbVar4[2],pbVar4[3]);
          if (sVar3 == 1) {
            puVar10 = unaff_EDI + 0x15;
LAB_006b13d2:
            local_1c = FUN_006b1050(local_14,puVar10);
            if (local_1c != 0) {
              return local_1c;
            }
          }
          else if (sVar3 == 2) {
            if (pbVar4 + 0x24 <= pbVar4 + uVar12) {
              unaff_EDI[0xb] = (int)(short)((short)(char)pbVar4[0xe] << 8) | (uint)pbVar4[0xf];
              unaff_EDI[0xc] = (int)(short)((short)(char)pbVar4[0x10] << 8) | (uint)pbVar4[0x11];
              unaff_EDI[0xd] = (int)(short)((short)(char)pbVar4[0x12] << 8) | (uint)pbVar4[0x13];
            }
          }
          else if (sVar3 == 3) {
            puVar10 = unaff_EDI + 0x16;
            goto LAB_006b13d2;
          }
          local_10 = local_10 - uVar12;
          pbVar13 = local_18;
          pbVar4 = pbVar4 + uVar12;
          pbVar14 = local_c;
        } while (local_10 != 0);
      }
      pbVar4 = pbVar13 + 1;
      pbVar15 = local_18;
      if (pbVar4 <= pbVar14) {
        uVar12 = (uint)*pbVar13;
        unaff_EDI[0x1a] = uVar12;
        if (pbVar4 + uVar12 * 2 <= pbVar14) {
          uVar5 = FUN_00693a60(local_14,4,0,uVar12,0,&local_1c);
          unaff_EDI[0x1b] = uVar5;
          if (local_1c != 0) goto LAB_006b1621;
          uVar6 = 0;
          pbVar15 = pbVar4;
          if (uVar12 != 0) {
            do {
              pbVar4 = pbVar15 + 2;
              *(uint *)(unaff_EDI[0x1b] + uVar6 * 4) =
                   (int)(short)((short)(char)*pbVar15 << 8) | (uint)pbVar15[1];
              uVar6 = uVar6 + 1;
              pbVar15 = pbVar4;
            } while (uVar6 < uVar12);
          }
          pbVar15 = local_18;
          if (pbVar4 + 8 <= pbVar14) {
            unaff_EDI[0x1c] = (uint)*pbVar4;
            unaff_EDI[0x1d] = (uint)pbVar4[1];
            unaff_EDI[0x11] = (uint)CONCAT11(pbVar4[2],pbVar4[3]);
            unaff_EDI[0xe] = (uint)CONCAT11(pbVar4[4],pbVar4[5]);
            pbVar13 = pbVar4 + 8;
            uVar12 = (uint)CONCAT11(pbVar4[6],pbVar4[7]);
            unaff_EDI[0x1e] = uVar12;
            unaff_EDI[0x1f] = pbVar13 + (param_2 - *(int *)(param_1 + 0x20));
            uVar5 = FUN_00693a60(local_14,0x10,0,uVar12,0,&local_1c);
            unaff_EDI[0x20] = uVar5;
            if (local_1c != 0) goto LAB_006b1621;
            uVar6 = local_4 & 2;
            iVar7 = 4;
            if (uVar6 != 0) {
              iVar7 = 5;
            }
            if (local_8 != 0) {
              iVar7 = iVar7 + 2;
            }
            uVar11 = local_4 & 8;
            if (uVar11 != 0) {
              iVar7 = iVar7 + 1;
            }
            local_c = (byte *)(local_4 & 0x10);
            if (local_c != (byte *)0x0) {
              iVar7 = iVar7 + 1;
            }
            local_10 = local_4 & 0x20;
            if (local_10 != 0) {
              iVar7 = iVar7 + 1;
            }
            pbVar15 = local_18;
            local_4 = uVar11;
            if (pbVar13 + iVar7 * uVar12 <= pbVar14) {
              if (uVar12 != 0) {
                iVar7 = 0;
                do {
                  puVar9 = (uint *)(unaff_EDI[0x20] + iVar7);
                  if (uVar6 == 0) {
                    uVar8 = (uint)*pbVar13;
                    pbVar14 = pbVar13 + 1;
                  }
                  else {
                    pbVar14 = pbVar13 + 2;
                    uVar8 = (uint)CONCAT11(*pbVar13,pbVar13[1]);
                  }
                  *puVar9 = uVar8;
                  if (local_8 == 0) {
                    uVar8 = unaff_EDI[10];
                  }
                  else {
                    bVar1 = *pbVar14;
                    pbVar15 = pbVar14 + 1;
                    pbVar14 = pbVar14 + 2;
                    uVar8 = (int)(short)((short)(char)bVar1 << 8) | (uint)*pbVar15;
                  }
                  puVar9[1] = uVar8;
                  if (uVar11 != 0) {
                    pbVar14 = pbVar14 + 1;
                  }
                  if (local_c == (byte *)0x0) {
                    uVar8 = (uint)*pbVar14;
                    pbVar15 = pbVar14 + 1;
                  }
                  else {
                    pbVar15 = pbVar14 + 2;
                    uVar8 = (uint)CONCAT11(*pbVar14,pbVar14[1]);
                  }
                  puVar9[2] = uVar8;
                  if (local_10 == 0) {
                    pbVar13 = pbVar15 + 2;
                    uVar8 = (uint)*pbVar15;
                  }
                  else {
                    pbVar13 = pbVar15 + 3;
                    uVar8 = (uint)CONCAT11(*pbVar15,pbVar15[1]);
                  }
                  iVar7 = iVar7 + 0x10;
                  uVar12 = uVar12 - 1;
                  puVar9[3] = uVar8 << 8 | (uint)pbVar13[-1];
                } while (uVar12 != 0);
              }
              goto LAB_006b1621;
            }
          }
        }
      }
    }
  }
LAB_006b1553:
  local_18 = pbVar15;
  local_1c = 8;
LAB_006b1621:
  FUN_00691fe0(param_1);
  uVar5 = FUN_00690930(param_1);
  unaff_EDI[0x24] = uVar5;
  unaff_EDI[0x25] = 0;
  return local_1c;
}


/* FUN_006b16c0 @ 006b16c0  kind=gamemisc  attributed-by=none  size=109 */

void FUN_006b16c0(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  if (*(char *)(param_1 + 0x20) != '\0') {
    sVar1 = *(short *)(iVar3 + 0x3a);
    sVar2 = *(short *)(iVar3 + 0x38);
    iVar5 = sVar1 + -1;
    iVar6 = 0;
    if (0 < sVar2) {
      iVar6 = (int)*(short *)(*(int *)(iVar3 + 0x44) + -2 + sVar2 * 2);
    }
    iVar4 = iVar5 - iVar6;
    if (iVar6 < iVar5) {
      iVar4 = *(int *)(iVar3 + 0x3c);
      if ((*(int *)(iVar4 + iVar6 * 8) == *(int *)(iVar4 + iVar5 * 8)) &&
         (*(int *)(iVar4 + 4 + iVar6 * 8) == *(int *)(iVar4 + 4 + iVar5 * 8))) {
        *(short *)(iVar3 + 0x3a) = sVar1 + -1;
        iVar5 = sVar1 + -2;
      }
      iVar4 = iVar5 - iVar6;
    }
    if (SBORROW4(iVar5,iVar6) == iVar4 < 0) {
      *(short *)(*(int *)(iVar3 + 0x44) + sVar2 * 2) = (short)iVar5;
      *(short *)(iVar3 + 0x38) = *(short *)(iVar3 + 0x38) + 1;
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}


