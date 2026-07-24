// Unsorted_001 (game_misc) -- cube. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_001.h"

/* FUN_004cb930 @ 004cb930  kind=gamemisc  attributed-by=none  size=151 */

undefined1
FUN_004cb930(int *param_1,uint *param_2,uint *param_3,undefined4 param_4,undefined4 param_5,
            char param_6)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar7 = 0;
  if (param_6 == '\0') {
    cVar3 = FUN_004cc840(param_5);
    if (cVar3 == '\0') goto LAB_004cb9bc;
  }
  local_c = param_5;
  iVar1 = *param_1;
  local_8 = 0xac;
  iVar4 = FUN_004cb5a0(iVar1,*(undefined4 *)(iVar1 + 4),&local_c);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(iVar1 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  uVar2 = *param_3;
  uVar5 = 1 << (uVar2 & 0x1f);
  uVar7 = 1;
  uVar6 = 0;
  if (0x1f < uVar2) {
    uVar6 = uVar5;
  }
  uVar5 = uVar5 ^ uVar6;
  if (0x3f < uVar2) {
    uVar6 = uVar5;
  }
  *param_2 = *param_2 | uVar5;
  param_2[1] = param_2[1] | uVar6;
LAB_004cb9bc:
  *param_3 = *param_3 + 1;
  return uVar7;
}


/* FUN_004cb9d0 @ 004cb9d0  kind=gamemisc  attributed-by=none  size=151 */

undefined1
FUN_004cb9d0(int *param_1,uint *param_2,uint *param_3,undefined4 param_4,undefined4 param_5,
            char param_6)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar7 = 0;
  if (param_6 == '\0') {
    cVar3 = FUN_004ccaa0(param_5);
    if (cVar3 == '\0') goto LAB_004cba5c;
  }
  local_c = param_5;
  iVar1 = *param_1;
  local_8 = 0xe38;
  iVar4 = FUN_004cb5a0(iVar1,*(undefined4 *)(iVar1 + 4),&local_c);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(iVar1 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  uVar2 = *param_3;
  uVar5 = 1 << (uVar2 & 0x1f);
  uVar7 = 1;
  uVar6 = 0;
  if (0x1f < uVar2) {
    uVar6 = uVar5;
  }
  uVar5 = uVar5 ^ uVar6;
  if (0x3f < uVar2) {
    uVar6 = uVar5;
  }
  *param_2 = *param_2 | uVar5;
  param_2[1] = param_2[1] | uVar6;
LAB_004cba5c:
  *param_3 = *param_3 + 1;
  return uVar7;
}


/* FUN_004cba70 @ 004cba70  kind=gamemisc  attributed-by=none  size=151 */

undefined1
FUN_004cba70(int *param_1,uint *param_2,uint *param_3,undefined4 param_4,undefined4 param_5,
            char param_6)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar7 = 0;
  if (param_6 == '\0') {
    cVar3 = FUN_0042f4a0(param_5);
    if (cVar3 != '\0') goto LAB_004cbafc;
  }
  local_c = param_5;
  iVar1 = *param_1;
  local_8 = 0x118;
  iVar4 = FUN_004cb5a0(iVar1,*(undefined4 *)(iVar1 + 4),&local_c);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(iVar1 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  uVar2 = *param_3;
  uVar5 = 1 << (uVar2 & 0x1f);
  uVar7 = 1;
  uVar6 = 0;
  if (0x1f < uVar2) {
    uVar6 = uVar5;
  }
  uVar5 = uVar5 ^ uVar6;
  if (0x3f < uVar2) {
    uVar6 = uVar5;
  }
  *param_2 = *param_2 | uVar5;
  param_2[1] = param_2[1] | uVar6;
LAB_004cbafc:
  *param_3 = *param_3 + 1;
  return uVar7;
}


/* FUN_004cbb10 @ 004cbb10  kind=gamemisc  attributed-by=none  size=176 */

undefined4
FUN_004cbb10(int *param_1,uint *param_2,uint *param_3,int param_4,int *param_5,char param_6)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_5 = 0;
  if (param_6 == '\0') {
    iVar5 = 0;
    piVar2 = param_5;
    while (*(int *)((param_4 - (int)param_5) + (int)piVar2) == *piVar2) {
      iVar5 = iVar5 + 1;
      piVar2 = piVar2 + 1;
      if (2 < iVar5) {
        *param_3 = *param_3 + 1;
        return 0;
      }
    }
  }
  local_10 = param_5;
  iVar5 = *param_1;
  local_c = 0xc;
  iVar3 = FUN_004cb5a0(iVar5,*(undefined4 *)(iVar5 + 4),&local_10);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(iVar5 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar6 = 0;
  if (0x1f < uVar1) {
    uVar6 = uVar4;
  }
  uVar4 = uVar4 ^ uVar6;
  if (0x3f < uVar1) {
    uVar6 = uVar4;
  }
  *param_2 = *param_2 | uVar4;
  param_2[1] = param_2[1] | uVar6;
  *param_3 = *param_3 + 1;
  return 1;
}


/* FUN_004cbbc0 @ 004cbbc0  kind=gamemisc  attributed-by=none  size=178 */

undefined4
FUN_004cbbc0(int *param_1,uint *param_2,uint *param_3,int param_4,float *param_5,char param_6)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float *local_c;
  undefined4 local_8;
  
  if (param_6 == '\0') {
    iVar5 = 0;
    pfVar3 = param_5;
    while( true ) {
      if (*(float *)((param_4 - (int)param_5) + (int)pfVar3) != *pfVar3) break;
      iVar5 = iVar5 + 1;
      pfVar3 = pfVar3 + 1;
      if (2 < iVar5) {
        *param_3 = *param_3 + 1;
        return 0;
      }
    }
  }
  local_c = param_5;
  iVar5 = *param_1;
  local_8 = 0xc;
  iVar2 = FUN_004cb5a0(iVar5,*(undefined4 *)(iVar5 + 4),&local_c);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(iVar5 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar6 = 0;
  if (0x1f < uVar1) {
    uVar6 = uVar4;
  }
  uVar4 = uVar4 ^ uVar6;
  if (0x3f < uVar1) {
    uVar6 = uVar4;
  }
  *param_2 = *param_2 | uVar4;
  param_2[1] = param_2[1] | uVar6;
  *param_3 = *param_3 + 1;
  return 1;
}


/* FUN_004cbc80 @ 004cbc80  kind=gamemisc  attributed-by=none  size=185 */

undefined4
FUN_004cbc80(int *param_1,uint *param_2,uint *param_3,int param_4,int *param_5,char param_6)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_5 = 0;
  if (param_6 == '\0') {
    iVar5 = 0;
    piVar2 = param_5;
    while ((*(int *)((param_4 - (int)param_5) + (int)piVar2) == *piVar2 &&
           (*(int *)((param_4 - (int)param_5) + 4 + (int)piVar2) == piVar2[1]))) {
      iVar5 = iVar5 + 1;
      piVar2 = piVar2 + 2;
      if (2 < iVar5) {
        *param_3 = *param_3 + 1;
        return 0;
      }
    }
  }
  local_10 = param_5;
  iVar5 = *param_1;
  local_c = 0x18;
  iVar3 = FUN_004cb5a0(iVar5,*(undefined4 *)(iVar5 + 4),&local_10);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(iVar5 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar6 = 0;
  if (0x1f < uVar1) {
    uVar6 = uVar4;
  }
  uVar4 = uVar4 ^ uVar6;
  if (0x3f < uVar1) {
    uVar6 = uVar4;
  }
  *param_2 = *param_2 | uVar4;
  param_2[1] = param_2[1] | uVar6;
  *param_3 = *param_3 + 1;
  return 1;
}


/* FUN_004cbd40 @ 004cbd40  kind=gamemisc  attributed-by=none  size=155 */

undefined1
FUN_004cbd40(int *param_1,uint *param_2,uint *param_3,int *param_4,int *param_5,char param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  int *local_c;
  undefined4 local_8;
  
  uVar6 = 0;
  if (((param_6 != '\0') || (*param_4 != *param_5)) || (param_4[1] != param_5[1])) {
    iVar1 = *param_1;
    local_c = param_5;
    local_8 = 8;
    iVar3 = FUN_004cb5a0(iVar1,*(undefined4 *)(iVar1 + 4),&local_c);
    if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    param_1[1] = param_1[1] + 1;
    *(int *)(iVar1 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    uVar2 = *param_3;
    uVar4 = 1 << (uVar2 & 0x1f);
    uVar6 = 1;
    uVar5 = 0;
    if (0x1f < uVar2) {
      uVar5 = uVar4;
    }
    uVar4 = uVar4 ^ uVar5;
    if (0x3f < uVar2) {
      uVar5 = uVar4;
    }
    *param_2 = *param_2 | uVar4;
    param_2[1] = param_2[1] | uVar5;
  }
  *param_3 = *param_3 + 1;
  return uVar6;
}


/* FUN_004cbde0 @ 004cbde0  kind=gamemisc  attributed-by=none  size=109 */

undefined4 FUN_004cbde0(int *param_1,uint *param_2,uint *param_3,undefined1 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar4;
  }
  uVar4 = uVar4 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar3 = param_1[1] - *param_1;
    if (iVar3 < param_1[3] + 1) {
      param_1[3] = iVar3;
      *param_3 = *param_3 + 1;
      return 1;
    }
    *param_4 = *(undefined1 *)(*param_1 + param_1[3]);
    param_1[3] = param_1[3] + 1;
    *param_3 = *param_3 + 1;
    return 1;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cbe50 @ 004cbe50  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cbe50(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 1;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cbeab;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 1;
  }
LAB_004cbeab:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cbed0 @ 004cbed0  kind=gamemisc  attributed-by=none  size=112 */

undefined4 FUN_004cbed0(int *param_1,uint *param_2,uint *param_3,undefined2 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar4;
  }
  uVar4 = uVar4 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar3 = param_1[1] - *param_1;
    if (iVar3 < param_1[3] + 2) {
      param_1[3] = iVar3;
      *param_3 = *param_3 + 1;
      return 2;
    }
    *param_4 = *(undefined2 *)(*param_1 + param_1[3]);
    param_1[3] = param_1[3] + 2;
    *param_3 = *param_3 + 1;
    return 2;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cbf40 @ 004cbf40  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cbf40(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 2;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cbf9b;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 2;
  }
LAB_004cbf9b:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cbfc0 @ 004cbfc0  kind=gamemisc  attributed-by=none  size=110 */

undefined4 FUN_004cbfc0(int *param_1,uint *param_2,uint *param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar4;
  }
  uVar4 = uVar4 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar3 = param_1[1] - *param_1;
    if (iVar3 < param_1[3] + 4) {
      param_1[3] = iVar3;
      *param_3 = *param_3 + 1;
      return 4;
    }
    *param_4 = *(undefined4 *)(*param_1 + param_1[3]);
    param_1[3] = param_1[3] + 4;
    *param_3 = *param_3 + 1;
    return 4;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cc030 @ 004cc030  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cc030(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 4;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cc08b;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 4;
  }
LAB_004cc08b:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cc0b0 @ 004cc0b0  kind=gamemisc  attributed-by=none  size=132 */

undefined4 FUN_004cc0b0(int *param_1,uint *param_2,uint *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *param_3;
  uVar5 = 1 << (uVar1 & 0x1f);
  uVar4 = 0;
  if (0x1f < uVar1) {
    uVar4 = uVar5;
  }
  uVar5 = uVar5 ^ uVar4;
  if (0x3f < uVar1) {
    uVar4 = uVar5;
  }
  if ((uVar5 & *param_2) != 0 || (uVar4 & param_2[1]) != 0) {
    iVar2 = param_1[3];
    iVar3 = *param_1;
    if (param_1[1] - iVar3 < iVar2 + 0x14) {
      param_1[3] = param_1[1] - iVar3;
      *param_3 = *param_3 + 1;
      return 0x14;
    }
    *param_4 = *(undefined8 *)(iVar3 + iVar2);
    param_4[1] = *(undefined8 *)(iVar3 + 8 + iVar2);
    *(undefined4 *)(param_4 + 2) = *(undefined4 *)(iVar3 + 0x10 + iVar2);
    param_1[3] = param_1[3] + 0x14;
    *param_3 = *param_3 + 1;
    return 0x14;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cc140 @ 004cc140  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cc140(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 0x14;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cc19b;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 0x14;
  }
LAB_004cc19b:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cc1c0 @ 004cc1c0  kind=gamemisc  attributed-by=none  size=128 */

undefined4 FUN_004cc1c0(int *param_1,uint *param_2,uint *param_3,void *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar4;
  }
  uVar4 = uVar4 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar3 = param_1[1] - *param_1;
    if (iVar3 < param_1[3] + 0xac) {
      param_1[3] = iVar3;
      *param_3 = *param_3 + 1;
      return 0xac;
    }
    memcpy(param_4,(void *)(*param_1 + param_1[3]),0xac);
    param_1[3] = param_1[3] + 0xac;
    *param_3 = *param_3 + 1;
    return 0xac;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cc240 @ 004cc240  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cc240(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 0xac;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cc29b;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 0xac;
  }
LAB_004cc29b:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cc2c0 @ 004cc2c0  kind=gamemisc  attributed-by=none  size=128 */

undefined4 FUN_004cc2c0(int *param_1,uint *param_2,uint *param_3,void *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar4;
  }
  uVar4 = uVar4 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar3 = param_1[1] - *param_1;
    if (iVar3 < param_1[3] + 0xe38) {
      param_1[3] = iVar3;
      *param_3 = *param_3 + 1;
      return 0xe38;
    }
    memcpy(param_4,(void *)(*param_1 + param_1[3]),0xe38);
    param_1[3] = param_1[3] + 0xe38;
    *param_3 = *param_3 + 1;
    return 0xe38;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cc340 @ 004cc340  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cc340(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 0xe38;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cc39b;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 0xe38;
  }
LAB_004cc39b:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cc3c0 @ 004cc3c0  kind=gamemisc  attributed-by=none  size=128 */

undefined4 FUN_004cc3c0(int *param_1,uint *param_2,uint *param_3,void *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar4;
  }
  uVar4 = uVar4 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar3 = param_1[1] - *param_1;
    if (iVar3 < param_1[3] + 0x118) {
      param_1[3] = iVar3;
      *param_3 = *param_3 + 1;
      return 0x118;
    }
    memcpy(param_4,(void *)(*param_1 + param_1[3]),0x118);
    param_1[3] = param_1[3] + 0x118;
    *param_3 = *param_3 + 1;
    return 0x118;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cc440 @ 004cc440  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cc440(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 0x118;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cc49b;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 0x118;
  }
LAB_004cc49b:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cc4c0 @ 004cc4c0  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cc4c0(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 0xc;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cc51b;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 0xc;
  }
LAB_004cc51b:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cc540 @ 004cc540  kind=gamemisc  attributed-by=none  size=121 */

undefined4 FUN_004cc540(int *param_1,uint *param_2,uint *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *param_3;
  uVar5 = 1 << (uVar1 & 0x1f);
  uVar4 = 0;
  if (0x1f < uVar1) {
    uVar4 = uVar5;
  }
  uVar5 = uVar5 ^ uVar4;
  if (0x3f < uVar1) {
    uVar4 = uVar5;
  }
  if ((uVar5 & *param_2) != 0 || (uVar4 & param_2[1]) != 0) {
    iVar2 = param_1[3];
    iVar3 = *param_1;
    if (param_1[1] - iVar3 < iVar2 + 0xc) {
      param_1[3] = param_1[1] - iVar3;
      *param_3 = *param_3 + 1;
      return 0xc;
    }
    *param_4 = *(undefined8 *)(iVar3 + iVar2);
    *(undefined4 *)(param_4 + 1) = *(undefined4 *)(iVar3 + 8 + iVar2);
    param_1[3] = param_1[3] + 0xc;
    *param_3 = *param_3 + 1;
    return 0xc;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cc5c0 @ 004cc5c0  kind=gamemisc  attributed-by=none  size=136 */

undefined4 FUN_004cc5c0(int *param_1,uint *param_2,uint *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *param_3;
  uVar5 = 1 << (uVar1 & 0x1f);
  uVar4 = 0;
  if (0x1f < uVar1) {
    uVar4 = uVar5;
  }
  uVar5 = uVar5 ^ uVar4;
  if (0x3f < uVar1) {
    uVar4 = uVar5;
  }
  if ((uVar5 & *param_2) != 0 || (uVar4 & param_2[1]) != 0) {
    iVar2 = param_1[3];
    iVar3 = *param_1;
    if (param_1[1] - iVar3 < iVar2 + 0x18) {
      param_1[3] = param_1[1] - iVar3;
      *param_3 = *param_3 + 1;
      return 0x18;
    }
    *param_4 = *(undefined8 *)(iVar3 + iVar2);
    param_4[1] = *(undefined8 *)(iVar3 + 8 + iVar2);
    param_4[2] = *(undefined8 *)(iVar3 + 0x10 + iVar2);
    param_1[3] = param_1[3] + 0x18;
    *param_3 = *param_3 + 1;
    return 0x18;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cc650 @ 004cc650  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cc650(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 0x18;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cc6ab;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 0x18;
  }
LAB_004cc6ab:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cc6d0 @ 004cc6d0  kind=gamemisc  attributed-by=none  size=114 */

undefined4 FUN_004cc6d0(int *param_1,uint *param_2,uint *param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *param_3;
  uVar3 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar3;
  }
  uVar3 = uVar3 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar3;
  }
  if ((uVar3 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar4 = param_1[1] - *param_1;
    if (iVar4 < param_1[3] + 8) {
      param_1[3] = iVar4;
      *param_3 = *param_3 + 1;
      return 8;
    }
    *param_4 = *(undefined8 *)(*param_1 + param_1[3]);
    param_1[3] = param_1[3] + 8;
    *param_3 = *param_3 + 1;
    return 8;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cc750 @ 004cc750  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cc750(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 8;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cc7ab;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 8;
  }
LAB_004cc7ab:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cc800 @ 004cc800  kind=gamemisc  attributed-by=none  size=50 */

undefined1 FUN_004cc800(float *param_1)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = in_ECX - (int)param_1;
  do {
    if (*(float *)(iVar1 + (int)param_1) != *param_1) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
  } while (iVar2 < 3);
  return 0;
}


/* FUN_004cc840 @ 004cc840  kind=gamemisc  attributed-by=none  size=607 */

undefined1 FUN_004cc840(int param_1)

{
  char cVar1;
  char *in_ECX;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  pcVar2 = in_ECX;
  do {
    if (*pcVar2 != pcVar2[param_1 - (int)in_ECX]) {
      return 1;
    }
    iVar3 = iVar3 + 1;
    pcVar2 = pcVar2 + 1;
  } while (iVar3 < 2);
  pcVar2 = in_ECX + 2;
  do {
    if (*pcVar2 != pcVar2[param_1 - (int)in_ECX]) {
      return 1;
    }
    pcVar2 = pcVar2 + 1;
  } while ((int)(pcVar2 + (-2 - (int)in_ECX)) < 3);
  if ((((((((*(short *)(in_ECX + 6) == *(short *)(param_1 + 6)) &&
           (cVar1 = FUN_004cc800(param_1 + 8), cVar1 == '\0')) &&
          (*(short *)(in_ECX + 0x14) == *(short *)(param_1 + 0x14))) &&
         (((*(short *)(in_ECX + 0x16) == *(short *)(param_1 + 0x16) &&
           (*(short *)(in_ECX + 0x18) == *(short *)(param_1 + 0x18))) &&
          ((*(short *)(in_ECX + 0x1a) == *(short *)(param_1 + 0x1a) &&
           ((*(short *)(in_ECX + 0x1c) == *(short *)(param_1 + 0x1c) &&
            (*(short *)(in_ECX + 0x1e) == *(short *)(param_1 + 0x1e))))))))) &&
        (*(short *)(in_ECX + 0x20) == *(short *)(param_1 + 0x20))) &&
       (((*(short *)(in_ECX + 0x22) == *(short *)(param_1 + 0x22) &&
         (*(float *)(in_ECX + 0x24) == *(float *)(param_1 + 0x24))) &&
        (*(float *)(in_ECX + 0x28) == *(float *)(param_1 + 0x28))))) &&
      (((*(float *)(in_ECX + 0x2c) == *(float *)(param_1 + 0x2c) &&
        (*(float *)(in_ECX + 0x30) == *(float *)(param_1 + 0x30))) &&
       ((*(float *)(in_ECX + 0x34) == *(float *)(param_1 + 0x34) &&
        ((*(float *)(in_ECX + 0x38) == *(float *)(param_1 + 0x38) &&
         (*(float *)(in_ECX + 0x3c) == *(float *)(param_1 + 0x3c))))))))) &&
     (((*(float *)(in_ECX + 0x40) == *(float *)(param_1 + 0x40) &&
       (((((*(float *)(in_ECX + 0x44) == *(float *)(param_1 + 0x44) &&
           (*(float *)(in_ECX + 0x48) == *(float *)(param_1 + 0x48))) &&
          (cVar1 = FUN_004cc800(param_1 + 0x4c), cVar1 == '\0')) &&
         ((*(float *)(in_ECX + 0x58) == *(float *)(param_1 + 0x58) &&
          (*(float *)(in_ECX + 0x5c) == *(float *)(param_1 + 0x5c))))) &&
        ((*(float *)(in_ECX + 0x60) == *(float *)(param_1 + 0x60) &&
         ((cVar1 = FUN_004cc800(param_1 + 100), cVar1 == '\0' &&
          (cVar1 = FUN_004cc800(param_1 + 0x70), cVar1 == '\0')))))))) &&
      ((cVar1 = FUN_004cc800(param_1 + 0x7c), cVar1 == '\0' &&
       (((cVar1 = FUN_004cc800(param_1 + 0x88), cVar1 == '\0' &&
         (cVar1 = FUN_004cc800(param_1 + 0xa0), cVar1 == '\0')) &&
        (cVar1 = FUN_004cc800(param_1 + 0x94), cVar1 == '\0')))))))) {
    return 0;
  }
  return 1;
}


/* FUN_004ccaa0 @ 004ccaa0  kind=gamemisc  attributed-by=none  size=330 */

undefined4 FUN_004ccaa0(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_0042f4a0(param_1 + 0xd20);
  if (cVar1 != '\0') {
    cVar1 = FUN_0042f4a0(param_1 + 0xaf0);
    if (cVar1 != '\0') {
      cVar1 = FUN_0042f4a0(param_1 + 0xc08);
      if (cVar1 != '\0') {
        cVar1 = FUN_0042f4a0(param_1);
        if (cVar1 != '\0') {
          cVar1 = FUN_0042f4a0(param_1 + 0x118);
          if (cVar1 != '\0') {
            cVar1 = FUN_0042f4a0(param_1 + 0x230);
            if (cVar1 != '\0') {
              cVar1 = FUN_0042f4a0(param_1 + 0x348);
              if (cVar1 != '\0') {
                cVar1 = FUN_0042f4a0(param_1 + 0x460);
                if (cVar1 != '\0') {
                  cVar1 = FUN_0042f4a0(param_1 + 0x578);
                  if (cVar1 != '\0') {
                    cVar1 = FUN_0042f4a0(param_1 + 0x690);
                    if (cVar1 != '\0') {
                      cVar1 = FUN_0042f4a0(param_1 + 0x7a8);
                      if (cVar1 != '\0') {
                        cVar1 = FUN_0042f4a0(param_1 + 0x8c0);
                        if (cVar1 != '\0') {
                          cVar1 = FUN_0042f4a0(param_1 + 0x9d8);
                          if (cVar1 != '\0') {
                            return 0;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}


/* FUN_004ccc30 @ 004ccc30  kind=gamemisc  attributed-by=none  size=186 */

undefined1
FUN_004ccc30(int *param_1,uint *param_2,uint *param_3,byte *param_4,byte *param_5,char param_6)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  bool bVar9;
  byte *local_c;
  undefined4 local_8;
  
  uVar8 = 0;
  pbVar5 = param_5;
  if (param_6 == '\0') {
    do {
      bVar1 = *param_4;
      bVar9 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_004ccc70:
        uVar3 = -(uint)bVar9 | 1;
        goto LAB_004ccc75;
      }
      if (bVar1 == 0) break;
      bVar1 = param_4[1];
      bVar9 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_004ccc70;
      param_4 = param_4 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_004ccc75:
    if (uVar3 == 0) goto LAB_004ccce2;
  }
  local_c = param_5;
  iVar2 = *param_1;
  local_8 = 0x10;
  iVar4 = FUN_004cb5a0(iVar2,*(undefined4 *)(iVar2 + 4),&local_c);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(iVar2 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  uVar3 = *param_3;
  uVar6 = 1 << (uVar3 & 0x1f);
  uVar8 = 1;
  uVar7 = 0;
  if (0x1f < uVar3) {
    uVar7 = uVar6;
  }
  uVar6 = uVar6 ^ uVar7;
  if (0x3f < uVar3) {
    uVar7 = uVar6;
  }
  *param_2 = *param_2 | uVar6;
  param_2[1] = param_2[1] | uVar7;
LAB_004ccce2:
  *param_3 = *param_3 + 1;
  return uVar8;
}


/* FUN_004cccf0 @ 004cccf0  kind=gamemisc  attributed-by=none  size=176 */

undefined4
FUN_004cccf0(int *param_1,uint *param_2,uint *param_3,int param_4,int *param_5,char param_6)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_5 = 0;
  if (param_6 == '\0') {
    iVar5 = 0;
    piVar2 = param_5;
    while (*(int *)((param_4 - (int)param_5) + (int)piVar2) == *piVar2) {
      iVar5 = iVar5 + 1;
      piVar2 = piVar2 + 1;
      if (10 < iVar5) {
        *param_3 = *param_3 + 1;
        return 0;
      }
    }
  }
  local_10 = param_5;
  iVar5 = *param_1;
  local_c = 0x2c;
  iVar3 = FUN_004cb5a0(iVar5,*(undefined4 *)(iVar5 + 4),&local_10);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(iVar5 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar6 = 0;
  if (0x1f < uVar1) {
    uVar6 = uVar4;
  }
  uVar4 = uVar4 ^ uVar6;
  if (0x3f < uVar1) {
    uVar6 = uVar4;
  }
  *param_2 = *param_2 | uVar4;
  param_2[1] = param_2[1] | uVar6;
  *param_3 = *param_3 + 1;
  return 1;
}


/* FUN_004ccda0 @ 004ccda0  kind=gamemisc  attributed-by=none  size=125 */

undefined4 FUN_004ccda0(int *param_1,uint *param_2,uint *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *param_3;
  uVar5 = 1 << (uVar1 & 0x1f);
  uVar4 = 0;
  if (0x1f < uVar1) {
    uVar4 = uVar5;
  }
  uVar5 = uVar5 ^ uVar4;
  if (0x3f < uVar1) {
    uVar4 = uVar5;
  }
  if ((uVar5 & *param_2) != 0 || (uVar4 & param_2[1]) != 0) {
    iVar2 = param_1[3];
    iVar3 = *param_1;
    if (param_1[1] - iVar3 < iVar2 + 0x10) {
      param_1[3] = param_1[1] - iVar3;
      *param_3 = *param_3 + 1;
      return 0x10;
    }
    *param_4 = *(undefined8 *)(iVar3 + iVar2);
    param_4[1] = *(undefined8 *)(iVar3 + 8 + iVar2);
    param_1[3] = param_1[3] + 0x10;
    *param_3 = *param_3 + 1;
    return 0x10;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cce20 @ 004cce20  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cce20(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 0x10;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cce7b;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 0x10;
  }
LAB_004cce7b:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004ccea0 @ 004ccea0  kind=gamemisc  attributed-by=none  size=119 */

undefined4 FUN_004ccea0(int *param_1,uint *param_2,uint *param_3,void *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar4;
  }
  uVar4 = uVar4 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar3 = param_1[1] - *param_1;
    if (iVar3 < param_1[3] + 0x2c) {
      param_1[3] = iVar3;
      *param_3 = *param_3 + 1;
      return 0x2c;
    }
    memcpy(param_4,(void *)(*param_1 + param_1[3]),0x2c);
    param_1[3] = param_1[3] + 0x2c;
    *param_3 = *param_3 + 1;
    return 0x2c;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004ccf20 @ 004ccf20  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004ccf20(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 0x2c;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004ccf7b;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 0x2c;
  }
LAB_004ccf7b:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cdaa0 @ 004cdaa0  kind=gamemisc  attributed-by=none  size=1726 */

void FUN_004cdaa0(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  size_t _Size;
  void *_Src;
  uint uVar1;
  int *piVar2;
  undefined8 local_24;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e8568;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 0;
  local_1c = (int *)FUN_004ccbf0(0,0);
  local_8 = 0;
  local_24 = 0;
  local_14 = 0;
  FUN_004cbc80(&local_1c,&local_24,&local_14,param_2,param_3,param_4,uVar1);
  FUN_004cbbc0(&local_1c,&local_24,&local_14,param_2 + 0x18,param_3 + 0x18,param_4);
  FUN_004cbbc0(&local_1c,&local_24,&local_14,param_2 + 0x24,param_3 + 0x24,param_4);
  FUN_004cbbc0(&local_1c,&local_24,&local_14,param_2 + 0x30,param_3 + 0x30,param_4);
  FUN_004cbbc0(&local_1c,&local_24,&local_14,param_2 + 0x3c,param_3 + 0x3c,param_4);
  FUN_004cb7b0(&local_1c,&local_24,&local_14,param_2 + 0x48,param_3 + 0x48,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x4c,param_3 + 0x4c,param_4);
  FUN_004cb5d0(&local_1c,&local_24,&local_14,param_2 + 0x50,param_3 + 0x50,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x54,param_3 + 0x54,param_4);
  FUN_004cb5d0(&local_1c,&local_24,&local_14,param_2 + 0x58,param_3 + 0x58,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x5c,param_3 + 0x5c,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x60,param_3 + 0x60,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 100,param_3 + 100,param_4);
  FUN_004cb930(&local_1c,&local_24,&local_14,param_2 + 0x68,param_3 + 0x68,param_4);
  FUN_004cb670(&local_1c,&local_24,&local_14,param_2 + 0x114,param_3 + 0x114,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x118,param_3 + 0x118,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x11c,param_3 + 0x11c,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x120,param_3 + 0x120,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x124,param_3 + 0x124,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x128,param_3 + 0x128,param_4);
  FUN_004cb7b0(&local_1c,&local_24,&local_14,param_2 + 300,param_3 + 300,param_4);
  FUN_004cb5d0(&local_1c,&local_24,&local_14,param_2 + 0x130,param_3 + 0x130,param_4);
  FUN_004cb5d0(&local_1c,&local_24,&local_14,param_2 + 0x131,param_3 + 0x131,param_4);
  FUN_004cb7b0(&local_1c,&local_24,&local_14,param_2 + 0x134,param_3 + 0x134,param_4);
  FUN_004cbbc0(&local_1c,&local_24,&local_14,param_2 + 0x138,param_3 + 0x138,param_4);
  FUN_004cbbc0(&local_1c,&local_24,&local_14,param_2 + 0x144,param_3 + 0x144,param_4);
  FUN_004cbbc0(&local_1c,&local_24,&local_14,param_2 + 0x150,param_3 + 0x150,param_4);
  FUN_004cb7b0(&local_1c,&local_24,&local_14,param_2 + 0x15c,param_3 + 0x15c,param_4);
  FUN_004cb7b0(&local_1c,&local_24,&local_14,param_2 + 0x160,param_3 + 0x160,param_4);
  FUN_004cb7b0(&local_1c,&local_24,&local_14,param_2 + 0x164,param_3 + 0x164,param_4);
  FUN_004cb850(&local_1c,&local_24,&local_14,param_2 + 0x168,param_3 + 0x168,param_4);
  FUN_004cb5d0(&local_1c,&local_24,&local_14,param_2 + 0x17c,param_3 + 0x17c,param_4);
  FUN_004cb5d0(&local_1c,&local_24,&local_14,param_2 + 0x17d,param_3 + 0x17d,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x180,param_3 + 0x180,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x184,param_3 + 0x184,param_4);
  FUN_004cbd40(&local_1c,&local_24,&local_14,param_2 + 0x188,param_3 + 0x188,param_4);
  FUN_004cbd40(&local_1c,&local_24,&local_14,param_2 + 400,param_3 + 400,param_4);
  FUN_004cb5d0(&local_1c,&local_24,&local_14,param_2 + 0x198,param_3 + 0x198,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x19c,param_3 + 0x19c,param_4);
  FUN_004cbb10(&local_1c,&local_24,&local_14,param_2 + 0x1a0,param_3 + 0x1a0,param_4);
  FUN_004cbc80(&local_1c,&local_24,&local_14,param_2 + 0x1b0,param_3 + 0x1b0,param_4);
  FUN_004cbb10(&local_1c,&local_24,&local_14,param_2 + 0x1cc,param_3 + 0x1cc,param_4);
  FUN_004cb5d0(&local_1c,&local_24,&local_14,param_2 + 0x1c8,param_3 + 0x1c8,param_4);
  FUN_004cba70(&local_1c,&local_24,&local_14,param_2 + 0x1d8,param_3 + 0x1d8,param_4);
  FUN_004cb9d0(&local_1c,&local_24,&local_14,param_2 + 0x2f0,param_3 + 0x2f0,param_4);
  FUN_004ccc30(&local_1c,&local_24,&local_14,param_2 + 0x1158,param_3 + 0x1158,param_4);
  FUN_004cccf0(&local_1c,&local_24,&local_14,param_2 + 0x1128,param_3 + 0x1128,param_4);
  FUN_004cb710(&local_1c,&local_24,&local_14,param_2 + 0x1154,param_3 + 0x1154,param_4);
  FUN_005870c0((param_1[1] - *param_1) + 8);
  *(undefined8 *)(*param_1 + param_1[3]) = local_24;
  param_1[3] = param_1[3] + 8;
  piVar2 = (int *)*local_1c;
  if (piVar2 != local_1c) {
    do {
      _Size = piVar2[3];
      _Src = (void *)piVar2[2];
      FUN_005870c0((param_1[1] - *param_1) + _Size);
      memcpy((void *)(*param_1 + param_1[3]),_Src,_Size);
      param_1[3] = param_1[3] + _Size;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != local_1c);
  }
  piVar2 = (int *)*local_1c;
  *local_1c = (int)local_1c;
  local_1c[1] = (int)local_1c;
  if (piVar2 != local_1c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar2);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_1c);
}


/* FUN_004ce3f9 @ 004ce3f9  kind=gamemisc  attributed-by=none  size=102 */

void FUN_004ce3f9(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBP;
  int *unaff_ESI;
  uint unaff_EDI;
  
  cVar1 = *(char *)(unaff_EBP + -0x11);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iVar2 = *(int *)(*unaff_ESI + 4);
  *(undefined4 *)(iVar2 + 0x20 + (int)unaff_ESI) = 0;
  *(undefined4 *)(iVar2 + 0x24 + (int)unaff_ESI) = 0;
  if (cVar1 == '\0') {
    unaff_EDI = unaff_EDI | 2;
  }
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)(*(int *)(*unaff_ESI + 4) + (int)unaff_ESI),
             unaff_EDI,false);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piVar3 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x28) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x28));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* FUN_004ce6e0 @ 004ce6e0  kind=gamemisc  attributed-by=none  size=2183 */

void FUN_004ce6e0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *in_ECX;
  byte *****pppppbVar6;
  char *pcVar7;
  bool bVar8;
  basic_istream<char,std::char_traits<char>_> local_e4 [3];
  int aiStack_d8 [25];
  basic_ios<char,std::char_traits<char>_> local_74 [6];
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e8643;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  FUN_004031d0(local_e4,"options.cfg",1,0x40,1);
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  iVar1 = *(int *)((int)aiStack_d8 +
                  (local_e4[0].vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset);
  do {
    local_8._0_1_ = 0;
    if (iVar1 != 0) {
LAB_004cef4a:
      std::basic_ifstream<char,std::char_traits<char>_>::
      basic_ifstream<char,std::char_traits<char>_>
                ((basic_ifstream<char,std::char_traits<char>_> *)local_74);
      std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                (local_74);
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ****)((uint)local_2c[0] & 0xffffff00);
    local_8._0_1_ = 1;
    FUN_004ce2a0(local_e4,local_2c,uVar3);
    uVar5 = local_1c;
    if (*(int *)((int)aiStack_d8 +
                (local_e4[0].vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) != 0) {
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      goto LAB_004cef4a;
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 10;
    if (local_1c < 10) {
      uVar4 = local_1c;
    }
    if (uVar4 == 0) {
LAB_004ce806:
      if (local_1c < 10) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(local_1c != 10);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "fullscreen";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004ce7cc;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004ce800:
        uVar4 = 0;
      }
      else {
LAB_004ce7cc:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004ce800;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004ce806;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0xb;
    if (uVar5 < 0xb) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004ce8a1:
      if (uVar5 < 0xb) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar5 != 0xb);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "resolutionX";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004ce867;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004ce89b:
        uVar4 = 0;
      }
      else {
LAB_004ce867:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004ce89b;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004ce8a1;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 1);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0xb;
    if (uVar5 < 0xb) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004ce940:
      if (uVar5 < 0xb) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar5 != 0xb);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "resolutionY";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004ce906;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004ce93a:
        uVar4 = 0;
      }
      else {
LAB_004ce906:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004ce93a;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004ce940;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 2);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0xc;
    if (uVar5 < 0xc) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004ce9e0:
      if (uVar5 < 0xc) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar5 != 0xc);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "antiAliasing";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004ce9a6;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004ce9da:
        uVar4 = 0;
      }
      else {
LAB_004ce9a6:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004ce9da;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004ce9e0;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 3);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0xe;
    if (uVar5 < 0xe) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004cea80:
      if (uVar5 < 0xe) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar5 != 0xe);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "renderDistance";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004cea46;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004cea7a:
        uVar4 = 0;
      }
      else {
LAB_004cea46:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004cea7a;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004cea80;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 4);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0xb;
    if (uVar5 < 0xb) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004ceb20:
      if (uVar5 < 0xb) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar5 != 0xb);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "soundVolume";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004ceae6;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004ceb1a:
        uVar4 = 0;
      }
      else {
LAB_004ceae6:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004ceb1a;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004ceb20;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 5);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0xb;
    if (uVar5 < 0xb) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004cebc0:
      if (uVar5 < 0xb) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar5 != 0xb);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "musicVolume";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004ceb86;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004cebba:
        uVar4 = 0;
      }
      else {
LAB_004ceb86:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004cebba;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004cebc0;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 6);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0xb;
    if (uVar5 < 0xb) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004cec60:
      if (uVar5 < 0xb) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar5 != 0xb);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "cameraSpeed";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004cec26;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004cec5a:
        uVar4 = 0;
      }
      else {
LAB_004cec26:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004cec5a;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004cec60;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 7);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0x10;
    if (uVar5 < 0x10) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004ced00:
      if (uVar5 < 0x10) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar5 != 0x10);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "cameraSmoothness";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004cecc6;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004cecfa:
        uVar4 = 0;
      }
      else {
LAB_004cecc6:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004cecfa;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004ced00;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 8);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 8;
    if (uVar5 < 8) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004ceda0:
      if (uVar5 < 8) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar5 != 8);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "language";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004ced66;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004ced9a:
        uVar4 = 0;
      }
      else {
LAB_004ced66:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004ced9a;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004ceda0;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 10);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 7;
    if (uVar5 < 7) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004cee40:
      if (uVar5 < 7) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar5 != 7);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "invertY";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004cee06;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004cee3a:
        uVar4 = 0;
      }
      else {
LAB_004cee06:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004cee3a;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004cee40;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 9);
    }
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0xb;
    if (uVar5 < 0xb) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
LAB_004ceee0:
      if (uVar5 < 0xb) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (uint)(uVar5 != 0xb);
      }
      bVar8 = uVar5 == 0;
    }
    else {
      pcVar7 = "minTimeStep";
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_004ceea6;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_004ceeda:
        uVar4 = 0;
      }
      else {
LAB_004ceea6:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_004ceeda;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_004ceee0;
    }
    if (bVar8) {
      std::basic_istream<char,std::char_traits<char>_>::operator>>(local_e4,in_ECX + 0xb);
    }
    local_8._0_1_ = 0;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    iVar1 = *(int *)((int)aiStack_d8 +
                    (local_e4[0].vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset);
  } while( true );
}


