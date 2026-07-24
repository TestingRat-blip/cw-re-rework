// indirect_callback (game_misc) -- server. 24 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "indirect_callback.h"

/* FUN_00418180 @ 00418180  kind=gamemisc  attributed-by=role:callback  size=69 */

ushort * __cdecl FUN_00418180(ushort *param_1)

{
  byte bVar1;
  
  while( true ) {
    while( true ) {
      if (*param_1 < 0x80) {
        bVar1 = (&DAT_0055ac88)[*param_1];
      }
      else {
        bVar1 = 0;
      }
      if ((bVar1 & 1) != 0) break;
      param_1 = param_1 + 1;
    }
    if (*param_1 == 0x3c) break;
    if (*param_1 == 0) {
      return param_1;
    }
    param_1 = param_1 + 1;
  }
  *param_1 = 0;
  return param_1 + 1;
}


/* FUN_00418360 @ 00418360  kind=gamemisc  attributed-by=role:callback  size=168 */

ushort * __cdecl FUN_00418360(ushort *param_1)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *_Src;
  ushort *puVar4;
  int iVar5;
  
  _Src = (ushort *)0x0;
  iVar5 = 0;
  while( true ) {
    while( true ) {
      puVar4 = param_1;
      if (*puVar4 < 0x80) {
        bVar2 = (&DAT_0055ac88)[*puVar4];
      }
      else {
        bVar2 = 0;
      }
      if ((bVar2 & 1) != 0) break;
      param_1 = puVar4 + 1;
    }
    uVar1 = *puVar4;
    if (uVar1 == 0x3c) break;
    if (uVar1 == 0xd) {
      *puVar4 = 10;
      param_1 = puVar4 + 1;
      if (*param_1 == 10) {
        if (_Src != (ushort *)0x0) {
          memmove(_Src + -iVar5,_Src,(int)param_1 - (int)_Src);
        }
        _Src = puVar4 + 2;
        iVar5 = iVar5 + 1;
        param_1 = _Src;
      }
    }
    else {
      if (uVar1 == 0) {
        return puVar4;
      }
      param_1 = puVar4 + 1;
    }
  }
  puVar3 = puVar4;
  if (_Src != (ushort *)0x0) {
    memmove(_Src + -iVar5,_Src,(int)puVar4 - (int)_Src);
    puVar3 = puVar4 + -iVar5;
  }
  *puVar3 = 0;
  return puVar4 + 1;
}


/* FUN_00418cf0 @ 00418cf0  kind=gamemisc  attributed-by=role:callback  size=182 */

ushort * __cdecl FUN_00418cf0(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *puVar4;
  code *pcVar5;
  ushort *puVar6;
  int iVar7;
  
  puVar4 = (ushort *)0x0;
  iVar7 = 0;
  pcVar5 = memmove_exref;
  while( true ) {
    while( true ) {
      puVar6 = param_1;
      if (*puVar6 < 0x80) {
        bVar2 = (&DAT_0055ac88)[*puVar6];
      }
      else {
        bVar2 = 0;
      }
      if ((bVar2 & 2) != 0) break;
      param_1 = puVar6 + 1;
    }
    uVar1 = *puVar6;
    if (uVar1 == param_2) break;
    if (uVar1 == 0xd) {
      *puVar6 = 10;
      param_1 = puVar6 + 1;
      if (*param_1 == 10) {
        if (puVar4 != (ushort *)0x0) {
          (*pcVar5)(puVar4 + -iVar7,puVar4,(int)param_1 - (int)puVar4);
          pcVar5 = memmove_exref;
        }
        puVar4 = puVar6 + 2;
        iVar7 = iVar7 + 1;
        param_1 = puVar4;
      }
    }
    else {
      if (uVar1 == 0) {
        return (ushort *)0x0;
      }
      param_1 = puVar6 + 1;
    }
  }
  puVar3 = puVar6;
  if (puVar4 != (ushort *)0x0) {
    (*pcVar5)(puVar4 + -iVar7,puVar4,(int)puVar6 - (int)puVar4);
    puVar3 = puVar6 + -iVar7;
  }
  *puVar3 = 0;
  return puVar6 + 1;
}


/* FUN_00418db0 @ 00418db0  kind=gamemisc  attributed-by=role:callback  size=226 */

ushort * __cdecl FUN_00418db0(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *puVar4;
  code *pcVar5;
  ushort *puVar6;
  int iVar7;
  ushort *local_10;
  int local_c;
  undefined4 local_8;
  
  puVar4 = (ushort *)0x0;
  iVar7 = 0;
  local_8 = 0x80;
  pcVar5 = memmove_exref;
  local_10 = puVar4;
  local_c = iVar7;
  while( true ) {
    while( true ) {
      puVar6 = param_1;
      if (*puVar6 < (ushort)local_8) {
        bVar2 = (&DAT_0055ac88)[*puVar6];
      }
      else {
        bVar2 = 0;
      }
      if ((bVar2 & 2) != 0) break;
      param_1 = puVar6 + 1;
    }
    uVar1 = *puVar6;
    if (uVar1 == param_2) break;
    if (uVar1 == 0xd) {
      *puVar6 = 10;
      param_1 = puVar6 + 1;
      if (*param_1 == 10) {
        if (puVar4 != (ushort *)0x0) {
          (*pcVar5)(puVar4 + -iVar7,puVar4,(int)param_1 - (int)puVar4);
          pcVar5 = memmove_exref;
        }
        puVar4 = puVar6 + 2;
        iVar7 = iVar7 + 1;
        param_1 = puVar4;
        local_10 = puVar4;
        local_c = iVar7;
      }
    }
    else if (uVar1 == 0x26) {
      param_1 = FUN_00419c90(puVar6,&local_10);
      puVar4 = local_10;
      pcVar5 = memmove_exref;
      iVar7 = local_c;
    }
    else {
      if (uVar1 == 0) {
        return (ushort *)0x0;
      }
      param_1 = puVar6 + 1;
    }
  }
  puVar3 = puVar6;
  if (puVar4 != (ushort *)0x0) {
    (*pcVar5)(puVar4 + -iVar7,puVar4,(int)puVar6 - (int)puVar4);
    puVar3 = puVar6 + -iVar7;
  }
  *puVar3 = 0;
  return puVar6 + 1;
}


/* FUN_00419490 @ 00419490  kind=gamemisc  attributed-by=role:callback  size=78 */

ushort * __cdecl FUN_00419490(ushort *param_1,ushort param_2)

