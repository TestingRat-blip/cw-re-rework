// Unsorted_002 (game_misc) -- cube. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_002.h"

/* FUN_0053b1b0 @ 0053b1b0  kind=gamemisc  attributed-by=none  size=754 */

void FUN_0053b1b0(int param_1,char *param_2)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  int local_31c;
  undefined1 local_318 [260];
  undefined1 local_214 [112];
  undefined4 local_1a4 [4];
  int local_194;
  char acStack_111 [265];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  memset(acStack_111 + 1,0,0x106);
  if (DAT_0076b358 == 0) {
    if (DAT_0076b480 == 0) {
      local_1a4[0] = 0x94;
      (*(code *)PTR_GetVersionExA_0076721c)(local_1a4);
      DAT_0076b480 = (local_194 == 2) + 1;
    }
    if (DAT_0076b480 == 2) {
      (*(code *)PTR_GetTempPathW_00767204)(0xe6,local_318);
      iVar4 = FUN_0057b270(local_318);
    }
    else {
      (*(code *)PTR_GetTempPathA_007671f8)(0xe6,local_214);
      iVar8 = FUN_0053dde0(local_214);
      if (iVar8 == 0) goto LAB_0053b26b;
      iVar4 = FUN_0057b270(iVar8);
      FUN_00524410(iVar8);
    }
    if (iVar4 == 0) {
LAB_0053b26b:
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_005240c0(0xe6,acStack_111 + 1,&DAT_00716900,iVar4);
    FUN_00524410(iVar4);
  }
  else {
    FUN_005240c0(0xe6,acStack_111 + 1,&DAT_00716900,DAT_0076b358);
  }
  pcVar6 = acStack_111 + 1;
  while (acStack_111[1] != '\0') {
    pcVar6 = pcVar6 + 1;
    acStack_111[1] = *pcVar6;
  }
  uVar7 = (int)pcVar6 - (int)(acStack_111 + 1) & 0x3fffffff;
  pcVar6 = "etilqs_";
  do {
    pcVar5 = pcVar6;
    pcVar6 = pcVar5 + 1;
  } while (*pcVar6 != '\0');
  uVar1 = uVar7;
  if (param_1 <= (int)(((uint)(pcVar5 + -0x7169ff) & 0x3fffffff) + 0x12 + uVar7)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  for (; (uVar1 != 0 && (acStack_111[uVar1] == '\\')); uVar1 = uVar1 - 1) {
  }
  if (uVar1 < 0x106) {
    acStack_111[uVar1 + 1] = '\0';
    pcVar6 = "%s\\etilqs_";
    if (uVar7 == 0) {
      pcVar6 = "etilqs_";
    }
    FUN_005240c0(param_1 + -0x12,param_2,pcVar6,acStack_111 + 1);
    uVar7 = 0;
    if (param_2 != (char *)0x0) {
      cVar3 = *param_2;
      pcVar6 = param_2;
      while (cVar3 != '\0') {
        pcVar6 = pcVar6 + 1;
        cVar3 = *pcVar6;
      }
      uVar7 = (int)pcVar6 - (int)param_2 & 0x3fffffff;
    }
    pcVar6 = param_2 + uVar7;
    iVar8 = 0xf;
    if (DAT_007665e4 == 0) {
      local_31c = 0;
    }
    else {
      local_31c = (*DAT_00766628)(5);
      if (local_31c != 0) {
        (*DAT_00766630)(local_31c);
      }
    }
    do {
      cVar3 = FUN_00544c20();
      *pcVar6 = cVar3;
      pcVar6 = pcVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    if (local_31c != 0) {
      (*DAT_00766638)(local_31c);
    }
    iVar8 = 3;
    do {
      uVar1 = uVar7 + 5;
      param_2[uVar7] =
           s_abcdefghijklmnopqrstuvwxyzABCDEF_007665a0[(uint)(byte)param_2[uVar7] % 0x3e];
      param_2[uVar7 + 1] =
           s_abcdefghijklmnopqrstuvwxyzABCDEF_007665a0[(uint)(byte)param_2[uVar7 + 1] % 0x3e];
      param_2[uVar7 + 2] =
           s_abcdefghijklmnopqrstuvwxyzABCDEF_007665a0[(uint)(byte)param_2[uVar7 + 2] % 0x3e];
      param_2[uVar7 + 3] =
           s_abcdefghijklmnopqrstuvwxyzABCDEF_007665a0[(uint)(byte)param_2[uVar7 + 3] % 0x3e];
      param_2[uVar7 + 4] =
           s_abcdefghijklmnopqrstuvwxyzABCDEF_007665a0[(uint)(byte)param_2[uVar7 + 4] % 0x3e];
      iVar8 = iVar8 + -1;
      uVar7 = uVar1;
    } while (iVar8 != 0);
    (param_2 + uVar1)[0] = '\0';
    (param_2 + uVar1)[1] = '\0';
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  ___report_rangecheckfailure();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* FUN_0053c010 @ 0053c010  kind=gamemisc  attributed-by=none  size=129 */

undefined4 FUN_0053c010(char *param_1)

{
  char cVar1;
  code *local_18;
  code *local_14;
  int local_8;
  
  local_8 = 3;
  local_18 = FUN_00536500;
  local_14 = FUN_00548960;
  FUN_00578680(&local_18,param_1);
  if (local_8 == 0) {
    return 0;
  }
  if ((*(ushort *)(param_1 + 2) & 0x200) != 0) {
    cVar1 = *param_1;
    while (cVar1 == -99) {
      param_1 = *(char **)(param_1 + 8);
      cVar1 = *param_1;
    }
    switch(*param_1) {
    case '^':
    case 'b':
    case -0x7f:
    case -0x7e:
    case -0x7d:
    case -0x7b:
      return 0;
    case -100:
      if (**(char **)(param_1 + 8) == -0x7e) {
        return 0;
      }
      if (**(char **)(param_1 + 8) == -0x7f) {
        return 0;
      }
    }
  }
  return 1;
}


/* FUN_0053c140 @ 0053c140  kind=gamemisc  attributed-by=none  size=289 */

undefined4 FUN_0053c140(undefined4 param_1,int param_2,int *param_3,undefined8 *param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  double local_c;
  
  memset(param_4,0,0x30);
  if (param_2 == 0) {
    uVar2 = FUN_00548b20(param_1,param_4);
    return uVar2;
  }
  iVar3 = *param_3;
  if ((*(char *)(iVar3 + 0x1e) == '\x02') || (*(char *)(iVar3 + 0x1e) == '\x01')) {
    uVar1 = *(ushort *)(iVar3 + 0x1c);
    if ((uVar1 & 8) == 0) {
      if ((uVar1 & 4) == 0) {
        local_c = 0.0;
        if ((uVar1 & 0x12) != 0) {
          local_c = 0.0;
          FUN_0054a330(*(undefined4 *)(iVar3 + 4),&local_c,*(undefined4 *)(iVar3 + 0x18),
                       *(undefined1 *)(iVar3 + 0x1f));
        }
      }
      else {
        local_c = (double)*(longlong *)(iVar3 + 0x10);
      }
    }
    else {
      local_c = *(double *)(iVar3 + 8);
    }
    local_c = local_c * 86400000.0 + 0.5;
    uVar5 = FUN_0068d946();
    *param_4 = uVar5;
    *(undefined1 *)((int)param_4 + 0x2a) = 1;
  }
  else {
    iVar3 = FUN_0056bce0(iVar3,1);
    if ((iVar3 == 0) || (iVar3 = FUN_00542f30(param_1,iVar3,param_4), iVar3 != 0)) {
      return 1;
    }
  }
  iVar3 = 1;
  if (1 < param_2) {
    do {
      iVar4 = FUN_0056bce0(param_3[iVar3],1);
      if ((iVar4 == 0) || (iVar4 = FUN_00543120(param_1,iVar4,param_4), iVar4 != 0)) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_2);
  }
  return 0;
}


/* FUN_0053ce20 @ 0053ce20  kind=gamemisc  attributed-by=none  size=543 */

void FUN_0053ce20(undefined8 *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  errno_t eVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  double local_40;
  undefined8 local_38;
  undefined4 *local_30;
  tm local_2c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_2c.tm_sec = 0;
  local_2c.tm_min = 0;
  local_2c.tm_hour = 0;
  local_2c.tm_mday = 0;
  local_2c.tm_mon = 0;
  local_2c.tm_year = 0;
  local_2c.tm_wday = 0;
  local_2c.tm_yday = 0;
  local_60 = *param_1;
  local_58 = param_1[1];
  local_50 = param_1[2];
  local_48 = param_1[3];
  local_40 = (double)param_1[4];
  local_38 = param_1[5];
  local_30 = param_3;
  local_2c.tm_isdst = 0;
  FUN_00532d10(&local_60);
  FUN_00532980(&local_60);
  if ((int)local_58 - 0x7b3U < 0x43) {
    local_40 = (double)(int)(local_40 + 0.5);
  }
  else {
    local_58 = 0x1000007d0;
    local_50 = 1;
    local_48 = 0;
    local_40 = 0.0;
  }
  local_48 = local_48 & 0xffffffff;
  local_38._0_3_ = (uint3)(ushort)local_38;
  FUN_00532a40(&local_60);
  iVar3 = local_60._4_4_;
  uVar1 = (uint)local_60;
  uVar5 = __alldiv((uint)local_60,local_60._4_4_,1000,0);
  local_68 = (uint)uVar5 + 0xe75c96c0;
  local_64 = ((int)((ulonglong)uVar5 >> 0x20) + -0x31) - (uint)((uint)uVar5 < 0x18a36940);
  if (DAT_007666cc == 0) {
    eVar2 = _localtime64_s(&local_2c,(__time64_t *)&local_68);
    if (eVar2 == 0) {
      local_58 = CONCAT44(local_2c.tm_mon + 1,local_2c.tm_year + 0x76c);
      local_50 = CONCAT44(local_2c.tm_hour,local_2c.tm_mday);
      local_40 = (double)local_2c.tm_sec;
      local_48 = CONCAT44(local_48._4_4_,local_2c.tm_min);
      local_38 = CONCAT44(local_38._4_4_,0x101);
      FUN_00532a40(&local_60);
      *local_30 = 0;
      __security_check_cookie
                (local_8 ^ (uint)&stack0xfffffffc,
                 (local_60._4_4_ - iVar3) - (uint)((uint)local_60 < uVar1));
      return;
    }
  }
  *(undefined4 *)(param_2 + 0x38) = 1;
  if (*(int *)(param_2 + 8) == 0) {
    iVar3 = 1000000000;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_2 + 8) + 0x50);
  }
  iVar4 = 0;
  if (-1 < iVar3) {
    do {
      if ("local time unavailable"[iVar4] == '\0') break;
      iVar4 = iVar4 + 1;
    } while (iVar4 <= iVar3);
  }
  if (iVar4 <= iVar3) {
    iVar3 = FUN_005748c0(param_2 + 8,iVar4 + 1U,0);
    if (iVar3 == 0) {
      memcpy(*(void **)(param_2 + 0xc),"local time unavailable",iVar4 + 1U);
      *(int *)(param_2 + 0x20) = iVar4;
      *(undefined4 *)(param_2 + 0x24) = 0x1030202;
    }
  }
  *local_30 = 1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,0);
  return;
}


/* FUN_0053dde0 @ 0053dde0  kind=gamemisc  attributed-by=none  size=129 */

void * FUN_0053dde0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  iVar1 = (*(code *)PTR_AreFileApisANSI_00767084)();
  iVar2 = (*(code *)PTR_MultiByteToWideChar_007672c4)(iVar1 == 0,0,param_1,0xffffffff,0,0);
  if (iVar2 * 2 == 0) {
    return (void *)0x0;
  }
  _Dst = (void *)FUN_0055da00(iVar2 << 2);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,iVar2 << 2);
    if (_Dst != (void *)0x0) {
      iVar1 = (*(code *)PTR_MultiByteToWideChar_007672c4)
                        (iVar1 == 0,0,param_1,0xffffffff,_Dst,iVar2 * 2);
      if (iVar1 == 0) {
        FUN_00524410(_Dst);
        _Dst = (void *)0x0;
      }
      return _Dst;
    }
  }
  return (void *)0x0;
}


/* FUN_00540b70 @ 00540b70  kind=gamemisc  attributed-by=none  size=1140 */

uint FUN_00540b70(undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *_Dst;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_c = 0;
  *param_2 = 0;
  uVar1 = FUN_00579f80();
  if (uVar1 != 0) {
    return uVar1;
  }
  if ((1 << ((byte)param_3 & 7) & 0x46U) == 0) {
    FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0x1c0c4,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    return 0x15;
  }
  if (DAT_007665e4 == 0) {
    iVar2 = 0;
  }
  else if ((param_3 & 0x8000) == 0) {
    iVar2 = DAT_007665e8;
    if ((param_3 & 0x10000) != 0) {
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 0;
  }
  if ((param_3 & 0x40000) == 0) {
    if (DAT_007666a4 != 0) {
      param_3 = param_3 | 0x20000;
    }
  }
  else {
    param_3 = param_3 & 0xfffdffff;
  }
  uVar1 = param_3 & 0xfff600e7;
  param_3 = uVar1;
  _Dst = (undefined4 *)FUN_0055da00(0x1f8);
  uVar3 = local_8;
  if ((_Dst != (undefined4 *)0x0) &&
     (memset(_Dst,0,0x1f8), uVar3 = local_8, _Dst != (undefined4 *)0x0)) {
    if (iVar2 != 0) {
      if (DAT_007665e4 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*DAT_00766628)(1);
      }
      _Dst[3] = iVar2;
      if (iVar2 == 0) {
        FUN_00524410(_Dst);
        _Dst = (undefined4 *)0x0;
        uVar3 = local_8;
        goto LAB_00540c7d;
      }
    }
    if (_Dst[3] != 0) {
      (*DAT_00766630)(_Dst[3]);
    }
    _Dst[0xc] = 0xff;
    _Dst[5] = 2;
    _Dst[0x11] = 0xf03b7906;
    _Dst[4] = _Dst + 0x6e;
    *(undefined8 *)(_Dst + 0x14) = 0x3b9aca003b9aca00;
    *(undefined8 *)(_Dst + 0x16) = 0x3e8000007d0;
    *(undefined8 *)(_Dst + 0x18) = 0x61a8000001f4;
    *(undefined8 *)(_Dst + 0x1a) = 0xa0000007f;
    *(undefined8 *)(_Dst + 0x1c) = 0x3e70000c350;
    _Dst[6] = _Dst[6] | 0x480008;
    _Dst[0x1e] = 1000;
    *(undefined1 *)((int)_Dst + 0x36) = 1;
    *(undefined1 *)((int)_Dst + 0x3a) = 0xff;
    _Dst[0x10] = 0;
    _Dst[0x69] = 0;
    _Dst[0x68] = 0;
    _Dst[0x67] = 0;
    _Dst[0x6a] = 0;
    _Dst[0x4b] = 0;
    _Dst[0x4a] = 0;
    _Dst[0x49] = 0;
    _Dst[0x4c] = 0;
    FUN_00533960(_Dst,"BINARY",1,0,FUN_0052df70,0);
    FUN_00533960(_Dst,"BINARY",3,0,FUN_0052df70,0);
    FUN_00533960(_Dst,"BINARY",2,0,FUN_0052df70,0);
    FUN_00533960(_Dst,"RTRIM",1,1,FUN_0052df70,0);
    uVar3 = local_8;
    if (*(char *)(_Dst + 0xe) == '\0') {
      uVar3 = FUN_00556ba0(_Dst,1,"BINARY",0);
      _Dst[2] = uVar3;
      FUN_00533960(_Dst,"NOCASE",1,0,FUN_00540b00,0);
      _Dst[10] = uVar1;
      iVar4 = FUN_00560540(param_4,param_1,&param_3,_Dst,&local_8,&local_c);
      uVar3 = local_8;
      iVar2 = local_c;
      if (iVar4 == 0) {
        iVar2 = FUN_0054e4a0(*_Dst,local_8,_Dst,_Dst[4] + 4,0,param_3 | 0x100);
        if (iVar2 == 0) {
          uVar6 = FUN_00565140(_Dst,*(undefined4 *)(_Dst[4] + 4));
          *(undefined4 *)(_Dst[4] + 0xc) = uVar6;
          uVar6 = FUN_00565140(_Dst,0);
          *(undefined4 *)(_Dst[4] + 0x1c) = uVar6;
          *(undefined **)_Dst[4] = &DAT_00719fc4;
          *(undefined1 *)(_Dst[4] + 9) = 3;
          *(undefined1 **)(_Dst[4] + 0x10) = &DAT_00719df8;
          *(undefined1 *)(_Dst[4] + 0x19) = 1;
          _Dst[0x11] = 0xa029a697;
          if (*(char *)(_Dst + 0xe) == '\0') {
            FUN_00553890(_Dst,0,0);
            iVar2 = FUN_00521770(_Dst,"MATCH",2);
            if (iVar2 == 7) {
              *(undefined1 *)(_Dst + 0xe) = 1;
            }
            iVar2 = FUN_00525cb0(_Dst);
            if (iVar2 == 0) {
              FUN_0054ad90(_Dst);
              iVar4 = FUN_00525cb0(_Dst);
              iVar2 = 0;
              if (iVar4 != 0) goto LAB_00540c7d;
            }
            FUN_00553890(_Dst,iVar2,0);
            FUN_00548d00(_Dst,0,DAT_007665f8,DAT_007665fc);
            if (_Dst[3] != 0) {
              (*DAT_00766630)(_Dst[3]);
            }
            _Dst[0x30] = FUN_00577d90;
            _Dst[0x31] = 1000;
            if (_Dst[3] != 0) {
              (*DAT_00766638)(_Dst[3]);
            }
          }
        }
        else {
          if (iVar2 == 0xc0a) {
            iVar2 = 7;
          }
          FUN_00553890(_Dst,iVar2,0);
        }
      }
      else {
        if (iVar4 == 7) {
          *(undefined1 *)(_Dst + 0xe) = 1;
        }
        puVar5 = &DAT_00716900;
        if (local_c == 0) {
          puVar5 = (undefined *)0x0;
        }
        FUN_00553890(_Dst,iVar4,puVar5,local_c);
        FUN_00524410(iVar2);
        uVar3 = local_8;
      }
    }
  }
LAB_00540c7d:
  FUN_00524410(uVar3);
  if ((_Dst != (undefined4 *)0x0) && (_Dst[3] != 0)) {
    (*DAT_00766638)(_Dst[3]);
  }
  uVar1 = FUN_00525cb0(_Dst);
  if (uVar1 != 7) {
    if (uVar1 != 0) {
      _Dst[0x11] = 0x4b771290;
    }
    *param_2 = _Dst;
    return uVar1 & 0xff;
  }
  FUN_0054fc20(_Dst,0);
  *param_2 = 0;
  return 7;
}


/* FUN_00542f30 @ 00542f30  kind=gamemisc  attributed-by=none  size=192 */

undefined4 FUN_00542f30(undefined4 param_1,char *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  undefined8 uVar6;
  double local_c;
  
  iVar2 = FUN_00543b00(param_2,param_3);
  if ((iVar2 != 0) && (iVar2 = FUN_00542ff0(param_2,param_3), iVar2 != 0)) {
    iVar2 = FUN_0057a2c0(param_2,&DAT_00716730);
    if (iVar2 == 0) {
      uVar3 = FUN_00548b20(param_1,param_3);
      return uVar3;
    }
    uVar5 = 0;
    if (param_2 != (char *)0x0) {
      cVar1 = *param_2;
      pcVar4 = param_2;
      while (cVar1 != '\0') {
        pcVar4 = pcVar4 + 1;
        cVar1 = *pcVar4;
      }
      uVar5 = (int)pcVar4 - (int)param_2 & 0x3fffffff;
    }
    iVar2 = FUN_0054a330(param_2,&local_c,uVar5,1);
    if (iVar2 == 0) {
      return 1;
    }
    local_c = local_c * 86400000.0 + 0.5;
    uVar6 = FUN_0068d946();
    *param_3 = uVar6;
    *(undefined1 *)((int)param_3 + 0x2a) = 1;
  }
  return 0;
}


/* FUN_00542ff0 @ 00542ff0  kind=gamemisc  attributed-by=none  size=303 */

undefined4 FUN_00542ff0(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  double dVar5;
  double dVar6;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  dVar5 = 0.0;
  iVar3 = FUN_0053a850(param_1,2,0,0x18,0x3a,&local_c,2,0,0x3b,0,&local_10);
  if (iVar3 != 2) {
    return 1;
  }
  pbVar4 = (byte *)(param_1 + 5);
  if (*pbVar4 == 0x3a) {
    iVar3 = FUN_0053a850(param_1 + 6,2,0,0x3b,0,&local_8);
    if (iVar3 != 1) {
      return 1;
    }
    pbVar4 = (byte *)(param_1 + 8);
    if ((*pbVar4 == 0x2e) && (((&DAT_007121d8)[*(byte *)(param_1 + 9)] & 4) != 0)) {
      dVar6 = 1.0;
      bVar1 = *(byte *)(param_1 + 9);
      bVar2 = (&DAT_007121d8)[bVar1];
      pbVar4 = (byte *)(param_1 + 9);
      while ((bVar2 & 4) != 0) {
        iVar3 = (int)(char)bVar1;
        bVar1 = pbVar4[1];
        pbVar4 = pbVar4 + 1;
        dVar6 = dVar6 * 10.0;
        dVar5 = (dVar5 * 10.0 + (double)iVar3) - 48.0;
        bVar2 = (&DAT_007121d8)[bVar1];
      }
      dVar5 = dVar5 / dVar6;
    }
  }
  else {
    local_8 = 0;
  }
  *(undefined4 *)(param_2 + 0x14) = local_c;
  *(undefined2 *)(param_2 + 0x29) = 1;
  *(undefined4 *)(param_2 + 0x18) = local_10;
  *(double *)(param_2 + 0x20) = (double)local_8 + dVar5;
  iVar3 = FUN_00543a20(pbVar4,param_2);
  if (iVar3 == 0) {
    *(bool *)(param_2 + 0x2b) = *(int *)(param_2 + 0x1c) != 0;
    return 0;
  }
  return 1;
}


/* FUN_00543120 @ 00543120  kind=gamemisc  attributed-by=none  size=2184 */

/* WARNING: Removing unreachable block (ram,0x005433e2) */

void FUN_00543120(undefined4 param_1,byte *param_2,uint *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  char *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  double dVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint local_6c;
  int local_68;
  undefined4 local_3c;
  undefined4 uStack_38;
  double local_34;
  int local_2c;
  byte local_28 [32];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar7 = 0;
  uStack_38 = param_1;
  local_2c = 1;
  iVar2 = -(int)param_2;
  do {
    if (*param_2 == 0) break;
    iVar7 = iVar7 + 1;
    param_2[(int)(local_28 + iVar2)] = (&DAT_007120d8)[*param_2];
    param_2 = param_2 + 1;
  } while (iVar7 < 0x1d);
  local_28[iVar7] = 0;
  switch(local_28[0]) {
  case 0x2b:
  case 0x2d:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    iVar2 = 1;
    while (((local_28[1] != 0 && (local_28[1] != 0x3a)) && (((&DAT_007121d8)[local_28[1]] & 1) == 0)
           )) {
      local_28[1] = local_28[iVar2 + 1];
      iVar2 = iVar2 + 1;
    }
    iVar7 = FUN_0054a330(local_28,&local_3c,iVar2,1);
    if (iVar7 != 0) {
      pbVar3 = local_28 + iVar2;
      if (local_28[iVar2] == 0x3a) {
        pbVar3 = local_28 + 1;
        if (((&DAT_007121d8)[local_28[0]] & 4) != 0) {
          pbVar3 = local_28;
        }
        memset(&local_6c,0,0x30);
        iVar2 = FUN_00542ff0(pbVar3,&local_6c);
        if (iVar2 == 0) {
          FUN_00532a40(&local_6c);
          iVar2 = local_68 + -1 + (uint)(43199999 < local_6c);
          uVar13 = __alldiv(local_6c + 0xfd6cd200,iVar2,0xfad9a400,0xffffffff);
          lVar14 = __allmul(uVar13,86400000,0);
          lVar14 = lVar14 + CONCAT44(iVar2,local_6c + 0xfd6cd200);
          if (local_28[0] == 0x2d) {
            lVar14 = CONCAT44(-((int)((ulonglong)lVar14 >> 0x20) + (uint)((int)lVar14 != 0)),
                              -(int)lVar14);
          }
          FUN_00532a40(param_3);
          uVar9 = *param_3;
          *param_3 = *param_3 + (uint)lVar14;
          *(undefined2 *)(param_3 + 10) = 0;
          *(undefined1 *)((int)param_3 + 0x2b) = 0;
          param_3[1] = param_3[1] + (int)((ulonglong)lVar14 >> 0x20) +
                       (uint)CARRY4(uVar9,(uint)lVar14);
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
      else {
        bVar1 = (&DAT_007121d8)[*pbVar3];
        while ((bVar1 & 1) != 0) {
          pbVar5 = pbVar3 + 1;
          pbVar3 = pbVar3 + 1;
          bVar1 = (&DAT_007121d8)[*pbVar5];
        }
        bVar1 = *pbVar3;
        pbVar5 = pbVar3;
        while (bVar1 != 0) {
          pbVar5 = pbVar5 + 1;
          bVar1 = *pbVar5;
        }
        uVar9 = (int)pbVar5 - (int)pbVar3 & 0x3fffffff;
        if (uVar9 - 3 < 8) {
          if (pbVar3[uVar9 - 1] == 0x73) {
            pbVar3[uVar9 - 1] = 0;
            uVar9 = uVar9 - 1;
          }
          FUN_00532a40(param_3);
          dVar11 = (double)CONCAT44(uStack_38,local_3c);
          local_2c = 0;
          if (0.0 <= dVar11) {
            local_34 = 0.5;
          }
          else {
            local_34 = -0.5;
          }
          if (uVar9 == 3) {
            pbVar5 = &DAT_00716790;
            do {
              bVar1 = *pbVar3;
              bVar10 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_005436f0:
                uVar9 = -(uint)bVar10 | 1;
                goto LAB_005436f5;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar3[1];
              bVar10 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_005436f0;
              pbVar3 = pbVar3 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            uVar9 = 0;
LAB_005436f5:
            if (uVar9 != 0) goto LAB_0054371e;
            local_34 = dVar11 * 86400000.0 + local_34;
          }
          else if (uVar9 == 4) {
            pbVar6 = &DAT_00716794;
            pbVar5 = pbVar3;
            do {
              bVar1 = *pbVar5;
              bVar10 = bVar1 < *pbVar6;
              if (bVar1 != *pbVar6) {
LAB_00543770:
                uVar9 = -(uint)bVar10 | 1;
                goto LAB_00543775;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar5[1];
              bVar10 = bVar1 < pbVar6[1];
              if (bVar1 != pbVar6[1]) goto LAB_00543770;
              pbVar5 = pbVar5 + 2;
              pbVar6 = pbVar6 + 2;
            } while (bVar1 != 0);
            uVar9 = 0;
LAB_00543775:
            if (uVar9 == 0) {
              local_34 = dVar11 * 3600000.0 + local_34;
            }
            else {
              pbVar5 = &DAT_00716788;
              do {
                bVar1 = *pbVar3;
                bVar10 = bVar1 < *pbVar5;
                if (bVar1 != *pbVar5) {
LAB_005437b4:
                  uVar9 = -(uint)bVar10 | 1;
                  goto LAB_005437b9;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar3[1];
                bVar10 = bVar1 < pbVar5[1];
                if (bVar1 != pbVar5[1]) goto LAB_005437b4;
                pbVar3 = pbVar3 + 2;
                pbVar5 = pbVar5 + 2;
              } while (bVar1 != 0);
              uVar9 = 0;
LAB_005437b9:
              if (uVar9 != 0) goto LAB_0054371e;
              FUN_00532d10(param_3);
              FUN_00532980(param_3);
              param_3[2] = param_3[2] + (int)dVar11;
              *(undefined1 *)((int)param_3 + 0x2a) = 0;
              FUN_00532a40(param_3);
              dVar11 = (double)(int)dVar11;
              if (dVar11 == (double)CONCAT44(uStack_38,local_3c)) goto LAB_0054371e;
              local_34 = ((double)CONCAT44(uStack_38,local_3c) - dVar11) * 365.0 * 86400000.0 +
                         local_34;
            }
          }
          else if (uVar9 == 6) {
            pcVar4 = "minute";
            pbVar5 = pbVar3;
            do {
              bVar1 = *pbVar5;
              bVar10 = bVar1 < (byte)*pcVar4;
              if (bVar1 != *pcVar4) {
LAB_00543852:
                uVar9 = -(uint)bVar10 | 1;
                goto LAB_00543857;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar5[1];
              bVar10 = bVar1 < (byte)pcVar4[1];
              if (bVar1 != pcVar4[1]) goto LAB_00543852;
              pbVar5 = pbVar5 + 2;
              pcVar4 = pcVar4 + 2;
            } while (bVar1 != 0);
            uVar9 = 0;
LAB_00543857:
            if (uVar9 == 0) {
              local_34 = dVar11 * 60000.0 + local_34;
            }
            else {
              pcVar4 = "second";
              do {
                bVar1 = *pbVar3;
                bVar10 = bVar1 < (byte)*pcVar4;
                if (bVar1 != *pcVar4) {
LAB_005438a0:
                  uVar9 = -(uint)bVar10 | 1;
                  goto LAB_005438a5;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar3[1];
                bVar10 = bVar1 < (byte)pcVar4[1];
                if (bVar1 != pcVar4[1]) goto LAB_005438a0;
                pbVar3 = pbVar3 + 2;
                pcVar4 = pcVar4 + 2;
              } while (bVar1 != 0);
              uVar9 = 0;
LAB_005438a5:
              if (uVar9 != 0) goto LAB_0054371e;
              local_34 = dVar11 * 1000.0 + local_34;
            }
          }
          else {
            if (uVar9 != 5) goto LAB_0054371e;
            pcVar4 = "month";
            do {
              bVar1 = *pbVar3;
              bVar10 = bVar1 < (byte)*pcVar4;
              if (bVar1 != *pcVar4) {
LAB_005438f4:
                uVar9 = -(uint)bVar10 | 1;
                goto LAB_005438f9;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar3[1];
              bVar10 = bVar1 < (byte)pcVar4[1];
              if (bVar1 != pcVar4[1]) goto LAB_005438f4;
              pbVar3 = pbVar3 + 2;
              pcVar4 = pcVar4 + 2;
            } while (bVar1 != 0);
            uVar9 = 0;
LAB_005438f9:
            if (uVar9 != 0) goto LAB_0054371e;
            FUN_00532d10(param_3);
            FUN_00532980(param_3);
            dVar11 = (double)CONCAT44(uStack_38,local_3c);
            param_3[3] = param_3[3] + (int)dVar11;
            uVar9 = param_3[3];
            iVar2 = uVar9 - 1;
            if ((int)uVar9 < 1) {
              iVar2 = uVar9 - 0xc;
            }
            param_3[2] = param_3[2] + iVar2 / 0xc;
            param_3[3] = uVar9 + (iVar2 / 0xc) * -0xc;
            *(undefined1 *)((int)param_3 + 0x2a) = 0;
            FUN_00532a40(param_3);
            dVar11 = (double)(int)dVar11;
            if (dVar11 == (double)CONCAT44(uStack_38,local_3c)) goto LAB_0054371e;
            local_34 = ((double)CONCAT44(uStack_38,local_3c) - dVar11) * 30.0 * 86400000.0 +
                       local_34;
          }
          uVar13 = FUN_0068d946();
          uVar9 = *param_3;
          *param_3 = *param_3 + (uint)uVar13;
          param_3[1] = param_3[1] + (int)((ulonglong)uVar13 >> 0x20) +
                       (uint)CARRY4(uVar9,(uint)uVar13);
LAB_0054371e:
          *(undefined2 *)(param_3 + 10) = 0;
          *(undefined1 *)((int)param_3 + 0x2b) = 0;
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
    }
    break;
  case 0x6c:
    pcVar4 = "localtime";
    pbVar3 = local_28;
    do {
      bVar1 = *pbVar3;
      bVar10 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_005431b4:
        uVar9 = -(uint)bVar10 | 1;
        goto LAB_005431b9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar10 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_005431b4;
      pbVar3 = pbVar3 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    uVar9 = 0;
LAB_005431b9:
    if (uVar9 == 0) {
      FUN_00532a40(param_3);
      uVar13 = FUN_0053ce20(param_3,param_1,&local_2c);
      uVar9 = *param_3;
      *param_3 = *param_3 + (uint)uVar13;
      *(undefined2 *)(param_3 + 10) = 0;
      param_3[1] = param_3[1] + (int)((ulonglong)uVar13 >> 0x20) + (uint)CARRY4(uVar9,(uint)uVar13);
      *(undefined1 *)((int)param_3 + 0x2b) = 0;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    break;
  case 0x73:
    iVar2 = strncmp((char *)local_28,"start of ",9);
    if (iVar2 == 0) {
      FUN_00532d10(param_3);
      *(undefined2 *)((int)param_3 + 0x29) = 1;
      param_3[6] = 0;
      param_3[5] = 0;
      param_3[8] = 0;
      param_3[9] = 0;
      *(undefined1 *)((int)param_3 + 0x2b) = 0;
      pcVar4 = "month";
      pbVar3 = local_28 + 9;
      do {
        bVar1 = *pbVar3;
        bVar10 = bVar1 < (byte)*pcVar4;
        if (bVar1 != *pcVar4) {
LAB_00543490:
          uVar9 = -(uint)bVar10 | 1;
          goto LAB_00543495;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar10 = bVar1 < (byte)pcVar4[1];
        if (bVar1 != pcVar4[1]) goto LAB_00543490;
        pbVar3 = pbVar3 + 2;
        pcVar4 = pcVar4 + 2;
      } while (bVar1 != 0);
      uVar9 = 0;
LAB_00543495:
      if (uVar9 == 0) {
LAB_005434da:
        param_3[4] = 1;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      pbVar5 = &DAT_00716788;
      pbVar3 = local_28 + 9;
      do {
        bVar1 = *pbVar3;
        bVar10 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_005434c1:
          uVar9 = -(uint)bVar10 | 1;
          goto LAB_005434c6;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar10 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_005434c1;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      uVar9 = 0;
LAB_005434c6:
      if (uVar9 == 0) {
        FUN_00532d10(param_3);
        param_3[3] = 1;
        goto LAB_005434da;
      }
      pbVar5 = &DAT_00716790;
      pbVar3 = local_28 + 9;
      do {
        bVar1 = *pbVar3;
        bVar10 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00543520:
          uVar9 = -(uint)bVar10 | 1;
          goto LAB_00543525;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar10 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00543520;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      uVar9 = 0;
LAB_00543525:
      if (uVar9 == 0) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    break;
  case 0x75:
    pcVar4 = "unixepoch";
    pbVar3 = local_28;
    do {
      bVar1 = *pbVar3;
      bVar10 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_00543220:
        uVar9 = -(uint)bVar10 | 1;
        goto LAB_00543225;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar10 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_00543220;
      pbVar3 = pbVar3 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    uVar9 = 0;
LAB_00543225:
    if ((uVar9 == 0) && (*(char *)((int)param_3 + 0x2a) != '\0')) {
      lVar14 = __alldiv(*param_3 + 0xa8c0,param_3[1] + (uint)(0xffff573f < *param_3),0x15180,0);
      *(longlong *)param_3 = lVar14 + 0xbfc83e532200;
      *(undefined2 *)(param_3 + 10) = 0;
      *(undefined1 *)((int)param_3 + 0x2b) = 0;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    pbVar5 = &DAT_00716764;
    pbVar3 = local_28;
    do {
      bVar1 = *pbVar3;
      bVar10 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_005432a0:
        uVar9 = -(uint)bVar10 | 1;
        goto LAB_005432a5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar10 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_005432a0;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    uVar9 = 0;
LAB_005432a5:
    if (uVar9 == 0) {
      FUN_00532a40(param_3);
      lVar14 = FUN_0053ce20(param_3,param_1,&local_2c);
      if (local_2c == 0) {
        uVar9 = *param_3;
        *param_3 = *param_3 - (uint)lVar14;
        *(undefined2 *)(param_3 + 10) = 0;
        *(undefined1 *)((int)param_3 + 0x2b) = 0;
        param_3[1] = (param_3[1] - (int)((ulonglong)lVar14 >> 0x20)) - (uint)(uVar9 < (uint)lVar14);
        lVar12 = FUN_0053ce20(param_3,uStack_38,&local_2c);
        uVar8 = (uint)(lVar14 - lVar12);
        uVar9 = *param_3;
        *param_3 = *param_3 + uVar8;
        param_3[1] = param_3[1] + (int)((ulonglong)(lVar14 - lVar12) >> 0x20) +
                     (uint)CARRY4(uVar9,uVar8);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      goto LAB_005439a0;
    }
    break;
  case 0x77:
    iVar2 = strncmp((char *)local_28,"weekday ",8);
    if (iVar2 == 0) {
      pbVar3 = local_28 + 8;
      while (local_28[8] != 0) {
        pbVar3 = pbVar3 + 1;
        local_28[8] = *pbVar3;
      }
      iVar2 = FUN_0054a330(local_28 + 8,&local_3c,(int)pbVar3 - (int)(local_28 + 8) & 0x3fffffff,1);
      if (iVar2 != 0) {
        dVar11 = (double)CONCAT44(uStack_38,local_3c);
        uVar9 = (uint)dVar11;
        if ((((double)(int)uVar9 == dVar11) && (-1 < (int)uVar9)) && (dVar11 < 7.0)) {
          FUN_00532d10(param_3);
          FUN_00532980(param_3);
          *(undefined2 *)((int)param_3 + 0x2a) = 0;
          FUN_00532a40(param_3);
          uVar13 = __alldiv(*param_3 + 0x7b98a00,param_3[1] + (uint)(0xf84675ff < *param_3),86400000
                            ,0);
          lVar14 = __allrem(uVar13,7,0);
          if ((int)uVar9 < lVar14) {
            lVar14 = lVar14 + -7;
          }
          uVar13 = __allmul(uVar9 - (uint)lVar14,
                            (((int)uVar9 >> 0x1f) - (int)((ulonglong)lVar14 >> 0x20)) -
                            (uint)(uVar9 < (uint)lVar14),86400000,0);
          uVar9 = *param_3;
          *param_3 = *param_3 + (uint)uVar13;
          *(undefined2 *)(param_3 + 10) = 0;
          *(undefined1 *)((int)param_3 + 0x2b) = 0;
          param_3[1] = (int)((ulonglong)uVar13 >> 0x20) + param_3[1] +
                       (uint)CARRY4(uVar9,(uint)uVar13);
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
    }
  }
LAB_005439a0:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00543a20 @ 00543a20  kind=gamemisc  attributed-by=none  size=206 */

bool FUN_00543a20(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  
  iVar3 = param_2;
  bVar2 = (&DAT_007121d8)[*param_1];
  pbVar5 = param_1;
  while ((bVar2 & 1) != 0) {
    pbVar1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
    bVar2 = (&DAT_007121d8)[*pbVar1];
  }
  *(undefined4 *)(param_2 + 0x1c) = 0;
  bVar2 = *pbVar5;
  if (bVar2 == 0x2d) {
    iVar6 = -1;
  }
  else {
    if (bVar2 != 0x2b) {
      if ((bVar2 != 0x5a) && (bVar2 != 0x7a)) {
        return bVar2 != 0;
      }
      pbVar5 = pbVar5 + 1;
      goto LAB_00543acf;
    }
    iVar6 = 1;
  }
  iVar4 = FUN_0053a850(pbVar5 + 1,2,0,0xe,0x3a,&param_1,2,0,0x3b,0,&param_2);
  if (iVar4 != 2) {
    return true;
  }
  pbVar5 = pbVar5 + 6;
  *(int *)(iVar3 + 0x1c) = (param_2 + (int)param_1 * 0x3c) * iVar6;
LAB_00543acf:
  bVar2 = (&DAT_007121d8)[*pbVar5];
  while ((bVar2 & 1) != 0) {
    pbVar1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
    bVar2 = (&DAT_007121d8)[*pbVar1];
  }
  return *pbVar5 != 0;
}


/* FUN_00543b00 @ 00543b00  kind=gamemisc  attributed-by=none  size=213 */

undefined4 FUN_00543b00(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined4 local_c;
  undefined4 local_8;
  
  cVar1 = *param_1;
  pcVar4 = param_1;
  if (cVar1 == '-') {
    pcVar4 = param_1 + 1;
  }
  iVar3 = FUN_0053a850(pcVar4,4,0,9999,0x2d,&param_1,2,1,0xc,0x2d,&local_8,2,1,0x1f,0,&local_c);
  iVar2 = param_2;
  if (iVar3 == 3) {
    for (pbVar5 = (byte *)(pcVar4 + 10); (((&DAT_007121d8)[*pbVar5] & 1) != 0 || (*pbVar5 == 0x54));
        pbVar5 = pbVar5 + 1) {
    }
    iVar3 = FUN_00542ff0(pbVar5,param_2);
    if (iVar3 != 0) {
      if (*pbVar5 != 0) {
        return 1;
      }
      *(undefined1 *)(iVar2 + 0x29) = 0;
    }
    *(undefined1 *)(iVar2 + 0x2a) = 0;
    *(undefined1 *)(iVar2 + 0x28) = 1;
    pcVar4 = param_1;
    if (cVar1 == '-') {
      pcVar4 = (char *)-(int)param_1;
    }
    *(char **)(iVar2 + 8) = pcVar4;
    *(undefined4 *)(iVar2 + 0xc) = local_8;
    *(undefined4 *)(iVar2 + 0x10) = local_c;
    if (*(char *)(iVar2 + 0x2b) != '\0') {
      FUN_00532a40(iVar2);
    }
    return 0;
  }
  return 1;
}


/* FUN_00543be0 @ 00543be0  kind=gamemisc  attributed-by=none  size=856 */

bool FUN_00543be0(char *param_1,byte *param_2,ushort *param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  char *pcVar12;
  bool bVar13;
  bool bVar14;
  
  uVar5 = param_3[1];
  bVar2 = *(byte *)((int)param_3 + 1);
  uVar6 = *param_3;
  uVar9 = (uint)*param_3;
  bVar3 = *(byte *)((int)param_3 + 3);
  bVar13 = false;
  bVar4 = false;
  uVar7 = FUN_0056a940(&param_1);
  if (uVar7 != 0) {
    do {
      if ((uVar7 == (byte)uVar6) && (!bVar13)) goto LAB_00543db0;
      if ((uVar7 != uVar9 >> 8) || (bVar13)) {
        if (uVar7 == (byte)uVar5) {
          uVar7 = 0;
          uVar9 = FUN_0056a940(&param_2);
          if (uVar9 == 0) {
            return false;
          }
          uVar10 = FUN_0056a940(&param_1);
          bVar13 = uVar10 == 0x5e;
          if (bVar13) {
            uVar10 = FUN_0056a940(&param_1);
          }
          bVar14 = uVar10 == 0x5d;
          if (bVar14) {
            uVar10 = FUN_0056a940(&param_1);
          }
          bVar14 = bVar14 && uVar9 == 0x5d;
          if (uVar10 == 0) {
            return false;
          }
          while (uVar10 != 0x5d) {
            if ((((uVar10 == 0x2d) && (*param_1 != ']')) && (*param_1 != '\0')) && (uVar7 != 0)) {
              uVar10 = FUN_0056a940(&param_1);
              if ((uVar7 <= uVar9) && (uVar9 <= uVar10)) {
                bVar14 = true;
              }
              uVar7 = 0;
            }
            else {
              uVar7 = uVar10;
              if (uVar9 == uVar10) {
                bVar14 = true;
              }
            }
            uVar10 = FUN_0056a940(&param_1);
            if (uVar10 == 0) {
              return false;
            }
          }
          if (bVar13 == bVar14) {
            return false;
          }
          uVar9 = (uint)bVar2 << 8;
          bVar13 = bVar4;
        }
        else if ((param_4 != uVar7) || (bVar13)) {
          uVar10 = FUN_0056a940(&param_2);
          if (bVar3 != 0) {
            if ((uVar7 & 0xffffff80) == 0) {
              uVar7 = (uint)(byte)(&DAT_007120d8)[uVar7];
            }
            if ((uVar10 & 0xffffff80) == 0) {
              uVar10 = (uint)(byte)(&DAT_007120d8)[uVar10];
            }
          }
          if (uVar7 != uVar10) {
            return false;
          }
          bVar13 = false;
          bVar4 = bVar13;
        }
        else {
          bVar13 = true;
          bVar4 = bVar13;
        }
      }
      else {
        iVar8 = FUN_0056a940(&param_2);
        if (iVar8 == 0) {
          return false;
        }
      }
      uVar7 = FUN_0056a940(&param_1);
    } while (uVar7 != 0);
  }
  return *param_2 == 0;
LAB_00543db0:
  while ((uVar10 = FUN_0056a940(&param_1), uVar7 = param_4, uVar10 == (byte)uVar6 ||
         (uVar10 == uVar9 >> 8))) {
    if ((uVar10 == uVar9 >> 8) && (iVar8 = FUN_0056a940(&param_2), iVar8 == 0)) {
      return false;
    }
  }
  if (uVar10 == 0) {
    return true;
  }
  if (uVar10 == param_4) {
    uVar10 = FUN_0056a940(&param_1);
    if (uVar10 == 0) {
      return false;
    }
  }
  else if (uVar10 == (byte)uVar5) {
    pbVar11 = param_2;
    if (*param_2 != 0) {
      pcVar12 = param_1 + -1;
      do {
        iVar8 = FUN_00543be0(pcVar12,pbVar11,param_3,uVar7);
        if (iVar8 != 0) break;
        bVar2 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        if (0xbf < bVar2) {
          bVar2 = *pbVar11;
          while ((bVar2 & 0xc0) == 0x80) {
            pbVar1 = pbVar11 + 1;
            pbVar11 = pbVar11 + 1;
            bVar2 = *pbVar1;
          }
        }
      } while (*pbVar11 != 0);
    }
    return *pbVar11 != 0;
  }
  uVar9 = FUN_0056a940(&param_2);
  pcVar12 = param_1;
  if (uVar9 == 0) {
    return false;
  }
  do {
    if (bVar3 == 0) {
      while (uVar9 != uVar10) {
        uVar9 = FUN_0056a940(&param_2);
        if (uVar9 == 0) {
          return false;
        }
      }
    }
    else {
      if ((uVar9 & 0xffffff80) == 0) {
        uVar9 = (uint)(byte)(&DAT_007120d8)[uVar9];
      }
      if ((uVar10 & 0xffffff80) == 0) {
        uVar10 = (uint)(byte)(&DAT_007120d8)[uVar10];
      }
      if (uVar9 == 0) {
        return false;
      }
      while (uVar9 != uVar10) {
        uVar9 = FUN_0056a940(&param_2);
        if ((uVar9 & 0xffffff80) == 0) {
          uVar9 = (uint)(byte)(&DAT_007120d8)[uVar9];
        }
        if (uVar9 == 0) {
          return false;
        }
      }
    }
    iVar8 = FUN_00543be0(pcVar12,param_2,param_3,uVar7);
    if (iVar8 != 0) {
      return true;
    }
    uVar9 = FUN_0056a940(&param_2);
  } while (uVar9 != 0);
  return false;
}


/* FUN_00544050 @ 00544050  kind=gamemisc  attributed-by=none  size=109 */

int * FUN_00544050(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)*param_1 != 0) {
    (*DAT_00766638)(*(int *)*param_1);
  }
  iVar1 = FUN_00543f40(param_1[1] + param_1[2] + 0x1c);
  piVar2 = (int *)(param_1[1] + iVar1);
  if (*(int *)*param_1 != 0) {
    (*DAT_00766630)(*(int *)*param_1);
  }
  if (iVar1 != 0) {
    *piVar2 = iVar1;
    piVar2[1] = (int)(piVar2 + 7);
    if (param_1[3] != 0) {
      *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + 1;
    }
    return piVar2;
  }
  return (int *)0x0;
}


/* FUN_005440c0 @ 005440c0  kind=gamemisc  attributed-by=none  size=195 */

void FUN_005440c0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(uint *)(param_1 + 4) < *(uint *)(param_1 + 0x10)) {
    do {
      puVar2 = *(undefined4 **)(param_1 + 0x18);
      if (puVar2 == (undefined4 *)0x0) {
        return;
      }
      iVar3 = *(int *)puVar2[4];
      if ((puVar2[5] != 0) || (puVar2 == *(undefined4 **)(iVar3 + 0x18))) {
        if (puVar2[6] != 0) {
          *(undefined4 *)(puVar2[6] + 0x14) = puVar2[5];
        }
        if (puVar2[5] != 0) {
          *(undefined4 *)(puVar2[5] + 0x18) = puVar2[6];
        }
        if (*(undefined4 **)(iVar3 + 0x14) == puVar2) {
          *(undefined4 *)(iVar3 + 0x14) = puVar2[5];
        }
        if (*(undefined4 **)(iVar3 + 0x18) == puVar2) {
          *(undefined4 *)(iVar3 + 0x18) = puVar2[6];
        }
        puVar2[5] = 0;
        puVar2[6] = 0;
        *(int *)(puVar2[4] + 0x20) = *(int *)(puVar2[4] + 0x20) + -1;
      }
      iVar3 = puVar2[4];
      piVar1 = (int *)(*(int *)(iVar3 + 0x2c) + ((uint)puVar2[2] % *(uint *)(iVar3 + 0x28)) * 4);
      puVar4 = (undefined4 *)*piVar1;
      while (puVar4 != puVar2) {
        piVar1 = puVar4 + 3;
        puVar4 = (undefined4 *)*piVar1;
      }
      *piVar1 = *(int *)(*piVar1 + 0xc);
      *(int *)(iVar3 + 0x24) = *(int *)(iVar3 + 0x24) + -1;
      piVar1 = (int *)puVar2[4];
      FUN_00544190(*puVar2);
      if (piVar1[3] != 0) {
        piVar1 = (int *)(*piVar1 + 0x10);
        *piVar1 = *piVar1 + -1;
      }
    } while (*(uint *)(param_1 + 4) < *(uint *)(param_1 + 0x10));
  }
  return;
}


/* FUN_00544290 @ 00544290  kind=gamemisc  attributed-by=none  size=38 */

void FUN_00544290(undefined4 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    piVar1 = (int *)param_1[4];
    FUN_00544190(*param_1);
    if (piVar1[3] != 0) {
      piVar1 = (int *)(*piVar1 + 0x10);
      *piVar1 = *piVar1 + -1;
    }
  }
  return;
}


/* FUN_005442c0 @ 005442c0  kind=gamemisc  attributed-by=none  size=96 */

void FUN_005442c0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = **(int **)(param_1 + 0x10);
    if ((*(int *)(param_1 + 0x14) != 0) || (param_1 == *(int *)(iVar2 + 0x18))) {
      if (*(int *)(param_1 + 0x18) != 0) {
        *(int *)(*(int *)(param_1 + 0x18) + 0x14) = *(int *)(param_1 + 0x14);
      }
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18) = *(undefined4 *)(param_1 + 0x18);
      }
      if (*(int *)(iVar2 + 0x14) == param_1) {
        *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
      }
      if (*(int *)(iVar2 + 0x18) == param_1) {
        *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      piVar1 = (int *)(*(int *)(param_1 + 0x10) + 0x20);
      *piVar1 = *piVar1 + -1;
    }
  }
  return;
}


/* FUN_00544320 @ 00544320  kind=gamemisc  attributed-by=none  size=55 */

void FUN_00544320(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  piVar1 = (int *)(*(int *)(iVar2 + 0x2c) + (*(uint *)(param_1 + 8) % *(uint *)(iVar2 + 0x28)) * 4);
  iVar3 = *piVar1;
  while (iVar3 != param_1) {
    piVar1 = (int *)(iVar3 + 0xc);
    iVar3 = *piVar1;
  }
  *piVar1 = *(int *)(*piVar1 + 0xc);
  *(int *)(iVar2 + 0x24) = *(int *)(iVar2 + 0x24) + -1;
  return;
}


/* FUN_00544360 @ 00544360  kind=gamemisc  attributed-by=none  size=259 */

undefined4 FUN_00544360(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint local_8;
  
  uVar5 = param_1[10] * 2;
  if (uVar5 < 0x100) {
    uVar5 = 0x100;
  }
  if (*(int *)*param_1 != 0) {
    (*DAT_00766638)(*(int *)*param_1);
  }
  if ((param_1[10] != 0) && (DAT_0076b3bc != (code *)0x0)) {
    (*DAT_0076b3bc)();
  }
  _Dst = (void *)FUN_0055da00(uVar5 * 4);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,uVar5 * 4);
  }
  if ((param_1[10] != 0) && (DAT_0076b3c0 != (code *)0x0)) {
    (*DAT_0076b3c0)();
  }
  if (*(int *)*param_1 != 0) {
    (*DAT_00766630)(*(int *)*param_1);
  }
  if (_Dst != (void *)0x0) {
    local_8 = 0;
    if (param_1[10] != 0) {
      do {
        iVar2 = *(int *)(param_1[0xb] + local_8 * 4);
        while (iVar2 != 0) {
          uVar4 = *(uint *)(iVar2 + 8) % uVar5;
          iVar1 = *(int *)(iVar2 + 0xc);
          *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)((int)_Dst + uVar4 * 4);
          *(int *)((int)_Dst + uVar4 * 4) = iVar2;
          iVar2 = iVar1;
        }
        local_8 = local_8 + 1;
      } while (local_8 < (uint)param_1[10]);
    }
    FUN_00524410(param_1[0xb]);
    param_1[0xb] = _Dst;
    param_1[10] = uVar5;
  }
  uVar3 = 7;
  if (param_1[0xb] != 0) {
    uVar3 = 0;
  }
  return uVar3;
}


/* FUN_00544470 @ 00544470  kind=gamemisc  attributed-by=none  size=205 */

void FUN_00544470(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint local_8;
  
  local_8 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    do {
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0x2c) + local_8 * 4);
      puVar1 = (undefined4 *)*puVar4;
      while (puVar1 != (undefined4 *)0x0) {
        if ((uint)puVar1[2] < param_2) {
          puVar4 = puVar1 + 3;
        }
        else {
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
          *puVar4 = puVar1[3];
          iVar2 = *(int *)puVar1[4];
          if ((puVar1[5] != 0) || (puVar1 == *(undefined4 **)(iVar2 + 0x18))) {
            if (puVar1[6] != 0) {
              *(undefined4 *)(puVar1[6] + 0x14) = puVar1[5];
            }
            if (puVar1[5] != 0) {
              *(undefined4 *)(puVar1[5] + 0x18) = puVar1[6];
            }
            if (*(undefined4 **)(iVar2 + 0x14) == puVar1) {
              *(undefined4 *)(iVar2 + 0x14) = puVar1[5];
            }
            if (*(undefined4 **)(iVar2 + 0x18) == puVar1) {
              *(undefined4 *)(iVar2 + 0x18) = puVar1[6];
            }
            puVar1[5] = 0;
            puVar1[6] = 0;
            *(int *)(puVar1[4] + 0x20) = *(int *)(puVar1[4] + 0x20) + -1;
          }
          piVar3 = (int *)puVar1[4];
          FUN_00544190(*puVar1);
          if (piVar3[3] != 0) {
            piVar3 = (int *)(*piVar3 + 0x10);
            *piVar3 = *piVar3 + -1;
          }
        }
        puVar1 = (undefined4 *)*puVar4;
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(uint *)(param_1 + 0x28));
  }
  return;
}


/* FUN_00544540 @ 00544540  kind=gamemisc  attributed-by=none  size=41 */

undefined4 FUN_00544540(int param_1)

{
  undefined4 uVar1;
  
  if ((DAT_0076b754 == 0) ||
     (uVar1 = DAT_0076b770, DAT_0076b750 < *(int *)(param_1 + 8) + *(int *)(param_1 + 4))) {
    uVar1 = DAT_0076b4ac;
  }
  return uVar1;
}


/* FUN_00546890 @ 00546890  kind=gamemisc  attributed-by=none  size=311 */

undefined4 FUN_00546890(undefined4 *param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  if (param_3 == (int *)0x0) {
    return 0;
  }
  local_c = *param_1;
  puVar7 = (undefined4 *)param_3[2];
  uVar6 = *(undefined4 *)*param_2;
  local_8 = 0;
  if (0 < *param_3) {
    do {
      pcVar1 = (char *)*puVar7;
      local_10 = FUN_00546090(local_c,*param_2,pcVar1);
      pcVar2 = pcVar1;
      if (local_10 < 1) {
        for (; (pcVar2 != (char *)0x0 && ((*pcVar2 == '\\' || (*pcVar2 == '\x18'))));
            pcVar2 = *(char **)(pcVar2 + 8)) {
        }
        iVar3 = FUN_00556530(pcVar2,&local_10);
        if (iVar3 == 0) {
          *(undefined2 *)((int)puVar7 + 0xe) = 0;
          iVar3 = FUN_005640a0(param_1,pcVar1);
          if (iVar3 != 0) {
            return 1;
          }
          piVar4 = (int *)*param_2;
          iVar3 = 0;
          if (0 < *piVar4) {
            iVar8 = 0;
            do {
              iVar5 = FUN_00555cb0(pcVar1,*(undefined4 *)(piVar4[2] + iVar8));
              if (iVar5 == 0) {
                *(short *)((int)puVar7 + 0xe) = (short)iVar3 + 1;
              }
              iVar3 = iVar3 + 1;
              piVar4 = (int *)*param_2;
              iVar8 = iVar8 + 0x14;
            } while (iVar3 < *piVar4);
          }
        }
        else {
          if (0xfffe < local_10 - 1U) {
            FUN_00553950(local_c,"%r %s BY term out of range - should be between 1 and %d",
                         local_8 + 1,param_4,uVar6);
            return 1;
          }
          *(short *)((int)puVar7 + 0xe) = (short)local_10;
        }
      }
      else {
        *(short *)((int)puVar7 + 0xe) = (short)local_10;
      }
      local_8 = local_8 + 1;
      puVar7 = puVar7 + 5;
    } while (local_8 < *param_3);
  }
  uVar6 = FUN_00564180(local_c,param_2,param_3,param_4);
  return uVar6;
}


/* FUN_005476b0 @ 005476b0  kind=gamemisc  attributed-by=none  size=105 */

undefined4 FUN_005476b0(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint local_8;
  
  local_8 = param_3 & 0x7fffffff;
  iVar1 = (*(code *)PTR_SetFilePointer_007672f4)(*(undefined4 *)(param_1 + 8),param_2,&local_8,0);
  if (iVar1 == -1) {
    iVar1 = (*(code *)PTR_GetLastError_007671bc)();
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x14) = iVar1;
      FUN_0057fa50(0x160a,iVar1,"seekWinFile",*(undefined4 *)(param_1 + 0x1c),0x7d7a);
      return 1;
    }
  }
  return 0;
}


/* FUN_00548b20 @ 00548b20  kind=gamemisc  attributed-by=none  size=118 */

undefined4 FUN_00548b20(int param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  double local_c;
  
  piVar1 = (int *)**(int **)(param_1 + 8);
  if ((*piVar1 < 2) || ((code *)piVar1[0x12] == (code *)0x0)) {
    iVar2 = (*(code *)piVar1[0x10])(piVar1,&local_c);
    local_c = local_c * 86400000.0;
    uVar3 = FUN_0068d946();
    *param_2 = uVar3;
  }
  else {
    iVar2 = (*(code *)piVar1[0x12])(piVar1,param_2);
  }
  if (iVar2 == 0) {
    *(undefined1 *)((int)param_2 + 0x2a) = 1;
    return 0;
  }
  return 1;
}


/* FUN_00548d00 @ 00548d00  kind=gamemisc  attributed-by=none  size=277 */

undefined4 FUN_00548d00(int param_1,undefined4 *param_2,uint param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0xec) != 0) {
    return 5;
  }
  if (*(char *)(param_1 + 0xeb) != '\0') {
    FUN_00524410(*(undefined4 *)(param_1 + 0x104));
  }
  param_3 = param_3 & 0xfffffff8;
  if ((int)param_3 < 5) {
    param_3 = 0;
  }
  if (param_4 < 0) {
    param_4 = 0;
  }
  if ((param_3 == 0) || (param_4 == 0)) {
    param_3 = 0;
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = param_2;
    if (param_2 == (undefined4 *)0x0) {
      if (DAT_0076b3bc != (code *)0x0) {
        (*DAT_0076b3bc)();
      }
      puVar1 = (undefined4 *)FUN_0055da00(param_3 * param_4);
      if (DAT_0076b3c0 != (code *)0x0) {
        (*DAT_0076b3c0)();
      }
      if (puVar1 != (undefined4 *)0x0) {
        param_4 = (*DAT_00766608._4_4_)(puVar1);
        param_4 = param_4 / (int)param_3;
      }
    }
  }
  *(undefined4 **)(param_1 + 0x104) = puVar1;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(short *)(param_1 + 0xe8) = (short)param_3;
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined2 *)(param_1 + 0xea) = 0;
    return 0;
  }
  while (param_4 = param_4 + -1, -1 < param_4) {
    *puVar1 = *(undefined4 *)(param_1 + 0x100);
    *(undefined4 **)(param_1 + 0x100) = puVar1;
    puVar1 = (undefined4 *)((int)puVar1 + param_3);
  }
  *(undefined4 **)(param_1 + 0x108) = puVar1;
  *(bool *)(param_1 + 0xeb) = param_2 == (undefined4 *)0x0;
  *(undefined1 *)(param_1 + 0xea) = 1;
  return 0;
}


/* FUN_0054ad90 @ 0054ad90  kind=gamemisc  attributed-by=none  size=196 */

void FUN_0054ad90(undefined4 param_1)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 local_8;
  
  bVar1 = true;
  if (DAT_0076b3b0 != 0) {
    iVar4 = 0;
    do {
      if (DAT_007665e4 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*DAT_00766628)(2);
        if (iVar3 != 0) {
          (*DAT_00766630)(iVar3);
        }
      }
      if (iVar4 < DAT_0076b3b0) {
        pcVar2 = *(code **)(DAT_0076b3b4 + iVar4 * 4);
      }
      else {
        pcVar2 = (code *)0x0;
        bVar1 = false;
      }
      if (iVar3 != 0) {
        (*DAT_00766638)(iVar3);
      }
      local_8 = 0;
      if ((pcVar2 != (code *)0x0) &&
         (iVar3 = (*pcVar2)(param_1,&local_8,&PTR_FUN_00712d48), iVar3 != 0)) {
        FUN_00553890(param_1,iVar3,"automatic extension loading failed: %s",local_8);
        bVar1 = false;
      }
      FUN_00524410(local_8);
      iVar4 = iVar4 + 1;
    } while (bVar1);
  }
  return;
}


/* FUN_0054de80 @ 0054de80  kind=gamemisc  attributed-by=none  size=47 */

void FUN_0054de80(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 9) != '\0') {
    piVar1 = (int *)(iVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar3 = *(int *)(*(int *)(iVar2 + 4) + 0x38);
      if (iVar3 != 0) {
        (*DAT_00766638)(iVar3);
      }
      *(undefined1 *)(iVar2 + 10) = 0;
    }
  }
  return;
}


/* FUN_0054fc20 @ 0054fc20  kind=gamemisc  attributed-by=none  size=204 */

undefined4 FUN_0054fc20(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (((iVar1 != 0x4b771290) && (iVar1 != -0x5fd65969)) && (iVar1 != -0xfc486fa)) {
      FUN_00525a30(0x15,"API call with %s database connection pointer","invalid");
      FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0x1bb1e,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
      return 0x15;
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      (*DAT_00766630)(*(int *)(param_1 + 0xc));
    }
    FUN_005342f0(param_1);
    FUN_0052f080(param_1,0x44);
    if (param_2 == 0) {
      iVar1 = FUN_00532e30(param_1);
      if (iVar1 != 0) {
        FUN_00553890(param_1,5,"unable to close due to unfinalized statements or unfinished backups"
                    );
        if (*(int *)(param_1 + 0xc) != 0) {
          (*DAT_00766638)(*(int *)(param_1 + 0xc));
        }
        return 5;
      }
    }
    *(undefined4 *)(param_1 + 0x44) = 0x64cffc7f;
    FUN_0055d180(param_1);
  }
  return 0;
}


/* FUN_0055e040 @ 0055e040  kind=gamemisc  attributed-by=none  size=133 */

undefined4 FUN_0055e040(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  if (DAT_0076b488 != 0) {
    (*DAT_00766630)(DAT_0076b488);
  }
  DAT_0076b498 = param_1;
  DAT_0076b49c = param_2;
  DAT_0076b490 = param_3;
  DAT_0076b494 = param_4;
  if ((-1 < param_4) && ((0 < param_4 || (param_3 != 0)))) {
    if ((param_4 <= (int)DAT_0076b360 >> 0x1f) &&
       ((param_4 < (int)DAT_0076b360 >> 0x1f || (param_3 <= DAT_0076b360)))) {
      DAT_0076b4ac = 1;
      goto LAB_0055e0b1;
    }
  }
  DAT_0076b4ac = 0;
LAB_0055e0b1:
  if (DAT_0076b488 != 0) {
    (*DAT_00766638)(DAT_0076b488);
  }
  return 0;
}


/* FUN_0055f340 @ 0055f340  kind=gamemisc  attributed-by=none  size=77 */

int FUN_0055f340(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar1 = *(ushort *)(param_1 + 0x74);
  iVar2 = *(int *)(param_1 + 0x80);
  iVar3 = *(int *)(*(int *)(param_1 + 0xb4) + 0x28);
  if (iVar3 != 0) {
    iVar4 = (*DAT_0076665c)(iVar3);
  }
  iVar3 = (*DAT_00766608._4_4_)(param_1);
  return iVar3 + iVar4 * (iVar2 + 0x3c + (uint)uVar1) + *(int *)(param_1 + 0x80);
}


/* FUN_00563550 @ 00563550  kind=gamemisc  attributed-by=none  size=256 */

uint FUN_00563550(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,
                 int *param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int local_8;
  
  uVar5 = 0;
  local_8 = 0;
  *param_5 = 0;
  iVar2 = FUN_00564f10(param_1);
  if (iVar2 == 0) {
    FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0x17015,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    return 0x15;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  iVar2 = FUN_0056a850(param_1,param_2,param_3,2);
  if (iVar2 != 0) {
    uVar5 = FUN_0055d830(param_1,iVar2,0xffffffff,param_4,0,param_5,&local_8);
    if ((local_8 != 0) && (param_6 != (int *)0x0)) {
      uVar3 = FUN_0056a8f0(iVar2,local_8 - iVar2);
      iVar4 = FUN_0056a810(param_2,uVar3);
      *param_6 = iVar4 + param_2;
    }
  }
  FUN_005521a0(param_1,iVar2);
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar5 == 0xc0a)) {
    FUN_00553890(param_1,7,0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar5 = 7;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar1 & uVar5;
}


/* FUN_0056a810 @ 0056a810  kind=gamemisc  attributed-by=none  size=57 */

int FUN_0056a810(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar2 = param_1;
  pbVar1 = param_1;
  if (0 < param_2) {
    do {
      pbVar2 = pbVar1 + 2;
      if ((uint)pbVar1[1] * 0x100 + -0xd800 + (uint)*pbVar1 < 0x800) {
        pbVar2 = pbVar1 + 4;
      }
      param_2 = param_2 + -1;
      pbVar1 = pbVar2;
    } while (param_2 != 0);
  }
  return (int)pbVar2 - (int)param_1;
}


/* FUN_0056a850 @ 0056a850  kind=gamemisc  attributed-by=none  size=145 */

undefined4 FUN_0056a850(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  undefined8 local_c;
  
  local_24 = 0;
  local_1c = 0;
  local_14 = 0;
  local_c = 0;
  local_2c = (ulonglong)param_1;
  FUN_00575040(&local_2c,param_2,param_3,param_4,0);
  if (((local_14 & 0x200000000) != 0) && (local_14._7_1_ != '\x01')) {
    FUN_00575420(&local_2c,1);
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    if ((local_14 & 0x246000000000) != 0) {
      FUN_00574d80(&local_2c);
    }
    FUN_005521a0((undefined4)local_2c,local_c._4_4_);
    return 0;
  }
  return local_2c._4_4_;
}


/* FUN_0056a940 @ 0056a940  kind=gamemisc  attributed-by=none  size=109 */

uint FUN_0056a940(int *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  uVar2 = (uint)*(byte *)*param_1;
  pbVar3 = (byte *)*param_1 + 1;
  *param_1 = (int)pbVar3;
  if (0xbf < uVar2) {
    uVar2 = (uint)(byte)(&DAT_007151b0)[uVar2];
    bVar1 = *pbVar3;
    while ((bVar1 & 0xc0) == 0x80) {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      uVar2 = uVar2 * 0x40 + (bVar1 & 0x3f);
      *param_1 = (int)pbVar3;
      bVar1 = *pbVar3;
    }
    if (((uVar2 < 0x80) || ((uVar2 & 0xfffff800) == 0xd800)) || ((uVar2 & 0xfffffffe) == 0xfffe)) {
      return 0xfffd;
    }
  }
  return uVar2;
}


/* FUN_00575240 @ 00575240  kind=gamemisc  attributed-by=none  size=91 */

void FUN_00575240(undefined4 *param_1,int param_2)

{
  if ((*(ushort *)(param_1 + 7) & 0x2460) != 0) {
    FUN_00574d80(param_1);
  }
  FUN_005521a0(*param_1,param_1[9]);
  if (param_2 < 0) {
    param_2 = 0;
  }
  param_1[1] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0x1044010;
  param_1[6] = 0;
  param_1[4] = param_2;
  return;
}


/* FUN_0057a1b0 @ 0057a1b0  kind=gamemisc  attributed-by=none  size=106 */

uint FUN_0057a1b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  uVar2 = FUN_0055d490(param_1,param_2,param_3,param_4);
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar2 == 0xc0a)) {
    FUN_00553890(param_1,7,0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar2 = 7;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar1 & uVar2;
}


/* FUN_0057a310 @ 0057a310  kind=gamemisc  attributed-by=none  size=162 */

byte * FUN_0057a310(char *param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  char *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  bool bVar10;
  
  if (param_1 == (char *)0x0) {
    return (byte *)0x0;
  }
  cVar1 = *param_1;
  pcVar5 = param_1;
  while (cVar1 != '\0') {
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar5;
  }
  pbVar9 = (byte *)(param_1 + ((int)pcVar5 - (int)param_1 & 0x3fffffffU) + 1);
  bVar2 = *pbVar9;
  do {
    pbVar6 = pbVar9;
    pbVar7 = param_2;
    if (bVar2 == 0) {
      return (byte *)0x0;
    }
    do {
      bVar3 = *pbVar6;
      bVar10 = bVar3 < *pbVar7;
      pbVar4 = pbVar9;
      if (bVar3 != *pbVar7) {
LAB_0057a367:
        uVar8 = -(uint)bVar10 | 1;
        goto joined_r0x0057a370;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar6[1];
      bVar10 = bVar3 < pbVar7[1];
      if (bVar3 != pbVar7[1]) goto LAB_0057a367;
      pbVar6 = pbVar6 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar3 != 0);
    uVar8 = 0;
joined_r0x0057a370:
    while (bVar2 != 0) {
      bVar2 = pbVar4[1];
      pbVar4 = pbVar4 + 1;
    }
    pbVar9 = pbVar9 + ((int)pbVar4 - (int)pbVar9 & 0x3fffffffU) + 1;
    if (uVar8 == 0) {
      return pbVar9;
    }
    uVar8 = 0;
    if (pbVar9 != (byte *)0x0) {
      bVar2 = *pbVar9;
      pbVar6 = pbVar9;
      while (bVar2 != 0) {
        pbVar6 = pbVar6 + 1;
        bVar2 = *pbVar6;
      }
      uVar8 = (int)pbVar6 - (int)pbVar9 & 0x3fffffff;
    }
    pbVar9 = pbVar9 + uVar8 + 1;
    bVar2 = *pbVar9;
  } while( true );
}


/* FUN_0057a3c0 @ 0057a3c0  kind=gamemisc  attributed-by=none  size=48 */

undefined4 FUN_0057a3c0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0053dde0(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_0057b270(iVar1);
  FUN_00524410(iVar1);
  return uVar2;
}


/* FUN_0057b1e0 @ 0057b1e0  kind=gamemisc  attributed-by=none  size=129 */

void * FUN_0057b1e0(undefined4 param_1)

{
  int iVar1;
  size_t _Size;
  void *_Dst;
  
  iVar1 = (*(code *)PTR_AreFileApisANSI_00767084)();
  _Size = (*(code *)PTR_WideCharToMultiByte_0076733c)(iVar1 == 0,0,param_1,0xffffffff,0,0,0,0);
  if (_Size == 0) {
    return (void *)0x0;
  }
  _Dst = (void *)FUN_0055da00(_Size);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,_Size);
    if (_Dst != (void *)0x0) {
      iVar1 = (*(code *)PTR_WideCharToMultiByte_0076733c)
                        (iVar1 == 0,0,param_1,0xffffffff,_Dst,_Size,0,0);
      if (iVar1 == 0) {
        FUN_00524410(_Dst);
        _Dst = (void *)0x0;
      }
      return _Dst;
    }
  }
  return (void *)0x0;
}


/* FUN_0057b270 @ 0057b270  kind=gamemisc  attributed-by=none  size=122 */

void * FUN_0057b270(undefined4 param_1)

{
  size_t _Size;
  void *_Dst;
  int iVar1;
  
  _Size = (*(code *)PTR_WideCharToMultiByte_0076733c)(0xfde9,0,param_1,0xffffffff,0,0,0,0);
  if (_Size == 0) {
    return (void *)0x0;
  }
  _Dst = (void *)FUN_0055da00(_Size);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,_Size);
    if (_Dst != (void *)0x0) {
      iVar1 = (*(code *)PTR_WideCharToMultiByte_0076733c)
                        (0xfde9,0,param_1,0xffffffff,_Dst,_Size,0,0);
      if (iVar1 == 0) {
        FUN_00524410(_Dst);
        _Dst = (void *)0x0;
      }
      return _Dst;
    }
  }
  return (void *)0x0;
}


/* FUN_0057b2f0 @ 0057b2f0  kind=gamemisc  attributed-by=none  size=189 */

void FUN_0057b2f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (DAT_0076b480 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_0076721c)(local_9c);
    DAT_0076b480 = (local_8c == 2) + 1;
  }
  if (DAT_0076b480 == 2) {
    uVar2 = 0x1fe;
    iVar1 = DAT_007666d0 + 2;
  }
  else {
    uVar2 = 1;
    iVar1 = DAT_007666d0 + 2 + (int)*(short *)(param_1 + 0xe);
  }
  iVar1 = FUN_0057ff40(param_1 + 8,iVar1,0,uVar2,0);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_GetLastError_007671bc)();
    if (iVar1 != 0x9e) {
      *(int *)(param_1 + 0x14) = iVar1;
      FUN_0057fa50(0x80a,iVar1,"unlockReadLock",*(undefined4 *)(param_1 + 0x1c),0x7f2e);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0057c220 @ 0057c220  kind=gamemisc  attributed-by=none  size=120 */

void * FUN_0057c220(undefined4 param_1)

{
  int iVar1;
  void *_Dst;
  
  iVar1 = (*(code *)PTR_MultiByteToWideChar_007672c4)(0xfde9,0,param_1,0xffffffff,0,0);
  if (iVar1 == 0) {
    return (void *)0x0;
  }
  _Dst = (void *)FUN_0055da00(iVar1 * 2);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,iVar1 * 2);
    if (_Dst != (void *)0x0) {
      iVar1 = (*(code *)PTR_MultiByteToWideChar_007672c4)(0xfde9,0,param_1,0xffffffff,_Dst,iVar1);
      if (iVar1 == 0) {
        FUN_00524410(_Dst);
        _Dst = (void *)0x0;
      }
      return _Dst;
    }
  }
  return (void *)0x0;
}


/* FUN_0057f890 @ 0057f890  kind=gamemisc  attributed-by=none  size=234 */

void FUN_0057f890(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_c0 [4];
  int local_b0;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (DAT_0076b480 == 0) {
    local_c0[0] = 0x94;
    (*(code *)PTR_GetVersionExA_0076721c)(local_c0);
    DAT_0076b480 = (local_b0 == 2) + 1;
  }
  if (DAT_0076b480 == 2) {
    iVar3 = 0;
    local_2c = 0;
    local_24 = 0;
    local_1c = 0;
    local_14 = 0;
    local_c = 0;
    while( true ) {
      iVar1 = (*(code *)PTR_GetFileAttributesExW_0076718c)(param_1,0,&local_2c);
      if (iVar1 != 0) break;
      iVar1 = (*(code *)PTR_GetLastError_007671bc)();
      if ((DAT_007666d4 <= iVar3) || (((iVar1 != 5 && (iVar1 != 0x21)) && (iVar1 != 0x20))))
      goto LAB_0057f96b;
      iVar3 = iVar3 + 1;
      (*(code *)PTR_Sleep_00767300)(iVar3 * DAT_007666d8);
    }
    uVar2 = (uint)local_2c;
  }
  else {
    uVar2 = (*(code *)PTR_GetFileAttributesA_00767174)(param_1);
  }
  if ((uVar2 != 0xffffffff) && ((uVar2 & 0x10) != 0)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_0057f96b:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0057f980 @ 0057f980  kind=gamemisc  attributed-by=none  size=201 */

void FUN_0057f980(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (DAT_0076b480 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_0076721c)(local_9c);
    DAT_0076b480 = (local_8c == 2) + 1;
  }
  if (DAT_0076b480 == 2) {
    _local_a8 = CONCAT44(param_4,param_3);
    local_b0 = 0;
    local_a0 = 0;
    (*(code *)PTR_LockFileEx_007672ac)(*param_1,param_2,0,param_5,param_6,&local_b0);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  (*(code *)PTR_LockFile_007672a0)(*param_1,param_3,param_4,param_5,param_6);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0057fa50 @ 0057fa50  kind=gamemisc  attributed-by=none  size=179 */

void FUN_0057fa50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
                 undefined4 param_5)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  char local_1fc [500];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_1fc[0] = '\0';
  FUN_0053a8f0(param_2,500,local_1fc);
  puVar5 = &DAT_006fc918;
  if (param_4 != (undefined1 *)0x0) {
    puVar5 = param_4;
  }
  uVar3 = 0;
  uVar4 = uVar3;
  if (local_1fc[0] != '\0') {
    do {
      uVar4 = uVar3;
      if ((local_1fc[uVar3] == '\r') || (local_1fc[uVar3] == '\n')) break;
      uVar4 = uVar3 + 1;
      iVar2 = uVar3 + 1;
      uVar3 = uVar4;
    } while (local_1fc[iVar2] != '\0');
    if (499 < uVar4) {
      ___report_rangecheckfailure();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_1fc[uVar4] = '\0';
  FUN_00525a30(param_1,"os_win.c:%d: (%d) %s(%s) - %s",param_5,param_2,param_3,puVar5,local_1fc);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0057fb50 @ 0057fb50  kind=gamemisc  attributed-by=none  size=796 */

int FUN_0057fb50(int param_1)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  char *pcVar4;
  undefined8 *puVar5;
  int *_Dst;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  byte *pbVar9;
  char *pcVar10;
  uint uVar11;
  byte *pbVar12;
  int *piVar13;
  
  puVar5 = (undefined8 *)FUN_0055da00(0x10);
  if (puVar5 == (undefined8 *)0x0) {
    return 0xc0a;
  }
  *puVar5 = 0;
  puVar5[1] = 0;
  pcVar4 = *(char **)(param_1 + 0x1c);
  uVar11 = 0;
  if (pcVar4 != (char *)0x0) {
    cVar2 = *pcVar4;
    pcVar10 = pcVar4;
    while (cVar2 != '\0') {
      pcVar10 = pcVar10 + 1;
      cVar2 = *pcVar10;
    }
    uVar11 = (int)pcVar10 - (int)pcVar4 & 0x3fffffff;
  }
  _Dst = (int *)FUN_0055da00(uVar11 + 0x59);
  if (_Dst == (int *)0x0) {
    FUN_00524410(puVar5);
    return 0xc0a;
  }
  memset(_Dst,0,uVar11 + 0x59);
  _Dst[1] = (int)(_Dst + 0x12);
  FUN_005240c0(uVar11 + 0xf,_Dst + 0x12,"%s-shm",*(undefined4 *)(param_1 + 0x1c));
  piVar13 = DAT_0076b3cc;
  if ((DAT_007665e4 != 0) && (iVar6 = (*DAT_00766628)(2), piVar13 = DAT_0076b3cc, iVar6 != 0)) {
    (*DAT_00766630)(iVar6);
    piVar13 = DAT_0076b3cc;
  }
  for (; piVar13 != (int *)0x0; piVar13 = (int *)piVar13[0x11]) {
    pbVar9 = (byte *)piVar13[1];
    pbVar12 = (byte *)_Dst[1];
    bVar3 = *pbVar9;
    while ((bVar3 != 0 && ((&DAT_007120d8)[bVar3] == (&DAT_007120d8)[*pbVar12]))) {
      pbVar1 = pbVar9 + 1;
      pbVar9 = pbVar9 + 1;
      pbVar12 = pbVar12 + 1;
      bVar3 = *pbVar1;
    }
    if ((&DAT_007120d8)[*pbVar9] == (&DAT_007120d8)[*pbVar12]) {
      FUN_00524410(_Dst);
      goto LAB_0057fde9;
    }
  }
  _Dst[4] = -1;
  _Dst[0x11] = (int)DAT_0076b3cc;
  DAT_0076b3cc = _Dst;
  iVar6 = FUN_00579f80();
  if (iVar6 == 0) {
    iVar6 = (*DAT_00766628)(0);
  }
  else {
    iVar6 = 0;
  }
  *_Dst = iVar6;
  if (iVar6 == 0) {
    iVar6 = 0xc0a;
  }
  else {
    iVar6 = FUN_00527740(*(undefined4 *)(param_1 + 4),_Dst[1],_Dst + 2,0x80006,0);
    if (iVar6 == 0) {
      iVar6 = FUN_0057f980(_Dst + 4,3,0x80,0,1,0);
      if (iVar6 == 0) {
        iVar6 = (*(code *)PTR_GetLastError_007671bc)();
        _Dst[0xe] = iVar6;
      }
      else {
        iVar6 = FUN_005239d0(_Dst + 2,0,0);
        if (iVar6 != 0) {
          uVar8 = (*(code *)PTR_GetLastError_007671bc)
                            ("winOpenShm",*(undefined4 *)(param_1 + 0x1c),0x819a);
          iVar6 = FUN_0057fa50(0x120a,uVar8);
          if (iVar6 != 0) goto LAB_0057fc94;
        }
      }
      iVar6 = FUN_0057ff40(_Dst + 4,0x80,0,1,0);
      if (iVar6 == 0) {
        iVar6 = (*(code *)PTR_GetLastError_007671bc)();
        _Dst[0xe] = iVar6;
      }
      iVar6 = FUN_0057f980(_Dst + 4,1,0x80,0,1,0);
      if (iVar6 == 0) {
        iVar6 = (*(code *)PTR_GetLastError_007671bc)();
        _Dst[0xe] = iVar6;
        iVar6 = 5;
      }
      else {
        iVar6 = 0;
      }
      piVar13 = _Dst;
      if (iVar6 == 0) {
LAB_0057fde9:
        *(int **)puVar5 = piVar13;
        piVar13[0xf] = piVar13[0xf] + 1;
        *(undefined8 **)(param_1 + 0x18) = puVar5;
        if ((DAT_007665e4 != 0) && (iVar6 = (*DAT_00766628)(2), iVar6 != 0)) {
          (*DAT_00766638)(iVar6);
        }
        if (*piVar13 != 0) {
          (*DAT_00766630)(*piVar13);
        }
        *(int *)((int)puVar5 + 4) = piVar13[0x10];
        piVar13[0x10] = (int)puVar5;
        if (*piVar13 != 0) {
          (*DAT_00766638)(*piVar13);
        }
        return 0;
      }
    }
  }
LAB_0057fc94:
  iVar7 = FUN_0057ff40(_Dst + 4,0x80,0,1,0);
  if (iVar7 == 0) {
    iVar7 = (*(code *)PTR_GetLastError_007671bc)();
    _Dst[0xe] = iVar7;
  }
  FUN_0057fe70(*(undefined4 *)(param_1 + 4),0);
  FUN_00524410(puVar5);
  FUN_00524410(0);
  if ((DAT_007665e4 != 0) && (iVar7 = (*DAT_00766628)(2), iVar7 != 0)) {
    (*DAT_00766638)(iVar7);
  }
  return iVar6;
}


/* FUN_0057fe70 @ 0057fe70  kind=gamemisc  attributed-by=none  size=200 */

void FUN_0057fe70(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)&DAT_0076b3cc;
  piVar1 = DAT_0076b3cc;
  while (piVar1 != (int *)0x0) {
    if (piVar1[0xf] == 0) {
      if (*piVar1 != 0) {
        (*DAT_0076662c)(*piVar1);
      }
      iVar3 = 0;
      if (0 < piVar1[0xc]) {
        do {
          (*(code *)PTR_UnmapViewOfFile_00767330)(*(undefined4 *)(piVar1[0xd] + 4 + iVar3 * 8));
          (*(code *)PTR_CloseHandle_007670a8)(*(undefined4 *)(piVar1[0xd] + iVar3 * 8));
          iVar3 = iVar3 + 1;
        } while (iVar3 < piVar1[0xc]);
      }
      if (piVar1[4] != -1) {
        FUN_00522690(piVar1 + 2);
      }
      if (param_2 != 0) {
        if (DAT_0076b3bc != (code *)0x0) {
          (*DAT_0076b3bc)();
        }
        FUN_00527b60(param_1,piVar1[1],0);
        if (DAT_0076b3c0 != (code *)0x0) {
          (*DAT_0076b3c0)();
        }
      }
      *piVar2 = piVar1[0x11];
      FUN_00524410(piVar1[0xd]);
      FUN_00524410(piVar1);
    }
    else {
      piVar2 = piVar1 + 0x11;
    }
    piVar1 = (int *)*piVar2;
  }
  return;
}


/* FUN_0057ff40 @ 0057ff40  kind=gamemisc  attributed-by=none  size=198 */

void FUN_0057ff40(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (DAT_0076b480 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_0076721c)(local_9c);
    DAT_0076b480 = (local_8c == 2) + 1;
  }
  if (DAT_0076b480 == 2) {
    _local_a8 = CONCAT44(param_3,param_2);
    local_b0 = 0;
    local_a0 = 0;
    (*(code *)PTR_UnlockFileEx_00767324)(*param_1,0,param_4,param_5,&local_b0);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  (*(code *)PTR_UnlockFile_00767318)(*param_1,param_2,param_3,param_4,param_5);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0058d710 @ 0058d710  kind=gamemisc  attributed-by=none  size=22 */

void FUN_0058d710(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  return;
}


/* FUN_0058d730 @ 0058d730  kind=gamemisc  attributed-by=none  size=99 */

undefined4 FUN_0058d730(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_2 + 0x14) - *(uint *)(param_2 + 0x10) < *(uint *)(param_3 + 0x10)) &&
     (*(uint *)(param_2 + 0x10) <= (uint)(*(int *)(param_3 + 0x14) - *(int *)(param_3 + 0x10)))) {
    uVar1 = FUN_0043a270(0,param_2,0,0xffffffff);
    FUN_0040eaf0(uVar1);
    return param_1;
  }
  uVar1 = FUN_0046f170(param_3,0,0xffffffff);
  FUN_0040eaf0(uVar1);
  return param_1;
}


/* FUN_0058e7d0 @ 0058e7d0  kind=gamemisc  attributed-by=none  size=254 */

undefined4 * FUN_0058e7d0(undefined4 *param_1,char param_2,uint *param_3,undefined4 param_4)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  bool bVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = param_3;
  puStack_c = &LAB_006f16c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)*in_ECX;
  bVar5 = true;
  local_8 = 0;
  piVar6 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    piVar3 = (int *)piVar1[1];
    do {
      piVar6 = piVar3;
      if (param_2 == '\0') {
        bVar5 = *param_3 < (uint)piVar6[4];
      }
      else {
        bVar5 = *param_3 <= (uint)piVar6[4];
      }
      if (bVar5 == false) {
        piVar3 = (int *)piVar6[2];
      }
      else {
        piVar3 = (int *)*piVar6;
      }
    } while (*(char *)((int)piVar3 + 0xd) == '\0');
  }
  _param_2 = piVar6;
  if (bVar5 != false) {
    if (piVar6 == (int *)*piVar1) {
      puVar4 = (undefined4 *)&param_2;
      bVar5 = true;
      goto LAB_0058e869;
    }
    FUN_0042c740();
  }
  if (*puVar2 <= (uint)_param_2[4]) {
    *param_1 = _param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return param_1;
  }
  puVar4 = &param_3;
LAB_0058e869:
  puVar4 = (undefined4 *)FUN_0062fbc0(puVar4,bVar5,piVar6,puVar2,param_4);
  *param_1 = *puVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_00594660 @ 00594660  kind=gamemisc  attributed-by=none  size=34 */

uint FUN_00594660(uint *param_1)

{
  uint uVar1;
  uint *in_ECX;
  
  uVar1 = in_ECX[1];
  if (((int)uVar1 <= (int)param_1[1]) &&
     (((int)uVar1 < (int)param_1[1] || (uVar1 = *in_ECX, uVar1 < *param_1)))) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


/* FUN_00594690 @ 00594690  kind=gamemisc  attributed-by=none  size=34 */

uint FUN_00594690(uint *param_1)

{
  uint uVar1;
  uint *in_ECX;
  
  uVar1 = in_ECX[1];
  if (((int)param_1[1] <= (int)uVar1) &&
     (((int)param_1[1] < (int)uVar1 || (uVar1 = *in_ECX, *param_1 <= uVar1)))) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


/* FUN_00594890 @ 00594890  kind=gamemisc  attributed-by=none  size=63 */

undefined4 * FUN_00594890(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)*in_ECX;
  if (*(char *)((int)puVar3[1] + 0xd) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if (((int)puVar1[4] < *param_1) ||
         (((int)puVar1[4] <= *param_1 && ((int)puVar1[5] < param_1[1])))) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  return puVar3;
}


/* FUN_00594c80 @ 00594c80  kind=gamemisc  attributed-by=none  size=876 */

void FUN_00594c80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined1 local_f8 [4];
  int local_f4;
  undefined4 local_f0;
  void *local_ec [4];
  undefined4 local_dc;
  uint local_d8;
  void *local_d4 [4];
  undefined4 local_c4;
  uint local_c0;
  void *local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  void *local_a4 [4];
  undefined4 local_94;
  uint local_90;
  void *local_8c [4];
  undefined4 local_7c;
  uint local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f1b87;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_f0 = param_1;
  local_14 = uVar3;
  uVar4 = FUN_0059aa60(local_a4,param_2);
  local_8 = 0;
  piVar5 = (int *)FUN_005a02d0(uVar4);
  local_8 = 0xffffffff;
  if (7 < local_90) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_a4[0]);
  }
  local_90 = 7;
  local_94 = 0;
  local_a4[0] = (void *)((uint)local_a4[0] & 0xffff0000);
  piVar7 = *(int **)piVar5[2];
  if (piVar7 != (int *)piVar5[2]) {
    do {
      local_8 = 0xffffffff;
      local_30 = 7;
      local_34 = 0;
      local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
      FUN_0040f7a0(&DAT_0071daec,1);
      local_8 = 1;
      uVar4 = FUN_004517d0(local_8c,local_44,local_f0,uVar3);
      local_8._0_1_ = 2;
      uVar4 = FUN_00451800(local_74,uVar4,&DAT_0071dae8);
      local_8._0_1_ = 3;
      uVar4 = FUN_004517d0(local_5c,uVar4,piVar7 + 2);
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_004da1a0(local_f8,0,uVar4,DAT_0076b7ca);
      if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_5c[0]);
      }
      local_48 = 7;
      local_4c = 0;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
      if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_74[0]);
      }
      local_60 = 7;
      local_64 = 0;
      local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
      if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_8c[0]);
      }
      local_78 = 7;
      local_7c = 0;
      local_8c[0] = (void *)((uint)local_8c[0] & 0xffff0000);
      local_8 = 0xffffffff;
      if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)piVar5[2]);
  }
  piVar7 = *(int **)*piVar5;
  if (piVar7 != (int *)*piVar5) {
    local_f4 = param_5 + 8;
    do {
      local_8 = 0xffffffff;
      local_18 = 7;
      local_1c = 0;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
      FUN_0040f7a0(&DAT_0071daf0,1);
      local_8 = 5;
      uVar4 = FUN_004517d0(local_ec,local_2c,local_f0);
      local_8._0_1_ = 6;
      uVar4 = FUN_00451800(local_d4,uVar4,&DAT_0071dae8);
      local_8._0_1_ = 7;
      uVar4 = FUN_004517d0(local_bc,uVar4,piVar7 + 4);
      local_8 = CONCAT31(local_8._1_3_,8);
      piVar6 = (int *)FUN_004689a0(uVar4);
      if (piVar6 != piVar7 + 10) {
        FUN_0040f680(piVar7 + 10,0,0xffffffff);
      }
      if (7 < local_a8) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_bc[0]);
      }
      local_a8 = 7;
      local_ac = 0;
      local_bc[0] = (void *)((uint)local_bc[0] & 0xffff0000);
      if (7 < local_c0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_d4[0]);
      }
      local_c0 = 7;
      local_c4 = 0;
      local_d4[0] = (void *)((uint)local_d4[0] & 0xffff0000);
      if (7 < local_d8) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_ec[0]);
      }
      local_d8 = 7;
      local_dc = 0;
      local_ec[0] = (void *)((uint)local_ec[0] & 0xffff0000);
      local_8 = 0xffffffff;
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      if (*(char *)((int)piVar7 + 0xd) == '\0') {
        piVar6 = (int *)piVar7[2];
        if (*(char *)((int)piVar6 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar6 + 0xd);
          piVar7 = piVar6;
          piVar6 = (int *)*piVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar6 + 0xd);
            piVar7 = piVar6;
            piVar6 = (int *)*piVar6;
          }
        }
        else {
          cVar1 = *(char *)(piVar7[1] + 0xd);
          piVar2 = (int *)piVar7[1];
          piVar6 = piVar7;
          while ((piVar7 = piVar2, cVar1 == '\0' && (piVar6 == (int *)piVar7[2]))) {
            cVar1 = *(char *)(piVar7[1] + 0xd);
            piVar2 = (int *)piVar7[1];
            piVar6 = piVar7;
          }
        }
      }
    } while (piVar7 != (int *)*piVar5);
  }
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00595010 @ 00595010  kind=gamemisc  attributed-by=none  size=882 */

void FUN_00595010(undefined4 param_1,undefined1 *param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined1 local_f8 [4];
  int local_f4;
  undefined4 local_f0;
  void *local_ec [4];
  undefined4 local_dc;
  uint local_d8;
  void *local_d4 [4];
  undefined4 local_c4;
  uint local_c0;
  void *local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  void *local_a4 [4];
  undefined4 local_94;
  uint local_90;
  void *local_8c [4];
  undefined4 local_7c;
  uint local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f1b87;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_f0 = param_1;
  local_14 = uVar3;
  uVar4 = FUN_0059fbf0(local_a4,*param_2,param_2[1]);
  local_8 = 0;
  piVar5 = (int *)FUN_005a02d0(uVar4);
  local_8 = 0xffffffff;
  if (7 < local_90) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_a4[0]);
  }
  local_90 = 7;
  local_94 = 0;
  local_a4[0] = (void *)((uint)local_a4[0] & 0xffff0000);
  piVar7 = *(int **)piVar5[2];
  if (piVar7 != (int *)piVar5[2]) {
    do {
      local_8 = 0xffffffff;
      local_30 = 7;
      local_34 = 0;
      local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
      FUN_0040f7a0(&DAT_0071daec,1);
      local_8 = 1;
      uVar4 = FUN_004517d0(local_8c,local_44,local_f0,uVar3);
      local_8._0_1_ = 2;
      uVar4 = FUN_00451800(local_74,uVar4,&DAT_0071dae8);
      local_8._0_1_ = 3;
      uVar4 = FUN_004517d0(local_5c,uVar4,piVar7 + 2);
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_004da1a0(local_f8,0,uVar4,DAT_0076b7ca);
      if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_5c[0]);
      }
      local_48 = 7;
      local_4c = 0;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
      if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_74[0]);
      }
      local_60 = 7;
      local_64 = 0;
      local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
      if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_8c[0]);
      }
      local_78 = 7;
      local_7c = 0;
      local_8c[0] = (void *)((uint)local_8c[0] & 0xffff0000);
      local_8 = 0xffffffff;
      if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)piVar5[2]);
  }
  piVar7 = *(int **)*piVar5;
  if (piVar7 != (int *)*piVar5) {
    local_f4 = param_3 + 8;
    do {
      local_8 = 0xffffffff;
      local_18 = 7;
      local_1c = 0;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
      FUN_0040f7a0(&DAT_0071daf0,1);
      local_8 = 5;
      uVar4 = FUN_004517d0(local_ec,local_2c,local_f0);
      local_8._0_1_ = 6;
      uVar4 = FUN_00451800(local_d4,uVar4,&DAT_0071dae8);
      local_8._0_1_ = 7;
      uVar4 = FUN_004517d0(local_bc,uVar4,piVar7 + 4);
      local_8 = CONCAT31(local_8._1_3_,8);
      piVar6 = (int *)FUN_004689a0(uVar4);
      if (piVar6 != piVar7 + 10) {
        FUN_0040f680(piVar7 + 10,0,0xffffffff);
      }
      if (7 < local_a8) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_bc[0]);
      }
      local_a8 = 7;
      local_ac = 0;
      local_bc[0] = (void *)((uint)local_bc[0] & 0xffff0000);
      if (7 < local_c0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_d4[0]);
      }
      local_c0 = 7;
      local_c4 = 0;
      local_d4[0] = (void *)((uint)local_d4[0] & 0xffff0000);
      if (7 < local_d8) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_ec[0]);
      }
      local_d8 = 7;
      local_dc = 0;
      local_ec[0] = (void *)((uint)local_ec[0] & 0xffff0000);
      local_8 = 0xffffffff;
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      if (*(char *)((int)piVar7 + 0xd) == '\0') {
        piVar6 = (int *)piVar7[2];
        if (*(char *)((int)piVar6 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar6 + 0xd);
          piVar7 = piVar6;
          piVar6 = (int *)*piVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar6 + 0xd);
            piVar7 = piVar6;
            piVar6 = (int *)*piVar6;
          }
        }
        else {
          cVar1 = *(char *)(piVar7[1] + 0xd);
          piVar2 = (int *)piVar7[1];
          piVar6 = piVar7;
          while ((piVar7 = piVar2, cVar1 == '\0' && (piVar6 == (int *)piVar7[2]))) {
            cVar1 = *(char *)(piVar7[1] + 0xd);
            piVar2 = (int *)piVar7[1];
            piVar6 = piVar7;
          }
        }
      }
    } while (piVar7 != (int *)*piVar5);
  }
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005953a0 @ 005953a0  kind=gamemisc  attributed-by=none  size=1012 */

void FUN_005953a0(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  void **ppvVar7;
  int *piVar8;
  undefined1 local_c0 [4];
  int local_bc;
  int local_b4;
  undefined4 local_b0;
  int *local_ac;
  undefined4 local_a8;
  void *local_a4 [4];
  undefined4 local_94;
  uint local_90;
  void *local_8c [4];
  undefined4 local_7c;
  uint local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f1c0e;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_a8 = param_1;
  local_b4 = param_2;
  local_14 = uVar3;
  uVar4 = FUN_005a5240(local_a4,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c));
  local_8 = 0;
  piVar5 = (int *)FUN_005a02d0(uVar4);
  local_8 = 0xffffffff;
  local_ac = piVar5;
  if (7 < local_90) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_a4[0]);
  }
  local_90 = 7;
  local_94 = 0;
  local_a4[0] = (void *)((uint)local_a4[0] & 0xffff0000);
  piVar8 = *(int **)piVar5[2];
  if (piVar8 != (int *)piVar5[2]) {
    do {
      local_8 = 0xffffffff;
      local_30 = 7;
      local_34 = 0;
      local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
      FUN_0040f7a0(&DAT_0071daec,1);
      local_8 = 1;
      uVar4 = FUN_004517d0(local_2c,local_44,local_a8,uVar3);
      local_8._0_1_ = 2;
      uVar4 = FUN_00451800(local_74,uVar4,&DAT_0071dae8);
      local_8._0_1_ = 3;
      uVar4 = FUN_004517d0(local_5c,uVar4,piVar8 + 2);
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_004da1a0(local_c0,0,uVar4,DAT_0076b7ca);
      if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_5c[0]);
      }
      local_48 = 7;
      local_4c = 0;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
      if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_74[0]);
      }
      local_60 = 7;
      local_64 = 0;
      local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      local_18 = 7;
      local_1c = 0;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
      local_8 = 0xffffffff;
      if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
      piVar8 = (int *)*piVar8;
    } while (piVar8 != (int *)piVar5[2]);
  }
  piVar8 = *(int **)*piVar5;
  if (piVar8 != (int *)*piVar5) {
    local_bc = param_3 + 8;
    local_b0 = 0x40;
    do {
      local_8 = 0xffffffff;
      local_8c[0] = (void *)((uint)local_8c[0] & 0xffff0000);
      local_78 = 7;
      local_7c = 0;
      FUN_0040f680(piVar8 + 10,0,0xffffffff);
      local_8._0_1_ = 5;
      local_8._1_3_ = 0;
      iVar6 = FUN_004d9950(&local_b0,0,1);
      if (iVar6 != -1) {
        uVar4 = FUN_005a0ed0(local_2c,*(undefined4 *)(local_b4 + 0x20),0xffffffff);
        local_8._0_1_ = 6;
        FUN_00486d00(iVar6,1,uVar4,0,0xffffffff);
        local_8._0_1_ = 5;
        if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_2c[0]);
        }
      }
      local_30 = 7;
      local_34 = 0;
      local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
      FUN_0040f7a0(&DAT_0071daf0,1);
      local_8._0_1_ = 7;
      uVar4 = FUN_004517d0(local_5c,local_44,local_a8);
      local_8._0_1_ = 8;
      uVar4 = FUN_00451800(local_74,uVar4,&DAT_0071dae8);
      local_8._0_1_ = 9;
      uVar4 = FUN_004517d0(local_2c,uVar4,piVar8 + 4);
      local_8 = CONCAT31(local_8._1_3_,10);
      ppvVar7 = (void **)FUN_004689a0(uVar4);
      if (ppvVar7 != local_8c) {
        FUN_0040f680(local_8c,0,0xffffffff);
      }
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      local_18 = 7;
      local_1c = 0;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
      if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_74[0]);
      }
      local_60 = 7;
      local_64 = 0;
      local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
      if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_5c[0]);
      }
      local_48 = 7;
      local_4c = 0;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
      if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
      local_8 = 0xffffffff;
      if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_8c[0]);
      }
      if (*(char *)((int)piVar8 + 0xd) == '\0') {
        piVar5 = (int *)piVar8[2];
        if (*(char *)((int)piVar5 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar5 + 0xd);
          piVar8 = piVar5;
          piVar5 = (int *)*piVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar5 + 0xd);
            piVar8 = piVar5;
            piVar5 = (int *)*piVar5;
          }
        }
        else {
          cVar1 = *(char *)(piVar8[1] + 0xd);
          piVar2 = (int *)piVar8[1];
          piVar5 = piVar8;
          while ((piVar8 = piVar2, cVar1 == '\0' && (piVar5 == (int *)piVar8[2]))) {
            cVar1 = *(char *)(piVar8[1] + 0xd);
            piVar2 = (int *)piVar8[1];
            piVar5 = piVar8;
          }
        }
      }
    } while (piVar8 != (int *)*local_ac);
  }
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00598840 @ 00598840  kind=gamemisc  attributed-by=none  size=82 */

undefined4 FUN_00598840(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 *puVar6;
  
  puVar2 = *(undefined4 **)(in_ECX + 0x800154);
  cVar1 = *(char *)((int)puVar2[1] + 0xd);
  puVar4 = puVar2;
  puVar6 = (undefined4 *)puVar2[1];
  while (cVar1 == '\0') {
    if ((int)puVar6[4] < (int)param_1) {
      puVar5 = (undefined4 *)puVar6[2];
      puVar6 = puVar4;
    }
    else {
      puVar5 = (undefined4 *)*puVar6;
    }
    puVar4 = puVar6;
    puVar6 = puVar5;
    cVar1 = *(char *)((int)puVar5 + 0xd);
  }
  if ((puVar4 == puVar2) || (bVar3 = (int)param_1 < (int)puVar4[4], param_1 = puVar4, bVar3)) {
    param_1 = puVar2;
  }
  if (param_1 != puVar2) {
    return param_1[5];
  }
  return 0;
}


/* FUN_0059c490 @ 0059c490  kind=gamemisc  attributed-by=none  size=189 */

undefined4 * FUN_0059c490(undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_005947e0(piVar2[1]);
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
    FUN_0059c550(local_8,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return param_1;
}


/* FUN_0059c550 @ 0059c550  kind=gamemisc  attributed-by=none  size=647 */

/* WARNING: Removing unreachable block (ram,0x0059c61d) */
/* WARNING: Removing unreachable block (ram,0x0059c62d) */
/* WARNING: Removing unreachable block (ram,0x0059c636) */
/* WARNING: Removing unreachable block (ram,0x0059c639) */
/* WARNING: Removing unreachable block (ram,0x0059c629) */
/* WARNING: Removing unreachable block (ram,0x0059c647) */
/* WARNING: Removing unreachable block (ram,0x0059c656) */
/* WARNING: Removing unreachable block (ram,0x0059c661) */
/* WARNING: Removing unreachable block (ram,0x0059c65d) */
/* WARNING: Removing unreachable block (ram,0x0059c651) */
/* WARNING: Removing unreachable block (ram,0x0059c664) */

void FUN_0059c550(undefined4 param_1,int *param_2)

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
              goto LAB_0059c7ae;
            }
LAB_0059c750:
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
            goto LAB_0059c750;
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
            goto LAB_0059c7ae;
          }
        }
        piVar5 = (int *)piVar3[1];
        piVar6 = piVar3;
      } while (piVar3 != *(int **)(*in_ECX + 4));
    }
    *(undefined1 *)(piVar6 + 3) = 1;
  }
LAB_0059c7ae:
  if (7 < (uint)param_2[0xb]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_2[6]);
  }
  param_2[0xb] = 7;
  param_2[10] = 0;
  *(undefined2 *)(param_2 + 6) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_2);
}


/* FUN_0059fbf0 @ 0059fbf0  kind=gamemisc  attributed-by=none  size=156 */

undefined2 * FUN_0059fbf0(undefined2 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_10 = param_2;
  local_c = param_3;
  iVar3 = FUN_00594890(&local_10);
  iVar1 = *(int *)(in_ECX + 0x800134);
  iVar2 = iVar1;
  if (((iVar3 != iVar1) && (*(int *)(iVar3 + 0x10) <= param_2)) &&
     ((*(int *)(iVar3 + 0x10) < param_2 || (*(int *)(iVar3 + 0x14) <= param_3)))) {
    iVar2 = iVar3;
  }
  param_2 = iVar2;
  if (param_2 != iVar1) {
    *(undefined4 *)(param_1 + 10) = 7;
    *(undefined4 *)(param_1 + 8) = 0;
    *param_1 = 0;
    FUN_0040f680(param_2 + 0x18,0,0xffffffff);
    return param_1;
  }
  FUN_0040eb60(&PTR_006fccac);
  return param_1;
}


/* FUN_0059ff60 @ 0059ff60  kind=gamemisc  attributed-by=none  size=639 */

undefined4 FUN_0059ff60(undefined4 param_1,undefined4 param_2)

{
  switch(param_2) {
  case 1:
    FUN_0040eb60(L"MaterialIron");
    return param_1;
  case 2:
    FUN_0040eb60(L"MaterialWood");
    return param_1;
  default:
    FUN_0040eb60(L"Material");
    return param_1;
  case 5:
    FUN_0040eb60(L"MaterialObsidian");
    return param_1;
  case 7:
    FUN_0040eb60(L"MaterialBone");
    return param_1;
  case 10:
    FUN_0040eb60(L"MaterialCopper");
    return param_1;
  case 0xb:
    FUN_0040eb60(L"MaterialGold");
    return param_1;
  case 0xc:
    FUN_0040eb60(L"MaterialSilver");
    return param_1;
  case 0xd:
    FUN_0040eb60(L"MaterialEmerald");
    return param_1;
  case 0xe:
    FUN_0040eb60(L"MaterialSapphire");
    return param_1;
  case 0xf:
    FUN_0040eb60(L"MaterialRuby");
    return param_1;
  case 0x10:
    FUN_0040eb60(L"MaterialDiamond");
    return param_1;
  case 0x11:
    FUN_0040eb60(L"MaterialSandstone");
    return param_1;
  case 0x12:
    FUN_0040eb60(L"MaterialSaurian");
    return param_1;
  case 0x13:
    FUN_0040eb60(L"MaterialParrot");
    return param_1;
  case 0x14:
    FUN_0040eb60(L"MaterialMammoth");
    return param_1;
  case 0x15:
    FUN_0040eb60(L"MaterialPlant");
    return param_1;
  case 0x16:
  case 0x82:
    FUN_0040eb60(L"MaterialIce");
    return param_1;
  case 0x17:
    FUN_0040eb60(L"MaterialLight");
    return param_1;
  case 0x18:
    FUN_0040eb60(L"MaterialGlass");
    return param_1;
  case 0x19:
    FUN_0040eb60(L"MaterialSilk");
    return param_1;
  case 0x1a:
    FUN_0040eb60(L"MaterialLinen");
    return param_1;
  case 0x1b:
    FUN_0040eb60(L"MaterialCotton");
    return param_1;
  case 0x80:
    FUN_0040eb60(L"MaterialFire");
    return param_1;
  case 0x81:
    FUN_0040eb60(L"MaterialUnholy");
    return param_1;
  case 0x83:
    FUN_0040eb60(L"MaterialWind");
    return param_1;
  }
}


/* FUN_005a02d0 @ 005a02d0  kind=gamemisc  attributed-by=none  size=251 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_005a02d0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f20c8;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = (int *)(in_ECX + 4);
  iVar3 = FUN_004e3790(param_1);
  if (iVar3 != *piVar1) {
    piVar4 = (int *)(iVar3 + 0x10);
    if (7 < *(uint *)(iVar3 + 0x24)) {
      piVar4 = (int *)*piVar4;
    }
    iVar5 = FUN_00428db0(0,*(undefined4 *)(param_1 + 0x10),piVar4,*(undefined4 *)(iVar3 + 0x20));
    param_1 = iVar3;
    if (-1 < iVar5) goto LAB_005a0333;
  }
  param_1 = *piVar1;
LAB_005a0333:
  if ((DAT_0076b804 & 1) == 0) {
    DAT_0076b804 = DAT_0076b804 | 1;
    local_8 = 0;
    _DAT_0076b7f4 = 0;
    _DAT_0076b7f8 = 0;
    _DAT_0076b7f4 = FUN_00630a10(uVar2);
    local_8 = CONCAT31(local_8._1_3_,1);
    DAT_0076b7fc = 0;
    _DAT_0076b800 = 0;
    DAT_0076b7fc = FUN_00439600(0,0);
    _atexit(FUN_006fb5f0);
  }
  puVar6 = &DAT_0076b7f4;
  if (param_1 != *piVar1) {
    puVar6 = (undefined *)(param_1 + 0x28);
  }
  ExceptionList = local_10;
  return puVar6;
}


/* FUN_005a0970 @ 005a0970  kind=gamemisc  attributed-by=none  size=617 */

void FUN_005a0970(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_3c;
  int *local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_3c = param_1;
  local_4c = *(undefined4 *)(param_1 + 8);
  puVar9 = (undefined4 *)(param_1 + 8);
  local_48 = *(undefined4 *)(param_1 + 0xc);
  local_54 = *(undefined4 *)(param_2 + 8);
  local_50 = *(undefined4 *)(param_2 + 0xc);
  puVar4 = (undefined4 *)FUN_00468ad0(puVar9);
  local_44 = *puVar4;
  local_38 = (int *)(param_3 + 0x50);
  iVar7 = *local_38;
  iVar5 = FUN_00451d00(iVar7,*(undefined4 *)(iVar7 + 4),&local_54);
  if (local_38[1] != 0x7fffffe) {
    local_38[1] = local_38[1] + 1;
    *(int *)(iVar7 + 4) = iVar5;
    **(int **)(iVar5 + 4) = iVar5;
    piVar8 = (int *)**(int **)(local_34 + 4);
    iVar7 = local_34;
    if (piVar8 != *(int **)(local_34 + 4)) {
      do {
        iVar5 = piVar8[6];
        if ((((iVar5 != 0) && (iVar5 != local_3c)) && (iVar5 != param_2)) &&
           (cVar3 = FUN_00596ca0(iVar5,local_3c), iVar7 = local_34, cVar3 != '\0')) {
          iVar5 = piVar8[6];
          local_20._0_4_ = (uint)*(undefined8 *)(iVar5 + 0x10);
          local_20._4_4_ = (int)((ulonglong)*(undefined8 *)(iVar5 + 0x10) >> 0x20);
          local_20 = CONCAT44((local_20._4_4_ - *(int *)(param_2 + 0x14)) -
                              (uint)((uint)local_20 < *(uint *)(param_2 + 0x10)),
                              (uint)local_20 - *(uint *)(param_2 + 0x10));
          local_18._0_4_ = (uint)*(undefined8 *)(iVar5 + 0x18);
          local_18._4_4_ = (int)((ulonglong)*(undefined8 *)(iVar5 + 0x18) >> 0x20);
          local_18 = CONCAT44((local_18._4_4_ - *(int *)(param_2 + 0x1c)) -
                              (uint)((uint)local_18 < *(uint *)(param_2 + 0x18)),
                              (uint)local_18 - *(uint *)(param_2 + 0x18));
          local_10._0_4_ = (uint)*(undefined8 *)(iVar5 + 0x20);
          local_10._4_4_ = (int)((ulonglong)*(undefined8 *)(iVar5 + 0x20) >> 0x20);
          local_10 = CONCAT44((local_10._4_4_ - *(int *)(param_2 + 0x24)) -
                              (uint)((uint)local_10 < *(uint *)(param_2 + 0x20)),
                              (uint)local_10 - *(uint *)(param_2 + 0x20));
          local_2c = (float)local_20 * 1.5258789e-05;
          local_30 = (float)local_10;
          local_28 = (float)local_18 * 1.5258789e-05;
          local_24 = local_30 * 1.5258789e-05;
          if ((local_28 * local_28 + local_2c * local_2c + local_24 * local_24 < 64.0) &&
             (pfVar6 = (float *)FUN_00468ad0(puVar9), iVar7 = local_34, *pfVar6 == 0.0)) {
            puVar4 = (undefined4 *)FUN_00468ad0(puVar9);
            *puVar4 = 0x3f000000;
            local_64 = *puVar9;
            local_60 = *(undefined4 *)(param_1 + 0xc);
            local_6c = *(undefined4 *)(piVar8[6] + 8);
            local_68 = *(undefined4 *)(piVar8[6] + 0xc);
            puVar4 = (undefined4 *)FUN_00468ad0(puVar9);
            local_5c = *puVar4;
            FUN_00486150(&local_6c);
            iVar7 = local_34;
          }
        }
        if (*(char *)((int)piVar8 + 0xd) == '\0') {
          piVar1 = (int *)piVar8[2];
          if (*(char *)((int)piVar1 + 0xd) == '\0') {
            cVar3 = *(char *)(*piVar1 + 0xd);
            piVar8 = piVar1;
            piVar1 = (int *)*piVar1;
            while (cVar3 == '\0') {
              cVar3 = *(char *)(*piVar1 + 0xd);
              piVar8 = piVar1;
              piVar1 = (int *)*piVar1;
            }
          }
          else {
            cVar3 = *(char *)(piVar8[1] + 0xd);
            piVar2 = (int *)piVar8[1];
            piVar1 = piVar8;
            while ((piVar8 = piVar2, cVar3 == '\0' && (piVar1 == (int *)piVar8[2]))) {
              cVar3 = *(char *)(piVar8[1] + 0xd);
              piVar2 = (int *)piVar8[1];
              piVar1 = piVar8;
            }
          }
        }
      } while (piVar8 != *(int **)(iVar7 + 4));
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_005a5240 @ 005a5240  kind=gamemisc  attributed-by=none  size=156 */

undefined2 * FUN_005a5240(undefined2 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_10 = param_2;
  local_c = param_3;
  iVar3 = FUN_00594890(&local_10);
  iVar1 = *(int *)(in_ECX + 0x800124);
  iVar2 = iVar1;
  if (((iVar3 != iVar1) && (*(int *)(iVar3 + 0x10) <= param_2)) &&
     ((*(int *)(iVar3 + 0x10) < param_2 || (*(int *)(iVar3 + 0x14) <= param_3)))) {
    iVar2 = iVar3;
  }
  param_2 = iVar2;
  if (param_2 != iVar1) {
    *(undefined4 *)(param_1 + 10) = 7;
    *(undefined4 *)(param_1 + 8) = 0;
    *param_1 = 0;
    FUN_0040f680(param_2 + 0x18,0,0xffffffff);
    return param_1;
  }
  FUN_0040eb60(&PTR_006fccac);
  return param_1;
}


/* FUN_005a6a00 @ 005a6a00  kind=gamemisc  attributed-by=none  size=104 */

void FUN_005a6a00(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  return;
}


/* FUN_005a7990 @ 005a7990  kind=gamemisc  attributed-by=none  size=143 */

void FUN_005a7990(int *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f3500;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  cVar2 = FUN_0065ae10(param_1[1] - *param_1 >> 2);
  if (cVar2 != '\0') {
    local_8 = 0;
    uVar3 = FUN_0065a860(*piVar1,piVar1[1],*in_ECX,(int)&param_1 + 3,param_1);
    in_ECX[1] = uVar3;
  }
  ExceptionList = local_10;
  return;
}


/* FUN_005a7c90 @ 005a7c90  kind=gamemisc  attributed-by=none  size=445 */

void FUN_005a7c90(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_34;
  int local_2c [10];
  
  local_2c[9] = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  FUN_0042f040(local_2c,param_1 + 0x1428);
  FUN_0042f040(local_2c + 3,param_1 + 0x1440);
  puVar2 = *(undefined4 **)(param_1 + 0x1460);
  piVar1 = (int *)(param_1 + 0x1460);
  pvVar3 = (void *)*puVar2;
  *puVar2 = puVar2;
  *(int *)(*piVar1 + 4) = *piVar1;
  *(undefined4 *)(param_1 + 0x1464) = 0;
  if (pvVar3 != (void *)*piVar1) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar3);
  }
  local_2c[7] = local_2c[4];
  iVar5 = local_2c[3];
  iVar7 = local_2c[5];
  if (*(int *)(param_1 + 0x1408) != *(int *)(param_1 + 0x140c)) {
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x1408) + 0x10);
    local_2c[7] = puVar2[1];
    iVar5 = *puVar2;
    iVar7 = puVar2[2];
  }
  local_34 = local_2c[7];
  iVar6 = *(int *)*piVar1;
  local_2c[8] = iVar7;
  local_2c[6] = iVar5;
  iVar4 = FUN_005a6b60(iVar6,*(undefined4 *)(iVar6 + 4),local_2c + 6);
  if (*(int *)(param_1 + 0x1464) == 0xccccccb) {
LAB_005a7d65:
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(param_1 + 0x1464) = *(int *)(param_1 + 0x1464) + 1;
  *(int *)(iVar6 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  iVar6 = 0;
  do {
    iVar4 = 0;
    while (*(int *)((int)local_2c + iVar4 + 0x18) == *(int *)((int)local_2c + iVar4)) {
      iVar4 = iVar4 + 4;
      if (0xb < iVar4) goto LAB_005a7d95;
    }
    if (*(int *)(param_1 + 0x1410) < iVar6) {
LAB_005a7d95:
      __security_check_cookie(local_2c[9] ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar6 = iVar6 + 1;
    iVar5 = FUN_005a9da0(iVar5,local_34,iVar7);
    if (iVar5 == 0) goto LAB_005a7d95;
    iVar7 = *(undefined4 *)(iVar5 + 0x14);
    local_2c[3] = *(undefined4 *)(iVar5 + 0xc);
    local_2c[4] = *(undefined4 *)(iVar5 + 0x10);
    local_2c[5] = iVar7;
    iVar4 = 0;
    while (*(int *)((int)local_2c + iVar4 + 0x18) == *(int *)((int)local_2c + iVar4 + 0xc)) {
      iVar4 = iVar4 + 4;
      if (0xb < iVar4) {
        __security_check_cookie(local_2c[9] ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    iVar4 = *(int *)*piVar1;
    local_2c[8] = iVar7;
    local_2c[6] = *(undefined4 *)(iVar5 + 0xc);
    local_2c[7] = *(undefined4 *)(iVar5 + 0x10);
    iVar5 = FUN_005a6b60(iVar4,*(undefined4 *)(iVar4 + 4),local_2c + 3);
    if (*(int *)(param_1 + 0x1464) == 0xccccccb) goto LAB_005a7d65;
    *(int *)(param_1 + 0x1464) = *(int *)(param_1 + 0x1464) + 1;
    *(int *)(iVar4 + 4) = iVar5;
    **(int **)(iVar5 + 4) = iVar5;
    local_34 = local_2c[7];
    iVar5 = local_2c[6];
  } while( true );
}


/* FUN_005c3790 @ 005c3790  kind=gamemisc  attributed-by=none  size=60 */

undefined4 * FUN_005c3790(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
    }
    param_1 = param_1 + 3;
    param_3 = param_3 + 3;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_005c3ea0 @ 005c3ea0  kind=gamemisc  attributed-by=none  size=76 */

void FUN_005c3ea0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *in_ECX;
  
  iVar2 = *in_ECX;
  if (*(char *)(iVar2 + 0xd) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0xd) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0xd);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0xd);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *in_ECX = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0xd);
    while ((cVar1 == '\0' && (*in_ECX == *(int *)(iVar2 + 8)))) {
      *in_ECX = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0xd);
    }
    *in_ECX = iVar2;
  }
  return;
}


/* FUN_005fb9f0 @ 005fb9f0  kind=gamemisc  attributed-by=none  size=175 */

void FUN_005fb9f0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = param_1[0xd];
  in_ECX[0xe] = param_1[0xe];
  in_ECX[0xf] = param_1[0xf];
  *(undefined1 *)(in_ECX + 0x10) = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)((int)in_ECX + 0x41) = *(undefined1 *)((int)param_1 + 0x41);
  in_ECX[0x11] = param_1[0x11];
  in_ECX[0x12] = param_1[0x12];
  in_ECX[0x13] = param_1[0x13];
  in_ECX[0x14] = param_1[0x14];
  in_ECX[0x15] = param_1[0x15];
  in_ECX[0x16] = param_1[0x16];
  *(undefined1 *)(in_ECX + 0x17) = *(undefined1 *)(param_1 + 0x17);
  in_ECX[0x18] = param_1[0x18];
  in_ECX[0x19] = param_1[0x19];
  return;
}


/* FUN_005fbed0 @ 005fbed0  kind=gamemisc  attributed-by=none  size=494 */

void FUN_005fbed0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_1c;
  int local_14;
  int local_8;
  
  local_8 = -param_1;
  local_14 = 0;
  piVar5 = (int *)(in_ECX + 0xb0);
  do {
    local_1c = 0;
    iVar2 = -param_2;
    do {
      if (*piVar5 != 0) {
        iVar6 = 0;
        piVar8 = (int *)(*piVar5 + 8);
        do {
          iVar7 = 0;
          do {
            if (((*piVar8 != 0) &&
                (uVar3 = local_8 + iVar6 >> 0x1f, 10 < (int)((local_8 + iVar6 ^ uVar3) - uVar3))) ||
               (uVar3 = iVar2 + iVar7 >> 0x1f, 10 < (int)((iVar2 + iVar7 ^ uVar3) - uVar3))) {
              FUN_006022d0(local_14 + iVar6,local_1c + iVar7);
            }
            iVar7 = iVar7 + 1;
            piVar8 = piVar8 + 0xd;
          } while (iVar7 < 0x40);
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x40);
      }
      local_1c = local_1c + 0x40;
      piVar5 = piVar5 + 1;
      iVar2 = iVar2 + 0x40;
    } while (local_1c < 0x10000);
    local_8 = local_8 + 0x40;
    local_14 = local_14 + 0x40;
  } while (local_14 < 0x10000);
  local_1c = 0;
  piVar5 = (int *)(&UNK_00400080.field_0x30 + in_ECX);
  do {
    iVar2 = 0;
    do {
      if (*piVar5 != 0) {
        uVar3 = local_1c - ((int)((param_1 >> 0x1f & 0x3fU) + param_1) >> 6);
        uVar4 = (int)uVar3 >> 0x1f;
        iVar6 = (uVar3 ^ uVar4) - uVar4;
        if ((8 < iVar6) ||
           (uVar3 = iVar2 - ((int)((param_2 >> 0x1f & 0x3fU) + param_2) >> 6),
           uVar4 = (int)uVar3 >> 0x1f, 8 < (int)((uVar3 ^ uVar4) - uVar4))) {
          FUN_00602160(local_1c,iVar2);
        }
        if ((((8 < iVar6) ||
             (uVar3 = iVar2 - ((int)((param_2 >> 0x1f & 0x3fU) + param_2) >> 6),
             uVar4 = (int)uVar3 >> 0x1f, 8 < (int)((uVar3 ^ uVar4) - uVar4))) &&
            ((-1 < local_1c && (((-1 < iVar2 && (local_1c < 0x400)) && (iVar2 < 0x400)))))) &&
           (puVar1 = (undefined4 *)*piVar5, puVar1 != (undefined4 *)0x0)) {
          FUN_006050b0(in_ECX,local_1c,iVar2);
          EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000c0));
          EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000d8));
          *piVar5 = 0;
          LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000d8));
          LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000c0));
          (**(code **)*puVar1)(1);
        }
      }
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar2 < 0x400);
    local_1c = local_1c + 1;
  } while (local_1c < 0x400);
  return;
}


/* FUN_00602160 @ 00602160  kind=gamemisc  attributed-by=none  size=357 */

void FUN_00602160(int param_1,int param_2)

{
  void *pvVar1;
  char cVar2;
  uint uVar3;
  int in_ECX;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int *local_34;
  void *local_30;
  undefined1 local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f4b60;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = uVar3;
  if ((((-1 < param_1) && (-1 < param_2)) && (param_1 < 0x400)) && (param_2 < 0x400)) {
    local_34 = (int *)(in_ECX + (param_1 * 0x400 + 0x2c + param_2) * 4);
    local_30 = (void *)*local_34;
    if (local_30 != (void *)0x0) {
      ExceptionList = &local_10;
      FUN_00605420();
      cVar2 = FUN_004497a0(uVar3);
      if (cVar2 != '\0') {
        local_44 = 0;
        local_40 = 0;
        local_3c = 0;
        local_38 = 0;
        local_8 = 0;
        FUN_0044e8d0(in_ECX + 0x8000bc,4);
        FUN_00403350("discovered");
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_004499c0(local_2c,&local_44);
        FUN_00403eb0();
        local_8 = 0xffffffff;
        FUN_005fb860();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000c0));
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000d8));
      *local_34 = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000d8));
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000c0));
      pvVar1 = local_30;
      _eh_vector_destructor_iterator_(local_30,0x34,0x1000,cube::ZoneTile::~ZoneTile);
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
  }
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_006022d0 @ 006022d0  kind=gamemisc  attributed-by=none  size=212 */

void FUN_006022d0(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  
  if ((((-1 < (int)param_1) && (-1 < (int)param_2)) && ((int)param_1 < 0x10000)) &&
     (((int)param_2 < 0x10000 &&
      (iVar2 = *(int *)(in_ECX + 0xb0 +
                       (((int)(((int)param_1 >> 0x1f & 0x3fU) + param_1) >> 6) * 0x400 +
                       ((int)(param_2 + ((int)param_2 >> 0x1f & 0x3fU)) >> 6)) * 4), iVar2 != 0))))
  {
    param_1 = param_1 & 0x8000003f;
    if ((int)param_1 < 0) {
      param_1 = (param_1 - 1 | 0xffffffc0) + 1;
    }
    param_2 = param_2 & 0x8000003f;
    if ((int)param_2 < 0) {
      param_2 = (param_2 - 1 | 0xffffffc0) + 1;
    }
    iVar2 = (param_1 * 0x40 + param_2) * 0x34 + iVar2;
    puVar1 = *(undefined4 **)(iVar2 + 8);
    if (puVar1 != (undefined4 *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000c0));
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000d8));
      *(undefined4 *)(iVar2 + 8) = 0;
      FUN_0046f870();
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000d8));
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000c0));
      (**(code **)*puVar1)(1);
    }
  }
  return;
}


/* FUN_006024d0 @ 006024d0  kind=gamemisc  attributed-by=none  size=3413 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006024d0(void *this,int param_2,int param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  float fVar3;
  char cVar4;
  basic_ostream<char,std::char_traits<char>_> *pbVar5;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  undefined2 *puVar11;
  void *pvVar12;
  int iVar13;
  uint uVar14;
  Sprite *pSVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  float10 fVar19;
  int iStack_180;
  basic_iostream<char,std::char_traits<char>_> local_17c;
  basic_streambuf<char,std::char_traits<char>_> local_164 [14];
  undefined4 local_12c;
  undefined4 local_128;
  basic_ios<char,std::char_traits<char>_> local_114 [6];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  Sprite *local_bc;
  uint local_b8;
  float local_b4;
  float local_b0;
  undefined4 *local_ac;
  uint local_a8;
  int local_a4;
  int local_a0;
  float local_9c;
  Sprite *local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  Sprite *local_84;
  int local_80;
  float local_7c;
  Sprite *local_78;
  undefined4 *local_74;
  Sprite *local_70;
  float local_6c;
  float local_68;
  Sprite *local_64;
  int local_60;
  void *local_5c;
  char local_55;
  undefined4 local_54;
  float local_50;
  float local_4c;
  undefined1 local_48 [12];
  void *local_3c;
  float local_38;
  Sprite *pSStack_34;
  int local_30;
  float local_2c;
  Sprite *pSStack_28;
  undefined8 local_24;
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f4c09;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_80 = 0;
  local_8c = param_2;
  local_90 = param_3;
  local_5c = this;
  if ((((*(int *)(*(int *)((int)this + 0xac) + 0xa4) != 0) && (-1 < param_2)) && (-1 < param_3)) &&
     ((param_2 < 0x400 && (param_3 < 0x400)))) {
    pSVar15 = (Sprite *)(param_2 * 0x400 + param_3);
    local_74 = *(undefined4 **)((int)this + (int)pSVar15 * 4 + 0x4000b0);
    local_64 = pSVar15;
    if (local_74 == (undefined4 *)0x0) {
      local_17c.vbtablePtr =
           (basic_iostream<char,std::char_traits<char>_>_vbtable *)
           &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
            vbtable;
      local_17c.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
           (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
      std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
                (local_114);
      local_8 = 0;
      local_80 = 1;
      std::basic_iostream<char,std::char_traits<char>_>::
      basic_iostream<char,std::char_traits<char>_>
                (&local_17c,(basic_streambuf<char,std::char_traits<char>_> *)local_164);
      local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
      *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
       ((int)&local_17c.vbtablePtr +
       (local_17c.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
      *(int *)((int)&iStack_180 +
              (local_17c.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           (local_17c.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
      std::basic_streambuf<char,std::char_traits<char>_>::
      basic_streambuf<char,std::char_traits<char>_>(local_164);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
      local_164[0] = (basic_streambuf<char,std::char_traits<char>_>)
                     &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                      vftable;
      local_12c = 0;
      local_128 = 0;
      local_8 = 3;
      iVar17 = local_90;
      pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
               FUN_00449150(&local_17c.basic_ostream<char,std::char_traits<char>_>,&DAT_0071e03c,
                            param_2,&DAT_0071c760);
      pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,param_2);
      pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(pbVar6);
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,iVar17);
      local_cc = 0;
      local_c8 = 0;
      local_c4 = 0;
      local_c0 = 0;
      local_8._0_1_ = 4;
      uVar7 = FUN_0040e140(local_48);
      local_8._0_1_ = 5;
      cVar4 = FUN_004498d0(uVar7,&local_cc);
      local_8._0_1_ = 4;
      FUN_00403eb0();
      if (cVar4 != '\0') {
        FUN_0044d620(&local_70,4);
        local_74 = operator_new(0x34);
        if (local_74 == (undefined4 *)0x0) {
          local_74 = (undefined4 *)0x0;
        }
        else {
                    /* inlined constructor or destructor (approx location) for cube::LandscapeTile
                        */
          *local_74 = &cube::LandscapeTile::vftable;
          *(undefined1 *)(local_74 + 10) = 0;
          local_74[0xb] = 0;
          *(undefined1 *)(local_74 + 0xc) = 0;
        }
        *(undefined4 **)((int)this + (int)pSVar15 * 4 + 0x4000b0) = local_74;
        FUN_0044d620(local_74 + 8,8);
        FUN_0044d620(local_74 + 10,1);
        FUN_0044d620(&local_30,0xc);
        fVar3 = local_2c;
        if (((0 < local_30) && (0 < (int)local_2c)) &&
           ((0 < (int)pSStack_28 &&
            (FUN_0044d620(&local_80,4), iVar17 = local_80, pSVar15 = local_64, local_80 != 0)))) {
          FUN_005842d0(local_80);
          FUN_0044d620(local_54,iVar17);
          local_3c = (void *)0x0;
          local_38 = 0.0;
          pSStack_34 = (Sprite *)0x0;
          local_8._0_1_ = 7;
          FUN_00449540(&local_54,&local_3c);
          local_70 = operator_new(0x60);
          local_8._0_1_ = 8;
          if (local_70 == (Sprite *)0x0) {
            pSVar15 = (Sprite *)0x0;
          }
          else {
            pSVar15 = cube::Sprite::Sprite(local_70,*(undefined4 *)((int)this + 0xa4));
          }
          puVar2 = local_74;
          local_8._0_1_ = 7;
          local_74[0xb] = pSVar15;
          FUN_004e75c0(local_30,fVar3,pSStack_28);
          memcpy(*(void **)(puVar2[0xb] + 0x30),local_3c,(int)local_38 - (int)local_3c);
          FUN_004e7870();
          FUN_005fb860();
          FUN_005fb860();
          pSVar15 = local_64;
        }
        FUN_0044d620(local_74 + 1,0x1c);
      }
      FUN_005fb860();
      local_8 = 0xffffffff;
      FUN_00404420(&local_17c);
    }
    else if (*(char *)(local_74 + 0xc) == '\0') goto LAB_00603027;
    local_ac = (undefined4 *)FUN_0047faa0(local_8c,local_90);
    if (local_ac != (undefined4 *)0x0) {
      iVar17 = *(int *)((int)local_5c + (int)pSVar15 * 4 + 0xb0);
      pvVar12 = local_5c;
      if (iVar17 != 0) {
        local_84 = (Sprite *)((int)local_5c + 0x8000d8);
        EnterCriticalSection((LPCRITICAL_SECTION)local_84);
        pvVar12 = local_5c;
        local_88 = local_90 << 6;
        local_60 = local_8c << 6;
        local_68 = 0.0;
        local_80 = local_60;
        do {
          iVar16 = 0;
          do {
            puVar8 = (undefined8 *)FUN_004a6ad0(local_60,local_88 + iVar16);
            if (puVar8 != (undefined8 *)0x0) {
              iVar10 = ((int)local_68 + iVar16) * 0x34;
              *(undefined8 *)(iVar10 + 0x10 + iVar17) = *puVar8;
              *(undefined8 *)(iVar10 + 0x18 + iVar17) = puVar8[1];
            }
            iVar16 = iVar16 + 1;
          } while (iVar16 < 0x40);
          local_68 = (float)((int)local_68 + 0x40);
          local_60 = local_60 + 1;
        } while ((int)local_68 < 0x1000);
        local_94 = (int)(local_88 + (local_88 >> 0x1f & 7U)) >> 3;
        local_68 = 2.86986e-42;
        local_60 = (int)((local_80 >> 0x1f & 7U) + local_80) >> 3;
        do {
          iVar17 = 0;
          do {
            iVar16 = FUN_00487da0(local_60,local_94 + iVar17);
            if (iVar16 != 0) {
              FUN_005fb9f0(iVar16);
            }
            iVar17 = iVar17 + 1;
          } while (iVar17 < 8);
          local_68 = (float)((int)local_68 + 8);
          local_60 = local_60 + 1;
        } while ((int)local_68 < 0x840);
        LeaveCriticalSection((LPCRITICAL_SECTION)local_84);
      }
      iVar10 = local_8c;
      iVar16 = local_90;
      local_80 = local_8c + 1;
      local_88 = local_90 + -1;
      iVar17 = local_8c + -1;
      if (iVar17 <= local_80) {
        iVar18 = iVar17 * 0x400 + 0x10002f;
        do {
          iVar13 = local_88;
          if (local_88 <= local_90 + 1) {
            do {
              if ((((iVar17 < 0) || (iVar13 < 0)) || (0x20002e < iVar18)) ||
                 ((0x3ff < iVar13 ||
                  (*(int *)(*(int *)((int)pvVar12 + 0xac) + (iVar18 + iVar13) * 4) == 0))))
              goto LAB_00603027;
              iVar13 = iVar13 + 1;
            } while (iVar13 <= local_90 + 1);
          }
          iVar17 = iVar17 + 1;
          iVar18 = iVar18 + 0x400;
        } while (iVar17 <= local_80);
      }
      if (local_74 == (undefined4 *)0x0) {
        local_74 = operator_new(0x34);
        if (local_74 == (undefined4 *)0x0) {
          local_74 = (undefined4 *)0x0;
        }
        else {
          *local_74 = &cube::LandscapeTile::vftable;
          *(undefined1 *)(local_74 + 10) = 0;
          local_74[0xb] = 0;
          *(undefined1 *)(local_74 + 0xc) = 0;
        }
        *(undefined4 **)((int)local_5c + (int)local_64 * 4 + 0x4000b0) = local_74;
      }
      local_55 = '\x01';
      local_74[1] = *local_ac;
      local_74[2] = local_ac[1];
      *(undefined1 *)(local_74 + 3) = *(undefined1 *)(local_ac + 2);
      local_74[4] = local_ac[3];
      local_74[5] = local_ac[4];
      local_74[6] = local_ac[5];
      local_74[7] = local_ac[6];
      local_6c = (float)(iVar10 * 0x40 - 0x40);
      local_80 = (iVar10 + 2) * 0x40;
      local_68 = local_6c;
      if ((int)local_6c <= local_80) {
        pSVar15 = (Sprite *)(iVar16 * 0x40 + -0x40);
        local_98 = local_24._4_4_;
        local_9c = (float)local_24;
        local_78 = local_1c._4_4_;
        iVar17 = (iVar16 + 2) * 0x40;
        local_60 = (int)local_6c * 0x100;
        local_7c = (float)local_1c;
        local_bc = pSVar15;
        local_a0 = iVar17;
        do {
          local_64 = pSVar15;
          if ((int)pSVar15 <= iVar17) {
            iVar16 = (int)pSVar15 << 8;
            do {
              iVar17 = local_60;
              local_84 = (Sprite *)iVar16;
              FUN_005eefa0(&local_50,local_60,iVar16);
              uVar14 = (uint)((float)iVar17 + local_50);
              uVar9 = (uint)((float)iVar16 + local_4c);
              local_a8 = ((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10;
              local_94 = uVar9 << 0x10;
              local_b8 = ((int)uVar14 >> 0x1f) << 0x10 | uVar14 >> 0x10;
              local_a4 = uVar14 << 0x10;
              fVar19 = (float10)FUN_005eeee0(local_ac,local_a4,local_b8,local_94,local_a8);
              iVar17 = -1;
              local_b0 = (float)fVar19;
              do {
                iVar10 = -1;
                iVar16 = local_88;
                do {
                  if ((iVar17 != 0) || (iVar10 != 0)) {
                    iVar18 = local_8c + iVar17;
                    if (((iVar18 < 0) || (((iVar16 < 0 || (0x3ff < iVar18)) || (0x3ff < iVar16))))
                       || (iVar18 = *(int *)(*(int *)((int)local_5c + 0xac) + 0x4000bc +
                                            (iVar18 * 0x400 + iVar16) * 4), iVar18 == 0))
                    goto LAB_00602d2f;
                    fVar19 = (float10)FUN_005eeee0(iVar18,local_a4,local_b8,local_94,local_a8);
                    local_b4 = (float)fVar19;
                    if (local_b4 < (float)(int)local_b0) goto LAB_00602d2f;
                  }
                  iVar10 = iVar10 + 1;
                  iVar16 = iVar16 + 1;
                } while (iVar10 < 2);
                iVar17 = iVar17 + 1;
              } while (iVar17 < 2);
              if (local_55 == '\0') {
                if ((int)local_6c < (int)local_9c) {
                  local_9c = local_6c;
                }
                if ((int)local_64 < (int)local_98) {
                  local_98 = local_64;
                }
                if ((int)local_7c < (int)local_6c) {
                  local_7c = local_6c;
                }
                if ((int)local_78 < (int)local_64) {
                  local_78 = local_64;
                }
              }
              else {
                pSStack_28 = local_64;
                local_2c = local_6c;
                local_24 = CONCAT44(local_64,local_6c);
                local_98 = local_64;
                pSStack_34 = local_64;
                local_38 = local_6c;
                local_1c = CONCAT44(local_64,local_6c);
                local_9c = local_6c;
                local_78 = local_64;
                local_55 = '\0';
                local_7c = local_6c;
              }
LAB_00602d2f:
              local_64 = (Sprite *)((int)&local_64->vftablePtr + 1);
              iVar16 = (int)local_84 + 0x100;
              pSVar15 = local_bc;
              iVar17 = local_a0;
              local_84 = (Sprite *)iVar16;
            } while ((int)local_64 <= local_a0);
          }
          iVar16 = local_80;
          local_6c = (float)((int)local_6c + 1);
          local_60 = local_60 + 0x100;
        } while ((int)local_6c <= local_80);
        if (local_55 == '\0') {
          *(undefined1 *)(local_74 + 0xc) = 0;
          local_70 = operator_new(0x60);
          pvVar12 = local_5c;
          local_8 = 9;
          if (local_70 == (Sprite *)0x0) {
            pSVar15 = (Sprite *)0x0;
          }
          else {
            pSVar15 = cube::Sprite::Sprite(local_70,*(undefined4 *)((int)local_5c + 0xa4));
          }
          local_8 = 0xffffffff;
          local_64 = pSVar15;
          FUN_004e75c0(((int)local_7c - (int)local_9c) + 1,(int)local_78 + (1 - (int)local_98),1);
          if ((int)local_68 < iVar16) {
            local_78 = (Sprite *)((int)local_68 - (int)local_9c);
            local_60 = (int)local_68 << 8;
            iVar17 = local_a0;
            do {
              local_84 = local_bc;
              if ((int)local_bc < iVar17) {
                local_7c = (float)((int)local_bc - (int)local_98);
                iVar16 = (int)local_bc << 8;
                do {
                  iVar17 = local_60;
                  local_94 = iVar16;
                  FUN_005eefa0(&local_38,local_60,iVar16);
                  local_b8 = (uint)((float)iVar17 + local_38);
                  uVar9 = (uint)((float)iVar16 + (float)pSStack_34);
                  local_b0 = (float)(((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10);
                  local_b4 = (float)(uVar9 << 0x10);
                  uVar9 = ((int)local_b8 >> 0x1f) << 0x10 | local_b8 >> 0x10;
                  local_b8 = local_b8 << 0x10;
                  local_1c = CONCAT44(uVar9,(float)local_1c);
                  fVar19 = (float10)FUN_005eeee0(local_ac,local_b8,uVar9,local_b4,local_b0);
                  iVar17 = -1;
                  local_24 = CONCAT44((float)fVar19,(float)local_24);
                  do {
                    iVar10 = -1;
                    iVar16 = local_88;
                    do {
                      if (((((iVar17 != 0) || (iVar10 != 0)) &&
                           ((iVar18 = local_8c + iVar17, -1 < iVar18 &&
                            ((-1 < iVar16 && (iVar18 < 0x400)))))) && (iVar16 < 0x400)) &&
                         (iVar18 = *(int *)(*(int *)((int)local_5c + 0xac) + 0x4000bc +
                                           (iVar18 * 0x400 + iVar16) * 4), iVar18 != 0)) {
                        fVar19 = (float10)FUN_005eeee0(iVar18,local_b8,local_1c._4_4_,local_b4,
                                                       local_b0);
                        local_70 = (Sprite *)(float)fVar19;
                        if ((float)local_70 < (float)(int)(float)local_24._4_4_) goto LAB_00602f7e;
                      }
                      iVar10 = iVar10 + 1;
                      iVar16 = iVar16 + 1;
                    } while (iVar10 < 2);
                    iVar17 = iVar17 + 1;
                  } while (iVar17 < 2);
                  if (((((int)local_68 < 0) || ((int)local_84 < 0)) || (0xffffff < local_60)) ||
                     ((0xffff < (int)local_84 ||
                      (iVar17 = *(int *)((int)local_5c +
                                        (((int)(((int)local_68 >> 0x1f & 0x3fU) + (int)local_68) >>
                                         6) * 0x400 +
                                        ((int)((int)&local_84->vftablePtr +
                                              ((int)local_84 >> 0x1f & 0x3fU)) >> 6)) * 4 + 0xb0),
                      iVar17 == 0)))) {
LAB_006031c7:
                    local_6c = (float)CONCAT22(local_6c._2_2_,0xc8c8);
                    local_55 = -0x38;
                    if (((int)local_78 < 0) ||
                       (((((int)local_7c < 0 ||
                          (iVar17 = (local_64->Sprite_data).offset_0x40, iVar17 <= (int)local_78))
                         || ((int)(local_64->Sprite_data).offset_0x44 <= (int)local_7c)) ||
                        ((int)(local_64->Sprite_data).offset_0x48 < 1)))) {
                      _DAT_0076b340 = 0xc8c8;
                      DAT_0076b342 = 200;
                    }
                    else {
                      puVar11 = (undefined2 *)
                                ((int)((int)&local_78->vftablePtr + (int)local_7c * iVar17) * 3 +
                                (int)(local_64->Sprite_data).offset_0x2c);
                      *puVar11 = 0xc8c8;
                      *(undefined1 *)(puVar11 + 1) = 200;
                    }
                  }
                  else {
                    uVar9 = (uint)local_68 & 0x8000003f;
                    if ((int)uVar9 < 0) {
                      uVar9 = (uVar9 - 1 | 0xffffffc0) + 1;
                    }
                    uVar14 = (uint)local_84 & 0x8000003f;
                    if ((int)uVar14 < 0) {
                      uVar14 = (uVar14 - 1 | 0xffffffc0) + 1;
                    }
                    iVar17 = (uVar9 * 0x40 + uVar14) * 0x34 + iVar17;
                    if ((iVar17 == 0) || (bVar1 = *(byte *)(iVar17 + 0x30), bVar1 == 0))
                    goto LAB_006031c7;
                    if ((bVar1 & 1) == 0) {
                      local_a8 = CONCAT22(local_a8._2_2_,0xdcdc);
                      local_55 = -0x24;
                      if ((((int)local_78 < 0) || ((int)local_7c < 0)) ||
                         ((iVar17 = (local_64->Sprite_data).offset_0x40, iVar17 <= (int)local_78 ||
                          (((int)(local_64->Sprite_data).offset_0x44 <= (int)local_7c ||
                           ((int)(local_64->Sprite_data).offset_0x48 < 1)))))) {
                        _DAT_0076b340 = 0xdcdc;
                        DAT_0076b342 = 0xdc;
                      }
                      else {
                        puVar11 = (undefined2 *)
                                  ((int)((int)&local_78->vftablePtr + (int)local_7c * iVar17) * 3 +
                                  (int)(local_64->Sprite_data).offset_0x2c);
                        *puVar11 = 0xdcdc;
                        *(undefined1 *)(puVar11 + 1) = 0xdc;
                      }
                    }
                    else {
                      local_a4 = CONCAT22(local_a4._2_2_,0xffff);
                      local_55 = -1;
                      if (((((int)local_78 < 0) || ((int)local_7c < 0)) ||
                          (iVar17 = (local_64->Sprite_data).offset_0x40, iVar17 <= (int)local_78))
                         || (((int)(local_64->Sprite_data).offset_0x44 <= (int)local_7c ||
                             ((int)(local_64->Sprite_data).offset_0x48 < 1)))) {
                        _DAT_0076b340 = 0xffff;
                        DAT_0076b342 = 0xff;
                      }
                      else {
                        puVar11 = (undefined2 *)
                                  ((int)((int)&local_78->vftablePtr + (int)local_7c * iVar17) * 3 +
                                  (int)(local_64->Sprite_data).offset_0x2c);
                        *puVar11 = 0xffff;
                        *(undefined1 *)(puVar11 + 1) = 0xff;
                      }
                    }
                  }
LAB_00602f7e:
                  local_7c = (float)((int)local_7c + 1);
                  local_84 = (Sprite *)((int)&local_84->vftablePtr + 1);
                  iVar16 = local_94 + 0x100;
                  iVar17 = local_a0;
                  pvVar12 = local_5c;
                  local_94 = iVar16;
                } while ((int)local_84 < local_a0);
              }
              local_68 = (float)((int)local_68 + 1);
              local_60 = local_60 + 0x100;
              local_78 = (Sprite *)((int)&local_78->vftablePtr + 1);
              pSVar15 = local_64;
            } while ((int)local_68 < local_80);
          }
          FUN_004e7870();
          EnterCriticalSection((LPCRITICAL_SECTION)((int)pvVar12 + 0x8000d8));
          local_74[8] = local_9c;
          local_74[9] = local_98;
          if ((undefined4 *)local_74[0xb] != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)local_74[0xb])(1);
          }
          local_74[0xb] = pSVar15;
          LeaveCriticalSection((LPCRITICAL_SECTION)((int)pvVar12 + 0x8000d8));
          FUN_006050b0(pvVar12,local_8c,local_90);
        }
      }
    }
  }
LAB_00603027:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00603230 @ 00603230  kind=gamemisc  attributed-by=none  size=1958 */

void __thiscall FUN_00603230(void *this,int param_2,int param_3)

{
  void *pvVar1;
  char cVar2;
  uint uVar3;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  void *pvVar17;
  undefined1 *puVar18;
  int iStack_114;
  basic_iostream<char,std::char_traits<char>_> local_110;
  basic_streambuf<char,std::char_traits<char>_> local_f8 [2];
  undefined1 local_f0 [8];
  undefined4 *local_e8;
  undefined4 *local_d8;
  undefined4 *local_c8;
  undefined4 local_c0;
  uint local_bc;
  basic_ios<char,std::char_traits<char>_> local_a8 [6];
  int local_60;
  void *local_5c;
  int local_58;
  void *local_54;
  int local_50;
  int *local_4c;
  uint local_48;
  int local_44;
  int local_40;
  void *local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  undefined1 local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f4c9b;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_44 = 0;
  local_60 = param_2;
  local_58 = param_3;
  local_54 = this;
  local_14 = uVar3;
  if ((((*(int *)(*(int *)((int)this + 0xac) + 0xa4) != 0) && (-1 < param_2)) && (-1 < param_3)) &&
     (((param_2 < 0x400 && (param_3 < 0x400)) &&
      (param_3 = param_2 * 0x400 + 0x2c + param_3, local_4c = (int *)((int)this + param_3 * 4),
      *(int *)((int)this + param_3 * 4) == 0)))) {
    local_5c = operator_new(0x35a00);
    local_8 = 0;
    if (local_5c == (void *)0x0) {
      local_50 = 0;
    }
    else {
      local_50 = FUN_005fae00(uVar3);
    }
    iVar14 = local_50;
    local_8 = 0xffffffff;
    local_110.vbtablePtr =
         (basic_iostream<char,std::char_traits<char>_>_vbtable *)
         &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
          vbtable;
    local_110.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
         (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
    std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_a8);
    local_8 = 1;
    local_44 = 1;
    std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
              (&local_110,(basic_streambuf<char,std::char_traits<char>_> *)local_f8);
    local_8 = 2;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     ((int)&local_110.vbtablePtr +
     (local_110.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((int)&iStack_114 +
            (local_110.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
         (local_110.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>(local_f8);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
    local_f8[0] = (basic_streambuf<char,std::char_traits<char>_>)
                  &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    local_c0 = 0;
    local_bc = 0;
    local_8 = 4;
    iVar10 = param_2;
    iVar15 = local_58;
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_00449150(&local_110.basic_ostream<char,std::char_traits<char>_>,&DAT_0071e044,
                          param_2,&DAT_0071c760);
    pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,iVar10);
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(pbVar5);
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,iVar15);
    local_3c = (void *)0x0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_8._0_1_ = 5;
    uVar6 = FUN_0040e140(local_2c);
    local_8._0_1_ = 6;
    cVar2 = FUN_004498d0(uVar6,&local_3c);
    local_8 = CONCAT31(local_8._1_3_,5);
    FUN_00403eb0();
    if (cVar2 != '\0') {
      FUN_0044d620(&local_5c,4);
      puVar18 = (undefined1 *)(iVar14 + 0x10);
      local_44 = 0x40;
      do {
        iVar14 = 0x40;
        do {
          iVar10 = local_38 - (int)local_3c;
          if (local_30 + 1 <= iVar10) {
            puVar18[0x20] = *(undefined1 *)((int)local_3c + local_30);
            iVar10 = local_30 + 1;
          }
          iVar15 = local_38 - (int)local_3c;
          if (iVar10 + 1 <= iVar15) {
            *puVar18 = *(undefined1 *)((int)local_3c + iVar10);
            iVar15 = iVar10 + 1;
          }
          iVar10 = local_38 - (int)local_3c;
          if (iVar15 + 1 <= iVar10) {
            puVar18[1] = *(undefined1 *)((int)local_3c + iVar15);
            iVar10 = iVar15 + 1;
          }
          iVar15 = local_38 - (int)local_3c;
          if (iVar10 + 1 <= iVar15) {
            puVar18[2] = *(undefined1 *)((int)local_3c + iVar10);
            iVar15 = iVar10 + 1;
          }
          iVar10 = local_38 - (int)local_3c;
          if (iVar15 + 1 <= iVar10) {
            puVar18[3] = *(undefined1 *)((int)local_3c + iVar15);
            iVar10 = iVar15 + 1;
          }
          iVar15 = local_38 - (int)local_3c;
          if (iVar10 + 4 <= iVar15) {
            *(undefined4 *)(puVar18 + 4) = *(undefined4 *)((int)local_3c + iVar10);
            iVar15 = iVar10 + 4;
          }
          iVar10 = local_38 - (int)local_3c;
          if (iVar15 + 4 <= iVar10) {
            *(undefined4 *)(puVar18 + 8) = *(undefined4 *)((int)local_3c + iVar15);
            iVar10 = iVar15 + 4;
          }
          local_30 = local_38 - (int)local_3c;
          if (iVar10 + 1 <= local_30) {
            puVar18[0xc] = *(undefined1 *)((int)local_3c + iVar10);
            local_30 = iVar10 + 1;
          }
          puVar18 = puVar18 + 0x34;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        local_44 = local_44 + -1;
      } while (local_44 != 0);
      puVar7 = (undefined4 *)(local_50 + 0x3401c);
      local_44 = 8;
      do {
        iVar14 = 8;
        do {
          iVar10 = local_38 - (int)local_3c;
          if (local_30 + 4 <= iVar10) {
            puVar7[-1] = *(undefined4 *)((int)local_3c + local_30);
            iVar10 = local_30 + 4;
          }
          iVar15 = local_38 - (int)local_3c;
          if (iVar10 + 4 <= iVar15) {
            *puVar7 = *(undefined4 *)((int)local_3c + iVar10);
            iVar15 = iVar10 + 4;
          }
          iVar10 = local_38 - (int)local_3c;
          if (iVar15 + 4 <= iVar10) {
            puVar7[1] = *(undefined4 *)((int)local_3c + iVar15);
            iVar10 = iVar15 + 4;
          }
          iVar15 = local_38 - (int)local_3c;
          if (iVar10 + 4 <= iVar15) {
            puVar7[2] = *(undefined4 *)((int)local_3c + iVar10);
            iVar15 = iVar10 + 4;
          }
          iVar10 = local_38 - (int)local_3c;
          if (iVar15 + 4 <= iVar10) {
            puVar7[3] = *(undefined4 *)((int)local_3c + iVar15);
            iVar10 = iVar15 + 4;
          }
          iVar15 = local_38 - (int)local_3c;
          if (iVar10 + 4 <= iVar15) {
            puVar7[-2] = *(undefined4 *)((int)local_3c + iVar10);
            iVar15 = iVar10 + 4;
          }
          iVar10 = local_38 - (int)local_3c;
          if (iVar15 + 0x10 <= iVar10) {
            *(undefined8 *)(puVar7 + -7) = *(undefined8 *)((int)local_3c + iVar15);
            *(undefined8 *)(puVar7 + -5) = *(undefined8 *)((int)local_3c + iVar15 + 8);
            iVar10 = iVar15 + 0x10;
          }
          local_30 = local_38 - (int)local_3c;
          if (iVar10 + 4 <= local_30) {
            puVar7[-3] = *(undefined4 *)((int)local_3c + iVar10);
            local_30 = iVar10 + 4;
          }
          puVar7 = puVar7 + 0x1a;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        local_44 = local_44 + -1;
      } while (local_44 != 0);
      local_44 = 0;
      param_2 = local_60;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)((int)local_54 + 0x8000d8));
    *local_4c = local_50;
    uVar8 = local_58 * 0x40;
    uVar11 = param_2 * 0x40;
    local_48 = 0;
    uVar3 = uVar11;
    do {
      local_40 = 0;
      uVar16 = uVar8;
      do {
        if (((-1 < (int)uVar3) && (-1 < (int)uVar16)) &&
           (((int)uVar3 < 0x10000 && ((int)uVar16 < 0x10000)))) {
          iVar10 = (int)(((int)uVar16 >> 0x1f & 0x3fU) + uVar16) >> 6;
          iVar14 = (int)(((int)uVar3 >> 0x1f & 0x3fU) + uVar3) >> 6;
          if ((((-1 < iVar14) && (-1 < iVar10)) && (iVar14 < 0x400)) &&
             ((iVar10 < 0x400 &&
              (iVar14 = *(int *)(*(int *)((int)local_54 + 0xac) + 0xbc +
                                (iVar14 * 0x400 + iVar10) * 4), iVar14 != 0)))) {
            uVar12 = uVar3 & 0x8000003f;
            if ((int)uVar12 < 0) {
              uVar12 = (uVar12 - 1 | 0xffffffc0) + 1;
            }
            uVar9 = uVar16 & 0x8000003f;
            if ((int)uVar9 < 0) {
              uVar9 = (uVar9 - 1 | 0xffffffc0) + 1;
            }
            puVar13 = (undefined8 *)((uVar12 * 0x40 + uVar9) * 0x10 + 0x18 + iVar14);
            if (puVar13 != (undefined8 *)0x0) {
              iVar14 = (local_40 + local_48) * 0x34;
              *(undefined8 *)(iVar14 + 0x10 + local_50) = *puVar13;
              *(undefined8 *)(iVar14 + 0x18 + local_50) = puVar13[1];
            }
          }
        }
        local_40 = local_40 + 1;
        uVar16 = uVar16 + 1;
      } while (local_40 < 0x40);
      local_48 = local_48 + 0x40;
      uVar3 = uVar3 + 1;
    } while ((int)local_48 < 0x1000);
    local_44 = 0x800;
    local_5c = (void *)((int)(((int)uVar8 >> 0x1f & 7U) + uVar8) >> 3);
    uVar3 = (int)(uVar11 + ((int)uVar11 >> 0x1f & 7U)) >> 3;
    local_4c = (int *)(uVar3 * 8);
    do {
      local_40 = (int)local_5c * 8;
      iVar14 = 0;
      pvVar17 = local_5c;
      local_48 = uVar3;
      do {
        if (((-1 < (int)uVar3) && (-1 < (int)pvVar17)) &&
           (((int)uVar3 < 0x2000 && ((int)pvVar17 < 0x2000)))) {
          iVar15 = (int)((local_40 >> 0x1f & 0x3fU) + local_40) >> 6;
          iVar10 = (int)(((int)local_4c >> 0x1f & 0x3fU) + (int)local_4c) >> 6;
          uVar3 = local_48;
          if ((((-1 < iVar10) && (-1 < iVar15)) && (iVar10 < 0x400)) &&
             ((iVar15 < 0x400 &&
              (iVar10 = *(int *)(*(int *)((int)local_54 + 0xac) + 0xbc +
                                (iVar10 * 0x400 + iVar15) * 4), iVar10 != 0)))) {
            uVar8 = local_48 & 0x80000007;
            if ((int)uVar8 < 0) {
              uVar8 = (uVar8 - 1 | 0xfffffff8) + 1;
            }
            uVar11 = (uint)pvVar17 & 0x80000007;
            if ((int)uVar11 < 0) {
              uVar11 = (uVar11 - 1 | 0xfffffff8) + 1;
            }
            iVar10 = (uVar11 + uVar8 * 8) * 0x68 + 0x14018 + iVar10;
            if (iVar10 != 0) {
              FUN_005fb9f0(iVar10);
              uVar3 = local_48;
            }
          }
        }
        pvVar1 = local_54;
        iVar14 = iVar14 + 1;
        local_40 = local_40 + 8;
        pvVar17 = (void *)((int)pvVar17 + 1);
      } while (iVar14 < 8);
      local_4c = local_4c + 2;
      local_44 = local_44 + 8;
      uVar3 = uVar3 + 1;
    } while (local_44 < 0x840);
    local_48 = uVar3;
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)local_54 + 0x8000d8));
    FUN_00605420(pvVar1,local_60,local_58);
    if (local_3c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_3c);
    }
    local_8 = 0xffffffff;
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     ((int)&local_110.vbtablePtr +
     (local_110.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((int)&iStack_114 +
            (local_110.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
         (local_110.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
    local_f8[0] = (basic_streambuf<char,std::char_traits<char>_>)
                  &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    if ((local_bc & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(*(void **)local_f0._4_4_);
    }
    std::basic_streambuf<char,std::char_traits<char>_>::setg
              (local_f8,(char *)0x0,(char *)0x0,(char *)0x0);
    *local_e8 = 0;
    *local_d8 = 0;
    *local_c8 = 0;
    local_bc = local_bc & 0xfffffffe;
    local_c0 = 0;
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(local_f8);
    std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
              ((basic_iostream<char,std::char_traits<char>_> *)local_f0);
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_a8)
    ;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00603a00 @ 00603a00  kind=gamemisc  attributed-by=none  size=5672 */

void __thiscall FUN_00603a00(void *this,uint param_2,uint param_3)

{
  void *_Src;
  char cVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  basic_ostream<char,std::char_traits<char>_> *pbVar6;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar7;
  undefined4 uVar8;
  Sprite *pSVar9;
  byte *pbVar10;
  float *pfVar11;
  uint uVar12;
  int *piVar13;
  uint *puVar14;
  undefined1 *puVar15;
  code *pcVar16;
  LPCRITICAL_SECTION p_Var17;
  size_t _Size;
  void *pvVar18;
  LPCRITICAL_SECTION p_Var19;
  int iVar20;
  int iVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int iStack_1e4;
  basic_iostream<char,std::char_traits<char>_> local_1e0;
  basic_streambuf<char,std::char_traits<char>_> local_1c8 [2];
  undefined1 local_1c0 [8];
  undefined4 *local_1b8;
  undefined4 *local_1a8;
  undefined4 *local_198;
  undefined4 local_190;
  uint local_18c;
  basic_ios<char,std::char_traits<char>_> local_178 [6];
  int local_130;
  uint local_12c;
  Sprite *local_128;
  void *local_124;
  undefined4 local_120;
  undefined4 local_11c;
  int local_118;
  int local_114;
  Sprite *local_110;
  int local_10c;
  int local_108;
  void *local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  uint local_f4;
  uint local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  uint local_e0;
  Sprite *local_dc;
  int local_d8;
  uint local_d4;
  float local_d0;
  LPCRITICAL_SECTION local_cc;
  int local_c8;
  void *local_c4;
  int local_c0;
  undefined4 local_bc;
  int local_b8;
  uint local_b4;
  float local_b0;
  int local_ac;
  void *local_a8;
  float local_a4;
  float local_a0;
  void *local_9c;
  undefined1 local_98 [12];
  undefined1 local_8c [12];
  void *local_80 [3];
  undefined1 local_74 [4];
  undefined4 local_70;
  uint local_6c;
  int local_68;
  int iStack_64;
  int local_60;
  void *local_5c;
  float local_58;
  float local_54;
  void *local_50;
  float fStack_4c;
  float local_48;
  float local_44 [12];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f4da2;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_cc = (LPCRITICAL_SECTION)0x0;
  local_f0 = param_2;
  local_e0 = param_3;
  local_a8 = this;
  if ((((*(int *)(*(int *)((int)this + 0xac) + 0xa4) == 0) || ((int)param_2 < 0)) ||
      ((int)param_3 < 0)) ||
     (((0xffff < (int)param_2 || (0xffff < (int)param_3)) ||
      (iVar4 = *(int *)((int)this +
                       (((int)(((int)param_2 >> 0x1f & 0x3fU) + param_2) >> 6) * 0x400 +
                       ((int)(param_3 + ((int)param_3 >> 0x1f & 0x3fU)) >> 6)) * 4 + 0xb0),
      iVar4 == 0)))) goto LAB_0060508a;
  uVar12 = param_2 & 0x8000003f;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xffffffc0) + 1;
  }
  uVar2 = param_3 & 0x8000003f;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xffffffc0) + 1;
  }
  local_ac = (uVar12 * 0x40 + uVar2) * 0x34 + iVar4;
  puVar3 = (undefined8 *)FUN_004a6ad0(param_2,param_3);
  if (puVar3 != (undefined8 *)0x0) {
    p_Var17 = (LPCRITICAL_SECTION)((int)local_a8 + 0x8000d8);
    EnterCriticalSection(p_Var17);
    *(undefined8 *)(local_ac + 0x10) = *puVar3;
    *(undefined8 *)(local_ac + 0x18) = puVar3[1];
    LeaveCriticalSection(p_Var17);
  }
  iVar4 = FUN_00487da0((int)(((int)local_f0 >> 0x1f & 7U) + local_f0) >> 3,
                       (int)(((int)local_e0 >> 0x1f & 7U) + local_e0) >> 3);
  if (iVar4 != 0) {
    FUN_005fb9f0(iVar4);
  }
  pvVar18 = local_a8;
  iVar5 = FUN_00434d10(local_f0,local_e0);
  iVar4 = local_ac;
  local_e8 = iVar5;
  if ((*(int *)(local_ac + 8) != 0) && ((*(char *)(local_ac + 0x28) == '\0' || (iVar5 == 0))))
  goto LAB_0060508a;
  local_1e0.vbtablePtr =
       (basic_iostream<char,std::char_traits<char>_>_vbtable *)
       &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vbtable
  ;
  local_1e0.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
       (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_178);
  local_8 = 0;
  local_cc = (LPCRITICAL_SECTION)0x2;
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            (&local_1e0,(basic_streambuf<char,std::char_traits<char>_> *)local_1c8);
  local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((int)&local_1e0.vbtablePtr +
   (local_1e0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((int)&iStack_1e4 + (local_1e0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset
          ) = (local_1e0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (local_1c8);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  local_1c8[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_190 = 0;
  local_18c = 0;
  local_8 = 3;
  uVar12 = local_f0;
  uVar2 = local_e0;
  pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)
           FUN_00449150(&local_1e0.basic_ostream<char,std::char_traits<char>_>,&DAT_0071e048,
                        local_f0,&DAT_0071c760);
  pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar6,uVar12);
  pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(pbVar7);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar6,uVar2);
  local_104 = (void *)0x0;
  local_100 = 0;
  local_fc = 0;
  local_f8 = 0;
  local_8._0_1_ = 4;
  uVar8 = FUN_0040e140(local_80);
  local_130 = (int)pvVar18 + 0x8000f0;
  local_8 = CONCAT31(local_8._1_3_,5);
  local_cc = (LPCRITICAL_SECTION)0x3;
  cVar1 = FUN_004498d0(uVar8,&local_104);
  if ((cVar1 == '\0') || (*(int *)(iVar4 + 8) != 0)) {
    bVar22 = false;
  }
  else {
    bVar22 = true;
  }
  local_8 = 4;
  FUN_00403eb0();
  if (bVar22) {
    FUN_0044d620(&local_110,4);
    FUN_0044d620(local_ac + 4,4);
    FUN_0044d620(&local_50,0xc);
    fVar29 = fStack_4c;
    pcVar16 = EnterCriticalSection_exref;
    if ((((0 < (int)local_50) && (0 < (int)fStack_4c)) && (0 < (int)local_48)) &&
       (FUN_0044d620(&local_e4,4), iVar4 = local_e4, pcVar16 = EnterCriticalSection_exref,
       local_e4 != 0)) {
      FUN_005842d0(local_e4);
      FUN_0044d620(local_68,iVar4);
      local_5c = (void *)0x0;
      local_58 = 0.0;
      local_54 = 0.0;
      local_8._0_1_ = 7;
      FUN_00449540(&local_68,&local_5c);
      local_110 = operator_new(0x60);
      local_8._0_1_ = 8;
      if (local_110 == (Sprite *)0x0) {
        pSVar9 = (Sprite *)0x0;
      }
      else {
        pSVar9 = cube::Sprite::Sprite(local_110,*(undefined4 *)((int)pvVar18 + 0xa4));
      }
      local_8._0_1_ = 7;
      FUN_004e75c0(local_50,fVar29,local_48);
      memcpy((pSVar9->Sprite_data).offset_0x2c,local_5c,(int)local_58 - (int)local_5c);
      FUN_004e7870();
      pcVar16 = EnterCriticalSection_exref;
      p_Var17 = (LPCRITICAL_SECTION)((int)local_a8 + 0x8000d8);
      EnterCriticalSection(p_Var17);
      *(byte *)(local_ac + 0x30) = *(byte *)(local_ac + 0x30) | 2;
      *(Sprite **)(local_ac + 8) = pSVar9;
      *(undefined4 *)(local_ac + 0x2c) = 0xfa;
      LeaveCriticalSection(p_Var17);
      FUN_005fb860();
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_005fb860();
      pvVar18 = local_a8;
    }
    local_cc = (LPCRITICAL_SECTION)0x0;
    FUN_0044d620(&local_cc,4);
    p_Var17 = (LPCRITICAL_SECTION)((int)pvVar18 + 0x8000d8);
    (*pcVar16)(p_Var17);
    FUN_0046f870();
    LeaveCriticalSection(p_Var17);
    p_Var19 = local_cc;
    if (0 < (int)local_cc) {
      do {
        FUN_0044d620(&local_68,0xc);
        EnterCriticalSection(p_Var17);
        FUN_00601eb0(&local_68);
        LeaveCriticalSection(p_Var17);
        p_Var19 = (LPCRITICAL_SECTION)((int)&p_Var19[-1].SpinCount + 3);
      } while (p_Var19 != (LPCRITICAL_SECTION)0x0);
    }
    iVar5 = local_e8;
    if (*(char *)(local_ac + 0x28) != '\0') goto LAB_00603f32;
  }
  else {
LAB_00603f32:
    iVar4 = local_ac;
    if (iVar5 != 0) {
      local_cc = (LPCRITICAL_SECTION)(*(int *)(iVar5 + 0xa8) + 0x10);
      iVar5 = *(int *)(*(int *)(iVar5 + 0xa8) + 0x14);
      local_d8 = 0x100;
      local_c8 = iVar5;
      do {
        iVar20 = 0x100;
        piVar13 = (int *)local_cc;
        do {
          if (piVar13[1] + -1 < iVar5) {
            iVar5 = piVar13[1] + -1;
          }
          if (local_c8 < piVar13[3] + *piVar13) {
            local_c8 = *piVar13 + piVar13[3];
          }
          piVar13 = piVar13 + 0x800;
          iVar20 = iVar20 + -1;
        } while (iVar20 != 0);
        local_cc = (LPCRITICAL_SECTION)((int)local_cc + 0x20);
        local_d8 = local_d8 + -1;
      } while (local_d8 != 0);
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      iVar20 = local_c8;
      if (local_c8 < 0) {
        iVar20 = 0;
      }
      pSVar9 = (Sprite *)(((int)((iVar20 - iVar5 >> 0x1f & 7U) + (iVar20 - iVar5)) >> 3) + 1);
      *(int *)(local_ac + 4) = (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3;
      *(undefined1 *)(local_ac + 0x28) = 0;
      local_110 = pSVar9;
      local_128 = operator_new(0x60);
      local_8._0_1_ = 9;
      if (local_128 == (Sprite *)0x0) {
        local_dc = (Sprite *)0x0;
      }
      else {
        local_dc = cube::Sprite::Sprite(local_128,*(undefined4 *)((int)local_a8 + 0xa4));
      }
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_004e75c0(0x20,0x20,pSVar9);
      p_Var17 = (LPCRITICAL_SECTION)((int)local_a8 + 0x8000d8);
      local_cc = p_Var17;
      EnterCriticalSection(p_Var17);
      local_128 = (Sprite *)(iVar4 + 0x20);
      FUN_0046f870();
      LeaveCriticalSection(p_Var17);
      local_50 = (void *)0x0;
      fStack_4c = 0.0;
      local_48 = 0.0;
      pfVar11 = local_44;
      iVar4 = 2;
      do {
        iVar5 = 2;
        do {
          pfVar11[0] = 0.0;
          pfVar11[1] = 0.0;
          pfVar11[2] = 0.0;
          pfVar11 = pfVar11 + 3;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      local_d4 = 0;
      do {
        local_b4 = 0;
        local_12c = local_d4 & 0x80000003;
        if ((int)local_12c < 0) {
          local_12c = (local_12c - 1 | 0xfffffffc) + 1;
        }
        do {
          local_f4 = local_b4 * 0x100 + local_d4;
          local_ec = local_f4 * 0x100;
          local_9c = (void *)0x0;
          local_a4 = 0.0;
          local_a0 = 0.0;
          local_b0 = 0.0;
          local_c8 = 10000000;
          local_d0 = 0.0;
          do {
            iVar4 = 0;
            local_d8 = local_ec;
            fVar29 = local_d0;
            do {
              iVar5 = *(int *)(*(int *)(local_e8 + 0xa8) + 0x1c + local_d8);
              iVar20 = *(int *)(local_e8 + 0xa8) + local_d8;
              if (*(int *)(iVar20 + 0x14) < local_c8) {
                local_c8 = *(int *)(iVar20 + 0x14);
              }
              if (*(int *)(iVar20 + 0x10) + iVar5 < 1) {
                if ((DAT_0076de0c >> 0x18 & 0x1f) - 2 < 2) {
                  fVar23 = 80.0;
                  fVar24 = 100.0;
                  fVar27 = 255.0;
                }
                else {
                  fVar23 = (float)(DAT_0076de0c & 0xff);
                  fVar24 = (float)(DAT_0076de0c >> 8 & 0xff);
                  fVar27 = (float)(DAT_0076de0c >> 0x10 & 0xff);
                }
                local_9c = (void *)((float)local_9c + fVar23);
                local_a4 = local_a4 + fVar24;
                local_a0 = local_a0 + fVar27;
              }
              else {
                do {
                  iVar5 = iVar5 + -1;
                  if (iVar5 < 0) {
                    pfVar11 = (float *)FUN_005f9620(local_98,(int)fVar29 +
                                                             (*(int *)(local_e8 + 0x60) * 0x20 +
                                                             local_d4) * 8,
                                                    iVar4 + (*(int *)(local_e8 + 100) * 0x20 +
                                                            local_b4) * 8,
                                                    *(undefined4 *)(iVar20 + 0x14),local_e8);
                    local_9c = (void *)(*pfVar11 + (float)local_9c);
                    local_a4 = pfVar11[1] + local_a4;
                    fVar29 = pfVar11[2];
                    iVar5 = *(int *)(iVar20 + 0x10) + -1;
                    goto LAB_0060427b;
                  }
                  iVar21 = FUN_0042f730(iVar5);
                  if ((*(byte *)(iVar21 + 3) & 0x1f) != 0) {
                    pbVar10 = (byte *)FUN_0042f730(iVar5);
                    if ((pbVar10[3] & 0xffffff1f) - 2 < 2) {
                      fVar29 = 80.0;
                      fVar23 = 100.0;
                      fVar24 = 255.0;
                    }
                    else {
                      fVar29 = (float)*pbVar10;
                      fVar23 = (float)pbVar10[1];
                      fVar24 = (float)pbVar10[2];
                    }
                    local_9c = (void *)(fVar29 + (float)local_9c);
                    local_a4 = fVar23 + local_a4;
                    local_a0 = fVar24 + local_a0;
                    iVar5 = *(int *)(iVar20 + 0x10) + iVar5;
                    goto LAB_00604286;
                  }
                  fVar29 = local_d0;
                } while (*(int *)(iVar20 + 0x10) + iVar5 != *(int *)(iVar20 + 0x14) + -1);
                pfVar11 = (float *)FUN_005f9620(local_8c,(int)local_d0 +
                                                         (*(int *)(local_e8 + 0x60) * 0x20 +
                                                         local_d4) * 8,
                                                iVar4 + (*(int *)(local_e8 + 100) * 0x20 + local_b4)
                                                        * 8,*(undefined4 *)(iVar20 + 0x14),local_e8)
                ;
                local_a4 = pfVar11[1] + local_a4;
                local_9c = (void *)((float)local_9c + *pfVar11);
                fVar29 = pfVar11[2];
                iVar5 = *(int *)(iVar20 + 0x10) + iVar5;
LAB_0060427b:
                local_a0 = fVar29 + local_a0;
LAB_00604286:
                local_b0 = (float)iVar5 + local_b0;
                fVar29 = local_d0;
              }
              iVar4 = iVar4 + 1;
              local_d8 = local_d8 + 0x2000;
            } while (iVar4 < 8);
            local_d0 = (float)((int)fVar29 + 1);
            local_ec = local_ec + 0x20;
          } while ((int)local_d0 < 8);
          local_9c = (void *)((float)local_9c * 0.015625);
          local_a4 = local_a4 * 0.015625;
          local_a0 = local_a0 * 0.015625;
          local_ec = -((int)((int)(local_b0 * -0.015625) +
                            ((int)(local_b0 * -0.015625) >> 0x1f & 7U)) >> 3) -
                     *(int *)(local_ac + 4);
          local_50 = local_9c;
          fStack_4c = local_a4;
          local_48 = local_a0;
          if (local_12c == 0) {
            uVar12 = local_b4 & 0x80000003;
            bVar22 = uVar12 == 0;
            if ((int)uVar12 < 0) {
              bVar22 = (uVar12 - 1 | 0xfffffffc) == 0xffffffff;
            }
            if (bVar22) {
              iVar21 = local_e0 * 0x100;
              iVar5 = local_f0 * 0x100;
              iVar4 = iVar5 + local_d4 * 8;
              local_e4 = FUN_00477e10(iVar4,iVar21 + local_b4 * 8);
              iVar20 = FUN_00477e10(iVar5 + (local_d4 + 4) * 8,iVar21 + local_b4 * 8);
              iVar5 = local_e4;
              if ((local_e4 != iVar20) ||
                 (iVar20 = FUN_00477e10(iVar4,iVar21 + (local_b4 + 4) * 8), iVar5 != iVar20)) {
                EnterCriticalSection(local_cc);
                pSVar9 = local_128;
                local_60 = *(int *)(local_f4 * 0x100 + 0x14 + *(int *)(local_e8 + 0xa8));
                iVar5 = *(int *)local_128;
                if (local_60 < 0) {
                  local_60 = 0;
                }
                iStack_64 = iVar21 + local_b4 * 8;
                local_68 = iVar4;
                iVar20 = FUN_005a6b60(iVar5,*(undefined4 *)(iVar5 + 4),&local_68);
                iVar4 = *(int *)((int)pSVar9 + 4);
                if (iVar4 == 0xccccccb) {
                    /* WARNING: Subroutine does not return */
                  std::_Xlength_error("list<T> too long");
                }
                *(int *)((int)pSVar9 + 4) = iVar4 + 1;
                *(int *)(iVar5 + 4) = iVar20;
                **(int **)(iVar20 + 4) = iVar20;
                LeaveCriticalSection(local_cc);
              }
            }
          }
          if ((-1 < local_ec) && (local_ec < (int)local_110)) {
            if (((int)local_d4 < 0) ||
               (((((int)local_b4 < 0 ||
                  (iVar4 = (local_dc->Sprite_data).offset_0x40, iVar4 <= (int)local_d4)) ||
                 (iVar5 = (local_dc->Sprite_data).offset_0x44, iVar5 <= (int)local_b4)) ||
                ((int)(local_dc->Sprite_data).offset_0x48 <= local_ec)))) {
              puVar15 = &DAT_0076b340;
            }
            else {
              puVar15 = (undefined1 *)
                        (((iVar5 * local_ec + local_b4) * iVar4 + local_d4) * 3 +
                        (int)(local_dc->Sprite_data).offset_0x2c);
            }
            iVar4 = 0;
            do {
              iVar5 = iVar4 + 1;
              puVar15[iVar4] = (char)(int)(float)(&local_50)[iVar4];
              iVar4 = iVar5;
            } while (iVar5 < 3);
          }
          iVar4 = ((int)(local_b4 + ((int)local_b4 >> 0x1f & 0xfU)) >> 4) +
                  ((int)(((int)local_d4 >> 0x1f & 0xfU) + local_d4) >> 4) * 2;
          fVar29 = local_44[iVar4 * 3];
          local_44[iVar4 * 3 + 1] = local_a4 + local_44[iVar4 * 3 + 1];
          local_44[iVar4 * 3 + 2] = local_a0 + local_44[iVar4 * 3 + 2];
          local_44[iVar4 * 3] = fVar29 + (float)local_9c;
          local_9c = (void *)((((int)((local_c8 >> 0x1f & 7U) + local_c8) >> 3) -
                              *(int *)(local_ac + 4)) + -1);
          if ((int)local_9c < 0) {
            local_9c = (void *)0x0;
          }
          if ((int)local_9c < local_ec) {
            local_d8 = local_e0 * 0x100 + local_b4 * 8;
            local_e4 = local_f0 * 0x100 + local_d4 * 8;
            do {
              fVar29 = 0.0;
              local_108 = 0;
              local_d0 = 0.0;
              local_a0 = 0.0;
              local_a4 = 0.0;
              local_114 = 0;
              fVar23 = fVar29;
              fVar24 = fVar29;
              do {
                fVar27 = (float)(local_e4 + local_114);
                local_c8 = 0;
                local_b0 = fVar27;
                do {
                  local_f4 = local_d8 + local_c8;
                  local_10c = 0;
                  fVar25 = fVar27;
                  do {
                    fVar27 = local_b0;
                    iVar4 = local_10c + (*(int *)(local_ac + 4) + (int)local_9c) * 8;
                    if ((((int)fVar25 < 0) || ((int)local_f4 < 0)) ||
                       ((0xffffff < (int)fVar25 || (0xffffff < (int)local_f4)))) {
LAB_0060490a:
                      puVar14 = (uint *)&DAT_0076de14;
                      fVar27 = fVar25;
                    }
                    else {
                      iVar5 = ((int)local_f4 >> 0x1f & 0xffU) + local_f4;
                      uVar2 = iVar5 >> 8;
                      iVar20 = ((int)fVar25 >> 0x1f & 0xffU) + (int)fVar25;
                      uVar12 = iVar20 >> 8;
                      if ((((int)uVar12 < 0) || ((int)uVar2 < 0)) ||
                         ((0xffff < (int)uVar12 || (0xffff < (int)uVar2)))) goto LAB_0060490a;
                      iVar20 = (int)(uVar12 + (iVar20 >> 0x1f & 0x3fU)) >> 6;
                      iVar5 = (int)((iVar5 >> 0x1f & 0x3fU) + uVar2) >> 6;
                      fVar25 = local_b0;
                      if ((((iVar20 < 0) || (iVar5 < 0)) || (0x3ff < iVar20)) ||
                         ((0x3ff < iVar5 ||
                          (iVar5 = *(int *)(*(int *)((int)local_a8 + 0xac) + 0xbc +
                                           (iVar20 * 0x400 + iVar5) * 4), iVar5 == 0))))
                      goto LAB_0060490a;
                      uVar12 = uVar12 & 0x8000003f;
                      if ((int)uVar12 < 0) {
                        uVar12 = (uVar12 - 1 | 0xffffffc0) + 1;
                      }
                      uVar2 = uVar2 & 0x8000003f;
                      if ((int)uVar2 < 0) {
                        uVar2 = (uVar2 - 1 | 0xffffffc0) + 1;
                      }
                      iVar5 = *(int *)(iVar5 + 0x10018 + (uVar12 * 0x40 + uVar2) * 4);
                      if (iVar5 == 0) goto LAB_0060490a;
                      uVar12 = local_f4 & 0x800000ff;
                      if ((int)uVar12 < 0) {
                        uVar12 = (uVar12 - 1 | 0xffffff00) + 1;
                      }
                      uVar2 = (uint)local_b0 & 0x800000ff;
                      if ((int)uVar2 < 0) {
                        uVar2 = (uVar2 - 1 | 0xffffff00) + 1;
                      }
                      iVar5 = (uVar12 * 0x100 + uVar2) * 0x20 + *(int *)(iVar5 + 0xa8);
                      if ((iVar5 == 0) || (iVar20 = *(int *)(iVar5 + 0x10), iVar4 < iVar20))
                      goto LAB_0060490a;
                      if (iVar4 < *(int *)(iVar5 + 0x1c) + iVar20) {
                        puVar14 = (uint *)FUN_0042f730(iVar4 - iVar20);
                        fVar29 = local_d0;
                        fVar23 = local_a0;
                        fVar24 = local_a4;
                        if ((((*puVar14 & 0x1f000000) == 0) && (iVar4 < 1)) &&
                           ((*puVar14 & 0x40000000) == 0)) {
                          puVar14 = &DAT_0076de0c;
                        }
                      }
                      else {
                        puVar14 = &DAT_0076de0c;
                        if (0 < iVar4) {
                          puVar14 = (uint *)&DAT_0076de10;
                        }
                      }
                    }
                    iVar4 = local_c8;
                    uVar12 = *(byte *)((int)puVar14 + 3) & 0xffffff1f;
                    iVar5 = local_108;
                    if ((*(byte *)((int)puVar14 + 3) & 0x1f) != 0) {
                      iVar5 = local_108 + 1;
                      local_108 = iVar5;
                      if (uVar12 == 1) {
                        pfVar11 = (float *)FUN_005f9620(local_74,*(int *)(local_e8 + 0x60) * 0x100 +
                                                                 local_d4 * 8 + local_114,
                                                        *(int *)(local_e8 + 100) * 0x100 +
                                                        local_b4 * 8 + local_c8,
                                                        local_10c +
                                                        (*(int *)(local_ac + 4) + (int)local_9c) * 8
                                                        ,local_e8);
                        fVar23 = pfVar11[1] + local_a0;
                        fVar29 = local_d0 + *pfVar11;
                        fVar24 = pfVar11[2] + local_a4;
                        local_d0 = fVar29;
                        local_a4 = fVar24;
                        local_a0 = fVar23;
                      }
                      else {
                        if (uVar12 - 2 < 2) {
                          fVar25 = 80.0;
                          fVar26 = 100.0;
                          fVar28 = 255.0;
                        }
                        else {
                          fVar25 = (float)(byte)*puVar14;
                          fVar26 = (float)*(byte *)((int)puVar14 + 1);
                          fVar28 = (float)*(byte *)((int)puVar14 + 2);
                        }
                        fVar29 = fVar29 + fVar25;
                        fVar23 = fVar23 + fVar26;
                        fVar24 = fVar24 + fVar28;
                        local_d0 = fVar29;
                        local_a4 = fVar24;
                        local_a0 = fVar23;
                      }
                    }
                    local_10c = local_10c + 1;
                    fVar25 = fVar27;
                  } while (local_10c < 8);
                  local_c8 = iVar4 + 1;
                } while (local_c8 < 8);
                local_114 = local_114 + 1;
              } while (local_114 < 8);
              if (iVar5 != 0) {
                fVar27 = 1.0 / (float)iVar5;
                local_5c = (void *)(fVar27 * fVar29);
                local_58 = fVar27 * fVar23;
                local_54 = fVar27 * fVar24;
                if (((((int)local_d4 < 0) || ((int)local_b4 < 0)) ||
                    (((int)local_9c < 0 ||
                     ((iVar4 = (local_dc->Sprite_data).offset_0x40, iVar4 <= (int)local_d4 ||
                      (iVar5 = (local_dc->Sprite_data).offset_0x44, iVar5 <= (int)local_b4)))))) ||
                   ((int)(local_dc->Sprite_data).offset_0x48 <= (int)local_9c)) {
                  puVar15 = &DAT_0076b340;
                }
                else {
                  puVar15 = (undefined1 *)
                            (((iVar5 * (int)local_9c + local_b4) * iVar4 + local_d4) * 3 +
                            (int)(local_dc->Sprite_data).offset_0x2c);
                }
                iVar4 = 0;
                do {
                  iVar5 = iVar4 + 1;
                  puVar15[iVar4] = (char)(int)(float)(&local_5c)[iVar4];
                  iVar4 = iVar5;
                } while (iVar5 < 3);
              }
              local_9c = (void *)((int)local_9c + 1);
            } while ((int)local_9c < local_ec);
          }
          iVar4 = local_ac;
          local_b4 = local_b4 + 1;
        } while ((int)local_b4 < 0x20);
        local_d4 = local_d4 + 1;
      } while ((int)local_d4 < 0x20);
      FUN_004e7870();
      local_c4 = (void *)0x0;
      local_c0 = 0;
      local_bc = 0;
      local_b8 = 0;
      local_8._0_1_ = 10;
      FUN_005870c0(4);
      *(undefined4 *)((int)local_c4 + local_b8) = *(undefined4 *)((int)local_a8 + 0x8000f8);
      local_b8 = local_b8 + 4;
      FUN_005870c0((local_c0 - (int)local_c4) + 4);
      *(undefined4 *)((int)local_c4 + local_b8) = *(undefined4 *)(iVar4 + 4);
      local_b8 = local_b8 + 4;
      iVar4 = (local_dc->Sprite_data).offset_0x44;
      iVar5 = (local_dc->Sprite_data).offset_0x40;
      iVar20 = (local_dc->Sprite_data).offset_0x48;
      local_68 = iVar5;
      iStack_64 = iVar4;
      FUN_005870c0((local_c0 - (int)local_c4) + 0xc);
      *(ulonglong *)((int)local_c4 + local_b8) = CONCAT44(iStack_64,local_68);
      *(int *)((int)local_c4 + local_b8 + 8) = iVar20;
      local_b8 = local_b8 + 0xc;
      if (((0 < iVar5) && (0 < iVar4)) && (0 < iVar20)) {
        local_5c = (void *)0x0;
        local_58 = 0.0;
        local_54 = 0.0;
        FUN_005870c0(iVar20 * iVar4 * iVar5 * 3);
        pvVar18 = local_5c;
        memcpy(local_5c,(local_dc->Sprite_data).offset_0x2c,(int)local_58 - (int)local_5c);
        local_50 = (void *)0x0;
        fStack_4c = 0.0;
        local_48 = 0.0;
        local_8._0_1_ = 0xc;
        FUN_005fc0d0(&local_5c,&local_50);
        _Src = local_50;
        _Size = (int)fStack_4c - (int)local_50;
        FUN_005870c0((local_c0 - (int)local_c4) + 4);
        *(size_t *)((int)local_c4 + local_b8) = _Size;
        local_b8 = local_b8 + 4;
        FUN_005870c0((_Size - (int)local_c4) + local_c0);
        memcpy((void *)((int)local_c4 + local_b8),_Src,_Size);
        local_b8 = local_b8 + _Size;
        if (_Src != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(_Src);
        }
        local_8._0_1_ = 10;
        if (pvVar18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(pvVar18);
        }
      }
      iVar4 = local_ac;
      uVar8 = *(undefined4 *)(local_ac + 0x24);
      FUN_005870c0((local_c0 - (int)local_c4) + 4);
      *(undefined4 *)((int)local_c4 + local_b8) = uVar8;
      local_b8 = local_b8 + 4;
      piVar13 = (int *)**(int **)(iVar4 + 0x20);
      if (piVar13 != *(int **)(iVar4 + 0x20)) {
        do {
          FUN_005870c0((local_c0 - (int)local_c4) + 0xc);
          *(undefined8 *)((int)local_c4 + local_b8) = *(undefined8 *)(piVar13 + 2);
          *(int *)((int)local_c4 + local_b8 + 8) = piVar13[4];
          local_b8 = local_b8 + 0xc;
          piVar13 = (int *)*piVar13;
        } while (piVar13 != (int *)*(int *)(iVar4 + 0x20));
      }
      uVar8 = FUN_0040e140(local_80);
      local_8._0_1_ = 0xd;
      FUN_004499c0(uVar8,&local_c4);
      p_Var17 = local_cc;
      local_8 = CONCAT31(local_8._1_3_,10);
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_80[0]);
      }
      EnterCriticalSection(local_cc);
      if (*(undefined4 **)(iVar4 + 8) == (undefined4 *)0x0) {
        *(undefined4 *)(iVar4 + 0x2c) = 0xfa;
      }
      else {
        (**(code **)**(undefined4 **)(iVar4 + 8))(1);
      }
      *(byte *)(iVar4 + 0x30) = *(byte *)(iVar4 + 0x30) | 2;
      *(Sprite **)(iVar4 + 8) = local_dc;
      LeaveCriticalSection(p_Var17);
      local_124 = (void *)0x0;
      local_120 = 0;
      local_11c = 0;
      local_118 = 0;
      local_8._0_1_ = 0xe;
      FUN_005870c0(4);
      *(undefined4 *)((int)local_124 + local_118) = *(undefined4 *)((int)local_a8 + 0x8000bc);
      local_118 = local_118 + 4;
      local_6c = 0xf;
      local_70 = 0;
      local_80[0] = (void *)((uint)local_80[0] & 0xffffff00);
      FUN_0040c280("discovered",10);
      local_8 = CONCAT31(local_8._1_3_,0xf);
      FUN_004499c0(local_80,&local_124);
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_80[0]);
      }
      if (local_124 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_124);
      }
      if (local_c4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_c4);
      }
      if (local_104 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_104);
      }
      local_8 = 0xffffffff;
      *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
       ((int)&local_1e0.vbtablePtr +
       (local_1e0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
      *(int *)((int)&iStack_1e4 +
              (local_1e0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           (local_1e0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
      local_1c8[0] = (basic_streambuf<char,std::char_traits<char>_>)
                     &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                      vftable;
      if ((local_18c & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(*(void **)local_1c0._4_4_);
      }
      std::basic_streambuf<char,std::char_traits<char>_>::setg
                (local_1c8,(char *)0x0,(char *)0x0,(char *)0x0);
      *local_1b8 = 0;
      *local_1a8 = 0;
      *local_198 = 0;
      local_18c = local_18c & 0xfffffffe;
      local_190 = 0;
      std::basic_streambuf<char,std::char_traits<char>_>::
      ~basic_streambuf<char,std::char_traits<char>_>(local_1c8);
      std::basic_iostream<char,std::char_traits<char>_>::
      ~basic_iostream<char,std::char_traits<char>_>
                ((basic_iostream<char,std::char_traits<char>_> *)local_1c0);
      std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                (local_178);
      goto LAB_0060508a;
    }
  }
  FUN_005fb860();
  FUN_00404420(&local_1e0);
LAB_0060508a:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00605950 @ 00605950  kind=gamemisc  attributed-by=none  size=197 */

void FUN_00605950(float *param_1,undefined8 *param_2,int param_3,float param_4)

{
  float fVar1;
  uint uVar2;
  float local_14;
  float fStack_10;
  
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (0 < param_3) {
    do {
      fVar1 = *(float *)(param_2 + 1);
      local_14 = (float)*param_2;
      fStack_10 = (float)((ulonglong)*param_2 >> 0x20);
      *param_1 = *param_1 + (local_14 - *param_1) * param_4;
      param_1[1] = (fStack_10 - param_1[1]) * param_4 + param_1[1];
      param_1[2] = (fVar1 - param_1[2]) * param_4 + param_1[2];
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00609400 @ 00609400  kind=gamemisc  attributed-by=none  size=115 */

void FUN_00609400(uint param_1)

{
  int *in_ECX;
  uint uVar1;
  
  if (param_1 <= (uint)(in_ECX[2] - in_ECX[1] >> 4)) {
    return;
  }
  if (0xfffffffU - (in_ECX[1] - *in_ECX >> 4) < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = in_ECX[2] - *in_ECX >> 4;
  if (0xfffffff - (uVar1 >> 1) < uVar1) {
    FUN_00609320();
    return;
  }
  FUN_00609320();
  return;
}


/* FUN_00623530 @ 00623530  kind=gamemisc  attributed-by=none  size=208 */

undefined4 FUN_00623530(void)

{
  HRESULT HVar1;
  int iVar2;
  Music *pMVar3;
  int *in_ECX;
  int *local_8;
  
  local_8 = in_ECX;
  CoInitializeEx((LPVOID)0x0,0);
  HVar1 = CoCreateInstance((IID *)&DAT_00702d68,(LPUNKNOWN)0x0,1,(IID *)&DAT_00702d78,&local_8);
  if (-1 < HVar1) {
    iVar2 = (**(code **)(*local_8 + 0x14))(local_8,0,0xffffffff);
    if (iVar2 < 0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
    else {
      in_ECX[1] = (int)local_8;
      iVar2 = (**(code **)(*(int *)in_ECX[1] + 0x28))((int *)in_ECX[1],in_ECX + 2,0,0,0,0,0);
      if (-1 < iVar2) {
        pMVar3 = operator_new(0x1e02f0);
        if (pMVar3 == (Music *)0x0) {
          pMVar3 = (Music *)0x0;
        }
        else {
          pMVar3 = cube::Music::Music(pMVar3,(Music_vftable *)in_ECX[1]);
        }
        in_ECX[9] = (int)pMVar3;
        pMVar3 = operator_new(0x1e02f0);
        if (pMVar3 == (Music *)0x0) {
          in_ECX[10] = 0;
          return 1;
        }
        pMVar3 = cube::Music::Music(pMVar3,(Music_vftable *)in_ECX[1]);
        in_ECX[10] = (int)pMVar3;
        return 1;
      }
    }
  }
  return 0;
}


/* FUN_0062bb20 @ 0062bb20  kind=gamemisc  attributed-by=none  size=101 */

void FUN_0062bb20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_18 = param_3;
  local_14 = param_4;
  local_10 = param_1;
  local_c = param_2;
  FUN_006295a0(&local_10,0);
  FUN_0062bb90(&local_18,param_5);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0062fbc0 @ 0062fbc0  kind=gamemisc  attributed-by=none  size=511 */

void FUN_0062fbc0(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  int *piVar6;
  int *piVar7;
  
  if (0xcccccca < (uint)in_ECX[1]) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  piVar3 = (int *)FUN_004c9580(param_4);
  in_ECX[1] = in_ECX[1] + 1;
  piVar3[1] = (int)param_3;
  if (param_3 == (undefined4 *)*in_ECX) {
    ((undefined4 *)*in_ECX)[1] = piVar3;
    *(int **)*in_ECX = piVar3;
    iVar4 = *in_ECX;
  }
  else {
    if (param_2 != '\0') {
      *param_3 = piVar3;
      if (param_3 == *(undefined4 **)*in_ECX) {
        *(int **)*in_ECX = piVar3;
      }
      goto LAB_0062fc1e;
    }
    param_3[2] = piVar3;
    iVar4 = *in_ECX;
    if (param_3 != *(undefined4 **)(iVar4 + 8)) goto LAB_0062fc1e;
  }
  *(int **)(iVar4 + 8) = piVar3;
LAB_0062fc1e:
  cVar1 = *(char *)(piVar3[1] + 0xc);
  piVar5 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*in_ECX + 4) + 0xc) = 1;
      *param_1 = piVar3;
      return;
    }
    piVar7 = (int *)piVar5[1];
    piVar6 = *(int **)piVar7[1];
    if (piVar7 == piVar6) {
      piVar6 = (int *)((undefined4 *)piVar7[1])[2];
      if ((char)piVar6[3] != '\0') {
        if (piVar5 == (int *)piVar7[2]) {
          piVar5 = (int *)piVar7[2];
          piVar7[2] = *piVar5;
          if (*(char *)(*piVar5 + 0xd) == '\0') {
            *(int **)(*piVar5 + 4) = piVar7;
          }
          piVar5[1] = piVar7[1];
          if (piVar7 == *(int **)(*in_ECX + 4)) {
            *(int **)(*in_ECX + 4) = piVar5;
          }
          else {
            piVar6 = (int *)piVar7[1];
            if (piVar7 == (int *)*piVar6) {
              *piVar6 = (int)piVar5;
            }
            else {
              piVar6[2] = (int)piVar5;
            }
          }
          *piVar5 = (int)piVar7;
          piVar7[1] = (int)piVar5;
          piVar5 = piVar7;
        }
        *(undefined1 *)(piVar5[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
        piVar7 = *(int **)(piVar5[1] + 4);
        piVar6 = (int *)*piVar7;
        *piVar7 = piVar6[2];
        if (*(char *)(piVar6[2] + 0xd) == '\0') {
          *(int **)(piVar6[2] + 4) = piVar7;
        }
        piVar6[1] = piVar7[1];
        if (piVar7 == *(int **)(*in_ECX + 4)) {
          *(int **)(*in_ECX + 4) = piVar6;
          piVar6[2] = (int)piVar7;
        }
        else {
          piVar2 = (int *)piVar7[1];
          if (piVar7 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar6;
            piVar6[2] = (int)piVar7;
          }
          else {
            *piVar2 = (int)piVar6;
            piVar6[2] = (int)piVar7;
          }
        }
        goto LAB_0062fd9a;
      }
LAB_0062fcf1:
      *(undefined1 *)(piVar7 + 3) = 1;
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar5 = *(int **)(piVar5[1] + 4);
    }
    else {
      if ((char)piVar6[3] == '\0') goto LAB_0062fcf1;
      if (piVar5 == (int *)*piVar7) {
        iVar4 = *piVar7;
        *piVar7 = *(int *)(iVar4 + 8);
        if (*(char *)(*(int *)(iVar4 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar4 + 8) + 4) = piVar7;
        }
        *(int *)(iVar4 + 4) = piVar7[1];
        if (piVar7 == *(int **)(*in_ECX + 4)) {
          *(int *)(*in_ECX + 4) = iVar4;
        }
        else {
          piVar5 = (int *)piVar7[1];
          if (piVar7 == (int *)piVar5[2]) {
            piVar5[2] = iVar4;
          }
          else {
            *piVar5 = iVar4;
          }
        }
        *(int **)(iVar4 + 8) = piVar7;
        piVar7[1] = iVar4;
        piVar5 = piVar7;
      }
      *(undefined1 *)(piVar5[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar7 = *(int **)(piVar5[1] + 4);
      piVar6 = (int *)piVar7[2];
      piVar7[2] = *piVar6;
      if (*(char *)(*piVar6 + 0xd) == '\0') {
        *(int **)(*piVar6 + 4) = piVar7;
      }
      piVar6[1] = piVar7[1];
      if (piVar7 == *(int **)(*in_ECX + 4)) {
        *(int **)(*in_ECX + 4) = piVar6;
      }
      else {
        piVar2 = (int *)piVar7[1];
        if (piVar7 == (int *)*piVar2) {
          *piVar2 = (int)piVar6;
        }
        else {
          piVar2[2] = (int)piVar6;
        }
      }
      *piVar6 = (int)piVar7;
LAB_0062fd9a:
      piVar7[1] = (int)piVar6;
    }
    cVar1 = *(char *)(piVar5[1] + 0xc);
  } while( true );
}


/* FUN_00633e70 @ 00633e70  kind=gamemisc  attributed-by=none  size=2766 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00633e70(float *param_1,float *param_2,float *param_3,char *param_4,undefined4 param_5)

{
  int iVar1;
  char cVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float in_ECX;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_ac [3];
  char local_a9;
  float local_a8;
  float local_a4;
  int *local_a0;
  float local_9c;
  float local_98;
  float *local_94;
  float local_90;
  float *local_8c;
  float *local_88;
  float fStack_84;
  char *local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float afStack_60 [4];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [4];
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)auStack_ac;
  local_88 = param_2;
  local_94 = param_1;
  local_8c = param_3;
  local_80 = param_4;
  local_a9 = '\x01';
  local_90 = in_ECX;
  if (*(int **)((int)in_ECX + 0x34) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)((int)in_ECX + 0x34) + 0x20))
                      (&local_70,&local_68,param_3,&local_a9);
    if (cVar2 == '\0') {
      (**(code **)(**(int **)((int)in_ECX + 0x34) + 0x38))(param_3);
      (**(code **)(**(int **)((int)in_ECX + 0x34) + 0x18))(auStack_20);
      (**(code **)(**(int **)((int)in_ECX + 0x34) + 0x1c))(&fStack_1c);
      fStack_74 = fStack_1c * param_3[3];
      fStack_78 = fStack_1c * *param_3;
      fStack_84 = fStack_1c * param_3[1];
      fVar10 = param_3[0xd];
      fStack_7c = 1.0 / (fStack_74 + fStack_18 * param_3[7] + param_3[0xf]);
      afStack_60[0] = (fStack_78 + fStack_18 * param_3[4] + param_3[0xc]) * fStack_7c;
      fStack_7c = (fStack_84 + fStack_18 * param_3[5] + param_3[0xd]) * fStack_7c;
      afStack_60[1] = fStack_7c;
      fVar9 = 1.0 / (fStack_14 * param_3[3] + fStack_18 * param_3[7] + param_3[0xf]);
      fStack_1c = (fStack_14 * param_3[1] + fStack_18 * param_3[5] + fVar10) * fVar9;
      afStack_60[2] = (fStack_14 * *param_3 + fStack_18 * param_3[4] + param_3[0xc]) * fVar9;
      afStack_60[3] = fStack_1c;
      fVar9 = 1.0 / (fStack_10 * param_3[7] + fStack_14 * param_3[3] + param_3[0xf]);
      fVar33 = 1.0 / (fStack_10 * param_3[7] + fStack_74 + param_3[0xf]);
      fStack_50 = (fStack_10 * param_3[4] + fStack_14 * *param_3 + param_3[0xc]) * fVar9;
      local_a0 = (int *)((fStack_10 * param_3[5] + fStack_84 + fVar10) * fVar33);
      fStack_4c = (fStack_10 * param_3[5] + fStack_14 * param_3[1] + fVar10) * fVar9;
      fStack_44 = (float)local_a0;
      local_64 = fStack_7c;
      fStack_48 = (fStack_10 * param_3[4] + fStack_78 + param_3[0xc]) * fVar33;
      local_70 = afStack_60[0];
      local_68 = afStack_60[0];
      pfVar6 = afStack_60 + 2;
      if (afStack_60[0] <= afStack_60[2]) {
        pfVar6 = &local_70;
      }
      local_6c = fStack_7c;
      pfVar7 = afStack_60 + 3;
      if (fStack_7c <= fStack_1c) {
        pfVar7 = &local_6c;
      }
      local_70 = *pfVar6;
      local_6c = *pfVar7;
      pfVar3 = afStack_60 + 2;
      if (afStack_60[2] <= afStack_60[0]) {
        pfVar3 = &local_68;
      }
      pfVar4 = afStack_60 + 3;
      if (fStack_1c <= fStack_7c) {
        pfVar4 = &local_64;
      }
      local_68 = *pfVar3;
      pfVar5 = &fStack_50;
      if (*pfVar6 <= fStack_50) {
        pfVar5 = &local_70;
      }
      pfVar6 = &fStack_4c;
      if (*pfVar7 <= fStack_4c) {
        pfVar6 = &local_6c;
      }
      local_70 = *pfVar5;
      pfVar7 = &fStack_50;
      if (fStack_50 <= *pfVar3) {
        pfVar7 = &local_68;
      }
      local_64 = *pfVar4;
      pfVar3 = &fStack_4c;
      if (fStack_4c <= *pfVar4) {
        pfVar3 = &local_64;
      }
      local_68 = *pfVar7;
      pfVar4 = &fStack_48;
      if (*pfVar5 <= fStack_48) {
        pfVar4 = &local_70;
      }
      local_6c = *pfVar6;
      pfVar5 = &fStack_44;
      if (*pfVar6 <= (float)local_a0) {
        pfVar5 = &local_6c;
      }
      local_70 = *pfVar4;
      pfVar6 = &fStack_48;
      if (fStack_48 <= *pfVar7) {
        pfVar6 = &local_68;
      }
      local_64 = *pfVar3;
      pfVar7 = &fStack_44;
      if ((float)local_a0 <= *pfVar3) {
        pfVar7 = &local_64;
      }
      local_68 = *pfVar6;
      local_6c = *pfVar5;
      local_64 = *pfVar7;
      local_a9 = '\0';
    }
    else {
      local_a9 = '\0';
    }
  }
  if ((*(int *)(*(int *)(*(int *)((int)in_ECX + 0x3c) + 0xec) +
               *(int *)(*(int *)((int)in_ECX + 0x3c) + 0xc0) * 4) == 0) &&
     (local_a0 = (int *)**(int **)((int)in_ECX + 0x2c), local_a8 = local_6c, local_a4 = local_64,
     local_9c = local_68, local_98 = local_70, local_a0 != *(int **)((int)in_ECX + 0x2c))) {
    do {
      iVar1 = local_a0[2];
      if (((~(byte)(*(uint *)(iVar1 + 200) >> 2) & 1) != 0) &&
         (*(int *)(*(int *)(*(int *)(iVar1 + 0x3c) + 0x94) +
                  *(int *)(*(int *)(iVar1 + 0x3c) + 0x68) * 4) != 0)) {
        iVar1 = *(int *)(iVar1 + 0x38);
        pfVar7 = (float *)(iVar1 + 0x1b0);
        pfVar6 = afStack_60;
        for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
          *pfVar6 = *param_3;
          param_3 = param_3 + 1;
          pfVar6 = pfVar6 + 1;
        }
        fVar10 = fStack_30 * *(float *)(iVar1 + 0x1bc);
        fVar9 = afStack_60[0] * *(float *)(iVar1 + 0x1c0);
        fVar33 = fStack_30 * *(float *)(iVar1 + 0x1cc);
        fVar11 = *(float *)(iVar1 + 0x1d0) * afStack_60[0];
        fVar29 = *(float *)(iVar1 + 0x1d4) * fStack_50;
        fVar12 = fStack_30 * *(float *)(iVar1 + 0x1dc);
        fStack_30 = fStack_50 * *(float *)(iVar1 + 0x1e4) +
                    afStack_60[0] * *(float *)(iVar1 + 0x1e0) +
                    *(float *)(iVar1 + 0x1e8) * fStack_40 + fStack_30 * *(float *)(iVar1 + 0x1ec);
        fVar13 = *(float *)(iVar1 + 0x1bc) * fStack_2c;
        fVar14 = afStack_60[1] * *(float *)(iVar1 + 0x1c0);
        fVar15 = fStack_2c * *(float *)(iVar1 + 0x1cc);
        fVar16 = *(float *)(iVar1 + 0x1d0) * afStack_60[1];
        fVar30 = *(float *)(iVar1 + 0x1d4) * fStack_4c;
        fVar17 = fStack_2c * *(float *)(iVar1 + 0x1dc);
        fStack_2c = fStack_4c * *(float *)(iVar1 + 0x1e4) +
                    afStack_60[1] * *(float *)(iVar1 + 0x1e0) +
                    *(float *)(iVar1 + 0x1e8) * fStack_3c + fStack_2c * *(float *)(iVar1 + 0x1ec);
        fVar18 = *(float *)(iVar1 + 0x1bc) * fStack_28;
        fVar19 = afStack_60[2] * *(float *)(iVar1 + 0x1c0);
        fVar20 = fStack_28 * *(float *)(iVar1 + 0x1cc);
        fVar21 = *(float *)(iVar1 + 0x1d0) * afStack_60[2];
        fVar31 = *(float *)(iVar1 + 0x1d4) * fStack_48;
        fVar22 = fStack_28 * *(float *)(iVar1 + 0x1dc);
        fStack_28 = fStack_48 * *(float *)(iVar1 + 0x1e4) +
                    afStack_60[2] * *(float *)(iVar1 + 0x1e0) +
                    *(float *)(iVar1 + 0x1e8) * fStack_38 + fStack_28 * *(float *)(iVar1 + 0x1ec);
        fVar23 = *(float *)(iVar1 + 0x1bc) * fStack_24;
        fVar24 = afStack_60[3] * *(float *)(iVar1 + 0x1c0);
        fVar25 = fStack_24 * *(float *)(iVar1 + 0x1cc);
        fVar26 = *(float *)(iVar1 + 0x1d0) * afStack_60[3];
        fVar32 = *(float *)(iVar1 + 0x1d4) * fStack_44;
        fVar27 = fStack_24 * *(float *)(iVar1 + 0x1dc);
        fStack_24 = fStack_44 * *(float *)(iVar1 + 0x1e4) +
                    afStack_60[3] * *(float *)(iVar1 + 0x1e0) +
                    *(float *)(iVar1 + 0x1e8) * fStack_34 + fStack_24 * *(float *)(iVar1 + 0x1ec);
        afStack_60[0] =
             fStack_50 * *(float *)(iVar1 + 0x1b4) + afStack_60[0] * *pfVar7 +
             fStack_40 * *(float *)(iVar1 + 0x1b8) + fVar10;
        afStack_60[1] =
             fStack_4c * *(float *)(iVar1 + 0x1b4) + afStack_60[1] * *pfVar7 +
             fStack_3c * *(float *)(iVar1 + 0x1b8) + fVar13;
        afStack_60[2] =
             fStack_48 * *(float *)(iVar1 + 0x1b4) + afStack_60[2] * *pfVar7 +
             fStack_38 * *(float *)(iVar1 + 0x1b8) + fVar18;
        afStack_60[3] =
             fStack_44 * *(float *)(iVar1 + 0x1b4) + afStack_60[3] * *pfVar7 +
             fStack_34 * *(float *)(iVar1 + 0x1b8) + fVar23;
        fStack_50 = fStack_50 * *(float *)(iVar1 + 0x1c4) + fVar9 +
                    fStack_40 * *(float *)(iVar1 + 0x1c8) + fVar33;
        fStack_4c = fStack_4c * *(float *)(iVar1 + 0x1c4) + fVar14 +
                    fStack_3c * *(float *)(iVar1 + 0x1c8) + fVar15;
        fStack_48 = fStack_48 * *(float *)(iVar1 + 0x1c4) + fVar19 +
                    fStack_38 * *(float *)(iVar1 + 0x1c8) + fVar20;
        fStack_44 = fStack_44 * *(float *)(iVar1 + 0x1c4) + fVar24 +
                    fStack_34 * *(float *)(iVar1 + 0x1c8) + fVar25;
        fStack_40 = fVar29 + fVar11 + fStack_40 * *(float *)(iVar1 + 0x1d8) + fVar12;
        fStack_3c = fVar30 + fVar16 + fStack_3c * *(float *)(iVar1 + 0x1d8) + fVar17;
        fStack_38 = fVar31 + fVar21 + fStack_38 * *(float *)(iVar1 + 0x1d8) + fVar22;
        fStack_34 = fVar32 + fVar26 + fStack_34 * *(float *)(iVar1 + 0x1d8) + fVar27;
        FUN_00633e70(&local_70,&local_68,afStack_60,&local_a9,param_5);
        param_3 = local_8c;
      }
      local_a0 = (int *)*local_a0;
      in_ECX = local_90;
      param_1 = local_94;
    } while (local_a0 != (int *)*(int *)((int)local_90 + 0x2c));
  }
  local_a8 = local_6c;
  local_a4 = local_64;
  local_9c = local_68;
  local_98 = local_70;
  if ((((char)param_5 != '\0') &&
      (iVar1 = *(int *)((int)in_ECX + 0x3c), (*(byte *)(iVar1 + 0x200) & 1) != 0)) &&
     (0.0 < *(float *)(*(int *)(iVar1 + 500) + *(int *)(iVar1 + 0x1c8) * 4))) {
    local_90 = param_3[4] * 0.0 + *param_3;
    local_94 = (float *)(param_3[5] * 0.0 + param_3[1]);
    fVar9 = *param_3 * 0.0 + param_3[4];
    fVar10 = param_3[1] * 0.0 + param_3[5];
    dVar28 = (double)(fVar10 * fVar10 + fVar9 * fVar9);
    libm_sse2_sqrt_precise();
    local_8c = (float *)(float)dVar28;
    dVar28 = (double)((float)local_94 * (float)local_94 + local_90 * local_90);
    libm_sse2_sqrt_precise();
    fVar10 = ((float)local_8c + (float)dVar28) *
             *(float *)(*(int *)(iVar1 + 500) + *(int *)(iVar1 + 0x1c8) * 4) * 0.5;
    local_70 = local_98 - fVar10;
    local_6c = local_a8 - fVar10;
    local_68 = local_9c + fVar10;
    local_64 = local_a4 + fVar10;
  }
  if (local_a9 == '\0') {
    if (*local_80 == '\0') {
      pfVar6 = &local_70;
      if (*param_1 <= local_70 && local_70 != *param_1) {
        pfVar6 = param_1;
      }
      pfVar7 = param_1 + 1;
      *param_1 = *pfVar6;
      pfVar6 = &local_6c;
      if (*pfVar7 <= local_6c && local_6c != *pfVar7) {
        pfVar6 = pfVar7;
      }
      *pfVar7 = *pfVar6;
      pfVar6 = &local_68;
      if (local_68 < *local_88) {
        pfVar6 = local_88;
      }
      pfVar7 = local_88 + 1;
      *local_88 = *pfVar6;
      pfVar6 = &local_64;
      if (local_64 < *pfVar7) {
        pfVar6 = pfVar7;
      }
      *pfVar7 = *pfVar6;
    }
    else {
      *param_1 = local_70;
      param_1[1] = local_6c;
      *local_88 = local_68;
      local_88[1] = local_64;
      *local_80 = '\0';
    }
  }
  __security_check_cookie(local_c ^ (uint)auStack_ac);
  return;
}


/* FUN_006372a0 @ 006372a0  kind=gamemisc  attributed-by=none  size=551 */

void FUN_006372a0(undefined4 param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  char local_19;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined1 local_10 [4];
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  FUN_00636be0();
  local_c = local_c & 0xffffff00;
  if (((~(byte)(*(uint *)(in_ECX + 200) >> 2) & 1) != 0) &&
     (*(undefined1 *)(in_ECX + 0xcc) = 0,
     *(int *)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x94) +
             *(int *)(*(int *)(in_ECX + 0x3c) + 0x68) * 4) != 0)) {
    local_14 = CONCAT31(local_14._1_3_,(*(uint *)(in_ECX + 200) & 0x2000) != 0);
    if (*(int *)(in_ECX + 0x40) == 0) {
      if (*(int *)(in_ECX + 0x28) == 0) {
        *(undefined4 *)(in_ECX + 0x44) = 0;
      }
      else {
        *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(*(int *)(in_ECX + 0x28) + 0x44);
      }
    }
    else {
      *(int *)(in_ECX + 0x44) = *(int *)(in_ECX + 0x40);
    }
    if ((*(int *)(in_ECX + 0x34) != 0) && (*(char *)(*(int *)(in_ECX + 0x34) + 0x2e) == '\0')) {
      FUN_00664cf0(param_1);
    }
    if ((*(int *)(in_ECX + 0x38) != 0) && (*(char *)(*(int *)(in_ECX + 0x38) + 0x2e) == '\0')) {
      FUN_00664cf0(param_1);
    }
    if ((*(int *)(in_ECX + 0x3c) != 0) && (*(char *)(*(int *)(in_ECX + 0x3c) + 0x2e) == '\0')) {
      FUN_00664cf0(param_1);
    }
    if ((*(int *)(in_ECX + 0x38) != 0) && (*(char *)(*(int *)(in_ECX + 0x38) + 0x2d) != '\0')) {
      local_c = CONCAT31(local_c._1_3_,1);
      FUN_006371b0();
    }
    if (*(int **)(in_ECX + 0x40) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x40) + 0x6c))();
    }
    if ((*(int *)(in_ECX + 0x34) != 0) && (*(char *)(*(int *)(in_ECX + 0x34) + 0x2d) != '\0')) {
      *(undefined1 *)(in_ECX + 0xcc) = 1;
    }
    if ((*(int *)(in_ECX + 0x38) != 0) && (*(char *)(*(int *)(in_ECX + 0x38) + 0x2d) != '\0')) {
      *(undefined1 *)(in_ECX + 0xcc) = 1;
    }
    if ((*(int *)(in_ECX + 0x3c) != 0) && (*(char *)(*(int *)(in_ECX + 0x3c) + 0x2d) != '\0')) {
      *(undefined1 *)(in_ECX + 0xcc) = 1;
    }
    if ((*(int *)(in_ECX + 0x40) != 0) && (*(char *)(*(int *)(in_ECX + 0x40) + 0x134) != '\0')) {
      *(undefined1 *)(in_ECX + 0xcc) = 1;
    }
    iVar3 = FUN_006531e0();
    if ((iVar3 != 0) && (iVar3 = FUN_006531e0(), iVar3 == *(int *)(in_ECX + 0x40))) {
      *(undefined1 *)(in_ECX + 0xcc) = 1;
    }
    uVar1 = local_c;
    piVar4 = (int *)**(int **)(in_ECX + 0x2c);
    if (piVar4 != *(int **)(in_ECX + 0x2c)) {
      do {
        cVar2 = FUN_006374d0(param_1,uVar1,local_14);
        if (cVar2 != '\0') {
          *(undefined1 *)(in_ECX + 0xcc) = 1;
        }
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)*(int *)(in_ECX + 0x2c));
    }
    if ((((*(uint *)(in_ECX + 200) >> 7 & 1) != 0) && (*(char *)(in_ECX + 0xcc) != '\0')) &&
       (*(int *)(in_ECX + 0x34) != 0)) {
      local_19 = '\x01';
      piVar4 = (int *)**(int **)(in_ECX + 0x2c);
      if (piVar4 != *(int **)(in_ECX + 0x2c)) {
        do {
          if ((~(byte)(*(uint *)(piVar4[2] + 200) >> 2) & 1) != 0) {
            FUN_00633e70(local_10,local_18,*(int *)(piVar4[2] + 0x38) + 0x1b0,&local_19,0);
          }
          piVar4 = (int *)*piVar4;
        } while (piVar4 != (int *)*(int *)(in_ECX + 0x2c));
        if (local_19 == '\0') {
          (**(code **)(**(int **)(in_ECX + 0x34) + 0x48))(local_10,local_18);
          (**(code **)(**(int **)(in_ECX + 0x34) + 4))(1);
        }
      }
    }
  }
  FUN_00636c40();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_006374d0 @ 006374d0  kind=gamemisc  attributed-by=none  size=558 */

void FUN_006374d0(undefined4 param_1,char param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  char local_19;
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (((~(byte)(*(uint *)(in_ECX + 200) >> 2) & 1) == 0) ||
     ((*(undefined1 *)(in_ECX + 0xcc) = 0,
      *(int *)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x94) +
              *(int *)(*(int *)(in_ECX + 0x3c) + 0x68) * 4) == 0 && (param_3 == '\0')))) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if ((*(uint *)(in_ECX + 200) & 0x2000) != 0) {
    param_3 = '\x01';
  }
  if (*(int *)(in_ECX + 0x40) == 0) {
    if (*(int *)(in_ECX + 0x28) == 0) {
      *(undefined4 *)(in_ECX + 0x44) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(*(int *)(in_ECX + 0x28) + 0x44);
    }
  }
  else {
    *(int *)(in_ECX + 0x44) = *(int *)(in_ECX + 0x40);
  }
  if ((*(int *)(in_ECX + 0x34) != 0) && (*(char *)(*(int *)(in_ECX + 0x34) + 0x2e) == '\0')) {
    FUN_00664cf0(param_1);
  }
  if ((*(int *)(in_ECX + 0x38) != 0) && (*(char *)(*(int *)(in_ECX + 0x38) + 0x2e) == '\0')) {
    FUN_00664cf0(param_1);
  }
  if ((*(int *)(in_ECX + 0x3c) != 0) && (*(char *)(*(int *)(in_ECX + 0x3c) + 0x2e) == '\0')) {
    FUN_00664cf0(param_1);
  }
  if ((*(int *)(in_ECX + 0x38) == 0) || (*(char *)(*(int *)(in_ECX + 0x38) + 0x2d) == '\0')) {
    if (param_2 == '\0') goto LAB_006375bb;
  }
  else {
    param_2 = '\x01';
  }
  FUN_006371b0();
LAB_006375bb:
  if (*(int **)(in_ECX + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x40) + 0x6c))();
  }
  if ((*(int *)(in_ECX + 0x34) != 0) && (*(char *)(*(int *)(in_ECX + 0x34) + 0x2d) != '\0')) {
    *(undefined1 *)(in_ECX + 0xcc) = 1;
  }
  if ((*(int *)(in_ECX + 0x38) != 0) && (*(char *)(*(int *)(in_ECX + 0x38) + 0x2d) != '\0')) {
    *(undefined1 *)(in_ECX + 0xcc) = 1;
  }
  if ((*(int *)(in_ECX + 0x3c) != 0) && (*(char *)(*(int *)(in_ECX + 0x3c) + 0x2d) != '\0')) {
    *(undefined1 *)(in_ECX + 0xcc) = 1;
  }
  if ((*(int *)(in_ECX + 0x40) != 0) && (*(char *)(*(int *)(in_ECX + 0x40) + 0x134) != '\0')) {
    *(undefined1 *)(in_ECX + 0xcc) = 1;
  }
  iVar2 = FUN_006531e0();
  if ((iVar2 != 0) && (iVar2 = FUN_006531e0(), iVar2 == *(int *)(in_ECX + 0x40))) {
    *(undefined1 *)(in_ECX + 0xcc) = 1;
  }
  piVar3 = (int *)**(int **)(in_ECX + 0x2c);
  if (piVar3 != *(int **)(in_ECX + 0x2c)) {
    do {
      cVar1 = FUN_006374d0(param_1,param_2,param_3);
      if (cVar1 != '\0') {
        *(undefined1 *)(in_ECX + 0xcc) = 1;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(in_ECX + 0x2c));
  }
  if ((((*(uint *)(in_ECX + 200) >> 7 & 1) != 0) && (*(char *)(in_ECX + 0xcc) != '\0')) &&
     (*(int *)(in_ECX + 0x34) != 0)) {
    local_19 = '\x01';
    piVar3 = (int *)**(int **)(in_ECX + 0x2c);
    if (piVar3 != *(int **)(in_ECX + 0x2c)) {
      do {
        if ((~(byte)(*(uint *)(piVar3[2] + 200) >> 2) & 1) != 0) {
          FUN_00633e70(local_18,local_10,*(int *)(piVar3[2] + 0x38) + 0x1b0,&local_19,0);
        }
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)*(int *)(in_ECX + 0x2c));
      if (local_19 == '\0') {
        (**(code **)(**(int **)(in_ECX + 0x34) + 0x48))(local_18,local_10);
        (**(code **)(**(int **)(in_ECX + 0x34) + 4))(1);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_006391e0 @ 006391e0  kind=gamemisc  attributed-by=none  size=47 */

void FUN_006391e0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x34);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006391ee. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
    std::_Xbad_alloc();
    return;
  }
  *(void **)pvVar1 = pvVar1;
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 8) = pvVar1;
  }
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


/* FUN_00639470 @ 00639470  kind=gamemisc  attributed-by=none  size=189 */

undefined4 * FUN_00639470(undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00639300(piVar2[1]);
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
    FUN_00639530(local_8,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return param_1;
}


/* FUN_00639530 @ 00639530  kind=gamemisc  attributed-by=none  size=660 */

/* WARNING: Removing unreachable block (ram,0x006395fd) */
/* WARNING: Removing unreachable block (ram,0x0063960d) */
/* WARNING: Removing unreachable block (ram,0x00639616) */
/* WARNING: Removing unreachable block (ram,0x00639619) */
/* WARNING: Removing unreachable block (ram,0x00639609) */
/* WARNING: Removing unreachable block (ram,0x00639627) */
/* WARNING: Removing unreachable block (ram,0x00639636) */
/* WARNING: Removing unreachable block (ram,0x00639641) */
/* WARNING: Removing unreachable block (ram,0x0063963d) */
/* WARNING: Removing unreachable block (ram,0x00639631) */
/* WARNING: Removing unreachable block (ram,0x00639644) */

void FUN_00639530(undefined4 param_1,int *param_2)

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
              goto LAB_0063978e;
            }
LAB_00639730:
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
            goto LAB_00639730;
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
            goto LAB_0063978e;
          }
        }
        piVar5 = (int *)piVar3[1];
        piVar6 = piVar3;
      } while (piVar3 != *(int **)(*in_ECX + 4));
    }
    *(undefined1 *)(piVar6 + 3) = 1;
  }
LAB_0063978e:
  if ((void *)param_2[10] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_2[10]);
  }
  if (7 < (uint)param_2[9]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_2[4]);
  }
  param_2[9] = 7;
  param_2[8] = 0;
  *(undefined2 *)(param_2 + 4) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_2);
}


/* FUN_00639800 @ 00639800  kind=gamemisc  attributed-by=none  size=592 */

void FUN_00639800(int param_1)

{
  char cVar1;
  ScalableFont *pSVar2;
  ScalableFont *pSVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int in_ECX;
  ScalableFont **ppSVar8;
  int *piVar9;
  undefined1 local_74 [4];
  int local_70;
  LPCRITICAL_SECTION local_6c;
  ScalableFont *local_68;
  ScalableFont *local_64;
  char local_5d;
  void *local_5c [5];
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5b33;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_6c = (LPCRITICAL_SECTION)(in_ECX + 0x24);
  local_70 = param_1;
  EnterCriticalSection(local_6c);
  local_64 = (ScalableFont *)0x2f;
  pSVar2 = (ScalableFont *)FUN_00639a70(&local_64,0xffffffff,1);
  local_64 = (ScalableFont *)0x5c;
  local_68 = pSVar2;
  local_64 = (ScalableFont *)FUN_00639a70(&local_64,0xffffffff,1);
  ppSVar8 = &local_64;
  if ((int)local_64 <= (int)pSVar2) {
    ppSVar8 = &local_68;
  }
  FUN_0043a450(local_2c,(undefined1 *)((int)&(*ppSVar8)->vftablePtr + 1),
               (*(int *)(param_1 + 0x10) - (int)*ppSVar8) + -1);
  pSVar2 = (ScalableFont *)(in_ECX + 0x10);
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  local_64 = pSVar2;
  pSVar3 = (ScalableFont *)FUN_004e3790(local_2c);
  if (pSVar3 != (ScalableFont *)pSVar2->vftablePtr) {
    puVar4 = &(pSVar3->ScalableFont_data).field_0xc;
    if (7 < *(uint *)&(pSVar3->ScalableFont_data).field_0x20) {
      puVar4 = *(undefined1 **)puVar4;
    }
    iVar5 = FUN_00428db0(0,local_1c,puVar4,*(undefined4 *)&(pSVar3->ScalableFont_data).offset_0x1c);
    local_68 = pSVar3;
    if (-1 < iVar5) goto LAB_006398e0;
  }
  local_68 = (ScalableFont *)pSVar2->vftablePtr;
LAB_006398e0:
  if (local_68 == (ScalableFont *)pSVar2->vftablePtr) {
    local_68 = operator_new(0x124);
    local_8._0_1_ = 1;
    if (local_68 == (ScalableFont *)0x0) {
      pSVar2 = (ScalableFont *)0x0;
    }
    else {
      pSVar2 = plasma::ScalableFont::ScalableFont(local_68,*(undefined4 *)(in_ECX + 4));
    }
    local_8._0_1_ = 0;
    puVar6 = (undefined4 *)FUN_00661830(local_2c);
    *puVar6 = pSVar2;
    cVar1 = FUN_0065f260(*(undefined4 *)(in_ECX + 0x18),local_70,in_ECX + 8);
    if (cVar1 == '\0') {
      piVar9 = (int *)**(int **)(in_ECX + 0x1c);
      cVar1 = local_5d;
      if (piVar9 != *(int **)(in_ECX + 0x1c)) {
        do {
          local_5d = cVar1;
          uVar7 = FUN_00451850(local_5c,piVar9 + 2,&DAT_006fd42c);
          local_8._0_1_ = 2;
          uVar7 = FUN_004517d0(local_44,uVar7,local_2c);
          local_8._0_1_ = 3;
          local_5d = FUN_0065f260(*(undefined4 *)(in_ECX + 0x18),uVar7,0);
          if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_44[0]);
          }
          local_30 = 7;
          local_34 = 0;
          local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
          local_8._0_1_ = 0;
          if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_5c[0]);
          }
          if (local_5d != '\0') goto LAB_00639a1f;
          piVar9 = (int *)*piVar9;
          cVar1 = '\0';
        } while (piVar9 != (int *)*(int *)(in_ECX + 0x1c));
      }
      if (pSVar2 != (ScalableFont *)0x0) {
        (*pSVar2->vftablePtr->deleting_destructor)(pSVar2,1);
      }
      puVar6 = (undefined4 *)FUN_00639210(local_74,local_2c);
      FUN_00661a20(&local_70,*puVar6,puVar6[1]);
      LeaveCriticalSection(local_6c);
    }
    else {
LAB_00639a1f:
      LeaveCriticalSection(local_6c);
    }
  }
  else {
    LeaveCriticalSection(local_6c);
  }
  if (local_18 < 8) {
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_2c[0]);
}


/* FUN_0063dc90 @ 0063dc90  kind=gamemisc  attributed-by=none  size=115 */

void FUN_0063dc90(uint param_1)

{
  int *in_ECX;
  uint uVar1;
  
  if (param_1 <= (uint)(in_ECX[2] - in_ECX[1] >> 2)) {
    return;
  }
  if (0x3fffffffU - (in_ECX[1] - *in_ECX >> 2) < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = in_ECX[2] - *in_ECX >> 2;
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
    FUN_0063da20();
    return;
  }
  FUN_0063da20();
  return;
}


/* FUN_0063e020 @ 0063e020  kind=gamemisc  attributed-by=none  size=2526 */

void FUN_0063e020(int param_1,int param_2,float param_3,int param_4,int param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  undefined4 *puVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  int local_e8;
  float local_e4;
  float local_e0;
  int local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  float local_ac [4];
  float local_9c;
  float fStack_98;
  float local_94;
  float fStack_90;
  float local_8c;
  float fStack_88;
  float local_84;
  float fStack_80;
  float local_7c;
  float fStack_78;
  float local_74;
  float fStack_70;
  float local_6c;
  float fStack_68;
  float local_64;
  float fStack_60;
  float local_5c;
  float fStack_58;
  float local_54;
  float fStack_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)&local_e8;
  iVar1 = *(int *)(in_ECX + 0xbcc);
  local_e0 = (float)(param_1 * 0xc);
  local_e4 = (float)((param_2 + 2U) %
                    (uint)(*(int *)(iVar1 + 4 + (int)local_e0) - *(int *)(iVar1 + (int)local_e0) >>
                          3));
  iVar1 = *(int *)(iVar1 + (int)local_e0);
  local_d4 = 1.0 - param_3;
  iVar7 = *(int *)((int)local_e0 + *(int *)(in_ECX + 0xbe4));
  fStack_70 = 0.5;
  fStack_78 = local_d4 * 0.5 *
              (*(float *)(iVar1 + 0xc + param_2 * 8) + *(float *)(iVar1 + 4 + param_2 * 8)) +
              param_3 * 0.5 *
              (*(float *)(iVar1 + 0xc + (int)local_e4 * 8) +
              *(float *)(iVar1 + 4 + (int)local_e4 * 8));
  local_7c = local_d4 * 0.5 *
             (*(float *)(iVar1 + 8 + param_2 * 8) + *(float *)(iVar1 + param_2 * 8)) +
             param_3 * 0.5 *
             (*(float *)(iVar1 + 8 + (int)local_e4 * 8) + *(float *)(iVar1 + (int)local_e4 * 8));
  local_6c = (local_d4 * *(float *)(iVar1 + param_2 * 8) +
             *(float *)(iVar1 + (int)local_e4 * 8) * param_3) - local_7c;
  fStack_68 = (local_d4 * *(float *)(iVar1 + 4 + param_2 * 8) +
              *(float *)(iVar1 + 4 + (int)local_e4 * 8) * param_3) - fStack_78;
  fStack_50 = -local_6c;
  local_74 = *(float *)(iVar7 + (int)local_e4 * 8) * param_3 +
             local_d4 * *(float *)(iVar7 + param_2 * 8);
  dVar10 = (double)(fStack_50 * fStack_50 + fStack_68 * fStack_68);
  local_e8 = in_ECX;
  local_54 = fStack_68;
  libm_sse2_sqrt_precise();
  fVar9 = local_e4;
  fVar12 = (*(float *)(iVar1 + 8 + param_2 * 8) + *(float *)(iVar1 + param_2 * 8)) * 0.5 -
           (*(float *)(iVar1 + 8 + (int)local_e4 * 8) + *(float *)(iVar1 + (int)local_e4 * 8)) * 0.5
  ;
  fVar11 = (*(float *)(iVar1 + 0xc + param_2 * 8) + *(float *)(iVar1 + 4 + param_2 * 8)) * 0.5 -
           (*(float *)(iVar1 + 0xc + (int)local_e4 * 8) + *(float *)(iVar1 + 4 + (int)local_e4 * 8))
           * 0.5;
  local_d8 = (*(float *)(iVar7 + (int)local_e4 * 8) - *(float *)(iVar7 + param_2 * 8)) *
             (float)dVar10;
  dVar10 = (double)(fVar12 * fVar12 + fVar11 * fVar11);
  libm_sse2_sqrt_precise();
  local_64 = -(local_d8 / (float)dVar10);
  iVar1 = *(int *)((int)local_e0 + *(int *)(local_e8 + 0xbd8));
  pfVar6 = (float *)((int)fVar9 * 0x10 + iVar1);
  local_d8 = 0.0;
  pfVar5 = (float *)(param_2 * 0x10 + iVar1);
  local_ac[0] = local_d4 * *pfVar5 + *pfVar6 * param_3;
  local_ac[1] = local_d4 * pfVar5[1] + pfVar6[1] * param_3;
  local_ac[2] = local_d4 * pfVar5[2] + pfVar6[2] * param_3;
  local_ac[3] = local_d4 * pfVar5[3] + pfVar6[3] * param_3;
  fStack_60 = 0.0;
  local_5c = 0.0;
  fStack_58 = -0.5;
  if (param_4 != 0) {
    local_d8 = (0.5 / (float)param_5 + 1.0) * 1.5707964 + 0.0;
  }
  local_d4 = 0.0;
  if (0 < param_5) {
    local_d0 = (float)param_5 + 0.5;
    do {
      local_e4 = (((float)(int)local_d4 + 0.5) * 1.5707964) / local_d0 + local_d8;
      dVar10 = (double)local_e4;
      libm_sse2_cos_precise();
      local_e0 = (float)dVar10;
      dVar10 = (double)local_e4;
      libm_sse2_sin_precise();
      uVar13 = CONCAT44(fStack_78,local_7c);
      local_e4 = (float)dVar10;
      local_4c = CONCAT44(fStack_68,local_6c);
      local_14 = CONCAT44(fStack_50,local_54);
      fVar9 = local_7c + local_54 * local_e0;
      iVar1 = *(int *)(local_e8 + 0xc14);
      puVar2 = *(undefined8 **)(iVar1 + 8);
      fVar11 = fStack_78 + fStack_50 * local_e0;
      _local_94 = CONCAT44(fVar11,fVar9);
      local_cc = CONCAT44(fVar11 + fStack_68 * local_e4,fVar9 + local_6c * local_e4);
      if (&local_cc < puVar2) {
        if (&local_cc < *(undefined8 **)(iVar1 + 4)) goto LAB_0063e4dc;
        iVar7 = (int)&local_cc - (int)*(undefined8 **)(iVar1 + 4) >> 3;
        if (puVar2 == *(undefined8 **)(iVar1 + 0xc)) {
          FUN_00428c80(1);
          uVar13 = CONCAT44(fStack_78,local_7c);
        }
        puVar3 = *(undefined4 **)(iVar1 + 8);
        local_dc = *(int *)(iVar1 + 4);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *(undefined4 *)(local_dc + iVar7 * 8);
          puVar3[1] = *(undefined4 *)(local_dc + 4 + iVar7 * 8);
        }
      }
      else {
LAB_0063e4dc:
        if (puVar2 == *(undefined8 **)(iVar1 + 0xc)) {
          FUN_00428c80(1);
          uVar13 = CONCAT44(fStack_78,local_7c);
        }
        if (*(undefined8 **)(iVar1 + 8) != (undefined8 *)0x0) {
          **(undefined8 **)(iVar1 + 8) = local_cc;
        }
      }
      local_3c = CONCAT44(fStack_68,local_6c);
      local_1c = CONCAT44(fStack_50,local_54);
      local_8c = (float)uVar13;
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 8;
      iVar1 = *(int *)(local_e8 + 0xc14);
      local_8c = local_8c + local_54 * local_e0;
      puVar2 = *(undefined8 **)(iVar1 + 8);
      fStack_88 = (float)((ulonglong)uVar13 >> 0x20);
      fStack_88 = fStack_88 + fStack_50 * local_e0;
      local_b4 = CONCAT44(fStack_88 - fStack_68 * local_e4,local_8c - local_6c * local_e4);
      if (&local_b4 < puVar2) {
        if (&local_b4 < *(undefined8 **)(iVar1 + 4)) goto LAB_0063e614;
        iVar7 = (int)&local_b4 - (int)*(undefined8 **)(iVar1 + 4) >> 3;
        if (puVar2 == *(undefined8 **)(iVar1 + 0xc)) {
          FUN_00428c80(1);
        }
        puVar3 = *(undefined4 **)(iVar1 + 8);
        local_dc = *(int *)(iVar1 + 4);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *(undefined4 *)(local_dc + iVar7 * 8);
          puVar3[1] = *(undefined4 *)(local_dc + 4 + iVar7 * 8);
        }
      }
      else {
LAB_0063e614:
        if (puVar2 == *(undefined8 **)(iVar1 + 0xc)) {
          FUN_00428c80(1);
        }
        if (*(undefined8 **)(iVar1 + 8) != (undefined8 *)0x0) {
          **(undefined8 **)(iVar1 + 8) = local_b4;
        }
      }
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 8;
      iVar1 = *(int *)(local_e8 + 0xc14);
      pfVar5 = *(float **)(iVar1 + 0x20);
      if (local_ac < pfVar5) {
        pfVar6 = *(float **)(iVar1 + 0x1c);
        if (local_ac < pfVar6) goto LAB_0063e692;
        if (pfVar5 == *(float **)(iVar1 + 0x24)) {
          FUN_00428d00(1);
        }
        puVar3 = *(undefined4 **)(iVar1 + 0x20);
        puVar8 = (undefined4 *)
                 (((int)local_ac - (int)pfVar6 & 0xfffffff0U) + *(int *)(iVar1 + 0x1c));
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *puVar8;
          puVar3[1] = puVar8[1];
          puVar3[2] = puVar8[2];
          puVar3[3] = puVar8[3];
        }
      }
      else {
LAB_0063e692:
        if (pfVar5 == *(float **)(iVar1 + 0x24)) {
          FUN_00428d00(1);
        }
        puVar2 = *(undefined8 **)(iVar1 + 0x20);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = CONCAT44(local_ac[1],local_ac[0]);
          puVar2[1] = CONCAT44(local_ac[3],local_ac[2]);
        }
      }
      *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 0x10;
      iVar1 = *(int *)(local_e8 + 0xc14);
      pfVar5 = *(float **)(iVar1 + 0x20);
      if (local_ac < pfVar5) {
        pfVar6 = *(float **)(iVar1 + 0x1c);
        if (local_ac < pfVar6) goto LAB_0063e71b;
        if (pfVar5 == *(float **)(iVar1 + 0x24)) {
          FUN_00428d00(1);
        }
        puVar3 = *(undefined4 **)(iVar1 + 0x20);
        puVar8 = (undefined4 *)
                 (((int)local_ac - (int)pfVar6 & 0xfffffff0U) + *(int *)(iVar1 + 0x1c));
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *puVar8;
          puVar3[1] = puVar8[1];
          puVar3[2] = puVar8[2];
          puVar3[3] = puVar8[3];
        }
      }
      else {
LAB_0063e71b:
        if (pfVar5 == *(float **)(iVar1 + 0x24)) {
          FUN_00428d00(1);
        }
        puVar2 = *(undefined8 **)(iVar1 + 0x20);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = CONCAT44(local_ac[1],local_ac[0]);
          puVar2[1] = CONCAT44(local_ac[3],local_ac[2]);
        }
      }
      local_2c = CONCAT44(fStack_58,local_5c);
      uVar13 = CONCAT44(fStack_70,local_74);
      local_44 = CONCAT44(fStack_60,local_64);
      *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 0x10;
      iVar1 = *(int *)(local_e8 + 0xc14);
      fVar9 = local_74 + local_64 * local_e0;
      puVar2 = *(undefined8 **)(iVar1 + 0x14);
      fVar11 = fStack_70 + fStack_60 * local_e0;
      _local_84 = CONCAT44(fVar11,fVar9);
      local_c4 = CONCAT44(fVar11 + fStack_58 * local_e4,fVar9 + local_5c * local_e4);
      if (&local_c4 < puVar2) {
        if (&local_c4 < *(undefined8 **)(iVar1 + 0x10)) goto LAB_0063e870;
        iVar7 = (int)&local_c4 - (int)*(undefined8 **)(iVar1 + 0x10) >> 3;
        if (puVar2 == *(undefined8 **)(iVar1 + 0x18)) {
          FUN_00428c80(1);
          uVar13 = CONCAT44(fStack_70,local_74);
        }
        puVar3 = *(undefined4 **)(iVar1 + 0x14);
        local_dc = *(int *)(iVar1 + 0x10);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *(undefined4 *)(local_dc + iVar7 * 8);
          puVar3[1] = *(undefined4 *)(local_dc + 4 + iVar7 * 8);
        }
      }
      else {
LAB_0063e870:
        if (puVar2 == *(undefined8 **)(iVar1 + 0x18)) {
          FUN_00428c80(1);
          uVar13 = CONCAT44(fStack_70,local_74);
        }
        if (*(undefined8 **)(iVar1 + 0x14) != (undefined8 *)0x0) {
          **(undefined8 **)(iVar1 + 0x14) = local_c4;
        }
      }
      local_34 = CONCAT44(fStack_58,local_5c);
      local_24 = CONCAT44(fStack_60,local_64);
      local_9c = (float)uVar13;
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 8;
      iVar1 = *(int *)(local_e8 + 0xc14);
      local_9c = local_9c + local_64 * local_e0;
      puVar2 = *(undefined8 **)(iVar1 + 0x14);
      fStack_98 = (float)((ulonglong)uVar13 >> 0x20);
      fStack_98 = fStack_98 + fStack_60 * local_e0;
      local_bc = CONCAT44(fStack_98 - fStack_58 * local_e4,local_9c - local_5c * local_e4);
      if (&local_bc < puVar2) {
        if (&local_bc < *(undefined8 **)(iVar1 + 0x10)) goto LAB_0063e99e;
        iVar7 = (int)&local_bc - (int)*(undefined8 **)(iVar1 + 0x10) >> 3;
        if (puVar2 == *(undefined8 **)(iVar1 + 0x18)) {
          FUN_00428c80(1);
        }
        puVar3 = *(undefined4 **)(iVar1 + 0x14);
        iVar4 = *(int *)(iVar1 + 0x10);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *(undefined4 *)(iVar4 + iVar7 * 8);
          puVar3[1] = *(undefined4 *)(iVar4 + 4 + iVar7 * 8);
        }
      }
      else {
LAB_0063e99e:
        if (puVar2 == *(undefined8 **)(iVar1 + 0x18)) {
          FUN_00428c80(1);
        }
        if (*(undefined8 **)(iVar1 + 0x14) != (undefined8 *)0x0) {
          **(undefined8 **)(iVar1 + 0x14) = local_bc;
        }
      }
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 8;
      local_d4 = (float)((int)local_d4 + 1);
    } while ((int)local_d4 < param_5);
  }
  __security_check_cookie(local_c ^ (uint)&local_e8);
  return;
}


/* FUN_0063ea00 @ 0063ea00  kind=gamemisc  attributed-by=none  size=1307 */

void FUN_0063ea00(int param_1,int param_2,float param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  float *pfVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  undefined1 auStack_60 [4];
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  int local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34 [3];
  float local_28;
  float local_24;
  float local_20;
  float local_1c [4];
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)auStack_60;
  iVar1 = *(int *)(in_ECX + 0xbcc);
  local_54 = (float)(param_1 * 0xc);
  local_58 = (float)((param_2 + 2U) %
                    (uint)(*(int *)(iVar1 + 4 + (int)local_54) - *(int *)(iVar1 + (int)local_54) >>
                          3));
  iVar1 = *(int *)(iVar1 + (int)local_54);
  local_50 = 1.0 - param_3;
  iVar2 = *(int *)((int)local_54 + *(int *)(in_ECX + 0xbe4));
  local_44 = (*(float *)(iVar1 + 0xc + param_2 * 8) + *(float *)(iVar1 + 4 + param_2 * 8)) *
             local_50 * 0.5 +
             (*(float *)(iVar1 + 0xc + (int)local_58 * 8) +
             *(float *)(iVar1 + 4 + (int)local_58 * 8)) * param_3 * 0.5;
  local_40 = (*(float *)(iVar1 + param_2 * 8) + *(float *)(iVar1 + 8 + param_2 * 8)) *
             local_50 * 0.5 +
             (*(float *)(iVar1 + (int)local_58 * 8) + *(float *)(iVar1 + 8 + (int)local_58 * 8)) *
             param_3 * 0.5;
  local_48 = (*(float *)(iVar1 + 4 + param_2 * 8) * local_50 +
             *(float *)(iVar1 + 4 + (int)local_58 * 8) * param_3) - local_44;
  local_24 = (*(float *)(iVar1 + param_2 * 8) * local_50 +
             *(float *)(iVar1 + (int)local_58 * 8) * param_3) - local_40;
  local_34[0] = *(float *)(iVar2 + (int)local_58 * 8) * param_3 +
                local_50 * *(float *)(iVar2 + param_2 * 8);
  local_3c = -local_24;
  dVar8 = (double)(local_3c * local_3c + local_48 * local_48);
  local_4c = in_ECX;
  local_34[2] = local_48;
  libm_sse2_sqrt_precise();
  fVar7 = (*(float *)(iVar1 + 0xc + param_2 * 8) + *(float *)(iVar1 + 4 + param_2 * 8)) * 0.5 -
          (*(float *)(iVar1 + 0xc + (int)local_58 * 8) + *(float *)(iVar1 + 4 + (int)local_58 * 8))
          * 0.5;
  fVar9 = (*(float *)(iVar1 + param_2 * 8) + *(float *)(iVar1 + 8 + param_2 * 8)) * 0.5 -
          (*(float *)(iVar1 + (int)local_58 * 8) + *(float *)(iVar1 + 8 + (int)local_58 * 8)) * 0.5;
  local_5c = (*(float *)(iVar2 + (int)local_58 * 8) - *(float *)(iVar2 + param_2 * 8)) *
             (float)dVar8;
  dVar8 = (double)(fVar9 * fVar9 + fVar7 * fVar7);
  libm_sse2_sqrt_precise();
  iVar1 = local_4c;
  local_5c = -(local_5c / (float)dVar8);
  if (param_4 != 0) {
    local_34[2] = local_48 * -1.0;
    local_5c = -local_5c;
    local_3c = local_3c * -1.0;
  }
  iVar2 = *(int *)((int)local_54 + *(int *)(local_4c + 0xbd8));
  pfVar4 = (float *)((int)local_58 * 0x10 + iVar2);
  pfVar5 = (float *)(param_2 * 0x10 + iVar2);
  local_58 = *pfVar4 * param_3 + local_50 * *pfVar5;
  local_40 = local_40 + local_34[2];
  local_54 = pfVar4[1] * param_3 + local_50 * pfVar5[1];
  local_44 = local_44 + local_3c;
  local_34[2] = local_40 + local_24;
  local_38 = pfVar4[2] * param_3 + local_50 * pfVar5[2];
  local_50 = local_50 * pfVar5[3] + pfVar4[3] * param_3;
  local_28 = local_44 + local_48;
  local_1c[0] = local_58;
  local_1c[1] = local_54;
  local_1c[2] = local_38;
  local_1c[3] = local_50;
  FUN_00642590(local_34 + 2);
  local_24 = local_40 - local_24;
  local_20 = local_44 - local_48;
  FUN_00642590(&local_24);
  iVar2 = *(int *)(iVar1 + 0xc14);
  pfVar4 = *(float **)(iVar2 + 0x20);
  if (local_1c < pfVar4) {
    pfVar5 = *(float **)(iVar2 + 0x1c);
    if (local_1c < pfVar5) goto LAB_0063edcc;
    if (pfVar4 == *(float **)(iVar2 + 0x24)) {
      FUN_00428d00(1);
    }
    puVar3 = *(undefined4 **)(iVar2 + 0x20);
    puVar6 = (undefined4 *)(((int)local_1c - (int)pfVar5 & 0xfffffff0U) + *(int *)(iVar2 + 0x1c));
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *puVar6;
      puVar3[1] = puVar6[1];
      puVar3[2] = puVar6[2];
      puVar3[3] = puVar6[3];
    }
  }
  else {
LAB_0063edcc:
    if (pfVar4 == *(float **)(iVar2 + 0x24)) {
      FUN_00428d00(1);
    }
    pfVar4 = *(float **)(iVar2 + 0x20);
    local_4c = iVar1;
    if (pfVar4 != (float *)0x0) {
      *pfVar4 = local_58;
      pfVar4[1] = local_54;
      pfVar4[2] = local_38;
      pfVar4[3] = local_50;
    }
  }
  *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 0x10;
  iVar1 = *(int *)(local_4c + 0xc14);
  pfVar4 = *(float **)(iVar1 + 0x20);
  if (local_1c < pfVar4) {
    pfVar5 = *(float **)(iVar1 + 0x1c);
    if (pfVar5 <= local_1c) {
      if (pfVar4 == *(float **)(iVar1 + 0x24)) {
        FUN_00428d00(1);
      }
      puVar3 = *(undefined4 **)(iVar1 + 0x20);
      puVar6 = (undefined4 *)(((int)local_1c - (int)pfVar5 & 0xfffffff0U) + *(int *)(iVar1 + 0x1c));
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar6;
        puVar3[1] = puVar6[1];
        puVar3[2] = puVar6[2];
        puVar3[3] = puVar6[3];
      }
      goto LAB_0063eeaa;
    }
  }
  if (pfVar4 == *(float **)(iVar1 + 0x24)) {
    FUN_00428d00(1);
  }
  pfVar4 = *(float **)(iVar1 + 0x20);
  if (pfVar4 != (float *)0x0) {
    *pfVar4 = local_58;
    pfVar4[1] = local_54;
    pfVar4[2] = local_38;
    pfVar4[3] = local_50;
  }
LAB_0063eeaa:
  local_5c = local_5c + local_34[0];
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 0x10;
  local_34[1] = 0.0;
  local_34[0] = local_5c;
  FUN_00642590(local_34);
  local_34[0] = local_5c;
  local_34[1] = 1.0;
  FUN_00642590(local_34);
  __security_check_cookie(local_c ^ (uint)auStack_60);
  return;
}


/* FUN_0063ef20 @ 0063ef20  kind=gamemisc  attributed-by=none  size=1168 */

void FUN_0063ef20(int param_1,int param_2,float param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  int in_ECX;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28 [4];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  param_1 = param_1 * 0xc;
  iVar1 = *(int *)(in_ECX + 0xbcc);
  uVar6 = (param_2 + 2U) % (uint)(*(int *)(param_1 + 4 + iVar1) - *(int *)(param_1 + iVar1) >> 3);
  iVar2 = *(int *)(param_1 + iVar1);
  fVar11 = 1.0 - param_3;
  iVar9 = param_2 * 8;
  iVar1 = uVar6 * 8;
  local_10 = *(float *)(iVar9 + iVar2) * fVar11 + *(float *)(iVar1 + iVar2) * param_3;
  local_c = *(float *)(iVar9 + 4 + iVar2) * fVar11 + *(float *)(iVar1 + 4 + iVar2) * param_3;
  local_14 = (float)iVar9;
  FUN_00642590(&local_10);
  iVar2 = *(int *)(param_1 + *(int *)(in_ECX + 0xbcc));
  local_10 = *(float *)(iVar9 + 8 + iVar2) * fVar11 + *(float *)(iVar2 + 8 + iVar1) * param_3;
  local_c = *(float *)(iVar9 + 0xc + iVar2) * fVar11 + *(float *)(iVar2 + 0xc + iVar1) * param_3;
  FUN_00642590(&local_10);
  iVar2 = *(int *)(param_1 + *(int *)(in_ECX + 0xbd8));
  iVar7 = uVar6 * 0x10;
  param_2 = param_2 * 0x10;
  iVar9 = *(int *)(in_ECX + 0xc14);
  pfVar3 = *(float **)(iVar9 + 0x20);
  fVar12 = fVar11 * *(float *)(param_2 + iVar2) + *(float *)(iVar7 + iVar2) * param_3;
  local_2c = fVar11 * *(float *)(param_2 + 0xc + iVar2) + *(float *)(iVar7 + 0xc + iVar2) * param_3;
  fVar13 = fVar11 * *(float *)(param_2 + 4 + iVar2) + *(float *)(iVar7 + 4 + iVar2) * param_3;
  fVar10 = fVar11 * *(float *)(param_2 + 8 + iVar2) + *(float *)(iVar7 + 8 + iVar2) * param_3;
  local_38 = fVar12;
  local_34 = fVar13;
  local_30 = fVar10;
  local_c = local_2c;
  if ((&local_38 < pfVar3) && (pfVar4 = *(float **)(iVar9 + 0x1c), pfVar4 <= &local_38)) {
    if (pfVar3 == *(float **)(iVar9 + 0x24)) {
      FUN_00428d00(1);
    }
    puVar5 = *(undefined4 **)(iVar9 + 0x20);
    puVar8 = (undefined4 *)(((int)&local_38 - (int)pfVar4 & 0xfffffff0U) + *(int *)(iVar9 + 0x1c));
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *puVar8;
      puVar5[1] = puVar8[1];
      puVar5[2] = puVar8[2];
      puVar5[3] = puVar8[3];
    }
  }
  else {
    if (pfVar3 == *(float **)(iVar9 + 0x24)) {
      FUN_00428d00(1);
    }
    pfVar3 = *(float **)(iVar9 + 0x20);
    if (pfVar3 != (float *)0x0) {
      pfVar3[2] = fVar10;
      *pfVar3 = fVar12;
      pfVar3[1] = fVar13;
      pfVar3[3] = local_c;
    }
  }
  *(int *)(iVar9 + 0x20) = *(int *)(iVar9 + 0x20) + 0x10;
  iVar2 = *(int *)(param_1 + *(int *)(in_ECX + 0xbd8));
  iVar9 = *(int *)(in_ECX + 0xc14);
  local_28[0] = fVar11 * *(float *)(param_2 + 0x10 + iVar2) +
                *(float *)(iVar7 + 0x10 + iVar2) * param_3;
  fVar13 = fVar11 * *(float *)(param_2 + 0x14 + iVar2) + *(float *)(iVar7 + 0x14 + iVar2) * param_3;
  pfVar3 = *(float **)(iVar9 + 0x20);
  fVar10 = fVar11 * *(float *)(param_2 + 0x18 + iVar2) + *(float *)(iVar7 + 0x18 + iVar2) * param_3;
  fVar12 = fVar11 * *(float *)(param_2 + 0x1c + iVar2) + *(float *)(iVar7 + 0x1c + iVar2) * param_3;
  local_28[1] = fVar13;
  local_28[2] = fVar10;
  local_28[3] = fVar12;
  local_c = local_28[0];
  if (local_28 < pfVar3) {
    pfVar4 = *(float **)(iVar9 + 0x1c);
    if (pfVar4 <= local_28) {
      if (pfVar3 == *(float **)(iVar9 + 0x24)) {
        FUN_00428d00(1);
      }
      puVar5 = *(undefined4 **)(iVar9 + 0x20);
      puVar8 = (undefined4 *)(((int)local_28 - (int)pfVar4 & 0xfffffff0U) + *(int *)(iVar9 + 0x1c));
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar8;
        puVar5[1] = puVar8[1];
        puVar5[2] = puVar8[2];
        puVar5[3] = puVar8[3];
      }
      goto LAB_0063f2de;
    }
  }
  if (pfVar3 == *(float **)(iVar9 + 0x24)) {
    FUN_00428d00(1);
  }
  pfVar3 = *(float **)(iVar9 + 0x20);
  if (pfVar3 != (float *)0x0) {
    pfVar3[2] = fVar10;
    *pfVar3 = local_c;
    pfVar3[1] = fVar13;
    pfVar3[3] = fVar12;
  }
LAB_0063f2de:
  fVar10 = local_14;
  *(int *)(iVar9 + 0x20) = *(int *)(iVar9 + 0x20) + 0x10;
  iVar2 = *(int *)(param_1 + *(int *)(in_ECX + 0xbe4));
  local_18 = fVar11 * *(float *)(iVar2 + (int)local_14) + *(float *)(iVar2 + iVar1) * param_3;
  local_14 = fVar11 * *(float *)(iVar2 + 4 + (int)local_14) +
             *(float *)(iVar2 + 4 + iVar1) * param_3;
  FUN_00642590(&local_18);
  iVar2 = *(int *)(param_1 + *(int *)(in_ECX + 0xbe4));
  local_18 = *(float *)(iVar2 + 8 + (int)fVar10) * fVar11 + *(float *)(iVar2 + 8 + iVar1) * param_3;
  local_14 = *(float *)(iVar2 + 0xc + (int)fVar10) * fVar11 +
             *(float *)(iVar2 + 0xc + iVar1) * param_3;
  FUN_00642590(&local_18);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0063f3b0 @ 0063f3b0  kind=gamemisc  attributed-by=none  size=2753 */

void FUN_0063f3b0(int param_1,float param_2,float param_3)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined8 *puVar6;
  int iVar7;
  char cVar8;
  int in_ECX;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  double dVar15;
  undefined8 *local_6c;
  int local_68;
  uint local_64;
  int local_60;
  int local_5c;
  undefined8 *local_58;
  int local_54;
  int local_50;
  undefined8 *local_4c;
  int local_48 [3];
  int local_3c;
  float local_38;
  int local_34;
  undefined8 *local_30;
  uint local_2c;
  int local_28 [3];
  int local_1c [2];
  undefined8 local_14;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)&local_6c;
  local_5c = param_1 * 0xc;
  local_60 = param_1;
  if (*(int *)(*(int *)(in_ECX + 0xbcc) + local_5c) !=
      *(int *)(*(int *)(in_ECX + 0xbcc) + 4 + local_5c)) {
    iVar14 = *(int *)(in_ECX + 0xba8);
    local_28[1] = *(int *)(iVar14 + 4 + local_5c) - *(int *)(iVar14 + local_5c) >> 3;
    local_58 = (undefined8 *)0x0;
    local_38 = 0.0;
    if ((~(byte)(*(uint *)(in_ECX + 0x85c) >> 3) & 1) == 0) {
      local_28[1] = local_28[1] + -1;
    }
    local_48[1] = 0;
    local_68 = in_ECX;
    if (0 < local_28[1]) {
      local_2c = *(int *)(local_5c + *(int *)(in_ECX + 0xb9c));
      local_6c = *(undefined8 **)(iVar14 + local_5c);
      do {
        uVar10 = local_48[1] + 1;
        uVar9 = uVar10 % (uint)(*(int *)(iVar14 + 4 + local_5c) - *(int *)(iVar14 + local_5c) >> 3);
        uVar1 = *local_6c;
        local_14._0_4_ = (float)uVar1;
        local_14._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
        local_14._4_4_ = local_14._4_4_ - *(float *)(*(int *)(iVar14 + local_5c) + 4 + uVar9 * 8);
        local_14._0_4_ = (float)local_14 - *(float *)(*(int *)(iVar14 + local_5c) + uVar9 * 8);
        dVar15 = (double)(local_14._4_4_ * local_14._4_4_ + (float)local_14 * (float)local_14);
        local_14 = uVar1;
        libm_sse2_sqrt_precise();
        local_6c = local_6c + 1;
        local_38 = ((float)dVar15 * 2.0) /
                   (*(float *)(local_2c + local_48[1] * 4) + *(float *)(local_2c + uVar9 * 4)) +
                   local_38;
        local_48[1] = uVar10;
      } while ((int)uVar10 < local_28[1]);
    }
    puVar12 = (undefined8 *)0x0;
    local_2c = (uint)(local_38 / (param_2 + param_3));
    if (local_2c != 0) {
      local_38 = local_38 / ((float)(int)local_2c * (param_2 + param_3));
      param_2 = local_38 * param_2;
      local_38 = local_38 * param_3;
      local_28[2] = *(int *)(local_68 + 0xb28) / 2;
      local_14 = CONCAT44(local_14._4_4_,param_2);
      local_6c = (undefined8 *)0x0;
      local_48[1] = 0;
      iVar14 = local_68;
      if (0 < (int)local_2c) {
        while( true ) {
          puVar6 = local_6c;
          iVar11 = 0;
          local_48[2] = *(int *)(*(int *)(iVar14 + 0xc14) + 8) -
                        *(int *)(*(int *)(iVar14 + 0xc14) + 4) >> 3;
          cVar8 = FUN_006414c0(local_60,local_6c,puVar12,param_2,&local_4c,&local_30);
          iVar7 = local_28[2];
          iVar13 = local_68;
          if (cVar8 == '\0') break;
          if ((local_48[1] == local_2c) && (local_28[1] <= (int)local_4c)) {
            local_4c = (undefined8 *)(local_28[1] + -1);
            local_30 = (undefined8 *)0x3f800000;
            if ((int)local_4c < (int)puVar6) break;
          }
          iVar14 = *(int *)(iVar14 + 0xbc0);
          iVar2 = *(int *)(local_68 + 0xbcc);
          uVar10 = (uint)(*(int *)(*(int *)(local_5c + iVar14) +
                                  (((int)local_6c + 1U) %
                                  (uint)(*(int *)(local_5c + 4 + iVar14) -
                                         *(int *)(local_5c + iVar14) >> 2)) * 4) +
                         (*(int *)(local_5c + 4 + iVar2) - *(int *)(local_5c + iVar2) >> 3) + -2) %
                   (uint)(*(int *)(local_5c + 4 + iVar2) - *(int *)(local_5c + iVar2) >> 3);
          if (*(int *)(local_68 + 0x864) == 1) {
            FUN_0063e020(local_60,uVar10,local_58,0,local_28[2]);
            iVar11 = iVar7;
          }
          else if (*(int *)(local_68 + 0x864) == 2) {
            FUN_0063ea00(local_60,uVar10,local_58,0);
            iVar11 = 1;
          }
          FUN_0063ef20(local_60,uVar10,local_58,1);
          iVar14 = *(int *)(iVar13 + 0xbcc);
          iVar13 = *(int *)(iVar13 + 0xbc0);
          puVar12 = (undefined8 *)(iVar11 + 1);
          local_54 = *(int *)(local_5c + iVar13);
          local_58 = local_4c;
          uVar10 = (uint)(*(int *)(local_54 +
                                  (((int)local_4c + 1U) %
                                  (uint)(*(int *)(local_5c + 4 + iVar13) - local_54 >> 2)) * 4) +
                         (*(int *)(local_5c + 4 + iVar14) - *(int *)(local_5c + iVar14) >> 3) + -2)
                   % (uint)(*(int *)(local_5c + 4 + iVar14) - *(int *)(local_5c + iVar14) >> 3);
          if (((int)local_6c < (int)local_4c) &&
             (iVar14 = *(int *)(local_54 + 4 + (int)local_6c * 4), iVar14 <= (int)uVar10)) {
            local_6c = (undefined8 *)((int)puVar12 + (uVar10 - iVar14 >> 1) + 1);
            do {
              FUN_0063ef20(local_60,iVar14,0,0);
              iVar14 = iVar14 + 2;
              puVar12 = local_6c;
            } while (iVar14 <= (int)uVar10);
          }
          puVar6 = local_4c;
          local_6c = local_30;
          FUN_0063ef20(local_60,uVar10,local_30,0);
          iVar13 = (int)puVar12 + 1;
          if (*(int *)(local_68 + 0x864) == 1) {
            FUN_0063e020(local_60,uVar10,local_6c,1,local_28[2]);
            iVar13 = iVar13 + local_28[2];
          }
          else if (*(int *)(local_68 + 0x864) == 2) {
            FUN_0063ea00(local_60,uVar10,local_6c,1);
            iVar13 = (int)puVar12 + 2;
          }
          iVar14 = local_68;
          FUN_006414c0(local_60,puVar6,local_6c,local_38,&local_4c,&local_30);
          local_1c[1] = iVar13 + -1;
          local_6c = local_4c;
          local_58 = local_30;
          local_54 = 0;
          if (0 < local_1c[1]) {
            do {
              iVar14 = *(int *)(iVar14 + 0xc14);
              local_34 = local_48[2] + local_54 * 2;
              piVar3 = *(int **)(iVar14 + 0x38);
              if ((&local_34 < piVar3) && (piVar4 = *(int **)(iVar14 + 0x34), piVar4 <= &local_34))
              {
                piVar5 = *(int **)(iVar14 + 0x3c);
                if ((piVar3 == piVar5) && ((int)piVar5 - (int)piVar3 >> 2 == 0)) {
                  iVar13 = (int)piVar3 - (int)piVar4 >> 2;
                  if (iVar13 == 0x3fffffff) goto LAB_0063fe5c;
                  local_64 = iVar13 + 1;
                  uVar10 = (int)piVar5 - (int)piVar4 >> 2;
                  if (0x3fffffff - (uVar10 >> 1) < uVar10) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = uVar10 + (uVar10 >> 1);
                  }
                  if (uVar10 < local_64) {
                    uVar10 = local_64;
                  }
                  FUN_0063da20(uVar10);
                }
                if (*(undefined4 **)(iVar14 + 0x38) != (undefined4 *)0x0) {
                  **(undefined4 **)(iVar14 + 0x38) =
                       *(undefined4 *)
                        (*(int *)(iVar14 + 0x34) + ((int)&local_34 - (int)piVar4 >> 2) * 4);
                }
              }
              else {
                piVar4 = *(int **)(iVar14 + 0x3c);
                if ((piVar3 == piVar4) && ((int)piVar4 - (int)piVar3 >> 2 == 0)) {
                  iVar13 = (int)piVar3 - *(int *)(iVar14 + 0x34) >> 2;
                  if (iVar13 == 0x3fffffff) goto LAB_0063fe5c;
                  uVar9 = (int)piVar4 - *(int *)(iVar14 + 0x34) >> 2;
                  uVar10 = iVar13 + 1;
                  if (0x3fffffff - (uVar9 >> 1) < uVar9) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = uVar9 + (uVar9 >> 1);
                  }
                  if (uVar9 < uVar10) {
                    uVar9 = uVar10;
                  }
                  FUN_0063da20(uVar9);
                }
                if (*(int **)(iVar14 + 0x38) != (int *)0x0) {
                  **(int **)(iVar14 + 0x38) = local_34;
                }
              }
              *(int *)(iVar14 + 0x38) = *(int *)(iVar14 + 0x38) + 4;
              local_50 = local_48[2] + (local_54 + 1) * 2;
              iVar14 = *(int *)(local_68 + 0xc14);
              piVar3 = *(int **)(iVar14 + 0x38);
              if ((&local_50 < piVar3) && (piVar4 = *(int **)(iVar14 + 0x34), piVar4 <= &local_50))
              {
                piVar5 = *(int **)(iVar14 + 0x3c);
                if ((piVar3 == piVar5) && ((int)piVar5 - (int)piVar3 >> 2 == 0)) {
                  iVar13 = (int)piVar3 - (int)piVar4 >> 2;
                  if (iVar13 == 0x3fffffff) goto LAB_0063fe5c;
                  local_64 = iVar13 + 1;
                  uVar10 = (int)piVar5 - (int)piVar4 >> 2;
                  if (0x3fffffff - (uVar10 >> 1) < uVar10) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = uVar10 + (uVar10 >> 1);
                  }
                  if (uVar10 < local_64) {
                    uVar10 = local_64;
                  }
                  FUN_0063da20(uVar10);
                }
                if (*(undefined4 **)(iVar14 + 0x38) != (undefined4 *)0x0) {
                  **(undefined4 **)(iVar14 + 0x38) =
                       *(undefined4 *)
                        (*(int *)(iVar14 + 0x34) + ((int)&local_50 - (int)piVar4 >> 2) * 4);
                }
              }
              else {
                piVar4 = *(int **)(iVar14 + 0x3c);
                if ((piVar3 == piVar4) && ((int)piVar4 - (int)piVar3 >> 2 == 0)) {
                  iVar13 = (int)piVar3 - *(int *)(iVar14 + 0x34) >> 2;
                  if (iVar13 == 0x3fffffff) goto LAB_0063fe5c;
                  uVar9 = (int)piVar4 - *(int *)(iVar14 + 0x34) >> 2;
                  uVar10 = iVar13 + 1;
                  if (0x3fffffff - (uVar9 >> 1) < uVar9) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = uVar9 + (uVar9 >> 1);
                  }
                  if (uVar9 < uVar10) {
                    uVar9 = uVar10;
                  }
                  FUN_0063da20(uVar9);
                }
                if (*(int **)(iVar14 + 0x38) != (int *)0x0) {
                  **(int **)(iVar14 + 0x38) = local_50;
                }
              }
              *(int *)(iVar14 + 0x38) = *(int *)(iVar14 + 0x38) + 4;
              local_48[0] = local_54 * 2 + 1 + local_48[2];
              iVar14 = *(int *)(local_68 + 0xc14);
              piVar3 = *(int **)(iVar14 + 0x38);
              if ((local_48 < piVar3) && (piVar4 = *(int **)(iVar14 + 0x34), piVar4 <= local_48)) {
                piVar5 = *(int **)(iVar14 + 0x3c);
                if ((piVar3 == piVar5) && ((int)piVar5 - (int)piVar3 >> 2 == 0)) {
                  iVar13 = (int)piVar3 - (int)piVar4 >> 2;
                  if (iVar13 == 0x3fffffff) goto LAB_0063fe5c;
                  local_64 = iVar13 + 1;
                  uVar10 = (int)piVar5 - (int)piVar4 >> 2;
                  if (0x3fffffff - (uVar10 >> 1) < uVar10) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = uVar10 + (uVar10 >> 1);
                  }
                  if (uVar10 < local_64) {
                    uVar10 = local_64;
                  }
                  FUN_0063da20(uVar10);
                }
                if (*(undefined4 **)(iVar14 + 0x38) != (undefined4 *)0x0) {
                  **(undefined4 **)(iVar14 + 0x38) =
                       *(undefined4 *)
                        (*(int *)(iVar14 + 0x34) + ((int)local_48 - (int)piVar4 >> 2) * 4);
                }
              }
              else {
                piVar4 = *(int **)(iVar14 + 0x3c);
                if ((piVar3 == piVar4) && ((int)piVar4 - (int)piVar3 >> 2 == 0)) {
                  iVar13 = (int)piVar3 - *(int *)(iVar14 + 0x34) >> 2;
                  if (iVar13 == 0x3fffffff) goto LAB_0063fe5c;
                  uVar9 = (int)piVar4 - *(int *)(iVar14 + 0x34) >> 2;
                  uVar10 = iVar13 + 1;
                  if (0x3fffffff - (uVar9 >> 1) < uVar9) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = uVar9 + (uVar9 >> 1);
                  }
                  if (uVar9 < uVar10) {
                    uVar9 = uVar10;
                  }
                  FUN_0063da20(uVar9);
                }
                if (*(int **)(iVar14 + 0x38) != (int *)0x0) {
                  **(int **)(iVar14 + 0x38) = local_48[0];
                }
              }
              *(int *)(iVar14 + 0x38) = *(int *)(iVar14 + 0x38) + 4;
              iVar14 = *(int *)(local_68 + 0xc14);
              piVar3 = *(int **)(iVar14 + 0x38);
              local_1c[0] = local_48[0];
              if ((local_1c < piVar3) && (piVar4 = *(int **)(iVar14 + 0x34), piVar4 <= local_1c)) {
                piVar5 = *(int **)(iVar14 + 0x3c);
                if ((piVar3 == piVar5) && ((int)piVar5 - (int)piVar3 >> 2 == 0)) {
                  iVar13 = (int)piVar3 - (int)piVar4 >> 2;
                  if (iVar13 == 0x3fffffff) goto LAB_0063fe5c;
                  local_64 = iVar13 + 1;
                  uVar10 = (int)piVar5 - (int)piVar4 >> 2;
                  if (0x3fffffff - (uVar10 >> 1) < uVar10) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = uVar10 + (uVar10 >> 1);
                  }
                  if (uVar10 < local_64) {
                    uVar10 = local_64;
                  }
                  FUN_0063da20(uVar10);
                }
                if (*(undefined4 **)(iVar14 + 0x38) != (undefined4 *)0x0) {
                  **(undefined4 **)(iVar14 + 0x38) =
                       *(undefined4 *)
                        (*(int *)(iVar14 + 0x34) + ((int)local_1c - (int)piVar4 >> 2) * 4);
                }
              }
              else {
                piVar4 = *(int **)(iVar14 + 0x3c);
                if ((piVar3 == piVar4) && ((int)piVar4 - (int)piVar3 >> 2 == 0)) {
                  iVar13 = (int)piVar3 - *(int *)(iVar14 + 0x34) >> 2;
                  if (iVar13 == 0x3fffffff) goto LAB_0063fe5c;
                  uVar9 = (int)piVar4 - *(int *)(iVar14 + 0x34) >> 2;
                  uVar10 = iVar13 + 1;
                  if (0x3fffffff - (uVar9 >> 1) < uVar9) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = uVar9 + (uVar9 >> 1);
                  }
                  if (uVar9 < uVar10) {
                    uVar9 = uVar10;
                  }
                  FUN_0063da20(uVar9);
                }
                if (*(int **)(iVar14 + 0x38) != (int *)0x0) {
                  **(int **)(iVar14 + 0x38) = local_48[0];
                }
              }
              *(int *)(iVar14 + 0x38) = *(int *)(iVar14 + 0x38) + 4;
              iVar14 = *(int *)(local_68 + 0xc14);
              piVar3 = *(int **)(iVar14 + 0x38);
              local_28[0] = local_50;
              if ((local_28 < piVar3) && (piVar4 = *(int **)(iVar14 + 0x34), piVar4 <= local_28)) {
                piVar5 = *(int **)(iVar14 + 0x3c);
                if ((piVar3 == piVar5) && ((int)piVar5 - (int)piVar3 >> 2 == 0)) {
                  iVar13 = (int)piVar3 - (int)piVar4 >> 2;
                  if (iVar13 == 0x3fffffff) goto LAB_0063fe5c;
                  local_64 = iVar13 + 1;
                  uVar10 = (int)piVar5 - (int)piVar4 >> 2;
                  if (0x3fffffff - (uVar10 >> 1) < uVar10) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = uVar10 + (uVar10 >> 1);
                  }
                  if (uVar10 < local_64) {
                    uVar10 = local_64;
                  }
                  FUN_0063da20(uVar10);
                }
                if (*(undefined4 **)(iVar14 + 0x38) != (undefined4 *)0x0) {
                  **(undefined4 **)(iVar14 + 0x38) =
                       *(undefined4 *)
                        (*(int *)(iVar14 + 0x34) + ((int)local_28 - (int)piVar4 >> 2) * 4);
                }
              }
              else {
                piVar4 = *(int **)(iVar14 + 0x3c);
                if ((piVar3 == piVar4) && ((int)piVar4 - (int)piVar3 >> 2 == 0)) {
                  iVar13 = (int)piVar3 - *(int *)(iVar14 + 0x34) >> 2;
                  if (iVar13 == 0x3fffffff) goto LAB_0063fe5c;
                  uVar9 = (int)piVar4 - *(int *)(iVar14 + 0x34) >> 2;
                  uVar10 = iVar13 + 1;
                  if (0x3fffffff - (uVar9 >> 1) < uVar9) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = uVar9 + (uVar9 >> 1);
                  }
                  if (uVar9 < uVar10) {
                    uVar9 = uVar10;
                  }
                  FUN_0063da20(uVar9);
                }
                if (*(int **)(iVar14 + 0x38) != (int *)0x0) {
                  **(int **)(iVar14 + 0x38) = local_50;
                }
              }
              *(int *)(iVar14 + 0x38) = *(int *)(iVar14 + 0x38) + 4;
              local_3c = local_54 * 2 + 3 + local_48[2];
              iVar14 = *(int *)(local_68 + 0xc14);
              piVar3 = *(int **)(iVar14 + 0x38);
              if ((&local_3c < piVar3) && (piVar4 = *(int **)(iVar14 + 0x34), piVar4 <= &local_3c))
              {
                piVar5 = *(int **)(iVar14 + 0x3c);
                if ((piVar3 == piVar5) && ((int)piVar5 - (int)piVar3 >> 2 == 0)) {
                  iVar13 = (int)piVar3 - (int)piVar4 >> 2;
                  if (iVar13 == 0x3fffffff) {
LAB_0063fe5c:
                    /* WARNING: Subroutine does not return */
                    std::_Xlength_error("vector<T> too long");
                  }
                  local_64 = iVar13 + 1;
                  uVar10 = (int)piVar5 - (int)piVar4 >> 2;
                  if (0x3fffffff - (uVar10 >> 1) < uVar10) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = uVar10 + (uVar10 >> 1);
                  }
                  if (uVar10 < local_64) {
                    uVar10 = local_64;
                  }
                  FUN_0063da20(uVar10);
                }
                if (*(undefined4 **)(iVar14 + 0x38) != (undefined4 *)0x0) {
                  **(undefined4 **)(iVar14 + 0x38) =
                       *(undefined4 *)
                        (*(int *)(iVar14 + 0x34) + ((int)&local_3c - (int)piVar4 >> 2) * 4);
                }
              }
              else {
                piVar4 = *(int **)(iVar14 + 0x3c);
                if ((piVar3 == piVar4) && ((int)piVar4 - (int)piVar3 >> 2 == 0)) {
                  iVar13 = (int)piVar3 - *(int *)(iVar14 + 0x34) >> 2;
                  if (iVar13 == 0x3fffffff) goto LAB_0063fe5c;
                  uVar9 = (int)piVar4 - *(int *)(iVar14 + 0x34) >> 2;
                  uVar10 = iVar13 + 1;
                  if (0x3fffffff - (uVar9 >> 1) < uVar9) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = uVar9 + (uVar9 >> 1);
                  }
                  if (uVar9 < uVar10) {
                    uVar9 = uVar10;
                  }
                  FUN_0063da20(uVar9);
                }
                if (*(int **)(iVar14 + 0x38) != (int *)0x0) {
                  **(int **)(iVar14 + 0x38) = local_3c;
                }
              }
              *(int *)(iVar14 + 0x38) = *(int *)(iVar14 + 0x38) + 4;
              local_54 = local_54 + 1;
              iVar14 = local_68;
            } while (local_54 < local_1c[1]);
          }
          local_48[1] = local_48[1] + 1;
          if ((int)local_2c <= local_48[1]) break;
          param_2 = (float)local_14;
          puVar12 = local_58;
        }
      }
    }
  }
  __security_check_cookie(local_c ^ (uint)&local_6c);
  return;
}


/* FUN_0063fe80 @ 0063fe80  kind=gamemisc  attributed-by=none  size=52 */

void * FUN_0063fe80(uint param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    return (void *)0x0;
  }
  if ((param_1 < 0x15555556) && (pvVar1 = operator_new(param_1 * 0xc), pvVar1 != (void *)0x0)) {
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_006413b0 @ 006413b0  kind=gamemisc  attributed-by=none  size=137 */

int * FUN_006413b0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *in_ECX;
  undefined1 local_5;
  
  if ((param_2 == *in_ECX) && (param_3 == in_ECX[1])) {
    FUN_00639cf0(*in_ECX,in_ECX[1],&local_5,param_2);
    in_ECX[1] = *in_ECX;
    *param_1 = param_2;
    return param_1;
  }
  if (param_2 != param_3) {
    iVar1 = FUN_0063a690(param_3,in_ECX[1],param_2,param_2);
    FUN_00639cf0(iVar1,in_ECX[1],&local_5,param_2);
    in_ECX[1] = iVar1;
    *param_1 = param_2;
    return param_1;
  }
  *param_1 = param_2;
  return param_1;
}


/* FUN_006414c0 @ 006414c0  kind=gamemisc  attributed-by=none  size=407 */

undefined1
FUN_006414c0(int param_1,int param_2,float param_3,float param_4,int *param_5,float *param_6)

{
  int iVar1;
  undefined1 uVar2;
  int in_ECX;
  uint uVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar3 = (param_2 + 1U) %
          (uint)(*(int *)(*(int *)(in_ECX + 0xba8) + 4 + param_1 * 0xc) -
                 *(int *)(*(int *)(in_ECX + 0xba8) + param_1 * 0xc) >> 3);
  if (param_4 <= 0.0) {
    param_4 = 0.0;
  }
  iVar1 = *(int *)(*(int *)(in_ECX + 0xba8) + param_1 * 0xc);
  fVar4 = *(float *)(iVar1 + 4 + param_2 * 8) - *(float *)(iVar1 + 4 + uVar3 * 8);
  fVar6 = *(float *)(iVar1 + param_2 * 8) - *(float *)(iVar1 + uVar3 * 8);
  dVar5 = (double)(fVar4 * fVar4 + fVar6 * fVar6);
  libm_sse2_sqrt_precise();
  iVar1 = *(int *)(*(int *)(in_ECX + 0xb9c) + param_1 * 0xc);
  fVar4 = *(float *)(iVar1 + uVar3 * 4);
  fVar6 = *(float *)(iVar1 + param_2 * 4);
  fVar8 = (float)dVar5;
  fVar7 = (fVar8 * param_3 * 2.0) / ((1.0 - param_3) * fVar6 + fVar4 * param_3 + fVar6) + param_4;
  fVar9 = 1.0 - ((fVar4 - fVar6) * fVar7) / (fVar8 * 2.0);
  if (fVar9 < 1e-07) {
    fVar9 = 1e-07;
  }
  fVar9 = (fVar7 * fVar6) / fVar9;
  if (fVar9 <= fVar8) {
    *param_5 = param_2;
    *param_6 = fVar9 / fVar8;
    return 1;
  }
  uVar2 = FUN_006414c0(param_1,uVar3,0,param_4 - ((fVar8 - fVar8 * param_3) * 2.0) / (fVar4 + fVar6)
                       ,param_5,param_6);
  if (*param_5 < param_2) {
    uVar2 = 0;
  }
  return uVar2;
}


/* FUN_00642700 @ 00642700  kind=gamemisc  attributed-by=none  size=97 */

void FUN_00642700(int param_1)

{
  void *_Src;
  int *piVar1;
  void *_Dst;
  int in_ECX;
  int iVar2;
  
  iVar2 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) & 0xfffffffcU)) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x4c) + iVar2 * 4);
      _Dst = (void *)(*piVar1 + param_1 * 4);
      _Src = (void *)((int)_Dst + 4);
      memmove(_Dst,_Src,piVar1[1] - (int)_Src & 0xfffffffc);
      piVar1[1] = piVar1[1] + -4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 2);
  }
  return;
}


/* FUN_00642770 @ 00642770  kind=gamemisc  attributed-by=none  size=102 */

void FUN_00642770(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) & 0xfffffffcU)) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x4c) + iVar4 * 4);
      puVar2 = (undefined4 *)piVar1[1];
      for (puVar3 = (undefined4 *)(param_1 * 8 + 8 + *piVar1); puVar3 != puVar2; puVar3 = puVar3 + 2
          ) {
        puVar3[-2] = *puVar3;
        puVar3[-1] = puVar3[1];
      }
      piVar1[1] = (int)(puVar2 + -2);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 2);
  }
  return;
}


/* FUN_006427e0 @ 006427e0  kind=gamemisc  attributed-by=none  size=131 */

void FUN_006427e0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) & 0xfffffffcU)) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x4c) + iVar5 * 4);
      puVar4 = (undefined4 *)(param_1 * 0x10 + 0x10 + *piVar1);
      puVar2 = (undefined4 *)piVar1[1];
      if (puVar4 != puVar2) {
        puVar3 = puVar4 + -2;
        do {
          puVar3[-2] = *puVar4;
          puVar3[-1] = puVar3[3];
          *puVar3 = puVar3[4];
          puVar4 = puVar4 + 4;
          puVar3[1] = puVar3[5];
          puVar3 = puVar3 + 4;
        } while (puVar4 != puVar2);
      }
      piVar1[1] = (int)(puVar2 + -4);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 2);
  }
  return;
}


/* FUN_0064b770 @ 0064b770  kind=gamemisc  attributed-by=none  size=511 */

void FUN_0064b770(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  int *piVar6;
  int *piVar7;
  
  if (0xffffffd < (uint)in_ECX[1]) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  piVar3 = (int *)FUN_0064b460(param_4);
  in_ECX[1] = in_ECX[1] + 1;
  piVar3[1] = (int)param_3;
  if (param_3 == (undefined4 *)*in_ECX) {
    ((undefined4 *)*in_ECX)[1] = piVar3;
    *(int **)*in_ECX = piVar3;
    iVar4 = *in_ECX;
  }
  else {
    if (param_2 != '\0') {
      *param_3 = piVar3;
      if (param_3 == *(undefined4 **)*in_ECX) {
        *(int **)*in_ECX = piVar3;
      }
      goto LAB_0064b7ce;
    }
    param_3[2] = piVar3;
    iVar4 = *in_ECX;
    if (param_3 != *(undefined4 **)(iVar4 + 8)) goto LAB_0064b7ce;
  }
  *(int **)(iVar4 + 8) = piVar3;
LAB_0064b7ce:
  cVar1 = *(char *)(piVar3[1] + 0xc);
  piVar5 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*in_ECX + 4) + 0xc) = 1;
      *param_1 = piVar3;
      return;
    }
    piVar7 = (int *)piVar5[1];
    piVar6 = *(int **)piVar7[1];
    if (piVar7 == piVar6) {
      piVar6 = (int *)((undefined4 *)piVar7[1])[2];
      if ((char)piVar6[3] != '\0') {
        if (piVar5 == (int *)piVar7[2]) {
          piVar5 = (int *)piVar7[2];
          piVar7[2] = *piVar5;
          if (*(char *)(*piVar5 + 0xd) == '\0') {
            *(int **)(*piVar5 + 4) = piVar7;
          }
          piVar5[1] = piVar7[1];
          if (piVar7 == *(int **)(*in_ECX + 4)) {
            *(int **)(*in_ECX + 4) = piVar5;
          }
          else {
            piVar6 = (int *)piVar7[1];
            if (piVar7 == (int *)*piVar6) {
              *piVar6 = (int)piVar5;
            }
            else {
              piVar6[2] = (int)piVar5;
            }
          }
          *piVar5 = (int)piVar7;
          piVar7[1] = (int)piVar5;
          piVar5 = piVar7;
        }
        *(undefined1 *)(piVar5[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
        piVar7 = *(int **)(piVar5[1] + 4);
        piVar6 = (int *)*piVar7;
        *piVar7 = piVar6[2];
        if (*(char *)(piVar6[2] + 0xd) == '\0') {
          *(int **)(piVar6[2] + 4) = piVar7;
        }
        piVar6[1] = piVar7[1];
        if (piVar7 == *(int **)(*in_ECX + 4)) {
          *(int **)(*in_ECX + 4) = piVar6;
          piVar6[2] = (int)piVar7;
        }
        else {
          piVar2 = (int *)piVar7[1];
          if (piVar7 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar6;
            piVar6[2] = (int)piVar7;
          }
          else {
            *piVar2 = (int)piVar6;
            piVar6[2] = (int)piVar7;
          }
        }
        goto LAB_0064b94a;
      }
LAB_0064b8a1:
      *(undefined1 *)(piVar7 + 3) = 1;
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar5 = *(int **)(piVar5[1] + 4);
    }
    else {
      if ((char)piVar6[3] == '\0') goto LAB_0064b8a1;
      if (piVar5 == (int *)*piVar7) {
        iVar4 = *piVar7;
        *piVar7 = *(int *)(iVar4 + 8);
        if (*(char *)(*(int *)(iVar4 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar4 + 8) + 4) = piVar7;
        }
        *(int *)(iVar4 + 4) = piVar7[1];
        if (piVar7 == *(int **)(*in_ECX + 4)) {
          *(int *)(*in_ECX + 4) = iVar4;
        }
        else {
          piVar5 = (int *)piVar7[1];
          if (piVar7 == (int *)piVar5[2]) {
            piVar5[2] = iVar4;
          }
          else {
            *piVar5 = iVar4;
          }
        }
        *(int **)(iVar4 + 8) = piVar7;
        piVar7[1] = iVar4;
        piVar5 = piVar7;
      }
      *(undefined1 *)(piVar5[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar7 = *(int **)(piVar5[1] + 4);
      piVar6 = (int *)piVar7[2];
      piVar7[2] = *piVar6;
      if (*(char *)(*piVar6 + 0xd) == '\0') {
        *(int **)(*piVar6 + 4) = piVar7;
      }
      piVar6[1] = piVar7[1];
      if (piVar7 == *(int **)(*in_ECX + 4)) {
        *(int **)(*in_ECX + 4) = piVar6;
      }
      else {
        piVar2 = (int *)piVar7[1];
        if (piVar7 == (int *)*piVar2) {
          *piVar2 = (int)piVar6;
        }
        else {
          piVar2[2] = (int)piVar6;
        }
      }
      *piVar6 = (int)piVar7;
LAB_0064b94a:
      piVar7[1] = (int)piVar6;
    }
    cVar1 = *(char *)(piVar5[1] + 0xc);
  } while( true );
}


/* FUN_0064bce0 @ 0064bce0  kind=gamemisc  attributed-by=none  size=259 */

undefined4 * FUN_0064bce0(undefined4 *param_1,char param_2,ushort *param_3,undefined4 param_4)

{
  int *piVar1;
  ushort *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  bool bVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = param_3;
  puStack_c = &LAB_006f6070;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)*in_ECX;
  bVar5 = true;
  local_8 = 0;
  piVar6 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    piVar3 = (int *)piVar1[1];
    do {
      piVar6 = piVar3;
      if (param_2 == '\0') {
        bVar5 = *param_3 < *(ushort *)((int)piVar6 + 0xe);
      }
      else {
        bVar5 = *param_3 <= *(ushort *)((int)piVar6 + 0xe);
      }
      if (bVar5 == false) {
        piVar3 = (int *)piVar6[2];
      }
      else {
        piVar3 = (int *)*piVar6;
      }
    } while (*(char *)((int)piVar3 + 0xd) == '\0');
  }
  _param_2 = piVar6;
  if (bVar5 != false) {
    if (piVar6 == (int *)*piVar1) {
      puVar4 = (undefined4 *)&param_2;
      bVar5 = true;
      goto LAB_0064bd7c;
    }
    FUN_0042c740();
  }
  if (*puVar2 <= *(ushort *)((int)_param_2 + 0xe)) {
    *param_1 = _param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return param_1;
  }
  puVar4 = &param_3;
LAB_0064bd7c:
  puVar4 = (undefined4 *)FUN_0064b770(puVar4,bVar5,piVar6,puVar2,param_4);
  *param_1 = *puVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_0064e410 @ 0064e410  kind=gamemisc  attributed-by=none  size=55 */

undefined4 * FUN_0064e410(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = operator_new(0x10);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  *puVar1 = *in_ECX;
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = *in_ECX;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *in_ECX;
  }
  return puVar1;
}


/* FUN_0064e490 @ 0064e490  kind=gamemisc  attributed-by=none  size=127 */

void FUN_0064e490(int *param_1,ushort *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = (undefined4 *)*in_ECX;
  puVar1 = (undefined4 *)puVar4[1];
  puVar5 = puVar4;
  if (*(char *)((int)puVar1 + 0xd) == '\0') {
    puVar2 = puVar1;
    do {
      if (*(ushort *)((int)puVar2 + 0xe) < *param_2) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        if ((*(char *)((int)puVar4 + 0xd) != '\0') && (*param_2 < *(ushort *)((int)puVar2 + 0xe))) {
          puVar4 = puVar2;
        }
        puVar3 = (undefined4 *)*puVar2;
        puVar5 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  if (*(char *)((int)puVar4 + 0xd) == '\0') {
    puVar1 = (undefined4 *)*puVar4;
  }
  if (*(char *)((int)puVar1 + 0xd) == '\0') {
    do {
      if (*param_2 < *(ushort *)((int)puVar1 + 0xe)) {
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      else {
        puVar2 = (undefined4 *)puVar1[2];
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  *param_1 = (int)puVar5;
  param_1[1] = (int)puVar4;
  return;
}


/* FUN_00653360 @ 00653360  kind=gamemisc  attributed-by=none  size=694 */

void FUN_00653360(int param_1,float param_2)

{
  float *pfVar1;
  int in_ECX;
  float10 fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_28 [8];
  float local_20;
  float local_1c;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_1c = param_2;
  if (*(int *)(in_ECX + 0xd0) != 0) {
    iVar4 = *(int *)(*(int *)(*(int *)(in_ECX + 0xd0) + 0x148) + 0x3c);
    *(undefined4 *)(*(int *)(iVar4 + 0x94) + *(int *)(iVar4 + 0x68) * 4) = 0;
  }
  *(int *)(in_ECX + 0xd0) = param_1;
  if (param_1 != 0) {
    iVar4 = *(int *)(in_ECX + 0xc0);
    if (iVar4 == 0) {
      iVar4 = *(int *)(in_ECX + 0xb4);
    }
    FUN_00636950(iVar4);
    if (param_2 != 0.0) {
      fVar2 = (float10)FUN_006291d0();
      local_14 = (float)fVar2;
      pfVar1 = (float *)FUN_0062dc20(local_28);
      local_10 = *pfVar1 + 0.0;
      local_c = pfVar1[1] + local_14;
      FUN_006295a0(&local_10,1);
    }
    fVar2 = (float10)FUN_0062f630();
    local_14 = (float)fVar2;
    if (local_14 < 0.0) {
      uVar5 = 1;
      fVar2 = (float10)FUN_0062f660(1);
      FUN_0062a650(0,(float)fVar2,uVar5);
    }
    fVar2 = (float10)FUN_0062f660();
    local_14 = (float)fVar2;
    if (local_14 < 0.0) {
      uVar6 = 1;
      uVar5 = 0;
      fVar2 = (float10)FUN_0062f630(0,1);
      FUN_0062a650((float)fVar2,uVar5,uVar6);
    }
    iVar4 = *(int *)(in_ECX + 0x10c);
    fVar2 = (float10)FUN_0062f630();
    local_14 = (float)fVar2;
    fVar2 = (float10)FUN_0062f600();
    local_c = (float)fVar2;
    if ((float)iVar4 < local_14 + local_c) {
      iVar4 = *(int *)(in_ECX + 0x10c);
      uVar5 = 1;
      fVar2 = (float10)FUN_0062f660(1);
      fVar3 = (float)fVar2;
      fVar2 = (float10)FUN_0062f600(fVar3);
      local_c = (float)fVar2;
      FUN_0062a650((float)iVar4 - local_c,fVar3,uVar5);
    }
    iVar4 = *(int *)(in_ECX + 0x110);
    fVar2 = (float10)FUN_0062f660();
    local_c = (float)fVar2;
    fVar2 = (float10)FUN_006291d0();
    local_14 = (float)fVar2;
    if ((float)iVar4 < local_c + local_14) {
      if (local_1c == 0.0) {
        iVar4 = *(int *)(in_ECX + 0x110);
        uVar5 = 1;
        fVar2 = (float10)FUN_006291d0(1);
        local_1c = (float)fVar2;
        fVar3 = (float)iVar4 - local_1c;
        fVar2 = (float10)FUN_0062f630(fVar3);
        FUN_0062a650((float)fVar2,fVar3,uVar5);
      }
      else {
        fVar2 = (float10)FUN_006291d0();
        local_c = (float)fVar2;
        pfVar1 = (float *)FUN_0062dc20(local_28);
        local_20 = *pfVar1 - 0.0;
        local_1c = pfVar1[1] - local_c;
        FUN_006295a0(&local_20,1);
      }
    }
    if (*(int *)(in_ECX + 0xd0) != 0) {
      iVar4 = *(int *)(*(int *)(*(int *)(in_ECX + 0xd0) + 0x148) + 0x3c);
      *(undefined4 *)(*(int *)(iVar4 + 0x94) + *(int *)(iVar4 + 0x68) * 4) = 1;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00659d70 @ 00659d70  kind=gamemisc  attributed-by=none  size=114 */

void FUN_00659d70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 char param_5)

{
  int *piVar1;
  int in_ECX;
  int *piVar2;
  
  *(undefined4 *)(in_ECX + 0x104) = param_1;
  *(undefined4 *)(in_ECX + 0x108) = param_2;
  *(undefined4 *)(in_ECX + 0x10c) = param_3;
  *(undefined4 *)(in_ECX + 0x110) = param_4;
  if ((param_5 != '\0') &&
     (piVar2 = (int *)**(int **)(in_ECX + 0x7c), piVar2 != *(int **)(in_ECX + 0x7c))) {
    _param_5 = 1;
    do {
      (**(code **)(*(int *)piVar2[2] + 0x20))();
      piVar1 = (int *)FUN_00468910(&param_5);
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar1)();
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(in_ECX + 0x7c));
  }
  return;
}


/* FUN_0065a860 @ 0065a860  kind=gamemisc  attributed-by=none  size=41 */

void FUN_0065a860(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


/* FUN_0065ae80 @ 0065ae80  kind=gamemisc  attributed-by=none  size=47 */

void FUN_0065ae80(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x20);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0065ae8e. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
    std::_Xbad_alloc();
    return;
  }
  *(void **)pvVar1 = pvVar1;
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 8) = pvVar1;
  }
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


/* FUN_0065bc70 @ 0065bc70  kind=gamemisc  attributed-by=none  size=958 */

void FUN_0065bc70(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,float param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,uint param_12,
                 undefined4 param_13)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float local_b0;
  float local_ac [12];
  float local_7c;
  float local_78;
  void *local_6c [4];
  undefined4 local_5c;
  uint local_58;
  float local_54 [4];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f6f88;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x10c));
  (**(code **)(**(int **)(in_ECX + 4) + 0x38))(local_ac,uVar1);
  FUN_006605c0(param_4,param_5,param_6,param_7,local_ac,param_13);
  if (*(int *)(in_ECX + 0xf4) == 0) {
    if ((char)param_13 != '\0') {
      fVar5 = param_4 / *(float *)(in_ECX + 0xe0);
      local_b0 = param_8 / fVar5;
      param_4 = param_4 / *(float *)(in_ECX + 0xe4);
      pfVar3 = local_ac;
      pfVar4 = local_54;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar4 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pfVar4 = pfVar4 + 1;
      }
      if (fVar5 != 1.0) {
        local_54[0] = local_ac[0] * fVar5;
        local_54[1] = local_54[1] * fVar5;
        local_54[2] = local_54[2] * fVar5;
        local_54[3] = local_54[3] * fVar5;
      }
      if (param_4 != 1.0) {
        local_44 = local_44 * param_4;
        local_40 = local_40 * param_4;
        local_3c = local_3c * param_4;
        local_38 = local_38 * param_4;
      }
      local_24 = (float)(int)(local_24 + 0.5);
      local_20 = (float)(int)(local_20 + 0.5);
      (**(code **)(**(int **)(in_ECX + 4) + 0x3c))(local_54);
      goto LAB_0065bf1b;
    }
    FUN_00423e70();
    fVar6 = (float)(int)(local_7c + 0.5);
    fVar5 = (float)(int)(local_78 + 0.5);
    local_24 = local_54[0] * fVar6 + local_44 * fVar5 + local_24;
    local_20 = local_54[1] * fVar6 + local_40 * fVar5 + local_20;
    local_1c = local_54[2] * fVar6 + local_3c * fVar5 + local_1c;
    local_18 = local_54[3] * fVar6 + local_38 * fVar5 + local_18;
    (**(code **)(**(int **)(in_ECX + 4) + 0x3c))(local_54);
  }
  local_b0 = param_8;
LAB_0065bf1b:
  (**(code **)(**(int **)(in_ECX + 4) + 0x48))();
  if ((param_12 & 0x10) == 0) {
    FUN_0065c040(param_1,param_2,param_3,param_9,param_10,param_11,param_12);
  }
  else {
    local_58 = 7;
    local_5c = 0;
    local_6c[0] = (void *)((uint)local_6c[0] & 0xffff0000);
    FUN_0040f680(param_1,0,0xffffffff);
    local_8 = 0;
    FUN_00660d50(local_6c,local_b0);
    FUN_0065c040(local_6c,param_2,param_3,param_9,param_10,param_11,param_12);
    local_8 = 0xffffffff;
    if (7 < local_58) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_6c[0]);
    }
    local_58 = 7;
    local_5c = 0;
    local_6c[0] = (void *)((uint)local_6c[0] & 0xffff0000);
  }
  (**(code **)(**(int **)(in_ECX + 4) + 0x3c))(local_ac);
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x10c));
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0065c040 @ 0065c040  kind=gamemisc  attributed-by=none  size=4069 */

/* WARNING: Type propagation algorithm not settling */

void FUN_0065c040(undefined4 *param_1,float param_2,float param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,uint param_7)

{
  undefined8 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  float *pfVar7;
  float *pfVar8;
  undefined4 uVar9;
  int in_ECX;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int *piVar16;
  int *piVar17;
  float local_1cc;
  float local_1c4;
  float local_1c0;
  float *local_1bc;
  float local_1b8;
  undefined4 *local_1b4;
  float local_1b0 [16];
  undefined8 local_170;
  undefined8 local_168;
  int local_160 [10];
  float local_138;
  float fStack_134;
  float local_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float local_120;
  float local_11c;
  int local_118 [4];
  float local_108;
  float local_104;
  int local_100 [4];
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  float local_c8;
  float local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  float local_b0 [4];
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  int aiStack_6c [3];
  float local_60;
  float fStack_5c;
  float local_58 [8];
  float local_38;
  float fStack_34;
  float local_30 [2];
  float local_28 [4];
  float local_18;
  float local_14;
  float local_10;
  float fStack_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_1cc = 1.0;
  if (*(int *)(in_ECX + 0xf4) != 0) {
    local_1cc = *(float *)(in_ECX + 0xe4) / (*(float *)(in_ECX + 0x104) - *(float *)(in_ECX + 0xfc))
    ;
  }
  FUN_0065d530(param_1,local_28 + 4,&local_70,0,0xffffffff,1);
  FUN_0065d530(param_1,local_28 + 2,&local_70,param_7,0xffffffff,1);
  fVar12 = local_28[2] - local_18;
  iVar3 = param_1[4];
  param_2 = fVar12 + param_2;
  local_1c4 = (local_28[3] - local_14) + param_3;
  local_10 = param_2;
  fStack_c = local_1c4;
  (**(code **)(**(int **)(in_ECX + 4) + 0x28))();
  if (*(int *)(in_ECX + 0xf4) != 0) {
    iVar10 = *(int *)(in_ECX + 4);
    iVar11 = *(int *)(iVar10 + 0x144);
    iVar5 = FUN_00608a20(iVar11,*(undefined4 *)(iVar11 + 4),iVar10 + 0x15c);
    if (*(int *)(iVar10 + 0x148) == 0xaaaaaa9) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    *(int *)(iVar10 + 0x148) = *(int *)(iVar10 + 0x148) + 1;
    *(int *)(iVar11 + 4) = iVar5;
    **(int **)(iVar5 + 4) = iVar5;
    iVar10 = *(int *)(in_ECX + 4);
    iVar11 = *(int *)(iVar10 + 0x14c);
    iVar5 = FUN_00608a20(iVar11,*(undefined4 *)(iVar11 + 4),iVar10 + 0x16c);
    if (*(int *)(iVar10 + 0x150) == 0xaaaaaa9) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    *(int *)(iVar10 + 0x150) = *(int *)(iVar10 + 0x150) + 1;
    *(int *)(iVar11 + 4) = iVar5;
    **(int **)(iVar5 + 4) = iVar5;
    iVar10 = *(int *)(in_ECX + 4);
    iVar11 = *(int *)(iVar10 + 0x154);
    iVar5 = FUN_00608a20(iVar11,*(undefined4 *)(iVar11 + 4),iVar10 + 0x17c);
    if (*(int *)(iVar10 + 0x158) == 0xaaaaaa9) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    *(int *)(iVar10 + 0x158) = *(int *)(iVar10 + 0x158) + 1;
    *(int *)(iVar11 + 4) = iVar5;
    **(int **)(iVar5 + 4) = iVar5;
    iVar10 = *(int *)(in_ECX + 4);
    *(undefined4 *)(iVar10 + 0x15c) = *param_4;
    *(undefined4 *)(iVar10 + 0x160) = param_4[1];
    *(undefined4 *)(iVar10 + 0x164) = param_4[2];
    *(undefined4 *)(iVar10 + 0x168) = param_4[3];
    iVar10 = *(int *)(in_ECX + 4);
    *(undefined4 *)(iVar10 + 0x16c) = *param_5;
    *(undefined4 *)(iVar10 + 0x170) = param_5[1];
    *(undefined4 *)(iVar10 + 0x174) = param_5[2];
    *(undefined4 *)(iVar10 + 0x178) = param_5[3];
    iVar10 = *(int *)(in_ECX + 4);
    *(undefined4 *)(iVar10 + 0x17c) = *param_6;
    *(undefined4 *)(iVar10 + 0x180) = param_6[1];
    *(undefined4 *)(iVar10 + 0x184) = param_6[2];
    *(undefined4 *)(iVar10 + 0x188) = param_6[3];
  }
  FUN_0065d530(param_1,local_58 + 6,local_30,param_7,0,1);
  if ((param_7 & 1) == 0) {
    local_1b8 = param_2;
    if ((param_7 & 2) == 0) goto LAB_0065c361;
    local_10 = ((local_30[0] - local_58[6]) - local_70) + fVar12;
  }
  else {
    local_10 = (((local_30[0] - local_58[6]) - local_70) + fVar12) * 0.5;
  }
  local_10 = param_2 - local_10;
  local_1b8 = local_10;
LAB_0065c361:
  local_1b4 = (undefined4 *)0x0;
  if (0 < iVar3) {
    do {
      puVar4 = local_1b4;
      puVar6 = param_1;
      if (7 < (uint)param_1[5]) {
        puVar6 = (undefined4 *)*param_1;
      }
      if (*(short *)((int)puVar6 + (int)local_1b4 * 2) == 10) {
        FUN_0065d530(param_1,local_58 + 6,local_30,0,(int)local_1b4 + 1,1);
        if ((param_7 & 1) == 0) {
          local_10 = param_2;
          if ((param_7 & 2) != 0) {
            fVar13 = ((local_30[0] - local_58[6]) - local_70) + fVar12;
            goto LAB_0065c405;
          }
        }
        else {
          fVar13 = (((local_30[0] - local_58[6]) - local_70) + fVar12) * 0.5;
LAB_0065c405:
          local_10 = param_2 - fVar13;
        }
        local_1c4 = *(float *)(in_ECX + 0xf0) + *(float *)(in_ECX + 0xe4) + local_1c4;
        fStack_c = local_1c4;
      }
      else {
        puVar6 = param_1;
        if (7 < (uint)param_1[5]) {
          puVar6 = (undefined4 *)*param_1;
        }
        uVar2 = *(undefined2 *)((int)puVar6 + (int)local_1b4 * 2);
        if (*(int *)(in_ECX + 0xf4) == 0) {
          if (*(char *)(in_ECX + 0x108) == '\0') {
            local_1bc = (float *)FUN_0065ea80(*(undefined4 *)(in_ECX + 200),uVar2,0);
          }
          else {
            local_1bc = (float *)FUN_0065e340(*(undefined4 *)(in_ECX + 200),uVar2,0);
          }
        }
        else {
          local_1bc = (float *)FUN_0065e6b0(uVar2);
        }
        local_1c0 = 0.0;
        if (local_1bc != (float *)0x0) {
          if ((int *)local_1bc[10] == (int *)0x0) {
            if (local_1bc[0xb] != 0.0) {
              (**(code **)(**(int **)(in_ECX + 4) + 0x38))(local_b0);
              fVar13 = local_b0[0];
              pfVar7 = local_b0;
              pfVar8 = local_1b0;
              for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
                *pfVar8 = *pfVar7;
                pfVar7 = pfVar7 + 1;
                pfVar8 = pfVar8 + 1;
              }
              uVar1 = *(undefined8 *)local_1bc;
              local_d0._0_4_ = (float)uVar1;
              local_d0._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
              local_d8 = CONCAT44(fStack_c,local_10);
              fVar15 = local_10 + (float)local_d0 * local_1cc;
              fVar14 = fStack_c + local_d0._4_4_ * local_1cc;
              local_80 = local_a0 * fVar14 + fVar13 * fVar15 + local_80;
              local_7c = local_9c * fVar14 + local_b0[1] * fVar15 + local_7c;
              local_78 = local_98 * fVar14 + local_b0[2] * fVar15 + local_78;
              local_74 = local_94 * fVar14 + local_b0[3] * fVar15 + local_74;
              if (local_1cc != 1.0) {
                local_b0[2] = local_b0[2] * local_1cc;
                local_b0[0] = fVar13 * local_1cc;
                local_98 = local_98 * local_1cc;
                local_b0[1] = local_b0[1] * local_1cc;
                local_b0[3] = local_b0[3] * local_1cc;
                local_a0 = local_a0 * local_1cc;
                local_9c = local_9c * local_1cc;
                local_94 = local_94 * local_1cc;
              }
              local_d0 = uVar1;
              (**(code **)(**(int **)(in_ECX + 4) + 0x3c))(local_b0);
              FUN_00632910(0);
              (**(code **)(**(int **)(in_ECX + 4) + 0x3c))(local_1b0);
            }
          }
          else {
            (**(code **)(*(int *)local_1bc[10] + 4))(1);
            if (*(char *)(in_ECX + 0x108) == '\0') {
              local_138 = *(float *)(in_ECX + 0x98) * local_1c4 +
                          local_1b8 * *(float *)(in_ECX + 0x88) + *(float *)(in_ECX + 0xb8);
              fStack_134 = *(float *)(in_ECX + 0x9c) * local_1c4 +
                           *(float *)(in_ECX + 0x8c) * local_1b8 + *(float *)(in_ECX + 0xbc);
              fVar14 = 1.0 / (*(float *)(in_ECX + 0xa4) * local_1c4 +
                              *(float *)(in_ECX + 0x94) * local_1b8 + *(float *)(in_ECX + 0xc4));
              fVar13 = local_138 * fVar14;
              fVar14 = fStack_134 * fVar14;
              _local_38 = CONCAT44(fVar14,fVar13);
              local_28[1] = local_1bc[1] + fVar14;
              local_28[0] = fVar13 + *local_1bc;
              iVar10 = 0;
              do {
                iVar11 = iVar10 + 4;
                *(int *)((int)local_118 + iVar10) = (int)*(float *)((int)local_28 + iVar10);
                iVar10 = iVar11;
              } while (iVar11 < 8);
              local_c8 = (float)local_118[0];
              local_c4 = (float)local_118[1];
              local_c0 = 0x3f800000;
              local_bc = 0x3f800000;
              local_160[2] = 0;
              local_160[3] = 0;
              (**(code **)(**(int **)(in_ECX + 4) + 0x14))
                        (&local_c8,local_1bc + 2,local_160 + 2,&local_c0,param_4);
            }
            else {
              iVar10 = 0;
              do {
                pfVar7 = local_1bc + iVar10;
                iVar10 = iVar10 + 1;
                aiStack_6c[iVar10] = (int)*pfVar7;
              } while (iVar10 < 2);
              local_128 = *(float *)(in_ECX + 0x98) * local_1c4 +
                          local_1b8 * *(float *)(in_ECX + 0x88) + *(float *)(in_ECX + 0xb8);
              fStack_124 = *(float *)(in_ECX + 0x9c) * local_1c4 +
                           *(float *)(in_ECX + 0x8c) * local_1b8 + *(float *)(in_ECX + 0xbc);
              fVar13 = 1.0 / (*(float *)(in_ECX + 0xa4) * local_1c4 +
                              *(float *)(in_ECX + 0x94) * local_1b8 + *(float *)(in_ECX + 0xc4));
              local_58[5] = fStack_124 * fVar13;
              local_58[4] = local_128 * fVar13;
              iVar10 = 0;
              do {
                iVar11 = iVar10 + 4;
                *(int *)((int)&local_170 + iVar10) = (int)*(float *)((int)local_58 + iVar10 + 0x10);
                iVar10 = iVar11;
              } while (iVar11 < 8);
              local_b8 = local_170;
              uVar1 = local_b8;
              local_b8._0_4_ = (int)local_170;
              local_b8._4_4_ = (int)((ulonglong)local_170 >> 0x20);
              local_108 = (float)((int)local_b8 + aiStack_6c[1]);
              local_104 = (float)(local_b8._4_4_ + aiStack_6c[2]);
              local_100[2] = 0x3f800000;
              local_100[3] = 0x3f800000;
              local_160[6] = 0;
              local_160[7] = 0;
              local_b8 = uVar1;
              (**(code **)(**(int **)(in_ECX + 4) + 0x14))
                        (&local_108,local_1bc + 2,local_160 + 6,local_100 + 2,param_4);
            }
          }
          local_1c0 = local_1bc[4];
        }
        if (0.0 < *(float *)(in_ECX + 0xe8)) {
          puVar6 = param_1;
          if (7 < (uint)param_1[5]) {
            puVar6 = (undefined4 *)*param_1;
          }
          uVar2 = *(undefined2 *)((int)puVar6 + (int)local_1b4 * 2);
          if (*(char *)(in_ECX + 0x108) == '\0') {
            pfVar7 = (float *)FUN_0065ea80(*(undefined4 *)(in_ECX + 0xcc),uVar2,1);
          }
          else {
            pfVar7 = (float *)FUN_0065e340(*(undefined4 *)(in_ECX + 0xcc),uVar2,1);
          }
          if ((pfVar7 != (float *)0x0) && ((int *)pfVar7[10] != (int *)0x0)) {
            (**(code **)(*(int *)pfVar7[10] + 4))(1);
            if (*(char *)(in_ECX + 0x108) == '\0') {
              local_130 = *(float *)(in_ECX + 0x98) * local_1c4 +
                          local_1b8 * *(float *)(in_ECX + 0x88) + *(float *)(in_ECX + 0xb8);
              fStack_12c = *(float *)(in_ECX + 0x9c) * local_1c4 +
                           *(float *)(in_ECX + 0x8c) * local_1b8 + *(float *)(in_ECX + 0xbc);
              fVar14 = 1.0 / (*(float *)(in_ECX + 0xa4) * local_1c4 +
                              *(float *)(in_ECX + 0x94) * local_1b8 + *(float *)(in_ECX + 0xc4));
              fVar13 = fVar14 * local_130;
              fVar14 = fVar14 * fStack_12c;
              _local_60 = CONCAT44(fVar14,fVar13);
              local_58[1] = pfVar7[1] + fVar14;
              local_58[0] = *pfVar7 + fVar13;
              iVar10 = 0;
              do {
                iVar11 = iVar10 + 4;
                *(int *)((int)local_160 + iVar10 + 0x20) = (int)*(float *)((int)local_58 + iVar10);
                iVar10 = iVar11;
              } while (iVar11 < 8);
              local_e8 = (float)local_160[8];
              piVar17 = local_160 + 4;
              local_e4 = (float)local_160[9];
              piVar16 = local_160;
              local_160[4] = 0x3f800000;
              local_160[5] = 0x3f800000;
              local_160[0] = 0;
              local_160[1] = 0;
              pfVar8 = &local_e8;
            }
            else {
              iVar10 = 0;
              do {
                iVar11 = iVar10 + 1;
                local_28[iVar10 + 4] = (float)(int)pfVar7[iVar10];
                iVar10 = iVar11;
              } while (iVar11 < 2);
              local_e0 = *(float *)(in_ECX + 0x98) * local_1c4 +
                         local_1b8 * *(float *)(in_ECX + 0x88) + *(float *)(in_ECX + 0xb8);
              fStack_dc = *(float *)(in_ECX + 0x9c) * local_1c4 +
                          *(float *)(in_ECX + 0x8c) * local_1b8 + *(float *)(in_ECX + 0xbc);
              fVar13 = 1.0 / (*(float *)(in_ECX + 0xa4) * local_1c4 +
                              *(float *)(in_ECX + 0x94) * local_1b8 + *(float *)(in_ECX + 0xc4));
              local_58[3] = fVar13 * fStack_dc;
              local_58[2] = fVar13 * local_e0;
              iVar10 = 0;
              do {
                iVar11 = iVar10 + 4;
                *(int *)((int)&local_168 + iVar10) = (int)*(float *)((int)local_58 + iVar10 + 8);
                iVar10 = iVar11;
              } while (iVar11 < 8);
              local_f0 = local_168;
              uVar1 = local_f0;
              local_f0._0_4_ = (int)local_168;
              local_f0._4_4_ = (int)((ulonglong)local_168 >> 0x20);
              local_120 = (float)((int)local_f0 + (int)local_18);
              piVar17 = local_100;
              local_11c = (float)(local_f0._4_4_ + (int)local_14);
              piVar16 = local_118 + 2;
              local_100[0] = 0x3f800000;
              local_100[1] = 0x3f800000;
              local_118[2] = 0;
              local_118[3] = 0;
              pfVar8 = &local_120;
              local_f0 = uVar1;
            }
            (**(code **)(**(int **)(in_ECX + 4) + 0x14))(pfVar8,pfVar7 + 2,piVar16,piVar17,param_5);
          }
        }
        if ((int)local_1b4 < iVar3 + -1) {
          if (*(int *)(in_ECX + 0xf4) == 0) {
            local_1b4 = param_1;
            if (*(char *)(in_ECX + 0x108) != '\0') {
              puVar6 = param_1;
              if (7 < (uint)param_1[5]) {
                local_1b4 = (undefined4 *)*param_1;
                puVar6 = (undefined4 *)*param_1;
              }
              uVar9 = FUN_0068fb90(*(undefined4 *)(in_ECX + 0xd8),
                                   *(undefined2 *)((int)puVar6 + (int)puVar4 * 2 + 2),0,local_28 + 2
                                  );
              uVar9 = FUN_0068fb90(*(undefined4 *)(in_ECX + 0xd8),
                                   *(undefined2 *)((int)local_1b4 + (int)puVar4 * 2),uVar9);
              FUN_0068fa30(*(undefined4 *)(in_ECX + 0xd8),uVar9);
              local_1c0 = (float)((int)local_28[2] >> 6) + local_1c0;
              local_1b8 = *(float *)(in_ECX + 0xec) + local_1b8;
              goto LAB_0065ceb3;
            }
            puVar6 = param_1;
            if (7 < (uint)param_1[5]) {
              local_1b4 = (undefined4 *)*param_1;
              puVar6 = (undefined4 *)*param_1;
            }
            uVar9 = FUN_0068fb90(*(undefined4 *)(in_ECX + 0xd8),
                                 *(undefined2 *)((int)puVar6 + (int)puVar4 * 2 + 2),2,local_28 + 2);
            uVar9 = FUN_0068fb90(*(undefined4 *)(in_ECX + 0xd8),
                                 *(undefined2 *)((int)local_1b4 + (int)puVar4 * 2),uVar9);
            FUN_0068fa30(*(undefined4 *)(in_ECX + 0xd8),uVar9);
            local_1c0 = ((float)(int)local_28[2] * *(float *)(in_ECX + 0xe0)) /
                        (float)*(ushort *)(*(int *)(in_ECX + 0xd8) + 0x44) + local_1c0;
          }
          local_1b8 = *(float *)(in_ECX + 0xec) + local_1b8;
        }
LAB_0065ceb3:
        if (*(char *)(in_ECX + 0x108) == '\0') {
          local_10 = local_1c0 * local_1cc + local_1b8;
        }
        else {
          local_10 = (float)(int)(local_1b8 + local_1c0);
        }
      }
      local_1b4 = (undefined4 *)((int)puVar4 + 1);
      local_1b8 = local_10;
    } while ((int)local_1b4 < iVar3);
  }
  (**(code **)(**(int **)(in_ECX + 4) + 0x2c))();
  if (*(int *)(in_ECX + 0xf4) != 0) {
    iVar3 = *(int *)(in_ECX + 4);
    if (*(int *)(iVar3 + 0x148) != 0) {
      iVar10 = *(int *)(*(int *)(iVar3 + 0x144) + 4);
      *(undefined4 *)(iVar3 + 0x15c) = *(undefined4 *)(iVar10 + 8);
      *(undefined4 *)(iVar3 + 0x160) = *(undefined4 *)(iVar10 + 0xc);
      *(undefined4 *)(iVar3 + 0x164) = *(undefined4 *)(iVar10 + 0x10);
      *(undefined4 *)(iVar3 + 0x168) = *(undefined4 *)(iVar10 + 0x14);
      piVar17 = (int *)(*(int **)(iVar3 + 0x144))[1];
      if (piVar17 != *(int **)(iVar3 + 0x144)) {
        *(int *)piVar17[1] = *piVar17;
        *(int *)(*piVar17 + 4) = piVar17[1];
                    /* WARNING: Subroutine does not return */
        operator_delete(piVar17);
      }
    }
    iVar3 = *(int *)(in_ECX + 4);
    if (*(int *)(iVar3 + 0x150) != 0) {
      iVar10 = *(int *)(*(int *)(iVar3 + 0x14c) + 4);
      *(undefined4 *)(iVar3 + 0x16c) = *(undefined4 *)(iVar10 + 8);
      *(undefined4 *)(iVar3 + 0x170) = *(undefined4 *)(iVar10 + 0xc);
      *(undefined4 *)(iVar3 + 0x174) = *(undefined4 *)(iVar10 + 0x10);
      *(undefined4 *)(iVar3 + 0x178) = *(undefined4 *)(iVar10 + 0x14);
      piVar17 = (int *)(*(int **)(iVar3 + 0x14c))[1];
      if (piVar17 != *(int **)(iVar3 + 0x14c)) {
        *(int *)piVar17[1] = *piVar17;
        *(int *)(*piVar17 + 4) = piVar17[1];
                    /* WARNING: Subroutine does not return */
        operator_delete(piVar17);
      }
    }
    iVar3 = *(int *)(in_ECX + 4);
    if (*(int *)(iVar3 + 0x158) != 0) {
      iVar10 = *(int *)(*(int *)(iVar3 + 0x154) + 4);
      *(undefined4 *)(iVar3 + 0x17c) = *(undefined4 *)(iVar10 + 8);
      *(undefined4 *)(iVar3 + 0x180) = *(undefined4 *)(iVar10 + 0xc);
      *(undefined4 *)(iVar3 + 0x184) = *(undefined4 *)(iVar10 + 0x10);
      *(undefined4 *)(iVar3 + 0x188) = *(undefined4 *)(iVar10 + 0x14);
      piVar17 = (int *)(*(int **)(iVar3 + 0x154))[1];
      if (piVar17 != *(int **)(iVar3 + 0x154)) {
        *(int *)piVar17[1] = *piVar17;
        *(int *)(*piVar17 + 4) = piVar17[1];
                    /* WARNING: Subroutine does not return */
        operator_delete(piVar17);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0065d4c0 @ 0065d4c0  kind=gamemisc  attributed-by=none  size=97 */

void FUN_0065d4c0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  
  iVar1 = FUN_004e3790(param_2);
  if (iVar1 != *in_ECX) {
    piVar2 = (int *)(iVar1 + 0x10);
    if (7 < *(uint *)(iVar1 + 0x24)) {
      piVar2 = (int *)*piVar2;
    }
    iVar3 = FUN_00428db0(0,*(undefined4 *)(param_2 + 0x10),piVar2,*(undefined4 *)(iVar1 + 0x20));
    if (-1 < iVar3) {
      *param_1 = iVar1;
      return;
    }
  }
  *param_1 = *in_ECX;
  return;
}


/* FUN_0065f260 @ 0065f260  kind=gamemisc  attributed-by=none  size=360 */

void FUN_0065f260(undefined4 param_1,int param_2,int *param_3)

{
  undefined4 ***pppuVar1;
  int iVar2;
  int in_ECX;
  undefined4 ***pppuVar3;
  undefined4 **local_30;
  undefined4 **local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7088;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0065b8f0(local_14);
  if (in_ECX + 8 != param_2) {
    FUN_0040f680(param_2,0,0xffffffff);
  }
  local_30 = (undefined4 **)0x2e;
  iVar2 = FUN_00639a70(&local_30,0xffffffff,1);
  FUN_0043a450(local_2c,iVar2 + 1,(*(int *)(param_2 + 0x10) - iVar2) + -1);
  local_30 = local_2c;
  if (7 < local_18) {
    local_30 = local_2c[0];
  }
  local_8 = 0;
  pppuVar1 = (undefined4 ***)((int)local_30 + local_1c * 2);
  pppuVar3 = local_2c;
  if (7 < local_18) {
    pppuVar3 = (undefined4 ***)local_2c[0];
  }
  if (pppuVar3 != pppuVar1) {
    FUN_0064bdf0(&local_30,pppuVar3,pppuVar1,local_30,toupper_exref);
  }
  iVar2 = FUN_00428db0(0,local_1c,&DAT_0071eb48,3);
  if ((iVar2 == 0) || (iVar2 = FUN_00428db0(0,local_1c,&DAT_0071ebb4,3), iVar2 == 0)) {
    if (((param_3 == (int *)0x0) ||
        (FUN_0065d4c0(&local_30,param_2), (undefined4 ***)local_30 == (undefined4 ***)*param_3)) ||
       (local_30[10] == local_30[0xb])) {
      FUN_0065fb80(param_1,param_2);
    }
    else {
      FUN_0065fef0(param_1,param_2,local_30[10],(int)local_30[0xb] - (int)local_30[10]);
    }
  }
  else {
    FUN_0065f3d0();
  }
  if (local_18 < 8) {
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_2c[0]);
}


/* FUN_0065f3d0 @ 0065f3d0  kind=gamemisc  attributed-by=none  size=1958 */

void __thiscall FUN_0065f3d0(void *this,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 **ppuVar9;
  float *pfVar10;
  undefined8 *puVar11;
  ushort ****ppppuVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined4 *puVar15;
  float fVar16;
  undefined1 local_188 [16];
  basic_streambuf<char,std::char_traits<char>_> local_178 [2];
  basic_istream<char,std::char_traits<char>_> local_170;
  int *local_16c;
  char *local_140;
  char *local_13c;
  undefined4 local_138;
  undefined1 local_134;
  undefined1 local_133;
  undefined4 local_130;
  char local_12c;
  FILE *local_128;
  basic_ios<char,std::char_traits<char>_> local_118 [6];
  void *local_d0;
  float local_cc;
  LPCRITICAL_SECTION local_c8;
  float local_c4;
  float local_c0;
  undefined4 *local_bc;
  undefined4 *local_b8;
  undefined4 *local_b4;
  undefined1 local_b0 [8];
  void *local_a8 [4];
  undefined4 local_98;
  uint local_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  void *local_68;
  undefined4 local_64;
  undefined4 local_60;
  ushort ***local_5c [4];
  undefined4 local_4c;
  uint local_48;
  undefined8 local_44;
  float local_3c;
  float fStack_38;
  float local_34;
  float fStack_30;
  float local_2c;
  float fStack_28;
  float local_24;
  float fStack_20;
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f70d6;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x10c);
  local_d0 = this;
  local_c8 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  std::basic_ifstream<char,std::char_traits<char>_>::basic_ifstream<char,std::char_traits<char>_>
            ((basic_ifstream<char,std::char_traits<char>_> *)local_188,1);
  local_8 = 0;
  puVar7 = param_2;
  if (7 < (uint)param_2[5]) {
    puVar7 = (undefined4 *)*param_2;
  }
  iVar6 = FUN_00653210(puVar7,0x21,0x40);
  if (iVar6 == 0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               (local_188 + *(int *)(local_188._0_4_ + 4)),2,false);
  }
  else {
    std::basic_ios<char,std::char_traits<char>_>::clear
              ((basic_ios<char,std::char_traits<char>_> *)
               (local_188 + *(int *)(local_188._0_4_ + 4)),0,false);
  }
  if (local_128 == (FILE *)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    iVar6 = FUN_0040c4c0();
    if (iVar6 == 0) {
      std::basic_ios<char,std::char_traits<char>_>::setstate
                ((basic_ios<char,std::char_traits<char>_> *)
                 (local_188 + *(int *)(local_188._0_4_ + 4)),2,false);
    }
    local_b4 = (undefined4 *)0x2f;
    puVar7 = (undefined4 *)FUN_00639a70(&local_b4,0xffffffff,1);
    local_b4 = (undefined4 *)0x5c;
    local_b8 = puVar7;
    local_b4 = (undefined4 *)FUN_00639a70(&local_b4,0xffffffff,1);
    ppuVar9 = &local_b4;
    if ((int)local_b4 <= (int)puVar7) {
      ppuVar9 = &local_b8;
    }
    FUN_0043a450(local_a8,(int)*ppuVar9 + 1,(param_2[4] - (int)*ppuVar9) + -1);
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar8 = FUN_0064f4e0(0,0,0,0,local_a8);
    *(undefined4 *)((int)this + 0xf4) = uVar8;
    if ((void **)((int)this + 0x38) != local_a8) {
      FUN_0040f680(local_a8,0,0xffffffff);
    }
    FUN_0040f7a0(&PTR_006fccac,0);
    local_44 = 0;
    local_68 = (void *)0x0;
    local_64 = 0;
    local_60 = 0;
    FUN_0046da00(1,&local_44);
    local_8._0_1_ = 2;
    FUN_00653770(param_2,*(undefined4 *)((int)this + 0xf4),3,0,&local_68);
    local_8._0_1_ = 1;
    if (local_68 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_68);
    }
    puVar1 = (uint *)(*(int *)((int)this + 0xf4) + 200);
    *puVar1 = *puVar1 | 8;
    *(undefined4 *)((int)this + 0xf8) = 0;
    *(undefined4 *)((int)this + 0xfc) = 0;
    *(undefined4 *)((int)this + 0x100) = 0;
    *(undefined4 *)((int)this + 0x104) = 0;
    piVar14 = (int *)**(int **)(*(int *)((int)this + 0xf4) + 0x2c);
    if (piVar14 != *(int **)(*(int *)((int)this + 0xf4) + 0x2c)) {
      do {
        local_8._0_1_ = 1;
        iVar6 = piVar14[2];
        if ((*(int *)(iVar6 + 0x1c) == 1) && (*(int *)(iVar6 + 0x34) != 0)) {
          local_5c[0] = (ushort ***)((uint)local_5c[0] & 0xffff0000);
          local_48 = 7;
          local_4c = 0;
          FUN_0040f680(iVar6 + 0xc,0,0xffffffff);
          puVar7 = *(undefined4 **)((int)this + 0xd0);
          ppppuVar12 = local_5c;
          if (7 < local_48) {
            ppppuVar12 = (ushort ****)local_5c[0];
          }
          local_8._0_1_ = 3;
          local_b4 = (undefined4 *)(uint)*(ushort *)ppppuVar12;
          cVar4 = *(char *)((int)puVar7[1] + 0xd);
          puVar5 = puVar7;
          puVar15 = (undefined4 *)puVar7[1];
          while (cVar4 == '\0') {
            if ((int)puVar15[4] < (int)local_b4) {
              puVar13 = (undefined4 *)puVar15[2];
              puVar15 = puVar5;
            }
            else {
              puVar13 = (undefined4 *)*puVar15;
            }
            puVar5 = puVar15;
            puVar15 = puVar13;
            this = local_d0;
            cVar4 = *(char *)((int)puVar13 + 0xd);
          }
          if ((puVar5 == puVar7) || ((int)local_b4 < (int)puVar5[4])) {
            local_bc = puVar7;
            ppuVar9 = &local_bc;
          }
          else {
            local_b8 = puVar5;
            ppuVar9 = &local_b8;
          }
          if (*ppuVar9 == puVar7) {
            iVar6 = *(int *)(piVar14[2] + 0x38);
            pfVar10 = (float *)(**(code **)(**(int **)(piVar14[2] + 0x34) + 0x18))(local_b0);
            fVar2 = pfVar10[1];
            fVar3 = *pfVar10;
            local_90 = *(float *)(iVar6 + 0x1c0) * fVar2 + *(float *)(iVar6 + 0x1b0) * fVar3 +
                       *(float *)(iVar6 + 0x1e0);
            local_cc = 1.0 / (*(float *)(iVar6 + 0x1bc) * fVar3 + *(float *)(iVar6 + 0x1cc) * fVar2
                             + *(float *)(iVar6 + 0x1ec));
            fStack_8c = *(float *)(iVar6 + 0x1b4) * fVar3 + *(float *)(iVar6 + 0x1c4) * fVar2 +
                        *(float *)(iVar6 + 0x1e4);
            iVar6 = *(int *)(piVar14[2] + 0x38);
            local_70 = CONCAT44(fStack_8c,local_90);
            local_c4 = local_cc * local_90;
            local_cc = local_cc * fStack_8c;
            pfVar10 = (float *)(**(code **)(**(int **)(piVar14[2] + 0x34) + 0x1c))(&local_64);
            fVar2 = pfVar10[1];
            fVar3 = *pfVar10;
            fVar16 = 1.0 / (*(float *)(iVar6 + 0x1bc) * fVar3 + *(float *)(iVar6 + 0x1cc) * fVar2 +
                           *(float *)(iVar6 + 0x1ec));
            fStack_7c = *(float *)(iVar6 + 0x1b4) * fVar3 + *(float *)(iVar6 + 0x1c4) * fVar2 +
                        *(float *)(iVar6 + 0x1e4);
            local_80 = *(float *)(iVar6 + 0x1b0) * fVar3 + *(float *)(iVar6 + 0x1c0) * fVar2 +
                       *(float *)(iVar6 + 0x1e0);
            local_c0 = fVar16 * fStack_7c;
            _local_3c = CONCAT44(local_c0,fVar16 * local_80);
            FUN_00631db0(&local_78,0);
            FUN_00631520(&local_44,0);
            if ((~(byte)(*(uint *)(piVar14[2] + 200) >> 1) & 1) == 0) {
              FUN_00636990(0);
            }
            puVar11 = operator_new(0x34);
            ppppuVar12 = local_5c;
            if (7 < local_48) {
              ppppuVar12 = (ushort ****)local_5c[0];
            }
            local_b4 = (undefined4 *)(uint)*(ushort *)ppppuVar12;
            puVar7 = (undefined4 *)FUN_00468910(&local_b4);
            local_2c = local_3c - local_c4;
            local_88 = local_c4;
            *puVar7 = puVar11;
            iVar6 = piVar14[2];
            fStack_28 = fStack_38 - local_cc;
            puVar11[2] = CONCAT44(fStack_28,local_2c);
            local_34 = local_3c - local_c4;
            fStack_30 = fStack_38 - local_cc;
            puVar11[1] = CONCAT44(fStack_30,local_34);
            fStack_84 = local_c0;
            local_1c = CONCAT44(local_c0 * -1.0,local_c4 * -1.0);
            *puVar11 = local_1c;
            *(int *)((int)puVar11 + 0x2c) = iVar6;
            *(undefined4 *)(puVar11 + 3) = local_78;
            *(undefined4 *)((int)puVar11 + 0x1c) = local_74;
            *(undefined4 *)(puVar11 + 4) = (undefined4)local_44;
            *(undefined4 *)((int)puVar11 + 0x24) = local_44._4_4_;
            *(undefined4 *)(puVar11 + 5) = 0;
            *(undefined1 *)(puVar11 + 6) = 1;
            *(undefined4 *)((int)this + 0xf8) = *(undefined4 *)puVar11;
            *(undefined4 *)((int)this + 0xfc) = *(undefined4 *)((int)puVar11 + 4);
            local_24 = (float)*puVar11;
            local_24 = *(float *)(puVar11 + 1) + local_24;
            fStack_20 = (float)((ulonglong)*puVar11 >> 0x20);
            fStack_20 = *(float *)((int)puVar11 + 0xc) + fStack_20;
            *(float *)((int)this + 0x100) = local_24;
            *(float *)((int)this + 0x104) = fStack_20;
          }
          local_8._0_1_ = 1;
          if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_5c[0]);
          }
        }
        piVar14 = (int *)*piVar14;
      } while (piVar14 != (int *)*(int *)(*(int *)((int)this + 0xf4) + 0x2c));
    }
    local_8._0_1_ = 1;
    LeaveCriticalSection(local_c8);
    if (7 < local_94) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_a8[0]);
    }
    local_94 = 7;
    local_98 = 0;
    local_a8[0] = (void *)((uint)local_a8[0] & 0xffff0000);
  }
  local_8 = 0xffffffff;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_ifstream<char,std::char_traits<char>_> */
  *(basic_ifstream<char,std::char_traits<char>_>_vftable **)
   (local_188 + *(int *)(local_188._0_4_ + 4)) =
       &std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)(&stack0xfffffe74 + *(int *)(local_188._0_4_ + 4)) = *(int *)(local_188._0_4_ + 4) + -0x70
  ;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_filebuf<char,std::char_traits<char>_> */
  local_178[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  if ((local_128 != (FILE *)0x0) && ((undefined1 *)*local_16c == &local_134)) {
    std::basic_streambuf<char,std::char_traits<char>_>::setg
              (local_178,local_140,local_13c,local_13c);
  }
  if (local_12c != '\0') {
    if (local_128 != (FILE *)0x0) {
      FUN_00405cc0();
      fclose(local_128);
    }
    local_12c = '\0';
    local_133 = 0;
    std::basic_streambuf<char,std::char_traits<char>_>::_Init(local_178);
    local_128 = (FILE *)0x0;
    local_130 = DAT_0076af5c;
    local_138 = 0;
  }
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_178);
  std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
            (&local_170);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_118);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0065fb80 @ 0065fb80  kind=gamemisc  attributed-by=none  size=837 */

void FUN_0065fb80(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  ushort uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int in_ECX;
  char *pcVar10;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7118;
  local_10 = ExceptionList;
  uVar6 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar6;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x10c));
  puVar7 = (undefined4 *)FUN_00659f50(local_2c,param_2,uVar6);
  if (0xf < (uint)puVar7[5]) {
    puVar7 = (undefined4 *)*puVar7;
  }
  piVar1 = (int *)(in_ECX + 0xd8);
  iVar8 = FUN_00694f00(param_1,puVar7,0,piVar1);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  if (iVar8 == 0) {
    pcVar4 = *(char **)(*piVar1 + 0x14);
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    if (*pcVar4 == '\0') {
      iVar8 = 0;
    }
    else {
      pcVar10 = pcVar4;
      do {
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      iVar8 = (int)pcVar10 - (int)(pcVar4 + 1);
    }
    FUN_0040c280(pcVar4,iVar8);
    local_8 = 0;
    puVar9 = (undefined4 *)FUN_006089c0(local_2c,local_44);
    puVar7 = (undefined4 *)(in_ECX + 0x38);
    if (puVar7 != puVar9) {
      if (7 < *(uint *)(in_ECX + 0x4c)) {
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*puVar7);
      }
      *(undefined4 *)(in_ECX + 0x4c) = 7;
      *(undefined4 *)(in_ECX + 0x48) = 0;
      *(undefined2 *)puVar7 = 0;
      FUN_0040f110(puVar9);
    }
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 7;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
    local_8 = 0xffffffff;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_44[0]);
    }
    pcVar4 = *(char **)(*piVar1 + 0x18);
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    if (*pcVar4 == '\0') {
      iVar8 = 0;
    }
    else {
      pcVar10 = pcVar4;
      do {
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      iVar8 = (int)pcVar10 - (int)(pcVar4 + 1);
    }
    FUN_0040c280(pcVar4,iVar8);
    local_8 = 1;
    puVar9 = (undefined4 *)FUN_006089c0(local_2c,local_44);
    puVar7 = (undefined4 *)(in_ECX + 0x20);
    if (puVar7 != puVar9) {
      if (7 < *(uint *)(in_ECX + 0x34)) {
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*puVar7);
      }
      *(undefined4 *)(in_ECX + 0x34) = 7;
      *(undefined4 *)(in_ECX + 0x30) = 0;
      *(undefined2 *)puVar7 = 0;
      FUN_0040f110(puVar9);
    }
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 7;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
    local_8 = 0xffffffff;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_44[0]);
    }
    iVar8 = FUN_0068fc00(*piVar1);
    if (iVar8 != 0) {
      FUN_00403350(iVar8);
      local_8 = 2;
      puVar9 = (undefined4 *)FUN_006089c0(local_2c,local_44);
      puVar7 = (undefined4 *)(in_ECX + 0x50);
      if (puVar7 != puVar9) {
        if (7 < *(uint *)(in_ECX + 100)) {
                    /* WARNING: Subroutine does not return */
          operator_delete((void *)*puVar7);
        }
        *(undefined4 *)(in_ECX + 100) = 7;
        *(undefined4 *)(in_ECX + 0x60) = 0;
        *(undefined2 *)puVar7 = 0;
        FUN_0040f110(puVar9);
      }
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      local_18 = 7;
      local_1c = 0;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
    }
    iVar8 = *piVar1;
    iVar5 = *(int *)(iVar8 + 0x38);
    uVar3 = *(ushort *)(iVar8 + 0x44);
    *(float *)(in_ECX + 0xf8) = (float)*(int *)(iVar8 + 0x34) / (float)uVar3;
    *(float *)(in_ECX + 0xfc) = (float)iVar5 / (float)uVar3;
    iVar8 = *piVar1;
    iVar5 = *(int *)(iVar8 + 0x40);
    uVar3 = *(ushort *)(iVar8 + 0x44);
    *(float *)(in_ECX + 0x100) = (float)*(int *)(iVar8 + 0x3c) / (float)uVar3;
    *(float *)(in_ECX + 0x104) = (float)iVar5 / (float)uVar3;
    FUN_00695f10(param_1,in_ECX + 0xdc);
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x10c));
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x10c));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0065fef0 @ 0065fef0  kind=gamemisc  attributed-by=none  size=804 */

void FUN_0065fef0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  ushort uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int in_ECX;
  char *pcVar10;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7118;
  local_10 = ExceptionList;
  uVar7 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar7;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x10c));
  piVar2 = (int *)(in_ECX + 0xd8);
  iVar8 = FUN_00694f50(param_1,param_3,param_4,0,piVar2,uVar7);
  if (iVar8 == 0) {
    pcVar5 = *(char **)(*piVar2 + 0x14);
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    if (*pcVar5 == '\0') {
      iVar8 = 0;
    }
    else {
      pcVar10 = pcVar5;
      do {
        cVar3 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar3 != '\0');
      iVar8 = (int)pcVar10 - (int)(pcVar5 + 1);
    }
    FUN_0040c280(pcVar5,iVar8);
    local_8 = 0;
    puVar9 = (undefined4 *)FUN_006089c0(local_2c,local_44);
    puVar1 = (undefined4 *)(in_ECX + 0x38);
    if (puVar1 != puVar9) {
      if (7 < *(uint *)(in_ECX + 0x4c)) {
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*puVar1);
      }
      *(undefined4 *)(in_ECX + 0x4c) = 7;
      *(undefined4 *)(in_ECX + 0x48) = 0;
      *(undefined2 *)puVar1 = 0;
      FUN_0040f110(puVar9);
    }
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 7;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
    local_8 = 0xffffffff;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_44[0]);
    }
    pcVar5 = *(char **)(*piVar2 + 0x18);
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    if (*pcVar5 == '\0') {
      iVar8 = 0;
    }
    else {
      pcVar10 = pcVar5;
      do {
        cVar3 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar3 != '\0');
      iVar8 = (int)pcVar10 - (int)(pcVar5 + 1);
    }
    FUN_0040c280(pcVar5,iVar8);
    local_8 = 1;
    puVar9 = (undefined4 *)FUN_006089c0(local_2c,local_44);
    puVar1 = (undefined4 *)(in_ECX + 0x20);
    if (puVar1 != puVar9) {
      if (7 < *(uint *)(in_ECX + 0x34)) {
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*puVar1);
      }
      *(undefined4 *)(in_ECX + 0x34) = 7;
      *(undefined4 *)(in_ECX + 0x30) = 0;
      *(undefined2 *)puVar1 = 0;
      FUN_0040f110(puVar9);
    }
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 7;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
    local_8 = 0xffffffff;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_44[0]);
    }
    iVar8 = FUN_0068fc00(*piVar2);
    if (iVar8 != 0) {
      FUN_00403350(iVar8);
      local_8 = 2;
      puVar9 = (undefined4 *)FUN_006089c0(local_2c,local_44);
      puVar1 = (undefined4 *)(in_ECX + 0x50);
      if (puVar1 != puVar9) {
        if (7 < *(uint *)(in_ECX + 100)) {
                    /* WARNING: Subroutine does not return */
          operator_delete((void *)*puVar1);
        }
        *(undefined4 *)(in_ECX + 100) = 7;
        *(undefined4 *)(in_ECX + 0x60) = 0;
        *(undefined2 *)puVar1 = 0;
        FUN_0040f110(puVar9);
      }
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      local_18 = 7;
      local_1c = 0;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
    }
    iVar8 = *piVar2;
    iVar6 = *(int *)(iVar8 + 0x38);
    uVar4 = *(ushort *)(iVar8 + 0x44);
    *(float *)(in_ECX + 0xf8) = (float)*(int *)(iVar8 + 0x34) / (float)uVar4;
    *(float *)(in_ECX + 0xfc) = (float)iVar6 / (float)uVar4;
    iVar8 = *piVar2;
    iVar6 = *(int *)(iVar8 + 0x40);
    uVar4 = *(ushort *)(iVar8 + 0x44);
    *(float *)(in_ECX + 0x100) = (float)*(int *)(iVar8 + 0x3c) / (float)uVar4;
    *(float *)(in_ECX + 0x104) = (float)iVar6 / (float)uVar4;
    FUN_00695f10(param_1,in_ECX + 0xdc);
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x10c));
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x10c));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00661a20 @ 00661a20  kind=gamemisc  attributed-by=none  size=189 */

undefined4 * FUN_00661a20(undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00661940(piVar2[1]);
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
    FUN_00661ae0(local_8,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return param_1;
}


/* FUN_00661ae0 @ 00661ae0  kind=gamemisc  attributed-by=none  size=647 */

/* WARNING: Removing unreachable block (ram,0x00661bad) */
/* WARNING: Removing unreachable block (ram,0x00661bbd) */
/* WARNING: Removing unreachable block (ram,0x00661bc6) */
/* WARNING: Removing unreachable block (ram,0x00661bc9) */
/* WARNING: Removing unreachable block (ram,0x00661bb9) */
/* WARNING: Removing unreachable block (ram,0x00661bd7) */
/* WARNING: Removing unreachable block (ram,0x00661be6) */
/* WARNING: Removing unreachable block (ram,0x00661bf1) */
/* WARNING: Removing unreachable block (ram,0x00661bed) */
/* WARNING: Removing unreachable block (ram,0x00661be1) */
/* WARNING: Removing unreachable block (ram,0x00661bf4) */

void FUN_00661ae0(undefined4 param_1,int *param_2)

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
              goto LAB_00661d3e;
            }
LAB_00661ce0:
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
            goto LAB_00661ce0;
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
            goto LAB_00661d3e;
          }
        }
        piVar5 = (int *)piVar3[1];
        piVar6 = piVar3;
      } while (piVar3 != *(int **)(*in_ECX + 4));
    }
    *(undefined1 *)(piVar6 + 3) = 1;
  }
LAB_00661d3e:
  if (7 < (uint)param_2[9]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_2[4]);
  }
  param_2[9] = 7;
  param_2[8] = 0;
  *(undefined2 *)(param_2 + 4) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_2);
}


/* FUN_006626d0 @ 006626d0  kind=gamemisc  attributed-by=none  size=88 */

char FUN_006626d0(int param_1)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = *(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc);
  iVar1 = iVar3 >> 0x1f;
  if (iVar3 / 0xc + iVar1 == iVar1) {
    FUN_0044be20();
    return '\0';
  }
  iVar1 = *(int *)(in_ECX + 0x1c);
  *(int *)(in_ECX + 0x1c) = param_1 + iVar1;
  cVar2 = FUN_00662300(in_ECX + 0xc,iVar1);
  if (cVar2 == '\0') {
    FUN_0044be20();
  }
  return cVar2;
}


/* FUN_00664bf0 @ 00664bf0  kind=gamemisc  attributed-by=none  size=30 */

int FUN_00664bf0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = 0;
  for (puVar1 = (undefined4 *)**(undefined4 **)(in_ECX + 0x24);
      puVar1 != *(undefined4 **)(in_ECX + 0x24); puVar1 = (undefined4 *)*puVar1) {
    iVar2 = iVar2 + *(int *)(puVar1[2] + 8);
  }
  return iVar2;
}


/* FUN_00664cf0 @ 00664cf0  kind=gamemisc  attributed-by=none  size=98 */

char FUN_00664cf0(undefined4 param_1)

{
  char cVar1;
  int *in_ECX;
  char cVar2;
  int *piVar3;
  
  cVar2 = '\0';
  *(undefined1 *)((int)in_ECX + 0x2e) = 1;
  if (((char)in_ECX[0xb] != '\0') && (piVar3 = *(int **)in_ECX[9], piVar3 != (int *)in_ECX[9])) {
    do {
      cVar1 = FUN_006626d0(param_1);
      piVar3 = (int *)*piVar3;
      if (cVar1 != '\0') {
        cVar2 = '\x01';
      }
    } while (piVar3 != (int *)in_ECX[9]);
    if (cVar2 != '\0') {
      (**(code **)(*in_ECX + 4))(0);
      return cVar2;
    }
  }
  *(undefined1 *)(in_ECX + 0xb) = 0;
  return '\0';
}


/* FUN_00667ee0 @ 00667ee0  kind=gamemisc  attributed-by=none  size=550 */

void FUN_00667ee0(int *param_1,undefined4 *param_2,void *param_3,undefined4 *param_4)

{
  size_t _Size;
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  int *in_ECX;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  void *_Src;
  
  uVar9 = (uint)param_3;
  iVar3 = (int)param_2 - *in_ECX;
  if (param_3 != (void *)0x0) {
    pvVar2 = (void *)in_ECX[1];
    if ((uint)(in_ECX[2] - (int)pvVar2 >> 2) < param_3) {
      iVar6 = (int)pvVar2 - *in_ECX >> 2;
      if (0x3fffffffU - iVar6 < param_3) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      uVar4 = FUN_0046dcc0(iVar6 + (int)param_3);
      param_3 = (void *)0x0;
      if ((uVar4 != 0) &&
         ((0x3fffffff < uVar4 || (param_3 = operator_new(uVar4 << 2), param_3 == (void *)0x0)))) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_alloc();
      }
      iVar6 = (int)param_2 - *in_ECX >> 2;
      puVar8 = (undefined4 *)((int)param_3 + iVar6 * 4);
      for (uVar7 = uVar9; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar8 = *param_4;
        puVar8 = puVar8 + 1;
      }
      memmove(param_3,(void *)*in_ECX,(int)param_2 - *in_ECX & 0xfffffffc);
      memmove((void *)((int)param_3 + (iVar6 + uVar9) * 4),param_2,
              in_ECX[1] - (int)param_2 & 0xfffffffc);
      pvVar2 = (void *)*in_ECX;
      if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar2);
      }
      *in_ECX = (int)param_3;
      in_ECX[2] = (int)((int)param_3 + uVar4 * 4);
      in_ECX[1] = (int)((int)param_3 + (uVar9 + (in_ECX[1] - (int)pvVar2 >> 2)) * 4);
    }
    else {
      uVar1 = *param_4;
      uVar9 = (int)pvVar2 - (int)param_2 >> 2;
      if (uVar9 < param_3) {
        memmove(param_2 + (int)param_3,param_2,uVar9 * 4);
        puVar8 = (undefined4 *)in_ECX[1];
        iVar6 = (int)param_3 - ((int)puVar8 - (int)param_2 >> 2);
        if (iVar6 != 0) {
          for (; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar8 = uVar1;
            puVar8 = puVar8 + 1;
          }
        }
        in_ECX[1] = in_ECX[1] + (int)param_3 * 4;
        iVar6 = in_ECX[1];
        for (; param_2 != (undefined4 *)(iVar6 + (int)param_3 * -4); param_2 = param_2 + 1) {
          *param_2 = uVar1;
        }
      }
      else {
        _Src = (void *)((int)pvVar2 + (int)param_3 * -4);
        _Size = ((int)pvVar2 - (int)_Src >> 2) * 4;
        pvVar5 = memmove(pvVar2,_Src,_Size);
        in_ECX[1] = (int)((int)pvVar5 + _Size);
        iVar6 = (int)_Src - (int)param_2 >> 2;
        memmove((void *)((int)pvVar2 + iVar6 * -4),param_2,iVar6 * 4);
        puVar8 = param_2;
        if (param_2 != param_2 + (int)param_3) {
          do {
            *puVar8 = uVar1;
            puVar8 = puVar8 + 1;
          } while (puVar8 != param_2 + (int)param_3);
        }
      }
    }
  }
  *param_1 = *in_ECX + (iVar3 >> 2) * 4;
  return;
}


/* FUN_006685d0 @ 006685d0  kind=gamemisc  attributed-by=none  size=643 */

void FUN_006685d0(int *param_1,int param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  uint uStack_4c;
  undefined1 local_25;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7d50;
  local_10 = ExceptionList;
  uStack_4c = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  iVar1 = *in_ECX;
  local_18 = uStack_4c;
  puVar3 = &uStack_4c;
  if (param_3 != 0) {
    iVar2 = in_ECX[1];
    if ((uint)((in_ECX[2] - iVar2) / 0xc) < param_3) {
      iVar2 = (iVar2 - *in_ECX) / 0xc;
      if (0x15555555U - iVar2 < param_3) {
        local_14 = (undefined1 *)&uStack_4c;
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      local_14 = (undefined1 *)&uStack_4c;
      iVar4 = FUN_00667e90(iVar2 + param_3);
      iVar5 = FUN_0063fe80(iVar4);
      iVar2 = (param_2 - *in_ECX) / 0xc;
      local_8 = 0;
      FUN_006660e0(iVar5 + iVar2 * 0xc,param_3,param_4,&local_25,0,param_1);
      FUN_00666110(*in_ECX,param_2,iVar5,&local_25,0,param_1);
      FUN_00666110(param_2,in_ECX[1],iVar5 + (iVar2 + param_3) * 0xc,&local_25,0,param_1);
      iVar2 = *in_ECX;
      if ((void *)*in_ECX != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*in_ECX);
      }
      *in_ECX = iVar5;
      in_ECX[2] = iVar5 + iVar4 * 0xc;
      in_ECX[1] = iVar5 + (param_3 + (in_ECX[1] - iVar2) / 0xc) * 0xc;
      puVar3 = (uint *)local_14;
    }
    else {
      local_24 = *param_4;
      local_20 = param_4[1];
      local_1c = param_4[2];
      if ((uint)((iVar2 - param_2) / 0xc) < param_3) {
        local_14 = (undefined1 *)&uStack_4c;
        FUN_00666110(param_2,iVar2,param_3 * 0xc + param_2,&local_25,0,param_1);
        local_8 = 2;
        FUN_006660e0(in_ECX[1],param_3 - (in_ECX[1] - param_2) / 0xc,&local_24,&local_25,0,param_1);
        in_ECX[1] = in_ECX[1] + param_3 * 0xc;
        FUN_00666180(param_2,in_ECX[1] + param_3 * -0xc,&local_24);
        puVar3 = (uint *)local_14;
      }
      else {
        iVar5 = iVar2 + param_3 * -0xc;
        iVar4 = FUN_00666110(iVar5,iVar2,iVar2,&local_25,0,param_1);
        in_ECX[1] = iVar4;
        FUN_00665cf0(param_2,iVar5,iVar2);
        FUN_00666180(param_2,param_3 * 0xc + param_2,&local_24);
        puVar3 = (uint *)local_14;
      }
    }
  }
  local_14 = (undefined1 *)puVar3;
  *param_1 = *in_ECX + ((param_2 - iVar1) / 0xc) * 0xc;
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0066cc10 @ 0066cc10  kind=gamemisc  attributed-by=none  size=120 */

void FUN_0066cc10(int param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  
  uVar1 = param_2;
  while ((param_2 = uVar1, param_2 != param_5 || (param_1 != param_4))) {
    if (param_3 == 0) {
      uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(param_2);
      param_3 = *(int *)(*(int *)(param_1 + 0x1c) + uVar1 * 4) +
                (param_2 - (1 << ((byte)uVar1 & 0x1f) & 0xfffffffeU)) * 0x4c;
    }
    FUN_0066ec30(param_3);
    uVar1 = param_2 + 1;
    if (param_3 != 0) {
      if ((uVar1 & param_2 - 1) == 0) {
        param_3 = 0;
      }
      else {
        param_3 = param_3 + 0x4c;
      }
    }
  }
  return;
}


/* FUN_0066cc90 @ 0066cc90  kind=gamemisc  attributed-by=none  size=120 */

void FUN_0066cc90(int param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  
  uVar1 = param_2;
  while ((param_2 = uVar1, param_2 != param_5 || (param_1 != param_4))) {
    if (param_3 == 0) {
      uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(param_2);
      param_3 = *(int *)(*(int *)(param_1 + 0x1c) + uVar1 * 4) +
                (param_2 - (1 << ((byte)uVar1 & 0x1f) & 0xfffffffeU)) * 0x7c;
    }
    FUN_0066f1d0(param_3);
    uVar1 = param_2 + 1;
    if (param_3 != 0) {
      if ((uVar1 & param_2 - 1) == 0) {
        param_3 = 0;
      }
      else {
        param_3 = param_3 + 0x7c;
      }
    }
  }
  return;
}


/* FUN_0066e1b0 @ 0066e1b0  kind=gamemisc  attributed-by=none  size=137 */

void FUN_0066e1b0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7f6c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = param_1;
  Concurrency::details::_Cancellation_beacon::_Cancellation_beacon
            ((_Cancellation_beacon *)(in_ECX + 2));
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  local_8 = 0;
  in_ECX[6] = 0;
  puVar1 = (undefined4 *)Concurrency::details::_Context::_CurrentContext();
  in_ECX[3] = *puVar1;
  ExceptionList = local_10;
  return;
}


/* FUN_0066ec20 @ 0066ec20  kind=gamemisc  attributed-by=none  size=5 */

void FUN_0066ec20(void)

{
  char cVar1;
  _StructuredTaskCollection *in_ECX;
  missing_wait amStack_10 [3];
  
  if (0 < *(int *)(in_ECX + 0x10)) {
    Concurrency::details::_StructuredTaskCollection::_Abort(in_ECX);
    cVar1 = __uncaught_exception();
    if (cVar1 == '\0') {
      if ((*(int *)(in_ECX + 8) != 0) && (*(int *)(in_ECX + 8) != 2)) {
        Concurrency::details::_StructuredTaskCollection::_CleanupToken(in_ECX);
      }
      Concurrency::missing_wait::missing_wait(amStack_10);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(amStack_10,(ThrowInfo *)&DAT_0075f3d8);
    }
  }
  if ((*(int *)(in_ECX + 8) != 0) && (*(int *)(in_ECX + 8) != 2)) {
    Concurrency::details::_StructuredTaskCollection::_CleanupToken(in_ECX);
  }
  return;
}


/* FUN_0066ed80 @ 0066ed80  kind=gamemisc  attributed-by=none  size=353 */

void FUN_0066ed80(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  
  fVar1 = (*(float **)param_1[1])[1];
  fVar2 = (*(float **)*param_1)[1];
  fVar3 = (*(float **)param_1[2])[1];
  fVar4 = (*(float **)param_1[3])[1];
  pfVar13 = (float *)param_1[4];
  *pfVar13 = (**(float **)*param_1 + **(float **)param_1[1] + **(float **)param_1[2] +
             **(float **)param_1[3]) * 0.25;
  pfVar13[1] = (fVar4 + fVar3 + fVar1 + fVar2) * 0.25;
  pfVar13 = *(float **)(param_1[1] + 4);
  fVar1 = pfVar13[1];
  pfVar14 = *(float **)(*param_1 + 4);
  fVar2 = pfVar14[1];
  fVar3 = *pfVar14;
  fVar4 = pfVar13[3];
  fVar5 = pfVar14[3];
  fVar6 = *pfVar13;
  pfVar15 = *(float **)(param_1[2] + 4);
  fVar7 = pfVar15[1];
  fVar8 = *pfVar15;
  fVar9 = pfVar15[3];
  pfVar16 = *(float **)(param_1[3] + 4);
  fVar10 = pfVar16[1];
  fVar11 = *pfVar16;
  fVar12 = pfVar16[3];
  pfVar17 = (float *)param_1[5];
  pfVar17[2] = (pfVar16[2] + pfVar15[2] + pfVar13[2] + pfVar14[2]) * 0.25;
  *pfVar17 = (fVar3 + fVar6 + fVar8 + fVar11) * 0.25;
  pfVar17[3] = (fVar12 + fVar9 + fVar4 + fVar5) * 0.25;
  pfVar17[1] = (fVar10 + fVar7 + fVar1 + fVar2) * 0.25;
  fVar1 = (*(float **)(param_1[1] + 8))[1];
  fVar2 = (*(float **)(*param_1 + 8))[1];
  fVar3 = (*(float **)(param_1[2] + 8))[1];
  fVar4 = (*(float **)(param_1[3] + 8))[1];
  pfVar13 = (float *)param_1[6];
  *pfVar13 = (**(float **)(param_1[3] + 8) +
             **(float **)(*param_1 + 8) + **(float **)(param_1[1] + 8) +
             **(float **)(param_1[2] + 8)) * 0.25;
  pfVar13[1] = (fVar4 + fVar3 + fVar1 + fVar2) * 0.25;
  return;
}


/* FUN_0066eef0 @ 0066eef0  kind=gamemisc  attributed-by=none  size=728 */

void FUN_0066eef0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  undefined4 *in_ECX;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xf9;
  if ((((*param_1 != 0) && (param_1[1] != 0)) &&
      ((*(byte *)((undefined4 *)param_1[2] + 0xc) & 2) == 0)) &&
     ((*(byte *)((undefined4 *)param_1[3] + 0xc) & 2) == 0)) {
    pfVar15 = *(float **)(*param_1 + 0x10);
    pfVar16 = *(float **)(param_1[1] + 0x10);
    fVar1 = pfVar16[1];
    fVar2 = pfVar15[1];
    pfVar17 = *(float **)param_1[2];
    pfVar18 = *(float **)param_1[3];
    fVar3 = pfVar18[1];
    fVar4 = pfVar17[1];
    pfVar19 = (float *)in_ECX[1];
    pfVar20 = (float *)*in_ECX;
    fVar5 = *pfVar20;
    fVar6 = *pfVar19;
    pfVar21 = (float *)param_1[4];
    *pfVar21 = ((*pfVar17 + *pfVar18) * *pfVar20 + (*pfVar15 + *pfVar16) * *pfVar19) * 0.5;
    pfVar21[1] = ((fVar3 + fVar4) * fVar5 + (fVar1 + fVar2) * fVar6) * 0.5;
    fVar1 = *pfVar19;
    pfVar15 = *(float **)(param_1[1] + 0x14);
    fVar2 = pfVar15[1];
    pfVar16 = *(float **)(*param_1 + 0x14);
    fVar3 = pfVar15[2];
    fVar4 = pfVar16[1];
    fVar5 = pfVar16[2];
    fVar6 = pfVar15[3];
    fVar7 = pfVar16[3];
    pfVar17 = *(float **)(param_1[3] + 4);
    fVar8 = pfVar17[2];
    pfVar18 = *(float **)(param_1[2] + 4);
    fVar9 = pfVar17[3];
    fVar10 = pfVar18[2];
    fVar11 = pfVar18[3];
    fVar12 = pfVar17[1];
    fVar13 = pfVar18[1];
    pfVar21 = (float *)param_1[5];
    fVar14 = *pfVar20;
    *pfVar21 = ((*pfVar16 + *pfVar15) * fVar1 + (*pfVar18 + *pfVar17) * fVar14) * 0.5;
    pfVar21[1] = ((fVar2 + fVar4) * fVar1 + (fVar12 + fVar13) * fVar14) * 0.5;
    pfVar21[2] = ((fVar3 + fVar5) * fVar1 + (fVar8 + fVar10) * fVar14) * 0.5;
    pfVar21[3] = ((fVar6 + fVar7) * fVar1 + (fVar9 + fVar11) * fVar14) * 0.5;
    fVar1 = (*(float **)(param_1[1] + 0x18))[1];
    fVar2 = (*(float **)(*param_1 + 0x18))[1];
    fVar3 = (*(float **)(param_1[3] + 8))[1];
    fVar4 = (*(float **)(param_1[2] + 8))[1];
    fVar5 = *pfVar19;
    fVar6 = *pfVar20;
    pfVar15 = (float *)param_1[6];
    *pfVar15 = ((**(float **)(param_1[3] + 8) + **(float **)(param_1[2] + 8)) * *pfVar20 +
               (**(float **)(*param_1 + 0x18) + **(float **)(param_1[1] + 0x18)) * *pfVar19) * 0.5;
    pfVar15[1] = ((fVar3 + fVar4) * fVar6 + (fVar1 + fVar2) * fVar5) * 0.5;
    return;
  }
  fVar1 = **(float **)param_1[2];
  fVar2 = **(float **)param_1[3];
  pfVar15 = (float *)param_1[4];
  pfVar15[1] = ((*(float **)param_1[3])[1] + (*(float **)param_1[2])[1]) * 0.5;
  *pfVar15 = (fVar1 + fVar2) * 0.5;
  pfVar15 = *(float **)(param_1[3] + 4);
  pfVar16 = *(float **)(param_1[2] + 4);
  fVar1 = pfVar15[3];
  fVar2 = pfVar16[3];
  fVar3 = *pfVar15;
  fVar4 = *pfVar16;
  fVar5 = pfVar15[1];
  fVar6 = pfVar16[1];
  pfVar17 = (float *)param_1[5];
  pfVar17[2] = (pfVar15[2] + pfVar16[2]) * 0.5;
  pfVar17[3] = (fVar1 + fVar2) * 0.5;
  *pfVar17 = (fVar3 + fVar4) * 0.5;
  pfVar17[1] = (fVar5 + fVar6) * 0.5;
  fVar1 = **(float **)(param_1[2] + 8);
  fVar2 = **(float **)(param_1[3] + 8);
  pfVar15 = (float *)param_1[6];
  pfVar15[1] = ((*(float **)(param_1[3] + 8))[1] + (*(float **)(param_1[2] + 8))[1]) * 0.5;
  *pfVar15 = (fVar1 + fVar2) * 0.5;
  if (((*(byte *)(param_1[2] + 0x30) & 4) != 0) || ((*(byte *)(param_1[3] + 0x30) & 4) != 0)) {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 4;
  }
  return;
}


/* FUN_0066f280 @ 0066f280  kind=gamemisc  attributed-by=none  size=249 */

void FUN_0066f280(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  
  if ((((*param_1 == 0) || (param_1[1] == 0)) &&
      ((*(byte *)((undefined4 *)param_1[2] + 0xc) & 4) != 0)) &&
     ((*(byte *)((undefined4 *)param_1[3] + 0xc) & 4) != 0)) {
    pfVar7 = *(float **)param_1[2];
    pfVar8 = *(float **)param_1[3];
    fVar1 = pfVar8[1];
    fVar2 = pfVar7[1];
    pfVar9 = (float *)param_1[4];
    *pfVar9 = (*pfVar8 + *pfVar7) * 0.5;
    pfVar9[1] = (fVar1 + fVar2) * 0.5;
    pfVar7 = *(float **)(param_1[3] + 4);
    pfVar8 = *(float **)(param_1[2] + 4);
    fVar1 = pfVar7[3];
    fVar2 = pfVar8[3];
    fVar3 = *pfVar7;
    fVar4 = *pfVar8;
    fVar5 = pfVar7[1];
    fVar6 = pfVar8[1];
    pfVar9 = (float *)param_1[5];
    pfVar9[2] = (pfVar7[2] + pfVar8[2]) * 0.5;
    pfVar9[3] = (fVar1 + fVar2) * 0.5;
    *pfVar9 = (fVar3 + fVar4) * 0.5;
    pfVar9[1] = (fVar5 + fVar6) * 0.5;
    fVar1 = **(float **)(param_1[2] + 8);
    fVar2 = **(float **)(param_1[3] + 8);
    pfVar7 = (float *)param_1[6];
    pfVar7[1] = ((*(float **)(param_1[3] + 8))[1] + (*(float **)(param_1[2] + 8))[1]) * 0.5;
    *pfVar7 = (fVar1 + fVar2) * 0.5;
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfb | 2;
  }
  return;
}


/* FUN_0066f380 @ 0066f380  kind=gamemisc  attributed-by=none  size=736 */

void FUN_0066f380(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 *in_ECX;
  float fVar8;
  
  bVar5 = *(byte *)(param_1 + 0xc);
  if (((bVar5 & 2) == 0) && (param_1[0xb] != 0)) {
    fVar8 = (float)param_1[0xb];
    if ((bVar5 & 1) != 0) {
      if ((bVar5 & 4) == 0) {
        fVar1 = (float)param_1[3];
        fVar8 = *(float *)*in_ECX / fVar8;
        pfVar6 = (float *)*param_1;
        pfVar7 = (float *)in_ECX[1];
        fVar2 = *pfVar7;
        pfVar6[1] = pfVar6[1] * *pfVar7 + (float)param_1[4] * fVar8;
        *pfVar6 = *pfVar6 * fVar2 + fVar1 * fVar8;
        fVar1 = (float)param_1[7];
        pfVar6 = (float *)param_1[1];
        fVar2 = (float)param_1[6];
        fVar3 = (float)param_1[8];
        fVar4 = *pfVar7;
        *pfVar6 = (float)param_1[5] * fVar8 + *pfVar6 * fVar4;
        pfVar6[1] = fVar2 * fVar8 + pfVar6[1] * fVar4;
        pfVar6[2] = fVar1 * fVar8 + pfVar6[2] * fVar4;
        pfVar6[3] = pfVar6[3] * fVar4 + fVar3 * fVar8;
        pfVar6 = (float *)param_1[2];
        fVar1 = (float)param_1[10];
        fVar2 = *pfVar7;
        *pfVar6 = *pfVar6 * *pfVar7 + (float)param_1[9] * fVar8;
        pfVar6[1] = pfVar6[1] * fVar2 + fVar1 * fVar8;
        return;
      }
      fVar8 = 1.0 / fVar8;
      fVar1 = (float)param_1[4];
      pfVar6 = (float *)*param_1;
      *pfVar6 = (float)param_1[3] * fVar8;
      pfVar6[1] = fVar1 * fVar8;
      fVar1 = (float)param_1[6];
      fVar2 = (float)param_1[7];
      fVar3 = (float)param_1[8];
      pfVar6 = (float *)param_1[1];
      *pfVar6 = (float)param_1[5] * fVar8;
      pfVar6[1] = fVar1 * fVar8;
      pfVar6[2] = fVar2 * fVar8;
      pfVar6[3] = fVar3 * fVar8;
      fVar1 = (float)param_1[9];
      pfVar6 = (float *)param_1[2];
      pfVar6[1] = (float)param_1[10] * fVar8;
      *pfVar6 = fVar1 * fVar8;
      return;
    }
    fVar8 = 0.75 / fVar8;
    pfVar6 = (float *)*param_1;
    fVar1 = (float)param_1[4];
    *pfVar6 = *pfVar6 * 0.25 + (float)param_1[3] * fVar8;
    pfVar6[1] = pfVar6[1] * 0.25 + fVar1 * fVar8;
    pfVar6 = (float *)param_1[1];
    fVar1 = (float)param_1[5];
    fVar2 = (float)param_1[7];
    fVar3 = (float)param_1[8];
    pfVar6[1] = pfVar6[1] * 0.25 + (float)param_1[6] * fVar8;
    pfVar6[2] = pfVar6[2] * 0.25 + fVar2 * fVar8;
    *pfVar6 = *pfVar6 * 0.25 + fVar1 * fVar8;
    pfVar6[3] = pfVar6[3] * 0.25 + fVar3 * fVar8;
    pfVar6 = (float *)param_1[2];
    fVar1 = (float)param_1[9];
    pfVar6[1] = pfVar6[1] * 0.25 + (float)param_1[10] * fVar8;
    *pfVar6 = *pfVar6 * 0.25 + fVar1 * fVar8;
  }
  return;
}


/* FUN_00671340 @ 00671340  kind=gamemisc  attributed-by=none  size=218 */

uint FUN_00671340(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  uint in_EAX;
  code *pcVar5;
  undefined4 *in_ECX;
  _SpinWait<1> local_14 [8];
  undefined4 local_c;
  code *local_8;
  uint3 extraout_var;
  
  pcVar5 = _Yield_exref;
  if (in_ECX[4] != 0) {
    return in_EAX & 0xffffff00;
  }
  iVar1 = *param_1;
  *in_ECX = param_1;
  local_c = 0;
  local_8 = pcVar5;
  if (*param_1 == iVar1) {
    do {
      if (in_ECX[4] != 0) break;
      if ((in_ECX[5] == 0) ||
         (bVar4 = Concurrency::details::_Context::_IsSynchronouslyBlocked((_Context *)(in_ECX + 3)),
         !bVar4)) {
        Concurrency::details::_SpinWait<1>::_SpinOnce(local_14);
        pcVar5 = (code *)((uint)extraout_var << 8);
      }
      else {
        LOCK();
        in_ECX[6] = in_ECX[6] + 1;
        UNLOCK();
        piVar2 = (int *)in_ECX[5];
        if ((((piVar2 != (int *)0x0) &&
             (bVar4 = Concurrency::details::_Context::_IsSynchronouslyBlocked
                                ((_Context *)(in_ECX + 3)), bVar4)) && (*param_1 == iVar1)) &&
           (in_ECX[4] == 0)) {
          *in_ECX = 0;
          iVar3 = *piVar2;
          *param_1 = iVar3 + 1;
          param_1[1] = piVar2[1];
          piVar2[1] = iVar3 + 1;
        }
        piVar2 = in_ECX + 6;
        LOCK();
        pcVar5 = (code *)*piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
      }
    } while (*param_1 == iVar1);
    if (*param_1 == iVar1) {
      return (uint)pcVar5 & 0xffffff00;
    }
  }
  return (uint)(param_1[1] != *param_1 && -1 < param_1[1] - *param_1);
}


/* FUN_00671f80 @ 00671f80  kind=gamemisc  attributed-by=none  size=587 */

void FUN_00671f80(float param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  uint uVar3;
  undefined1 *puVar4;
  float **ppfVar5;
  float *local_30;
  float *local_2c;
  float *local_28;
  float *local_24;
  int local_20;
  float local_1c;
  float local_18;
  int local_14;
  undefined1 local_c [5];
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  puVar4 = &local_5;
  uVar3 = *(uint *)(in_ECX + 0x58);
  local_20 = in_ECX + 0x40;
  local_5 = 0;
  local_14 = in_ECX;
  uVar2 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
                    ((_Concurrent_vector_base_v4 *)(in_ECX + 0x44));
  if (uVar2 < uVar3) {
    uVar3 = uVar2;
  }
  FUN_0066df80(in_ECX + 0x40,0,0,in_ECX + 0x40,uVar3,0,puVar4);
  local_1c = 1.0 - param_1;
  local_18 = param_1;
  local_6 = 0;
  Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
            ((_Concurrent_vector_base_v4 *)(in_ECX + 4));
  FUN_0066e140();
  local_28 = &local_1c;
  local_24 = &local_18;
  ppfVar5 = &local_28;
  uVar3 = *(uint *)(in_ECX + 0x38);
  uVar2 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
                    ((_Concurrent_vector_base_v4 *)(in_ECX + 0x24));
  if (uVar2 < uVar3) {
    uVar3 = uVar2;
  }
  iVar1 = in_ECX + 0x20;
  FUN_0066e060(iVar1,0,0,in_ECX + 0x20,uVar3,0,ppfVar5);
  uVar3 = *(uint *)(in_ECX + 0x38);
  uVar2 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
                    ((_Concurrent_vector_base_v4 *)(in_ECX + 0x24));
  if (uVar2 < uVar3) {
    uVar3 = uVar2;
  }
  FUN_0066cc10(iVar1,0,0,iVar1,uVar3,0,local_c);
  Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
            ((_Concurrent_vector_base_v4 *)(in_ECX + 4));
  FUN_0066cc90();
  iVar1 = local_20;
  local_30 = &local_18;
  uVar3 = *(uint *)(local_20 + 0x18);
  local_2c = &local_1c;
  ppfVar5 = &local_30;
  uVar2 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
                    ((_Concurrent_vector_base_v4 *)(local_20 + 4));
  if (uVar2 < uVar3) {
    uVar3 = uVar2;
  }
  FUN_0066dff0(iVar1,0,0,iVar1,uVar3,0,ppfVar5);
  uVar3 = *(uint *)(local_14 + 0x38);
  puVar4 = &local_7;
  local_7 = 0;
  uVar2 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
                    ((_Concurrent_vector_base_v4 *)(local_14 + 0x24));
  if (uVar2 < uVar3) {
    uVar3 = uVar2;
  }
  FUN_0066e0d0(local_14 + 0x20,0,0,local_14 + 0x20,uVar3,0,puVar4);
  return;
}


/* FUN_006721d0 @ 006721d0  kind=gamemisc  attributed-by=none  size=1064 */

void FUN_006721d0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  int iVar7;
  bool bVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_8c [4];
  float local_88;
  float local_84;
  int local_80;
  int local_7c;
  int local_78;
  float local_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  float local_3c;
  float fStack_38;
  float local_34;
  float fStack_30;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)auStack_8c;
  iVar7 = param_2 * 2 + 2;
  local_80 = param_2;
  local_7c = param_3;
  local_70 = param_4;
  local_78 = param_2;
  bVar8 = iVar7 == param_3;
  if (iVar7 < param_3) {
    do {
      puVar2 = *(undefined4 **)(param_1 + 8 + iVar7 * 0xc);
      iVar3 = *(int *)(param_1 + 4 + iVar7 * 0xc);
      iVar4 = *(int *)*puVar2;
      uVar1 = *(undefined8 *)(iVar4 + *(int *)(param_1 + iVar7 * 0xc) * 8);
      local_5c._0_4_ = (float)uVar1;
      local_5c._0_4_ = *(float *)(iVar4 + iVar3 * 8) + (float)local_5c;
      local_5c._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
      local_5c._4_4_ = *(float *)(iVar4 + 4 + iVar3 * 8) + local_5c._4_4_;
      local_2c = local_5c;
      fVar10 = (float)local_5c * 0.5;
      fVar12 = local_5c._4_4_ * 0.5;
      local_3c = (float)puVar2[5] * fVar12 + fVar10 * (float)puVar2[1] + (float)puVar2[0xd];
      fStack_38 = (float)puVar2[2] * fVar10 + (float)puVar2[6] * fVar12 + (float)puVar2[0xe];
      local_84 = 1.0 / ((float)puVar2[4] * fVar10 + (float)puVar2[8] * fVar12 + (float)puVar2[0x10])
      ;
      local_88 = local_84 * local_3c;
      local_84 = local_84 * fStack_38;
      local_6c = CONCAT44(local_84,local_88);
      local_1c = local_6c;
      local_84 = local_84 - fVar12;
      local_88 = local_88 - fVar10;
      fVar10 = local_84 * local_84 + local_88 * local_88;
      if (0.0 < fVar10) {
        dVar9 = (double)fVar10;
        libm_sse2_sqrt_precise();
        local_88 = local_88 * (1.0 / (float)dVar9);
        local_84 = local_84 * (1.0 / (float)dVar9);
      }
      local_4c = local_6c;
      uVar6 = local_4c;
      local_4c._0_4_ = (float)local_6c;
      local_4c._4_4_ = (float)((ulonglong)local_6c >> 0x20);
      puVar5 = *(undefined4 **)(param_1 + -4 + iVar7 * 0xc);
      iVar3 = *(int *)*puVar5;
      local_84 = local_84 * (local_4c._4_4_ - (float)puVar2[0xe]) +
                 ((float)local_4c - (float)puVar2[0xd]) * local_88;
      iVar4 = *(int *)(param_1 + -8 + iVar7 * 0xc);
      uVar1 = *(undefined8 *)(iVar3 + *(int *)(param_1 + -0xc + iVar7 * 0xc) * 8);
      local_54._0_4_ = (float)uVar1;
      local_54._0_4_ = *(float *)(iVar3 + iVar4 * 8) + (float)local_54;
      local_54._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
      local_54._4_4_ = *(float *)(iVar3 + 4 + iVar4 * 8) + local_54._4_4_;
      local_44 = local_54;
      fVar11 = (float)local_54 * 0.5;
      fVar13 = local_54._4_4_ * 0.5;
      local_34 = (float)puVar5[5] * fVar13 + (float)puVar5[1] * fVar11 + (float)puVar5[0xd];
      fStack_30 = (float)puVar5[2] * fVar11 + (float)puVar5[6] * fVar13 + (float)puVar5[0xe];
      fVar12 = 1.0 / ((float)puVar5[4] * fVar11 + (float)puVar5[8] * fVar13 + (float)puVar5[0x10]);
      fVar10 = fVar12 * local_34;
      fVar12 = fVar12 * fStack_30;
      local_64 = CONCAT44(fVar12,fVar10);
      local_24 = local_64;
      fVar12 = fVar12 - fVar13;
      fVar10 = fVar10 - fVar11;
      fVar11 = fVar12 * fVar12 + fVar10 * fVar10;
      local_88 = fVar10;
      local_74 = fVar12;
      local_4c = uVar6;
      if (0.0 < fVar11) {
        dVar9 = (double)fVar11;
        libm_sse2_sqrt_precise();
        fVar10 = local_88 * (1.0 / (float)dVar9);
        fVar12 = local_74 * (1.0 / (float)dVar9);
      }
      local_14 = local_64;
      uVar1 = local_14;
      local_14._0_4_ = (float)local_64;
      local_14._4_4_ = (float)((ulonglong)local_64 >> 0x20);
      param_2 = iVar7;
      if (local_84 <
          fVar12 * (local_14._4_4_ - (float)puVar5[0xe]) +
          ((float)local_14 - (float)puVar5[0xd]) * fVar10) {
        param_2 = iVar7 + -1;
      }
      *(undefined4 *)(param_1 + local_80 * 0xc) = *(undefined4 *)(param_1 + param_2 * 0xc);
      *(undefined4 *)(param_1 + 4 + local_80 * 0xc) = *(undefined4 *)(param_1 + 4 + param_2 * 0xc);
      *(undefined4 *)(param_1 + 8 + local_80 * 0xc) = *(undefined4 *)(param_1 + 8 + param_2 * 0xc);
      iVar7 = param_2 * 2 + 2;
      bVar8 = iVar7 == local_7c;
      local_80 = param_2;
      local_14 = uVar1;
    } while (iVar7 < local_7c);
  }
  iVar7 = param_2;
  if (bVar8) {
    *(undefined4 *)(param_1 + param_2 * 0xc) = *(undefined4 *)(param_1 + -0xc + local_7c * 0xc);
    *(undefined4 *)(param_1 + 4 + param_2 * 0xc) = *(undefined4 *)(param_1 + -8 + local_7c * 0xc);
    *(undefined4 *)(param_1 + 8 + param_2 * 0xc) = *(undefined4 *)(param_1 + -4 + local_7c * 0xc);
    iVar7 = local_7c + -1;
  }
  local_80 = param_2;
  FUN_00672600(param_1,iVar7,local_78,local_70,param_5);
  __security_check_cookie(local_c ^ (uint)auStack_8c);
  return;
}


/* FUN_00672600 @ 00672600  kind=gamemisc  attributed-by=none  size=1022 */

void FUN_00672600(int param_1,int param_2,int param_3,int *param_4)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  int iVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_84 [4];
  float local_80;
  int local_7c;
  float local_78;
  float local_74;
  int local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  float local_3c;
  float fStack_38;
  float local_34;
  float fStack_30;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)auStack_84;
  local_7c = param_2;
  while (param_3 < local_7c) {
    iVar7 = (local_7c + -1) / 2;
    puVar2 = *(undefined4 **)(param_1 + 8 + iVar7 * 0xc);
    iVar3 = *(int *)*puVar2;
    iVar4 = *(int *)(param_1 + 4 + iVar7 * 0xc);
    local_70 = *(int *)(param_1 + iVar7 * 0xc);
    uVar1 = *(undefined8 *)(iVar3 + local_70 * 8);
    local_54._0_4_ = (float)uVar1;
    local_54._0_4_ = *(float *)(iVar3 + iVar4 * 8) + (float)local_54;
    local_54._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    local_54._4_4_ = *(float *)(iVar3 + 4 + iVar4 * 8) + local_54._4_4_;
    local_2c = local_54;
    fVar9 = (float)local_54 * 0.5;
    fVar11 = local_54._4_4_ * 0.5;
    local_3c = (float)puVar2[5] * fVar11 + fVar9 * (float)puVar2[1] + (float)puVar2[0xd];
    fStack_38 = (float)puVar2[2] * fVar9 + (float)puVar2[6] * fVar11 + (float)puVar2[0xe];
    local_78 = 1.0 / ((float)puVar2[4] * fVar9 + (float)puVar2[8] * fVar11 + (float)puVar2[0x10]);
    local_80 = local_3c * local_78;
    local_78 = fStack_38 * local_78;
    local_6c = CONCAT44(local_78,local_80);
    local_1c = local_6c;
    local_80 = local_80 - fVar9;
    local_78 = local_78 - fVar11;
    fVar9 = local_78 * local_78 + local_80 * local_80;
    if (0.0 < fVar9) {
      dVar8 = (double)fVar9;
      libm_sse2_sqrt_precise();
      local_80 = local_80 * (1.0 / (float)dVar8);
      local_78 = local_78 * (1.0 / (float)dVar8);
    }
    local_4c = local_6c;
    uVar6 = local_4c;
    local_4c._0_4_ = (float)local_6c;
    local_4c._4_4_ = (float)((ulonglong)local_6c >> 0x20);
    puVar5 = (undefined4 *)param_4[2];
    iVar3 = *(int *)*puVar5;
    local_74 = (local_4c._4_4_ - (float)puVar2[0xe]) * local_78 +
               ((float)local_4c - (float)puVar2[0xd]) * local_80;
    uVar1 = *(undefined8 *)(iVar3 + *param_4 * 8);
    local_5c._0_4_ = (float)uVar1;
    local_5c._0_4_ = (float)local_5c + *(float *)(iVar3 + param_4[1] * 8);
    local_5c._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    local_5c._4_4_ = *(float *)(iVar3 + 4 + param_4[1] * 8) + local_5c._4_4_;
    local_44 = local_5c;
    fVar10 = (float)local_5c * 0.5;
    fVar12 = local_5c._4_4_ * 0.5;
    local_34 = (float)puVar5[5] * fVar12 + (float)puVar5[1] * fVar10 + (float)puVar5[0xd];
    fStack_30 = (float)puVar5[2] * fVar10 + (float)puVar5[6] * fVar12 + (float)puVar5[0xe];
    fVar11 = 1.0 / ((float)puVar5[4] * fVar10 + (float)puVar5[8] * fVar12 + (float)puVar5[0x10]);
    fVar9 = fVar11 * local_34;
    fVar11 = fVar11 * fStack_30;
    local_64 = CONCAT44(fVar11,fVar9);
    local_24 = local_64;
    fVar11 = fVar11 - fVar12;
    fVar9 = fVar9 - fVar10;
    fVar10 = fVar11 * fVar11 + fVar9 * fVar9;
    local_80 = fVar11;
    local_78 = fVar9;
    local_4c = uVar6;
    if (0.0 < fVar10) {
      dVar8 = (double)fVar10;
      libm_sse2_sqrt_precise();
      fVar9 = local_78 * (1.0 / (float)dVar8);
      fVar11 = local_80 * (1.0 / (float)dVar8);
    }
    local_14 = local_64;
    uVar1 = local_14;
    local_14._0_4_ = (float)local_64;
    local_14._4_4_ = (float)((ulonglong)local_64 >> 0x20);
    fVar12 = (float)local_14 - (float)puVar5[0xd];
    fVar10 = local_14._4_4_ - (float)puVar5[0xe];
    local_14 = uVar1;
    if (fVar11 * fVar10 + fVar12 * fVar9 <= local_74) break;
    *(int *)(param_1 + local_7c * 0xc) = local_70;
    *(undefined4 *)(param_1 + 4 + local_7c * 0xc) = *(undefined4 *)(param_1 + 4 + iVar7 * 0xc);
    *(undefined4 *)(param_1 + 8 + local_7c * 0xc) = *(undefined4 *)(param_1 + 8 + iVar7 * 0xc);
    local_7c = iVar7;
    local_14 = local_64;
  }
  *(int *)(param_1 + local_7c * 0xc) = *param_4;
  *(int *)(param_1 + 4 + local_7c * 0xc) = param_4[1];
  *(int *)(param_1 + 8 + local_7c * 0xc) = param_4[2];
  __security_check_cookie(local_c ^ (uint)auStack_84);
  return;
}


/* FUN_00672f70 @ 00672f70  kind=gamemisc  attributed-by=none  size=159 */

void FUN_00672f70(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  
  if (param_1 <= (uint)((in_ECX[2] - in_ECX[1]) / 0xc)) {
    return;
  }
  if (0x15555555U - (in_ECX[1] - *in_ECX) / 0xc < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0xc;
  if (0x15555555 - (uVar1 >> 1) < uVar1) {
    FUN_00672e80();
    return;
  }
  FUN_00672e80();
  return;
}


/* FUN_00674160 @ 00674160  kind=gamemisc  attributed-by=none  size=1229 */

void FUN_00674160(void)

{
  int iVar1;
  undefined4 **ppuVar2;
  undefined4 **ppuVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 **ppuVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int **ppiVar10;
  int *piVar11;
  undefined4 *puVar12;
  int in_ECX;
  uint uVar13;
  undefined4 *puVar14;
  void *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c [8];
  undefined4 *local_54;
  undefined4 local_50;
  int *local_4c;
  int local_48;
  undefined4 *local_44;
  int *local_40;
  int local_3c;
  int *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 *local_1c;
  int local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f82f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar14 = (undefined4 *)(in_ECX + 0x100);
  local_44 = puVar14;
  local_18 = in_ECX;
  FUN_00639cf0(*puVar14,*(undefined4 *)(in_ECX + 0x104),&local_11,puVar14,
               DAT_0076aa78 ^ (uint)&stack0xfffffffc);
  *(undefined4 *)(in_ECX + 0x104) = *puVar14;
  local_54 = (undefined4 *)0x0;
  local_50 = 0;
  local_54 = (undefined4 *)FUN_0043c870();
  local_8 = 0;
  local_20 = 0;
  local_28 = 3;
  if (0 < (int)(*(int *)(in_ECX + 0x38) - *(int *)(in_ECX + 0x34) & 0xfffffffcU)) {
    do {
      local_24 = local_20 * 4;
      local_34 = (undefined4 *)0x0;
      do {
        local_34 = (undefined4 *)((int)local_34 + 1);
        iVar1 = *(int *)(local_24 + *(int *)(in_ECX + 0x34));
        piVar7 = *(int **)(*(int *)(in_ECX + 0x34) + ((int)local_34 % local_28 + local_20) * 4);
        puVar14 = (undefined4 *)local_54[1];
        puVar12 = local_54;
        if (*(char *)((int)local_54[1] + 0xd) == '\0') {
          do {
            if (((int)puVar14[4] < (int)piVar7) ||
               (((int)puVar14[4] <= (int)piVar7 && ((int)puVar14[5] < iVar1)))) {
              puVar4 = (undefined4 *)puVar14[2];
            }
            else {
              puVar4 = (undefined4 *)*puVar14;
              puVar12 = puVar14;
            }
            puVar14 = puVar4;
          } while (*(char *)((int)puVar4 + 0xd) == '\0');
          if (((puVar12 == local_54) || ((int)piVar7 < (int)puVar12[4])) ||
             (((int)piVar7 <= (int)puVar12[4] && (iVar1 < (int)puVar12[5])))) goto LAB_0067425b;
          local_2c = puVar12;
          ppuVar6 = &local_2c;
        }
        else {
LAB_0067425b:
          local_30 = local_54;
          ppuVar6 = &local_30;
        }
        if (*ppuVar6 == local_54) {
          local_3c = iVar1;
          local_38 = piVar7;
          FUN_00665f30(local_5c,0,&local_3c,DAT_0076ded5);
        }
        else {
          FUN_0043ede0(&local_40,*ppuVar6);
        }
        local_24 = local_24 + 4;
        in_ECX = local_18;
      } while ((int)local_34 < 3);
      local_20 = local_20 + 3;
    } while (local_20 < *(int *)(local_18 + 0x38) - *(int *)(local_18 + 0x34) >> 2);
  }
  local_4c = (int *)0x0;
  local_48 = 0;
  local_4c = (int *)FUN_0046d4b0();
  local_8._0_1_ = 1;
  local_20 = 0;
  puVar14 = local_54;
  if (0 < (int)(*(int *)(local_18 + 0x38) - *(int *)(local_18 + 0x34) & 0xfffffffcU)) {
    do {
      local_24 = local_20 * 4;
      local_40 = (int *)0x0;
      do {
        local_40 = (int *)((int)local_40 + 1);
        local_2c = *(undefined4 **)(local_24 + *(int *)(local_18 + 0x34));
        local_38 = *(int **)(*(int *)(local_18 + 0x34) + ((int)local_40 % local_28 + local_20) * 4);
        puVar12 = (undefined4 *)puVar14[1];
        puVar4 = puVar14;
        if (*(char *)((int)puVar14[1] + 0xd) == '\0') {
          do {
            if (((int)puVar12[4] < (int)local_2c) ||
               (((int)puVar12[4] <= (int)local_2c && ((int)puVar12[5] < (int)local_38)))) {
              puVar5 = (undefined4 *)puVar12[2];
            }
            else {
              puVar5 = (undefined4 *)*puVar12;
              puVar4 = puVar12;
            }
            puVar12 = puVar5;
          } while (*(char *)((int)puVar5 + 0xd) == '\0');
          if (((puVar4 == puVar14) || ((int)local_2c < (int)puVar4[4])) ||
             (((int)local_2c <= (int)puVar4[4] && ((int)local_38 < (int)puVar4[5]))))
          goto LAB_00674381;
          local_34 = puVar4;
          ppuVar6 = &local_34;
        }
        else {
LAB_00674381:
          local_30 = puVar14;
          ppuVar6 = &local_30;
        }
        if (*ppuVar6 != puVar14) {
          piVar7 = (int *)FUN_00667a90(&local_2c);
          iVar1 = *piVar7;
          iVar8 = FUN_00583cb0(iVar1,*(undefined4 *)(iVar1 + 4),&local_38);
          if (piVar7[1] == 0x15555554) {
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("list<T> too long");
          }
          piVar7[1] = piVar7[1] + 1;
          *(int *)(iVar1 + 4) = iVar8;
          **(int **)(iVar8 + 4) = iVar8;
          puVar14 = local_54;
        }
        local_24 = local_24 + 4;
      } while ((int)local_40 < 3);
      local_20 = local_20 + 3;
    } while (local_20 < *(int *)(local_18 + 0x38) - *(int *)(local_18 + 0x34) >> 2);
  }
  do {
    if (local_48 == 0) {
      local_8._0_1_ = 0;
      FUN_004e6e60(&local_44,*local_4c,local_4c);
                    /* WARNING: Subroutine does not return */
      operator_delete(local_4c);
    }
    local_68 = (void *)0x0;
    local_64 = 0;
    local_60 = 0;
    local_8._0_1_ = 2;
    FUN_0066aed0(&local_68);
    local_8._0_1_ = 1;
    if (local_68 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_68);
    }
    local_1c = *(undefined4 **)(*local_4c + 0x10);
    local_2c = local_1c;
    do {
      puVar14 = local_1c;
      piVar7 = (int *)local_4c[1];
      piVar11 = local_4c;
      if (*(char *)((int)piVar7 + 0xd) == '\0') {
        do {
          if (piVar7[4] < (int)local_1c) {
            piVar9 = (int *)piVar7[2];
          }
          else {
            piVar9 = (int *)*piVar7;
            piVar11 = piVar7;
          }
          piVar7 = piVar9;
        } while (*(char *)((int)piVar9 + 0xd) == '\0');
        if ((piVar11 == local_4c) || ((int)local_1c < piVar11[4])) goto LAB_006744b0;
        local_40 = piVar11;
        ppiVar10 = &local_40;
      }
      else {
LAB_006744b0:
        local_38 = local_4c;
        ppiVar10 = &local_38;
      }
      if (*ppiVar10 == local_4c) break;
      piVar11 = (int *)FUN_00667a90(&local_1c);
      piVar7 = *(int **)*piVar11;
      local_30 = (undefined4 *)piVar7[2];
      if (piVar7 != (int *)*piVar11) {
        *(int *)piVar7[1] = *piVar7;
        *(int *)(*piVar7 + 4) = piVar7[1];
                    /* WARNING: Subroutine does not return */
        operator_delete(piVar7);
      }
      if (piVar11[1] == 0) {
        puVar12 = (undefined4 *)FUN_00667dd0(local_5c,&local_1c);
        FUN_004e6e60(&local_28,*puVar12,puVar12[1]);
      }
      iVar1 = *(int *)(local_18 + 0x104);
      ppuVar6 = *(undefined4 ***)(iVar1 + -8);
      if ((&local_1c < ppuVar6) && (ppuVar2 = *(undefined4 ***)(iVar1 + -0xc), ppuVar2 <= &local_1c)
         ) {
        ppuVar3 = *(undefined4 ***)(iVar1 + -4);
        if ((ppuVar6 == ppuVar3) && ((int)ppuVar3 - (int)ppuVar6 >> 2 == 0)) {
          iVar8 = (int)ppuVar6 - (int)ppuVar2 >> 2;
          if (iVar8 == 0x3fffffff) {
LAB_0067467c:
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("vector<T> too long");
          }
          local_34 = (undefined4 *)(iVar8 + 1);
          uVar13 = (int)ppuVar3 - (int)ppuVar2 >> 2;
          if (0x3fffffff - (uVar13 >> 1) < uVar13) {
            puVar14 = (undefined4 *)0x0;
          }
          else {
            puVar14 = (undefined4 *)(uVar13 + (uVar13 >> 1));
          }
          if (puVar14 < local_34) {
            puVar14 = local_34;
          }
          FUN_0063da20(puVar14);
        }
        if (*(undefined4 **)(iVar1 + -8) != (undefined4 *)0x0) {
          **(undefined4 **)(iVar1 + -8) =
               *(undefined4 *)(*(int *)(iVar1 + -0xc) + ((int)&local_1c - (int)ppuVar2 >> 2) * 4);
        }
      }
      else {
        ppuVar2 = *(undefined4 ***)(iVar1 + -4);
        if ((ppuVar6 == ppuVar2) && ((int)ppuVar2 - (int)ppuVar6 >> 2 == 0)) {
          iVar8 = (int)ppuVar6 - *(int *)(iVar1 + -0xc) >> 2;
          if (iVar8 == 0x3fffffff) goto LAB_0067467c;
          local_34 = (undefined4 *)(iVar8 + 1);
          uVar13 = (int)ppuVar2 - *(int *)(iVar1 + -0xc) >> 2;
          if (0x3fffffff - (uVar13 >> 1) < uVar13) {
            puVar12 = (undefined4 *)0x0;
          }
          else {
            puVar12 = (undefined4 *)(uVar13 + (uVar13 >> 1));
          }
          if (puVar12 < local_34) {
            puVar12 = local_34;
          }
          FUN_0063da20(puVar12);
        }
        if (*(undefined4 **)(iVar1 + -8) != (undefined4 *)0x0) {
          **(undefined4 **)(iVar1 + -8) = puVar14;
        }
      }
      *(int *)(iVar1 + -8) = *(int *)(iVar1 + -8) + 4;
      local_1c = local_30;
    } while (local_30 != local_2c);
  } while( true );
}


/* FUN_00675690 @ 00675690  kind=gamemisc  attributed-by=none  size=359 */

void FUN_00675690(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  int local_28;
  int local_24;
  double local_20;
  double local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar2 = gluNewTess();
  gluTessCallback(uVar2,0x1870b,FUN_00675670);
  gluTessCallback(uVar2,0x1870f,FUN_006751d0);
  gluTessCallback(uVar2,0x18708,cube::Controller::vfunction6);
  gluTessProperty(uVar2,0x1872c,0x40f8723000000000);
  if (*(int *)(in_ECX + 0x40) != *(int *)(in_ECX + 0x44)) {
    *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(in_ECX + 0x34);
    gluTessBeginPolygon(uVar2,in_ECX);
    local_28 = 0;
    if (0 < (*(int *)(in_ECX + 0x44) - *(int *)(in_ECX + 0x40)) / 0xc) {
      local_24 = 0;
      do {
        gluTessBeginContour(uVar2);
        piVar3 = (int *)(local_24 + *(int *)(in_ECX + 0x40));
        if (0 < (int)(piVar3[1] - *piVar3 & 0xfffffffcU)) {
          iVar4 = 0;
          do {
            iVar1 = *(int *)(*piVar3 + iVar4 * 4);
            local_18 = (double)*(float *)(*(int *)(in_ECX + 4) + 4 + iVar1 * 8);
            local_20 = (double)*(float *)(*(int *)(in_ECX + 4) + iVar1 * 8);
            local_10 = 0;
            gluTessVertex(uVar2,&local_20,iVar1);
            piVar3 = (int *)(*(int *)(in_ECX + 0x40) + local_24);
            iVar4 = iVar4 + 1;
          } while (iVar4 < piVar3[1] - *piVar3 >> 2);
        }
        gluTessEndContour(uVar2);
        local_24 = local_24 + 0xc;
        local_28 = local_28 + 1;
      } while (local_28 < (*(int *)(in_ECX + 0x44) - *(int *)(in_ECX + 0x40)) / 0xc);
    }
    gluTessEndPolygon();
    gluDeleteTess();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0067eb10 @ 0067eb10  kind=gamemisc  attributed-by=none  size=155 */

undefined4 * FUN_0067eb10(undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *in_ECX;
  undefined1 local_8 [4];
  
  piVar2 = param_2;
  if ((param_2 == *(int **)*in_ECX) && (param_3 == (int *)*in_ECX)) {
    FUN_0067e480();
    *param_1 = *(undefined4 *)*in_ECX;
    return param_1;
  }
  while (piVar2 != param_3) {
    param_2 = piVar2;
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      param_2 = (int *)piVar2[2];
      if (*(char *)((int)param_2 + 0xd) == '\0') {
        cVar1 = *(char *)(*param_2 + 0xd);
        piVar3 = (int *)*param_2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0xd);
          param_2 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0xd);
        piVar4 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar3 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0xd);
          piVar4 = (int *)param_2[1];
          piVar3 = param_2;
        }
      }
    }
    FUN_0043ede0(local_8,piVar2);
    piVar2 = param_2;
  }
  *param_1 = piVar2;
  return param_1;
}


/* FUN_0067f980 @ 0067f980  kind=gamemisc  attributed-by=none  size=203 */

void FUN_0067f980(undefined4 param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float param_6)

{
  undefined4 *puVar1;
  float *pfVar2;
  int in_ECX;
  float fVar3;
  
  puVar1 = (undefined4 *)FUN_0067e340(&param_1);
  pfVar2 = (float *)*puVar1;
  if (pfVar2 == (float *)0x0) {
    pfVar2 = operator_new(0x24);
    puVar1 = (undefined4 *)FUN_0067e340(&param_1);
    *puVar1 = pfVar2;
  }
  if (*param_2 < *(float *)(in_ECX + 100)) {
    *(float *)(in_ECX + 100) = *param_2;
  }
  if (param_2[1] < *(float *)(in_ECX + 0x68)) {
    *(float *)(in_ECX + 0x68) = param_2[1];
  }
  fVar3 = *param_2 + *param_3;
  if (*(float *)(in_ECX + 0x6c) <= fVar3 && fVar3 != *(float *)(in_ECX + 0x6c)) {
    *(float *)(in_ECX + 0x6c) = fVar3;
  }
  fVar3 = param_3[1] + param_2[1];
  if (*(float *)(in_ECX + 0x70) <= fVar3 && fVar3 != *(float *)(in_ECX + 0x70)) {
    *(float *)(in_ECX + 0x70) = fVar3;
  }
  *pfVar2 = *param_2;
  pfVar2[1] = param_2[1];
  pfVar2[2] = *param_3;
  pfVar2[3] = param_3[1];
  pfVar2[4] = *param_4;
  pfVar2[5] = param_4[1];
  pfVar2[6] = *param_5;
  pfVar2[7] = param_5[1];
  pfVar2[8] = param_6;
  return;
}


/* FUN_0067fa60 @ 0067fa60  kind=gamemisc  attributed-by=none  size=525 */

undefined4 * FUN_0067fa60(undefined4 *param_1,int *param_2,uint *param_3,undefined4 param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  bool bVar4;
  uint uStack_34;
  undefined1 local_24 [8];
  uint local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f8ae0;
  local_10 = ExceptionList;
  uStack_34 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[1] == 0) {
    local_14 = (undefined1 *)&uStack_34;
    FUN_004ebb40(param_1,1,*in_ECX,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = (int *)*in_ECX;
  if (param_2 == (int *)*piVar1) {
    local_14 = (undefined1 *)&uStack_34;
    if (*param_3 < (uint)param_2[4]) {
      local_14 = (undefined1 *)&uStack_34;
      FUN_004ebb40(param_1,1,param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    local_14 = (undefined1 *)&uStack_34;
    if (*(uint *)(piVar1[2] + 0x10) < *param_3) {
      local_14 = (undefined1 *)&uStack_34;
      FUN_004ebb40(param_1,0,piVar1[2],param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    local_1c = *param_3;
    bVar4 = (uint)param_2[4] < local_1c;
    puVar2 = &uStack_34;
    if (local_1c < (uint)param_2[4]) {
      local_18 = param_2;
      FUN_0042c740();
      if ((uint)local_18[4] < local_1c) {
        if (*(char *)(local_18[2] + 0xd) != '\0') {
          FUN_004ebb40(param_1,0,local_18,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_004ebb40(param_1,1,param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
      bVar4 = (uint)param_2[4] < local_1c;
      puVar2 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar2;
    if (bVar4) {
      local_18 = param_2;
      FUN_005c3ea0();
      if ((local_18 == piVar1) || (local_1c < (uint)local_18[4])) {
        if (*(char *)(param_2[2] + 0xd) != '\0') {
          FUN_004ebb40(param_1,0,param_2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_004ebb40(param_1,1,local_18,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar3 = (undefined4 *)FUN_0067fc90(local_24,0,param_3,param_4);
  *param_1 = *puVar3;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_0067fc90 @ 0067fc90  kind=gamemisc  attributed-by=none  size=257 */

void FUN_0067fc90(undefined4 *param_1,char param_2,uint *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  bool bVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f8b00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)*in_ECX;
  bVar3 = true;
  local_8 = 0;
  piVar4 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    piVar1 = (int *)piVar1[1];
    do {
      piVar4 = piVar1;
      if (param_2 == '\0') {
        bVar3 = *param_3 < (uint)piVar4[4];
      }
      else {
        bVar3 = *param_3 <= (uint)piVar4[4];
      }
      if (bVar3 == false) {
        piVar1 = (int *)piVar4[2];
      }
      else {
        piVar1 = (int *)*piVar4;
      }
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    piVar1 = (int *)*in_ECX;
  }
  _param_2 = piVar4;
  if (bVar3 != false) {
    if (piVar4 == (int *)*piVar1) {
      puVar2 = (undefined4 *)&param_2;
      bVar3 = true;
      goto LAB_0067fd24;
    }
    FUN_0042c740();
  }
  piVar1 = _param_2;
  if (*param_3 <= (uint)_param_2[4]) {
    FUN_00681a20(param_4);
    *param_1 = piVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
  puVar2 = &param_3;
LAB_0067fd24:
  puVar2 = (undefined4 *)FUN_004ebb40(puVar2,bVar3,piVar4,param_3,param_4);
  *param_1 = *puVar2;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_0067fde0 @ 0067fde0  kind=gamemisc  attributed-by=none  size=731 */

void FUN_0067fde0(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *****pppppbVar9;
  char *pcVar10;
  int iVar11;
  bool bVar12;
  undefined4 local_38;
  int local_34;
  int local_30;
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8b28;
  local_10 = ExceptionList;
  uVar5 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar5;
  FUN_00688180();
  local_34 = 0;
  cVar4 = FUN_00688490();
  do {
    if (cVar4 != '\0') {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    uVar8 = local_1c;
    iVar11 = local_30;
    pppppbVar9 = local_2c;
    if (0xf < local_18) {
      pppppbVar9 = (byte *****)local_2c[0];
    }
    uVar6 = 0x13;
    if (local_1c < 0x13) {
      uVar6 = local_1c;
    }
    local_8 = 0;
    if (uVar6 == 0) {
LAB_0067fec0:
      if (local_1c < 0x13) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = (uint)(local_1c != 0x13);
      }
      bVar12 = uVar6 == 0;
    }
    else {
      pcVar10 = "ArrayAttribute.size";
      while (uVar1 = uVar6 - 4, 3 < uVar6) {
        if (*pppppbVar9 != *(byte *****)pcVar10) goto LAB_0067fe86;
        pppppbVar9 = pppppbVar9 + 1;
        pcVar10 = pcVar10 + 4;
        uVar6 = uVar1;
      }
      if (uVar1 == 0xfffffffc) {
LAB_0067feba:
        uVar6 = 0;
      }
      else {
LAB_0067fe86:
        bVar12 = *(byte *)pppppbVar9 < (byte)*pcVar10;
        if ((*(byte *)pppppbVar9 == *pcVar10) &&
           ((uVar1 == 0xfffffffd ||
            ((bVar12 = *(byte *)((int)pppppbVar9 + 1) < (byte)pcVar10[1],
             *(byte *)((int)pppppbVar9 + 1) == pcVar10[1] &&
             ((uVar1 == 0xfffffffe ||
              ((bVar12 = *(byte *)((int)pppppbVar9 + 2) < (byte)pcVar10[2],
               *(byte *)((int)pppppbVar9 + 2) == pcVar10[2] &&
               ((uVar1 == 0xffffffff ||
                (bVar12 = *(byte *)((int)pppppbVar9 + 3) < (byte)pcVar10[3],
                *(byte *)((int)pppppbVar9 + 3) == pcVar10[3])))))))))))) goto LAB_0067feba;
        uVar6 = -(uint)bVar12 | 1;
      }
      bVar12 = false;
      if (uVar6 == 0) goto LAB_0067fec0;
    }
    if (bVar12) {
      FUN_00688180();
      std::basic_istream<char,std::char_traits<char>_>::read
                (*(basic_istream<char,std::char_traits<char>_> **)(iVar11 + 8),(char *)&local_38,
                 (ulonglong)uVar5 << 0x20);
      uVar2 = local_38;
      iVar11 = 0;
      if (0 < (int)(param_1[0x14] - param_1[0x13] & 0xfffffffcU)) {
        do {
          FUN_0040d9d0(uVar2);
          iVar11 = iVar11 + 1;
        } while (iVar11 < param_1[0x14] - param_1[0x13] >> 2);
      }
      FUN_00688490();
    }
    else {
      pppppbVar9 = local_2c;
      if (0xf < local_18) {
        pppppbVar9 = (byte *****)local_2c[0];
      }
      uVar6 = 0x14;
      if (local_1c < 0x14) {
        uVar6 = local_1c;
      }
      if (uVar6 == 0) {
LAB_0067ffb0:
        if (local_1c < 0x14) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(local_1c != 0x14);
        }
        bVar12 = uVar6 == 0;
      }
      else {
        pcVar10 = "ArrayAttribute.frame";
        while (uVar1 = uVar6 - 4, 3 < uVar6) {
          if (*pppppbVar9 != *(byte *****)pcVar10) goto LAB_0067ff76;
          pppppbVar9 = pppppbVar9 + 1;
          pcVar10 = pcVar10 + 4;
          uVar6 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_0067ffaa:
          uVar6 = 0;
        }
        else {
LAB_0067ff76:
          bVar12 = *(byte *)pppppbVar9 < (byte)*pcVar10;
          if ((*(byte *)pppppbVar9 == *pcVar10) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar12 = *(byte *)((int)pppppbVar9 + 1) < (byte)pcVar10[1],
               *(byte *)((int)pppppbVar9 + 1) == pcVar10[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar12 = *(byte *)((int)pppppbVar9 + 2) < (byte)pcVar10[2],
                 *(byte *)((int)pppppbVar9 + 2) == pcVar10[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar12 = *(byte *)((int)pppppbVar9 + 3) < (byte)pcVar10[3],
                  *(byte *)((int)pppppbVar9 + 3) == pcVar10[3])))))))))))) goto LAB_0067ffaa;
          uVar6 = -(uint)bVar12 | 1;
        }
        bVar12 = false;
        if (uVar6 == 0) goto LAB_0067ffb0;
      }
      if (bVar12) {
        FUN_00688180();
        iVar7 = (**(code **)(*param_1 + 4))();
        iVar3 = local_34;
        if (local_34 == iVar7) {
          (**(code **)(*param_1 + 8))();
        }
        std::basic_istream<char,std::char_traits<char>_>::read
                  (*(basic_istream<char,std::char_traits<char>_> **)(iVar11 + 8),
                   (char *)**(undefined4 **)(param_1[0x13] + iVar3 * 4),(ulonglong)uVar5 << 0x20);
        local_34 = iVar3 + 1;
        FUN_00688490();
      }
      else {
        pppppbVar9 = local_2c;
        if (0xf < local_18) {
          pppppbVar9 = (byte *****)local_2c[0];
        }
        uVar6 = 0x12;
        if (local_1c < 0x12) {
          uVar6 = local_1c;
        }
        iVar11 = FUN_0040c590(pppppbVar9,"Attribute.sequence",uVar6);
        bVar12 = false;
        if (iVar11 == 0) {
          if (uVar8 < 0x12) {
            uVar8 = 0xffffffff;
          }
          else {
            uVar8 = (uint)(uVar8 != 0x12);
          }
          bVar12 = uVar8 == 0;
        }
        if (bVar12) {
          FUN_00682a80(param_1);
        }
        else {
          FUN_006886f0();
        }
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ****)((uint)local_2c[0] & 0xffffff00);
    cVar4 = FUN_00688490();
  } while( true );
}


/* FUN_006800d0 @ 006800d0  kind=gamemisc  attributed-by=none  size=731 */

void FUN_006800d0(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *****pppppbVar9;
  char *pcVar10;
  int iVar11;
  bool bVar12;
  undefined4 local_38;
  int local_34;
  int local_30;
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8b28;
  local_10 = ExceptionList;
  uVar5 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar5;
  FUN_00688180();
  local_34 = 0;
  cVar4 = FUN_00688490();
  do {
    if (cVar4 != '\0') {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    uVar8 = local_1c;
    iVar11 = local_30;
    pppppbVar9 = local_2c;
    if (0xf < local_18) {
      pppppbVar9 = (byte *****)local_2c[0];
    }
    uVar6 = 0x13;
    if (local_1c < 0x13) {
      uVar6 = local_1c;
    }
    local_8 = 0;
    if (uVar6 == 0) {
LAB_006801b0:
      if (local_1c < 0x13) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = (uint)(local_1c != 0x13);
      }
      bVar12 = uVar6 == 0;
    }
    else {
      pcVar10 = "ArrayAttribute.size";
      while (uVar1 = uVar6 - 4, 3 < uVar6) {
        if (*pppppbVar9 != *(byte *****)pcVar10) goto LAB_00680176;
        pppppbVar9 = pppppbVar9 + 1;
        pcVar10 = pcVar10 + 4;
        uVar6 = uVar1;
      }
      if (uVar1 == 0xfffffffc) {
LAB_006801aa:
        uVar6 = 0;
      }
      else {
LAB_00680176:
        bVar12 = *(byte *)pppppbVar9 < (byte)*pcVar10;
        if ((*(byte *)pppppbVar9 == *pcVar10) &&
           ((uVar1 == 0xfffffffd ||
            ((bVar12 = *(byte *)((int)pppppbVar9 + 1) < (byte)pcVar10[1],
             *(byte *)((int)pppppbVar9 + 1) == pcVar10[1] &&
             ((uVar1 == 0xfffffffe ||
              ((bVar12 = *(byte *)((int)pppppbVar9 + 2) < (byte)pcVar10[2],
               *(byte *)((int)pppppbVar9 + 2) == pcVar10[2] &&
               ((uVar1 == 0xffffffff ||
                (bVar12 = *(byte *)((int)pppppbVar9 + 3) < (byte)pcVar10[3],
                *(byte *)((int)pppppbVar9 + 3) == pcVar10[3])))))))))))) goto LAB_006801aa;
        uVar6 = -(uint)bVar12 | 1;
      }
      bVar12 = false;
      if (uVar6 == 0) goto LAB_006801b0;
    }
    if (bVar12) {
      FUN_00688180();
      std::basic_istream<char,std::char_traits<char>_>::read
                (*(basic_istream<char,std::char_traits<char>_> **)(iVar11 + 8),(char *)&local_38,
                 (ulonglong)uVar5 << 0x20);
      uVar2 = local_38;
      iVar11 = 0;
      if (0 < (int)(param_1[0x14] - param_1[0x13] & 0xfffffffcU)) {
        do {
          FUN_0042bea0(uVar2);
          iVar11 = iVar11 + 1;
        } while (iVar11 < param_1[0x14] - param_1[0x13] >> 2);
      }
      FUN_00688490();
    }
    else {
      pppppbVar9 = local_2c;
      if (0xf < local_18) {
        pppppbVar9 = (byte *****)local_2c[0];
      }
      uVar6 = 0x14;
      if (local_1c < 0x14) {
        uVar6 = local_1c;
      }
      if (uVar6 == 0) {
LAB_006802a0:
        if (local_1c < 0x14) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(local_1c != 0x14);
        }
        bVar12 = uVar6 == 0;
      }
      else {
        pcVar10 = "ArrayAttribute.frame";
        while (uVar1 = uVar6 - 4, 3 < uVar6) {
          if (*pppppbVar9 != *(byte *****)pcVar10) goto LAB_00680266;
          pppppbVar9 = pppppbVar9 + 1;
          pcVar10 = pcVar10 + 4;
          uVar6 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_0068029a:
          uVar6 = 0;
        }
        else {
LAB_00680266:
          bVar12 = *(byte *)pppppbVar9 < (byte)*pcVar10;
          if ((*(byte *)pppppbVar9 == *pcVar10) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar12 = *(byte *)((int)pppppbVar9 + 1) < (byte)pcVar10[1],
               *(byte *)((int)pppppbVar9 + 1) == pcVar10[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar12 = *(byte *)((int)pppppbVar9 + 2) < (byte)pcVar10[2],
                 *(byte *)((int)pppppbVar9 + 2) == pcVar10[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar12 = *(byte *)((int)pppppbVar9 + 3) < (byte)pcVar10[3],
                  *(byte *)((int)pppppbVar9 + 3) == pcVar10[3])))))))))))) goto LAB_0068029a;
          uVar6 = -(uint)bVar12 | 1;
        }
        bVar12 = false;
        if (uVar6 == 0) goto LAB_006802a0;
      }
      if (bVar12) {
        FUN_00688180();
        iVar7 = (**(code **)(*param_1 + 4))();
        iVar3 = local_34;
        if (local_34 == iVar7) {
          (**(code **)(*param_1 + 8))();
        }
        std::basic_istream<char,std::char_traits<char>_>::read
                  (*(basic_istream<char,std::char_traits<char>_> **)(iVar11 + 8),
                   (char *)**(undefined4 **)(param_1[0x13] + iVar3 * 4),(ulonglong)uVar5 << 0x20);
        local_34 = iVar3 + 1;
        FUN_00688490();
      }
      else {
        pppppbVar9 = local_2c;
        if (0xf < local_18) {
          pppppbVar9 = (byte *****)local_2c[0];
        }
        uVar6 = 0x12;
        if (local_1c < 0x12) {
          uVar6 = local_1c;
        }
        iVar11 = FUN_0040c590(pppppbVar9,"Attribute.sequence",uVar6);
        bVar12 = false;
        if (iVar11 == 0) {
          if (uVar8 < 0x12) {
            uVar8 = 0xffffffff;
          }
          else {
            uVar8 = (uint)(uVar8 != 0x12);
          }
          bVar12 = uVar8 == 0;
        }
        if (bVar12) {
          FUN_00682a80(param_1);
        }
        else {
          FUN_006886f0();
        }
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ****)((uint)local_2c[0] & 0xffffff00);
    cVar4 = FUN_00688490();
  } while( true );
}


/* FUN_006803c0 @ 006803c0  kind=gamemisc  attributed-by=none  size=731 */

void FUN_006803c0(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *****pppppbVar9;
  char *pcVar10;
  int iVar11;
  bool bVar12;
  undefined4 local_38;
  int local_34;
  int local_30;
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8b28;
  local_10 = ExceptionList;
  uVar5 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar5;
  FUN_00688180();
  local_34 = 0;
  cVar4 = FUN_00688490();
  do {
    if (cVar4 != '\0') {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    uVar8 = local_1c;
    iVar11 = local_30;
    pppppbVar9 = local_2c;
    if (0xf < local_18) {
      pppppbVar9 = (byte *****)local_2c[0];
    }
    uVar6 = 0x13;
    if (local_1c < 0x13) {
      uVar6 = local_1c;
    }
    local_8 = 0;
    if (uVar6 == 0) {
LAB_006804a0:
      if (local_1c < 0x13) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = (uint)(local_1c != 0x13);
      }
      bVar12 = uVar6 == 0;
    }
    else {
      pcVar10 = "ArrayAttribute.size";
      while (uVar1 = uVar6 - 4, 3 < uVar6) {
        if (*pppppbVar9 != *(byte *****)pcVar10) goto LAB_00680466;
        pppppbVar9 = pppppbVar9 + 1;
        pcVar10 = pcVar10 + 4;
        uVar6 = uVar1;
      }
      if (uVar1 == 0xfffffffc) {
LAB_0068049a:
        uVar6 = 0;
      }
      else {
LAB_00680466:
        bVar12 = *(byte *)pppppbVar9 < (byte)*pcVar10;
        if ((*(byte *)pppppbVar9 == *pcVar10) &&
           ((uVar1 == 0xfffffffd ||
            ((bVar12 = *(byte *)((int)pppppbVar9 + 1) < (byte)pcVar10[1],
             *(byte *)((int)pppppbVar9 + 1) == pcVar10[1] &&
             ((uVar1 == 0xfffffffe ||
              ((bVar12 = *(byte *)((int)pppppbVar9 + 2) < (byte)pcVar10[2],
               *(byte *)((int)pppppbVar9 + 2) == pcVar10[2] &&
               ((uVar1 == 0xffffffff ||
                (bVar12 = *(byte *)((int)pppppbVar9 + 3) < (byte)pcVar10[3],
                *(byte *)((int)pppppbVar9 + 3) == pcVar10[3])))))))))))) goto LAB_0068049a;
        uVar6 = -(uint)bVar12 | 1;
      }
      bVar12 = false;
      if (uVar6 == 0) goto LAB_006804a0;
    }
    if (bVar12) {
      FUN_00688180();
      std::basic_istream<char,std::char_traits<char>_>::read
                (*(basic_istream<char,std::char_traits<char>_> **)(iVar11 + 8),(char *)&local_38,
                 (ulonglong)uVar5 << 0x20);
      uVar2 = local_38;
      iVar11 = 0;
      if (0 < (int)(param_1[0x14] - param_1[0x13] & 0xfffffffcU)) {
        do {
          FUN_0042bf80(uVar2);
          iVar11 = iVar11 + 1;
        } while (iVar11 < param_1[0x14] - param_1[0x13] >> 2);
      }
      FUN_00688490();
    }
    else {
      pppppbVar9 = local_2c;
      if (0xf < local_18) {
        pppppbVar9 = (byte *****)local_2c[0];
      }
      uVar6 = 0x14;
      if (local_1c < 0x14) {
        uVar6 = local_1c;
      }
      if (uVar6 == 0) {
LAB_00680590:
        if (local_1c < 0x14) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(local_1c != 0x14);
        }
        bVar12 = uVar6 == 0;
      }
      else {
        pcVar10 = "ArrayAttribute.frame";
        while (uVar1 = uVar6 - 4, 3 < uVar6) {
          if (*pppppbVar9 != *(byte *****)pcVar10) goto LAB_00680556;
          pppppbVar9 = pppppbVar9 + 1;
          pcVar10 = pcVar10 + 4;
          uVar6 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_0068058a:
          uVar6 = 0;
        }
        else {
LAB_00680556:
          bVar12 = *(byte *)pppppbVar9 < (byte)*pcVar10;
          if ((*(byte *)pppppbVar9 == *pcVar10) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar12 = *(byte *)((int)pppppbVar9 + 1) < (byte)pcVar10[1],
               *(byte *)((int)pppppbVar9 + 1) == pcVar10[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar12 = *(byte *)((int)pppppbVar9 + 2) < (byte)pcVar10[2],
                 *(byte *)((int)pppppbVar9 + 2) == pcVar10[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar12 = *(byte *)((int)pppppbVar9 + 3) < (byte)pcVar10[3],
                  *(byte *)((int)pppppbVar9 + 3) == pcVar10[3])))))))))))) goto LAB_0068058a;
          uVar6 = -(uint)bVar12 | 1;
        }
        bVar12 = false;
        if (uVar6 == 0) goto LAB_00680590;
      }
      if (bVar12) {
        FUN_00688180();
        iVar7 = (**(code **)(*param_1 + 4))();
        iVar3 = local_34;
        if (local_34 == iVar7) {
          (**(code **)(*param_1 + 8))();
        }
        std::basic_istream<char,std::char_traits<char>_>::read
                  (*(basic_istream<char,std::char_traits<char>_> **)(iVar11 + 8),
                   (char *)**(undefined4 **)(param_1[0x13] + iVar3 * 4),(ulonglong)uVar5 << 0x20);
        local_34 = iVar3 + 1;
        FUN_00688490();
      }
      else {
        pppppbVar9 = local_2c;
        if (0xf < local_18) {
          pppppbVar9 = (byte *****)local_2c[0];
        }
        uVar6 = 0x12;
        if (local_1c < 0x12) {
          uVar6 = local_1c;
        }
        iVar11 = FUN_0040c590(pppppbVar9,"Attribute.sequence",uVar6);
        bVar12 = false;
        if (iVar11 == 0) {
          if (uVar8 < 0x12) {
            uVar8 = 0xffffffff;
          }
          else {
            uVar8 = (uint)(uVar8 != 0x12);
          }
          bVar12 = uVar8 == 0;
        }
        if (bVar12) {
          FUN_00682a80(param_1);
        }
        else {
          FUN_006886f0();
        }
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ****)((uint)local_2c[0] & 0xffffff00);
    cVar4 = FUN_00688490();
  } while( true );
}


/* FUN_006806b0 @ 006806b0  kind=gamemisc  attributed-by=none  size=561 */

void FUN_006806b0(int *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  byte *****pppppbVar6;
  char *pcVar7;
  bool bVar8;
  int local_34;
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8b58;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  FUN_00688180();
  local_34 = 0;
  cVar2 = FUN_00688490();
  do {
    if (cVar2 != '\0') {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0xf;
    if (local_1c < 0xf) {
      uVar4 = local_1c;
    }
    local_8 = 0;
    if (uVar4 == 0) {
LAB_00680790:
      if (local_1c < 0xf) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(local_1c != 0xf);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "Attribute.frame";
      while (uVar1 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_00680756;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar1;
      }
      if (uVar1 == 0xfffffffc) {
LAB_0068078a:
        uVar4 = 0;
      }
      else {
LAB_00680756:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar1 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar1 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar1 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_0068078a;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_00680790;
    }
    if (bVar8) {
      FUN_00688180();
      iVar5 = (**(code **)(*param_1 + 4))();
      if (local_34 == iVar5) {
        (**(code **)(*param_1 + 8))();
      }
      std::basic_istream<char,std::char_traits<char>_>::read
                (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                 (char *)(param_1[0x13] + local_34 * 4),(ulonglong)uVar3 << 0x20);
      local_34 = local_34 + 1;
      FUN_00688490();
    }
    else {
      pppppbVar6 = local_2c;
      if (0xf < local_18) {
        pppppbVar6 = (byte *****)local_2c[0];
      }
      uVar4 = 0x12;
      if (local_1c < 0x12) {
        uVar4 = local_1c;
      }
      if (uVar4 == 0) {
LAB_00680861:
        if (local_1c < 0x12) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(local_1c != 0x12);
        }
        bVar8 = uVar4 == 0;
      }
      else {
        pcVar7 = "Attribute.sequence";
        while (uVar1 = uVar4 - 4, 3 < uVar4) {
          if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_00680827;
          pppppbVar6 = pppppbVar6 + 1;
          pcVar7 = pcVar7 + 4;
          uVar4 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_0068085b:
          uVar4 = 0;
        }
        else {
LAB_00680827:
          bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
          if ((*(byte *)pppppbVar6 == *pcVar7) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
               *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
                 *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                  *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_0068085b;
          uVar4 = -(uint)bVar8 | 1;
        }
        bVar8 = false;
        if (uVar4 == 0) goto LAB_00680861;
      }
      if (bVar8) {
        FUN_00682a80(param_1);
      }
      else {
        FUN_006886f0();
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ****)((uint)local_2c[0] & 0xffffff00);
    cVar2 = FUN_00688490();
  } while( true );
}


/* FUN_006808f0 @ 006808f0  kind=gamemisc  attributed-by=none  size=576 */

void FUN_006808f0(int *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  byte ****ppppbVar6;
  char *pcVar7;
  bool bVar8;
  int local_38;
  int local_30;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8b28;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  FUN_00688180();
  local_38 = 0;
  cVar2 = FUN_00688490();
  if (cVar2 == '\0') {
    local_30 = 0;
    do {
      FUN_00688220(local_2c,1);
      ppppbVar6 = local_2c;
      if (0xf < local_18) {
        ppppbVar6 = (byte ****)local_2c[0];
      }
      uVar4 = 0xf;
      if (local_1c < 0xf) {
        uVar4 = local_1c;
      }
      local_8 = 0;
      if (uVar4 == 0) {
LAB_006809d0:
        if (local_1c < 0xf) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(local_1c != 0xf);
        }
        bVar8 = uVar4 == 0;
      }
      else {
        pcVar7 = "Attribute.frame";
        while (uVar1 = uVar4 - 4, 3 < uVar4) {
          if (*ppppbVar6 != *(byte ****)pcVar7) goto LAB_00680996;
          ppppbVar6 = ppppbVar6 + 1;
          pcVar7 = pcVar7 + 4;
          uVar4 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_006809ca:
          uVar4 = 0;
        }
        else {
LAB_00680996:
          bVar8 = *(byte *)ppppbVar6 < (byte)*pcVar7;
          if ((*(byte *)ppppbVar6 == *pcVar7) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar8 = *(byte *)((int)ppppbVar6 + 1) < (byte)pcVar7[1],
               *(byte *)((int)ppppbVar6 + 1) == pcVar7[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar8 = *(byte *)((int)ppppbVar6 + 2) < (byte)pcVar7[2],
                 *(byte *)((int)ppppbVar6 + 2) == pcVar7[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar8 = *(byte *)((int)ppppbVar6 + 3) < (byte)pcVar7[3],
                  *(byte *)((int)ppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_006809ca;
          uVar4 = -(uint)bVar8 | 1;
        }
        bVar8 = false;
        if (uVar4 == 0) goto LAB_006809d0;
      }
      if (bVar8) {
        FUN_00688180();
        iVar5 = (**(code **)(*param_1 + 4))();
        if (local_38 == iVar5) {
          (**(code **)(*param_1 + 8))();
        }
        std::basic_istream<char,std::char_traits<char>_>::read
                  (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                   (char *)(param_1[0x13] + local_30),(ulonglong)uVar3 << 0x20);
        local_38 = local_38 + 1;
        local_30 = local_30 + 0x40;
        FUN_00688490();
      }
      else {
        ppppbVar6 = local_2c;
        if (0xf < local_18) {
          ppppbVar6 = (byte ****)local_2c[0];
        }
        uVar4 = 0x12;
        if (local_1c < 0x12) {
          uVar4 = local_1c;
        }
        if (uVar4 == 0) {
LAB_00680ab0:
          if (local_1c < 0x12) {
            uVar4 = 0xffffffff;
          }
          else {
            uVar4 = (uint)(local_1c != 0x12);
          }
          bVar8 = uVar4 == 0;
        }
        else {
          pcVar7 = "Attribute.sequence";
          while (uVar1 = uVar4 - 4, 3 < uVar4) {
            if (*ppppbVar6 != *(byte ****)pcVar7) goto LAB_00680a76;
            ppppbVar6 = ppppbVar6 + 1;
            pcVar7 = pcVar7 + 4;
            uVar4 = uVar1;
          }
          if (uVar1 == 0xfffffffc) {
LAB_00680aaa:
            uVar4 = 0;
          }
          else {
LAB_00680a76:
            bVar8 = *(byte *)ppppbVar6 < (byte)*pcVar7;
            if ((*(byte *)ppppbVar6 == *pcVar7) &&
               ((uVar1 == 0xfffffffd ||
                ((bVar8 = *(byte *)((int)ppppbVar6 + 1) < (byte)pcVar7[1],
                 *(byte *)((int)ppppbVar6 + 1) == pcVar7[1] &&
                 ((uVar1 == 0xfffffffe ||
                  ((bVar8 = *(byte *)((int)ppppbVar6 + 2) < (byte)pcVar7[2],
                   *(byte *)((int)ppppbVar6 + 2) == pcVar7[2] &&
                   ((uVar1 == 0xffffffff ||
                    (bVar8 = *(byte *)((int)ppppbVar6 + 3) < (byte)pcVar7[3],
                    *(byte *)((int)ppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_00680aaa;
            uVar4 = -(uint)bVar8 | 1;
          }
          bVar8 = false;
          if (uVar4 == 0) goto LAB_00680ab0;
        }
        if (bVar8) {
          FUN_00682a80(param_1);
        }
        else {
          FUN_006886f0();
        }
      }
      local_8 = 0xffffffff;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
      cVar2 = FUN_00688490();
    } while (cVar2 == '\0');
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00680b40 @ 00680b40  kind=gamemisc  attributed-by=none  size=561 */

void FUN_00680b40(int *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  byte *****pppppbVar6;
  char *pcVar7;
  bool bVar8;
  int local_34;
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8b58;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  FUN_00688180();
  local_34 = 0;
  cVar2 = FUN_00688490();
  do {
    if (cVar2 != '\0') {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0xf;
    if (local_1c < 0xf) {
      uVar4 = local_1c;
    }
    local_8 = 0;
    if (uVar4 == 0) {
LAB_00680c20:
      if (local_1c < 0xf) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(local_1c != 0xf);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "Attribute.frame";
      while (uVar1 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_00680be6;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar1;
      }
      if (uVar1 == 0xfffffffc) {
LAB_00680c1a:
        uVar4 = 0;
      }
      else {
LAB_00680be6:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar1 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar1 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar1 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_00680c1a;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_00680c20;
    }
    if (bVar8) {
      FUN_00688180();
      iVar5 = (**(code **)(*param_1 + 4))();
      if (local_34 == iVar5) {
        (**(code **)(*param_1 + 8))();
      }
      std::basic_istream<char,std::char_traits<char>_>::read
                (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                 (char *)(param_1[0x13] + local_34 * 8),(ulonglong)uVar3 << 0x20);
      local_34 = local_34 + 1;
      FUN_00688490();
    }
    else {
      pppppbVar6 = local_2c;
      if (0xf < local_18) {
        pppppbVar6 = (byte *****)local_2c[0];
      }
      uVar4 = 0x12;
      if (local_1c < 0x12) {
        uVar4 = local_1c;
      }
      if (uVar4 == 0) {
LAB_00680cf1:
        if (local_1c < 0x12) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(local_1c != 0x12);
        }
        bVar8 = uVar4 == 0;
      }
      else {
        pcVar7 = "Attribute.sequence";
        while (uVar1 = uVar4 - 4, 3 < uVar4) {
          if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_00680cb7;
          pppppbVar6 = pppppbVar6 + 1;
          pcVar7 = pcVar7 + 4;
          uVar4 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_00680ceb:
          uVar4 = 0;
        }
        else {
LAB_00680cb7:
          bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
          if ((*(byte *)pppppbVar6 == *pcVar7) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
               *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
                 *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                  *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_00680ceb;
          uVar4 = -(uint)bVar8 | 1;
        }
        bVar8 = false;
        if (uVar4 == 0) goto LAB_00680cf1;
      }
      if (bVar8) {
        FUN_00682a80(param_1);
      }
      else {
        FUN_006886f0();
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ****)((uint)local_2c[0] & 0xffffff00);
    cVar2 = FUN_00688490();
  } while( true );
}


/* FUN_00680d80 @ 00680d80  kind=gamemisc  attributed-by=none  size=576 */

void FUN_00680d80(int *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  byte ****ppppbVar6;
  char *pcVar7;
  bool bVar8;
  int local_38;
  int local_30;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8b28;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  FUN_00688180();
  local_38 = 0;
  cVar2 = FUN_00688490();
  if (cVar2 == '\0') {
    local_30 = 0;
    do {
      FUN_00688220(local_2c,1);
      ppppbVar6 = local_2c;
      if (0xf < local_18) {
        ppppbVar6 = (byte ****)local_2c[0];
      }
      uVar4 = 0xf;
      if (local_1c < 0xf) {
        uVar4 = local_1c;
      }
      local_8 = 0;
      if (uVar4 == 0) {
LAB_00680e60:
        if (local_1c < 0xf) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(local_1c != 0xf);
        }
        bVar8 = uVar4 == 0;
      }
      else {
        pcVar7 = "Attribute.frame";
        while (uVar1 = uVar4 - 4, 3 < uVar4) {
          if (*ppppbVar6 != *(byte ****)pcVar7) goto LAB_00680e26;
          ppppbVar6 = ppppbVar6 + 1;
          pcVar7 = pcVar7 + 4;
          uVar4 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_00680e5a:
          uVar4 = 0;
        }
        else {
LAB_00680e26:
          bVar8 = *(byte *)ppppbVar6 < (byte)*pcVar7;
          if ((*(byte *)ppppbVar6 == *pcVar7) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar8 = *(byte *)((int)ppppbVar6 + 1) < (byte)pcVar7[1],
               *(byte *)((int)ppppbVar6 + 1) == pcVar7[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar8 = *(byte *)((int)ppppbVar6 + 2) < (byte)pcVar7[2],
                 *(byte *)((int)ppppbVar6 + 2) == pcVar7[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar8 = *(byte *)((int)ppppbVar6 + 3) < (byte)pcVar7[3],
                  *(byte *)((int)ppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_00680e5a;
          uVar4 = -(uint)bVar8 | 1;
        }
        bVar8 = false;
        if (uVar4 == 0) goto LAB_00680e60;
      }
      if (bVar8) {
        FUN_00688180();
        iVar5 = (**(code **)(*param_1 + 4))();
        if (local_38 == iVar5) {
          (**(code **)(*param_1 + 8))();
        }
        std::basic_istream<char,std::char_traits<char>_>::read
                  (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                   (char *)(param_1[0x13] + local_30),(ulonglong)uVar3 << 0x20);
        local_38 = local_38 + 1;
        local_30 = local_30 + 0xc;
        FUN_00688490();
      }
      else {
        ppppbVar6 = local_2c;
        if (0xf < local_18) {
          ppppbVar6 = (byte ****)local_2c[0];
        }
        uVar4 = 0x12;
        if (local_1c < 0x12) {
          uVar4 = local_1c;
        }
        if (uVar4 == 0) {
LAB_00680f40:
          if (local_1c < 0x12) {
            uVar4 = 0xffffffff;
          }
          else {
            uVar4 = (uint)(local_1c != 0x12);
          }
          bVar8 = uVar4 == 0;
        }
        else {
          pcVar7 = "Attribute.sequence";
          while (uVar1 = uVar4 - 4, 3 < uVar4) {
            if (*ppppbVar6 != *(byte ****)pcVar7) goto LAB_00680f06;
            ppppbVar6 = ppppbVar6 + 1;
            pcVar7 = pcVar7 + 4;
            uVar4 = uVar1;
          }
          if (uVar1 == 0xfffffffc) {
LAB_00680f3a:
            uVar4 = 0;
          }
          else {
LAB_00680f06:
            bVar8 = *(byte *)ppppbVar6 < (byte)*pcVar7;
            if ((*(byte *)ppppbVar6 == *pcVar7) &&
               ((uVar1 == 0xfffffffd ||
                ((bVar8 = *(byte *)((int)ppppbVar6 + 1) < (byte)pcVar7[1],
                 *(byte *)((int)ppppbVar6 + 1) == pcVar7[1] &&
                 ((uVar1 == 0xfffffffe ||
                  ((bVar8 = *(byte *)((int)ppppbVar6 + 2) < (byte)pcVar7[2],
                   *(byte *)((int)ppppbVar6 + 2) == pcVar7[2] &&
                   ((uVar1 == 0xffffffff ||
                    (bVar8 = *(byte *)((int)ppppbVar6 + 3) < (byte)pcVar7[3],
                    *(byte *)((int)ppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_00680f3a;
            uVar4 = -(uint)bVar8 | 1;
          }
          bVar8 = false;
          if (uVar4 == 0) goto LAB_00680f40;
        }
        if (bVar8) {
          FUN_00682a80(param_1);
        }
        else {
          FUN_006886f0();
        }
      }
      local_8 = 0xffffffff;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
      cVar2 = FUN_00688490();
    } while (cVar2 == '\0');
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00680fd0 @ 00680fd0  kind=gamemisc  attributed-by=none  size=576 */

void FUN_00680fd0(int *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  byte ****ppppbVar6;
  char *pcVar7;
  bool bVar8;
  int local_38;
  int local_30;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8b28;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  FUN_00688180();
  local_38 = 0;
  cVar2 = FUN_00688490();
  if (cVar2 == '\0') {
    local_30 = 0;
    do {
      FUN_00688220(local_2c,1);
      ppppbVar6 = local_2c;
      if (0xf < local_18) {
        ppppbVar6 = (byte ****)local_2c[0];
      }
      uVar4 = 0xf;
      if (local_1c < 0xf) {
        uVar4 = local_1c;
      }
      local_8 = 0;
      if (uVar4 == 0) {
LAB_006810b0:
        if (local_1c < 0xf) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(local_1c != 0xf);
        }
        bVar8 = uVar4 == 0;
      }
      else {
        pcVar7 = "Attribute.frame";
        while (uVar1 = uVar4 - 4, 3 < uVar4) {
          if (*ppppbVar6 != *(byte ****)pcVar7) goto LAB_00681076;
          ppppbVar6 = ppppbVar6 + 1;
          pcVar7 = pcVar7 + 4;
          uVar4 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_006810aa:
          uVar4 = 0;
        }
        else {
LAB_00681076:
          bVar8 = *(byte *)ppppbVar6 < (byte)*pcVar7;
          if ((*(byte *)ppppbVar6 == *pcVar7) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar8 = *(byte *)((int)ppppbVar6 + 1) < (byte)pcVar7[1],
               *(byte *)((int)ppppbVar6 + 1) == pcVar7[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar8 = *(byte *)((int)ppppbVar6 + 2) < (byte)pcVar7[2],
                 *(byte *)((int)ppppbVar6 + 2) == pcVar7[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar8 = *(byte *)((int)ppppbVar6 + 3) < (byte)pcVar7[3],
                  *(byte *)((int)ppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_006810aa;
          uVar4 = -(uint)bVar8 | 1;
        }
        bVar8 = false;
        if (uVar4 == 0) goto LAB_006810b0;
      }
      if (bVar8) {
        FUN_00688180();
        iVar5 = (**(code **)(*param_1 + 4))();
        if (local_38 == iVar5) {
          (**(code **)(*param_1 + 8))();
        }
        std::basic_istream<char,std::char_traits<char>_>::read
                  (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                   (char *)(param_1[0x13] + local_30),(ulonglong)uVar3 << 0x20);
        local_38 = local_38 + 1;
        local_30 = local_30 + 0x10;
        FUN_00688490();
      }
      else {
        ppppbVar6 = local_2c;
        if (0xf < local_18) {
          ppppbVar6 = (byte ****)local_2c[0];
        }
        uVar4 = 0x12;
        if (local_1c < 0x12) {
          uVar4 = local_1c;
        }
        if (uVar4 == 0) {
LAB_00681190:
          if (local_1c < 0x12) {
            uVar4 = 0xffffffff;
          }
          else {
            uVar4 = (uint)(local_1c != 0x12);
          }
          bVar8 = uVar4 == 0;
        }
        else {
          pcVar7 = "Attribute.sequence";
          while (uVar1 = uVar4 - 4, 3 < uVar4) {
            if (*ppppbVar6 != *(byte ****)pcVar7) goto LAB_00681156;
            ppppbVar6 = ppppbVar6 + 1;
            pcVar7 = pcVar7 + 4;
            uVar4 = uVar1;
          }
          if (uVar1 == 0xfffffffc) {
LAB_0068118a:
            uVar4 = 0;
          }
          else {
LAB_00681156:
            bVar8 = *(byte *)ppppbVar6 < (byte)*pcVar7;
            if ((*(byte *)ppppbVar6 == *pcVar7) &&
               ((uVar1 == 0xfffffffd ||
                ((bVar8 = *(byte *)((int)ppppbVar6 + 1) < (byte)pcVar7[1],
                 *(byte *)((int)ppppbVar6 + 1) == pcVar7[1] &&
                 ((uVar1 == 0xfffffffe ||
                  ((bVar8 = *(byte *)((int)ppppbVar6 + 2) < (byte)pcVar7[2],
                   *(byte *)((int)ppppbVar6 + 2) == pcVar7[2] &&
                   ((uVar1 == 0xffffffff ||
                    (bVar8 = *(byte *)((int)ppppbVar6 + 3) < (byte)pcVar7[3],
                    *(byte *)((int)ppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_0068118a;
            uVar4 = -(uint)bVar8 | 1;
          }
          bVar8 = false;
          if (uVar4 == 0) goto LAB_00681190;
        }
        if (bVar8) {
          FUN_00682a80(param_1);
        }
        else {
          FUN_006886f0();
        }
      }
      local_8 = 0xffffffff;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
      cVar2 = FUN_00688490();
    } while (cVar2 == '\0');
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00681af0 @ 00681af0  kind=gamemisc  attributed-by=none  size=115 */

void FUN_00681af0(uint param_1)

{
  int *in_ECX;
  uint uVar1;
  
  if (param_1 <= (uint)(in_ECX[2] - in_ECX[1] >> 3)) {
    return;
  }
  if (0x1fffffffU - (in_ECX[1] - *in_ECX >> 3) < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = in_ECX[2] - *in_ECX >> 3;
  if (0x1fffffff - (uVar1 >> 1) < uVar1) {
    FUN_00681a70();
    return;
  }
  FUN_00681a70();
  return;
}


/* FUN_00681bf0 @ 00681bf0  kind=gamemisc  attributed-by=none  size=114 */

void FUN_00681bf0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *in_ECX;
  int iVar3;
  
  puVar1 = (undefined4 *)in_ECX[1];
  if ((param_1 < puVar1) && ((undefined4 *)*in_ECX <= param_1)) {
    iVar3 = (int)param_1 - (int)*in_ECX >> 3;
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      FUN_00681af0(1);
    }
    puVar1 = (undefined4 *)in_ECX[1];
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = *in_ECX;
      *puVar1 = *(undefined4 *)(uVar2 + iVar3 * 8);
      puVar1[1] = *(undefined4 *)(uVar2 + 4 + iVar3 * 8);
      in_ECX[1] = in_ECX[1] + 8;
      return;
    }
  }
  else {
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      FUN_00681af0(1);
    }
    puVar1 = (undefined4 *)in_ECX[1];
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
    }
  }
  in_ECX[1] = in_ECX[1] + 8;
  return;
}