/* FUN_004d6c40 @ 004d6c40  kind=gamemisc  attributed-by=none  size=112 */

undefined4 FUN_004d6c40(int *param_1,int *param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  for (puVar1 = param_3; puVar1 < param_3 + (param_4 >> 2); puVar1 = puVar1 + 1) {
    if (*puVar1 < 0x10000) {
      iVar3 = iVar3 + 1;
    }
    else {
      iVar3 = iVar3 + 2;
    }
  }
  *param_2 = iVar3;
  iVar2 = 1;
  if (iVar3 != 0) {
    iVar2 = iVar3;
  }
  iVar3 = (*(code *)PTR_FUN_007663ac)(iVar2 * 2);
  *param_1 = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  FUN_004d7400(param_3,param_4 >> 2,iVar3);
  return 1;
}


/* FUN_004d6cb0 @ 004d6cb0  kind=gamemisc  attributed-by=none  size=82 */

undefined4 FUN_004d6cb0(int *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004d73a0(param_3,param_4 >> 2,0);
  iVar2 = 1;
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  *param_2 = iVar1;
  iVar2 = (*(code *)PTR_FUN_007663ac)(iVar2 * 2);
  *param_1 = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  FUN_004d7460(param_3,param_4 >> 2,iVar2);
  return 1;
}


/* FUN_004d6d40 @ 004d6d40  kind=gamemisc  attributed-by=none  size=32 */

uint FUN_004d6d40(uint *param_1)

{
  uint uVar1;
  uint *in_ECX;
  
  uVar1 = *in_ECX;
  if ((uVar1 == *param_1) && (uVar1 = in_ECX[1], uVar1 == param_1[1])) {
    return uVar1 & 0xffffff00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}


/* FUN_004d6d70 @ 004d6d70  kind=gamemisc  attributed-by=none  size=27 */

void FUN_004d6d70(int *param_1)

{
  int *in_ECX;
  
  *param_1 = *in_ECX;
  param_1[1] = in_ECX[1];
  *in_ECX = *(int *)(*in_ECX + 0x18);
  return;
}


/* FUN_004d6d90 @ 004d6d90  kind=gamemisc  attributed-by=none  size=137 */

int FUN_004d6d90(uint param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  
  uVar1 = param_1;
  if (param_1 < 0x2001) {
    uVar1 = 0x8000;
  }
  iVar2 = FUN_004d6ea0(uVar1);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_1 < 0x2001) {
    *(int *)(*in_ECX + 0x10) = in_ECX[1];
    *(int *)(iVar2 + 8) = *in_ECX;
    *(int *)(*in_ECX + 0xc) = iVar2;
    in_ECX[1] = param_1;
    *in_ECX = iVar2;
    *(uint *)(iVar2 + 0x10) = param_1;
    *param_2 = iVar2;
    return iVar2 + 0x18;
  }
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(*in_ECX + 8);
  *(int *)(iVar2 + 0xc) = *in_ECX;
  *(int *)(*(int *)(*in_ECX + 8) + 0xc) = iVar2;
  *(int *)(*in_ECX + 8) = iVar2;
  *(uint *)(iVar2 + 0x10) = param_1;
  *param_2 = iVar2;
  return iVar2 + 0x18;
}


/* FUN_004d6e20 @ 004d6e20  kind=gamemisc  attributed-by=none  size=114 */

uint * FUN_004d6e20(int *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  
  uVar1 = param_1[1] + 0x20;
  if (uVar1 < 0x8001) {
    piVar3 = (int *)*param_1;
    puVar2 = (uint *)(param_1[1] + 0x18 + (int)piVar3);
    param_1[1] = uVar1;
  }
  else {
    puVar2 = (uint *)FUN_004d6d90(0x20,&param_1);
    piVar3 = param_1;
  }
  if (puVar2 != (uint *)0x0) {
    puVar2[1] = 0;
    *puVar2 = (uint)piVar3 | param_2;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    return puVar2;
  }
  return (uint *)0x0;
}


/* FUN_004d6ea0 @ 004d6ea0  kind=gamemisc  attributed-by=none  size=110 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d6ea0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  
  iVar1 = (*(code *)PTR_FUN_007663ac)(param_1 + 0x38);
  if (iVar1 == 0) {
    return;
  }
  puVar2 = (undefined4 *)(iVar1 + 0x1fU & 0xffffffe0);
  if (puVar2 == (undefined4 *)0x0) {
    iRam00000004 = iVar1;
    _DAT_00000000 = *(undefined4 *)*in_ECX;
    return;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[1] = iVar1;
  *puVar2 = *(undefined4 *)*in_ECX;
  return;
}


/* FUN_004d6f10 @ 004d6f10  kind=gamemisc  attributed-by=none  size=67 */

ushort * FUN_004d6f10(ushort *param_1,uint param_2)

{
  if (param_2 < 0x10000) {
    *param_1 = (ushort)param_2;
    return param_1 + 1;
  }
  *param_1 = (short)(param_2 - 0x10000 >> 10) + 0xd800;
  param_1[1] = ((ushort)param_2 & 0x3ff) + 0xdc00;
  return param_1 + 2;
}


/* FUN_004d6f60 @ 004d6f60  kind=gamemisc  attributed-by=none  size=128 */

int * FUN_004d6f60(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  uVar1 = param_2[1] + 0x14;
  if (uVar1 < 0x8001) {
    piVar5 = (int *)*param_2;
    piVar4 = (int *)(param_2[1] + 0x18 + (int)piVar5);
    param_2[1] = uVar1;
  }
  else {
    piVar4 = (int *)FUN_004d6d90(0x14,&param_2);
    piVar5 = param_2;
  }
  if (piVar4 != (int *)0x0) {
    *piVar4 = (int)piVar5;
    piVar4[1] = 0;
    piVar4[2] = 0;
    piVar4[3] = 0;
    piVar4[4] = 0;
    iVar2 = *(int *)(param_1 + 0x1c);
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 0xc);
      *(int **)(iVar3 + 0x10) = piVar4;
      piVar4[3] = iVar3;
      *(int **)(iVar2 + 0xc) = piVar4;
      return piVar4;
    }
    *(int **)(param_1 + 0x1c) = piVar4;
    piVar4[3] = (int)piVar4;
    return piVar4;
  }
  return (int *)0x0;
}


/* FUN_004d6fe0 @ 004d6fe0  kind=gamemisc  attributed-by=none  size=64 */

int FUN_004d6fe0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = FUN_004d6e20(param_2,param_3);
  if (iVar3 == 0) {
    return 0;
  }
  *(int *)(iVar3 + 4) = param_1;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14);
    *(int *)(iVar2 + 0x18) = iVar3;
    *(int *)(iVar3 + 0x14) = iVar2;
    *(int *)(iVar1 + 0x14) = iVar3;
    return iVar3;
  }
  *(int *)(param_1 + 0x10) = iVar3;
  *(int *)(iVar3 + 0x14) = iVar3;
  return iVar3;
}


/* FUN_004d7020 @ 004d7020  kind=gamemisc  attributed-by=none  size=128 */

void FUN_004d7020(int *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  int *in_ECX;
  ushort *puVar5;
  bool bVar6;
  
  if (*in_ECX == 0) {
    *param_1 = 0;
    return;
  }
  iVar2 = *(int *)(*in_ECX + 0x1c);
  do {
    if (iVar2 == 0) {
      *param_1 = 0;
      return;
    }
    puVar3 = *(ushort **)(iVar2 + 4);
    puVar5 = param_2;
    if (puVar3 != (ushort *)0x0) {
      do {
        uVar1 = *puVar5;
        bVar6 = uVar1 < *puVar3;
        if (uVar1 != *puVar3) {
LAB_004d7076:
          uVar4 = -(uint)bVar6 | 1;
          goto LAB_004d707b;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar5[1];
        bVar6 = uVar1 < puVar3[1];
        if (uVar1 != puVar3[1]) goto LAB_004d7076;
        puVar3 = puVar3 + 2;
        puVar5 = puVar5 + 2;
      } while (uVar1 != 0);
      uVar4 = 0;
LAB_004d707b:
      if (uVar4 == 0) {
        *param_1 = iVar2;
        return;
      }
    }
    iVar2 = *(int *)(iVar2 + 0x10);
  } while( true );
}


/* FUN_004d70a0 @ 004d70a0  kind=gamemisc  attributed-by=none  size=38 */

void FUN_004d70a0(undefined4 *param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  if (iVar1 != 0) {
    *param_1 = *(undefined4 *)(iVar1 + 0x10);
    param_1[1] = iVar1;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


/* FUN_004d70d0 @ 004d70d0  kind=gamemisc  attributed-by=none  size=128 */

void FUN_004d70d0(int *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  int *in_ECX;
  ushort *puVar5;
  bool bVar6;
  
  if (*in_ECX == 0) {
    *param_1 = 0;
    return;
  }
  iVar2 = *(int *)(*in_ECX + 0x10);
  do {
    if (iVar2 == 0) {
      *param_1 = 0;
      return;
    }
    puVar3 = *(ushort **)(iVar2 + 8);
    puVar5 = param_2;
    if (puVar3 != (ushort *)0x0) {
      do {
        uVar1 = *puVar5;
        bVar6 = uVar1 < *puVar3;
        if (uVar1 != *puVar3) {
LAB_004d7126:
          uVar4 = -(uint)bVar6 | 1;
          goto LAB_004d712b;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar5[1];
        bVar6 = uVar1 < puVar3[1];
        if (uVar1 != puVar3[1]) goto LAB_004d7126;
        puVar3 = puVar3 + 2;
        puVar5 = puVar5 + 2;
      } while (uVar1 != 0);
      uVar4 = 0;
LAB_004d712b:
      if (uVar4 == 0) {
        *param_1 = iVar2;
        return;
      }
    }
    iVar2 = *(int *)(iVar2 + 0x18);
  } while( true );
}


/* FUN_004d7150 @ 004d7150  kind=gamemisc  attributed-by=none  size=54 */

undefined ** FUN_004d7150(void)

{
  uint *puVar1;
  int *in_ECX;
  
  if (*in_ECX != 0) {
    for (puVar1 = *(uint **)(*in_ECX + 0x10); puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[6]) {
      if ((puVar1[3] != 0) && (((*puVar1 & 7) == 3 || ((*puVar1 & 7) == 4)))) {
        return (undefined **)puVar1[3];
      }
    }
  }
  return &PTR_006fccac;
}


/* FUN_004d7190 @ 004d7190  kind=gamemisc  attributed-by=none  size=175 */

uint FUN_004d7190(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  
  if (param_3 == 2) {
    uVar1 = FUN_004d79f0(param_1,param_2,param_4,param_5,param_6);
    return uVar1;
  }
  if (param_3 == 3) {
    uVar1 = FUN_004d7240(param_1,param_2,param_4,param_5,param_6);
    return uVar1;
  }
  if (param_3 != 5) {
    if (param_3 == 1) {
      uVar1 = FUN_004d72a0(param_1,param_2,param_4,param_5);
      return uVar1;
    }
    if (param_3 == 6) {
      uVar1 = FUN_004d6cb0(param_1,param_2,param_4,param_5,0);
      return uVar1;
    }
    if (param_3 != 5) {
      return param_3 & 0xffffff00;
    }
  }
  param_3 = param_3 & 0xffffff00;
  uVar1 = FUN_004d6c40(param_1,param_2,param_4,param_5,param_3);
  return uVar1;
}


/* FUN_004d72a0 @ 004d72a0  kind=gamemisc  attributed-by=none  size=77 */

undefined4 FUN_004d72a0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004d74f0(param_3,param_4,0);
  iVar2 = 1;
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  *param_2 = iVar1;
  iVar2 = (*(code *)PTR_FUN_007663ac)(iVar2 * 2);
  *param_1 = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  FUN_004d75f0(param_3,param_4,iVar2);
  return 1;
}


/* FUN_004d72f0 @ 004d72f0  kind=gamemisc  attributed-by=none  size=174 */

void FUN_004d72f0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  FUN_004d77d0();
  puVar5 = (undefined4 *)((int)in_ECX + 0x27U & 0xffffffe0);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
  }
  puVar3 = puVar5 + 6;
  puVar5[4] = 0x8000;
  if (puVar3 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    *puVar3 = (uint)puVar5 | 1;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
  }
  *in_ECX = (int)puVar3;
  puVar3[5] = (uint)puVar3;
  iVar1 = *in_ECX;
  uVar2 = puVar5[4];
  puVar4 = (undefined4 *)(iVar1 + 0x20);
  *puVar4 = puVar5;
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  *puVar5 = puVar4;
  return;
}


/* FUN_004d73a0 @ 004d73a0  kind=gamemisc  attributed-by=none  size=94 */

int FUN_004d73a0(uint *param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = param_1 + param_2;
  if (puVar1 <= param_1) {
    return param_3;
  }
  do {
    uVar2 = *param_1;
    if (((uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8 | (uVar2 & 0xff00 | uVar2 << 0x10) << 8) < 0x10000)
    {
      param_3 = param_3 + 1;
    }
    else {
      param_3 = param_3 + 2;
    }
    param_1 = param_1 + 1;
  } while (param_1 < puVar1);
  return param_3;
}


/* FUN_004d7400 @ 004d7400  kind=gamemisc  attributed-by=none  size=92 */

ushort * FUN_004d7400(uint *param_1,int param_2,ushort *param_3)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = param_1 + param_2;
  if (puVar1 <= param_1) {
    return param_3;
  }
  do {
    uVar2 = *param_1;
    if (uVar2 < 0x10000) {
      *param_3 = (ushort)uVar2;
      param_3 = param_3 + 1;
    }
    else {
      *param_3 = (short)(uVar2 - 0x10000 >> 10) + 0xd800;
      param_3[1] = ((ushort)uVar2 & 0x3ff) + 0xdc00;
      param_3 = param_3 + 2;
    }
    param_1 = param_1 + 1;
  } while (param_1 < puVar1);
  return param_3;
}


/* FUN_004d7460 @ 004d7460  kind=gamemisc  attributed-by=none  size=130 */

ushort * FUN_004d7460(uint *param_1,int param_2,ushort *param_3)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = param_1 + param_2;
  if (puVar1 <= param_1) {
    return param_3;
  }
  do {
    uVar4 = *param_1;
    uVar3 = uVar4 & 0xff0000 | uVar4 >> 0x10;
    uVar4 = uVar3 >> 8 | (uVar4 & 0xff00 | uVar4 << 0x10) << 8;
    uVar2 = (ushort)(uVar3 >> 8);
    if (uVar4 < 0x10000) {
      *param_3 = uVar2;
      param_3 = param_3 + 1;
    }
    else {
      *param_3 = (short)(uVar4 - 0x10000 >> 10) + 0xd800;
      param_3[1] = (uVar2 & 0x3ff) + 0xdc00;
      param_3 = param_3 + 2;
    }
    param_1 = param_1 + 1;
  } while (param_1 < puVar1);
  return param_3;
}


/* FUN_004d74f0 @ 004d74f0  kind=gamemisc  attributed-by=none  size=247 */

int FUN_004d74f0(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return param_3;
  }
  do {
    if ((byte)*param_1 < 0x80) {
      param_1 = (uint *)((int)param_1 + 1);
      param_3 = param_3 + 1;
      param_2 = param_2 - 1;
      if (((uint)param_1 & 3) == 0) {
        for (; (3 < param_2 && ((*param_1 & 0x80808080) == 0)); param_1 = param_1 + 1) {
          param_2 = param_2 - 4;
          param_3 = param_3 + 4;
        }
      }
    }
    else {
      uVar1 = (uint)(byte)*param_1;
      if (((uVar1 - 0xc0 < 0x20) && (1 < param_2)) && ((*param_1 & 0xc000) == 0x8000)) {
        param_3 = param_3 + 1;
        param_1 = (uint *)((int)param_1 + 2);
        param_2 = param_2 - 2;
      }
      else if (((uVar1 - 0xe0 < 0x10) && (2 < param_2)) &&
              (((*param_1 & 0xc000) == 0x8000 && ((*param_1 & 0xc00000) == 0x800000)))) {
        param_3 = param_3 + 1;
        param_1 = (uint *)((int)param_1 + 3);
        param_2 = param_2 - 3;
      }
      else if (((uVar1 - 0xf0 < 8) && (3 < param_2)) &&
              (((*param_1 & 0xc000) == 0x8000 &&
               (((*param_1 & 0xc00000) == 0x800000 && ((*param_1 & 0xc0000000) == 0x80000000)))))) {
        param_3 = param_3 + 2;
        param_1 = param_1 + 1;
        param_2 = param_2 - 4;
      }
      else {
        param_1 = (uint *)((int)param_1 + 1);
        param_2 = param_2 - 1;
      }
    }
  } while (param_2 != 0);
  return param_3;
}