{
  byte bVar1;
  
  while( true ) {
    while( true ) {
      if (*param_1 < 0x80) {
        bVar1 = (&DAT_0055ac88)[*param_1];
      }
      else {
        bVar1 = 0;
      }
      if ((bVar1 & 2) != 0) break;
      param_1 = param_1 + 1;
    }
    if (*param_1 == param_2) break;
    if (*param_1 == 0) {
      return (ushort *)0x0;
    }
    param_1 = param_1 + 1;
  }
  *param_1 = 0;
  return param_1 + 1;
}


/* FUN_004195a0 @ 004195a0  kind=gamemisc  attributed-by=role:callback  size=202 */

ushort * __cdecl FUN_004195a0(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *_Src;
  ushort *puVar4;
  int iVar5;
  
  _Src = (ushort *)0x0;
  iVar5 = 0;
  while( true ) {
    while( true ) {
      puVar4 = param_1;
      if (*puVar4 < 0x80) {
        bVar2 = (&DAT_0055ac88)[*puVar4];
      }
      else {
        bVar2 = 0;
      }
      if ((bVar2 & 4) != 0) break;
      param_1 = puVar4 + 1;
    }
    uVar1 = *puVar4;
    if (uVar1 == param_2) break;
    if (uVar1 < 0x80) {
      bVar2 = (&DAT_0055ac88)[uVar1];
    }
    else {
      bVar2 = 0;
    }
    if ((bVar2 & 8) == 0) {
      if (uVar1 == 0) {
        return (ushort *)0x0;
      }
      param_1 = puVar4 + 1;
    }
    else {
      *puVar4 = 0x20;
      param_1 = puVar4 + 1;
      if ((uVar1 == 0xd) && (*param_1 == 10)) {
        if (_Src != (ushort *)0x0) {
          memmove(_Src + -iVar5,_Src,(int)param_1 - (int)_Src);
        }
        _Src = puVar4 + 2;
        iVar5 = iVar5 + 1;
        param_1 = _Src;
      }
    }
  }
  puVar3 = puVar4;
  if (_Src != (ushort *)0x0) {
    memmove(_Src + -iVar5,_Src,(int)puVar4 - (int)_Src);
    puVar3 = puVar4 + -iVar5;
  }
  *puVar3 = 0;
  return puVar4 + 1;
}


/* FUN_00419670 @ 00419670  kind=gamemisc  attributed-by=role:callback  size=254 */

ushort * __cdecl FUN_00419670(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  uint uVar4;
  ushort *_Src;
  ushort *puVar5;
  int iVar6;
  ushort *local_c;
  int local_8;
  
  local_c = (ushort *)0x0;
  local_8 = 0;
  iVar6 = local_8;
  _Src = local_c;
  while( true ) {
    while( true ) {
      puVar5 = param_1;
      if (*puVar5 < 0x80) {
        bVar2 = (&DAT_0055ac88)[*puVar5];
      }
      else {
        bVar2 = 0;
      }
      if ((bVar2 & 4) != 0) break;
      param_1 = puVar5 + 1;
    }
    uVar1 = *puVar5;
    uVar4 = (uint)uVar1;
    if (uVar1 == param_2) break;
    if (uVar1 < 0x80) {
      bVar2 = (&DAT_0055ac88)[uVar4];
    }
    else {
      bVar2 = 0;
    }
    if ((bVar2 & 8) == 0) {
      if (uVar4 == 0x26) {
        param_1 = FUN_00419c90(puVar5,&local_c);
        iVar6 = local_8;
        _Src = local_c;
      }
      else {
        if (uVar1 == 0) {
          return (ushort *)0x0;
        }
        param_1 = puVar5 + 1;
      }
    }
    else {
      *puVar5 = 0x20;
      param_1 = puVar5 + 1;
      if ((uVar4 == 0xd) && (*param_1 == 10)) {
        if (_Src != (ushort *)0x0) {
          memmove(_Src + -iVar6,_Src,(int)param_1 - (int)_Src);
        }
        local_c = puVar5 + 2;
        local_8 = iVar6 + 1;
        param_1 = local_c;
        iVar6 = local_8;
        _Src = local_c;
      }
    }
  }
  puVar3 = puVar5;
  if (_Src != (ushort *)0x0) {
    memmove(_Src + -iVar6,_Src,(int)puVar5 - (int)_Src);
    puVar3 = puVar5 + -iVar6;
  }
  *puVar3 = 0;
  return puVar5 + 1;
}


/* FUN_00419770 @ 00419770  kind=gamemisc  attributed-by=role:callback  size=362 */

ushort * __cdecl FUN_00419770(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  
  puVar4 = (ushort *)0x0;
  iVar5 = 0;
  if (*param_1 < 0x80) {
    bVar2 = (&DAT_0055ac88)[*param_1];
  }
  else {
    bVar2 = 0;
  }
  puVar6 = param_1;
  if ((bVar2 & 8) != 0) {
    do {
      puVar4 = puVar6 + 1;
      if (puVar6[1] < 0x80) {
        bVar2 = (&DAT_0055ac88)[puVar6[1]];
      }
      else {
        bVar2 = 0;
      }
      puVar6 = puVar4;
    } while ((bVar2 & 8) != 0);
    iVar5 = (int)puVar4 - (int)param_1 >> 1;
    puVar4 = param_1 + iVar5;
    param_1 = puVar4;
  }
  while( true ) {
    while( true ) {
      puVar6 = param_1;
      if (*puVar6 < 0x80) {
        bVar2 = (&DAT_0055ac88)[*puVar6];
      }
      else {
        bVar2 = 0;
      }
      if ((bVar2 & 0xc) != 0) break;
      param_1 = puVar6 + 1;
    }
    uVar1 = *puVar6;
    if (uVar1 == param_2) break;
    if (uVar1 < 0x80) {
      bVar2 = (&DAT_0055ac88)[uVar1];
    }
    else {
      bVar2 = 0;
    }
    if ((bVar2 & 8) == 0) {
      if (uVar1 == 0) {
        return (ushort *)0x0;
      }
      param_1 = puVar6 + 1;
    }
    else {
      *puVar6 = 0x20;
      param_1 = puVar6 + 1;
      if (puVar6[1] < 0x80) {
        bVar2 = (&DAT_0055ac88)[puVar6[1]];
      }
      else {
        bVar2 = 0;
      }
      if ((bVar2 & 8) != 0) {
        puVar6 = puVar6 + 2;
        while( true ) {
          if (*puVar6 < 0x80) {
            bVar2 = (&DAT_0055ac88)[*puVar6];
          }
          else {
            bVar2 = 0;
          }
          if ((bVar2 & 8) == 0) break;
          puVar6 = puVar6 + 1;
        }
        iVar7 = (int)puVar6 - (int)param_1 >> 1;
        if (puVar4 != (ushort *)0x0) {
          memmove(puVar4 + -iVar5,puVar4,(int)param_1 - (int)puVar4);
        }
        puVar4 = param_1 + iVar7;
        iVar5 = iVar5 + iVar7;
        param_1 = puVar4;
      }
    }
  }
  puVar3 = puVar6;
  if (puVar4 != (ushort *)0x0) {
    memmove(puVar4 + -iVar5,puVar4,(int)puVar6 - (int)puVar4);
    puVar3 = puVar6 + -iVar5;
  }
  do {
    *puVar3 = 0;
    if (puVar3[-1] < 0x80) {
      bVar2 = (&DAT_0055ac88)[puVar3[-1]];
    }
    else {
      bVar2 = 0;
    }
    puVar3 = puVar3 + -1;
  } while ((bVar2 & 8) != 0);
  return puVar6 + 1;
}