/* FUN_004d75f0 @ 004d75f0  kind=gamemisc  attributed-by=none  size=464 */

void FUN_004d75f0(uint *param_1,uint param_2,ushort *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            if (param_2 == 0) {
              return;
            }
            bVar1 = (byte)*param_1;
            if (0x7f < bVar1) break;
            *param_3 = (ushort)bVar1;
            param_1 = (uint *)((int)param_1 + 1);
            param_3 = param_3 + 1;
            param_2 = param_2 - 1;
            if (((uint)param_1 & 3) == 0) {
              for (; (3 < param_2 && ((*param_1 & 0x80808080) == 0)); param_1 = param_1 + 1) {
                *param_3 = (ushort)(byte)*param_1;
                param_3[1] = (ushort)*(byte *)((int)param_1 + 1);
                param_3[2] = (ushort)*(byte *)((int)param_1 + 2);
                param_3[3] = (ushort)*(byte *)((int)param_1 + 3);
                param_2 = param_2 - 4;
                param_3 = param_3 + 4;
              }
            }
          }
          uVar3 = (uint)bVar1;
          if (((0x1f < uVar3 - 0xc0) || (param_2 < 2)) ||
             (uVar2 = CONCAT11(*(byte *)((int)param_1 + 1),*(byte *)((int)param_1 + 1)) & 0xffffffc0
             , (char)uVar2 != -0x80)) break;
          *param_3 = (bVar1 & 0x3f) << 6 | (ushort)((byte)(uVar2 >> 8) & 0x3f);
          param_1 = (uint *)((int)param_1 + 2);
          param_2 = param_2 - 2;
          param_3 = param_3 + 1;
        }
        if (((0xf < uVar3 - 0xe0) || (param_2 < 3)) ||
           ((uVar2 = CONCAT11(*(byte *)((int)param_1 + 1),*(byte *)((int)param_1 + 1)) & 0xffffffc0,
            (char)uVar2 != -0x80 ||
            (uVar2 = CONCAT31((int3)(uVar2 >> 8),*(byte *)((int)param_1 + 2)) & 0xffffffc0,
            (char)uVar2 != -0x80)))) break;
        *param_3 = ((CONCAT11((char)(uVar2 >> 8),bVar1) & 0x3fff) >> 8 | (ushort)bVar1 << 6) << 6 |
                   (ushort)(*(byte *)((int)param_1 + 2) & 0x3f);
        param_1 = (uint *)((int)param_1 + 3);
        param_2 = param_2 - 3;
        param_3 = param_3 + 1;
      }
      if (((uVar3 - 0xf0 < 8) && (3 < param_2)) && ((*(byte *)((int)param_1 + 1) & 0xc0) == 0x80))
      break;
LAB_004d77b8:
      param_1 = (uint *)((int)param_1 + 1);
      param_2 = param_2 - 1;
    }
    if (((*(byte *)((int)param_1 + 2) & 0xc0) != 0x80) ||
       ((*(byte *)((int)param_1 + 3) & 0xc0) != 0x80)) goto LAB_004d77b8;
    uVar2 = *(byte *)((int)param_1 + 3) & 0x3f;
    uVar3 = (((uVar3 & 0xffffff0f) << 6 | *(byte *)((int)param_1 + 1) & 0x3f) << 6 |
            *(byte *)((int)param_1 + 2) & 0x3f) << 6;
    *param_3 = (short)((uVar3 | uVar2) - 0x10000 >> 10) + 0xd800;
    param_3[1] = ((ushort)uVar3 & 0x3ff | (ushort)uVar2) + 0xdc00;
    param_1 = param_1 + 1;
    param_2 = param_2 - 4;
    param_3 = param_3 + 2;
  } while( true );
}


/* FUN_004d77d0 @ 004d77d0  kind=gamemisc  attributed-by=none  size=106 */

void FUN_004d77d0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  undefined4 *puVar3;
  
  if (in_ECX[1] != 0) {
    (*(code *)PTR_free_007663b0)(in_ECX[1]);
    in_ECX[1] = 0;
  }
  if ((uint *)*in_ECX != (uint *)0x0) {
    puVar3 = (undefined4 *)(*(uint *)*in_ECX & 0xffffffe0);
    iVar2 = puVar3[3];
    while (iVar2 != 0) {
      puVar1 = (undefined4 *)(iVar2 + 4);
      iVar2 = *(int *)(iVar2 + 0xc);
      (*(code *)PTR_free_007663b0)(*puVar1);
    }
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    *in_ECX = 0;
  }
  return;
}


/* FUN_004d7840 @ 004d7840  kind=gamemisc  attributed-by=none  size=21 */

void FUN_004d7840(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  uVar1 = *in_ECX;
  *param_1 = 0;
  param_1[1] = uVar1;
  return;
}


/* FUN_004d7860 @ 004d7860  kind=gamemisc  attributed-by=none  size=52 */

void FUN_004d7860(undefined4 *param_1)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    *param_1 = *(undefined4 *)(*in_ECX + 0x10);
    return;
  }
  *param_1 = 0;
  return;
}


/* FUN_004d78a0 @ 004d78a0  kind=gamemisc  attributed-by=none  size=336 */

int FUN_004d78a0(int param_1,char *param_2,uint param_3)

{
  char cVar1;
  
  if ((param_1 == 8) || (param_1 == 4)) {
    return 2;
  }
  if (param_1 == 7) {
    return 5;
  }
  if (param_1 != 0) {
    return param_1;
  }
  if (4 < param_3) {
    if ((((*param_2 == '\0') && (param_2[1] == '\0')) && (param_2[2] == -2)) && (param_2[3] == -1))
    {
      return 6;
    }
    if (((*param_2 == -1) && (param_2[1] == -2)) && ((param_2[2] == '\0' && (param_2[3] == '\0'))))
    {
      return 5;
    }
  }
  if (2 < param_3) {
    if ((*param_2 == -2) && (param_2[1] == -1)) {
      return 3;
    }
    if ((*param_2 == -1) && (param_2[1] == -2)) {
      return 2;
    }
  }
  if ((((param_3 < 4) || (*param_2 != -0x11)) || (param_2[1] != -0x45)) || (param_2[2] != -0x41)) {
    if (4 < param_3) {
      cVar1 = *param_2;
      if (((cVar1 == '\0') && (param_2[1] == '\0')) && ((param_2[2] == '\0' && (param_2[3] == '<')))
         ) {
        return 6;
      }
      if (((cVar1 == '<') && (param_2[1] == '\0')) && ((param_2[2] == '\0' && (param_2[3] == '\0')))
         ) {
        return 5;
      }
      if ((((cVar1 == '\0') && (param_2[1] == '<')) && (param_2[2] == '\0')) && (param_2[3] == '?'))
      {
        return 3;
      }
      if (cVar1 == '<') {
        if (((param_2[1] == '\0') && (param_2[2] == '?')) && (param_2[3] == '\0')) {
          return 2;
        }
        if (((param_2[1] == '?') && (param_2[2] == 'x')) && (param_2[3] == 'm')) {
          return 1;
        }
      }
    }
    if (2 < param_3) {
      if ((*param_2 == '\0') && (param_2[1] == '<')) {
        return 3;
      }
      if ((*param_2 == '<') && (param_2[1] == '\0')) {
        return 2;
      }
    }
  }
  return 1;
}


/* FUN_004d79f0 @ 004d79f0  kind=gamemisc  attributed-by=none  size=98 */

undefined4 FUN_004d79f0(undefined4 *param_1,uint *param_2,void *param_3,uint param_4,char param_5)

{
  uint uVar1;
  void *_Dst;
  
  if (param_5 != '\0') {
    *param_1 = param_3;
    *param_2 = param_4 >> 1;
    return 1;
  }
  uVar1 = 1;
  if (param_4 != 0) {
    uVar1 = param_4;
  }
  _Dst = (void *)(*(code *)PTR_FUN_007663ac)(uVar1);
  if (_Dst == (void *)0x0) {
    return 0;
  }
  memcpy(_Dst,param_3,param_4);
  *param_1 = _Dst;
  *param_2 = param_4 >> 1;
  return 1;
}


/* FUN_004d7a60 @ 004d7a60  kind=gamemisc  attributed-by=none  size=84 */

code * FUN_004d7a60(uint param_1)

{
  switch(param_1 >> 4 & 0xf) {
  case 0:
    return FUN_004d8ef0;
  case 1:
    return FUN_004d8f40;
  case 2:
    return FUN_004d8750;
  case 3:
    return FUN_004d8810;
  case 4:
  case 6:
    return FUN_004d9000;
  case 5:
  case 7:
    return FUN_004d90d0;
  case 8:
  case 10:
  case 0xc:
  case 0xe:
    return FUN_004d91d0;
  case 9:
  case 0xb:
  case 0xd:
  case 0xf:
    return FUN_004d9340;
  default:
    return (code *)0x0;
  }
}


/* FUN_004d7b00 @ 004d7b00  kind=gamemisc  attributed-by=none  size=179 */

void FUN_004d7b00(undefined8 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined4 *in_ECX;
  undefined1 local_10 [12];
  
  FUN_004d72f0();
  uVar4 = param_3;
  iVar2 = param_2;
  param_5 = FUN_004d78a0(param_5,param_2,param_3);
  param_2 = 0;
  param_3 = 0;
  cVar5 = FUN_004d7190(&param_2,&param_3,param_5,iVar2,uVar4,0);
  iVar3 = param_2;
  if (cVar5 == '\0') {
    *param_1 = 3;
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  puVar6 = (undefined8 *)FUN_004d8410(local_10,param_2,param_3,*in_ECX,param_4);
  uVar1 = *puVar6;
  if (iVar3 != iVar2) {
    in_ECX[1] = iVar3;
  }
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 1) = param_5;
  return;
}


/* FUN_004d7bc0 @ 004d7bc0  kind=gamemisc  attributed-by=none  size=19 */

undefined ** FUN_004d7bc0(void)

{
  undefined **ppuVar1;
  int *in_ECX;
  
  if ((*in_ECX == 0) || (ppuVar1 = *(undefined ***)(*in_ECX + 8), ppuVar1 == (undefined **)0x0)) {
    ppuVar1 = &PTR_006fccac;
  }
  return ppuVar1;
}


/* FUN_004d7ce0 @ 004d7ce0  kind=gamemisc  attributed-by=none  size=217 */

ushort * FUN_004d7ce0(ushort *param_1)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *_Src;
  ushort *puVar4;
  int iVar5;
  ushort *local_c;
  int local_8;
  
  _Src = (ushort *)0x0;
  iVar5 = 0;
  local_c = _Src;
  local_8 = iVar5;
  while( true ) {
    while( true ) {
      puVar4 = param_1;
      if (*puVar4 < 0x80) {
        bVar2 = (&DAT_00703680)[*puVar4];
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
        local_c = _Src;
        local_8 = iVar5;
      }
    }
    else if (uVar1 == 0x26) {
      param_1 = (ushort *)FUN_004d96f0(puVar4,&local_c);
      _Src = local_c;
      iVar5 = local_8;
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


/* FUN_004d7e70 @ 004d7e70  kind=gamemisc  attributed-by=none  size=1415 */

void FUN_004d7e70(ushort *param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  ushort uVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  code *pcVar5;
  int iVar6;
  ushort *puVar7;
  int in_ECX;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  code *local_c;
  undefined4 *local_8;
  
  uVar8 = param_3;
  pcVar5 = (code *)FUN_004d7a60(param_3);
  switch(uVar8 >> 4 & 3) {
  case 0:
    local_c = FUN_004d7be0;
    break;
  case 1:
    local_c = FUN_004d7c30;
    break;
  case 2:
    local_c = FUN_004d7dc0;
    break;
  case 3:
    local_c = FUN_004d7ce0;
    break;
  default:
    local_c = (code *)0x0;
  }
  uVar4 = *param_1;
  local_8 = param_2;
  puVar10 = param_1;
  puVar12 = param_2;
  if (uVar4 != 0) {
    do {
      puVar7 = puVar10;
      if (uVar4 == 0x3c) {
LAB_004d7fb6:
        puVar10 = puVar10 + 1;
LAB_004d7fbc:
        uVar8 = (uint)*puVar10;
        if (*puVar10 < 0x80) {
          cVar3 = (&DAT_00703680)[uVar8];
        }
        else {
          cVar3 = -0x40;
        }
        param_1 = puVar10;
        if (cVar3 < '\0') {
          local_8 = (undefined4 *)FUN_004d6fe0(puVar12,in_ECX,2);
          if (local_8 == (undefined4 *)0x0) {
LAB_004d83b7:
                    /* WARNING: Subroutine does not return */
            longjmp((int *)(in_ECX + 8),3);
          }
          local_8[2] = puVar10;
          while( true ) {
            if (*puVar10 < 0x80) {
              bVar2 = (&DAT_00703680)[*puVar10];
            }
            else {
              bVar2 = 0xc0;
            }
            if ((bVar2 & 0x40) == 0) break;
            puVar10 = puVar10 + 1;
          }
          uVar4 = *puVar10;
          uVar8 = (uint)uVar4;
          *puVar10 = 0;
          puVar7 = puVar10 + 1;
          puVar12 = local_8;
          if (uVar8 != 0x3e) {
            if (uVar4 < 0x80) {
              bVar2 = (&DAT_00703680)[uVar8];
            }
            else {
              bVar2 = 0;
            }
            puVar11 = local_8;
            if ((bVar2 & 8) == 0) {
              if (uVar8 == 0x2f) {
                uVar4 = *puVar7;
                if ((uVar4 != 0x3e) && ((puVar9 = puVar7, uVar4 != 0 || ((ushort)param_4 != 0x3e))))
                goto LAB_004d808c;
                puVar7 = puVar7 + (uVar4 == 0x3e);
                puVar12 = (undefined4 *)local_8[1];
                local_8 = (undefined4 *)local_8[1];
              }
              else {
joined_r0x004d830b:
                puVar9 = puVar7;
                if ((uVar4 != 0) ||
                   (puVar7 = puVar10, puVar9 = puVar10, puVar12 = puVar11, (ushort)param_4 != 0x3e))
                {
LAB_004d808c:
                  *(ushort **)(in_ECX + 0x48) = puVar9;
                    /* WARNING: Subroutine does not return */
                  longjmp((int *)(in_ECX + 8),0xb);
                }
              }
            }
            else {
LAB_004d8180:
              while( true ) {
                while( true ) {
                  if (*puVar7 < 0x80) {
                    bVar2 = (&DAT_00703680)[*puVar7];
                  }
                  else {
                    bVar2 = 0;
                  }
                  if ((bVar2 & 8) == 0) break;
                  puVar7 = puVar7 + 1;
                }
                if (*puVar7 < 0x80) {
                  cVar3 = (&DAT_00703680)[*puVar7];
                }
                else {
                  cVar3 = -0x40;
                }
                if (-1 < cVar3) break;
                iVar6 = FUN_004d6f60(puVar11,in_ECX);
                if (iVar6 == 0) {
                  *(undefined4 *)(in_ECX + 0x48) = 0;
                  goto LAB_004d83b7;
                }
                *(ushort **)(iVar6 + 4) = puVar7;
                while( true ) {
                  if (*puVar7 < 0x80) {
                    bVar2 = (&DAT_00703680)[*puVar7];
                  }
                  else {
                    bVar2 = 0xc0;
                  }
                  if ((bVar2 & 0x40) == 0) break;
                  puVar7 = puVar7 + 1;
                }
                uVar4 = *puVar7;
                if (uVar4 == 0) goto LAB_004d838f;
                *puVar7 = 0;
                puVar7 = puVar7 + 1;
                if (*puVar7 == 0) goto LAB_004d838f;
                if (uVar4 < 0x80) {
                  bVar2 = (&DAT_00703680)[uVar4];
                }
                else {
                  bVar2 = 0;
                }
                if ((bVar2 & 8) != 0) {
                  while( true ) {
                    if (*puVar7 < 0x80) {
                      bVar2 = (&DAT_00703680)[*puVar7];
                    }
                    else {
                      bVar2 = 0;
                    }
                    if ((bVar2 & 8) == 0) break;
                    puVar7 = puVar7 + 1;
                  }
                  uVar4 = *puVar7;
                  if (uVar4 == 0) goto LAB_004d838f;
                  puVar7 = puVar7 + 1;
                }
                if (uVar4 != 0x3d) goto LAB_004d838f;
                while( true ) {
                  if (*puVar7 < 0x80) {
                    bVar2 = (&DAT_00703680)[*puVar7];
                  }
                  else {
                    bVar2 = 0;
                  }
                  if ((bVar2 & 8) == 0) break;
                  puVar7 = puVar7 + 1;
                }
                uVar4 = *puVar7;
                if ((uVar4 != 0x22) && (uVar4 != 0x27)) goto LAB_004d838f;
                *(ushort **)(iVar6 + 8) = puVar7 + 1;
                puVar7 = (ushort *)(*pcVar5)(puVar7 + 1,uVar4);
                if (puVar7 == (ushort *)0x0) {
                  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(iVar6 + 8);
                    /* WARNING: Subroutine does not return */
                  longjmp((int *)(in_ECX + 8),0xc);
                }
                if (*puVar7 < 0x80) {
                  cVar3 = (&DAT_00703680)[*puVar7];
                }
                else {
                  cVar3 = -0x40;
                }
                puVar11 = local_8;
                if (cVar3 < '\0') {
LAB_004d838f:
                  *(ushort **)(in_ECX + 0x48) = puVar7;
                    /* WARNING: Subroutine does not return */
                  longjmp((int *)(in_ECX + 8),0xc);
                }
              }
              uVar4 = *puVar7;
              if (uVar4 == 0x2f) {
                puVar9 = puVar7 + 1;
                if (puVar7[1] == 0x3e) {
                  puVar7 = puVar7 + 2;
                  puVar12 = (undefined4 *)puVar11[1];
                  local_8 = (undefined4 *)puVar11[1];
                }
                else {
                  if ((puVar7[1] != 0) || ((ushort)param_4 != 0x3e)) goto LAB_004d808c;
                  puVar7 = puVar9;
                  puVar12 = (undefined4 *)puVar11[1];
                  local_8 = (undefined4 *)puVar11[1];
                }
              }
              else {
                puVar10 = puVar7;
                if (uVar4 != 0x3e) goto joined_r0x004d830b;
                puVar7 = puVar7 + 1;
                puVar12 = puVar11;
              }
            }
          }
        }
        else if (uVar8 == 0x2f) {
          puVar9 = (ushort *)puVar12[2];
          puVar7 = puVar10 + 1;
          if (puVar9 == (ushort *)0x0) {
LAB_004d80db:
            *(ushort **)(in_ECX + 0x48) = puVar7;
                    /* WARNING: Subroutine does not return */
            longjmp((int *)(in_ECX + 8),0xe);
          }
          while( true ) {
            uVar4 = *puVar7;
            if (uVar4 < 0x80) {
              bVar2 = (&DAT_00703680)[uVar4];
            }
            else {
              bVar2 = 0xc0;
            }
            if ((bVar2 & 0x40) == 0) break;
            uVar1 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar7 = puVar7 + 1;
            if (uVar4 != uVar1) goto LAB_004d80db;
          }
          if (*puVar9 != 0) {
            if (((*puVar7 == 0) && (*puVar9 == (ushort)param_4)) && (puVar9[1] == 0))
            goto LAB_004d8380;
            goto LAB_004d80db;
          }
          puVar12 = (undefined4 *)puVar12[1];
          while( true ) {
            if (*puVar7 < 0x80) {
              bVar2 = (&DAT_00703680)[*puVar7];
            }
            else {
              bVar2 = 0;
            }
            if ((bVar2 & 8) == 0) break;
            puVar7 = puVar7 + 1;
          }
          local_8 = puVar12;
          if (*puVar7 == 0) {
            if ((ushort)param_4 != 0x3e) {
LAB_004d8380:
              *(ushort **)(in_ECX + 0x48) = puVar7;
                    /* WARNING: Subroutine does not return */
              longjmp((int *)(in_ECX + 8),0xd);
            }
          }
          else {
            if (*puVar7 != 0x3e) goto LAB_004d8380;
            puVar7 = puVar7 + 1;
          }
        }
        else if (uVar8 == 0x3f) {
          FUN_004d8c70(&param_1,&local_8,param_3,param_4);
          puVar7 = param_1;
          puVar12 = local_8;
          if ((local_8 != (undefined4 *)0x0) && (puVar11 = local_8, ((byte)*local_8 & 7) == 7))
          goto LAB_004d8180;
        }
        else {
          if (uVar8 != 0x21) {
            if ((*puVar10 == 0) && ((ushort)param_4 == 0x3f)) {
              *(ushort **)(in_ECX + 0x48) = puVar10;
                    /* WARNING: Subroutine does not return */
              longjmp((int *)(in_ECX + 8),6);
            }
            *(ushort **)(in_ECX + 0x48) = puVar10;
                    /* WARNING: Subroutine does not return */
            longjmp((int *)(in_ECX + 8),5);
          }
          FUN_004d8900(&param_1,puVar12,param_3,param_4);
          puVar7 = param_1;
        }
      }
      else {
        while( true ) {
          if (*puVar7 < 0x80) {
            bVar2 = (&DAT_00703680)[*puVar7];
          }
          else {
            bVar2 = 0;
          }
          if ((bVar2 & 8) == 0) break;
          puVar7 = puVar7 + 1;
        }
        if (((param_3 & 8) != 0) && (puVar10 != puVar7)) {
LAB_004d7f2e:
          if (puVar12[1] == 0) {
            uVar4 = *puVar10;
            puVar7 = puVar10;
            if (uVar4 != 0) {
              while (puVar7 = puVar10, uVar4 != 0x3c) {
                uVar4 = puVar10[1];
                puVar7 = puVar10 + 1;
                puVar10 = puVar7;
                if (uVar4 == 0) goto LAB_004d7f92;
              }
            }
            puVar10 = puVar7;
            if (*puVar7 != 0) goto LAB_004d7fb6;
          }
          else {
            iVar6 = FUN_004d6fe0(puVar12,in_ECX,3);
            if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              longjmp((int *)(in_ECX + 8),3);
            }
            *(ushort **)(iVar6 + 0xc) = puVar10;
            puVar7 = (ushort *)(*local_c)(puVar10);
            puVar12 = *(undefined4 **)(iVar6 + 4);
            puVar10 = puVar7;
            param_1 = puVar7;
            local_8 = puVar12;
            if (*puVar7 != 0) goto LAB_004d7fbc;
          }
          break;
        }
        if (*puVar7 != 0x3c) {
          if (*puVar7 != 0) goto LAB_004d7f2e;
          break;
        }
      }
      uVar4 = *puVar7;
      puVar10 = puVar7;
    } while (uVar4 != 0);
LAB_004d7f92:
    if (puVar12 != param_2) {
      *(ushort **)(in_ECX + 0x48) = puVar7;
                    /* WARNING: Subroutine does not return */
      longjmp((int *)(in_ECX + 8),0xe);
    }
  }
  return;
}


/* FUN_004d8410 @ 004d8410  kind=gamemisc  attributed-by=none  size=241 */

void FUN_004d8410(undefined8 *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 local_4c [64];
  int local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  *(int *)(param_4 + 0x28) = param_2;
  if (param_3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_4 + 0x20);
    uVar3 = *(undefined4 *)(param_4 + 0x24);
    local_c = 0;
    sVar1 = *(short *)(param_2 + -2 + param_3 * 2);
    *(undefined2 *)(param_2 + -2 + param_3 * 2) = 0;
    iVar4 = setjmp3(local_4c,0);
    if (iVar4 == 0) {
      FUN_004d7e70(param_2,param_4,param_5,sVar1);
    }
    if (local_c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = local_c - param_2 >> 1;
    }
    *(undefined4 *)(param_4 + 0x20) = uVar2;
    *(undefined4 *)(param_4 + 0x24) = uVar3;
    if ((iVar4 == 0) && (sVar1 == 0x3c)) {
      uVar6 = CONCAT44(param_3,5);
    }
    else {
      uVar6 = CONCAT44(iVar5,iVar4);
    }
  }
  *param_1 = uVar6;
  *(undefined4 *)(param_1 + 1) = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004d8510 @ 004d8510  kind=gamemisc  attributed-by=none  size=166 */

void FUN_004d8510(int *param_1,undefined4 param_2,char param_3)

{
  short sVar1;
  short *psVar2;
  int in_ECX;
  
  *param_1 = *param_1 + 2;
  sVar1 = *(short *)*param_1;
  do {
    if (sVar1 == 0) {
      if ((param_3 != '\0') && ((short)param_2 == 0x3e)) {
        return;
      }
      *(int *)(in_ECX + 0x48) = *param_1;
                    /* WARNING: Subroutine does not return */
      longjmp((int *)(in_ECX + 8),9);
    }
    psVar2 = (short *)*param_1;
    sVar1 = *psVar2;
    if (sVar1 == 0x3c) {
      if ((psVar2[1] == 0x21) && (psVar2[2] != 0x2d)) {
        if (psVar2[2] == 0x5b) {
          FUN_004d85c0(param_1);
        }
        else {
          FUN_004d8510(param_1,param_2,0);
        }
      }
      else {
LAB_004d857f:
        FUN_004d8630(param_1);
      }
    }
    else {
      if ((sVar1 == 0x22) || (sVar1 == 0x27)) goto LAB_004d857f;
      if (sVar1 == 0x3e) {
        *param_1 = *param_1 + 2;
        return;
      }
      *param_1 = (int)(psVar2 + 1);
    }
    sVar1 = *(short *)*param_1;
  } while( true );
}


/* FUN_004d85c0 @ 004d85c0  kind=gamemisc  attributed-by=none  size=112 */

void FUN_004d85c0(int *param_1)

{
  short sVar1;
  short *psVar2;
  int in_ECX;
  
  *param_1 = *param_1 + 2;
  sVar1 = *(short *)*param_1;
  do {
    if (sVar1 == 0) {
      *(int *)(in_ECX + 0x48) = *param_1;
                    /* WARNING: Subroutine does not return */
      longjmp((int *)(in_ECX + 8),9);
    }
    psVar2 = (short *)*param_1;
    if (((*psVar2 == 0x3c) && (psVar2[1] == 0x21)) && (psVar2[2] == 0x5b)) {
      FUN_004d85c0(param_1);
    }
    else {
      if (((*psVar2 == 0x5d) && (psVar2[1] == 0x5d)) && (psVar2[2] == 0x3e)) {
        *param_1 = *param_1 + 6;
        return;
      }
      *param_1 = (int)(psVar2 + 1);
    }
    sVar1 = *(short *)*param_1;
  } while( true );
}


/* FUN_004d8630 @ 004d8630  kind=gamemisc  attributed-by=none  size=275 */

void FUN_004d8630(undefined4 *param_1)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int in_ECX;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  if ((sVar1 == 0x22) || (sVar1 == 0x27)) {
    psVar3 = psVar3 + 1;
    *param_1 = psVar3;
    sVar2 = *psVar3;
    while ((sVar2 != 0 && (*psVar3 != sVar1))) {
      psVar3 = psVar3 + 1;
      *param_1 = psVar3;
      sVar2 = *psVar3;
    }
    psVar3 = (short *)*param_1;
    if (*psVar3 != 0) {
      *param_1 = psVar3 + 1;
      return;
    }
    *(short **)(in_ECX + 0x48) = psVar3;
                    /* WARNING: Subroutine does not return */
    longjmp((int *)(in_ECX + 8),9);
  }
  if (sVar1 == 0x3c) {
    if (psVar3[1] == 0x3f) {
      *param_1 = psVar3 + 2;
      sVar1 = psVar3[2];
      while ((sVar1 != 0 && ((psVar3 = (short *)*param_1, *psVar3 != 0x3f || (psVar3[1] != 0x3e)))))
      {
        *param_1 = psVar3 + 1;
        sVar1 = psVar3[1];
      }
      psVar3 = (short *)*param_1;
      if (*psVar3 != 0) {
        *param_1 = psVar3 + 2;
        return;
      }
    }
    else if (((psVar3[1] == 0x21) && (psVar3[2] == 0x2d)) && (psVar3[3] == 0x2d)) {
      *param_1 = psVar3 + 4;
      sVar1 = psVar3[4];
      while ((sVar1 != 0 &&
             (((psVar3 = (short *)*param_1, *psVar3 != 0x2d || (psVar3[1] != 0x2d)) ||
              (psVar3[2] != 0x3e))))) {
        *param_1 = psVar3 + 1;
        sVar1 = psVar3[1];
      }
      psVar3 = (short *)*param_1;
      if (*psVar3 != 0) {
        *param_1 = psVar3 + 4;
        return;
      }
      *(short **)(in_ECX + 0x48) = psVar3;
                    /* WARNING: Subroutine does not return */
      longjmp((int *)(in_ECX + 8),9);
    }
  }
  *(short **)(in_ECX + 0x48) = psVar3;
                    /* WARNING: Subroutine does not return */
  longjmp((int *)(in_ECX + 8),9);
}


/* FUN_004d8900 @ 004d8900  kind=gamemisc  attributed-by=none  size=869 */

void FUN_004d8900(int *param_1,int param_2,uint param_3,undefined4 param_4)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  short sVar5;
  int in_ECX;
  short *local_8;
  
  iVar3 = *param_1;
  local_8 = (short *)(iVar3 + 2);
  sVar1 = *local_8;
  sVar5 = (short)param_4;
  if (sVar1 != 0x2d) {
    if (sVar1 == 0x5b) {
      local_8 = (short *)(iVar3 + 4);
      if (((((*(short *)(iVar3 + 4) == 0x43) &&
            (local_8 = (short *)(iVar3 + 6), *(short *)(iVar3 + 6) == 0x44)) &&
           (local_8 = (short *)(iVar3 + 8), *(short *)(iVar3 + 8) == 0x41)) &&
          ((local_8 = (short *)(iVar3 + 10), *(short *)(iVar3 + 10) == 0x54 &&
           (local_8 = (short *)(iVar3 + 0xc), *(short *)(iVar3 + 0xc) == 0x41)))) &&
         (local_8 = (short *)(iVar3 + 0xe), *(short *)(iVar3 + 0xe) == 0x5b)) {
        local_8 = (short *)(iVar3 + 0x10);
        if ((param_3 & 4) != 0) {
          iVar3 = FUN_004d6fe0(param_2);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            longjmp((int *)(in_ECX + 8),3);
          }
          *(short **)(iVar3 + 0xc) = local_8;
          if ((param_3 & 0x20) == 0) {
            sVar1 = *local_8;
            psVar4 = local_8;
            while (local_8 = psVar4, sVar1 != 0) {
              if (((sVar1 == 0x5d) && (psVar4[1] == 0x5d)) &&
                 ((psVar4[2] == 0x3e || ((psVar4[2] == 0 && (sVar5 == 0x3e)))))) {
                if (*psVar4 != 0) {
                  *psVar4 = 0;
                  goto LAB_004d8b8d;
                }
                break;
              }
              psVar4 = psVar4 + 1;
              sVar1 = *psVar4;
            }
          }
          else {
            psVar4 = (short *)FUN_004d9520(local_8,param_4);
            if (psVar4 != (short *)0x0) goto LAB_004d8b93;
            psVar4 = *(short **)(iVar3 + 0xc);
            local_8 = (short *)0x0;
          }
          *(short **)(in_ECX + 0x48) = psVar4;
                    /* WARNING: Subroutine does not return */
          longjmp((int *)(in_ECX + 8),8);
        }
        sVar1 = *local_8;
        psVar4 = local_8;
        while (local_8 = psVar4, sVar1 != 0) {
          if (((sVar1 == 0x5d) && (psVar4[1] == 0x5d)) &&
             ((psVar4[2] == 0x3e || ((psVar4[2] == 0 && (sVar5 == 0x3e)))))) {
            if (*psVar4 != 0) goto LAB_004d8b8d;
            break;
          }
          psVar4 = psVar4 + 1;
          sVar1 = *psVar4;
        }
      }
LAB_004d8c47:
      *(short **)(in_ECX + 0x48) = local_8;
                    /* WARNING: Subroutine does not return */
      longjmp((int *)(in_ECX + 8),8);
    }
    if (((((sVar1 == 0x44) && (*(short *)(iVar3 + 4) == 0x4f)) && (*(short *)(iVar3 + 6) == 0x43))
        && ((*(short *)(iVar3 + 8) == 0x54 && (*(short *)(iVar3 + 10) == 0x59)))) &&
       (*(short *)(iVar3 + 0xc) == 0x50)) {
      if (*(short *)(iVar3 + 0xe) == 0x45) {
        local_8 = (short *)(iVar3 + -2);
        FUN_004d8510(&local_8,param_4,1);
        goto LAB_004d8c19;
      }
      if ((*(short *)(iVar3 + 0xe) == 0) && (sVar5 == 0x45)) {
        *(short **)(in_ECX + 0x48) = local_8;
                    /* WARNING: Subroutine does not return */
        longjmp((int *)(in_ECX + 8),9);
      }
    }
    if (sVar1 == 0) {
      if (sVar5 == 0x2d) goto LAB_004d8c32;
      if (sVar5 == 0x5b) goto LAB_004d8c47;
    }
    *(short **)(in_ECX + 0x48) = local_8;
                    /* WARNING: Subroutine does not return */
    longjmp((int *)(in_ECX + 8),5);
  }
  local_8 = (short *)(iVar3 + 4);
  if (*local_8 == 0x2d) {
    local_8 = (short *)(iVar3 + 6);
    uVar2 = param_3 & 2;
    if (uVar2 != 0) {
      param_2 = FUN_004d6fe0(param_2);
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        longjmp((int *)(in_ECX + 8),3);
      }
      *(short **)(param_2 + 0xc) = local_8;
    }
    if (((param_3 & 0x20) != 0) && (uVar2 != 0)) {
      local_8 = (short *)FUN_004d9600(local_8,param_4);
      if (local_8 == (short *)0x0) {
        *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_2 + 0xc);
                    /* WARNING: Subroutine does not return */
        longjmp((int *)(in_ECX + 8),7);
      }
LAB_004d8c19:
      *param_1 = (int)local_8;
      return;
    }
    sVar1 = *local_8;
    while (sVar1 != 0) {
      if (((sVar1 == 0x2d) && (local_8[1] == 0x2d)) &&
         ((local_8[2] == 0x3e || ((local_8[2] == 0 && (sVar5 == 0x3e)))))) {
        if (*local_8 != 0) {
          if (uVar2 != 0) {
            *local_8 = 0;
          }
          *param_1 = (int)(local_8 + (local_8[2] == 0x3e) + 2);
          return;
        }
        break;
      }
      local_8 = local_8 + 1;
      sVar1 = *local_8;
    }
  }
LAB_004d8c32:
  *(short **)(in_ECX + 0x48) = local_8;
                    /* WARNING: Subroutine does not return */
  longjmp((int *)(in_ECX + 8),7);
LAB_004d8b8d:
  psVar4 = psVar4 + 1;
LAB_004d8b93:
  *param_1 = (int)(psVar4 + (psVar4[1] == 0x3e) + 1);
  return;
}


/* FUN_004d8c70 @ 004d8c70  kind=gamemisc  attributed-by=none  size=631 */

void FUN_004d8c70(int *param_1,int *param_2,uint param_3,short param_4)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int in_ECX;
  undefined4 *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  
  puVar7 = (undefined4 *)*param_2;
  iVar5 = *param_1;
  puVar8 = (ushort *)(iVar5 + 2);
  if (*puVar8 < 0x80) {
    cVar2 = (&DAT_00703680)[*puVar8];
  }
  else {
    cVar2 = -0x40;
  }
  puVar9 = puVar8;
  if (cVar2 < '\0') {
    while( true ) {
      if (*puVar9 < 0x80) {
        bVar3 = (&DAT_00703680)[*puVar9];
      }
      else {
        bVar3 = 0xc0;
      }
      if ((bVar3 & 0x40) == 0) break;
      puVar9 = puVar9 + 1;
    }
    if (*puVar9 == 0) {
      *(ushort **)(in_ECX + 0x48) = puVar9;
                    /* WARNING: Subroutine does not return */
      longjmp((int *)(in_ECX + 8),6);
    }
    if (((((*puVar8 | 0x20) == 0x78) && ((*(ushort *)(iVar5 + 4) | 0x20) == 0x6d)) &&
        ((*(ushort *)(iVar5 + 6) | 0x20) == 0x6c)) && ((ushort *)(iVar5 + 8) == puVar9)) {
      bVar1 = true;
      param_3 = param_3 & 0x100;
    }
    else {
      bVar1 = false;
      param_3 = param_3 & 1;
    }
    if (param_3 == 0) {
      uVar4 = *puVar9;
      do {
        if ((uVar4 == 0x3f) && ((puVar9[1] == 0x3e || ((puVar9[1] == 0 && (param_4 == 0x3e)))))) {
          if (*puVar9 != 0) {
            uVar6 = (puVar9[1] == 0x3e) + 1;
            goto LAB_004d8ed1;
          }
          break;
        }
        uVar4 = puVar9[1];
        puVar9 = puVar9 + 1;
      } while (uVar4 != 0);
    }
    else {
      if (bVar1) {
        if (((byte)*puVar7 & 7) != 1) {
          *(ushort **)(in_ECX + 0x48) = puVar9;
                    /* WARNING: Subroutine does not return */
          longjmp((int *)(in_ECX + 8),6);
        }
        iVar5 = FUN_004d6fe0(puVar7);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          longjmp((int *)(in_ECX + 8),3);
        }
      }
      else {
        iVar5 = FUN_004d6fe0(puVar7);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          longjmp((int *)(in_ECX + 8),3);
        }
      }
      *(ushort **)(iVar5 + 8) = puVar8;
      uVar4 = *puVar9;
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
      if (uVar4 == 0x3f) {
        uVar4 = *puVar9;
        if ((uVar4 != 0x3e) && ((uVar4 != 0 || (param_4 != 0x3e)))) {
          *(ushort **)(in_ECX + 0x48) = puVar9;
                    /* WARNING: Subroutine does not return */
          longjmp((int *)(in_ECX + 8),6);
        }
        puVar7 = *(undefined4 **)(iVar5 + 4);
        uVar6 = (uint)(uVar4 == 0x3e);
LAB_004d8ed1:
        *param_1 = (int)(puVar9 + uVar6);
        *param_2 = (int)puVar7;
        return;
      }
      if (uVar4 < 0x80) {
        bVar3 = (&DAT_00703680)[uVar4];
      }
      else {
        bVar3 = 0;
      }
      if ((bVar3 & 8) != 0) {
        while( true ) {
          if (*puVar9 < 0x80) {
            bVar3 = (&DAT_00703680)[*puVar9];
          }
          else {
            bVar3 = 0;
          }
          if ((bVar3 & 8) == 0) break;
          puVar9 = puVar9 + 1;
        }
        puVar8 = puVar9;
        if (*puVar9 != 0) {
          do {
            if ((*puVar8 == 0x3f) &&
               ((puVar8[1] == 0x3e || ((puVar8[1] == 0 && (param_4 == 0x3e)))))) break;
            puVar8 = puVar8 + 1;
          } while (*puVar8 != 0);
          if (*puVar8 != 0) {
            if (bVar1) {
              *puVar8 = 0x2f;
              *param_1 = (int)puVar9;
              *param_2 = iVar5;
              return;
            }
            *(ushort **)(iVar5 + 0xc) = puVar9;
            puVar7 = *(undefined4 **)(iVar5 + 4);
            *puVar8 = 0;
            puVar9 = puVar8 + 1;
            uVar6 = (uint)(*puVar9 == 0x3e);
            goto LAB_004d8ed1;
          }
        }
        *(ushort **)(in_ECX + 0x48) = puVar8;
                    /* WARNING: Subroutine does not return */
        longjmp((int *)(in_ECX + 8),6);
      }
    }
  }
  *(ushort **)(in_ECX + 0x48) = puVar9;
                    /* WARNING: Subroutine does not return */
  longjmp((int *)(in_ECX + 8),6);
}


/* FUN_004d9520 @ 004d9520  kind=gamemisc  attributed-by=none  size=219 */

ushort * FUN_004d9520(ushort *param_1,short param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *_Src;
  ushort *puVar4;
  int iVar5;
  
  if (*param_1 == 0) {
    return (ushort *)0x0;
  }
  _Src = (ushort *)0x0;
  iVar5 = 0;
  while( true ) {
    while( true ) {
      while( true ) {
        puVar4 = param_1;
        if (*puVar4 < 0x80) {
          bVar2 = (&DAT_00703680)[*puVar4];
        }
        else {
          bVar2 = 0;
        }
        if ((bVar2 & 0x10) != 0) break;
        param_1 = puVar4 + 1;
      }
      uVar1 = *puVar4;
      if (uVar1 != 0xd) break;
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
    if (((uVar1 == 0x5d) && (puVar4[1] == 0x5d)) &&
       ((puVar4[2] == 0x3e || ((puVar4[2] == 0 && (param_2 == 0x3e)))))) break;
    if (uVar1 == 0) {
      return (ushort *)0x0;
    }
    param_1 = puVar4 + 1;
  }
  puVar3 = puVar4;
  if (_Src != (ushort *)0x0) {
    memmove(_Src + -iVar5,_Src,(int)puVar4 - (int)_Src);
    puVar3 = puVar4 + -iVar5;
  }
  *puVar3 = 0;
  return puVar4 + 1;
}


/* FUN_004d9600 @ 004d9600  kind=gamemisc  attributed-by=none  size=232 */

ushort * FUN_004d9600(ushort *param_1,short param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *_Src;
  ushort *puVar4;
  int iVar5;
  
  if (*param_1 == 0) {
    return (ushort *)0x0;
  }
  _Src = (ushort *)0x0;
  iVar5 = 0;
  while( true ) {
    while( true ) {
      while( true ) {
        puVar4 = param_1;
        if (*puVar4 < 0x80) {
          bVar2 = (&DAT_00703680)[*puVar4];
        }
        else {
          bVar2 = 0;
        }
        if ((bVar2 & 0x20) != 0) break;
        param_1 = puVar4 + 1;
      }
      uVar1 = *puVar4;
      if (uVar1 != 0xd) break;
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
    if (((uVar1 == 0x2d) && (puVar4[1] == 0x2d)) &&
       ((puVar4[2] == 0x3e || ((puVar4[2] == 0 && (param_2 == 0x3e)))))) break;
    if (uVar1 == 0) {
      return (ushort *)0x0;
    }
    param_1 = puVar4 + 1;
  }
  puVar3 = puVar4;
  if (_Src != (ushort *)0x0) {
    memmove(_Src + -iVar5,_Src,(int)puVar4 - (int)_Src);
    puVar3 = puVar4 + -iVar5;
  }
  *puVar3 = 0;
  return puVar4 + (puVar4[2] == 0x3e) + 2;
}


/* FUN_004d96f0 @ 004d96f0  kind=gamemisc  attributed-by=none  size=489 */

short * FUN_004d96f0(short *param_1)

{
  short *psVar1;
  ushort *puVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  ushort uVar7;
  uint uVar8;
  
  psVar1 = param_1 + 1;
  psVar6 = psVar1;
  switch(*psVar1) {
  case 0x23:
    iVar4 = 0;
    if (param_1[2] == 0x78) {
      uVar8 = (uint)(ushort)param_1[3];
      psVar6 = param_1 + 3;
      if (uVar8 == 0x3b) {
        return psVar6;
      }
      while( true ) {
        while (uVar8 - 0x30 < 10) {
          puVar2 = (ushort *)(psVar6 + 1);
          iVar4 = iVar4 * 0x10 + -0x30 + uVar8;
          psVar6 = psVar6 + 1;
          uVar8 = (uint)*puVar2;
        }
        uVar5 = uVar8 | 0x20;
        if (5 < uVar5 - 0x61) break;
        uVar8 = (uint)(ushort)psVar6[1];
        iVar4 = iVar4 * 0x10 + -0x57 + uVar5;
        psVar6 = psVar6 + 1;
      }
      uVar7 = (ushort)uVar8;
    }
    else {
      uVar7 = param_1[2];
      uVar8 = (uint)uVar7;
      psVar6 = param_1 + 2;
      if (uVar8 == 0x3b) {
        return psVar6;
      }
      while (uVar8 - 0x30 < 10) {
        uVar7 = psVar6[1];
        psVar6 = psVar6 + 1;
        iVar4 = uVar8 + iVar4 * 10 + -0x30;
        uVar8 = (uint)uVar7;
      }
    }
    if (uVar7 == 0x3b) {
      param_1 = (short *)FUN_004d6f10(param_1,iVar4);
      FUN_004d94e0(&param_1,(int)(psVar6 + 1) - (int)param_1 >> 1);
      return psVar6 + 1;
    }
    break;
  case 0x61:
    psVar6 = param_1 + 2;
    if (param_1[2] == 0x6d) {
      psVar6 = param_1 + 3;
      if ((*psVar6 == 0x70) && (psVar6 = param_1 + 4, *psVar6 == 0x3b)) {
        uVar3 = 0x26;
        goto LAB_004d9801;
      }
    }
    else if ((((param_1[2] == 0x70) && (psVar6 = param_1 + 3, *psVar6 == 0x6f)) &&
             (psVar6 = param_1 + 4, *psVar6 == 0x73)) && (psVar6 = param_1 + 5, *psVar6 == 0x3b)) {
      uVar3 = 0x27;
      goto LAB_004d9801;
    }
    break;
  case 0x67:
    psVar6 = param_1 + 2;
    if ((*psVar6 == 0x74) && (psVar6 = param_1 + 3, *psVar6 == 0x3b)) {
      uVar3 = 0x3e;
LAB_004d9801:
      *param_1 = uVar3;
      param_1 = psVar1;
      FUN_004d94e0(&param_1,(int)psVar6 + (2 - (int)psVar1) >> 1);
      return psVar6 + 1;
    }
    break;
  case 0x6c:
    psVar6 = param_1 + 2;
    if ((*psVar6 == 0x74) && (psVar6 = param_1 + 3, *psVar6 == 0x3b)) {
      uVar3 = 0x3c;
      goto LAB_004d9801;
    }
    break;
  case 0x71:
    psVar6 = param_1 + 2;
    if ((((*psVar6 == 0x75) && (psVar6 = param_1 + 3, *psVar6 == 0x6f)) &&
        (psVar6 = param_1 + 4, *psVar6 == 0x74)) && (psVar6 = param_1 + 5, *psVar6 == 0x3b)) {
      uVar3 = 0x22;
      goto LAB_004d9801;
    }
  }
  return psVar6;
}


/* FUN_004d9950 @ 004d9950  kind=gamemisc  attributed-by=none  size=228 */

uint FUN_004d9950(ushort *param_1,uint param_2,uint param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 *in_ECX;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  if ((param_3 == 0) && (param_2 <= (uint)in_ECX[4])) {
    return param_2;
  }
  if (((uint)in_ECX[4] <= param_2) || (uVar7 = in_ECX[4] - param_2, uVar7 < param_3)) {
    return 0xffffffff;
  }
  iVar8 = uVar7 + (1 - param_3);
  puVar3 = in_ECX;
  if (7 < (uint)in_ECX[5]) {
    puVar3 = (undefined4 *)*in_ECX;
  }
  puVar4 = (ushort *)((int)puVar3 + param_2 * 2);
  do {
    if (iVar8 != 0) {
      puVar5 = puVar4;
      iVar6 = iVar8;
      do {
        if (*puVar5 == *param_1) goto LAB_004d99c7;
        puVar5 = puVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    puVar5 = (ushort *)0x0;
LAB_004d99c7:
    puVar1 = puVar5;
    uVar7 = param_3;
    puVar2 = param_1;
    if (puVar5 == (ushort *)0x0) {
      return 0xffffffff;
    }
    while( true ) {
      if (uVar7 == 0) goto LAB_004d99e7;
      if (*puVar1 != *puVar2) break;
      puVar1 = puVar1 + 1;
      uVar7 = uVar7 - 1;
      puVar2 = puVar2 + 1;
    }
    if ((-(uint)(*puVar1 < *puVar2) & 0xfffffffe) == 0xffffffff) {
LAB_004d99e7:
      if (7 < (uint)in_ECX[5]) {
        in_ECX = (undefined4 *)*in_ECX;
      }
      return (int)puVar5 - (int)in_ECX >> 1;
    }
    iVar8 = iVar8 + (-1 - ((int)puVar5 - (int)puVar4 >> 1));
    puVar4 = puVar5 + 1;
  } while( true );
}


/* FUN_004d9a40 @ 004d9a40  kind=gamemisc  attributed-by=none  size=135 */

int FUN_004d9a40(undefined4 param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e8e11;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_004da730();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  local_8 = 1;
  if ((undefined2 *)(iVar1 + 0x10) != (undefined2 *)0x0) {
    *(undefined4 *)(iVar1 + 0x24) = 7;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined2 *)(iVar1 + 0x10) = 0;
    FUN_0040f680(param_1,0,0xffffffff);
  }
  ExceptionList = local_10;
  return iVar1;
}


/* FUN_004d9b10 @ 004d9b10  kind=gamemisc  attributed-by=none  size=116 */

void FUN_004d9b10(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *in_ECX;
  
  iVar2 = *in_ECX;
  uVar7 = FUN_004d9b90(*(undefined4 *)(*param_1 + 4),iVar2,param_2);
  *(undefined4 *)(iVar2 + 4) = uVar7;
  piVar3 = (int *)*in_ECX;
  in_ECX[1] = param_1[1];
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0xd) != '\0') {
    *piVar3 = (int)piVar3;
    *(int *)(*in_ECX + 8) = *in_ECX;
    return;
  }
  cVar1 = *(char *)(*piVar4 + 0xd);
  piVar6 = (int *)*piVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar6 + 0xd);
    piVar4 = piVar6;
    piVar6 = (int *)*piVar6;
  }
  *piVar3 = (int)piVar4;
  iVar2 = *(int *)(*in_ECX + 4);
  iVar5 = *(int *)(iVar2 + 8);
  cVar1 = *(char *)(iVar5 + 0xd);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0xd);
    iVar2 = iVar5;
    iVar5 = *(int *)(iVar5 + 8);
  }
  *(int *)(*in_ECX + 8) = iVar2;
  return;
}


/* FUN_004d9b90 @ 004d9b90  kind=gamemisc  attributed-by=none  size=159 */

undefined4 * FUN_004d9b90(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e8e30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)*in_ECX;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = (undefined4 *)FUN_004d9a40(param_1 + 4);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
    if (*(char *)((int)puVar3 + 0xd) != '\0') {
      puVar3 = puVar1;
    }
    local_8 = 0;
    uVar2 = FUN_004d9b90(*param_1,puVar1,param_3);
    *puVar1 = uVar2;
    uVar2 = FUN_004d9b90(param_1[2],puVar1,param_3);
    puVar1[2] = uVar2;
  }
  ExceptionList = local_10;
  return puVar3;
}


/* FUN_004d9c50 @ 004d9c50  kind=gamemisc  attributed-by=none  size=511 */

void FUN_004d9c50(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  int *piVar6;
  int *piVar7;
  
  if (0x6666664 < (uint)in_ECX[1]) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  piVar3 = (int *)FUN_004d9a40(param_4);
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
      goto LAB_004d9cae;
    }
    param_3[2] = piVar3;
    iVar4 = *in_ECX;
    if (param_3 != *(undefined4 **)(iVar4 + 8)) goto LAB_004d9cae;
  }
  *(int **)(iVar4 + 8) = piVar3;
LAB_004d9cae:
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
        goto LAB_004d9e2a;
      }
LAB_004d9d81:
      *(undefined1 *)(piVar7 + 3) = 1;
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar5 = *(int **)(piVar5[1] + 4);
    }
    else {
      if ((char)piVar6[3] == '\0') goto LAB_004d9d81;
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
LAB_004d9e2a:
      piVar7[1] = (int)piVar6;
    }
    cVar1 = *(char *)(piVar5[1] + 0xc);
  } while( true );
}


/* FUN_004d9e50 @ 004d9e50  kind=gamemisc  attributed-by=none  size=511 */

void FUN_004d9e50(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  int *piVar6;
  int *piVar7;
  
  if (0x6666664 < (uint)in_ECX[1]) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  piVar3 = (int *)FUN_004d9ae0(param_4);
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
      goto LAB_004d9eae;
    }
    param_3[2] = piVar3;
    iVar4 = *in_ECX;
    if (param_3 != *(undefined4 **)(iVar4 + 8)) goto LAB_004d9eae;
  }
  *(int **)(iVar4 + 8) = piVar3;
LAB_004d9eae:
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
        goto LAB_004da02a;
      }
LAB_004d9f81:
      *(undefined1 *)(piVar7 + 3) = 1;
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar5 = *(int **)(piVar5[1] + 4);
    }
    else {
      if ((char)piVar6[3] == '\0') goto LAB_004d9f81;
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
LAB_004da02a:
      piVar7[1] = (int)piVar6;
    }
    cVar1 = *(char *)(piVar5[1] + 0xc);
  } while( true );
}


/* FUN_004da050 @ 004da050  kind=gamemisc  attributed-by=none  size=319 */