/* FUN_004198e0 @ 004198e0  kind=gamemisc  attributed-by=role:callback  size=415 */

ushort * __cdecl FUN_004198e0(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  ushort *local_c;
  int local_8;
  
  local_c = (ushort *)0x0;
  local_8 = 0;
  if (*param_1 < 0x80) {
    bVar2 = (&DAT_0055ac88)[*param_1];
  }
  else {
    bVar2 = 0;
  }
  puVar4 = (ushort *)0x0;
  iVar6 = 0;
  puVar5 = param_1;
  if ((bVar2 & 8) != 0) {
    do {
      puVar4 = puVar5 + 1;
      if (puVar5[1] < 0x80) {
        bVar2 = (&DAT_0055ac88)[puVar5[1]];
      }
      else {
        bVar2 = 0;
      }
      puVar5 = puVar4;
    } while ((bVar2 & 8) != 0);
    iVar6 = (int)puVar4 - (int)param_1 >> 1;
    puVar4 = param_1 + iVar6;
    param_1 = puVar4;
    local_c = puVar4;
    local_8 = iVar6;
  }
  while( true ) {
    while( true ) {
      puVar5 = param_1;
      if (*puVar5 < 0x80) {
        bVar2 = (&DAT_0055ac88)[*puVar5];
      }
      else {
        bVar2 = 0;
      }
      if ((bVar2 & 0xc) != 0) break;
      param_1 = puVar5 + 1;
    }
    uVar1 = *puVar5;
    if (uVar1 == param_2) break;
    if (uVar1 < 0x80) {
      bVar2 = (&DAT_0055ac88)[uVar1];
    }
    else {
      bVar2 = 0;
    }
    if ((bVar2 & 8) == 0) {
      if (uVar1 == 0x26) {
        param_1 = FUN_00419c90(puVar5,&local_c);
        puVar4 = local_c;
        iVar6 = local_8;
      }
      else {
        if (uVar1 == 0) {
          return (ushort *)0x0;
        }
        param_1 = puVar5 + 1;
      }
    }
    else {
      *puVar5 = 0x20;
      param_1 = puVar5 + 1;
      if (puVar5[1] < 0x80) {
        bVar2 = (&DAT_0055ac88)[puVar5[1]];
      }
      else {
        bVar2 = 0;
      }
      if ((bVar2 & 8) != 0) {
        puVar5 = puVar5 + 2;
        while( true ) {
          if (*puVar5 < 0x80) {
            bVar2 = (&DAT_0055ac88)[*puVar5];
          }
          else {
            bVar2 = 0;
          }
          if ((bVar2 & 8) == 0) break;
          puVar5 = puVar5 + 1;
        }
        iVar7 = (int)puVar5 - (int)param_1 >> 1;
        if (puVar4 != (ushort *)0x0) {
          memmove(puVar4 + -iVar6,puVar4,(int)param_1 - (int)puVar4);
        }
        puVar4 = param_1 + iVar7;
        iVar6 = iVar6 + iVar7;
        param_1 = puVar4;
        local_c = puVar4;
        local_8 = iVar6;
      }
    }
  }
  puVar3 = puVar5;
  if (puVar4 != (ushort *)0x0) {
    memmove(puVar4 + -iVar6,puVar4,(int)puVar5 - (int)puVar4);
    puVar3 = puVar5 + -iVar6;
  }
  do {
    *puVar3 = 0;
    if (puVar3[-1] < 0x80) {
      bVar2 = (&DAT_0055ac88)[puVar3[-1]];
    }
    else {
      bVar2 = 0;
    }
    puVar3 = puVar3 + -1;
  } while ((bVar2 & 8) != 0);
  return puVar5 + 1;
}


/* FUN_0045f3e0 @ 0045f3e0  kind=gamemisc  attributed-by=role:callback  size=449 */

void __cdecl FUN_0045f3e0(int *param_1,int param_2,byte *param_3)