void FUN_004da050(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *in_ECX;
  bool bVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar5 = param_3;
  puStack_c = &LAB_006e8e50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar7 = true;
  local_8 = 0;
  puVar1 = (undefined4 *)*in_ECX;
  puVar4 = (undefined4 *)((undefined4 *)*in_ECX)[1];
  while (*(char *)((int)puVar4 + 0xd) == '\0') {
    if ((char)param_2 == '\0') {
      piVar3 = puVar4 + 4;
      if (7 < (uint)puVar4[9]) {
        piVar3 = (int *)*piVar3;
      }
      iVar2 = FUN_00428db0(0,puVar5[4],piVar3,puVar4[8]);
      bVar7 = iVar2 < 0;
    }
    else {
      puVar1 = puVar5;
      if (7 < (uint)puVar5[5]) {
        puVar1 = (undefined4 *)*puVar5;
      }
      iVar2 = FUN_00428db0(0,puVar4[8],puVar1,puVar5[4]);
      bVar7 = -1 < iVar2;
    }
    puVar1 = puVar4;
    if (bVar7 == false) {
      puVar4 = (undefined4 *)puVar4[2];
    }
    else {
      puVar4 = (undefined4 *)*puVar4;
    }
  }
  param_2 = puVar1;
  if (bVar7 != false) {
    if (puVar1 == *(undefined4 **)*in_ECX) {
      puVar4 = &param_2;
      bVar7 = true;
      goto LAB_004da111;
    }
    FUN_0042c740();
  }
  puVar4 = param_2;
  puVar6 = puVar5;
  if (7 < (uint)puVar5[5]) {
    puVar6 = (undefined4 *)*puVar5;
  }
  iVar2 = FUN_00428db0(0,param_2[8],puVar6,puVar5[4]);
  if (-1 < iVar2) {
    *param_1 = puVar4;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
  puVar4 = &param_3;
LAB_004da111:
  puVar5 = (undefined4 *)FUN_004d9c50(puVar4,bVar7,puVar1,puVar5,param_4);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_004da1a0 @ 004da1a0  kind=gamemisc  attributed-by=none  size=319 */

void FUN_004da1a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *in_ECX;
  bool bVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar5 = param_3;
  puStack_c = &LAB_006e8e70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar7 = true;
  local_8 = 0;
  puVar1 = (undefined4 *)*in_ECX;
  puVar4 = (undefined4 *)((undefined4 *)*in_ECX)[1];
  while (*(char *)((int)puVar4 + 0xd) == '\0') {
    if ((char)param_2 == '\0') {
      piVar3 = puVar4 + 4;
      if (7 < (uint)puVar4[9]) {
        piVar3 = (int *)*piVar3;
      }
      iVar2 = FUN_00428db0(0,puVar5[4],piVar3,puVar4[8]);
      bVar7 = iVar2 < 0;
    }
    else {
      puVar1 = puVar5;
      if (7 < (uint)puVar5[5]) {
        puVar1 = (undefined4 *)*puVar5;
      }
      iVar2 = FUN_00428db0(0,puVar4[8],puVar1,puVar5[4]);
      bVar7 = -1 < iVar2;
    }
    puVar1 = puVar4;
    if (bVar7 == false) {
      puVar4 = (undefined4 *)puVar4[2];
    }
    else {
      puVar4 = (undefined4 *)*puVar4;
    }
  }
  param_2 = puVar1;
  if (bVar7 != false) {
    if (puVar1 == *(undefined4 **)*in_ECX) {
      puVar4 = &param_2;
      bVar7 = true;
      goto LAB_004da261;
    }
    FUN_0042c740();
  }
  puVar4 = param_2;
  puVar6 = puVar5;
  if (7 < (uint)puVar5[5]) {
    puVar6 = (undefined4 *)*puVar5;
  }
  iVar2 = FUN_00428db0(0,param_2[8],puVar6,puVar5[4]);
  if (-1 < iVar2) {
    *param_1 = puVar4;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
  puVar4 = &param_3;
LAB_004da261:
  puVar5 = (undefined4 *)FUN_004d9e50(puVar4,bVar7,puVar1,puVar5,param_4);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_004da2f0 @ 004da2f0  kind=gamemisc  attributed-by=none  size=129 */

void FUN_004da2f0(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined1 local_c [8];
  
  do {
    do {
      while( true ) {
        do {
          piVar3 = param_1;
          if (piVar3 == param_2) {
            return;
          }
          FUN_004da050(local_c,0,piVar3 + 4,DAT_0076b2a6);
          param_1 = piVar3;
        } while (*(char *)((int)piVar3 + 0xd) != '\0');
        param_1 = (int *)piVar3[2];
        if (*(char *)((int)param_1 + 0xd) != '\0') break;
        cVar1 = *(char *)(*param_1 + 0xd);
        piVar3 = (int *)*param_1;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0xd);
          param_1 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      param_1 = (int *)piVar3[1];
    } while (*(char *)((int)param_1 + 0xd) != '\0');
    do {
      if (piVar3 != (int *)param_1[2]) break;
      piVar2 = (int *)param_1[1];
      piVar3 = param_1;
      param_1 = piVar2;
    } while (*(char *)((int)piVar2 + 0xd) == '\0');
  } while( true );
}


/* FUN_004da730 @ 004da730  kind=gamemisc  attributed-by=none  size=55 */

undefined4 * FUN_004da730(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = operator_new(0x28);
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


/* FUN_004da770 @ 004da770  kind=gamemisc  attributed-by=none  size=141 */

void FUN_004da770(uint param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = param_1;
  if (param_1 != 0) {
    piVar3 = (int *)(param_1 + 4);
    FUN_004da2f0(**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
    piVar1 = (int *)(param_1 + 0xc);
    if (piVar1 != piVar3) {
      FUN_00661940(*(undefined4 *)(*piVar1 + 4));
      param_1 = param_1 & 0xffffff00;
      *(int *)(*piVar1 + 4) = *piVar1;
      *(int *)*piVar1 = *piVar1;
      *(int *)(*piVar1 + 8) = *piVar1;
      *(undefined4 *)(uVar2 + 0x10) = 0;
      FUN_004d9b10(piVar3,param_1);
    }
    piVar3 = (int *)**(int **)(uVar2 + 0x38);
    if (piVar3 != *(int **)(uVar2 + 0x38)) {
      do {
        FUN_004da770(piVar3[2]);
        FUN_004da2f0(**(undefined4 **)(piVar3[2] + 0xc),*(undefined4 **)(piVar3[2] + 0xc));
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)*(int *)(uVar2 + 0x38));
    }
  }
  return;
}


/* FUN_004da800 @ 004da800  kind=gamemisc  attributed-by=none  size=75 */

undefined2 FUN_004da800(short param_1)

{
  if ((((((param_1 != 0x2e) && (param_1 != 0x3a)) && (param_1 != 0x2d)) &&
       ((param_1 != 0x2c && (param_1 != 0x3b)))) &&
      ((param_1 != 0x21 && ((param_1 != 0x3f && (param_1 != 0x2f)))))) &&
     ((param_1 != 0x28 && (param_1 != 0x29)))) {
    return 0;
  }
  return 1;
}


/* FUN_004da850 @ 004da850  kind=gamemisc  attributed-by=none  size=2102 */

/* WARNING: Type propagation algorithm not settling */

void FUN_004da850(undefined4 *param_1)

{
  short sVar1;
  int *piVar2;
  char cVar3;
  QuestTextNode *pQVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  short *******pppppppsVar9;
  undefined4 *puVar10;
  deleting_destructor *pdVar11;
  int in_ECX;
  uint extraout_ECX;
  uint uVar12;
  short *psVar13;
  undefined4 *extraout_EDX;
  uint uVar14;
  int in_stack_00000014;
  uint in_stack_00000018;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  int local_58;
  QuestTextNode *local_54;
  int local_50;
  short local_4c [2];
  QuestTextNode_vftable *local_48;
  int *local_44;
  uint local_40;
  QuestTextNode *local_3c;
  QuestTextNode *local_38;
  int local_34;
  QuestTextNode *local_30;
  short *******local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e9005;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar10 = (undefined4 *)(in_ECX + 4);
  local_8 = 0;
  local_58 = in_ECX;
  if (*(undefined4 **)(in_ECX + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 4))(1,local_14);
    *puVar10 = 0;
  }
  local_54 = operator_new(0x44);
  local_8._0_1_ = 1;
  if (local_54 == (QuestTextNode *)0x0) {
    pQVar4 = (QuestTextNode *)0x0;
  }
  else {
    pQVar4 = cube::QuestTextNode::QuestTextNode(local_54);
  }
  *puVar10 = pQVar4;
  local_8._0_1_ = 0;
  FUN_00661940(*(undefined4 *)(*(int *)(in_ECX + 8) + 4));
  *(int *)(*(int *)(in_ECX + 8) + 4) = *(int *)(in_ECX + 8);
  *(undefined4 *)*(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 8);
  *(int *)(*(int *)(in_ECX + 8) + 8) = *(int *)(in_ECX + 8);
  *(undefined4 *)(in_ECX + 0xc) = 0;
  local_40 = 0;
  piVar5 = (int *)FUN_0046d550(0,0);
  local_8._0_1_ = 2;
  local_44 = piVar5;
  iVar6 = FUN_00583cb0(piVar5,piVar5[1],puVar10);
  piVar5[1] = iVar6;
  **(int **)(iVar6 + 4) = iVar6;
  uVar14 = 1;
  local_40 = 1;
  local_54 = (QuestTextNode *)in_stack_00000014;
  local_50 = -1;
  local_34 = 0;
  uVar12 = in_stack_00000018;
  puVar10 = param_1;
  if (-1 < in_stack_00000014) {
    do {
      iVar6 = local_34;
      puVar7 = &param_1;
      if (7 < uVar12) {
        puVar7 = puVar10;
      }
      if (*(short *)((int)puVar7 + local_34 * 2) == 0x20) {
LAB_004da9f8:
        puVar7 = &param_1;
        if (7 < uVar12) {
          puVar7 = puVar10;
        }
        if (*(short *)((int)puVar7 + iVar6 * 2) == 0x7b) {
          local_30 = operator_new(0x44);
          local_8._0_1_ = 3;
          if (local_30 == (QuestTextNode *)0x0) {
            pQVar4 = (QuestTextNode *)0x0;
          }
          else {
            pQVar4 = cube::QuestTextNode::QuestTextNode(local_30);
          }
          (pQVar4->QuestTextNode_data).offset_0x3c = 2;
          local_38 = (QuestTextNode *)(*(int *)(piVar5[1] + 8) + 0x38);
          local_48 = local_38->vftablePtr;
          local_8._0_1_ = 2;
          local_3c = pQVar4;
          local_30 = (QuestTextNode *)
                     FUN_00583cb0(local_48,local_48[1].deleting_destructor,&local_3c);
          iVar6 = (local_38->QuestTextNode_data).offset_0x0;
          if (iVar6 == 0x15555554) goto LAB_004db0eb;
          (local_38->QuestTextNode_data).offset_0x0 = iVar6 + 1;
          local_48[1].deleting_destructor = (deleting_destructor *)local_30;
          *(QuestTextNode **)(local_30->QuestTextNode_data).offset_0x0 = local_30;
          (pQVar4->QuestTextNode_data).offset_0x30 = *(undefined4 *)(piVar5[1] + 8);
          iVar6 = FUN_00583cb0(piVar5,piVar5[1],&local_3c);
          if (uVar14 == 0x15555554) goto LAB_004db0eb;
          piVar5[1] = iVar6;
          **(int **)(iVar6 + 4) = iVar6;
          local_40 = uVar14 + 1;
          local_30 = operator_new(0x44);
          local_8._0_1_ = 4;
          if (local_30 == (QuestTextNode *)0x0) {
            local_3c = (QuestTextNode *)0x0;
          }
          else {
            local_3c = cube::QuestTextNode::QuestTextNode(local_30);
          }
          iVar6 = *(int *)(piVar5[1] + 8);
          local_30 = *(QuestTextNode **)(iVar6 + 0x38);
          local_8._0_1_ = 2;
          local_38 = local_3c;
          iVar8 = FUN_00583cb0(local_30,(local_30->QuestTextNode_data).offset_0x0,&local_38);
          if (*(int *)(iVar6 + 0x3c) == 0x15555554) goto LAB_004db0eb;
          *(int *)(iVar6 + 0x3c) = *(int *)(iVar6 + 0x3c) + 1;
          (local_30->QuestTextNode_data).offset_0x0 = iVar8;
          **(int **)(iVar8 + 4) = iVar8;
          (local_3c->QuestTextNode_data).offset_0x30 = *(undefined4 *)(piVar5[1] + 8);
          iVar6 = FUN_00583cb0(piVar5,piVar5[1],&local_38);
          if (uVar14 + 1 == 0x15555554) goto LAB_004db0eb;
          piVar5[1] = iVar6;
          uVar14 = uVar14 + 2;
          **(int **)(iVar6 + 4) = iVar6;
          local_40 = uVar14;
          uVar12 = in_stack_00000018;
          puVar10 = param_1;
          iVar6 = local_34;
        }
        puVar7 = &param_1;
        if (7 < uVar12) {
          puVar7 = puVar10;
        }
        if (*(short *)((int)puVar7 + iVar6 * 2) == 0x5b) {
          local_30 = operator_new(0x44);
          local_8._0_1_ = 5;
          if (local_30 == (QuestTextNode *)0x0) {
            pQVar4 = (QuestTextNode *)0x0;
          }
          else {
            pQVar4 = cube::QuestTextNode::QuestTextNode(local_30);
          }
          (pQVar4->QuestTextNode_data).offset_0x3c = 3;
          local_30 = (QuestTextNode *)(*(int *)(piVar5[1] + 8) + 0x38);
          local_48 = local_30->vftablePtr;
          local_8._0_1_ = 2;
          local_38 = pQVar4;
          local_3c = (QuestTextNode *)
                     FUN_00583cb0(local_48,local_48[1].deleting_destructor,&local_38);
          iVar6 = (local_30->QuestTextNode_data).offset_0x0;
          if (iVar6 == 0x15555554) goto LAB_004db0eb;
          (local_30->QuestTextNode_data).offset_0x0 = iVar6 + 1;
          local_48[1].deleting_destructor = (deleting_destructor *)local_3c;
          *(QuestTextNode **)(local_3c->QuestTextNode_data).offset_0x0 = local_3c;
          (pQVar4->QuestTextNode_data).offset_0x30 = *(undefined4 *)(piVar5[1] + 8);
          iVar6 = FUN_00583cb0(piVar5,piVar5[1],&local_38);
          if (uVar14 == 0x15555554) goto LAB_004db0eb;
          piVar5[1] = iVar6;
          uVar14 = uVar14 + 1;
          **(int **)(iVar6 + 4) = iVar6;
          local_40 = uVar14;
          uVar12 = in_stack_00000018;
          puVar10 = param_1;
        }
        if (local_50 + 1 < local_34) {
LAB_004dac89:
          FUN_0043a450(local_2c,local_50 + 1,(local_34 - local_50) + -1);
          pppppppsVar9 = (short *******)local_2c;
          if (7 < local_18) {
            pppppppsVar9 = local_2c[0];
          }
          local_8._0_1_ = 6;
          if (*(short *)pppppppsVar9 == 0x23) {
            FUN_004da050(local_68,0,local_2c,DAT_0076b2a6);
          }
          else {
            pppppppsVar9 = (short *******)local_2c;
            if (7 < local_18) {
              pppppppsVar9 = local_2c[0];
            }
            if (*(short *)pppppppsVar9 == 0x24) {
              FUN_004da050(local_60,0,local_2c,DAT_0076b2a6);
            }
            else {
              local_30 = operator_new(0x44);
              local_8._0_1_ = 7;
              if (local_30 == (QuestTextNode *)0x0) {
                pQVar4 = (QuestTextNode *)0x0;
              }
              else {
                pQVar4 = cube::QuestTextNode::QuestTextNode(local_30);
              }
              local_8._0_1_ = 6;
              local_30 = pQVar4;
              if ((short ********)&(pQVar4->QuestTextNode_data).offset_0x18 != local_2c) {
                FUN_0040f680(local_2c,0,0xffffffff);
              }
              local_48 = (QuestTextNode_vftable *)(*(int *)(piVar5[1] + 8) + 0x38);
              local_38 = (QuestTextNode *)local_48->deleting_destructor;
              local_30 = (QuestTextNode *)
                         FUN_00583cb0(local_38,(local_38->QuestTextNode_data).offset_0x0,&local_30);
              if (local_48[1].deleting_destructor == (deleting_destructor *)0x15555554)
              goto LAB_004db0eb;
              local_48[1].deleting_destructor = local_48[1].deleting_destructor + 1;
              (local_38->QuestTextNode_data).offset_0x0 = local_30;
              *(QuestTextNode **)(local_30->QuestTextNode_data).offset_0x0 = local_30;
              (pQVar4->QuestTextNode_data).offset_0x30 = *(undefined4 *)(piVar5[1] + 8);
              puVar10 = &param_1;
              if (7 < in_stack_00000018) {
                puVar10 = param_1;
              }
              sVar1 = *(short *)((int)puVar10 + local_34 * 2);
              if (((((sVar1 == 0x2e) || (sVar1 == 0x3a)) || (sVar1 == 0x2d)) ||
                  (((sVar1 == 0x2c || (sVar1 == 0x3b)) ||
                   ((sVar1 == 0x21 || ((sVar1 == 0x3f || (sVar1 == 0x2f)))))))) ||
                 ((sVar1 == 0x28 || (sVar1 == 0x29)))) {
                puVar10 = &param_1;
                if (7 < in_stack_00000018) {
                  puVar10 = param_1;
                }
                local_4c[0] = *(short *)((int)puVar10 + local_34 * 2);
                local_4c[1] = 0;
                local_30 = operator_new(0x44);
                local_8._0_1_ = 8;
                if (local_30 == (QuestTextNode *)0x0) {
                  pQVar4 = (QuestTextNode *)0x0;
                }
                else {
                  pQVar4 = cube::QuestTextNode::QuestTextNode(local_30);
                }
                local_8._0_1_ = 6;
                local_30 = pQVar4;
                if (local_4c[0] == 0) {
                  iVar6 = 0;
                }
                else {
                  psVar13 = local_4c;
                  do {
                    sVar1 = *psVar13;
                    psVar13 = psVar13 + 1;
                  } while (sVar1 != 0);
                  iVar6 = (int)psVar13 - (int)(local_4c + 1) >> 1;
                }
                FUN_0040f7a0(local_4c,iVar6);
                (pQVar4->QuestTextNode_data).offset_0x3c = 1;
                (pQVar4->QuestTextNode_data).offset_0x30 = *(undefined4 *)(piVar5[1] + 8);
                iVar6 = *(int *)(piVar5[1] + 8);
                local_48 = *(QuestTextNode_vftable **)(iVar6 + 0x38);
                pdVar11 = (deleting_destructor *)
                          FUN_00583cb0(local_48,local_48[1].deleting_destructor,&local_30);
                if (*(int *)(iVar6 + 0x3c) == 0x15555554) goto LAB_004db0eb;
                *(int *)(iVar6 + 0x3c) = *(int *)(iVar6 + 0x3c) + 1;
                local_48[1].deleting_destructor = pdVar11;
                **(undefined4 **)(pdVar11 + 4) = pdVar11;
              }
            }
          }
          local_8._0_1_ = 2;
          puVar10 = param_1;
          if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_2c[0]);
          }
        }
        else {
          puVar7 = &param_1;
          if (7 < uVar12) {
            puVar7 = puVar10;
          }
          sVar1 = *(short *)((int)puVar7 + local_34 * 2);
          if (((((((sVar1 == 0x2e) || (sVar1 == 0x3a)) || (sVar1 == 0x2d)) ||
                ((sVar1 == 0x2c || (sVar1 == 0x3b)))) ||
               ((sVar1 == 0x21 || ((sVar1 == 0x3f || (sVar1 == 0x2f)))))) || (sVar1 == 0x28)) ||
             (sVar1 == 0x29)) goto LAB_004dac89;
        }
        puVar7 = &param_1;
        if (7 < in_stack_00000018) {
          puVar7 = puVar10;
        }
        local_50 = local_34;
        if (*(short *)((int)puVar7 + local_34 * 2) == 0x7c) {
          if (uVar14 < 2) goto LAB_004db094;
          piVar2 = (int *)piVar5[1];
          if (piVar2 != piVar5) {
            *(int *)piVar2[1] = *piVar2;
            *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
            operator_delete(piVar2);
          }
          local_30 = operator_new(0x44);
          local_8._0_1_ = 9;
          if (local_30 == (QuestTextNode *)0x0) {
            local_3c = (QuestTextNode *)0x0;
          }
          else {
            local_3c = cube::QuestTextNode::QuestTextNode(local_30);
          }
          iVar6 = *(int *)(piVar5[1] + 8);
          local_30 = *(QuestTextNode **)(iVar6 + 0x38);
          local_8._0_1_ = 2;
          local_38 = local_3c;
          iVar8 = FUN_00583cb0(local_30,(local_30->QuestTextNode_data).offset_0x0,&local_3c);
          if (*(int *)(iVar6 + 0x3c) == 0x15555554) {
LAB_004db0eb:
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("list<T> too long");
          }
          *(int *)(iVar6 + 0x3c) = *(int *)(iVar6 + 0x3c) + 1;
          (local_30->QuestTextNode_data).offset_0x0 = iVar8;
          **(int **)(iVar8 + 4) = iVar8;
          (local_38->QuestTextNode_data).offset_0x30 = *(undefined4 *)(piVar5[1] + 8);
          iVar6 = FUN_00583cb0(piVar5,piVar5[1],&local_3c);
          if (uVar14 == 0x15555554) goto LAB_004db0eb;
          piVar5[1] = iVar6;
          uVar14 = uVar14 + 1;
          **(int **)(iVar6 + 4) = iVar6;
          local_40 = uVar14;
          puVar10 = param_1;
        }
        puVar7 = &param_1;
        if (7 < in_stack_00000018) {
          puVar7 = puVar10;
        }
        if (*(short *)((int)puVar7 + local_34 * 2) == 0x7d) {
          if (uVar14 < 3) goto LAB_004db094;
          piVar2 = (int *)piVar5[1];
          if (piVar2 != piVar5) {
            *(int *)piVar2[1] = *piVar2;
            *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
            operator_delete(piVar2);
          }
          piVar2 = (int *)piVar5[1];
          if (piVar2 != piVar5) {
            *(int *)piVar2[1] = *piVar2;
            *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
            operator_delete(piVar2);
          }
        }
        puVar7 = &param_1;
        if (7 < in_stack_00000018) {
          puVar7 = puVar10;
        }
        uVar12 = in_stack_00000018;
        iVar6 = local_34;
        if (*(short *)((int)puVar7 + local_34 * 2) == 0x5d) {
          if (uVar14 < 2) goto LAB_004db094;
          piVar2 = (int *)piVar5[1];
          if (piVar2 != piVar5) {
            *(int *)piVar2[1] = *piVar2;
            *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
            operator_delete(piVar2);
          }
        }
      }
      else {
        puVar7 = &param_1;
        if (7 < uVar12) {
          puVar7 = puVar10;
        }
        if (*(short *)((int)puVar7 + local_34 * 2) == 10) goto LAB_004da9f8;
        puVar7 = &param_1;
        if (7 < uVar12) {
          puVar7 = puVar10;
        }
        if (*(short *)((int)puVar7 + local_34 * 2) == 9) goto LAB_004da9f8;
        puVar7 = &param_1;
        if (7 < uVar12) {
          puVar7 = puVar10;
        }
        if (*(short *)((int)puVar7 + local_34 * 2) == 0) goto LAB_004da9f8;
        puVar7 = &param_1;
        if (7 < uVar12) {
          puVar7 = puVar10;
        }
        cVar3 = FUN_004da800(*(undefined2 *)((int)puVar7 + local_34 * 2));
        uVar12 = extraout_ECX;
        puVar10 = extraout_EDX;
        if (cVar3 != '\0') goto LAB_004da9f8;
        puVar7 = &param_1;
        if (7 < extraout_ECX) {
          puVar7 = extraout_EDX;
        }
        if (*(short *)((int)puVar7 + iVar6 * 2) == 0x7b) goto LAB_004da9f8;
        puVar7 = &param_1;
        if (7 < extraout_ECX) {
          puVar7 = extraout_EDX;
        }
        if (*(short *)((int)puVar7 + iVar6 * 2) == 0x7d) goto LAB_004da9f8;
        puVar7 = &param_1;
        if (7 < extraout_ECX) {
          puVar7 = extraout_EDX;
        }
        if (*(short *)((int)puVar7 + iVar6 * 2) == 0x5b) goto LAB_004da9f8;
        puVar7 = &param_1;
        if (7 < extraout_ECX) {
          puVar7 = extraout_EDX;
        }
        if (*(short *)((int)puVar7 + iVar6 * 2) == 0x5d) goto LAB_004da9f8;
        puVar7 = &param_1;
        if (7 < extraout_ECX) {
          puVar7 = extraout_EDX;
        }
        if (*(short *)((int)puVar7 + iVar6 * 2) == 0x7c) goto LAB_004da9f8;
      }
      local_34 = iVar6 + 1;
    } while (iVar6 + 1 <= (int)local_54);
  }
  FUN_004da770(*(undefined4 *)(local_58 + 4));
LAB_004db094:
  piVar2 = (int *)*piVar5;
  *piVar5 = (int)piVar5;
  piVar5[1] = (int)piVar5;
  if (piVar2 == piVar5) {
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar5);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(piVar2);
}


/* FUN_004dc680 @ 004dc680  kind=gamemisc  attributed-by=none  size=155 */

void FUN_004dc680(int param_1,int param_2,int param_3)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e9100;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00451e80(param_1,*(undefined4 *)(param_1 + 4),param_2);
    if (*(int *)(in_ECX + 4) == 0x9249248) break;
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = param_2 + 0x14;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_004dc8e0 @ 004dc8e0  kind=gamemisc  attributed-by=none  size=2752 */

void FUN_004dc8e0(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int in_ECX;
  int iVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *local_130;
  int local_128;
  undefined4 *local_124;
  int local_118;
  int local_10c;
  int local_108 [23];
  uint local_ac;
  uint uStack_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined1 local_87;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  uint local_50;
  uint uStack_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined8 local_30;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_006e9199;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00601cb0(local_14);
  local_128 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x2c) - *(int *)(in_ECX + 0x28) & 0xfffffffcU)) {
    do {
      iVar1 = local_128 * 4;
      iVar7 = *(int *)(*(int *)(in_ECX + 0x28) + iVar1);
      if (iVar7 != 0) {
        FUN_004545a0(*(undefined4 *)(iVar7 + 0x30),*(undefined4 *)param_1[6],
                     (undefined4 *)param_1[6],local_108[0]);
        FUN_004540c0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x18),
                     *(undefined4 *)*param_1,(undefined4 *)*param_1,local_108[0]);
        iVar7 = *(int *)(in_ECX + 4);
        FUN_00477d90(local_108,*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x10);
        if (local_108[0] == *(int *)(iVar7 + 4)) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(local_108[0] + 0x18);
        }
        piVar11 = *(int **)param_1[4];
        if (piVar11 == (int *)param_1[4]) goto LAB_004dcb52;
        goto LAB_004dc9f7;
      }
      local_128 = local_128 + 1;
    } while (local_128 < *(int *)(in_ECX + 0x2c) - *(int *)(in_ECX + 0x28) >> 2);
  }
  FUN_00601e90();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
LAB_004dc9f7:
  do {
    local_68 = piVar11[2] - *(uint *)(iVar7 + 0x10);
    iStack_64 = (piVar11[3] - *(int *)(iVar7 + 0x14)) -
                (uint)((uint)piVar11[2] < *(uint *)(iVar7 + 0x10));
    local_60 = piVar11[4] - *(uint *)(iVar7 + 0x18);
    iStack_5c = (piVar11[5] - *(int *)(iVar7 + 0x1c)) -
                (uint)((uint)piVar11[4] < *(uint *)(iVar7 + 0x18));
    local_58 = piVar11[6] - *(uint *)(iVar7 + 0x20);
    iStack_54 = (piVar11[7] - *(int *)(iVar7 + 0x24)) -
                (uint)((uint)piVar11[6] < *(uint *)(iVar7 + 0x20));
    local_3c = (float)CONCAT44(iStack_64,local_68) * 1.5258789e-05;
    local_38 = (float)CONCAT44(iStack_5c,local_60) * 1.5258789e-05;
    local_34 = (float)CONCAT44(iStack_54,local_58) * 1.5258789e-05;
    if (local_38 * local_38 + local_3c * local_3c + local_34 * local_34 < 40000.0) {
      iVar10 = *(int *)(*(int *)(in_ECX + 0x28) + local_128 * 4);
      iVar9 = *(int *)(iVar10 + 0x28);
      iVar8 = FUN_004520d0(iVar9,*(undefined4 *)(iVar9 + 4),piVar11 + 2);
      if (*(int *)(iVar10 + 0x2c) == 0x3333332) goto LAB_004dd5c9;
      *(int *)(iVar10 + 0x2c) = *(int *)(iVar10 + 0x2c) + 1;
      *(int *)(iVar9 + 4) = iVar8;
      **(int **)(iVar8 + 4) = iVar8;
    }
    piVar11 = (int *)*piVar11;
  } while (piVar11 != (int *)param_1[4]);