{
  byte bVar1;
  int *piVar2;
  bool bVar3;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  undefined3 extraout_var;
  int *piVar12;
  size_t _Size;
  
  pbVar9 = param_3;
  piVar12 = param_1 + 2;
  iVar8 = *piVar12;
  pcVar4 = (char *)FUN_004ae680(*(int **)param_3,1);
  pbVar5 = (byte *)FUN_004ae680(*(int **)(pbVar9 + 4),1);
  piVar2 = *(int **)pbVar9;
  if ((*(byte *)(piVar2 + 7) & 0x10) == 0) {
    iVar6 = FUN_004ae680(piVar2,1);
    iVar7 = 0;
    if (iVar6 != 0) goto LAB_0045f42a;
  }
  else {
LAB_0045f42a:
    iVar7 = piVar2[6];
    if ((*(ushort *)(piVar2 + 7) & 0x4000) != 0) {
      iVar7 = iVar7 + piVar2[4];
    }
  }
  if (*(int *)(iVar8 + 0x70) < iVar7) {
    param_1[0xe] = 1;
    if (*piVar12 == 0) {
      iVar8 = 1000000000;
    }
    else {
      iVar8 = *(int *)(*piVar12 + 0x50);
    }
    iVar7 = 0;
    if (-1 < iVar8) {
      do {
        if ("LIKE or GLOB pattern too complex"[iVar7] == '\0') break;
        iVar7 = iVar7 + 1;
      } while (iVar7 <= iVar8);
    }
    _Size = iVar7 + 1;
    if (iVar8 < iVar7) {
      return;
    }
    iVar8 = FUN_004b7260(piVar12,_Size,0);
    if (iVar8 != 0) {
      return;
    }
    pcVar4 = "LIKE or GLOB pattern too complex";
    goto LAB_0045f496;
  }
  if (param_2 == 3) {
    param_3 = (byte *)FUN_004ae680(*(int **)(pbVar9 + 8),1);
    if (param_3 == (byte *)0x0) {
      return;
    }
    iVar8 = 0;
    pbVar9 = param_3;
    if (*param_3 != 0) {
      do {
        if (pbVar9 == (byte *)0xffffffff) break;
        pbVar10 = pbVar9 + 1;
        if (0xbf < *pbVar9) {
          bVar1 = *pbVar10;
          while ((bVar1 & 0xc0) == 0x80) {
            pbVar9 = pbVar10 + 1;
            pbVar10 = pbVar10 + 1;
            bVar1 = *pbVar9;
          }
        }
        iVar8 = iVar8 + 1;
        pbVar9 = pbVar10;
      } while (*pbVar10 != 0);
      if (iVar8 == 1) {
        uVar11 = FUN_004ad280((int *)&param_3);
        goto LAB_0045f572;
      }
    }
    param_1[0xe] = 1;
    if (*piVar12 == 0) {
      iVar8 = 1000000000;
    }
    else {
      iVar8 = *(int *)(*piVar12 + 0x50);
    }
    iVar7 = 0;
    if (-1 < iVar8) {
      do {
        if ("ESCAPE expression must be a single character"[iVar7] == '\0') break;
        iVar7 = iVar7 + 1;
      } while (iVar7 <= iVar8);
    }
    _Size = iVar7 + 1;
    if ((iVar7 <= iVar8) && (iVar8 = FUN_004b7260(piVar12,_Size,0), iVar8 == 0)) {
      pcVar4 = "ESCAPE expression must be a single character";
LAB_0045f496:
      memcpy((void *)param_1[3],pcVar4,_Size);
      param_1[8] = iVar7;
      param_1[9] = 0x1030202;
      return;
    }
  }
  else {
    uVar11 = 0;
LAB_0045f572:
    if ((pbVar5 != (byte *)0x0) && (pcVar4 != (char *)0x0)) {
      bVar3 = FUN_00486540(pcVar4,pbVar5,*(ushort **)(*param_1 + 4),uVar11);
      FUN_0045fbd0((int)param_1,CONCAT31(extraout_var,bVar3));
    }
  }
  return;
}


/* FUN_0046c6c0 @ 0046c6c0  kind=gamemisc  attributed-by=role:callback  size=235 */

undefined4 __cdecl FUN_0046c6c0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  if (((param_3 == (undefined4 *)0x0) || ((byte *)*param_3 == (byte *)0x0)) ||
     (piVar8 = (int *)param_3[2], piVar8 == (int *)0x0)) {
    return 0;
  }
  pbVar2 = (byte *)param_1[1];
  iVar5 = *param_1;
  iVar4 = FUN_00499c30(iVar5,(byte *)*param_3,pbVar2);
  if (iVar4 == 0) {
    return 0;
  }
  if ((byte *)param_3[1] == (byte *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_00499af0(iVar5,(byte *)param_3[1],pbVar2);
    if (iVar5 != 0) {
      iVar6 = *(int *)(iVar5 + 0x24);
      goto LAB_0046c72a;
    }
  }
  iVar6 = 0;
LAB_0046c72a:
  cVar1 = (char)*piVar8;
  iVar9 = 0;
  while( true ) {
    if (cVar1 == '\0') {
      return 0;
    }
    if (iVar6 < iVar9) break;
    iVar7 = 0;
    while ((iVar3 = (int)cVar1, 0x2f < iVar3 && (iVar3 < 0x3a))) {
      piVar8 = (int *)((int)piVar8 + 1);
      iVar7 = iVar3 + (iVar7 * 5 + -0x18) * 2;
      cVar1 = *(char *)piVar8;
    }
    if (iVar9 == 0) {
      *(int *)(iVar4 + 0x1c) = iVar7;
    }
    if (iVar5 == 0) {
      return 0;
    }
    *(int *)(*(int *)(iVar5 + 8) + iVar9 * 4) = iVar7;
    if ((char)*piVar8 == ' ') {
      piVar8 = (int *)((int)piVar8 + 1);
    }
    if (((*piVar8 == 0x726f6e75) && (piVar8[1] == 0x65726564)) && ((short)piVar8[2] == 100)) {
      *(undefined1 *)(iVar5 + 0x2e) = 1;
      return 0;
    }
    cVar1 = (char)*piVar8;
    iVar9 = iVar9 + 1;
  }
  return 0;
}


/* FUN_0046c7b0 @ 0046c7b0  kind=gamemisc  attributed-by=role:callback  size=721 */

undefined4 __cdecl FUN_0046c7b0(int param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  byte *pbVar6;
  char *pcVar7;
  uint *puVar8;
  char cVar9;
  undefined3 extraout_var;
  undefined4 *puVar10;
  byte *pbVar11;
  size_t sVar12;
  short *psVar13;
  uint *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  
  puVar8 = param_2;
  piVar3 = *(int **)(param_1 + 0x10);
  piVar4 = (int *)*piVar3;
  psVar13 = (short *)piVar3[1];
  uVar5 = piVar3[3];
  cVar9 = (char)*param_2;
  if (cVar9 != -0x68) {
    if (cVar9 == -0x67) {
      if ((*(byte *)(piVar3 + 7) & 8) != 0) {
        return 0;
      }
      if (*(uint *)(param_1 + 0xc) != (uint)*(byte *)((int)param_2 + 0x23)) {
        return 0;
      }
      puVar10 = *(undefined4 **)(uVar5 + 0x20);
      param_2 = (uint *)(uVar5 + 0x24);
      puVar14 = (uint *)0x0;
      if (0 < (int)*param_2) {
        do {
          cVar9 = FUN_00498610((char *)*puVar10,(char *)puVar8);
          if (CONCAT31(extraout_var,cVar9) == 0) break;
          puVar14 = (uint *)((int)puVar14 + 1);
          puVar10 = puVar10 + 4;
        } while ((int)puVar14 < (int)*param_2);
        if ((int)puVar14 < (int)*param_2) goto LAB_0046c8f7;
      }
      bVar1 = *(byte *)(*(int *)(*(int *)(*piVar4 + 0x10) + 0xc) + 0x4d);
      puVar10 = FUN_0048cc10(*piVar4,*(undefined4 **)(uVar5 + 0x20),0x10,param_2,(uint *)&param_2);
      puVar14 = param_2;
      *(undefined4 **)(uVar5 + 0x20) = puVar10;
      if (-1 < (int)param_2) {
        puVar10 = puVar10 + (int)param_2 * 4;
        *puVar10 = puVar8;
        piVar4[0x13] = piVar4[0x13] + 1;
        puVar10[2] = piVar4[0x13];
        if ((undefined4 *)puVar8[4] == (undefined4 *)0x0) {
          param_2 = (uint *)0x0;
        }
        else {
          param_2 = *(uint **)puVar8[4];
        }
        pbVar6 = (byte *)puVar8[1];
        sVar12 = 0;
        if (pbVar6 != (byte *)0x0) {
          bVar2 = *pbVar6;
          pbVar11 = pbVar6;
          while (bVar2 != 0) {
            pbVar11 = pbVar11 + 1;
            bVar2 = *pbVar11;
          }
          sVar12 = (int)pbVar11 - (int)pbVar6 & 0x3fffffff;
        }
        psVar13 = FUN_004995c0(*piVar4,pbVar6,sVar12,(int)param_2,bVar1,'\0');
        puVar10[1] = psVar13;
        if ((*puVar8 & 0x100000) != 0) {
          puVar10[3] = piVar4[0x12];
          piVar4[0x12] = piVar4[0x12] + 1;
          *(short *)((int)puVar8 + 0x1e) = (short)puVar14;
          puVar8[9] = uVar5;
          return 1;
        }
        puVar10[3] = 0xffffffff;
      }
LAB_0046c8f7:
      *(short *)((int)puVar8 + 0x1e) = (short)puVar14;
      puVar8[9] = uVar5;
      return 1;
    }
    if (cVar9 != -0x66) {
      return 0;
    }
  }
  if (psVar13 == (short *)0x0) {
    return 1;
  }
  iVar15 = 0;
  if (*psVar13 < 1) {
    return 1;
  }
  puVar14 = (uint *)(psVar13 + 0x1a);
  while (param_2[6] != *puVar14) {
    iVar15 = iVar15 + 1;
    puVar14 = puVar14 + 0x12;
    if (*psVar13 <= iVar15) {
      return 1;
    }
  }
  uVar18 = *(uint *)(uVar5 + 0x18);
  puVar14 = *(uint **)(uVar5 + 0x14);
  uVar17 = 0;
  if (0 < (int)uVar18) {
    puVar16 = puVar14 + 2;
    do {
      if ((puVar16[-1] == param_2[6]) &&
         (uVar18 = *(uint *)(uVar5 + 0x18), *puVar16 == (int)(short)param_2[7])) break;
      uVar17 = uVar17 + 1;
      puVar16 = puVar16 + 6;
    } while ((int)uVar17 < (int)uVar18);
  }
  if ((int)uVar17 < (int)uVar18) goto LAB_0046ca69;
  if ((uVar18 & uVar18 - 1) == 0) {
    iVar15 = 1;
    if (uVar18 != 0) {
      iVar15 = uVar18 * 2;
    }
    param_2 = puVar14;
    puVar14 = FUN_00494cf0(*piVar4,puVar14,iVar15 * 0x18);
    if (puVar14 != (uint *)0x0) goto LAB_0046c9bf;
    uVar18 = 0xffffffff;
    puVar14 = param_2;
  }
  else {
LAB_0046c9bf:
    (puVar14 + uVar18 * 6)[0] = 0;
    (puVar14 + uVar18 * 6)[1] = 0;
    (puVar14 + uVar18 * 6 + 2)[0] = 0;
    (puVar14 + uVar18 * 6 + 2)[1] = 0;
    (puVar14 + uVar18 * 6 + 4)[0] = 0;
    (puVar14 + uVar18 * 6 + 4)[1] = 0;
    *(int *)(uVar5 + 0x18) = *(int *)(uVar5 + 0x18) + 1;
  }
  *(uint **)(uVar5 + 0x14) = puVar14;
  uVar17 = uVar18;
  if (-1 < (int)uVar18) {
    puVar14 = puVar14 + uVar18 * 6;
    *puVar14 = puVar8[10];
    puVar14[1] = puVar8[6];
    puVar14[2] = (int)(short)puVar8[7];
    piVar4[0x13] = piVar4[0x13] + 1;
    puVar14[4] = piVar4[0x13];
    puVar14[3] = 0xffffffff;
    puVar14[5] = (uint)puVar8;
    piVar3 = *(int **)(uVar5 + 0x10);
    if (piVar3 != (int *)0x0) {
      puVar10 = (undefined4 *)piVar3[2];
      uVar18 = 0;
      if (0 < *piVar3) {
        do {
          pcVar7 = (char *)*puVar10;
          if (((*pcVar7 == -0x68) && (*(uint *)(pcVar7 + 0x18) == puVar8[6])) &&
             (*(short *)(pcVar7 + 0x1c) == (short)puVar8[7])) {
            puVar14[3] = uVar18;
            break;
          }
          uVar18 = uVar18 + 1;
          puVar10 = puVar10 + 5;
        } while ((int)uVar18 < *piVar3);
      }
    }
    if ((int)puVar14[3] < 0) {
      puVar14[3] = *(uint *)(uVar5 + 0xc);
      *(int *)(uVar5 + 0xc) = *(int *)(uVar5 + 0xc) + 1;
    }
  }
LAB_0046ca69:
  puVar8[9] = uVar5;
  *(undefined1 *)puVar8 = 0x9a;
  *(short *)((int)puVar8 + 0x1e) = (short)uVar17;
  return 1;
}


/* FUN_004708e0 @ 004708e0  kind=gamemisc  attributed-by=role:callback  size=191 */