LAB_004dcb52:
  piVar11 = *(int **)param_1[2];
  if (piVar11 != (int *)param_1[2]) {
    do {
      local_48 = (float)*(longlong *)(iVar7 + 0x10) * 1.5258789e-05;
      local_44 = (float)*(longlong *)(iVar7 + 0x18) * 1.5258789e-05;
      uVar2 = *(undefined8 *)(piVar11 + 2);
      local_30._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
      local_30._4_4_ = local_30._4_4_ - local_44;
      local_40 = (float)*(longlong *)(iVar7 + 0x20) * 1.5258789e-05;
      local_30._0_4_ = (float)uVar2;
      local_30._0_4_ = (float)local_30 - local_48;
      local_28 = (float)piVar11[4] - local_40;
      if (local_30._4_4_ * local_30._4_4_ + (float)local_30 * (float)local_30 + local_28 * local_28
          < 40000.0) {
        iVar10 = *(int *)(*(int *)(in_ECX + 0x28) + iVar1);
        iVar9 = *(int *)(iVar10 + 0x20);
        iVar8 = FUN_0058d860(iVar9,*(undefined4 *)(iVar9 + 4),piVar11 + 2);
        if (*(int *)(iVar10 + 0x24) == 0x7fffffe) goto LAB_004dd5c9;
        *(int *)(iVar10 + 0x24) = *(int *)(iVar10 + 0x24) + 1;
        *(int *)(iVar9 + 4) = iVar8;
        **(int **)(iVar8 + 4) = iVar8;
      }
      piVar11 = (int *)*piVar11;
    } while (piVar11 != (int *)param_1[2]);
  }
  FUN_00453ff0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x38),
               *(undefined4 *)param_1[8],(undefined4 *)param_1[8],local_108[0]);
  FUN_00454670(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x40),
               *(undefined4 *)param_1[10],(undefined4 *)param_1[10],local_108[0]);
  FUN_004548e0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x48),
               *(undefined4 *)param_1[0xc],(undefined4 *)param_1[0xc],local_108[0]);
  FUN_004dc4e0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x50),
               *(undefined4 *)param_1[0xe],(undefined4 *)param_1[0xe],local_108[0]);
  FUN_00454740(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x58),
               *(undefined4 *)param_1[0x10],(undefined4 *)param_1[0x10],local_108[0]);
  FUN_004dc5b0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x60),
               *(undefined4 *)param_1[0x12],(undefined4 *)param_1[0x12],local_108[0]);
  FUN_004dc5b0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x68),
               *(undefined4 *)param_1[0x14],(undefined4 *)param_1[0x14],local_108[0]);
  FUN_004544d0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x70),
               *(undefined4 *)param_1[0x16],(undefined4 *)param_1[0x16],local_108[0]);
  FUN_00454810(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x78),
               *(undefined4 *)param_1[0x18],(undefined4 *)param_1[0x18],local_108[0]);
  EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x98));
  FUN_00459250(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x80);
  local_8 = 0;
  FUN_00459250(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x88);
  local_8._0_1_ = 1;
  iVar7 = *(int *)(*(int *)(in_ECX + 0x28) + iVar1);
  puVar3 = *(undefined4 **)(iVar7 + 0x80);
  pvVar4 = (void *)*puVar3;
  *puVar3 = puVar3;
  *(int *)(*(int *)(iVar7 + 0x80) + 4) = *(int *)(iVar7 + 0x80);
  *(undefined4 *)(iVar7 + 0x84) = 0;
  if (pvVar4 != *(void **)(iVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar4);
  }
  iVar7 = *(int *)(*(int *)(in_ECX + 0x28) + iVar1);
  puVar3 = *(undefined4 **)(iVar7 + 0x88);
  pvVar4 = (void *)*puVar3;
  *puVar3 = puVar3;
  *(int *)(*(int *)(iVar7 + 0x88) + 4) = *(int *)(iVar7 + 0x88);
  *(undefined4 *)(iVar7 + 0x8c) = 0;
  if (pvVar4 != *(void **)(iVar7 + 0x88)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar4);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x98));
  puVar3 = (undefined4 *)*local_124;
  do {
    if (puVar3 == local_124) {
      puVar3 = (undefined4 *)*local_130;
      do {
        if (puVar3 == local_130) {
          puVar3 = (undefined4 *)*local_130;
          *local_130 = local_130;
          local_130[1] = local_130;
          if (puVar3 == local_130) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_130);
          }
                    /* WARNING: Subroutine does not return */
          operator_delete(puVar3);
        }
        FUN_00601cb0();
        local_118 = 0;
        do {
          local_10c = 0;
          do {
            uStack_4c = ((int)((puVar3[3] * 0x40 >> 0x1f & 7U) + puVar3[3] * 0x40) >> 3) + local_10c
            ;
            local_50 = ((int)((puVar3[2] * 0x40 >> 0x1f & 7U) + puVar3[2] * 0x40) >> 3) + local_118;
            if ((((-1 < (int)local_50) && (-1 < (int)uStack_4c)) && ((int)local_50 < 0x2000)) &&
               ((int)uStack_4c < 0x2000)) {
              iVar7 = (int)(((int)(local_50 * 8) >> 0x1f & 0x3fU) + local_50 * 8) >> 6;
              iVar10 = (int)(((int)(uStack_4c * 8) >> 0x1f & 0x3fU) + uStack_4c * 8) >> 6;
              if (((-1 < iVar7) && (-1 < iVar10)) &&
                 ((iVar7 < 0x400 &&
                  ((iVar10 < 0x400 &&
                   (iVar7 = *(int *)(*(int *)(in_ECX + 4) + 0xbc + (iVar7 * 0x400 + iVar10) * 4),
                   iVar7 != 0)))))) {
                uVar12 = local_50 & 0x80000007;
                if ((int)uVar12 < 0) {
                  uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
                }
                uVar13 = uStack_4c & 0x80000007;
                if ((int)uVar13 < 0) {
                  uVar13 = (uVar13 - 1 | 0xfffffff8) + 1;
                }
                iVar7 = iVar7 + 0x14018 + (uVar13 + uVar12 * 8) * 0x68;
                if (iVar7 != 0) {
                  local_9c = *(undefined4 *)(iVar7 + 0x2c);
                  local_98 = *(undefined4 *)(iVar7 + 0x30);
                  local_94 = *(undefined4 *)(iVar7 + 0x34);
                  local_90 = *(undefined4 *)(iVar7 + 0x38);
                  local_8c = *(undefined4 *)(iVar7 + 0x3c);
                  local_88 = *(undefined1 *)(iVar7 + 0x40);
                  local_87 = *(undefined1 *)(iVar7 + 0x41);
                  local_84 = *(undefined4 *)(iVar7 + 0x44);
                  local_80 = *(undefined4 *)(iVar7 + 0x48);
                  local_7c = *(undefined4 *)(iVar7 + 0x4c);
                  local_78 = *(undefined4 *)(iVar7 + 0x50);
                  iVar7 = *(int *)(*(int *)(in_ECX + 0x28) + iVar1);
                  iVar10 = *(int *)(iVar7 + 0x78);
                  local_a4 = 0;
                  local_ac = local_50;
                  uStack_a8 = uStack_4c;
                  iVar9 = FUN_00451d40(iVar10,*(undefined4 *)(iVar10 + 4),&local_ac);
                  if (*(int *)(iVar7 + 0x7c) == 0x3fffffe) goto LAB_004dd5c9;
                  *(int *)(iVar7 + 0x7c) = *(int *)(iVar7 + 0x7c) + 1;
                  *(int *)(iVar10 + 4) = iVar9;
                  **(int **)(iVar9 + 4) = iVar9;
                }
              }
            }
            local_10c = local_10c + 1;
          } while (local_10c < 8);
          local_118 = local_118 + 1;
        } while (local_118 < 8);
        FUN_00601e90();
        puVar3 = (undefined4 *)*puVar3;
      } while( true );
    }
    FUN_00601cb0();
    uVar12 = puVar3[2];
    uVar13 = puVar3[3];
    if ((((-1 < (int)uVar12) && (-1 < (int)uVar13)) && ((int)uVar12 < 0x10000)) &&
       ((int)uVar13 < 0x10000)) {
      iVar7 = (int)(uVar13 + ((int)uVar13 >> 0x1f & 0x3fU)) >> 6;
      iVar10 = (int)(((int)uVar12 >> 0x1f & 0x3fU) + uVar12) >> 6;
      if (((-1 < iVar10) && (-1 < iVar7)) &&
         ((iVar10 < 0x400 &&
          ((iVar7 < 0x400 &&
           (iVar7 = *(int *)(*(int *)(in_ECX + 4) + 0xbc + (iVar10 * 0x400 + iVar7) * 4), iVar7 != 0
           )))))) {
        uVar12 = uVar12 & 0x8000003f;
        if ((int)uVar12 < 0) {
          uVar12 = (uVar12 - 1 | 0xffffffc0) + 1;
        }
        uVar13 = uVar13 & 0x8000003f;
        if ((int)uVar13 < 0) {
          uVar13 = (uVar13 - 1 | 0xffffffc0) + 1;
        }
        iVar7 = *(int *)(iVar7 + 0x10018 + (uVar12 * 0x40 + uVar13) * 4);
        if (iVar7 != 0) {
          FUN_004dc680(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + iVar1) + 0x30),
                       *(undefined4 *)(iVar7 + 0x68),*(undefined4 *)(iVar7 + 0x6c),local_108[0]);
          local_24 = *(undefined4 *)(iVar7 + 0x60);
          uVar5 = *(undefined4 *)(iVar7 + 0x34);
          local_20 = *(undefined4 *)(iVar7 + 100);
          uVar6 = *(undefined4 *)(iVar7 + 0x30);
          local_1c = (undefined4 *)0x0;
          local_18 = 0;
          local_1c = (undefined4 *)FUN_0046d8d0(0,0);
          local_8._0_1_ = 2;
          FUN_004dc470(uVar6,uVar5);
          local_8._0_1_ = 3;
          iVar1 = *(int *)(*(int *)(in_ECX + 0x28) + iVar1);
          iVar7 = *(int *)(iVar1 + 0x40);
          iVar10 = FUN_00451f50(iVar7,*(undefined4 *)(iVar7 + 4),&local_24);
          if (*(int *)(iVar1 + 0x44) != 0xaaaaaa9) {
            *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + 1;
            *(int *)(iVar7 + 4) = iVar10;
            local_8 = CONCAT31(local_8._1_3_,1);
            **(int **)(iVar10 + 4) = iVar10;
            puVar3 = (undefined4 *)*local_1c;
            *local_1c = local_1c;
            local_1c[1] = local_1c;
            local_18 = 0;
            if (puVar3 == local_1c) {
                    /* WARNING: Subroutine does not return */
              operator_delete(local_1c);
            }
                    /* WARNING: Subroutine does not return */
            operator_delete(puVar3);
          }
LAB_004dd5c9:
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("list<T> too long");
        }
      }
    }
    FUN_00601e90();
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}


/* FUN_004df760 @ 004df760  kind=gamemisc  attributed-by=none  size=275 */

void FUN_004df760(void)

{
  int iVar1;
  bool bVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  int *piVar5;
  float10 fVar6;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  bVar2 = false;
  iVar3 = 0;
  iVar1 = *(int *)(*(int *)(in_ECX + 400) + 0x8006d0);
  piVar4 = (int *)(in_ECX + 0x160);
  piVar5 = (int *)(iVar1 + 0x1138);
  do {
    if (*piVar4 != *piVar5) {
      bVar2 = true;
      break;
    }
    iVar3 = iVar3 + 1;
    piVar5 = piVar5 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar3 < 0xb);
  if ((*(uint *)(in_ECX + 0x18c) == (uint)*(byte *)(iVar1 + 0x141)) && (!bVar2)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_006294d0(&local_10);
  fVar6 = (float10)FUN_00627ce0();
  if (((((float)fVar6 - 30.0 < local_c) && (fVar6 = (float10)FUN_00627ce0(), local_c < (float)fVar6)
       ) && (fVar6 = (float10)FUN_00627d50(), (float)fVar6 * 0.5 < local_10)) &&
     (fVar6 = (float10)FUN_00627d50(), local_10 < (float)fVar6)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004df880 @ 004df880  kind=gamemisc  attributed-by=none  size=317 */

void FUN_004df880(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  int *piVar6;
  float10 fVar7;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  bVar1 = false;
  iVar4 = 0;
  iVar3 = *(int *)(*(int *)(in_ECX + 400) + 0x8006d0);
  piVar5 = (int *)(in_ECX + 0x160);
  piVar6 = (int *)(iVar3 + 0x1138);
  do {
    if (*piVar5 != *piVar6) {
      bVar1 = true;
      break;
    }
    iVar4 = iVar4 + 1;
    piVar6 = piVar6 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar4 < 0xb);
  if ((((*(uint *)(in_ECX + 0x18c) == (uint)*(byte *)(iVar3 + 0x141)) && (!bVar1)) ||
      (iVar3 = FUN_004df9c0(),
      *(int *)(*(int *)(*(int *)(in_ECX + 400) + 0x8006d0) + 0x1304) < iVar3)) ||
     ((0 < iVar3 && (cVar2 = FUN_0047f030(), cVar2 == '\0')))) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_006294d0(&local_10);
  fVar7 = (float10)FUN_00627ce0();
  if ((((float)fVar7 - 30.0 < local_c) &&
      ((fVar7 = (float10)FUN_00627ce0(), local_c < (float)fVar7 &&
       (fVar7 = (float10)FUN_00627d50(), local_10 < (float)fVar7 * 0.5)))) && (0.0 < local_10)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004df9c0 @ 004df9c0  kind=gamemisc  attributed-by=none  size=233 */

int FUN_004df9c0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  float10 fVar3;
  float fVar4;
  undefined4 local_8;
  
  fVar4 = 0.0;
  local_8 = 0.0;
  iVar2 = 0x1138;
  do {
    iVar1 = *(int *)(*(int *)(in_ECX + 400) + 0x8006d0);
    if (*(int *)(in_ECX + -0xfd8 + iVar2) < *(int *)(iVar2 + iVar1)) {
      fVar3 = (float10)FUN_00445f60((float)*(int *)(iVar1 + 400),0);
      fVar4 = (float)fVar3 * (float)(*(int *)(iVar2 + iVar1) - *(int *)(in_ECX + -0xfd8 + iVar2)) *
              10.0 + local_8;
      local_8 = fVar4;
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x1164);
  iVar2 = *(int *)(*(int *)(in_ECX + 400) + 0x8006d0);
  if ((*(uint *)(in_ECX + 0x18c) != (uint)*(byte *)(iVar2 + 0x141)) && (1 < *(int *)(iVar2 + 400)))
  {
    fVar3 = (float10)FUN_00445f60((float)*(int *)(iVar2 + 400),0);
    fVar4 = (float)fVar3 * 100.0 + local_8;
  }
  return (int)fVar4;
}


/* FUN_004e0940 @ 004e0940  kind=gamemisc  attributed-by=none  size=609 */

void FUN_004e0940(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
                 int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e9508;
  local_10 = ExceptionList;
  if (0x4924922 < (uint)in_ECX[1]) {
    local_8 = 0;
    ExceptionList = &local_10;
    cube::QuestText::~QuestText((QuestText *)(param_5 + 10));
    local_8 = 0xffffffff;
    if ((uint)param_5[9] < 8) {
      param_5[9] = 7;
      param_5[8] = 0;
      *(undefined2 *)(param_5 + 4) = 0;
                    /* WARNING: Subroutine does not return */
      operator_delete(param_5);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_5[4]);
  }
  in_ECX[1] = in_ECX[1] + 1;
  param_5[1] = (int)param_3;
  if (param_3 == (undefined4 *)*in_ECX) {
    ((undefined4 *)*in_ECX)[1] = param_5;
    *(int **)*in_ECX = param_5;
    *(int **)(*in_ECX + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*in_ECX + 8)) {
      *(int **)(*in_ECX + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == *(undefined4 **)*in_ECX) {
      *(int **)*in_ECX = param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*in_ECX + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar6 = (int *)piVar4[1];
    piVar5 = *(int **)piVar6[1];
    if (piVar6 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar6[1])[2];
      if ((char)piVar5[3] == '\0') goto LAB_004e0ad7;
      if (piVar4 == (int *)piVar6[2]) {
        piVar4 = (int *)piVar6[2];
        piVar6[2] = *piVar4;
        if (*(char *)(*piVar4 + 0xd) == '\0') {
          *(int **)(*piVar4 + 4) = piVar6;
        }
        piVar4[1] = piVar6[1];
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int **)(*in_ECX + 4) = piVar4;
        }
        else {
          piVar5 = (int *)piVar6[1];
          if (piVar6 == (int *)*piVar5) {
            *piVar5 = (int)piVar4;
          }
          else {
            piVar5[2] = (int)piVar4;
          }
        }
        *piVar4 = (int)piVar6;
        piVar6[1] = (int)piVar4;
        piVar4 = piVar6;
      }
      *(undefined1 *)(piVar4[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar6 = *(int **)(piVar4[1] + 4);
      piVar5 = (int *)*piVar6;
      *piVar6 = piVar5[2];
      if (*(char *)(piVar5[2] + 0xd) == '\0') {
        *(int **)(piVar5[2] + 4) = piVar6;
      }
      piVar5[1] = piVar6[1];
      if (piVar6 == *(int **)(*in_ECX + 4)) {
        *(int **)(*in_ECX + 4) = piVar5;
        piVar5[2] = (int)piVar6;
      }
      else {
        piVar2 = (int *)piVar6[1];
        if (piVar6 == (int *)piVar2[2]) {
          piVar2[2] = (int)piVar5;
          piVar5[2] = (int)piVar6;
        }
        else {
          *piVar2 = (int)piVar5;
          piVar5[2] = (int)piVar6;
        }
      }
LAB_004e0b80:
      piVar6[1] = (int)piVar5;
    }
    else {
      if ((char)piVar5[3] != '\0') {
        if (piVar4 == (int *)*piVar6) {
          iVar3 = *piVar6;
          *piVar6 = *(int *)(iVar3 + 8);
          if (*(char *)(*(int *)(iVar3 + 8) + 0xd) == '\0') {
            *(int **)(*(int *)(iVar3 + 8) + 4) = piVar6;
          }
          *(int *)(iVar3 + 4) = piVar6[1];
          if (piVar6 == *(int **)(*in_ECX + 4)) {
            *(int *)(*in_ECX + 4) = iVar3;
          }
          else {
            piVar4 = (int *)piVar6[1];
            if (piVar6 == (int *)piVar4[2]) {
              piVar4[2] = iVar3;
            }
            else {
              *piVar4 = iVar3;
            }
          }
          *(int **)(iVar3 + 8) = piVar6;
          piVar6[1] = iVar3;
          piVar4 = piVar6;
        }
        *(undefined1 *)(piVar4[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
        piVar6 = *(int **)(piVar4[1] + 4);
        piVar5 = (int *)piVar6[2];
        piVar6[2] = *piVar5;
        if (*(char *)(*piVar5 + 0xd) == '\0') {
          *(int **)(*piVar5 + 4) = piVar6;
        }
        piVar5[1] = piVar6[1];
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int **)(*in_ECX + 4) = piVar5;
        }
        else {
          piVar2 = (int *)piVar6[1];
          if (piVar6 == (int *)*piVar2) {
            *piVar2 = (int)piVar5;
          }
          else {
            piVar2[2] = (int)piVar5;
          }
        }
        *piVar5 = (int)piVar6;
        goto LAB_004e0b80;
      }
LAB_004e0ad7:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_004e0fe0 @ 004e0fe0  kind=gamemisc  attributed-by=none  size=468 */

undefined4 * FUN_004e0fe0(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *in_ECX;
  undefined4 uVar5;
  uint uStack_2c;
  undefined1 local_1c [4];
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e9570;
  local_10 = ExceptionList;
  uStack_2c = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_2c;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[1] == 0) {
    param_2 = (int *)*in_ECX;
    local_14 = (undefined1 *)&uStack_2c;
  }
  else {
    piVar3 = (int *)*in_ECX;
    if (param_2 != (int *)*piVar3) {
      if (param_2 == piVar3) {
        puVar4 = param_3;
        if (7 < (uint)param_3[5]) {
          puVar4 = (undefined4 *)*param_3;
        }
        local_14 = (undefined1 *)&uStack_2c;
        iVar2 = FUN_00428db0(0,*(undefined4 *)(piVar3[2] + 0x20),puVar4,param_3[4]);
        if (-1 < iVar2) goto LAB_004e1181;
        param_2 = *(int **)(*in_ECX + 8);
        uVar5 = 0;
        goto LAB_004e1029;
      }
      piVar3 = param_2 + 4;
      if (7 < (uint)param_2[9]) {
        piVar3 = (int *)*piVar3;
      }
      local_18 = in_ECX;
      iVar2 = FUN_00428db0(0,param_3[4],piVar3,param_2[8]);
      if (iVar2 < 0) {
        FUN_0042c740();
        cVar1 = FUN_0046d1f0(param_2 + 4,param_3);
        if (cVar1 == '\0') goto LAB_004e1126;
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          uVar5 = 1;
          goto LAB_004e1029;
        }
      }
      else {
LAB_004e1126:
        cVar1 = FUN_0046d1f0(param_2 + 4,param_3);
        if ((cVar1 == '\0') ||
           ((FUN_005c3ea0(), param_2 != (int *)*local_18 &&
            (cVar1 = FUN_0046d1f0(param_3,param_2 + 4), cVar1 == '\0')))) {
LAB_004e1181:
          local_8 = 0xffffffff;
          puVar4 = (undefined4 *)FUN_004e1480(local_1c,0,param_3,param_4);
          *param_1 = *puVar4;
          ExceptionList = local_10;
          return param_1;
        }
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          uVar5 = 1;
          goto LAB_004e1029;
        }
      }
      uVar5 = 0;
      goto LAB_004e1029;
    }
    piVar3 = param_2 + 4;
    if (7 < (uint)param_2[9]) {
      piVar3 = (int *)*piVar3;
    }
    local_14 = (undefined1 *)&uStack_2c;
    iVar2 = FUN_00428db0(0,param_3[4],piVar3,param_2[8]);
    if (-1 < iVar2) goto LAB_004e1181;
  }
  uVar5 = 1;
LAB_004e1029:
  FUN_004e0940(param_1,uVar5,param_2,param_3,param_4);
  ExceptionList = local_10;
  return param_1;
}


/* FUN_004e1480 @ 004e1480  kind=gamemisc  attributed-by=none  size=324 */

void FUN_004e1480(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *in_ECX;
  bool bVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar5 = param_3;
  puStack_c = &LAB_006e95d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar7 = true;
  local_8 = 0;
  puVar1 = (undefined4 *)*in_ECX;
  puVar4 = (undefined4 *)((undefined4 *)*in_ECX)[1];
  while (*(char *)((int)puVar4 + 0xd) == '\0') {
    if ((char)param_2 == '\0') {
      piVar3 = puVar4 + 4;
      if (7 < (uint)puVar4[9]) {
        piVar3 = (int *)*piVar3;
      }
      iVar2 = FUN_00428db0(0,puVar5[4],piVar3,puVar4[8]);
      bVar7 = iVar2 < 0;
    }
    else {
      puVar1 = puVar5;
      if (7 < (uint)puVar5[5]) {
        puVar1 = (undefined4 *)*puVar5;
      }
      iVar2 = FUN_00428db0(0,puVar4[8],puVar1,puVar5[4]);
      bVar7 = -1 < iVar2;
    }
    puVar1 = puVar4;
    if (bVar7 == false) {
      puVar4 = (undefined4 *)puVar4[2];
    }
    else {
      puVar4 = (undefined4 *)*puVar4;
    }
  }
  param_2 = puVar1;
  if (bVar7 != false) {
    if (puVar1 == *(undefined4 **)*in_ECX) {
      puVar4 = &param_2;
      bVar7 = true;
      goto LAB_004e1541;
    }
    FUN_0042c740();
  }
  puVar4 = param_2;
  puVar6 = puVar5;
  if (7 < (uint)puVar5[5]) {
    puVar6 = (undefined4 *)*puVar5;
  }
  iVar2 = FUN_00428db0(0,param_2[8],puVar6,puVar5[4]);
  if (-1 < iVar2) {
    FUN_004e3550(param_4);
    *param_1 = puVar4;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
  puVar4 = &param_3;
LAB_004e1541:
  puVar5 = (undefined4 *)FUN_004e0940(puVar4,bVar7,puVar1,puVar5,param_4);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_004e16b0 @ 004e16b0  kind=gamemisc  attributed-by=none  size=207 */

void FUN_004e16b0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int *piVar3;
  uint uStack_28;
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e9610;
  local_10 = ExceptionList;
  uStack_28 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_28;
  ExceptionList = &local_10;
  piVar3 = (int *)*in_ECX;
  local_8 = 0;
  for (; piVar3 = (int *)*piVar3, param_1 != param_2; param_1 = (undefined4 *)*param_1) {
    if (piVar3 == (int *)*in_ECX) goto LAB_004e1715;
    if (piVar3 + 2 != param_1 + 2) {
      FUN_0040f680(param_1 + 2,0,0xffffffff);
    }
  }
LAB_004e176e:
  FUN_004e42c0(local_18,piVar3,*in_ECX);
  ExceptionList = local_10;
  return;
LAB_004e1715:
  for (; param_1 != param_2; param_1 = (undefined4 *)*param_1) {
    iVar1 = *in_ECX;
    iVar2 = FUN_004521c0(iVar1,*(undefined4 *)(iVar1 + 4),param_1 + 2);
    if (in_ECX[1] == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    in_ECX[1] = in_ECX[1] + 1;
    *(int *)(iVar1 + 4) = iVar2;
    **(int **)(iVar2 + 4) = iVar2;
  }
  goto LAB_004e176e;
}


/* FUN_004e2d90 @ 004e2d90  kind=gamemisc  attributed-by=none  size=88 */

void FUN_004e2d90(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *in_ECX;
  
  piVar1 = param_1;
  if (in_ECX != param_1) {
    FUN_0046dbc0(*(undefined4 *)(*in_ECX + 4));
    param_1 = (int *)((uint)param_1 & 0xffffff00);
    *(int *)(*in_ECX + 4) = *in_ECX;
    *(int *)*in_ECX = *in_ECX;
    *(int *)(*in_ECX + 8) = *in_ECX;
    in_ECX[1] = 0;
    FUN_004e03c0(piVar1,param_1);
  }
  piVar1 = piVar1 + 2;
  if (in_ECX + 2 != piVar1) {
    puVar2 = (undefined4 *)*piVar1;
    FUN_004e16b0(*puVar2,puVar2);
  }
  return;
}


/* FUN_004e2f00 @ 004e2f00  kind=gamemisc  attributed-by=none  size=314 */

void FUN_004e2f00(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  undefined4 local_54;
  undefined4 local_50;
  void *local_4c;
  undefined4 local_48;
  undefined1 local_41;
  undefined1 *local_40;
  undefined1 local_3c [24];
  undefined1 local_24 [16];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e9998;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  iVar2 = FUN_004e3790(param_1);
  if (iVar2 != *in_ECX) {
    piVar3 = (int *)(iVar2 + 0x10);
    if (7 < *(uint *)(iVar2 + 0x24)) {
      piVar3 = (int *)*piVar3;
    }
    iVar4 = FUN_00428db0(0,*(undefined4 *)(param_1 + 0x10),piVar3,*(undefined4 *)(iVar2 + 0x20));
    if (-1 < iVar4) {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  local_54 = 0;
  local_50 = 0;
  local_54 = FUN_00630a10(uVar1);
  local_8 = 0;
  local_4c = (void *)0x0;
  local_48 = 0;
  local_4c = (void *)FUN_00439600(0,0);
  local_8 = 1;
  FUN_0040eaf0(param_1);
  local_40 = local_24;
  local_8._0_1_ = 2;
  FUN_004e1790(&local_54,&local_41);
  local_8._0_1_ = 3;
  FUN_004e18d0(&local_4c);
  local_8 = CONCAT31(local_8._1_3_,4);
  iVar4 = FUN_004e0190(local_3c);
  FUN_004e0df0(&local_40,iVar2,iVar4 + 0x10,iVar4);
  FUN_004e2a00();
  local_8 = 0xffffffff;
  FUN_0046f990();
                    /* WARNING: Subroutine does not return */
  operator_delete(local_4c);
}


/* FUN_004e31e0 @ 004e31e0  kind=gamemisc  attributed-by=none  size=307 */

void FUN_004e31e0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  undefined1 local_60 [4];
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e99d0;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = FUN_004e3790(param_1);
  if (iVar1 != *in_ECX) {
    piVar2 = (int *)(iVar1 + 0x10);
    if (7 < *(uint *)(iVar1 + 0x24)) {
      piVar2 = (int *)*piVar2;
    }
    iVar3 = FUN_00428db0(0,*(undefined4 *)(param_1 + 0x10),piVar2,*(undefined4 *)(iVar1 + 0x20));
    if (-1 < iVar3) goto LAB_004e32fb;
  }
  local_48 = 7;
  local_4c = 0;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
  local_8 = 0;
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  FUN_0040f680(param_1,0,0xffffffff);
  FUN_0040eaf0(local_5c);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar3 = FUN_00452260(local_44);
  FUN_00453230(local_60,iVar1,iVar3 + 0x10,iVar3);
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  local_18 = 7;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c & 0xffff0000);
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_5c[0]);
  }
LAB_004e32fb:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004e3480 @ 004e3480  kind=gamemisc  attributed-by=none  size=47 */

void FUN_004e3480(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x38);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004e348e. Too many branches */
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


/* FUN_004e3790 @ 004e3790  kind=gamemisc  attributed-by=none  size=77 */

undefined4 * FUN_004e3790(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *in_ECX;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)((undefined4 *)*in_ECX)[1];
  cVar1 = *(char *)((int)puVar5 + 0xd);
  puVar2 = (undefined4 *)*in_ECX;
  while (cVar1 == '\0') {
    puVar3 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar3 = (undefined4 *)*param_1;
    }
    iVar4 = FUN_00428db0(0,puVar5[8],puVar3,param_1[4]);
    if (iVar4 < 0) {
      puVar3 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    else {
      puVar3 = (undefined4 *)*puVar5;
    }
    puVar2 = puVar5;
    puVar5 = puVar3;
    cVar1 = *(char *)((int)puVar3 + 0xd);
  }
  return puVar2;
}


/* FUN_004e37e0 @ 004e37e0  kind=gamemisc  attributed-by=none  size=84 */

void FUN_004e37e0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *in_ECX;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_1;
  }
  piVar1[1] = *(int *)(param_1 + 4);
  if (param_1 == *(int *)(*in_ECX + 4)) {
    *(int **)(*in_ECX + 4) = piVar1;
    *piVar1 = param_1;
    *(int **)(param_1 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_1 + 4);
  if (param_1 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_1;
    *(int **)(param_1 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_1;
  *(int **)(param_1 + 4) = piVar1;
  return;
}


/* FUN_004e3bb0 @ 004e3bb0  kind=gamemisc  attributed-by=none  size=189 */

undefined4 * FUN_004e3bb0(undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_004e3630(piVar2[1]);
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
    FUN_004e3c70(local_8,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return param_1;
}


/* FUN_004e3c70 @ 004e3c70  kind=gamemisc  attributed-by=none  size=599 */

/* WARNING: Removing unreachable block (ram,0x004e3d3d) */
/* WARNING: Removing unreachable block (ram,0x004e3d4d) */
/* WARNING: Removing unreachable block (ram,0x004e3d56) */
/* WARNING: Removing unreachable block (ram,0x004e3d59) */
/* WARNING: Removing unreachable block (ram,0x004e3d49) */
/* WARNING: Removing unreachable block (ram,0x004e3d67) */
/* WARNING: Removing unreachable block (ram,0x004e3d76) */
/* WARNING: Removing unreachable block (ram,0x004e3d81) */
/* WARNING: Removing unreachable block (ram,0x004e3d7d) */
/* WARNING: Removing unreachable block (ram,0x004e3d71) */
/* WARNING: Removing unreachable block (ram,0x004e3d84) */

void FUN_004e3c70(undefined4 param_1,int *param_2)

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
              break;
            }
LAB_004e3e67:
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
            goto LAB_004e3e67;
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
            break;
          }
        }
        piVar5 = (int *)piVar3[1];
        piVar6 = piVar3;
      } while (piVar3 != *(int **)(*in_ECX + 4));
    }
    *(undefined1 *)(piVar6 + 3) = 1;
  }
  FUN_0046f990();
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)param_2[0xc]);
}