uint __cdecl FUN_004708e0(int param_1,uint param_2,byte *param_3,uint param_4,byte *param_5)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  undefined3 extraout_var;
  uint uVar5;
  uint extraout_EDX;
  uint uVar6;
  bool bVar7;
  
  pbVar2 = param_3;
  pbVar3 = param_5;
  uVar5 = param_4;
  uVar6 = param_4;
  if ((int)param_2 < (int)param_4) {
    uVar5 = param_2;
    uVar6 = param_2;
  }
  while (uVar1 = uVar5 - 4, 3 < uVar5) {
    if (*(int *)pbVar2 != *(int *)pbVar3) goto LAB_00470916;
    pbVar2 = pbVar2 + 4;
    pbVar3 = pbVar3 + 4;
    uVar5 = uVar1;
  }
  if (uVar1 != 0xfffffffc) {
LAB_00470916:
    bVar7 = *pbVar2 < *pbVar3;
    if ((*pbVar2 != *pbVar3) ||
       ((uVar1 != 0xfffffffd &&
        ((bVar7 = pbVar2[1] < pbVar3[1], pbVar2[1] != pbVar3[1] ||
         ((uVar1 != 0xfffffffe &&
          ((bVar7 = pbVar2[2] < pbVar3[2], pbVar2[2] != pbVar3[2] ||
           ((uVar1 != 0xffffffff && (bVar7 = pbVar2[3] < pbVar3[3], pbVar2[3] != pbVar3[3]))))))))))
       )) {
      uVar5 = -(uint)bVar7 | 1;
      goto LAB_0047094c;
    }
  }
  uVar5 = 0;
LAB_0047094c:
  if (uVar5 != 0) {
    return uVar5;
  }
  if (param_1 != 0) {
    for (iVar4 = param_2 - uVar6; (0 < iVar4 && (param_3[iVar4 + (uVar6 - 1)] == 0x20));
        iVar4 = iVar4 + -1) {
    }
    if ((iVar4 == 0) &&
       (bVar7 = FUN_0046bab0((int)(param_5 + uVar6),param_4 - uVar6),
       CONCAT31(extraout_var,bVar7) != 0)) {
      return extraout_EDX;
    }
  }
  return param_2 - param_4;
}


/* FUN_00471550 @ 00471550  kind=gamemisc  attributed-by=role:callback  size=65 */

int __cdecl FUN_00471550(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((((undefined4 *)(iVar1 + 0x1ac) != (undefined4 *)0x0) &&
      (pcVar2 = *(code **)(iVar1 + 0x1ac), pcVar2 != (code *)0x0)) && (-1 < *(int *)(iVar1 + 0x1b4))
     ) {
    iVar3 = (*pcVar2)(*(undefined4 *)(iVar1 + 0x1b0),*(int *)(iVar1 + 0x1b4));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + 0x1b4) = 0xffffffff;
      return 0;
    }
    *(int *)(iVar1 + 0x1b4) = *(int *)(iVar1 + 0x1b4) + 1;
    return iVar3;
  }
  return 0;
}


/* FUN_004772e0 @ 004772e0  kind=gamemisc  attributed-by=role:callback  size=138 */

undefined4 __cdecl FUN_004772e0(int param_1,byte *param_2)

{
  ushort *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = *(int **)(param_1 + 8);
  switch(*param_2) {
  case 0x48:
  case 0x84:
    return 1;
  case 0x97:
  case 0x99:
  case 0x9b:
    piVar3 = *(int **)(param_2 + 0x10);
    if (piVar3 != (int *)0x0) {
      piVar5 = (int *)piVar3[2];
      for (iVar4 = *piVar3; 0 < iVar4; iVar4 = iVar4 + -1) {
        if (*piVar5 != 0) {
          puVar1 = (ushort *)(*piVar5 + 2);
          *puVar1 = *puVar1 | 0x200;
        }
        piVar5 = piVar5 + 5;
      }
    }
  default:
    iVar4 = FUN_0047e970((char *)param_2);
    if (iVar4 != 0) {
      piVar2[0x13] = piVar2[0x13] + 1;
      iVar4 = FUN_00497780(piVar2,param_2,piVar2[0x13]);
      param_2[0x23] = *param_2;
      *param_2 = 0x84;
      *(int *)(param_2 + 0x18) = iVar4;
      return 1;
    }
  case 0x5c:
    return 0;
  }
}


/* FUN_00478e60 @ 00478e60  kind=gamemisc  attributed-by=role:callback  size=73 */

undefined4 __cdecl FUN_00478e60(int param_1,undefined1 *param_2)

{
  if ((*(int *)(param_1 + 0x10) != 3) || ((param_2[2] & 1) == 0)) {
    switch(*param_2) {
    case 0x1a:
    case 0x98:
    case 0x99:
    case 0x9a:
      break;
    default:
      return 0;
    case 0x97:
      if (*(int *)(param_1 + 0x10) == 2) {
        return 0;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return 2;
}


/* FUN_00479150 @ 00479150  kind=gamemisc  attributed-by=role:callback  size=82 */

undefined4 __cdecl FUN_00479150(int param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if ((*param_2 == -0x68) || (*param_2 == -0x66)) {
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    iVar2 = 0;
    iVar4 = (int)*(short *)*puVar1;
    if (0 < iVar4) {
      piVar3 = (int *)((short *)*puVar1 + 0x1a);
      do {
        if (*(int *)(param_2 + 0x18) == *piVar3) break;
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 0x12;
      } while (iVar2 < iVar4);
    }
    if (iVar2 < iVar4) {
      puVar1[1] = puVar1[1] + 1;
      return 0;
    }
    puVar1[2] = puVar1[2] + 1;
  }
  return 0;
}


/* FUN_00484180 @ 00484180  kind=gamemisc  attributed-by=role:callback  size=224 */

uint __cdecl FUN_00484180(int *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_1[10] != 0) || (*(char *)((int)param_1 + 0x13) != '\0')) {
    return 0;
  }
  if (((char)param_1[5] != '\0') && ((param_2[6] & 4) != 0)) {
    return 0;
  }
  param_2[3] = 0;
  if (param_1[0x2e] == 0) {
    if (((param_2[6] & 4) != 0) || (*(char *)((int)param_1 + 0xf) == '\x03')) {
      uVar2 = FUN_004bd5d0((uint)param_1,1);
      if (uVar2 != 0) goto LAB_00484245;
    }
    if ((uint)param_1[6] < param_2[5]) {
      iVar1 = FUN_004bd250((int)param_2);
      if (iVar1 != 0) {
        uVar2 = FUN_004bd350((int)param_2);
        if (uVar2 != 0) goto LAB_00484245;
      }
    }
    uVar2 = FUN_00485750(param_1,(int)param_2);
  }
  else {
    iVar1 = FUN_004bd250((int)param_2);
    if (iVar1 != 0) {
      uVar2 = FUN_004bd350((int)param_2);
      if (uVar2 != 0) goto LAB_00484245;
    }
    uVar2 = FUN_00484410((int)param_1,param_2,0,0);
  }
  if (uVar2 == 0) {
    FUN_004a3950(param_2);
  }
LAB_00484245:
  if (((uVar2 & 0xff) == 0xd) || ((uVar2 & 0xff) == 10)) {
    param_1[10] = uVar2;
    *(undefined1 *)((int)param_1 + 0xf) = 6;
  }
  return uVar2;
}


/* FUN_00489430 @ 00489430  kind=gamemisc  attributed-by=role:callback  size=234 */

undefined4 __cdecl FUN_00489430(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  ushort uVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  byte bVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined8 local_54;
  undefined8 local_4c;
  ulonglong local_44;
  undefined8 local_3c;
  code *local_34;
  code *local_30;
  int *local_2c;
  int local_24;
  undefined4 *local_20;
  int local_1c;
  uint local_18;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((*(ushort *)((int)param_2 + 6) & 2) != 0) {
    return 1;
  }
  local_c = *(int *)(param_1 + 0x10);
  piVar2 = *(int **)(param_1 + 8);
  local_8 = *piVar2;
  if ((*(ushort *)((int)param_2 + 6) & 0x10) == 0) {
    FUN_004a99a0(piVar2,param_2,local_c);
    if (piVar2[0x11] == 0) {
      if (*(char *)(local_8 + 0x38) != '\0') {
        return 2;
      }
      return 1;
    }
  }
  else {
    local_20 = param_2;
    local_18 = (uint)(param_2[0xf] != 0);
    do {
      iVar8 = local_c;
      *(ushort *)((int)param_2 + 6) = *(ushort *)((int)param_2 + 6) | 2;
      local_4c = 0;
      local_44 = 0;
      local_3c = 0;
      local_54 = ZEXT48(piVar2);
      uVar4 = FUN_004a69e0((int *)&local_54,param_2[0x12]);
      if (CONCAT22(extraout_var,uVar4) != 0) {
        return 2;
      }
      uVar4 = FUN_004a69e0((int *)&local_54,param_2[0x13]);
      if (CONCAT22(extraout_var_00,uVar4) != 0) {
        return 2;
      }
      local_3c._0_5_ = CONCAT14(1,(undefined4)local_3c);
      local_54 = CONCAT44(param_2[10],(int)local_54);
      local_44 = CONCAT44(local_44._4_4_,iVar8);
      local_14 = (int *)*param_2;
      iVar8 = 0;
      bVar5 = 0;
      if (0 < *local_14) {
        iVar7 = 0;
        do {
          uVar4 = FUN_004a69e0((int *)&local_54,*(int *)(iVar7 + local_14[2]));
          if (CONCAT22(extraout_var_01,uVar4) != 0) {
            return 2;
          }
          iVar8 = iVar8 + 1;
          iVar7 = iVar7 + 0x14;
        } while (iVar8 < *local_14);
        bVar5 = local_3c._4_1_;
      }
      local_10 = 0;
      if (0 < *(short *)param_2[10]) {
        local_14 = (int *)0x0;
        do {
          piVar3 = local_14;
          iVar8 = param_2[10];
          if (*(int *)((int)local_14 + iVar8 + 0x1c) != 0) {
            local_1c = piVar2[0x81];
            iVar9 = 0;
            for (iVar7 = local_c; iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x10)) {
              iVar9 = iVar9 + *(int *)(iVar7 + 0x14);
            }
            iVar7 = *(int *)((int)local_14 + iVar8 + 0x10);
            if (iVar7 != 0) {
              piVar2[0x81] = iVar7;
            }
            local_34 = FUN_00488dd0;
            local_30 = FUN_00489430;
            local_24 = local_c;
            local_2c = piVar2;
            FUN_004bb100((int)&local_34,*(undefined4 **)((int)local_14 + iVar8 + 0x1c));
            piVar2[0x81] = local_1c;
            if (piVar2[0x11] != 0) {
              return 2;
            }
            iVar7 = local_c;
            if (*(char *)(local_8 + 0x38) != '\0') {
              return 2;
            }
            for (; iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x10)) {
              iVar9 = iVar9 - *(int *)(iVar7 + 0x14);
            }
            puVar1 = (uint *)((int)piVar3 + iVar8 + 0x2c);
            *puVar1 = *puVar1 ^ ((uint)(iVar9 != 0) * 2 ^ *(uint *)((int)piVar3 + iVar8 + 0x2c)) & 2
            ;
          }
          local_10 = local_10 + 1;
          local_14 = local_14 + 0x12;
        } while (local_10 < *(short *)param_2[10]);
        bVar5 = local_3c._4_1_;
      }
      piVar3 = (int *)param_2[0xc];
      if ((piVar3 == (int *)0x0) && ((bVar5 & 2) == 0)) {
        local_3c = CONCAT35(local_3c._5_3_,CONCAT14(bVar5,(undefined4)local_3c)) &
                   0xfffffffeffffffff;
      }
      else {
        *(ushort *)((int)param_2 + 6) = *(ushort *)((int)param_2 + 6) | 4;
      }
      if ((param_2[0xd] != 0) && (piVar3 == (int *)0x0)) {
        pcVar10 = "a GROUP BY clause is required before HAVING";
LAB_00489707:
        FUN_004962b0(piVar2,(byte *)pcVar10);
        return 2;
      }
      local_4c = CONCAT44(local_4c._4_4_,*param_2);
      uVar4 = FUN_004a69e0((int *)&local_54,param_2[0xb]);
      if (CONCAT22(extraout_var_02,uVar4) != 0) {
        return 2;
      }
      uVar4 = FUN_004a69e0((int *)&local_54,param_2[0xd]);
      if (CONCAT22(extraout_var_03,uVar4) != 0) {
        return 2;
      }
      local_3c = local_3c | 0x100000000;
      local_44 = local_44 & 0xffffffff00000000;
      if ((local_18 == 0) &&
         (iVar8 = FUN_004891f0((int *)&local_54,param_2,(int *)param_2[0xe],"ORDER"), iVar8 != 0)) {
        return 2;
      }
      iVar8 = local_8;
      if (*(char *)(local_8 + 0x38) != '\0') {
        return 2;
      }
      if (piVar3 != (int *)0x0) {
        iVar7 = FUN_004891f0((int *)&local_54,param_2,piVar3,"GROUP");
        if (iVar7 != 0) {
          return 2;
        }
        if (*(char *)(iVar8 + 0x38) != '\0') {
          return 2;
        }
        piVar6 = (int *)piVar3[2];
        iVar8 = 0;
        if (0 < *piVar3) {
          do {
            if ((*(byte *)(*piVar6 + 2) & 2) != 0) {
              pcVar10 = "aggregate functions are not allowed in the GROUP BY clause";
              goto LAB_00489707;
            }
            iVar8 = iVar8 + 1;
            piVar6 = piVar6 + 5;
          } while (iVar8 < *piVar3);
        }
      }
      param_2 = (undefined4 *)param_2[0xf];
    } while (param_2 != (undefined4 *)0x0);
    if ((local_18 == 0) || (iVar8 = FUN_00488b10(piVar2,local_20), iVar8 == 0)) {
      return 1;
    }
  }
  return 2;
}