/* FUN_004e5590 @ 004e5590  kind=gamemisc  attributed-by=none  size=409 */

void FUN_004e5590(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  void **ppvVar3;
  undefined4 local_7c;
  undefined4 local_78;
  void *local_74 [5];
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e9ce0;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_78 = param_2;
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  FUN_0040f7a0(L"singular",8);
  local_8 = 0;
  uVar1 = FUN_005a5240(local_5c,*(undefined4 *)(param_3 + 0x18),*(undefined4 *)(param_3 + 0x1c));
  ppvVar3 = local_44;
  local_8._0_1_ = 1;
  FUN_004e2f00(uVar1);
  uVar1 = FUN_004689a0(ppvVar3);
  local_2c = (void *)((uint)local_2c._2_2_ << 0x10);
  local_18 = 7;
  local_1c = 0;
  FUN_0040f680(uVar1,0,0xffffffff);
  if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_5c[0]);
  }
  local_48 = 7;
  local_4c = 0;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
  local_8._0_1_ = 4;
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  if (local_1c == 0) {
    FUN_0040eb60(&PTR_006fccac);
  }
  else {
    local_7c = 0x40;
    iVar2 = FUN_004d9950(&local_7c,0,1);
    if (iVar2 != -1) {
      uVar1 = FUN_005a0ed0(local_74,*(undefined4 *)(param_3 + 0x20),0xffffffff);
      local_8._0_1_ = 5;
      FUN_00486d00(iVar2,1,uVar1,0,0xffffffff);
      if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_74[0]);
      }
    }
    FUN_0040eaf0(&local_2c);
  }
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004e6bd0 @ 004e6bd0  kind=gamemisc  attributed-by=none  size=41 */

undefined1 FUN_004e6bd0(int param_1)

{
  char *in_ECX;
  int iVar1;
  
  iVar1 = 0;
  param_1 = param_1 - (int)in_ECX;
  do {
    if (*in_ECX != in_ECX[param_1]) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    in_ECX = in_ECX + 1;
  } while (iVar1 < 3);
  return 1;
}


/* FUN_004e6ce0 @ 004e6ce0  kind=gamemisc  attributed-by=none  size=30 */

int * FUN_004e6ce0(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  cVar1 = *(char *)(*param_1 + 0xd);
  piVar2 = (int *)*param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0xd);
    param_1 = piVar3;
  }
  return param_1;
}


/* FUN_004e6df0 @ 004e6df0  kind=gamemisc  attributed-by=none  size=97 */

void FUN_004e6df0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x34) == 0) {
    if (*(char *)(in_ECX + 0x56) != '\0') {
      *(undefined1 *)(in_ECX + 0x54) = 1;
      return;
    }
  }
  else if (*(int *)(in_ECX + 0x38) != 0) {
    *(undefined4 *)(in_ECX + 0x50) = DAT_0076b338;
    (**(code **)(**(int **)(in_ECX + 0x58) + 400))
              (*(int **)(in_ECX + 0x58),0,*(int *)(in_ECX + 0x34),0,8);
    (**(code **)(**(int **)(in_ECX + 0x58) + 0x1a0))
              (*(int **)(in_ECX + 0x58),*(undefined4 *)(in_ECX + 0x38));
    (**(code **)(**(int **)(in_ECX + 0x58) + 0x148))
              (*(int **)(in_ECX + 0x58),4,0,0,*(undefined4 *)(in_ECX + 0x3c),0,
               *(undefined4 *)(in_ECX + 0x40));
  }
  return;
}


/* FUN_004e71d0 @ 004e71d0  kind=gamemisc  attributed-by=none  size=166 */