/* FUN_0048a1c0 @ 0048a1c0  kind=gamemisc  attributed-by=role:callback  size=127 */

undefined4 __cdecl FUN_0048a1c0(int param_1,int param_2)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  if ((*(ushort *)(param_2 + 6) & 0x20) != 0) {
    return 0;
  }
  *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x20;
  piVar1 = *(int **)(param_1 + 8);
  psVar2 = *(short **)(param_2 + 0x28);
  iVar7 = 0;
  if (*psVar2 < 1) {
    return 0;
  }
  piVar6 = (int *)(psVar2 + 0xe);
  do {
    iVar3 = piVar6[-1];
    if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x2a) & 2) != 0)) {
      piVar4 = (int *)*piVar6;
      for (piVar5 = (int *)((int *)*piVar6)[0xf]; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[0xf])
      {
        piVar4 = piVar5;
      }
      FUN_0048a080(piVar1,(int)*(short *)(iVar3 + 0x26),*(int *)(iVar3 + 4),piVar4);
    }
    iVar7 = iVar7 + 1;
    piVar6 = piVar6 + 0x12;
  } while (iVar7 < *psVar2);
  return 0;
}


/* FUN_00491620 @ 00491620  kind=gamemisc  attributed-by=role:callback  size=140 */

uint __cdecl FUN_00491620(int *param_1,uint param_2,size_t param_3,void *param_4)

{
  uint uVar1;
  
  if (*(byte *)((int)param_1 + 0x5b) < 2) {
    uVar1 = 0;
  }
  else if (*(byte *)((int)param_1 + 0x5b) == 3) {
    uVar1 = param_1[0x15];
  }
  else {
    *(undefined1 *)((int)param_1 + 0x5b) = 0;
    uVar1 = FUN_004715a0(param_1,(byte *)param_1[0x14],param_1[0x12],param_1[0x13],0,
                         (uint *)(param_1 + 0x15));
    if (uVar1 != 0) {
      return uVar1;
    }
    FUN_00466dd0(param_1[0x14]);
    param_1[0x14] = 0;
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    return uVar1;
  }
  if (*(char *)((int)param_1 + 0x5b) != '\x01') {
    return 4;
  }
  if ((char)param_1[0x16] != '\0') {
    uVar1 = FUN_0046b2f0((int)param_1,param_2,param_3,param_4,1);
    return uVar1;
  }
  return 8;
}


/* FUN_0049f6a0 @ 0049f6a0  kind=gamemisc  attributed-by=role:callback  size=220 */

void __cdecl FUN_0049f6a0(int param_1)

{
  int *piVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  
  _Src = (void *)FUN_004666d0((byte *)"unable to use function %s in the requested context");
  *(undefined4 *)(param_1 + 0x38) = 1;
  if (_Src == (void *)0x0) {
    if ((*(byte *)(param_1 + 0x24) & 0x40) != 0) {
      piVar1 = *(int **)(param_1 + 0x18);
      piVar1[1] = *(int *)(*piVar1 + 0xa4);
      *(int **)(*piVar1 + 0xa4) = piVar1;
    }
    if ((*(byte *)(param_1 + 0x24) & 0x20) != 0) {
      FUN_004a6e20(*(undefined4 **)(param_1 + 0x18));
    }
    *(ushort *)(param_1 + 0x24) = *(ushort *)(param_1 + 0x24) & 0xbe01 | 1;
    *(undefined1 *)(param_1 + 0x26) = 5;
    FUN_00466dd0(0);
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    iVar2 = 1000000000;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x50);
  }
  iVar3 = 0;
  if (-1 < iVar2) {
    do {
      if (*(char *)(iVar3 + (int)_Src) == '\0') break;
      iVar3 = iVar3 + 1;
    } while (iVar3 <= iVar2);
  }
  if (iVar3 <= iVar2) {
    iVar2 = FUN_004b7260((int *)(param_1 + 8),iVar3 + 1,0);
    if (iVar2 == 0) {
      memcpy(*(void **)(param_1 + 0xc),_Src,iVar3 + 1);
      *(int *)(param_1 + 0x20) = iVar3;
      *(undefined4 *)(param_1 + 0x24) = 0x1030202;
    }
  }
  FUN_00466dd0((int)_Src);
  return;
}


/* FUN_004ba730 @ 004ba730  kind=gamemisc  attributed-by=role:callback  size=51 */

undefined4 __cdecl FUN_004ba730(int param_1,int param_2,byte *param_3,int param_4)

{
  if (param_1 <= param_4) {
    if (DAT_00583e74 != (code *)0x0) {
      (*DAT_00583e74)();
    }
    FUN_00468750(param_2,param_3);
    if (DAT_00583e78 != (code *)0x0) {
      (*DAT_00583e78)();
    }
  }
  return 0;
}


/* FUN_004bcdb0 @ 004bcdb0  kind=gamemisc  attributed-by=role:callback  size=99 */

undefined4 __cdecl FUN_004bcdb0(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0xc) {
    uVar2 = (uint)(byte)(&DAT_005699f8)[param_2];
    uVar1 = (uint)(byte)(&DAT_00569a04)[param_2];
  }
  else {
    uVar2 = 100;
    uVar1 = param_2 * 100 - 0x368;
  }
  if ((param_1[0x77] < (int)(uVar1 + uVar2)) && (uVar2 = param_1[0x77] - uVar1, (int)uVar2 < 1)) {
    return 0;
  }
  (**(code **)(*param_1 + 0x3c))(*param_1,uVar2 * 1000);
  return 1;
}