undefined4 FUN_004e71d0(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined1 uStack0000000a;
  
  iVar2 = 0;
  do {
    if (*(char *)(param_1 + iVar2) != (&DAT_0076b340)[iVar2]) {
      if (param_2 != '\0') {
        return 0;
      }
      iVar2 = 0;
      _param_2 = 0xff;
      uStack0000000a = 0;
      do {
        if ((&param_2 + iVar2)[param_1 - (int)&param_2] != (&param_2)[iVar2]) {
          _param_2 = 0xff00;
          uStack0000000a = 0;
          cVar1 = FUN_004e6bd0(&param_2);
          if (cVar1 == '\0') {
            _param_2 = 0;
            uStack0000000a = 0xff;
            cVar1 = FUN_004e6bd0(&param_2);
            if (cVar1 == '\0') {
              return 0;
            }
          }
          return 1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 3);
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return 1;
}


/* FUN_0051c7a0 @ 0051c7a0  kind=gamemisc  attributed-by=none  size=97 */

float10 FUN_0051c7a0(int param_1)

{
  ushort uVar1;
  double local_c;
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if ((uVar1 & 8) != 0) {
    return (float10)*(double *)(param_1 + 8);
  }
  if ((uVar1 & 4) != 0) {
    return (float10)*(longlong *)(param_1 + 0x10);
  }
  local_c = 0.0;
  if ((uVar1 & 0x12) != 0) {
    local_c = 0.0;
    FUN_0054a330(*(undefined4 *)(param_1 + 4),&local_c,*(undefined4 *)(param_1 + 0x18),
                 *(undefined1 *)(param_1 + 0x1f));
  }
  return (float10)local_c;
}


/* FUN_0051c810 @ 0051c810  kind=gamemisc  attributed-by=none  size=122 */

undefined4 FUN_0051c810(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined8 local_14 [2];
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if ((uVar1 & 4) != 0) {
    return *(undefined4 *)(param_1 + 0x10);
  }
  if ((uVar1 & 8) != 0) {
    uVar2 = FUN_00534710(*(undefined8 *)(param_1 + 8));
    return uVar2;
  }
  if ((uVar1 & 0x12) != 0) {
    local_14[0] = 0;
    FUN_0054a9a0(*(undefined4 *)(param_1 + 4),local_14,*(undefined4 *)(param_1 + 0x18),
                 *(undefined1 *)(param_1 + 0x1f));
    return (undefined4)local_14[0];
  }
  return 0;
}


/* FUN_0051d110 @ 0051d110  kind=gamemisc  attributed-by=none  size=91 */

void FUN_0051d110(int param_1)

{
  int *piVar1;
  
  if ((*(byte *)(param_1 + 0x24) & 0x40) != 0) {
    piVar1 = *(int **)(param_1 + 0x18);
    piVar1[1] = *(int *)(*piVar1 + 0xa4);
    *(int **)(*piVar1 + 0xa4) = piVar1;
  }
  if ((*(byte *)(param_1 + 0x24) & 0x20) != 0) {
    FUN_005644e0(*(undefined4 *)(param_1 + 0x18));
  }
  *(ushort *)(param_1 + 0x24) = *(ushort *)(param_1 + 0x24) & 0xbe01 | 1;
  *(undefined1 *)(param_1 + 0x26) = 5;
  *(undefined4 *)(param_1 + 0x38) = 7;
  *(undefined1 *)(*(int *)(param_1 + 8) + 0x38) = 1;
  return;
}


/* FUN_0051d580 @ 0051d580  kind=gamemisc  attributed-by=none  size=96 */

void FUN_0051d580(int param_1,int param_2)

{
  if ((*(ushort *)(param_1 + 0x24) & 0x2460) != 0) {
    FUN_00574d80((undefined4 *)(param_1 + 8));
  }
  FUN_005521a0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x2c));
  if (param_2 < 0) {
    param_2 = 0;
  }
  *(int *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x1044010;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


/* FUN_0051e960 @ 0051e960  kind=gamemisc  attributed-by=none  size=212 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0051e960(int param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN_00579f80();
  if (iVar2 != 0) {
    return 0xffffffffffffffff;
  }
  if (DAT_0076b488 != 0) {
    (*DAT_00766630)(DAT_0076b488);
  }
  uVar1 = _DAT_0076b490;
  if (DAT_0076b488 != 0) {
    (*DAT_00766638)(DAT_0076b488);
  }
  if (0 < param_2) {
LAB_0051e9c7:
    FUN_0055e040(cube::Controller::vfunction12,0,param_1,param_2);
    return uVar1;
  }
  if (-1 < param_2) {
    if ((-1 < param_2) && ((0 < param_2 || (param_1 != 0)))) goto LAB_0051e9c7;
    if (DAT_0076b488 != 0) {
      (*DAT_00766630)(DAT_0076b488);
    }
    DAT_0076b498 = 0;
    DAT_0076b49c = 0;
    _DAT_0076b490 = 0;
    DAT_0076b4ac = 0;
    if (DAT_0076b488 != 0) {
      (*DAT_00766638)(DAT_0076b488);
    }
  }
  return uVar1;
}


/* FUN_0051f1f0 @ 0051f1f0  kind=gamemisc  attributed-by=none  size=283 */

void FUN_0051f1f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 local_9c [8];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  double local_7c;
  char local_6c [100];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_0053c140(param_1,param_2,param_3,local_9c);
  if (iVar1 == 0) {
    FUN_00532d10(local_9c);
    FUN_00532980(local_9c);
    FUN_005240c0(100,local_6c,"%04d-%02d-%02d %02d:%02d:%02d",local_94,local_90,local_8c,local_88,
                 local_84,(int)local_7c);
    if (*(int *)(param_1 + 8) == 0) {
      iVar1 = 1000000000;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x50);
    }
    iVar2 = 0;
    if (-1 < iVar1) {
      do {
        if (local_6c[iVar2] == '\0') break;
        iVar2 = iVar2 + 1;
      } while (iVar2 <= iVar1);
    }
    if (iVar1 < iVar2) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
    }
    else {
      iVar1 = FUN_005748c0(param_1 + 8,iVar2 + 1);
      if (iVar1 == 0) {
        memcpy(*(void **)(param_1 + 0xc),local_6c,iVar2 + 1);
        *(int *)(param_1 + 0x20) = iVar2;
        *(undefined4 *)(param_1 + 0x24) = 0x1030202;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0051f3c0 @ 0051f3c0  kind=gamemisc  attributed-by=none  size=251 */

void FUN_0051f3c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 local_9c [20];
  undefined4 local_88;
  undefined4 local_84;
  double local_7c;
  char local_6c [100];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_0053c140(param_1,param_2,param_3,local_9c);
  if (iVar1 == 0) {
    FUN_00532980(local_9c);
    FUN_005240c0(100,local_6c,"%02d:%02d:%02d",local_88,local_84,(int)local_7c);
    if (*(int *)(param_1 + 8) == 0) {
      iVar1 = 1000000000;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x50);
    }
    iVar2 = 0;
    if (-1 < iVar1) {
      do {
        if (local_6c[iVar2] == '\0') break;
        iVar2 = iVar2 + 1;
      } while (iVar2 <= iVar1);
    }
    if (iVar1 < iVar2) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
    }
    else {
      iVar1 = FUN_005748c0(param_1 + 8,iVar2 + 1);
      if (iVar1 == 0) {
        memcpy(*(void **)(param_1 + 0xc),local_6c,iVar2 + 1);
        *(int *)(param_1 + 0x20) = iVar2;
        *(undefined4 *)(param_1 + 0x24) = 0x1030202;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0051f6b0 @ 0051f6b0  kind=gamemisc  attributed-by=none  size=216 */

undefined4 FUN_0051f6b0(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = *(undefined4 **)((int)param_1 + 4);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    if (DAT_007665e0 == 0) {
      (*DAT_00766604)(puVar2);
      puVar2 = puVar1;
    }
    else {
      if (DAT_0076b488 != 0) {
        (*DAT_00766630)(DAT_0076b488);
      }
      iVar3 = (*DAT_00766608._4_4_)(puVar2);
      DAT_0076b360 = DAT_0076b360 - iVar3;
      if (DAT_0076b388 < DAT_0076b360) {
        DAT_0076b388 = DAT_0076b360;
      }
      DAT_0076b384 = DAT_0076b384 + -1;
      if (DAT_0076b3ac < DAT_0076b384) {
        DAT_0076b3ac = DAT_0076b384;
      }
      (*DAT_00766604)(puVar2);
      puVar2 = puVar1;
      if (DAT_0076b488 != 0) {
        (*DAT_00766638)(DAT_0076b488);
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined **)param_1 = &DAT_00712500;
  return 0;
}


/* FUN_0051f790 @ 0051f790  kind=gamemisc  attributed-by=none  size=254 */

void FUN_0051f790(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 local_9c [8];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  char local_6c [100];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_0053c140(param_1,param_2,param_3,local_9c);
  if (iVar1 == 0) {
    FUN_00532d10(local_9c);
    FUN_005240c0(100,local_6c,"%04d-%02d-%02d",local_94,local_90,local_8c);
    if (*(int *)(param_1 + 8) == 0) {
      iVar1 = 1000000000;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x50);
    }
    iVar2 = 0;
    if (-1 < iVar1) {
      do {
        if (local_6c[iVar2] == '\0') break;
        iVar2 = iVar2 + 1;
      } while (iVar2 <= iVar1);
    }
    if (iVar1 < iVar2) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
    }
    else {
      iVar1 = FUN_005748c0(param_1 + 8,iVar2 + 1);
      if (iVar1 == 0) {
        memcpy(*(void **)(param_1 + 0xc),local_6c,iVar2 + 1);
        *(int *)(param_1 + 0x20) = iVar2;
        *(undefined4 *)(param_1 + 0x24) = 0x1030202;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00521770 @ 00521770  kind=gamemisc  attributed-by=none  size=168 */

uint FUN_00521770(int param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  
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
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  iVar3 = FUN_00556c60(param_1,param_2,uVar5,param_3,1,0);
  if (iVar3 == 0) {
    uVar5 = FUN_005515c0(param_1,param_2,param_3,1,0,FUN_0055cd50,0,0,0);
  }
  else {
    uVar5 = 0;
  }
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar5 == 0xc0a)) {
    FUN_00553890(param_1,7,0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar5 = 7;
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar2 & uVar5;
}


/* FUN_00522690 @ 00522690  kind=gamemisc  attributed-by=none  size=110 */

undefined4 FUN_00522690(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = (*(code *)PTR_CloseHandle_007670a8)(*(undefined4 *)(param_1 + 8));
  while (iVar1 == 0) {
    iVar3 = iVar3 + 1;
    if (2 < iVar3) goto LAB_005226d9;
    (*(code *)PTR_Sleep_00767300)(100);
    iVar1 = (*(code *)PTR_CloseHandle_007670a8)(*(undefined4 *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (iVar1 != 0) {
    return 0;
  }
LAB_005226d9:
  uVar2 = (*(code *)PTR_GetLastError_007671bc)("winClose",*(undefined4 *)(param_1 + 0x1c),0x7dc3);
  uVar2 = FUN_0057fa50(0x100a,uVar2);
  return uVar2;
}


/* FUN_005232d0 @ 005232d0  kind=gamemisc  attributed-by=none  size=904 */

bool FUN_005232d0(byte *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  char *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte local_5;
  
  bVar1 = *param_1;
  local_5 = 0;
  bVar5 = 0;
  if (bVar1 == 0) {
LAB_0052335d:
    return bVar5 == 1;
  }
LAB_005232e7:
  iVar3 = (int)(char)bVar1;
  switch(iVar3) {
  case 9:
  case 10:
  case 0xc:
  case 0xd:
  case 0x20:
    goto switchD_005232fd_caseD_9;
  default:
    if (((&DAT_007121d8)[bVar1] & 0x46) != 0) {
      iVar2 = 1;
      bVar1 = (&DAT_007121d8)[param_1[1]];
      while ((bVar1 & 0x46) != 0) {
        iVar4 = iVar2 + 1;
        iVar2 = iVar2 + 1;
        bVar1 = (&DAT_007121d8)[param_1[iVar4]];
      }
      switch(iVar3) {
      case 0x43:
      case 99:
        if (iVar2 == 6) {
          pcVar6 = "create";
          iVar3 = 6;
          pbVar8 = param_1;
          do {
            iVar4 = iVar3;
            iVar3 = iVar4 + -1;
            if ((*pbVar8 == 0) || ((&DAT_007120d8)[*pbVar8] != (&DAT_007120d8)[(byte)*pcVar6]))
            goto LAB_00523472;
            pbVar8 = pbVar8 + 1;
            pcVar6 = pcVar6 + 1;
          } while (0 < iVar3);
          iVar3 = iVar4 + -2;
LAB_00523472:
          if ((iVar3 < 0) || ((&DAT_007120d8)[*pbVar8] == (&DAT_007120d8)[(byte)*pcVar6])) {
            iVar3 = 4;
            param_1 = param_1 + 5;
            goto LAB_0052339c;
          }
        }
        break;
      case 0x45:
      case 0x65:
        if (iVar2 == 3) {
          pbVar7 = &DAT_00719e0c;
          iVar3 = 3;
          pbVar8 = param_1;
          do {
            iVar4 = iVar3;
            iVar3 = iVar4 + -1;
            if ((*pbVar8 == 0) || ((&DAT_007120d8)[*pbVar8] != (&DAT_007120d8)[*pbVar7]))
            goto LAB_005235c2;
            pbVar8 = pbVar8 + 1;
            pbVar7 = pbVar7 + 1;
          } while (0 < iVar3);
          iVar3 = iVar4 + -2;
LAB_005235c2:
          if ((iVar3 < 0) || ((&DAT_007120d8)[*pbVar8] == (&DAT_007120d8)[*pbVar7])) {
            iVar3 = 7;
            param_1 = param_1 + 2;
            goto LAB_0052339c;
          }
        }
        else if (iVar2 == 7) {
          pcVar6 = "explain";
          iVar3 = 7;
          pbVar8 = param_1;
          do {
            iVar4 = iVar3;
            iVar3 = iVar4 + -1;
            if ((*pbVar8 == 0) || ((&DAT_007120d8)[*pbVar8] != (&DAT_007120d8)[(byte)*pcVar6]))
            goto LAB_00523622;
            pbVar8 = pbVar8 + 1;
            pcVar6 = pcVar6 + 1;
          } while (0 < iVar3);
          iVar3 = iVar4 + -2;
LAB_00523622:
          if ((iVar3 < 0) || ((&DAT_007120d8)[*pbVar8] == (&DAT_007120d8)[(byte)*pcVar6])) {
            iVar3 = 3;
            param_1 = param_1 + 6;
            goto LAB_0052339c;
          }
        }
        break;
      case 0x54:
      case 0x74:
        if (iVar2 != 7) {
          if (iVar2 == 4) {
            pbVar7 = &DAT_00719df8;
            iVar3 = 4;
            pbVar8 = param_1;
            do {
              iVar4 = iVar3;
              iVar3 = iVar4 + -1;
              if ((*pbVar8 == 0) || ((&DAT_007120d8)[*pbVar8] != (&DAT_007120d8)[*pbVar7]))
              goto LAB_00523532;
              pbVar8 = pbVar8 + 1;
              pbVar7 = pbVar7 + 1;
            } while (0 < iVar3);
            iVar3 = iVar4 + -2;
LAB_00523532:
            if ((-1 < iVar3) && ((&DAT_007120d8)[*pbVar8] != (&DAT_007120d8)[*pbVar7])) break;
            iVar3 = 5;
            param_1 = param_1 + 3;
          }
          else {
            if ((iVar2 != 9) || (iVar3 = FUN_005259c0(param_1,"temporary",9), iVar3 != 0)) break;
            iVar3 = 5;
            param_1 = param_1 + 8;
          }
          goto LAB_0052339c;
        }
        pcVar6 = "trigger";
        iVar3 = 7;
        pbVar8 = param_1;
        do {
          iVar4 = iVar3;
          iVar3 = iVar4 + -1;
          if ((*pbVar8 == 0) || ((&DAT_007120d8)[*pbVar8] != (&DAT_007120d8)[(byte)*pcVar6]))
          goto LAB_005234d2;
          pbVar8 = pbVar8 + 1;
          pcVar6 = pcVar6 + 1;
        } while (0 < iVar3);
        iVar3 = iVar4 + -2;
LAB_005234d2:
        if ((iVar3 < 0) || ((&DAT_007120d8)[*pbVar8] == (&DAT_007120d8)[(byte)*pcVar6])) {
          iVar3 = 6;
          param_1 = param_1 + 6;
          goto LAB_0052339c;
        }
      }
      iVar3 = 2;
      param_1 = param_1 + iVar2 + -1;
      break;
    }
    goto LAB_0052339a;
  case 0x22:
  case 0x27:
  case 0x60:
    bVar1 = param_1[1];
    pbVar8 = param_1;
    if (bVar1 == 0) {
      return false;
    }
    while (param_1 = pbVar8 + 1, (char)bVar1 != iVar3) {
      bVar1 = pbVar8[2];
      pbVar8 = param_1;
      if (bVar1 == 0) {
        return false;
      }
    }
    goto LAB_00523395;
  case 0x2d:
    if (param_1[1] != 0x2d) goto LAB_0052339a;
    while (bVar5 = local_5, bVar1 != 10) {
      bVar1 = param_1[1];
      param_1 = param_1 + 1;
      if (bVar1 == 0) goto LAB_0052335d;
    }
    if (*param_1 == 0) goto LAB_0052335d;
    iVar3 = 1;
    break;
  case 0x2f:
    if (param_1[1] != 0x2a) goto LAB_0052339a;
    bVar1 = param_1[2];
    param_1 = param_1 + 2;
    while( true ) {
      if (bVar1 == 0) {
        return false;
      }
      if ((bVar1 == 0x2a) && (param_1[1] == 0x2f)) break;
      bVar1 = param_1[1];
      param_1 = param_1 + 1;
    }
    if (*param_1 == 0) {
      return false;
    }
    param_1 = param_1 + 1;
    goto switchD_005232fd_caseD_9;
  case 0x3b:
    iVar3 = 0;
    break;
  case 0x5b:
    bVar1 = param_1[1];
    pbVar8 = param_1;
    if (bVar1 == 0) {
      return false;
    }
    while (param_1 = pbVar8 + 1, bVar1 != 0x5d) {
      bVar1 = pbVar8[2];
      pbVar8 = param_1;
      if (bVar1 == 0) {
        return false;
      }
    }
LAB_00523395:
    if (*param_1 == 0) {
      return false;
    }
LAB_0052339a:
    iVar3 = 2;
  }
LAB_0052339c:
  param_1 = param_1 + 1;
  local_5 = (&UNK_00713090)[(uint)local_5 * 8 + iVar3];
  bVar1 = *param_1;
  if (bVar1 == 0) {
    return local_5 == 1;
  }
  goto LAB_005232e7;
switchD_005232fd_caseD_9:
  iVar3 = 1;
  goto LAB_0052339c;
}


/* FUN_005239d0 @ 005239d0  kind=gamemisc  attributed-by=none  size=169 */

undefined4 FUN_005239d0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = CONCAT44(param_3,param_2);
  uVar1 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar1) {
    iVar3 = (int)uVar1 >> 0x1f;
    uVar4 = __alldiv(uVar1 + param_2 + -1,
                     (iVar3 + param_3 + (uint)CARRY4(uVar1,param_2)) - (uint)(uVar1 + param_2 == 0),
                     uVar1,iVar3);
    uVar4 = __allmul(uVar4,uVar1,iVar3);
  }
  iVar3 = FUN_005476b0(param_1,uVar4);
  if (iVar3 == 0) {
    iVar3 = (*(code *)PTR_SetEndOfFile_007672e8)(*(undefined4 *)(param_1 + 8));
    if (iVar3 != 0) {
      return 0;
    }
    uVar2 = (*(code *)PTR_GetLastError_007671bc)();
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    uVar2 = FUN_0057fa50(0x60a,uVar2,"winTruncate2",*(undefined4 *)(param_1 + 0x1c),0x7e66);
    return uVar2;
  }
  uVar2 = FUN_0057fa50(0x60a,*(undefined4 *)(param_1 + 0x14),"winTruncate1",
                       *(undefined4 *)(param_1 + 0x1c),0x7e62);
  return uVar2;
}


/* FUN_00523c30 @ 00523c30  kind=gamemisc  attributed-by=none  size=217 */

void FUN_00523c30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + -4);
    iVar4 = 1;
    iVar3 = DAT_0076b488;
    if (1 < iVar1) {
      do {
        iVar2 = *(int *)(param_1 + -4 + iVar4 * 4);
        if (iVar2 != 0) {
          if (DAT_007665e0 == 0) {
            (*DAT_00766604)(iVar2);
            iVar3 = DAT_0076b488;
          }
          else {
            if (iVar3 != 0) {
              (*DAT_00766630)(iVar3);
            }
            iVar3 = (*DAT_00766608._4_4_)(iVar2);
            DAT_0076b360 = DAT_0076b360 - iVar3;
            if (DAT_0076b388 < DAT_0076b360) {
              DAT_0076b388 = DAT_0076b360;
            }
            DAT_0076b384 = DAT_0076b384 + -1;
            if (DAT_0076b3ac < DAT_0076b384) {
              DAT_0076b3ac = DAT_0076b384;
            }
            (*DAT_00766604)(iVar2);
            iVar3 = DAT_0076b488;
            if (DAT_0076b488 != 0) {
              (*DAT_00766638)(DAT_0076b488);
              iVar3 = DAT_0076b488;
            }
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    FUN_00524410(param_1 + -4);
  }
  return;
}


/* FUN_00524570 @ 00524570  kind=gamemisc  attributed-by=none  size=101 */

undefined4 FUN_00524570(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  
  iVar1 = (*(code *)PTR_GetFileSize_00767198)(*(undefined4 *)(param_1 + 8),&local_8);
  *param_2 = iVar1;
  param_2[1] = local_8;
  if (iVar1 == -1) {
    iVar1 = (*(code *)PTR_GetLastError_007671bc)();
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x14) = iVar1;
      uVar2 = FUN_0057fa50(0x70a,iVar1,"winFileSize",*(undefined4 *)(param_1 + 0x1c),0x7ed4);
      return uVar2;
    }
  }
  return 0;
}


/* FUN_00525d90 @ 00525d90  kind=gamemisc  attributed-by=none  size=145 */

undefined4 FUN_00525d90(int param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 10;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    iVar1 = FUN_00556be0(param_1,param_2);
    if (iVar1 < 0) {
      uVar2 = 1;
      FUN_00553890(param_1,1,"unknown database: %s",param_2);
      goto LAB_00525dfd;
    }
  }
  uVar2 = FUN_0054f920(param_1,iVar1,0,0,0);
  FUN_00553890(param_1,uVar2,0);
LAB_00525dfd:
  uVar2 = FUN_0054a110(param_1,uVar2);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar2;
}


/* FUN_00527740 @ 00527740  kind=gamemisc  attributed-by=none  size=955 */

void FUN_00527740(undefined4 param_1,undefined1 *param_2,undefined8 *param_3,uint param_4,
                 int *param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int iVar8;
  int local_140;
  int local_11c;
  undefined1 local_110 [264];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar2 = param_4 & 2;
  iVar8 = 0;
  *(undefined4 *)(param_3 + 1) = 0xffffffff;
  puVar7 = param_2;
  if (param_2 == (undefined1 *)0x0) {
    iVar3 = FUN_0053b1b0(0x106,local_110);
    if (iVar3 != 0) goto LAB_00527aec;
    puVar7 = local_110;
  }
  iVar3 = FUN_00533710(puVar7);
  if (iVar3 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar4 = FUN_0057f890(iVar3);
  if (iVar4 != 0) {
    FUN_00524410(iVar3);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  uVar5 = 0x80000000;
  if (uVar2 != 0) {
    uVar5 = 0xc0000000;
  }
  if ((param_4 & 0x10) == 0) {
    cVar1 = ((param_4 & 4) != 0) + '\x03';
  }
  else {
    cVar1 = '\x01';
  }
  uVar6 = 0x80;
  if ((param_4 & 8) != 0) {
    uVar6 = 0x4000102;
  }
  iVar4 = FUN_0053c6d0();
  if (iVar4 == 0) {
    while (((local_11c = (*(code *)PTR_CreateFileA_007670b4)(iVar3,uVar5,3,0,cVar1,uVar6,0),
            iVar4 = local_140, local_11c == -1 &&
            (iVar4 = (*(code *)PTR_GetLastError_007671bc)(), iVar8 < DAT_007666d4)) &&
           ((iVar4 == 5 || ((iVar4 == 0x21 || (iVar4 == 0x20))))))) {
      iVar8 = iVar8 + 1;
      (*(code *)PTR_Sleep_00767300)(iVar8 * DAT_007666d8);
    }
  }
  else {
    while (((local_11c = (*(code *)PTR_CreateFileW_007670c0)(iVar3,uVar5,3,0,cVar1,uVar6,0),
            iVar4 = local_140, local_11c == -1 &&
            (iVar4 = (*(code *)PTR_GetLastError_007671bc)(), iVar8 < DAT_007666d4)) &&
           ((iVar4 == 5 || ((iVar4 == 0x21 || (iVar4 == 0x20))))))) {
      iVar8 = iVar8 + 1;
      (*(code *)PTR_Sleep_00767300)(iVar8 * DAT_007666d8);
    }
  }
  if (iVar8 != 0) {
    FUN_00525a30(10,"delayed %dms for lock/sharing conflict",
                 ((iVar8 + 1) * DAT_007666d8 * iVar8) / 2);
  }
  if (local_11c == -1) {
    *(int *)((int)param_3 + 0x14) = iVar4;
    FUN_0057fa50(0xe,iVar4,"winOpen",puVar7,0x847b);
    FUN_00524410(iVar3);
    if ((uVar2 != 0) && ((param_4 & 0x10) == 0)) {
      FUN_00527740(param_1,param_2,param_3,param_4 & 0xfffffff9 | 1,param_5);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00525a30(0xe,"cannot open file at line %d of [%.10s]",0x8481,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = (uVar2 != 0) + 1;
  }
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  *(undefined4 *)((int)param_3 + 4) = param_1;
  *(undefined **)param_3 = &DAT_00712078;
  *(int *)(param_3 + 1) = local_11c;
  *(undefined4 *)((int)param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 3) = 0;
  *(undefined1 **)((int)param_3 + 0x1c) = param_2;
  iVar8 = FUN_0057a310(param_2,&DAT_00716a1c);
  if ((iVar8 == 0) || (cVar1 = FUN_0053b110(iVar8,1,1), cVar1 != '\0')) {
    *(byte *)(param_3 + 2) = *(byte *)(param_3 + 2) | 0x10;
  }
  FUN_00524410(iVar3);
LAB_00527aec:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00527b60 @ 00527b60  kind=gamemisc  attributed-by=none  size=473 */

void FUN_00527b60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_a0;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar4 = 0;
  iVar1 = FUN_00533710(param_2);
  if (iVar1 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (DAT_0076b480 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_0076721c)(local_9c);
    DAT_0076b480 = (local_8c == 2) + 1;
  }
  if (DAT_0076b480 == 2) {
    uVar2 = (*(code *)PTR_GetFileAttributesW_00767180)();
    while (uVar2 != 0xffffffff) {
      iVar3 = local_a0;
      if ((uVar2 & 0x10) != 0) goto LAB_00527d11;
      iVar3 = (*(code *)PTR_DeleteFileW_007670fc)(iVar1);
      if (iVar3 != 0) goto LAB_00527c59;
      iVar3 = (*(code *)PTR_GetLastError_007671bc)();
      if ((DAT_007666d4 <= iVar4) || (((iVar3 != 5 && (iVar3 != 0x21)) && (iVar3 != 0x20))))
      goto LAB_00527d11;
      iVar4 = iVar4 + 1;
      (*(code *)PTR_Sleep_00767300)(iVar4 * DAT_007666d8);
      uVar2 = (*(code *)PTR_GetFileAttributesW_00767180)(iVar1);
    }
    iVar3 = (*(code *)PTR_GetLastError_007671bc)();
  }
  else {
    uVar2 = (*(code *)PTR_GetFileAttributesA_00767174)(iVar1);
    while (uVar2 != 0xffffffff) {
      iVar3 = local_a0;
      if ((uVar2 & 0x10) != 0) goto LAB_00527d11;
      iVar3 = (*(code *)PTR_DeleteFileA_007670f0)(iVar1);
      if (iVar3 != 0) goto LAB_00527c59;
      iVar3 = (*(code *)PTR_GetLastError_007671bc)();
      if ((DAT_007666d4 <= iVar4) || (((iVar3 != 5 && (iVar3 != 0x21)) && (iVar3 != 0x20))))
      goto LAB_00527d11;
      iVar4 = iVar4 + 1;
      (*(code *)PTR_Sleep_00767300)(iVar4 * DAT_007666d8);
      uVar2 = (*(code *)PTR_GetFileAttributesA_00767174)(iVar1);
    }
    iVar3 = (*(code *)PTR_GetLastError_007671bc)();
  }
  if ((iVar3 == 2) || (iVar3 == 3)) {
LAB_00527c59:
    if (iVar4 != 0) {
      FUN_00525a30(10,"delayed %dms for lock/sharing conflict",
                   ((iVar4 + 1) * DAT_007666d8 * iVar4) / 2);
    }
  }
  else {
LAB_00527d11:
    FUN_0057fa50(0xa0a,iVar3,"winDelete",param_2,0x8515);
  }
  FUN_00524410(iVar1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00528720 @ 00528720  kind=gamemisc  attributed-by=none  size=218 */

uint FUN_00528720(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,code *param_9)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = (int *)0x0;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  if (param_9 != (code *)0x0) {
    piVar3 = (int *)FUN_00552230(param_1,0xc);
    if (piVar3 == (int *)0x0) {
      (*param_9)(param_5);
      uVar2 = 1;
      goto LAB_005287ba;
    }
    piVar3[0] = 0;
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[1] = (int)param_9;
    piVar3[2] = param_5;
  }
  uVar2 = FUN_005515c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar3);
  if ((piVar3 != (int *)0x0) && (*piVar3 == 0)) {
    (*param_9)(param_5);
    FUN_005521a0(param_1,piVar3);
  }
LAB_005287ba:
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


/* FUN_00528890 @ 00528890  kind=gamemisc  attributed-by=none  size=73 */

undefined4 FUN_00528890(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x1c) & 0x12) == 0) {
    uVar1 = FUN_0056bce0(param_1,1);
    return uVar1;
  }
  FUN_00574600(param_1);
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xfffd | 0x10;
  if (*(int *)(param_1 + 0x18) != 0) {
    return *(undefined4 *)(param_1 + 4);
  }
  return 0;
}


/* FUN_005288e0 @ 005288e0  kind=gamemisc  attributed-by=none  size=51 */

int FUN_005288e0(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x1c) & 0x10) == 0) {
    iVar1 = FUN_0056bce0(param_1,1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((*(ushort *)(param_1 + 0x1c) & 0x4000) != 0) {
    iVar1 = iVar1 + *(int *)(param_1 + 0x10);
  }
  return iVar1;
}


/* FUN_005290e0 @ 005290e0  kind=gamemisc  attributed-by=none  size=37 */

bool FUN_005290e0(int param_1,int param_2)

{
  for (; (0 < param_2 && (*(char *)(param_1 + -1 + param_2) == ' ')); param_2 = param_2 + -1) {
  }
  return param_2 == 0;
}


/* FUN_0052e070 @ 0052e070  kind=gamemisc  attributed-by=none  size=182 */

int FUN_0052e070(int *param_1,int param_2,int param_3,undefined4 param_4,code *param_5,
                undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0057d290(param_1,param_2);
  if (iVar1 == 0) {
    if (param_3 != 0) {
      iVar1 = param_1[0x11] + param_2 * 0x28 + -0x28;
      iVar2 = FUN_00575040(iVar1,param_3,param_4,param_6,param_5);
      if ((iVar2 == 0) && ((char)param_6 != '\0')) {
        iVar2 = FUN_0056c290(iVar1,*(undefined1 *)(*(int *)(*(int *)(*param_1 + 0x10) + 0xc) + 0x4d)
                            );
      }
      FUN_00553890(*param_1,iVar2,0);
      iVar1 = FUN_0054a110(*param_1,iVar2);
    }
    if (*(int *)(*param_1 + 0xc) != 0) {
      (*DAT_00766638)(*(int *)(*param_1 + 0xc));
      return iVar1;
    }
  }
  else if ((param_5 != (code *)0x0) && (param_5 != (code *)0xffffffff)) {
    (*param_5)(param_3);
  }
  return iVar1;
}


/* FUN_0052e130 @ 0052e130  kind=gamemisc  attributed-by=none  size=256 */

uint FUN_0052e130(int param_1,undefined4 param_2,int param_3,int param_4,code *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0x11421,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    return 0x15;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (*(int *)(iVar1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(iVar1 + 0xc));
  }
  iVar2 = *(int *)(param_1 + 0x14);
  if (((param_3 < 0) || (param_4 < 0)) || (*(int *)(param_1 + 4) < param_4 + param_3)) {
    uVar4 = 1;
    FUN_00553890(iVar1,1,0);
  }
  else if (iVar2 == 0) {
    uVar4 = 4;
  }
  else {
    FUN_0054d260(**(undefined4 **)(param_1 + 0x10));
    uVar4 = (*param_5)(*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 8) + param_4,param_3,
                       param_2);
    FUN_0054de80(*(undefined4 *)(param_1 + 0x10));
    if (uVar4 == 4) {
      FUN_005734d0(iVar2);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    else {
      *(uint *)(iVar1 + 0x2c) = uVar4;
      *(uint *)(iVar2 + 0x58) = uVar4;
    }
  }
  if ((*(char *)(iVar1 + 0x38) != '\0') || (uVar4 == 0xc0a)) {
    FUN_00553890(iVar1,7,0);
    *(undefined1 *)(iVar1 + 0x38) = 0;
    uVar4 = 7;
  }
  uVar3 = *(uint *)(iVar1 + 0x30);
  if (*(int *)(iVar1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(iVar1 + 0xc));
  }
  return uVar3 & uVar4;
}


/* FUN_00532980 @ 00532980  kind=gamemisc  attributed-by=none  size=181 */

void FUN_00532980(uint *param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  if (*(char *)((int)param_1 + 0x29) == '\0') {
    FUN_00532a40(param_1);
    iVar1 = __allrem(*param_1 + 43200000,param_1[1] + (uint)(0xfd6cd1ff < *param_1),86400000,0);
    *(undefined1 *)((int)param_1 + 0x29) = 1;
    iVar2 = (int)((double)iVar1 / 1000.0);
    param_1[5] = iVar2 / 0xe10;
    dVar3 = (double)iVar1 / 1000.0 - (double)iVar2;
    *(double *)(param_1 + 8) = dVar3;
    param_1[6] = (iVar2 % 0xe10) / 0x3c;
    *(double *)(param_1 + 8) = (double)((iVar2 % 0xe10) % 0x3c) + dVar3;
  }
  return;
}


/* FUN_00532a40 @ 00532a40  kind=gamemisc  attributed-by=none  size=319 */

void FUN_00532a40(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if (*(char *)((int)param_1 + 0x2a) == '\0') {
    uVar4 = FUN_0068d946();
    *(undefined8 *)param_1 = uVar4;
    *(undefined1 *)((int)param_1 + 0x2a) = 1;
    if (*(char *)((int)param_1 + 0x29) != '\0') {
      uVar2 = (param_1[6] + (param_1[5] * 0x10 - param_1[5]) * 4) * 60000;
      uVar4 = FUN_0068d946();
      uVar3 = uVar2 - (uint)uVar4;
      uVar1 = *param_1;
      *param_1 = *param_1 + uVar3;
      param_1[1] = param_1[1] +
                   ((((int)uVar2 >> 0x1f) - (int)((ulonglong)uVar4 >> 0x20)) -
                   (uint)(uVar2 < (uint)uVar4)) + (uint)CARRY4(uVar1,uVar3);
      if (*(char *)((int)param_1 + 0x2b) != '\0') {
        uVar2 = param_1[7] * 60000;
        uVar1 = *param_1;
        *param_1 = *param_1 + param_1[7] * -60000;
        *(undefined2 *)(param_1 + 10) = 0;
        *(undefined1 *)((int)param_1 + 0x2b) = 0;
        param_1[1] = (param_1[1] - ((int)uVar2 >> 0x1f)) - (uint)(uVar1 < uVar2);
      }
    }
  }
  return;
}


/* FUN_00532d10 @ 00532d10  kind=gamemisc  attributed-by=none  size=279 */

void FUN_00532d10(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((char)param_1[10] == '\0') {
    if (*(char *)((int)param_1 + 0x2a) == '\0') {
      param_1[2] = 2000;
      param_1[3] = 1;
      param_1[4] = 1;
      *(undefined1 *)(param_1 + 10) = 1;
      return;
    }
    iVar1 = __alldiv(*param_1 + 43200000,param_1[1] + (uint)(0xfd6cd1ff < *param_1),86400000,0);
    iVar4 = (int)(((double)iVar1 - 1867216.25) / 36524.25);
    iVar1 = iVar1 + (iVar4 - ((int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2)) + 0x5f5;
    iVar6 = (int)(((double)iVar1 - 122.1) / 365.25);
    iVar4 = (iVar6 * 0x8ead) / 100;
    iVar5 = (int)((double)(iVar1 - iVar4) / 30.6001);
    param_1[4] = (iVar1 - (int)((double)iVar5 * 30.6001)) - iVar4;
    uVar2 = iVar5 - 1;
    if (0xd < iVar5) {
      uVar2 = iVar5 - 0xd;
    }
    param_1[3] = uVar2;
    uVar3 = iVar6 - 0x126c;
    if ((int)uVar2 < 3) {
      uVar3 = iVar6 - 0x126b;
    }
    param_1[2] = uVar3;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  return;
}


/* FUN_005336b0 @ 005336b0  kind=gamemisc  attributed-by=none  size=95 */

int FUN_005336b0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 8) + 0x50);
  iVar2 = (int)uVar1 >> 0x1f;
  if ((iVar2 <= param_3) && ((iVar2 < param_3 || (uVar1 < param_2)))) {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
    return 0;
  }
  iVar2 = FUN_0055da00(param_2);
  if (iVar2 == 0) {
    FUN_0051d110(param_1);
  }
  return iVar2;
}


/* FUN_00533710 @ 00533710  kind=gamemisc  attributed-by=none  size=169 */

void FUN_00533710(undefined4 param_1)

{
  int iVar1;
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
    FUN_0057c220(param_1);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar1 = FUN_0057c220(param_1);
  if (iVar1 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_0057b1e0(iVar1);
  FUN_00524410(iVar1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00533960 @ 00533960  kind=gamemisc  attributed-by=none  size=413 */

undefined4
FUN_00533960(int param_1,char *param_2,byte param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint extraout_ECX;
  int extraout_EDX;
  char *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  int local_c;
  
  pcVar2 = param_2;
  uVar6 = 0;
  if (param_2 != (char *)0x0) {
    cVar1 = *param_2;
    pcVar5 = param_2;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    uVar6 = (int)pcVar5 - (int)param_2 & 0x3fffffff;
  }
  param_2 = (char *)(uint)param_3;
  if ((param_2 == (char *)0x4) || (param_2 == (char *)0x8)) {
    param_2 = (char *)0x2;
  }
  else if ((param_2 == (char *)0x0) || (3 < param_2)) {
    FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0x1bf1f,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    return 0x15;
  }
  if (pcVar2 == (char *)0x0) {
    iVar3 = *(int *)(param_1 + 8);
  }
  else {
    iVar3 = FUN_00537090(param_1,pcVar2,0);
  }
  if (((iVar3 != 0) && (iVar3 = iVar3 + (int)param_2 * 0x14, iVar3 != 0x14)) &&
     (*(int *)(iVar3 + -8) != 0)) {
    if (*(int *)(param_1 + 0x84) != 0) {
      FUN_00553890(param_1,5,"unable to delete/modify collation sequence due to active statements");
      return 5;
    }
    FUN_00553a10(param_1);
    if ((*(byte *)(extraout_EDX + 4) & 0xfffffff7) == extraout_ECX) {
      iVar4 = FUN_0055ad50(param_1 + 0x19c,pcVar2,uVar6);
      puVar7 = (undefined4 *)(iVar4 + 0x10);
      local_c = 3;
      do {
        if (*(char *)(puVar7 + -3) == *(char *)(iVar3 + -0x10)) {
          if ((code *)*puVar7 != (code *)0x0) {
            (*(code *)*puVar7)(puVar7[-2]);
          }
          puVar7[-1] = 0;
        }
        puVar7 = puVar7 + 5;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
  }
  if (pcVar2 == (char *)0x0) {
    iVar3 = *(int *)(param_1 + 8);
  }
  else {
    iVar3 = FUN_00537090(param_1,pcVar2,1);
  }
  if ((iVar3 != 0) && (iVar3 = iVar3 + (int)param_2 * 0x14, iVar3 != 0x14)) {
    *(undefined4 *)(iVar3 + -8) = param_5;
    *(undefined4 *)(iVar3 + -0xc) = param_4;
    *(undefined4 *)(iVar3 + -4) = param_6;
    *(byte *)(iVar3 + -0x10) = param_3 & 8 | (byte)param_2;
    FUN_00553890(param_1,0,0);
    return 0;
  }
  return 7;
}


/* FUN_00533b00 @ 00533b00  kind=gamemisc  attributed-by=none  size=331 */

uint FUN_00533b00(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,code *param_5)

{
  undefined4 *_Dst;
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  uVar6 = 0;
  if (param_2 != (char *)0x0) {
    cVar1 = *param_2;
    pcVar5 = param_2;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    uVar6 = (int)pcVar5 - (int)param_2 & 0x3fffffff;
  }
  if (*(int *)(param_1 + 0x130) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0057a870(param_2,uVar6);
    uVar2 = uVar2 % *(uint *)(param_1 + 0x124);
  }
  iVar3 = FUN_00537190(param_1 + 0x124,param_2,uVar6,uVar2);
  if ((iVar3 == 0) || (*(int *)(iVar3 + 8) == 0)) {
    puVar4 = (undefined4 *)FUN_00552230(param_1,uVar6 + 0x11);
    if (puVar4 != (undefined4 *)0x0) {
      _Dst = puVar4 + 4;
      memcpy(_Dst,param_2,uVar6 + 1);
      *puVar4 = param_3;
      puVar4[2] = param_4;
      puVar4[1] = _Dst;
      puVar4[3] = param_5;
      iVar3 = FUN_0055ada0(param_1 + 0x124,_Dst,uVar6,puVar4);
      if (iVar3 != 0) {
        *(undefined1 *)(param_1 + 0x38) = 1;
        FUN_005521a0(param_1,iVar3);
      }
    }
    uVar6 = 0;
  }
  else {
    FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0x18c17,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    uVar6 = 0x15;
  }
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar6 == 0xc0a)) {
    FUN_00553890(param_1,7,0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar6 = 7;
  }
  uVar6 = *(uint *)(param_1 + 0x30) & uVar6;
  if ((uVar6 != 0) && (param_5 != (code *)0x0)) {
    (*param_5)(param_4);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar6;
}


/* FUN_005342f0 @ 005342f0  kind=gamemisc  attributed-by=none  size=185 */

void FUN_005342f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int local_8;
  
  iVar4 = param_1;
  FUN_0054d340(param_1);
  param_1 = 0;
  if (0 < *(int *)(iVar4 + 0x14)) {
    local_8 = 0;
    do {
      iVar1 = *(int *)(local_8 + 0xc + *(int *)(iVar4 + 0x10));
      if (iVar1 != 0) {
        for (puVar2 = *(undefined4 **)(iVar1 + 0x10); puVar2 != (undefined4 *)0x0;
            puVar2 = (undefined4 *)*puVar2) {
          if ((*(byte *)(puVar2[2] + 0x2a) & 0x10) != 0) {
            piVar5 = (int *)(puVar2[2] + 0x38);
            iVar1 = *piVar5;
            while (iVar1 != 0) {
              piVar3 = (int *)*piVar5;
              if (*piVar3 == iVar4) {
                *piVar5 = piVar3[6];
                piVar5 = piVar3 + 3;
                *piVar5 = *piVar5 + -1;
                iVar1 = *piVar3;
                if (*piVar5 == 0) {
                  piVar5 = (int *)piVar3[2];
                  if (piVar5 != (int *)0x0) {
                    (**(code **)(*piVar5 + 0x10))(piVar5);
                  }
                  FUN_005521a0(iVar1,piVar3);
                }
                break;
              }
              piVar5 = piVar3 + 6;
              iVar1 = piVar3[6];
            }
          }
        }
      }
      param_1 = param_1 + 1;
      local_8 = local_8 + 0x10;
    } while (param_1 < *(int *)(iVar4 + 0x14));
  }
  FUN_0054de20(iVar4);
  return;
}


/* FUN_0053a850 @ 0053a850  kind=gamemisc  attributed-by=none  size=148 */

int FUN_0053a850(byte *param_1)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int local_c;
  
  local_c = 0;
  puVar5 = &param_1;
  while( true ) {
    piVar1 = puVar5 + 2;
    iVar7 = puVar5[1];
    piVar2 = puVar5 + 3;
    iVar4 = puVar5[4];
    iVar6 = 0;
    puVar5 = puVar5 + 5;
    while (iVar7 != 0) {
      bVar3 = *param_1;
      iVar7 = iVar7 + -1;
      if (((&DAT_007121d8)[bVar3] & 4) == 0) {
        return local_c;
      }
      param_1 = param_1 + 1;
      iVar6 = (int)(char)bVar3 + (iVar6 * 5 + -0x18) * 2;
    }
    if (iVar6 < *piVar1) {
      return local_c;
    }
    if (*piVar2 < iVar6) {
      return local_c;
    }
    if ((iVar4 != 0) && (iVar4 != (char)*param_1)) break;
    param_1 = param_1 + 1;
    local_c = local_c + 1;
    *(int *)*puVar5 = iVar6;
    if (iVar4 == 0) {
      return local_c;
    }
  }
  return local_c;
}


/* FUN_0053a8f0 @ 0053a8f0  kind=gamemisc  attributed-by=none  size=374 */

/* WARNING: Type propagation algorithm not settling */

void FUN_0053a8f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int local_a4;
  int local_a0 [5];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar2 = 0;
  if (DAT_0076b480 == 0) {
    local_a0[1] = 0x94;
    (*(code *)PTR_GetVersionExA_0076721c)(local_a0 + 1);
    DAT_0076b480 = (local_8c == 2) + 1;
  }
  if (DAT_0076b480 == 2) {
    local_a0[0] = 0;
    iVar1 = (*(code *)PTR_FormatMessageW_00767138)(0x1300,0,param_1,0,local_a0);
    bVar3 = true;
    if (iVar1 == 0) goto LAB_0053aa1d;
    if (DAT_0076b3bc != (code *)0x0) {
      (*DAT_0076b3bc)();
    }
    uVar2 = FUN_0057b270(local_a0[0]);
    iVar4 = local_a0[0];
    if (DAT_0076b3c0 != (code *)0x0) {
      (*DAT_0076b3c0)();
      iVar4 = local_a0[0];
    }
  }
  else {
    local_a4 = 0;
    iVar1 = (*(code *)PTR_FormatMessageA_0076712c)(0x1300,0,param_1,0,&local_a4,0,0);
    bVar3 = true;
    if (iVar1 == 0) goto LAB_0053aa1d;
    if (DAT_0076b3bc != (code *)0x0) {
      (*DAT_0076b3bc)();
    }
    local_a0[0] = FUN_0053dde0(local_a4);
    if (local_a0[0] == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0057b270(local_a0[0]);
      FUN_00524410(local_a0[0]);
    }
    iVar4 = local_a4;
    if (DAT_0076b3c0 != (code *)0x0) {
      (*DAT_0076b3c0)();
      iVar4 = local_a4;
    }
  }
  (*(code *)PTR_LocalFree_00767294)(iVar4);
  bVar3 = iVar1 == 0;
LAB_0053aa1d:
  if (bVar3) {
    FUN_005240c0(param_2,param_3,"OsError 0x%x (%u)",param_1,param_1);
  }
  else {
    FUN_005240c0(param_2,param_3,&DAT_00716900,uVar2);
    FUN_00524410(uVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0053ac70 @ 0053ac70  kind=gamemisc  attributed-by=none  size=286 */

void FUN_0053ac70(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint local_a4;
  int local_a0;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_a0 = param_1;
  if (DAT_0076b480 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_0076721c)(local_9c);
    DAT_0076b480 = (local_8c == 2) + 1;
  }
  if (DAT_0076b480 == 2) {
    uVar7 = 0x1fe;
    iVar2 = DAT_007666d0 + 2;
    uVar6 = 1;
  }
  else {
    iVar2 = 4;
    puVar5 = &local_a4;
    if (DAT_007665e4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*DAT_00766628)(5);
      if (iVar4 != 0) {
        (*DAT_00766630)(iVar4);
      }
    }
    do {
      uVar1 = FUN_00544c20();
      *(undefined1 *)puVar5 = uVar1;
      puVar5 = (uint *)((int)puVar5 + 1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (iVar4 != 0) {
      (*DAT_00766638)(iVar4);
    }
    uVar7 = 1;
    sVar3 = (short)((ulonglong)(local_a4 & 0x7fffffff) % 0x1fd);
    iVar2 = DAT_007666d0 + 2 + (int)sVar3;
    *(short *)(local_a0 + 0xe) = sVar3;
    uVar6 = 3;
    param_1 = local_a0;
  }
  iVar2 = FUN_0057f980(param_1 + 8,uVar6,iVar2,0,uVar7,0);
  if (iVar2 == 0) {
    uVar6 = (*(code *)PTR_GetLastError_007671bc)();
    *(undefined4 *)(param_1 + 0x14) = uVar6;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


