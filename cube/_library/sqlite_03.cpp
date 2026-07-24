// sqlite_03 (_library) -- cube. 200 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "sqlite_03.h"

/* FUN_00560300 @ 00560300  kind=lib  attributed-by=lib-island  size=39 */

undefined4 FUN_00560300(int param_1)

{
  if ((*(char *)(param_1 + 4) == '\0') &&
     ((*(int *)**(int **)(param_1 + 0x3c) < 2 || (((int *)**(int **)(param_1 + 0x3c))[0xd] == 0))))
  {
    return 0;
  }
  return 1;
}


/* FUN_00560330 @ 00560330  kind=lib  attributed-by=lib-island  size=512 */

int FUN_00560330(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  iVar4 = *(int *)(param_1 + 0x10);
  local_8 = *(uint *)(iVar4 + 0x7c) / *(uint *)(iVar4 + 0x80);
  local_10 = 0;
  if (local_8 < 2) {
    iVar4 = FUN_00542bc0(param_1);
    return iVar4;
  }
  *(char *)(iVar4 + 0x14) = *(char *)(iVar4 + 0x14) + '\x01';
  uVar5 = *(uint *)(param_1 + 0x14);
  iVar7 = 0;
  iVar6 = (~(local_8 - 1) & uVar5 - 1) + 1;
  local_c = 0;
  if (*(uint *)(iVar4 + 0x18) < uVar5) {
    local_8 = (uVar5 - iVar6) + 1;
  }
  else if (*(uint *)(iVar4 + 0x18) < (local_8 - 1) + iVar6) {
    local_8 = (*(uint *)(iVar4 + 0x18) - iVar6) + 1;
  }
  local_18 = 0;
  uVar5 = local_8;
  iVar8 = iVar6;
  if (0 < (int)local_8) {
    do {
      if (local_10 != 0) goto LAB_0056051a;
      if ((iVar8 == *(int *)(param_1 + 0x14)) ||
         (iVar3 = FUN_0054c2e0(*(undefined4 *)(iVar4 + 0x38),iVar8), uVar5 = local_8, iVar3 == 0)) {
        if ((iVar8 != DAT_007666d0 / *(int *)(iVar4 + 0x80) + 1) &&
           (local_10 = FUN_0055eb70(iVar4,iVar8,&local_14,0), iVar3 = local_14, uVar5 = local_8,
           local_10 == 0)) {
          local_10 = FUN_00542bc0(local_14);
          if ((*(byte *)(iVar3 + 0x18) & 4) != 0) {
            local_c = 1;
          }
          iVar1 = *(int *)(iVar3 + 0x10);
          FUN_00561130(iVar3);
          uVar5 = local_8;
          iVar7 = local_c;
          if (*(int *)(*(int *)(iVar1 + 0xb4) + 0xc) == 0) {
            FUN_00541a10(iVar1);
            uVar5 = local_8;
            iVar7 = local_c;
          }
        }
      }
      else {
        FUN_00560e90(*(undefined4 *)(iVar4 + 0xb4),iVar8,0,&local_1c);
        local_14 = local_1c;
        uVar5 = local_8;
        if (local_1c != 0) {
          if ((*(byte *)(local_1c + 0x18) & 4) != 0) {
            iVar7 = 1;
          }
          iVar3 = *(int *)(local_1c + 0x10);
          local_c = iVar7;
          FUN_00561130(local_1c);
          uVar5 = local_8;
          if (*(int *)(*(int *)(iVar3 + 0xb4) + 0xc) == 0) {
            FUN_00541a10(iVar3);
            uVar5 = local_8;
          }
        }
      }
      uVar2 = local_8;
      local_18 = local_18 + 1;
      iVar8 = iVar8 + 1;
    } while (local_18 < (int)uVar5);
    if ((local_10 == 0) && (iVar7 != 0)) {
      iVar7 = 0;
      do {
        FUN_00560e90(*(undefined4 *)(iVar4 + 0xb4),iVar6 + iVar7,0,&param_1);
        if (param_1 != 0) {
          iVar8 = *(int *)(param_1 + 0x10);
          *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) | 4;
          FUN_00561130(param_1);
          if (*(int *)(*(int *)(iVar8 + 0xb4) + 0xc) == 0) {
            FUN_00541a10(iVar8);
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar2);
    }
  }
LAB_0056051a:
  *(char *)(iVar4 + 0x14) = *(char *)(iVar4 + 0x14) + -1;
  return local_10;
}


/* FUN_00560540 @ 00560540  kind=lib  attributed-by=lib-island  size=1437 */

undefined4
FUN_00560540(int *param_1,int *param_2,uint *param_3,int *param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined **ppuVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  char cVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  uint local_20;
  uint local_1c;
  char *local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  char *local_8;
  
  piVar10 = param_2;
  local_10 = *param_3;
  local_14 = 0;
  uVar14 = 0;
  if (param_2 != (int *)0x0) {
    cVar11 = (char)*param_2;
    piVar13 = param_2;
    while (cVar11 != '\0') {
      piVar13 = (int *)((int)piVar13 + 1);
      cVar11 = *(char *)piVar13;
    }
    uVar14 = (int)piVar13 - (int)param_2 & 0x3fffffff;
  }
  if (((((local_10 & 0x40) == 0) && (DAT_007665ec == 0)) || (uVar14 < 5)) ||
     ((*param_2 != 0x656c6966 || ((char)param_2[1] != ':')))) {
    iVar15 = FUN_00579f80();
    if (iVar15 != 0) {
      return 7;
    }
    local_8 = (char *)FUN_0055da00(uVar14 + 2);
    if (local_8 == (char *)0x0) {
      return 7;
    }
    memcpy(local_8,param_2,uVar14);
    local_10 = local_10 & 0xffffffbf;
    (local_8 + uVar14)[0] = '\0';
    (local_8 + uVar14)[1] = '\0';
LAB_00560a34:
    iVar15 = FUN_005224a0(param_1);
    *param_4 = iVar15;
    if (iVar15 != 0) goto LAB_00560a72;
    uVar4 = FUN_00523d10("no such vfs: %s",param_1);
  }
  else {
    local_10 = local_10 | 0x40;
    iVar12 = 0;
    iVar15 = uVar14 + 2;
    iVar9 = 0;
    local_8 = (char *)0x0;
    param_2 = (int *)0x0;
    local_c = 0;
    if (1 < uVar14) {
      do {
        iVar12 = iVar12 + (uint)(*(char *)((int)piVar10 + iVar9) == '&');
        iVar5 = iVar9 + 1;
        iVar9 = iVar9 + 2;
        param_2 = (int *)((int)param_2 + (uint)(*(char *)((int)piVar10 + iVar5) == '&'));
        local_8 = (char *)iVar12;
      } while (iVar9 < (int)(uVar14 - 1));
    }
    iVar12 = 0;
    if (iVar9 < (int)uVar14) {
      iVar15 = iVar15 + (uint)(*(char *)(iVar9 + (int)piVar10) == '&');
    }
    iVar9 = FUN_00579f80();
    if ((iVar9 != 0) ||
       (local_8 = (char *)FUN_0055da00((int)local_8 + (int)param_2 + iVar15), local_8 == (char *)0x0
       )) {
      return 7;
    }
    if ((*(char *)((int)piVar10 + 5) != '/') || (*(char *)((int)piVar10 + 6) != '/')) {
      iVar15 = 5;
LAB_005606a1:
      cVar11 = *(char *)(iVar15 + (int)piVar10);
      if (cVar11 != '\0') {
        iVar9 = 0;
        do {
          if (cVar11 == '#') break;
          iVar5 = iVar15 + 1;
          if (((cVar11 == '%') &&
              (bVar1 = *(byte *)(iVar5 + (int)piVar10), ((&DAT_007121d8)[bVar1] & 8) != 0)) &&
             (((&DAT_007121d8)[*(byte *)(iVar15 + 2 + (int)piVar10)] & 8) != 0)) {
            cVar11 = *(char *)(iVar15 + 2 + (int)piVar10);
            iVar5 = iVar15 + 3;
            cVar11 = (bVar1 + ((char)bVar1 >> 6 & 1U) * -7) * '\x10' +
                     (cVar11 + (cVar11 >> 6 & 1U) * -7 & 0xf);
            if (cVar11 == '\0') {
              cVar11 = *(char *)(iVar5 + (int)piVar10);
              while ((iVar12 = local_c, cVar11 != '\0' && (cVar11 != '#'))) {
                if (iVar9 == 0) {
                  bVar17 = cVar11 == '?';
LAB_00560784:
                  if (bVar17) break;
                }
                else {
                  if (iVar9 == 1) {
                    if (cVar11 != '=') {
LAB_00560781:
                      bVar17 = cVar11 == '&';
                      goto LAB_00560784;
                    }
                    break;
                  }
                  if (iVar9 == 2) goto LAB_00560781;
                }
                iVar15 = iVar5 + 1;
                iVar5 = iVar5 + 1;
                cVar11 = *(char *)(iVar15 + (int)piVar10);
              }
            }
            else {
              local_8[local_c] = cVar11;
              iVar12 = local_c + 1;
              local_c = local_c + 1;
            }
          }
          else {
            if (iVar9 == 1) {
              if ((cVar11 == '&') || (cVar11 == '=')) {
                if (local_8[iVar12 + -1] == '\0') {
                  cVar11 = *(char *)(iVar5 + (int)piVar10);
                  for (; ((cVar11 != '\0' && (cVar11 != '#')) &&
                         (*(char *)(iVar5 + -1 + (int)piVar10) != '&')); iVar5 = iVar5 + 1) {
                    cVar11 = *(char *)(iVar5 + 1 + (int)piVar10);
                  }
                }
                else if (cVar11 == '&') {
                  local_8[iVar12] = '\0';
                  local_8[iVar12 + 1] = '\0';
                  local_c = iVar12 + 2;
                  iVar12 = local_c;
                }
                else {
                  local_8[iVar12] = '\0';
                  local_c = iVar12 + 1;
                  iVar9 = 2;
                  iVar12 = local_c;
                }
                goto LAB_0056075b;
              }
            }
            else {
              if (iVar9 == 0) {
                if (cVar11 != '?') {
                  local_c = iVar12 + 1;
                  local_8[iVar12] = cVar11;
                  iVar12 = local_c;
                  goto LAB_0056075b;
                }
              }
              else if ((iVar9 != 2) || (cVar11 != '&')) goto LAB_0056083d;
              iVar9 = 1;
              cVar11 = '\0';
            }
LAB_0056083d:
            local_c = iVar12 + 1;
            local_8[iVar12] = cVar11;
            iVar12 = local_c;
          }
LAB_0056075b:
          cVar11 = *(char *)(iVar5 + (int)piVar10);
          iVar15 = iVar5;
        } while (cVar11 != '\0');
        if (iVar9 == 1) {
          local_8[iVar12] = '\0';
          iVar12 = iVar12 + 1;
        }
      }
      (local_8 + iVar12)[0] = '\0';
      (local_8 + iVar12)[1] = '\0';
      cVar11 = *local_8;
      pcVar6 = local_8;
      while (cVar11 != '\0') {
        pcVar6 = pcVar6 + 1;
        cVar11 = *pcVar6;
      }
      piVar13 = (int *)(local_8 + ((int)pcVar6 - (int)local_8 & 0x3fffffffU) + 1);
      piVar10 = piVar13;
      if ((char)*piVar13 != '\0') {
LAB_00560887:
        do {
          piVar13 = (int *)((int)piVar13 + 1);
        } while (*(char *)piVar13 != '\0');
        uVar14 = (int)piVar13 - (int)piVar10 & 0x3fffffff;
        piVar13 = (int *)((int)piVar10 + uVar14 + 1);
        if (piVar13 == (int *)0x0) {
          uVar16 = 0;
        }
        else {
          cVar11 = (char)*piVar13;
          piVar8 = piVar13;
          while (cVar11 != '\0') {
            piVar8 = (int *)((int)piVar8 + 1);
            cVar11 = *(char *)piVar8;
          }
          uVar16 = (int)piVar8 - (int)piVar13 & 0x3fffffff;
        }
        if (uVar14 != 3) {
          if (uVar14 != 5) {
            if ((uVar14 == 4) && (*piVar10 == 0x65646f6d)) {
              local_1c = local_10 & 0x87;
              local_20 = 0x87;
              ppuVar7 = &PTR_DAT_00767054;
              local_18 = "access";
              goto LAB_0056094e;
            }
            goto LAB_00560a23;
          }
          if ((*piVar10 != 0x68636163) || ((char)piVar10[1] != 'e')) goto LAB_00560a23;
          local_20 = 0x60000;
          ppuVar7 = &PTR_s_shared_0076703c;
          local_1c = 0x60000;
          local_18 = "cache";
LAB_0056094e:
          piVar10 = (int *)*ppuVar7;
          iVar15 = 0;
          if (piVar10 != (int *)0x0) {
            do {
              uVar14 = 0;
              if (piVar10 != (int *)0x0) {
                cVar11 = (char)*piVar10;
                piVar8 = piVar10;
                while (cVar11 != '\0') {
                  piVar8 = (int *)((int)piVar8 + 1);
                  cVar11 = *(char *)piVar8;
                }
                uVar14 = (int)piVar8 - (int)piVar10 & 0x3fffffff;
              }
              piVar8 = piVar13;
              uVar3 = uVar16;
              if (uVar16 == uVar14) {
                while (uVar14 = uVar3 - 4, 3 < uVar3) {
                  if (*piVar8 != *piVar10) goto LAB_0056099e;
                  piVar10 = piVar10 + 1;
                  piVar8 = piVar8 + 1;
                  uVar3 = uVar14;
                }
                if (uVar14 == 0xfffffffc) goto LAB_005609ee;
LAB_0056099e:
                if (((char)*piVar8 == (char)*piVar10) &&
                   ((uVar14 == 0xfffffffd ||
                    ((*(char *)((int)piVar8 + 1) == *(char *)((int)piVar10 + 1) &&
                     ((uVar14 == 0xfffffffe ||
                      ((*(char *)((int)piVar8 + 2) == *(char *)((int)piVar10 + 2) &&
                       ((uVar14 == 0xffffffff ||
                        (*(char *)((int)piVar8 + 3) == *(char *)((int)piVar10 + 3)))))))))))))
                goto LAB_005609ee;
              }
              iVar15 = iVar15 + 1;
              piVar10 = (int *)ppuVar7[iVar15 * 2];
              if (piVar10 == (int *)0x0) break;
            } while( true );
          }
          goto LAB_005609d9;
        }
        if (((short)*piVar10 == 0x6676) && (*(char *)((int)piVar10 + 2) == 's')) {
          param_1 = piVar13;
        }
        goto LAB_00560a23;
      }
      goto LAB_00560a34;
    }
    cVar11 = *(char *)((int)piVar10 + 7);
    iVar15 = 7;
    if (cVar11 == '\0') goto LAB_005606a1;
    do {
      if (cVar11 == '/') break;
      cVar11 = *(char *)(iVar15 + 1 + (int)piVar10);
      iVar15 = iVar15 + 1;
    } while (cVar11 != '\0');
    if ((iVar15 == 7) ||
       ((((iVar15 == 0x10 && (*(int *)((int)piVar10 + 7) == 0x61636f6c)) &&
         (*(int *)((int)piVar10 + 0xb) == 0x736f686c)) && (*(char *)((int)piVar10 + 0xf) == 't'))))
    goto LAB_005606a1;
    uVar4 = FUN_00523d10("invalid uri authority: %.*s",iVar15 + -7,(int *)((int)piVar10 + 7));
  }
LAB_00560a59:
  local_14 = 1;
LAB_00560a60:
  *param_6 = uVar4;
  FUN_00524410(local_8);
  local_8 = (char *)0x0;
LAB_00560a72:
  *param_3 = local_10;
  *param_5 = local_8;
  return local_14;
LAB_005609ee:
  puVar2 = ppuVar7[iVar15 * 2 + 1];
  if (puVar2 == (undefined *)0x0) {
LAB_005609d9:
    uVar4 = FUN_00523d10("no such %s mode: %s",local_18,piVar13);
    goto LAB_00560a59;
  }
  if ((int)local_1c < (int)((uint)puVar2 & 0xffffff7f)) {
    uVar4 = FUN_00523d10("%s mode not allowed: %s",local_18,piVar13);
    local_14 = 3;
    goto LAB_00560a60;
  }
  local_10 = ~local_20 & local_10 | (uint)puVar2;
LAB_00560a23:
  piVar13 = (int *)((int)piVar13 + uVar16 + 1);
  piVar10 = piVar13;
  if ((char)*piVar13 == '\0') goto LAB_00560a34;
  goto LAB_00560887;
}


/* FUN_00560af0 @ 00560af0  kind=lib  attributed-by=lib-island  size=310 */

void FUN_00560af0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined8 local_1c;
  int local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  int local_8;
  
  if (*param_1 < 0) {
    *param_1 = 0;
    param_1[1] = -1;
    *(undefined2 *)(param_1 + 3) = 0;
    *(undefined1 *)((int)param_1 + 0xe) = 0;
  }
  local_10 = param_3;
  uStack_c = param_4;
  param_1[2] = param_5;
  while( true ) {
    iVar2 = FUN_00580c40(param_1,param_2);
    if (iVar2 < 0x273) {
      *param_1 = *param_1 + 1;
      iVar1 = *param_1;
      if (iVar1 < 100) {
        *(short *)(param_1 + iVar1 * 4 + 3) = (short)iVar2;
        *(ulonglong *)(param_1 + iVar1 * 4 + 4) = CONCAT44(uStack_c,local_10);
        *(char *)((int)param_1 + iVar1 * 0x10 + 0xe) = (char)param_2;
        param_1[iVar1 * 4 + 6] = local_8;
        param_1[1] = param_1[1] + -1;
        return;
      }
      iVar2 = param_1[2];
      iVar1 = iVar1 + -1;
      *param_1 = iVar1;
      while ((-1 < iVar1 && (iVar1 = *param_1, -1 < iVar1))) {
        FUN_00580b00(param_1,*(undefined1 *)((int)param_1 + iVar1 * 0x10 + 0xe),
                     param_1 + iVar1 * 4 + 4);
        *param_1 = *param_1 + -1;
        iVar1 = *param_1;
      }
      FUN_00553950(iVar2,"parser stack overflow");
      param_1[1] = param_1[1] + -1;
      param_1[2] = iVar2;
      return;
    }
    if (0x3b9 < iVar2) {
      iVar2 = param_1[2];
      local_1c = CONCAT44(uStack_c,local_10);
      local_14 = local_8;
      FUN_00553950(iVar2,"near \"%T\": syntax error",&local_1c);
      param_1[2] = iVar2;
      FUN_00580b00(param_1,param_2,&local_10);
      return;
    }
    FUN_00580cd0(param_1,iVar2 + -0x273);
    if (param_2 == 0xfb) break;
    if (*param_1 < 0) {
      return;
    }
  }
  return;
}


/* FUN_00560c30 @ 00560c30  kind=lib  attributed-by=lib-island  size=63 */

void FUN_00560c30(int *param_1,code *param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    iVar1 = iVar2;
    while ((-1 < iVar1 && (-1 < iVar2))) {
      FUN_00580b00(param_1,*(undefined1 *)((int)param_1 + iVar2 * 0x10 + 0xe),
                   param_1 + iVar2 * 4 + 4);
      *param_1 = *param_1 + -1;
      iVar1 = *param_1;
      iVar2 = *param_1;
    }
    (*param_2)(param_1);
  }
  return;
}


/* FUN_00560c70 @ 00560c70  kind=lib  attributed-by=lib-island  size=95 */

void FUN_00560c70(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)*param_1;
  while (puVar1 != (undefined4 *)0x0) {
    if ((*(byte *)(puVar1 + 6) & 2) != 0) {
      FUN_00544570(puVar1);
      *(ushort *)(puVar1 + 6) = *(ushort *)(puVar1 + 6) & 0xfff9;
      if ((*(short *)((int)puVar1 + 0x1a) == 0) && (iVar2 = puVar1[7], *(int *)(iVar2 + 0x1c) != 0))
      {
        if (puVar1[5] == 1) {
          *(undefined4 *)(iVar2 + 0x2c) = 0;
        }
        (*DAT_00766664)(*(undefined4 *)(iVar2 + 0x28),*puVar1,0);
      }
    }
    puVar1 = (undefined4 *)*param_1;
  }
  return;
}


/* FUN_00560cd0 @ 00560cd0  kind=lib  attributed-by=lib-island  size=378 */

undefined1 * FUN_00560cd0(int *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *local_ac [32];
  undefined1 local_2c [12];
  undefined1 *local_20;
  
  iVar7 = *param_1;
  while (iVar7 != 0) {
    *(int *)(iVar7 + 0xc) = *(int *)(iVar7 + 0x20);
    iVar7 = *(int *)(iVar7 + 0x20);
  }
  puVar2 = (undefined1 *)*param_1;
  memset(local_ac,0,0x80);
  while (puVar2 != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(puVar2 + 0xc);
    *(int *)(puVar2 + 0xc) = 0;
    iVar7 = 0;
    do {
      if (local_ac[iVar7] == (undefined1 *)0x0) {
        local_ac[iVar7] = puVar2;
        puVar4 = puVar2;
        break;
      }
      puVar4 = local_2c;
      puVar5 = local_ac[iVar7];
      do {
        if (puVar2 == (undefined1 *)0x0) {
          if (puVar5 == (undefined1 *)0x0) goto LAB_00560d64;
          *(undefined1 **)(puVar4 + 0xc) = puVar5;
          goto LAB_00560d6b;
        }
        if (*(uint *)(puVar5 + 0x14) < *(uint *)(puVar2 + 0x14)) {
          *(undefined1 **)(puVar4 + 0xc) = puVar5;
          puVar3 = puVar2;
          puVar6 = *(undefined1 **)(puVar5 + 0xc);
          puVar4 = puVar5;
        }
        else {
          *(undefined1 **)(puVar4 + 0xc) = puVar2;
          puVar3 = *(undefined1 **)(puVar2 + 0xc);
          puVar6 = puVar5;
          puVar4 = puVar2;
        }
        puVar2 = puVar3;
        puVar5 = puVar6;
      } while (puVar6 != (undefined1 *)0x0);
      if (puVar3 == (undefined1 *)0x0) {
LAB_00560d64:
        *(undefined4 *)(puVar4 + 0xc) = 0;
      }
      else {
        *(undefined1 **)(puVar4 + 0xc) = puVar3;
      }
LAB_00560d6b:
      local_ac[iVar7] = (undefined1 *)0x0;
      iVar7 = iVar7 + 1;
      puVar2 = local_20;
      puVar4 = local_20;
    } while (iVar7 < 0x1f);
    puVar2 = puVar1;
    if (iVar7 == 0x1f) {
      puVar1 = local_2c;
      while (local_ac[0x1f] != (undefined1 *)0x0) {
        if (puVar4 == (undefined1 *)0x0) {
          if (local_ac[0x1f] == (undefined1 *)0x0) goto LAB_00560dcb;
          *(undefined1 **)(puVar1 + 0xc) = local_ac[0x1f];
          goto LAB_00560dd2;
        }
        if (*(uint *)(local_ac[0x1f] + 0x14) < *(uint *)(puVar4 + 0x14)) {
          *(undefined1 **)(puVar1 + 0xc) = local_ac[0x1f];
          puVar1 = local_ac[0x1f];
          local_ac[0x1f] = *(undefined1 **)(local_ac[0x1f] + 0xc);
        }
        else {
          *(undefined1 **)(puVar1 + 0xc) = puVar4;
          puVar1 = puVar4;
          puVar4 = *(undefined1 **)(puVar4 + 0xc);
        }
      }
      if (puVar4 == (undefined1 *)0x0) {
LAB_00560dcb:
        *(undefined4 *)(puVar1 + 0xc) = 0;
      }
      else {
        *(undefined1 **)(puVar1 + 0xc) = puVar4;
      }
LAB_00560dd2:
      local_ac[0x1f] = local_20;
    }
  }
  iVar7 = 1;
  do {
    puVar1 = local_ac[iVar7];
    puVar2 = local_2c;
    while (puVar4 = puVar1, local_ac[0] != (undefined1 *)0x0) {
      if (puVar4 == (undefined1 *)0x0) {
        if (local_ac[0] == (undefined1 *)0x0) goto LAB_00560e34;
        *(undefined1 **)(puVar2 + 0xc) = local_ac[0];
        goto LAB_00560e3b;
      }
      if (*(uint *)(local_ac[0] + 0x14) < *(uint *)(puVar4 + 0x14)) {
        *(undefined1 **)(puVar2 + 0xc) = local_ac[0];
        puVar1 = puVar4;
        puVar2 = local_ac[0];
        local_ac[0] = *(undefined1 **)(local_ac[0] + 0xc);
      }
      else {
        *(undefined1 **)(puVar2 + 0xc) = puVar4;
        puVar1 = *(undefined1 **)(puVar4 + 0xc);
        puVar2 = puVar4;
      }
    }
    if (puVar4 == (undefined1 *)0x0) {
LAB_00560e34:
      *(undefined4 *)(puVar2 + 0xc) = 0;
    }
    else {
      *(undefined1 **)(puVar2 + 0xc) = puVar4;
    }
LAB_00560e3b:
    iVar7 = iVar7 + 1;
    local_ac[0] = local_20;
    if (0x1f < iVar7) {
      return local_20;
    }
  } while( true );
}


/* FUN_00560e50 @ 00560e50  kind=lib  attributed-by=lib-island  size=60 */

void FUN_00560e50(undefined4 *param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 6) & 2) != 0) {
    FUN_00544570(param_1);
  }
  iVar1 = param_1[7];
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
  if (param_1[5] == 1) {
    *(undefined4 *)(iVar1 + 0x2c) = 0;
  }
  (*DAT_00766664)(*(undefined4 *)(iVar1 + 0x28),*param_1,1);
  return;
}


/* FUN_00560e90 @ 00560e90  kind=lib  attributed-by=lib-island  size=366 */

int FUN_00560e90(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)0x0;
  if ((param_1[10] == 0) && (param_3 != 0)) {
    iVar1 = (*DAT_00766654)(param_1[5],param_1[6] + 0x28,param_1[7]);
    if (iVar1 == 0) {
      return 7;
    }
    uVar2 = FUN_00540b30(param_1);
    (*DAT_00766658)(iVar1,uVar2);
    param_1[10] = iVar1;
  }
  if ((param_1[7] == 0) || (*param_1 == 0)) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  param_3 = (iVar1 + 1) * param_3;
  if ((param_1[10] == 0) ||
     (piVar3 = (int *)(*DAT_00766660)(param_1[10],param_2,param_3), piVar3 == (int *)0x0)) {
    if (param_3 != 1) goto LAB_00560fe6;
    for (iVar1 = param_1[2];
        (iVar1 != 0 && ((*(short *)(iVar1 + 0x1a) != 0 || ((*(byte *)(iVar1 + 0x18) & 4) != 0))));
        iVar1 = *(int *)(iVar1 + 0x24)) {
    }
    param_1[2] = iVar1;
    if (iVar1 == 0) {
      for (iVar1 = param_1[1]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x24)) {
        if (*(short *)(iVar1 + 0x1a) == 0) goto LAB_00560f55;
      }
    }
    else {
LAB_00560f55:
      iVar1 = (*(code *)param_1[8])(param_1[9],iVar1);
      if ((iVar1 != 0) && (iVar1 != 5)) {
        return iVar1;
      }
    }
    piVar3 = (int *)(*DAT_00766660)(param_1[10],param_2,2);
    if (piVar3 == (int *)0x0) goto LAB_00560fe6;
  }
  piVar4 = (int *)piVar3[1];
  if (*piVar4 == 0) {
    piVar4[0] = 0;
    piVar4[1] = 0;
    piVar4[2] = 0;
    piVar4[3] = 0;
    piVar4[4] = 0;
    piVar4[5] = 0;
    piVar4[6] = 0;
    piVar4[7] = 0;
    piVar4[8] = 0;
    piVar4[9] = 0;
    *piVar4 = (int)piVar3;
    piVar4[1] = *piVar3;
    piVar4[2] = (int)(piVar4 + 10);
    memset(piVar4 + 10,0,param_1[6]);
    piVar4[7] = (int)param_1;
    piVar4[5] = param_2;
  }
  if (*(short *)((int)piVar4 + 0x1a) == 0) {
    param_1[3] = param_1[3] + 1;
  }
  *(short *)((int)piVar4 + 0x1a) = *(short *)((int)piVar4 + 0x1a) + 1;
  if (param_2 == 1) {
    param_1[0xb] = (int)piVar4;
  }
LAB_00560fe6:
  *param_4 = piVar4;
  if ((piVar4 == (int *)0x0) && (param_3 != 0)) {
    return 7;
  }
  return 0;
}


/* FUN_00561000 @ 00561000  kind=lib  attributed-by=lib-island  size=79 */

void FUN_00561000(undefined4 *param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 6) & 2) != 0) {
    FUN_00544570(param_1);
    *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) & 0xfff9;
    if ((*(short *)((int)param_1 + 0x1a) == 0) && (iVar1 = param_1[7], *(int *)(iVar1 + 0x1c) != 0))
    {
      if (param_1[5] == 1) {
        *(undefined4 *)(iVar1 + 0x2c) = 0;
      }
      (*DAT_00766664)(*(undefined4 *)(iVar1 + 0x28),*param_1,0);
    }
  }
  return;
}


/* FUN_00561050 @ 00561050  kind=lib  attributed-by=lib-island  size=74 */

void FUN_00561050(int param_1)

{
  int *piVar1;
  int iVar2;
  
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xffdf;
  if ((*(ushort *)(param_1 + 0x18) & 2) == 0) {
    *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) | 2;
    piVar1 = *(int **)(param_1 + 0x1c);
    iVar2 = *piVar1;
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x24) = param_1;
    }
    *piVar1 = param_1;
    if (piVar1[1] == 0) {
      piVar1[1] = param_1;
    }
    if ((piVar1[2] == 0) && ((*(byte *)(param_1 + 0x18) & 4) == 0)) {
      piVar1[2] = param_1;
    }
  }
  return;
}


/* FUN_005610a0 @ 005610a0  kind=lib  attributed-by=lib-island  size=101 */

void FUN_005610a0(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  (*DAT_00766668)(*(undefined4 *)(param_1[7] + 0x28),*param_1,param_1[5],param_2);
  param_1[5] = param_2;
  if (((*(ushort *)(param_1 + 6) & 2) != 0) && ((*(ushort *)(param_1 + 6) & 4) != 0)) {
    FUN_00544570(param_1);
    piVar1 = (int *)param_1[7];
    iVar2 = *piVar1;
    param_1[8] = iVar2;
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 0x24) = param_1;
    }
    *piVar1 = (int)param_1;
    if (piVar1[1] == 0) {
      piVar1[1] = (int)param_1;
    }
    if ((piVar1[2] == 0) && ((*(byte *)(param_1 + 6) & 4) == 0)) {
      piVar1[2] = (int)param_1;
    }
  }
  return;
}


/* FUN_00561110 @ 00561110  kind=lib  attributed-by=lib-island  size=27 */

undefined4 FUN_00561110(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00561121. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_0076665c)();
    return uVar1;
  }
  return 0;
}


/* FUN_00561130 @ 00561130  kind=lib  attributed-by=lib-island  size=119 */

void FUN_00561130(undefined4 *param_1)

{
  short *psVar1;
  int iVar2;
  int *piVar3;
  
  psVar1 = (short *)((int)param_1 + 0x1a);
  *psVar1 = *psVar1 + -1;
  if (*psVar1 == 0) {
    *(int *)(param_1[7] + 0xc) = *(int *)(param_1[7] + 0xc) + -1;
    if ((*(byte *)(param_1 + 6) & 2) == 0) {
      iVar2 = param_1[7];
      if (*(int *)(iVar2 + 0x1c) != 0) {
        if (param_1[5] == 1) {
          *(undefined4 *)(iVar2 + 0x2c) = 0;
        }
        (*DAT_00766664)(*(undefined4 *)(iVar2 + 0x28),*param_1,0);
        return;
      }
    }
    else {
      FUN_00544570(param_1);
      piVar3 = (int *)param_1[7];
      iVar2 = *piVar3;
      param_1[8] = iVar2;
      if (iVar2 != 0) {
        *(undefined4 **)(iVar2 + 0x24) = param_1;
      }
      *piVar3 = (int)param_1;
      if (piVar3[1] == 0) {
        piVar3[1] = (int)param_1;
      }
      if ((piVar3[2] == 0) && ((*(byte *)(param_1 + 6) & 4) == 0)) {
        piVar3[2] = (int)param_1;
      }
    }
  }
  return;
}


/* FUN_005611b0 @ 005611b0  kind=lib  attributed-by=lib-island  size=170 */

void FUN_005611b0(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1[10] != 0) {
    puVar1 = (undefined4 *)*param_1;
    while (puVar3 = puVar1, puVar3 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar3[8];
      if ((param_2 < (uint)puVar3[5]) && ((*(byte *)(puVar3 + 6) & 2) != 0)) {
        FUN_00544570(puVar3);
        *(ushort *)(puVar3 + 6) = *(ushort *)(puVar3 + 6) & 0xfff9;
        if ((*(short *)((int)puVar3 + 0x1a) == 0) &&
           (iVar2 = puVar3[7], *(int *)(iVar2 + 0x1c) != 0)) {
          if (puVar3[5] == 1) {
            *(undefined4 *)(iVar2 + 0x2c) = 0;
          }
          (*DAT_00766664)(*(undefined4 *)(iVar2 + 0x28),*puVar3,0);
        }
      }
    }
    if ((param_2 == 0) && (param_1[0xb] != 0)) {
      memset(*(void **)(param_1[0xb] + 4),0,param_1[5]);
      param_2 = 1;
    }
    (*DAT_0076666c)(param_1[10],param_2 + 1);
  }
  return;
}


/* FUN_00561270 @ 00561270  kind=lib  attributed-by=lib-island  size=7930 */

void FUN_00561270(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  ushort uVar2;
  byte *pbVar3;
  char cVar4;
  undefined1 uVar5;
  int *_Dst;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined *puVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  undefined1 *puVar18;
  uint uVar19;
  undefined4 *puVar20;
  undefined **ppuVar21;
  char *pcVar22;
  undefined8 uVar23;
  int local_58;
  byte *local_54;
  char *local_50;
  undefined4 local_4c;
  int local_48;
  uint local_44;
  int local_40;
  undefined4 local_3c;
  int *local_38;
  undefined4 *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  byte *local_14;
  char *local_10;
  undefined4 *local_c;
  int *local_8;
  
  piVar11 = param_1;
  piVar9 = (int *)*param_1;
  local_8 = piVar9;
  _Dst = (int *)FUN_00552230(piVar9,0xc0);
  if (_Dst == (int *)0x0) {
    _Dst = (int *)0x0;
    local_30 = (int *)0x0;
  }
  else {
    local_30 = _Dst;
    memset(_Dst,0,0xc0);
    *_Dst = (int)piVar9;
    if (piVar9[1] != 0) {
      *(int **)(piVar9[1] + 0x38) = _Dst;
    }
    _Dst[0xf] = piVar9[1];
    _Dst[0xe] = 0;
    piVar9[1] = (int)_Dst;
    _Dst[0xc] = 0x26bceaa5;
  }
  piVar9 = param_3;
  piVar11[2] = (int)_Dst;
  if (_Dst == (int *)0x0) {
    return;
  }
  _Dst[0x18] = _Dst[0x18] | 0x40;
  piVar11[0x13] = 2;
  local_18 = FUN_00568810(piVar11,param_2,param_3,&local_38);
  if (local_18 < 0) {
    return;
  }
  local_c = (undefined4 *)(local_18 * 0x10 + local_8[4]);
  if ((local_18 == 1) && (iVar6 = FUN_0055e870(piVar11), iVar6 != 0)) {
    return;
  }
  piVar11 = local_8;
  local_14 = (byte *)FUN_0055e3f0(local_8,local_38);
  if (local_14 == (byte *)0x0) {
    return;
  }
  if (param_5 == 0) {
    local_10 = (char *)FUN_0055e3f0(piVar11,param_4);
  }
  else {
    local_10 = (char *)FUN_0055d980(piVar11,&DAT_00718ac8);
  }
  if (piVar9[1] == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *local_c;
  }
  iVar6 = FUN_0054ab50(param_1,0x13,local_14,local_10,uVar8);
  if (iVar6 != 0) goto LAB_0056314c;
  local_54 = local_14;
  local_50 = local_10;
  local_4c = 0;
  local_8[0x6d] = 0;
  local_58 = iVar6;
  local_38 = (int *)FUN_00522940(local_8,uVar8,0xe,&local_58);
  if (local_38 == (int *)0x0) {
    puVar20 = local_c;
    if (local_58 != 0) {
      param_1[0x13] = param_1[0x13] + 1;
      iVar6 = param_1[0x13];
      FUN_0056bf50(_Dst,0x5e,0,iVar6,0,local_58,0);
      FUN_005762b0(_Dst,1);
      FUN_00576270(_Dst,0,0,"result",0);
      FUN_0056be90(_Dst,0x10,iVar6,1);
      FUN_00524410(local_58);
      puVar20 = local_c;
    }
  }
  else if (local_38 == (int *)0xc) {
    iVar6 = FUN_0057a2c0(local_14,"default_cache_size");
    piVar11 = param_1;
    if (iVar6 == 0) {
      iVar6 = FUN_005637c0(param_1);
      if (iVar6 != 0) goto LAB_0056314c;
      FUN_00576ba0(_Dst,local_18);
      if (local_10 == (char *)0x0) {
        FUN_005762b0(_Dst,1);
        FUN_00576270(_Dst,0,0,"cache_size",0);
        piVar11 = piVar11 + 0x13;
        *piVar11 = *piVar11 + 2;
        iVar7 = FUN_0056c070(_Dst,8,&DAT_00714a5c);
        iVar6 = local_18;
        FUN_0056c2c0(_Dst,iVar7,local_18);
        FUN_0056c2c0(_Dst,iVar7 + 1,iVar6);
        FUN_0056c2c0(_Dst,iVar7 + 6,2000);
        puVar20 = local_c;
      }
      else {
        uVar8 = FUN_0054a970(local_10);
        uVar8 = FUN_00548fe0(uVar8);
        FUN_0054bc80(piVar11,0,local_18);
        FUN_0056be90(_Dst,7,uVar8,1);
        FUN_0056bef0(_Dst,0x25,local_18,3,1);
        puVar20 = local_c;
        *(undefined4 *)(local_c[3] + 0x50) = uVar8;
        FUN_0054f1d0(local_c[1],*(undefined4 *)(local_c[3] + 0x50));
      }
    }
    else {
      iVar6 = FUN_0057a2c0(local_14,"page_size");
      puVar20 = local_c;
      if (iVar6 == 0) {
        iVar6 = local_c[1];
        if (local_10 == (char *)0x0) {
          if (iVar6 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(*(int *)(iVar6 + 4) + 0x20);
          }
          FUN_00546df0(param_1,"page_size",iVar6,iVar6 >> 0x1f);
        }
        else {
          iVar7 = FUN_0054a970(local_10);
          local_8[0x10] = iVar7;
          iVar6 = FUN_0054f2a0(iVar6,iVar7,0xffffffff,0);
          if (iVar6 == 7) {
            *(undefined1 *)(local_8 + 0xe) = 1;
          }
        }
      }
      else {
        iVar6 = FUN_0057a2c0(local_14,"secure_delete");
        if (iVar6 == 0) {
          uVar19 = 0xffffffff;
          local_38 = (int *)local_c[1];
          if (local_10 != (char *)0x0) {
            uVar19 = FUN_0055a000(local_10,0);
            uVar19 = uVar19 & 0xff;
          }
          if (((piVar9[1] == 0) && (-1 < (int)uVar19)) && (iVar6 = 0, 0 < local_8[5])) {
            iVar7 = 0;
            do {
              FUN_0054f0e0(*(undefined4 *)(iVar7 + 4 + local_8[4]),uVar19);
              iVar6 = iVar6 + 1;
              iVar7 = iVar7 + 0x10;
            } while (iVar6 < local_8[5]);
          }
          iVar6 = FUN_0054f0e0(local_38,uVar19);
          FUN_00546df0(param_1,"secure_delete",iVar6,iVar6 >> 0x1f);
          puVar20 = local_c;
        }
        else {
          iVar6 = FUN_0057a2c0(local_14,"page_count");
          if ((iVar6 == 0) || (iVar6 = FUN_0057a2c0(local_14,"max_page_count"), iVar6 == 0)) {
            piVar9 = param_1;
            iVar6 = FUN_005637c0(param_1);
            if (iVar6 != 0) goto LAB_0056314c;
            FUN_00550aa0(piVar9,local_18);
            piVar9[0x13] = piVar9[0x13] + 1;
            iVar6 = piVar9[0x13];
            if ((&DAT_007120d8)[*local_14] == 'p') {
              FUN_0056be90(_Dst,0x92,local_18,iVar6);
            }
            else {
              uVar8 = FUN_0054a970(local_10);
              uVar8 = FUN_00548fe0(uVar8);
              FUN_0056bef0(_Dst,0x93,local_18,iVar6,uVar8);
            }
            FUN_0056be90(_Dst,0x10,iVar6,1);
            FUN_005762b0(_Dst,1);
            FUN_00576270(_Dst,0,0,local_14,0xffffffff);
            puVar20 = local_c;
          }
          else {
            iVar6 = FUN_0057a2c0(local_14,"locking_mode");
            if (iVar6 == 0) {
              param_1 = (int *)FUN_0053aa70(local_10);
              piVar11 = local_8;
              if (piVar9[1] == 0) {
                if (param_1 != (int *)0xffffffff) {
                  iVar6 = 2;
                  if (2 < local_8[5]) {
                    iVar7 = 0x20;
                    do {
                      FUN_0055f310(**(undefined4 **)(*(int *)(iVar7 + 4 + piVar11[4]) + 4),param_1);
                      iVar6 = iVar6 + 1;
                      iVar7 = iVar7 + 0x10;
                      _Dst = local_30;
                    } while (iVar6 < piVar11[5]);
                  }
                  *(char *)((int)local_8 + 0x39) = (char)param_1;
                  goto LAB_0056170a;
                }
                uVar19 = (uint)*(byte *)((int)local_8 + 0x39);
                puVar20 = local_c;
              }
              else {
LAB_0056170a:
                puVar20 = local_c;
                uVar19 = FUN_0055f310(**(undefined4 **)(local_c[1] + 4),param_1);
              }
              pcVar22 = "exclusive";
              if (uVar19 != 1) {
                pcVar22 = "normal";
              }
              FUN_005762b0(_Dst,1);
              FUN_00576270(_Dst,0,0,"locking_mode",0);
              FUN_0056bf50(_Dst,0x5e,0,1,0,pcVar22,0);
              FUN_0056be90(_Dst,0x10,1,1);
            }
            else {
              iVar6 = FUN_0057a2c0(local_14,"journal_mode");
              if (iVar6 == 0) {
                iVar6 = FUN_005637c0(param_1);
                if (iVar6 != 0) goto LAB_0056314c;
                FUN_005762b0(_Dst,1);
                FUN_00576270(_Dst,0,0,"journal_mode",0);
                if (local_10 != (char *)0x0) {
                  uVar23 = FUN_00568070(local_10);
                  iVar6 = 0;
                  while( true ) {
                    param_1 = (int *)uVar23;
                    if ((iVar6 == 6) || ((&PTR_s_delete_0071347c)[iVar6] == (undefined *)0x0))
                    break;
                    iVar7 = FUN_005259c0((int)((ulonglong)uVar23 >> 0x20),
                                         (&PTR_s_delete_0071347c)[iVar6],param_1);
                    uVar23 = CONCAT44(local_10,param_1);
                    if (iVar7 == 0) {
                      if (iVar6 == -1) goto LAB_00561876;
                      goto LAB_00561808;
                    }
                    iVar6 = iVar6 + 1;
                  }
                }
                iVar6 = -1;
LAB_00561876:
                if (piVar9[1] == 0) {
                  local_18 = 0;
                  piVar9[1] = 1;
                }
LAB_00561808:
                iVar7 = local_8[5] + -1;
                if (-1 < iVar7) {
                  param_1 = (int *)(iVar7 * 0x10);
                  do {
                    if ((*(int *)((int)param_1 + local_8[4] + 4) != 0) &&
                       ((iVar7 == local_18 || (param_3[1] == 0)))) {
                      FUN_00576ba0(_Dst,iVar7);
                      FUN_0056bef0(_Dst,0x7e,iVar7,1,iVar6);
                    }
                    param_1 = param_1 + -4;
                    iVar7 = iVar7 + -1;
                  } while (-1 < iVar7);
                }
                FUN_0056be90(_Dst,0x10,1,1);
                puVar20 = local_c;
              }
              else {
                iVar6 = FUN_0057a2c0(local_14,"journal_size_limit");
                puVar20 = local_c;
                if (iVar6 == 0) {
                  local_44 = 0xffffffff;
                  uVar8 = **(undefined4 **)(local_c[1] + 4);
                  local_48 = -2;
                  iVar6 = -2;
                  uVar19 = 0xffffffff;
                  if (((local_10 != (char *)0x0) &&
                      (FUN_0054a9a0(local_10,&local_48,1000000,1), iVar6 = local_48,
                      uVar19 = local_44, 0x7fffffff < local_44)) &&
                     (((int)local_44 < -1 || (local_48 != -1)))) {
                    iVar6 = -1;
                    uVar19 = 0xffffffff;
                  }
                  uVar23 = FUN_0055f2b0(uVar8,iVar6,uVar19);
                  FUN_00546df0(param_1,"journal_size_limit",uVar23);
                }
                else {
                  iVar6 = FUN_0057a2c0(local_14,"auto_vacuum");
                  piVar11 = param_1;
                  if (iVar6 == 0) {
                    iVar6 = local_c[1];
                    iVar7 = FUN_005637c0(param_1);
                    if (iVar7 != 0) goto LAB_0056314c;
                    if (local_10 == (char *)0x0) {
                      if (iVar6 == 0) {
                        iVar6 = 0;
                      }
                      else {
                        iVar6 = FUN_0054d4a0(iVar6);
                      }
                      FUN_00546df0(piVar11,"auto_vacuum",iVar6,iVar6 >> 0x1f);
                      puVar20 = local_c;
                    }
                    else {
                      piVar9 = (int *)FUN_0053a730(local_10);
                      *(char *)((int)local_8 + 0x3a) = (char)piVar9;
                      puVar20 = local_c;
                      param_1 = piVar9;
                      if (((-1 < (int)piVar9) &&
                          (iVar6 = FUN_0054f150(iVar6,piVar9), puVar20 = local_c, iVar6 == 0)) &&
                         ((piVar9 == (int *)0x1 || (piVar9 == (int *)0x2)))) {
                        iVar7 = FUN_0056c070(_Dst,6,&DAT_007152b0);
                        iVar6 = local_18;
                        FUN_0056c2c0(_Dst,iVar7,local_18);
                        FUN_0056c2c0(_Dst,iVar7 + 1,iVar6);
                        FUN_0056c2e0(_Dst,iVar7 + 2,iVar7 + 4);
                        FUN_0056c2c0(_Dst,iVar7 + 4,(int)param_1 + -1);
                        iVar6 = local_18;
                        FUN_0056c2c0(_Dst,iVar7 + 5,local_18);
                        FUN_00576ba0(_Dst,iVar6);
                        puVar20 = local_c;
                      }
                    }
                  }
                  else {
                    iVar6 = FUN_0057a2c0(local_14,"incremental_vacuum");
                    piVar11 = param_1;
                    if (iVar6 == 0) {
                      iVar6 = FUN_005637c0(param_1);
                      if (iVar6 != 0) goto LAB_0056314c;
                      if (((local_10 == (char *)0x0) ||
                          (iVar6 = FUN_0055a0e0(local_10,&param_1), iVar6 == 0)) ||
                         (piVar9 = param_1, (int)param_1 < 1)) {
                        piVar9 = (int *)0x7fffffff;
                      }
                      FUN_0054bc80(piVar11,0,local_18);
                      FUN_0056be90(_Dst,7,piVar9,1);
                      uVar8 = FUN_0056be30(_Dst,0x80,local_18);
                      FUN_0056be30(_Dst,0x10,1);
                      FUN_0056be90(_Dst,0x14,1,0xffffffff);
                      FUN_0056be90(_Dst,0x78,1,uVar8);
                      FUN_00573d80(_Dst,uVar8);
                      puVar20 = local_c;
                    }
                    else {
                      iVar6 = FUN_0057a2c0(local_14,"cache_size");
                      piVar11 = param_1;
                      if (iVar6 == 0) {
                        iVar6 = FUN_005637c0(param_1);
                        if (iVar6 != 0) goto LAB_0056314c;
                        if (local_10 == (char *)0x0) {
                          FUN_00546df0(piVar11,"cache_size",*(int *)(local_c[3] + 0x50),
                                       *(int *)(local_c[3] + 0x50) >> 0x1f);
                          puVar20 = local_c;
                        }
                        else {
                          uVar8 = FUN_0054a970(local_10);
                          puVar20 = local_c;
                          *(undefined4 *)(local_c[3] + 0x50) = uVar8;
                          FUN_0054f1d0(local_c[1],*(undefined4 *)(local_c[3] + 0x50));
                        }
                      }
                      else {
                        iVar6 = FUN_0057a2c0(local_14,"temp_store");
                        if (iVar6 == 0) {
                          if (local_10 == (char *)0x0) {
                            FUN_00546df0(param_1,"temp_store",*(undefined1 *)((int)local_8 + 0x37),0
                                        );
                            puVar20 = local_c;
                          }
                          else {
                            FUN_0052f200(param_1,local_10);
                            puVar20 = local_c;
                          }
                        }
                        else {
                          iVar6 = FUN_0057a2c0(local_14,"temp_store_directory");
                          pcVar22 = local_10;
                          if (iVar6 == 0) {
                            if (local_10 == (char *)0x0) {
                              puVar20 = local_c;
                              if (DAT_0076b358 != 0) {
                                FUN_005762b0(_Dst,1);
                                FUN_00576270(_Dst,0,0,"temp_store_directory",0);
                                FUN_0056bf50(_Dst,0x5e,0,1,0,DAT_0076b358,0);
                                FUN_0056be90(_Dst,0x10,1,1);
                                puVar20 = local_c;
                              }
                            }
                            else {
                              if ((*local_10 != '\0') &&
                                 ((iVar6 = (**(code **)(*local_8 + 0x20))
                                                     (*local_8,local_10,1,&local_38), iVar6 != 0 ||
                                  (local_38 == (int *)0x0)))) {
LAB_00561c03:
                                FUN_00553950(param_1,"not a writable directory");
                                goto LAB_0056314c;
                              }
                              if (*(byte *)((int)local_8 + 0x37) < 2) {
                                FUN_0053bfb0(param_1);
                              }
                              FUN_00524410(DAT_0076b358);
                              if (*pcVar22 == '\0') {
                                DAT_0076b358 = 0;
                                puVar20 = local_c;
                              }
                              else {
                                DAT_0076b358 = FUN_00523d10(&DAT_00716900,pcVar22);
                                puVar20 = local_c;
                              }
                            }
                          }
                          else {
                            iVar6 = FUN_0057a2c0(local_14,"data_store_directory");
                            pcVar22 = local_10;
                            if (iVar6 == 0) {
                              if (local_10 == (char *)0x0) {
                                puVar20 = local_c;
                                if (DAT_0076b35c != 0) {
                                  FUN_005762b0(_Dst,1);
                                  FUN_00576270(_Dst,0,0,"data_store_directory",0);
                                  FUN_0056bf50(_Dst,0x5e,0,1,0,DAT_0076b35c,0);
                                  FUN_0056be90(_Dst,0x10,1,1);
                                  puVar20 = local_c;
                                }
                              }
                              else {
                                if ((*local_10 != '\0') &&
                                   ((iVar6 = (**(code **)(*local_8 + 0x20))
                                                       (*local_8,local_10,1,&local_38), iVar6 != 0
                                    || (local_38 == (int *)0x0)))) goto LAB_00561c03;
                                FUN_00524410(DAT_0076b35c);
                                if (*pcVar22 == '\0') {
                                  DAT_0076b35c = 0;
                                  puVar20 = local_c;
                                }
                                else {
                                  DAT_0076b35c = FUN_00523d10(&DAT_00716900,pcVar22);
                                  puVar20 = local_c;
                                }
                              }
                            }
                            else {
                              iVar6 = FUN_0057a2c0(local_14,"synchronous");
                              piVar11 = param_1;
                              if (iVar6 == 0) {
                                iVar6 = FUN_005637c0(param_1);
                                if (iVar6 != 0) goto LAB_0056314c;
                                if (local_10 == (char *)0x0) {
                                  iVar6 = *(byte *)((int)local_c + 9) - 1;
                                  FUN_00546df0(piVar11,"synchronous",iVar6,iVar6 >> 0x1f);
                                  puVar20 = local_c;
                                }
                                else if (*(char *)((int)local_8 + 0x36) == '\0') {
                                  FUN_00553950(piVar11,
                                               "Safety level may not be changed inside a transaction"
                                              );
                                  puVar20 = local_c;
                                }
                                else {
                                  cVar4 = FUN_0053b110(local_10,0,1);
                                  *(char *)((int)local_c + 9) = cVar4 + '\x01';
                                  puVar20 = local_c;
                                }
                              }
                              else {
                                iVar6 = FUN_00538c40(param_1,local_14,local_10);
                                puVar20 = local_c;
                                if (iVar6 == 0) {
                                  iVar6 = FUN_0057a2c0(local_14,"table_info");
                                  if ((iVar6 == 0) && (local_10 != (char *)0x0)) {
                                    iVar6 = FUN_005637c0(param_1);
                                    if (iVar6 != 0) goto LAB_0056314c;
                                    iVar6 = FUN_005572d0(local_8,local_10,uVar8);
                                    puVar20 = local_c;
                                    local_24 = iVar6;
                                    if (iVar6 != 0) {
                                      local_28 = (int *)0x0;
                                      FUN_005762b0(_Dst,6);
                                      piVar9 = param_1;
                                      param_1[0x13] = 6;
                                      FUN_00576270(_Dst,0,0,&DAT_00718c28,0);
                                      FUN_00576270(_Dst,1,0,&DAT_00718c2c,0);
                                      FUN_00576270(_Dst,2,0,&DAT_00718c34,0);
                                      FUN_00576270(_Dst,3,0,"notnull",0);
                                      FUN_00576270(_Dst,4,0,"dflt_value",0);
                                      FUN_00576270(_Dst,5,0,&DAT_00718c50,0);
                                      FUN_00576bd0(piVar9,iVar6);
                                      puVar10 = *(undefined4 **)(iVar6 + 4);
                                      iVar6 = 0;
                                      puVar20 = local_c;
                                      if (0 < *(short *)(local_24 + 0x26)) {
                                        do {
                                          if ((*(byte *)((int)puVar10 + 0x16) & 2) == 0) {
                                            FUN_0056be90(_Dst,7,iVar6 - (int)local_28,1);
                                            FUN_0056bf50(_Dst,0x5e,0,2,0,*puVar10,0);
                                            puVar18 = &DAT_006fc918;
                                            if ((undefined1 *)puVar10[3] != (undefined1 *)0x0) {
                                              puVar18 = (undefined1 *)puVar10[3];
                                            }
                                            FUN_0056bf50(_Dst,0x5e,0,3,0,puVar18,0);
                                            FUN_0056be90(_Dst,7,*(char *)(puVar10 + 5) != '\0',4);
                                            if (puVar10[2] == 0) {
                                              FUN_0056be90(_Dst,10,0,5);
                                            }
                                            else {
                                              FUN_0056bf50(_Dst,0x5e,0,5,0,puVar10[2],0);
                                            }
                                            FUN_0056be90(_Dst,7,*(ushort *)((int)puVar10 + 0x16) & 1
                                                         ,6);
                                            FUN_0056be90(_Dst,0x10,1,6);
                                          }
                                          else {
                                            local_28 = (int *)((int)local_28 + 1);
                                          }
                                          iVar6 = iVar6 + 1;
                                          puVar10 = puVar10 + 6;
                                          puVar20 = local_c;
                                        } while (iVar6 < *(short *)(local_24 + 0x26));
                                      }
                                    }
                                  }
                                  else {
                                    iVar6 = FUN_0057a2c0(local_14,"index_info");
                                    if ((iVar6 == 0) && (local_10 != (char *)0x0)) {
                                      iVar6 = FUN_005637c0(param_1);
                                      if (iVar6 != 0) goto LAB_0056314c;
                                      puVar10 = (undefined4 *)FUN_00557190(local_8,local_10,uVar8);
                                      puVar20 = local_c;
                                      local_34 = puVar10;
                                      if (puVar10 != (undefined4 *)0x0) {
                                        local_38 = (int *)puVar10[3];
                                        FUN_005762b0(_Dst,3);
                                        param_1[0x13] = 3;
                                        FUN_00576270(_Dst,0,0,"seqno",0);
                                        FUN_00576270(_Dst,1,0,&DAT_00718c28,0);
                                        FUN_00576270(_Dst,2,0,&DAT_00718c2c,0);
                                        puVar20 = local_c;
                                        if (0 < (int)puVar10[9]) {
                                          iVar6 = 0;
                                          do {
                                            iVar7 = *(int *)(puVar10[1] + iVar6 * 4);
                                            FUN_0056be90(_Dst,7,iVar6,1);
                                            FUN_0056be90(_Dst,7,iVar7,2);
                                            FUN_0056bf50(_Dst,0x5e,0,3,0,
                                                         *(undefined4 *)(local_38[1] + iVar7 * 0x18)
                                                         ,0);
                                            FUN_0056be90(_Dst,0x10,1,3);
                                            iVar6 = iVar6 + 1;
                                            puVar20 = local_c;
                                            puVar10 = local_34;
                                          } while (iVar6 < (int)local_34[9]);
                                        }
                                      }
                                    }
                                    else {
                                      iVar6 = FUN_0057a2c0(local_14,"index_list");
                                      piVar11 = param_1;
                                      if ((iVar6 == 0) && (local_10 != (char *)0x0)) {
                                        iVar6 = FUN_005637c0(param_1);
                                        if (iVar6 != 0) goto LAB_0056314c;
                                        iVar6 = FUN_005572d0(local_8,local_10,uVar8);
                                        puVar20 = local_c;
                                        if (iVar6 != 0) {
                                          uVar8 = FUN_0055ab80(piVar11);
                                          puVar10 = *(undefined4 **)(iVar6 + 8);
                                          puVar20 = local_c;
                                          if (puVar10 != (undefined4 *)0x0) {
                                            iVar6 = 0;
                                            FUN_005762b0(uVar8,3);
                                            param_1[0x13] = 3;
                                            FUN_00576270(uVar8,0,0,&DAT_00718c74,0);
                                            FUN_00576270(uVar8,1,0,&DAT_00718c2c,0);
                                            FUN_00576270(uVar8,2,0,"unique",0);
                                            do {
                                              FUN_0056be90(uVar8,7,iVar6,1);
                                              FUN_0056bf50(uVar8,0x5e,0,2,0,*puVar10,0);
                                              FUN_0056be90(uVar8,7,*(char *)(puVar10 + 0xb) != '\0',
                                                           3);
                                              FUN_0056be90(uVar8,0x10,1,3);
                                              puVar10 = (undefined4 *)puVar10[5];
                                              iVar6 = iVar6 + 1;
                                              puVar20 = local_c;
                                            } while (puVar10 != (undefined4 *)0x0);
                                          }
                                        }
                                      }
                                      else {
                                        iVar6 = FUN_0057a2c0(local_14,"database_list");
                                        piVar11 = param_1;
                                        if (iVar6 == 0) {
                                          iVar6 = FUN_005637c0(param_1);
                                          if (iVar6 != 0) goto LAB_0056314c;
                                          FUN_005762b0(_Dst,3);
                                          piVar11[0x13] = 3;
                                          FUN_00576270(_Dst,0,0,&DAT_00718c74,0);
                                          FUN_00576270(_Dst,1,0,&DAT_00718c2c,0);
                                          FUN_00576270(_Dst,2,0,&DAT_00718a48,0);
                                          iVar6 = 0;
                                          puVar20 = local_c;
                                          if (0 < local_8[5]) {
                                            iVar7 = 0;
                                            do {
                                              if (*(int *)(iVar7 + 4 + local_8[4]) != 0) {
                                                FUN_0056be90(_Dst,7,iVar6,1);
                                                FUN_0056bf50(_Dst,0x5e,0,2,0,
                                                             *(undefined4 *)(iVar7 + local_8[4]),0);
                                                uVar8 = FUN_0054d4f0(*(undefined4 *)
                                                                      (iVar7 + 4 + local_8[4]),0);
                                                FUN_0056bf50(_Dst,0x5e,0,3,0,uVar8);
                                                FUN_0056be90(_Dst,0x10,1,3);
                                              }
                                              iVar6 = iVar6 + 1;
                                              iVar7 = iVar7 + 0x10;
                                              puVar20 = local_c;
                                            } while (iVar6 < local_8[5]);
                                          }
                                        }
                                        else {
                                          piVar11 = (int *)FUN_0057a2c0(local_14,"collation_list");
                                          if (piVar11 == (int *)0x0) {
                                            local_28 = piVar11;
                                            FUN_005762b0(_Dst,2);
                                            param_1[0x13] = 2;
                                            FUN_00576270(_Dst,0,0,&DAT_00718c74,0);
                                            FUN_00576270(_Dst,1,0,&DAT_00718c2c,0);
                                            for (puVar10 = (undefined4 *)local_8[0x69];
                                                puVar20 = local_c, puVar10 != (undefined4 *)0x0;
                                                puVar10 = (undefined4 *)*puVar10) {
                                              puVar20 = (undefined4 *)puVar10[2];
                                              FUN_0056be90(_Dst,7,local_28,1);
                                              local_28 = (int *)((int)local_28 + 1);
                                              FUN_0056bf50(_Dst,0x5e,0,2,0,*puVar20,0);
                                              FUN_0056be90(_Dst,0x10,1,2);
                                            }
                                          }
                                          else {
                                            iVar6 = FUN_0057a2c0(local_14,"foreign_key_list");
                                            pbVar3 = local_14;
                                            piVar11 = param_1;
                                            if ((iVar6 == 0) && (local_10 != (char *)0x0)) {
                                              iVar6 = FUN_005637c0(param_1);
                                              if (iVar6 != 0) goto LAB_0056314c;
                                              piVar9 = (int *)FUN_005572d0(local_8,local_10,uVar8);
                                              puVar20 = local_c;
                                              local_38 = piVar9;
                                              if (piVar9 != (int *)0x0) {
                                                iVar7 = FUN_0055ab80(piVar11);
                                                iVar6 = piVar9[4];
                                                puVar20 = local_c;
                                                local_20 = iVar6;
                                                local_18 = iVar7;
                                                if (iVar6 != 0) {
                                                  local_24 = 0;
                                                  FUN_005762b0(iVar7,8);
                                                  param_1[0x13] = 8;
                                                  FUN_00576270(iVar7,0,0,&DAT_00718cb4,0);
                                                  FUN_00576270(iVar7,1,0,&DAT_00718c74,0);
                                                  FUN_00576270(iVar7,2,0,"table",0);
                                                  FUN_00576270(iVar7,3,0,&DAT_0071580c,0);
                                                  FUN_00576270(iVar7,4,0,&DAT_00718cb8,0);
                                                  FUN_00576270(iVar7,5,0,"on_update",0);
                                                  FUN_00576270(iVar7,6,0,"on_delete",0);
                                                  FUN_00576270(iVar7,7,0,"match",0);
                                                  iVar7 = 0;
                                                  do {
                                                    param_1 = (int *)0x0;
                                                    if (0 < *(int *)(iVar6 + 0x14)) {
                                                      local_28 = (int *)(iVar6 + 0x24);
                                                      do {
                                                        iVar7 = local_28[1];
                                                        uVar8 = FUN_00528c60(*(undefined1 *)
                                                                              (iVar6 + 0x19));
                                                        uVar12 = FUN_00528c60(*(undefined1 *)
                                                                               (iVar6 + 0x1a));
                                                        FUN_0056be90(local_18,7,local_24,1);
                                                        FUN_0056be90(local_18,7,param_1,2);
                                                        FUN_0056bf50(local_18,0x5e,0,3,0,
                                                                     *(undefined4 *)(local_20 + 8),0
                                                                    );
                                                        FUN_0056bf50(local_18,0x5e,0,4,0,
                                                                     *(undefined4 *)
                                                                      (local_38[1] +
                                                                      *local_28 * 0x18),0);
                                                        iVar6 = local_18;
                                                        uVar13 = 10;
                                                        if (iVar7 != 0) {
                                                          uVar13 = 0x5e;
                                                        }
                                                        FUN_0056bf50(local_18,uVar13,0,5,0,iVar7,0);
                                                        FUN_0056bf50(iVar6,0x5e,0,6,0,uVar12,0);
                                                        FUN_0056bf50(iVar6,0x5e,0,7,0,uVar8,0);
                                                        FUN_0056bf50(iVar6,0x5e,0,8,0,&DAT_00718cdc,
                                                                     0);
                                                        FUN_0056be90(iVar6,0x10,1,8);
                                                        param_1 = (int *)((int)param_1 + 1);
                                                        local_28 = local_28 + 2;
                                                        iVar7 = local_24;
                                                        iVar6 = local_20;
                                                      } while ((int)param_1 <
                                                               *(int *)(local_20 + 0x14));
                                                    }
                                                    iVar6 = *(int *)(iVar6 + 4);
                                                    iVar7 = iVar7 + 1;
                                                    local_24 = iVar7;
                                                    local_20 = iVar6;
                                                  } while (iVar6 != 0);
                                                  local_20 = 0;
                                                  puVar20 = local_c;
                                                }
                                              }
                                            }
                                            else {
                                              iVar6 = FUN_0057a2c0(local_14,"case_sensitive_like");
                                              if (iVar6 == 0) {
                                                puVar20 = local_c;
                                                if (local_10 != (char *)0x0) {
                                                  uVar5 = FUN_0055a000(local_10,0);
                                                  FUN_00563d20(local_8,uVar5);
                                                  puVar20 = local_c;
                                                }
                                              }
                                              else {
                                                iVar6 = FUN_0057a2c0(pbVar3,"integrity_check");
                                                if ((iVar6 == 0) ||
                                                   (iVar6 = FUN_0057a2c0(pbVar3,"quick_check"),
                                                   iVar6 == 0)) {
                                                  piVar11 = param_1;
                                                  local_30 = (int *)(uint)((&DAT_007120d8)
                                                                           [*local_14] == 'q');
                                                  if (*piVar9 == 0) {
                                                    local_18 = -1;
                                                  }
                                                  iVar6 = FUN_005637c0(param_1);
                                                  if (iVar6 != 0) goto LAB_0056314c;
                                                  piVar11[0x13] = 6;
                                                  FUN_005762b0(_Dst,1);
                                                  FUN_00576270(_Dst,0,0,"integrity_check",0);
                                                  local_38 = (int *)0x64;
                                                  local_2c = (int *)0x64;
                                                  if ((local_10 != (char *)0x0) &&
                                                     (FUN_0055a0e0(local_10,&local_2c),
                                                     local_38 = local_2c, (int)local_2c < 1)) {
                                                    local_38 = (int *)0x64;
                                                  }
                                                  piVar9 = local_38;
                                                  FUN_0056be90(_Dst,7,local_38,1);
                                                  local_24 = 0;
                                                  if (0 < local_8[5]) {
                                                    local_28 = (int *)0x0;
                                                    piVar17 = local_8;
                                                    iVar6 = local_18;
                                                    do {
                                                      iVar7 = 0;
                                                      if ((iVar6 < 0) || (local_24 == iVar6)) {
                                                        FUN_00550aa0(piVar11,local_24);
                                                        uVar8 = FUN_0056be30(_Dst,0x78,1);
                                                        FUN_0056be90(_Dst,6,0,0);
                                                        FUN_00573d80(_Dst,uVar8);
                                                        iVar6 = *(int *)((int)local_28 +
                                                                        local_8[4] + 0xc);
                                                        local_34 = (undefined4 *)(iVar6 + 8);
                                                        for (local_2c = *(int **)(iVar6 + 0x10);
                                                            local_2c != (int *)0x0;
                                                            local_2c = (int *)*local_2c) {
                                                          iVar6 = local_2c[2];
                                                          FUN_0056be90(_Dst,7,*(undefined4 *)
                                                                               (iVar6 + 0x20),
                                                                       iVar7 + 2);
                                                          iVar15 = iVar7;
                                                          for (iVar6 = *(int *)(iVar6 + 8);
                                                              iVar7 = iVar15 + 1, iVar6 != 0;
                                                              iVar6 = *(int *)(iVar6 + 0x14)) {
                                                            FUN_0056be90(_Dst,7,*(undefined4 *)
                                                                                 (iVar6 + 0x28),
                                                                         iVar15 + 3);
                                                            iVar15 = iVar7;
                                                          }
                                                        }
                                                        if (param_1[0x13] < iVar7 + 4) {
                                                          param_1[0x13] = iVar7 + 4;
                                                        }
                                                        FUN_0056bef0(_Dst,0x6f,2,iVar7,1);
                                                        FUN_0056c490(_Dst,local_24);
                                                        uVar8 = FUN_0056be30(_Dst,0x49,2);
                                                        uVar12 = FUN_0055d980(local_8,
                                                  "*** in database %s ***\n",
                                                  *(undefined4 *)((int)local_28 + local_8[4]),
                                                  0xffffffff);
                                                  FUN_0056bf50(_Dst,0x5e,0,3,0,uVar12);
                                                  FUN_0056be90(_Dst,0xd,2,4);
                                                  FUN_0056bef0(_Dst,0x5b,4,3,2);
                                                  FUN_0056be90(_Dst,0x10,2,1);
                                                  FUN_00573d80(_Dst,uVar8);
                                                  local_34 = *(undefined4 **)((int)local_34 + 8);
                                                  piVar11 = param_1;
                                                  piVar9 = local_30;
                                                  iVar6 = local_18;
                                                  piVar17 = local_8;
                                                  while ((param_1 = piVar11, local_18 = iVar6,
                                                         local_8 = piVar17,
                                                         local_34 != (undefined4 *)0x0 &&
                                                         (piVar9 == (int *)0x0))) {
                                                    uVar19 = local_34[2];
                                                    piVar9 = (int *)0x0;
                                                    local_44 = uVar19;
                                                    if (*(int *)(uVar19 + 8) != 0) {
                                                      uVar8 = FUN_0056be30(_Dst,0x78,1);
                                                      FUN_0056be90(_Dst,6,0,0);
                                                      FUN_00573d80(_Dst,uVar8);
                                                      FUN_0055e6e0(param_1,uVar19,1,0x27);
                                                      FUN_0056be90(_Dst,7,0,2);
                                                      iVar6 = FUN_0056be90(_Dst,0x48,1,0);
                                                      local_40 = iVar6;
                                                      FUN_0056be90(_Dst,0x14,2,1);
                                                      piVar9 = *(int **)(uVar19 + 8);
                                                      local_2c = piVar9;
                                                      if (piVar9 != (int *)0x0) {
                                                        local_1c = 2;
                                                        do {
                                                          iVar6 = local_1c;
                                                          local_2c = piVar9;
                                                          uVar8 = FUN_00559920(param_1,piVar9,1,3,0)
                                                          ;
                                                          local_3c = FUN_0056bfc0(_Dst,0x34,iVar6,0,
                                                                                  uVar8,piVar9[9] +
                                                                                        1);
                                                          local_20 = FUN_0056c070(_Dst,0xb,&
                                                  DAT_007123a4);
                                                  iVar7 = _Dst[1];
                                                  iVar15 = *_Dst;
                                                  iVar6 = local_20 + 1;
                                                  if ((iVar7 == 0) ||
                                                     (*(char *)(iVar15 + 0x38) != '\0')) {
                                                    FUN_00539320(iVar15,0xfffffffe,"rowid ");
                                                  }
                                                  else {
                                                    if (iVar6 < 0) {
                                                      iVar6 = _Dst[7] + -1;
                                                    }
                                                    iVar16 = iVar7 + iVar6 * 0x14;
                                                    FUN_00539320(iVar15,(int)*(char *)(iVar16 + 1),
                                                                 *(undefined4 *)
                                                                  (iVar7 + 0x10 + iVar6 * 0x14));
                                                    *(char **)(iVar16 + 0x10) = "rowid ";
                                                    *(undefined1 *)(iVar16 + 1) = 0xfe;
                                                  }
                                                  iVar6 = _Dst[1];
                                                  iVar7 = *_Dst;
                                                  iVar15 = local_20 + 3;
                                                  if ((iVar6 == 0) ||
                                                     (*(char *)(iVar7 + 0x38) != '\0')) {
                                                    FUN_00539320(iVar7,0xfffffffe,
                                                                 " missing from index ");
                                                  }
                                                  else {
                                                    if (iVar15 < 0) {
                                                      iVar15 = _Dst[7] + -1;
                                                    }
                                                    iVar16 = iVar6 + iVar15 * 0x14;
                                                    FUN_00539320(iVar7,(int)*(char *)(iVar16 + 1),
                                                                 *(undefined4 *)
                                                                  (iVar6 + 0x10 + iVar15 * 0x14));
                                                    *(char **)(iVar16 + 0x10) =
                                                         " missing from index ";
                                                    *(undefined1 *)(iVar16 + 1) = 0xfe;
                                                  }
                                                  iVar6 = _Dst[1];
                                                  iVar7 = *piVar9;
                                                  iVar15 = *_Dst;
                                                  iVar16 = local_20 + 4;
                                                  if ((iVar6 == 0) ||
                                                     (*(char *)(iVar15 + 0x38) != '\0')) {
                                                    FUN_00539320(iVar15,0,iVar7);
                                                  }
                                                  else {
                                                    if (iVar16 < 0) {
                                                      iVar16 = _Dst[7] + -1;
                                                    }
                                                    iVar1 = iVar6 + iVar16 * 0x14;
                                                    FUN_00539320(iVar15,(int)*(char *)(iVar1 + 1),
                                                                 *(undefined4 *)
                                                                  (iVar6 + 0x10 + iVar16 * 0x14));
                                                    *(undefined4 *)(iVar1 + 0x10) = 0;
                                                    if (iVar7 == 0) {
                                                      *(undefined4 *)(iVar1 + 0x10) = 0;
                                                      *(undefined1 *)(iVar1 + 1) = 0;
                                                    }
                                                    else {
                                                      uVar8 = FUN_00568070(iVar7);
                                                      uVar8 = FUN_005524a0(*_Dst,iVar7,uVar8);
                                                      *(undefined4 *)(iVar1 + 0x10) = uVar8;
                                                      *(undefined1 *)(iVar1 + 1) = 0xff;
                                                    }
                                                  }
                                                  FUN_00573d80(_Dst,local_20 + 9);
                                                  FUN_00573d80(_Dst,local_3c);
                                                  piVar9 = (int *)local_2c[5];
                                                  local_1c = local_1c + 1;
                                                  } while (piVar9 != (int *)0x0);
                                                  local_2c = (int *)0x0;
                                                  iVar6 = local_40;
                                                  }
                                                  FUN_0056be90(_Dst,0x5f,1,iVar6 + 1);
                                                  FUN_00573d80(_Dst,iVar6);
                                                  local_2c = *(int **)(local_44 + 8);
                                                  piVar9 = local_30;
                                                  if (local_2c != (int *)0x0) {
                                                    local_20 = 2;
                                                    do {
                                                      uVar8 = FUN_0056be30(_Dst,0x78,1);
                                                      FUN_0056be90(_Dst,6,0,0);
                                                      FUN_00573d80(_Dst,uVar8);
                                                      iVar6 = FUN_0056c070(_Dst,10,&DAT_0071243c);
                                                      local_1c = iVar6;
                                                      FUN_0056c2c0(_Dst,iVar6 + 1,local_20);
                                                      FUN_0056c2e0(_Dst,iVar6 + 1,iVar6 + 4);
                                                      iVar7 = local_1c + 3;
                                                      FUN_0056c2c0(_Dst,iVar7,local_20);
                                                      FUN_0056c2e0(_Dst,iVar7,local_1c + 2);
                                                      FUN_00573d80(_Dst,iVar6 + 4);
                                                      iVar6 = _Dst[1];
                                                      iVar7 = *_Dst;
                                                      iVar15 = local_1c + 6;
                                                      if ((iVar6 == 0) ||
                                                         (*(char *)(iVar7 + 0x38) != '\0')) {
                                                        FUN_00539320(iVar7,0xfffffffe,
                                                                     "wrong # of entries in index ")
                                                        ;
                                                      }
                                                      else {
                                                        if (iVar15 < 0) {
                                                          iVar15 = _Dst[7] + -1;
                                                        }
                                                        iVar16 = iVar6 + iVar15 * 0x14;
                                                        FUN_00539320(iVar7,(int)*(char *)(iVar16 + 1
                                                                                         ),
                                                                     *(undefined4 *)
                                                                      (iVar6 + 0x10 + iVar15 * 0x14)
                                                                    );
                                                        *(char **)(iVar16 + 0x10) =
                                                             "wrong # of entries in index ";
                                                        *(undefined1 *)(iVar16 + 1) = 0xfe;
                                                      }
                                                      iVar6 = _Dst[1];
                                                      iVar7 = *local_2c;
                                                      iVar15 = *_Dst;
                                                      iVar16 = local_1c + 7;
                                                      if ((iVar6 == 0) ||
                                                         (*(char *)(iVar15 + 0x38) != '\0')) {
                                                        FUN_00539320(iVar15,0,iVar7);
                                                      }
                                                      else {
                                                        if (iVar16 < 0) {
                                                          iVar16 = _Dst[7] + -1;
                                                        }
                                                        iVar1 = iVar6 + iVar16 * 0x14;
                                                        FUN_00539320(iVar15,(int)*(char *)(iVar1 + 1
                                                                                          ),
                                                                     *(undefined4 *)
                                                                      (iVar6 + 0x10 + iVar16 * 0x14)
                                                                    );
                                                        *(undefined4 *)(iVar1 + 0x10) = 0;
                                                        if (iVar7 == 0) {
                                                          *(undefined4 *)(iVar1 + 0x10) = 0;
                                                          *(undefined1 *)(iVar1 + 1) = 0;
                                                        }
                                                        else {
                                                          uVar8 = FUN_00568070(iVar7);
                                                          uVar8 = FUN_005524a0(*_Dst,iVar7,uVar8);
                                                          *(undefined4 *)(iVar1 + 0x10) = uVar8;
                                                          *(undefined1 *)(iVar1 + 1) = 0xff;
                                                        }
                                                      }
                                                      local_20 = local_20 + 1;
                                                      local_2c = (int *)local_2c[5];
                                                      piVar9 = local_30;
                                                    } while (local_2c != (int *)0x0);
                                                  }
                                                  }
                                                  local_34 = (undefined4 *)*local_34;
                                                  piVar11 = param_1;
                                                  iVar6 = local_18;
                                                  piVar17 = local_8;
                                                  }
                                                  }
                                                  local_28 = local_28 + 4;
                                                  local_24 = local_24 + 1;
                                                  piVar9 = local_38;
                                                  } while (local_24 < piVar17[5]);
                                                  }
                                                  iVar15 = FUN_0056c070(_Dst,4,&DAT_00712394);
                                                  FUN_0056c2e0(_Dst,iVar15,-(int)piVar9);
                                                  FUN_00573d80(_Dst,iVar15 + 1);
                                                  iVar6 = _Dst[1];
                                                  iVar7 = *_Dst;
                                                  iVar15 = iVar15 + 2;
                                                  if ((iVar6 == 0) ||
                                                     (*(char *)(iVar7 + 0x38) != '\0')) {
                                                    FUN_00539320(iVar7,0xfffffffe,&DAT_00718d6c);
                                                    puVar20 = local_c;
                                                  }
                                                  else {
                                                    if (iVar15 < 0) {
                                                      iVar15 = _Dst[7] + -1;
                                                    }
                                                    iVar16 = iVar6 + iVar15 * 0x14;
                                                    FUN_00539320(iVar7,(int)*(char *)(iVar16 + 1),
                                                                 *(undefined4 *)
                                                                  (iVar6 + 0x10 + iVar15 * 0x14));
                                                    *(undefined **)(iVar16 + 0x10) = &DAT_00718d6c;
                                                    *(undefined1 *)(iVar16 + 1) = 0xfe;
                                                    puVar20 = local_c;
                                                  }
                                                }
                                                else {
                                                  iVar6 = FUN_0057a2c0(pbVar3,"encoding");
                                                  pcVar22 = local_10;
                                                  piVar11 = param_1;
                                                  if (iVar6 == 0) {
                                                    if (local_10 == (char *)0x0) {
                                                      iVar6 = FUN_005637c0(param_1);
                                                      if (iVar6 != 0) goto LAB_0056314c;
                                                      FUN_005762b0(_Dst,1);
                                                      FUN_00576270(_Dst,0,0,"encoding",0);
                                                      FUN_0056be90(_Dst,0x5e,0,1);
                                                      iVar6 = _Dst[1];
                                                      iVar7 = *_Dst;
                                                      puVar14 = (&PTR_DAT_00712468)
                                                                [(uint)*(byte *)(*(int *)(*(int *)(*
                                                  piVar11 + 0x10) + 0xc) + 0x4d) * 2];
                                                  if ((iVar6 == 0) ||
                                                     (*(char *)(iVar7 + 0x38) != '\0')) {
                                                    FUN_00539320(iVar7,0xfffffffe,puVar14);
                                                    FUN_0056be90(_Dst,0x10,1,1);
                                                    puVar20 = local_c;
                                                  }
                                                  else {
                                                    iVar15 = iVar6 + (_Dst[7] + -1) * 0x14;
                                                    FUN_00539320(iVar7,(int)*(char *)(iVar15 + 1),
                                                                 *(undefined4 *)
                                                                  (iVar6 + 0x10 +
                                                                  (_Dst[7] + -1) * 0x14));
                                                    *(undefined4 *)(iVar15 + 0x10) = 0;
                                                    if (puVar14 == (undefined *)0x0) {
                                                      *(undefined4 *)(iVar15 + 0x10) = 0;
                                                      *(undefined1 *)(iVar15 + 1) = 0;
                                                      FUN_0056be90(_Dst,0x10,1,1);
                                                      puVar20 = local_c;
                                                    }
                                                    else {
                                                      *(undefined **)(iVar15 + 0x10) = puVar14;
                                                      *(undefined1 *)(iVar15 + 1) = 0xfe;
                                                      FUN_0056be90(_Dst,0x10,1,1);
                                                      puVar20 = local_c;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = *(ushort *)
                                                             (*(int *)(local_8[4] + 0xc) + 0x4e);
                                                    if (((uVar2 & 1) == 0) ||
                                                       (puVar20 = local_c, (uVar2 & 4) != 0)) {
                                                      puVar14 = &DAT_00715a20;
                                                      ppuVar21 = &PTR_DAT_00712468;
                                                      do {
                                                        iVar6 = FUN_0057a2c0(pcVar22,puVar14);
                                                        if (iVar6 == 0) {
                                                          cVar4 = *(char *)(ppuVar21 + 1);
                                                          if (cVar4 == '\0') {
                                                            cVar4 = '\x02';
                                                          }
                                                          *(char *)(*(int *)(*(int *)(*param_1 +
                                                                                     0x10) + 0xc) +
                                                                   0x4d) = cVar4;
                                                          puVar20 = local_c;
                                                          if (*ppuVar21 != (undefined *)0x0)
                                                          goto LAB_00563120;
                                                          break;
                                                        }
                                                        puVar14 = ppuVar21[2];
                                                        ppuVar21 = ppuVar21 + 2;
                                                      } while (puVar14 != (undefined *)0x0);
                                                      FUN_00553950(param_1,
                                                  "unsupported encoding: %s",pcVar22);
                                                  puVar20 = local_c;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = FUN_0057a2c0(pbVar3,"schema_version");
                                                    if (((iVar6 == 0) ||
                                                        (iVar6 = FUN_0057a2c0(pbVar3,"user_version")
                                                        , iVar6 == 0)) ||
                                                       (iVar6 = FUN_0057a2c0(pbVar3,"freelist_count"
                                                                            ), iVar6 == 0)) {
                                                      FUN_00576ba0(_Dst,local_18);
                                                      switch(*pbVar3) {
                                                      case 0x46:
                                                      case 0x66:
                                                        iVar6 = 0;
                                                        break;
                                                      default:
                                                        iVar6 = 6;
                                                        break;
                                                      case 0x53:
                                                      case 0x73:
                                                        iVar6 = 1;
                                                      }
                                                      if ((local_10 == (char *)0x0) || (iVar6 == 0))
                                                      {
                                                        iVar7 = FUN_0056c070(_Dst,3,&DAT_007124d8);
                                                        FUN_0056c2c0(_Dst,iVar7,local_18);
                                                        FUN_0056c2c0(_Dst,iVar7 + 1,local_18);
                                                        FUN_0056c300(_Dst,iVar7 + 1,iVar6);
                                                        FUN_005762b0(_Dst,1);
                                                        FUN_00576270(_Dst,0,0,local_14,0xffffffff);
                                                        puVar20 = local_c;
                                                      }
                                                      else {
                                                        iVar7 = FUN_0056c070(_Dst,3,&DAT_007124c8);
                                                        FUN_0056c2c0(_Dst,iVar7,local_18);
                                                        uVar8 = FUN_0054a970(local_10);
                                                        FUN_0056c2c0(_Dst,iVar7 + 1,uVar8);
                                                        FUN_0056c2c0(_Dst,iVar7 + 2,local_18);
                                                        FUN_0056c2e0(_Dst,iVar7 + 2,iVar6);
                                                        puVar20 = local_c;
                                                      }
                                                    }
                                                    else {
                                                      iVar6 = FUN_0057a2c0(pbVar3,"compile_options")
                                                      ;
                                                      if (iVar6 == 0) {
                                                        iVar6 = 0;
                                                        FUN_005762b0(_Dst,1);
                                                        param_1[0x13] = 1;
                                                        FUN_00576270(_Dst,0,0,"compile_option",0);
                                                        iVar7 = FUN_005204d0(0);
                                                        while (puVar20 = local_c, iVar7 != 0) {
                                                          iVar6 = iVar6 + 1;
                                                          FUN_0056bf50(_Dst,0x5e,0,1,0,iVar7,0);
                                                          FUN_0056be90(_Dst,0x10,1,1);
                                                          iVar7 = FUN_005204d0(iVar6);
                                                        }
                                                      }
                                                      else {
                                                        iVar6 = FUN_0057a2c0(pbVar3,"wal_checkpoint"
                                                                            );
                                                        pbVar3 = local_14;
                                                        if (iVar6 == 0) {
                                                          iVar6 = 10;
                                                          if (*piVar9 != 0) {
                                                            iVar6 = local_18;
                                                          }
                                                          uVar8 = 0;
                                                          if (local_10 != (char *)0x0) {
                                                            iVar7 = FUN_0057a2c0(local_10,&
                                                  DAT_00718a34);
                                                  if (iVar7 == 0) {
                                                    uVar8 = 1;
                                                  }
                                                  else {
                                                    iVar7 = FUN_0057a2c0(local_10,"restart");
                                                    if (iVar7 == 0) {
                                                      uVar8 = 2;
                                                    }
                                                  }
                                                  }
                                                  iVar7 = FUN_005637c0(param_1);
                                                  if (iVar7 != 0) goto LAB_0056314c;
                                                  FUN_005762b0(_Dst,3);
                                                  param_1[0x13] = 3;
                                                  FUN_00576270(_Dst,0,0,&DAT_00718e00,0);
                                                  FUN_00576270(_Dst,1,0,&DAT_00718e08,0);
                                                  FUN_00576270(_Dst,2,0,"checkpointed",0);
                                                  FUN_0056bef0(_Dst,0x7d,iVar6,uVar8,1);
                                                  FUN_0056be90(_Dst,0x10,1,3);
                                                  puVar20 = local_c;
                                                  }
                                                  else {
                                                    iVar6 = FUN_0057a2c0(local_14,
                                                  "wal_autocheckpoint");
                                                  if (iVar6 == 0) {
                                                    if (local_10 != (char *)0x0) {
                                                      uVar8 = FUN_0054a970(local_10);
                                                      FUN_00525c40(local_8,uVar8);
                                                    }
                                                    if ((code *)local_8[0x30] == FUN_00577d90) {
                                                      iVar6 = local_8[0x31];
                                                    }
                                                    else {
                                                      iVar6 = 0;
                                                    }
                                                    FUN_00546df0(param_1,"wal_autocheckpoint",iVar6,
                                                                 iVar6 >> 0x1f);
                                                    puVar20 = local_c;
                                                  }
                                                  else {
                                                    iVar6 = FUN_0057a2c0(pbVar3,"shrink_memory");
                                                    if (iVar6 == 0) {
                                                      FUN_00579d80(local_8);
                                                      puVar20 = local_c;
                                                    }
                                                    else {
                                                      iVar6 = FUN_0057a2c0(pbVar3,"busy_timeout");
                                                      puVar20 = local_c;
                                                      if (iVar6 == 0) {
                                                        if (local_10 != (char *)0x0) {
                                                          uVar8 = FUN_0054a970(local_10);
                                                          FUN_00523850(local_8,uVar8);
                                                        }
                                                        FUN_00546df0(param_1,"timeout",local_8[0x77]
                                                                     ,local_8[0x77] >> 0x1f);
                                                        puVar20 = local_c;
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
          }
        }
      }
    }
  }
  else {
    if (local_58 != 0) {
      FUN_00553950(param_1,&DAT_00716900,local_58);
      FUN_00524410(local_58);
    }
    param_1[0x11] = param_1[0x11] + 1;
    param_1[3] = (int)local_38;
    puVar20 = local_c;
  }
LAB_00563120:
  if (*(char *)((int)local_8 + 0x36) != '\0') {
    FUN_0054f380(puVar20[1],*(undefined1 *)((int)puVar20 + 9),(uint)local_8[6] >> 0xd & 1,
                 (uint)local_8[6] >> 0xe & 1);
  }
LAB_0056314c:
  FUN_005521a0(local_8,local_14);
  FUN_005521a0(local_8,local_10);
  return;
}


/* FUN_005631b0 @ 005631b0  kind=lib  attributed-by=lib-island  size=917 */

uint FUN_005631b0(int param_1,void *param_2,size_t param_3,byte param_4,int param_5,int *param_6,
                 int *param_7)

{
  undefined4 *puVar1;
  int *_Dst;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  size_t _Size;
  int iVar5;
  uint uVar6;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  _Dst = (int *)FUN_00552230(param_1,0x230);
  if (_Dst == (int *)0x0) {
    uVar2 = 7;
  }
  else {
    memset(_Dst,0,0x230);
    _Dst[0x7c] = param_5;
    local_c = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      local_10 = 0;
      do {
        iVar5 = *(int *)(local_10 + 4 + *(int *)(param_1 + 0x10));
        if ((iVar5 != 0) && (uVar2 = FUN_0054f060(iVar5), uVar2 != 0)) {
          FUN_00553890(param_1,uVar2,"database schema is locked: %s",
                       *(undefined4 *)(*(int *)(param_1 + 0x10) + local_c * 0x10));
          goto LAB_005634f9;
        }
        local_c = local_c + 1;
        local_10 = local_10 + 0x10;
      } while (local_c < *(int *)(param_1 + 0x14));
    }
    FUN_005776d0(param_1);
    *_Dst = param_1;
    _Dst[0x6e] = 0;
    _Dst[0x6f] = 0x3ff00000;
    if (((int)param_3 < 0) || ((param_3 != 0 && (*(char *)((int)param_2 + (param_3 - 1)) == '\0'))))
    {
      FUN_00564800(_Dst,param_2,&local_8);
    }
    else {
      if (*(int *)(param_1 + 0x54) < (int)param_3) {
        FUN_00553890(param_1,0x12,"statement too long");
        uVar2 = 0x12;
        if (*(char *)(param_1 + 0x38) != '\0') {
          FUN_00553890(param_1,7,0);
          *(undefined1 *)(param_1 + 0x38) = 0;
          uVar2 = 7;
        }
        uVar2 = *(uint *)(param_1 + 0x30) & uVar2;
        goto LAB_005634f9;
      }
      if ((param_2 == (void *)0x0) ||
         (pvVar3 = (void *)FUN_00552230(param_1,param_3 + 1), pvVar3 == (void *)0x0)) {
        _Dst[0x7e] = (int)param_2 + param_3;
      }
      else {
        memcpy(pvVar3,param_2,param_3);
        *(undefined1 *)((int)pvVar3 + param_3) = 0;
        FUN_00564800(_Dst,pvVar3,&local_8);
        FUN_005521a0(param_1,pvVar3);
        _Dst[0x7e] = (int)param_2 + (_Dst[0x7e] - (int)pvVar3);
      }
    }
    if (*(char *)(param_1 + 0x38) != '\0') {
      _Dst[3] = 7;
    }
    if (_Dst[3] == 0x65) {
      _Dst[3] = 0;
    }
    if (*(char *)((int)_Dst + 0x11) != '\0') {
      FUN_005473d0(_Dst);
    }
    if (*(char *)(param_1 + 0x38) != '\0') {
      _Dst[3] = 7;
    }
    if (param_7 != (int *)0x0) {
      *param_7 = _Dst[0x7e];
    }
    uVar2 = _Dst[3];
    if (((uVar2 == 0) && (iVar5 = _Dst[2], iVar5 != 0)) && ((char)_Dst[0x75] != '\0')) {
      if ((char)_Dst[0x75] == '\x02') {
        FUN_005762b0(iVar5,4);
        uVar6 = 8;
        uVar4 = 0xc;
      }
      else {
        FUN_005762b0(iVar5,8);
        uVar6 = 0;
        uVar4 = 8;
      }
      if (uVar6 < uVar4) {
        iVar5 = 0;
        do {
          if (*(char *)(*(int *)_Dst[2] + 0x38) == '\0') {
            FUN_00575040(((int *)_Dst[2])[4] + iVar5,(&PTR_DAT_00712d0c)[uVar6],0xffffffff,1,0);
          }
          uVar6 = uVar6 + 1;
          iVar5 = iVar5 + 0x28;
        } while ((int)uVar6 < (int)uVar4);
      }
    }
    if (*(char *)(param_1 + 0x81) == '\0') {
      puVar1 = (undefined4 *)_Dst[2];
      _Size = _Dst[0x7e] - (int)param_2;
      if (puVar1 != (undefined4 *)0x0) {
        pvVar3 = (void *)0x0;
        if ((param_2 != (void *)0x0) &&
           (pvVar3 = (void *)FUN_00552230(*puVar1,_Size + 1), pvVar3 != (void *)0x0)) {
          memcpy(pvVar3,param_2,_Size);
          *(undefined1 *)((int)pvVar3 + _Size) = 0;
        }
        puVar1[0x26] = pvVar3;
        puVar1[0x18] = puVar1[0x18] ^ ((uint)param_4 << 9 ^ puVar1[0x18]) & 0x200;
      }
    }
    iVar5 = _Dst[2];
    if ((iVar5 == 0) || ((uVar2 == 0 && (*(char *)(param_1 + 0x38) == '\0')))) {
      *param_6 = iVar5;
    }
    else {
      FUN_005734d0(iVar5);
    }
    if (local_8 == 0) {
      FUN_00553890(param_1,uVar2,0);
    }
    else {
      FUN_00553890(param_1,uVar2,&DAT_00716900,local_8);
      FUN_005521a0(param_1,local_8);
    }
    iVar5 = _Dst[0x8a];
    while (iVar5 != 0) {
      iVar5 = _Dst[0x8a];
      _Dst[0x8a] = *(int *)(iVar5 + 4);
      FUN_005521a0(param_1,iVar5);
      iVar5 = _Dst[0x8a];
    }
  }
LAB_005634f9:
  FUN_005521a0(param_1,_Dst);
  if (param_1 != 0) {
    if ((*(char *)(param_1 + 0x38) != '\0') || (uVar2 == 0xc0a)) {
      FUN_00553890(param_1,7,0);
      *(undefined1 *)(param_1 + 0x38) = 0;
      uVar2 = 7;
    }
    return *(uint *)(param_1 + 0x30) & uVar2;
  }
  return uVar2 & 0xff;
}


/* FUN_00563650 @ 00563650  kind=lib  attributed-by=lib-island  size=37 */

void FUN_00563650(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = (char)((uint)param_2 >> 0x18);
  param_1[1] = (char)((uint)param_2 >> 0x10);
  param_1[2] = (char)((uint)param_2 >> 8);
  param_1[3] = (char)param_2;
  return;
}


/* FUN_00563680 @ 00563680  kind=lib  attributed-by=lib-island  size=253 */

void FUN_00563680(byte *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte local_14 [12];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if ((param_3 & 0xff000000) == 0) {
    iVar4 = 0;
    do {
      iVar6 = iVar4;
      bVar3 = (byte)param_2;
      param_2 = param_2 >> 7 | param_3 << 0x19;
      local_14[iVar6] = bVar3 | 0x80;
      param_3 = param_3 >> 7;
      iVar4 = iVar6 + 1;
    } while (param_2 != 0 || param_3 != 0);
    local_14[0] = local_14[0] & 0x7f;
    for (; -1 < iVar6; iVar6 = iVar6 + -1) {
      *param_1 = local_14[iVar6];
      param_1 = param_1 + 1;
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  param_1[8] = (byte)param_2;
  uVar1 = (param_2 >> 8 | param_3 << 0x18) >> 7;
  param_1[7] = (byte)(param_2 >> 8) | 0x80;
  uVar2 = (uVar1 | (param_3 >> 8) << 0x19) >> 7;
  param_1[6] = (byte)uVar1 | 0x80;
  uVar1 = (uVar2 | (param_3 >> 0xf) << 0x19) >> 7;
  param_1[5] = (byte)uVar2 | 0x80;
  uVar2 = (uVar1 | (param_3 >> 0x16) << 0x19) >> 7;
  uVar5 = uVar2 | (param_3 >> 0x1d) << 0x19;
  param_1[4] = (byte)uVar1 | 0x80;
  param_1[3] = (byte)uVar2 | 0x80;
  param_1[2] = (byte)(uVar5 >> 7) | 0x80;
  param_1[1] = (byte)(uVar5 >> 0xe) | 0x80;
  *param_1 = (byte)(uVar5 >> 0x15) | 0x80;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00563780 @ 00563780  kind=lib  attributed-by=lib-island  size=55 */

undefined4 FUN_00563780(byte *param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_2 & 0xffffc000) == 0) {
    *param_1 = (byte)(param_2 >> 7) | 0x80;
    param_1[1] = (byte)param_2 & 0x7f;
    return 2;
  }
  uVar1 = FUN_00563680(param_1,param_2,0);
  return uVar1;
}


/* FUN_005637c0 @ 005637c0  kind=lib  attributed-by=lib-island  size=49 */

int FUN_005637c0(int *param_1)

{
  int iVar1;
  
  if ((*(char *)(*param_1 + 0x81) == '\0') &&
     (iVar1 = FUN_0055b460(*param_1,param_1 + 1), iVar1 != 0)) {
    param_1[0x11] = param_1[0x11] + 1;
    param_1[3] = iVar1;
    return iVar1;
  }
  return 0;
}


/* FUN_00563800 @ 00563800  kind=lib  attributed-by=lib-island  size=325 */

int FUN_00563800(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 == 0) {
    iVar1 = FUN_0055da00(param_2);
    return iVar1;
  }
  if (param_2 < 1) {
    FUN_00524410(param_1);
    return 0;
  }
  if (0x7ffffeff < param_2) {
    return 0;
  }
  iVar1 = (*DAT_00766608._4_4_)(param_1);
  iVar2 = (*DAT_00766610)(param_2);
  if (iVar1 == iVar2) {
    return param_1;
  }
  if (DAT_007665e0 == 0) {
    iVar1 = (*(code *)DAT_00766608)(param_1,iVar2);
    return iVar1;
  }
  if (DAT_0076b488 != 0) {
    (*DAT_00766630)(DAT_0076b488);
  }
  FUN_00567c70(5,param_2);
  uVar3 = iVar2 - iVar1;
  iVar4 = (DAT_0076b494 - ((int)uVar3 >> 0x1f)) - (uint)(DAT_0076b490 < uVar3);
  if ((iVar4 <= (int)DAT_0076b360 >> 0x1f) &&
     ((iVar4 < (int)DAT_0076b360 >> 0x1f || (DAT_0076b490 - uVar3 <= DAT_0076b360)))) {
    FUN_0055da70(uVar3);
  }
  iVar4 = (*(code *)DAT_00766608)(param_1,iVar2);
  if (iVar4 == 0) {
    if (DAT_0076b498 == 0) goto LAB_00563913;
    FUN_0055da70(param_2);
    iVar4 = (*(code *)DAT_00766608)(param_1,iVar2);
    if (iVar4 == 0) goto LAB_00563913;
  }
  iVar2 = (*DAT_00766608._4_4_)(iVar4);
  FUN_00567c40(0,iVar2 - iVar1);
LAB_00563913:
  if (DAT_0076b488 == 0) {
    return iVar4;
  }
  (*DAT_00766638)(DAT_0076b488);
  return iVar4;
}


/* FUN_00563950 @ 00563950  kind=lib  attributed-by=lib-island  size=670 */

void FUN_00563950(int *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  byte bVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  piVar4 = param_1;
  iVar11 = -1000000;
  puVar1 = (undefined4 *)param_2[3];
  iVar2 = param_1[0x12];
  iVar6 = iVar2 + 1;
  param_1[0x12] = iVar2 + 2;
  iVar8 = *param_1;
  if (param_2[6] != 0) {
    iVar11 = 0;
    if (0 < *(int *)(iVar8 + 0x14)) {
      piVar7 = (int *)(*(int *)(iVar8 + 0x10) + 0xc);
      do {
        if (*piVar7 == param_2[6]) break;
        iVar11 = iVar11 + 1;
        piVar7 = piVar7 + 4;
      } while (iVar11 < *(int *)(iVar8 + 0x14));
      iVar8 = *param_1;
    }
  }
  iVar8 = FUN_0054ab50(param_1,0x1b,*param_2,0,
                       *(undefined4 *)(*(int *)(iVar8 + 0x10) + iVar11 * 0x10));
  if (iVar8 == 0) {
    FUN_005681e0(param_1,iVar11,puVar1[8],1,*puVar1);
    iVar8 = param_1[2];
    if (iVar8 == 0) {
      iVar8 = FUN_0056c7b0(*param_1);
      param_1[2] = iVar8;
      if (iVar8 == 0) {
        return;
      }
      FUN_0056bdc0(iVar8,0x94);
    }
    if (param_3 < 0) {
      param_1 = (int *)param_2[10];
      FUN_0056be90(iVar8,0x67,param_1,iVar11);
    }
    else {
      param_1 = (int *)param_3;
    }
    uVar9 = FUN_0055b2a0(piVar4,param_2);
    FUN_0056bf50(iVar8,0x28,iVar6,param_1,iVar11,uVar9,0xfffffff0);
    if (*(int *)(iVar8 + 4) != 0) {
      *(byte *)(*(int *)(iVar8 + 4) + -0x11 + *(int *)(iVar8 + 0x1c) * 0x14) =
           (param_3 < 0) - 1U & 2 | 1;
    }
    iVar3 = piVar4[0x12];
    piVar4[0x12] = iVar3 + 1;
    FUN_0056bf50(iVar8,0x2b,iVar3,0,0,uVar9,0xfffffffa);
    FUN_0055e5f0(piVar4,iVar2,iVar11,puVar1,0x27);
    uVar10 = FUN_0056be90(iVar8,0x48,iVar2,0);
    if (*(char *)((int)piVar4 + 0x13) == '\0') {
      piVar4[0x13] = piVar4[0x13] + 1;
      iVar11 = piVar4[0x13];
    }
    else {
      bVar5 = *(char *)((int)piVar4 + 0x13) - 1;
      *(byte *)((int)piVar4 + 0x13) = bVar5;
      iVar11 = piVar4[bVar5 + 7];
    }
    FUN_00559920(piVar4,param_2,iVar2,iVar11,1);
    FUN_0056be90(iVar8,0x60,iVar3,iVar11);
    FUN_0056be90(iVar8,0x5f,iVar2,uVar10 + 1);
    if ((-1 < (int)uVar10) && (uVar10 < *(uint *)(iVar8 + 0x1c))) {
      *(uint *)(*(int *)(iVar8 + 4) + 8 + uVar10 * 0x14) = *(uint *)(iVar8 + 0x1c);
    }
    uVar10 = FUN_0056be90(iVar8,0x46,iVar3,0);
    if (*(char *)(param_2 + 0xb) == '\0') {
      param_2 = *(undefined4 **)(iVar8 + 0x1c);
    }
    else {
      iVar12 = *(int *)(iVar8 + 0x1c) + 3;
      FUN_0056be90(iVar8,1,0,iVar12);
      param_2 = *(undefined4 **)(iVar8 + 0x1c);
      FUN_0056bef0(iVar8,0x3d,iVar3,iVar12,iVar11);
      FUN_0055abc0(piVar4,2,"indexed columns are not unique",0xfffffffe);
    }
    FUN_0056be90(iVar8,0x3e,iVar3,iVar11);
    FUN_0056bef0(iVar8,0x61,iVar6,iVar11,1);
    if (*(int *)(iVar8 + 4) != 0) {
      *(undefined1 *)(*(int *)(iVar8 + 4) + -0x11 + *(int *)(iVar8 + 0x1c) * 0x14) = 0x10;
    }
    FUN_00563fb0(piVar4,iVar11);
    FUN_0056be90(iVar8,0x51,iVar3,param_2);
    if ((-1 < (int)uVar10) && (uVar10 < *(uint *)(iVar8 + 0x1c))) {
      *(uint *)(*(int *)(iVar8 + 4) + 8 + uVar10 * 0x14) = *(uint *)(iVar8 + 0x1c);
    }
    FUN_0056be30(iVar8,0x2d,iVar2);
    FUN_0056be30(iVar8,0x2d,iVar6);
    FUN_0056be30(iVar8,0x2d,iVar3);
  }
  return;
}


/* FUN_00563bf0 @ 00563bf0  kind=lib  attributed-by=lib-island  size=140 */

void FUN_00563bf0(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  
  puVar8 = &DAT_007666e0;
  do {
    pbVar2 = *(byte **)(puVar8 + 0x18);
    uVar6 = 0;
    if (pbVar2 != (byte *)0x0) {
      bVar1 = *pbVar2;
      pbVar5 = pbVar2;
      while (bVar1 != 0) {
        pbVar5 = pbVar5 + 1;
        bVar1 = *pbVar5;
      }
      uVar6 = (int)pbVar5 - (int)pbVar2 & 0x3fffffff;
    }
    uVar7 = ((byte)(&DAT_007120d8)[*pbVar2] + uVar6) % 0x17;
    iVar4 = FUN_00539a30(&DAT_0076b4b0,uVar7,pbVar2,uVar6);
    if (iVar4 == 0) {
      uVar3 = *(undefined4 *)(&DAT_0076b4b0 + uVar7 * 4);
      *(undefined4 *)(puVar8 + 8) = 0;
      *(undefined4 *)(puVar8 + 0x1c) = uVar3;
      *(undefined **)(&DAT_0076b4b0 + uVar7 * 4) = puVar8;
    }
    else {
      *(undefined4 *)(puVar8 + 8) = *(undefined4 *)(iVar4 + 8);
      *(undefined **)(iVar4 + 8) = puVar8;
    }
    puVar8 = puVar8 + 0x24;
  } while ((int)puVar8 < 0x766800);
  return;
}


/* FUN_00563c80 @ 00563c80  kind=lib  attributed-by=lib-island  size=149 */

void FUN_00563c80(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  
  puVar8 = &DAT_00766800;
  do {
    pbVar2 = *(byte **)(puVar8 + 0x18);
    uVar6 = 0;
    if (pbVar2 != (byte *)0x0) {
      bVar1 = *pbVar2;
      pbVar5 = pbVar2;
      while (bVar1 != 0) {
        pbVar5 = pbVar5 + 1;
        bVar1 = *pbVar5;
      }
      uVar6 = (int)pbVar5 - (int)pbVar2 & 0x3fffffff;
    }
    uVar7 = ((byte)(&DAT_007120d8)[*pbVar2] + uVar6) % 0x17;
    iVar4 = FUN_00539a30(&DAT_0076b4b0,uVar7,pbVar2,uVar6);
    if (iVar4 == 0) {
      uVar3 = *(undefined4 *)(&DAT_0076b4b0 + uVar7 * 4);
      *(undefined4 *)(puVar8 + 8) = 0;
      *(undefined4 *)(puVar8 + 0x1c) = uVar3;
      *(undefined **)(&DAT_0076b4b0 + uVar7 * 4) = puVar8;
    }
    else {
      *(undefined4 *)(puVar8 + 8) = *(undefined4 *)(iVar4 + 8);
      *(undefined **)(iVar4 + 8) = puVar8;
    }
    puVar8 = puVar8 + 0x24;
  } while ((int)puVar8 < 0x766f74);
  FUN_00563bf0();
  FUN_00549b00();
  return;
}


/* FUN_00563d20 @ 00563d20  kind=lib  attributed-by=lib-island  size=240 */

void FUN_00563d20(undefined4 param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  
  puVar4 = &DAT_0071526c;
  if (param_2 == 0) {
    puVar4 = &DAT_00715268;
  }
  FUN_005515c0(param_1,&DAT_00715b94,2,1,puVar4,FUN_0051ca20,0,0,0);
  FUN_005515c0(param_1,&DAT_00715b94,3,1,puVar4,FUN_0051ca20,0,0,0);
  FUN_005515c0(param_1,&DAT_00715b9c,2,1,&DAT_00715264,FUN_0051ca20,0,0,0);
  pcVar1 = "glob";
  do {
    pcVar3 = pcVar1;
    pcVar1 = pcVar3 + 1;
  } while (*pcVar1 != '\0');
  iVar2 = FUN_00556c60(param_1,&DAT_00715b9c,(uint)(pcVar3 + -0x715b9b) & 0x3fffffff,2,1,0);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 3) = 3;
  }
  pcVar1 = "like";
  do {
    pcVar3 = pcVar1;
    pcVar1 = pcVar3 + 1;
  } while (*pcVar1 != '\0');
  iVar2 = FUN_00556c60(param_1,&DAT_00715b94,(uint)(pcVar3 + -0x715b93) & 0x3fffffff,2,1,0);
  if (iVar2 != 0) {
    *(char *)(iVar2 + 3) = (param_2 != 0) * '\x02' + '\x01';
  }
  return;
}


/* FUN_00563e10 @ 00563e10  kind=lib  attributed-by=lib-island  size=356 */

void FUN_00563e10(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  iVar1 = *param_1;
  if ((*(char *)(iVar1 + 0x81) == '\0') && (iVar2 = FUN_0055b460(iVar1,param_1 + 1), iVar2 != 0)) {
    param_1[0x11] = param_1[0x11] + 1;
    param_1[3] = iVar2;
    return;
  }
  if (param_2 == 0) {
    FUN_00545420(param_1,0);
    return;
  }
  if ((param_3 == (int *)0x0) || (*param_3 == 0)) {
    iVar2 = FUN_0055e3f0(*param_1,param_2);
    if (iVar2 == 0) {
      return;
    }
    iVar3 = FUN_00556ba0(iVar1,*(undefined1 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0xc) + 0x4d),iVar2,
                         0);
    if (iVar3 != 0) {
      FUN_00545420(param_1);
      FUN_005521a0(iVar1,iVar2);
      return;
    }
    FUN_005521a0(iVar1,iVar2);
  }
  iVar2 = FUN_00568810(param_1,param_2,param_3,&local_8);
  if ((-1 < iVar2) && (iVar3 = FUN_0055e3f0(iVar1,local_8), iVar3 != 0)) {
    local_8 = *(int *)(*(int *)(iVar1 + 0x10) + iVar2 * 0x10);
    iVar4 = FUN_005572d0(iVar1,iVar3,local_8);
    if (iVar4 != 0) {
      FUN_00545520(param_1,iVar4,0);
      FUN_005521a0(iVar1,iVar3);
      return;
    }
    local_8 = FUN_00557190(iVar1,iVar3,local_8);
    FUN_005521a0(iVar1,iVar3);
    iVar1 = local_8;
    if (local_8 != 0) {
      FUN_0054bc80(param_1,0,iVar2);
      FUN_00563950(param_1,iVar1,0xffffffff);
      return;
    }
    FUN_00553950(param_1,"unable to identify the object to be reindexed");
  }
  return;
}


/* FUN_00563f80 @ 00563f80  kind=lib  attributed-by=lib-island  size=42 */

void FUN_00563f80(int param_1,undefined4 param_2,int param_3)

{
  FUN_00554430(param_1,param_2,param_3);
  if (*(int *)(param_1 + 0x3c) < param_3) {
    *(int *)(param_1 + 0x3c) = param_3;
    *(undefined4 *)(param_1 + 0x40) = param_2;
  }
  return;
}


/* FUN_00563fb0 @ 00563fb0  kind=lib  attributed-by=lib-island  size=68 */

void FUN_00563fb0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 != 0) && (*(byte *)(param_1 + 0x13) < 8)) {
    iVar2 = 0;
    iVar1 = param_1 + 100;
    while (*(int *)(iVar1 + 0x10) != param_2) {
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x18;
      if (9 < iVar2) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = param_2;
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
        return;
      }
    }
    *(undefined1 *)(iVar1 + 8) = 1;
  }
  return;
}


/* FUN_00564000 @ 00564000  kind=lib  attributed-by=lib-island  size=88 */

void FUN_00564000(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_0054d340(param_1);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0xc + iVar2);
      if (iVar1 != 0) {
        FUN_00565020(iVar1);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x14));
  }
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffd;
  FUN_005776d0(param_1);
  FUN_0054de20(param_1);
  FUN_00550b60(param_1);
  return;
}


/* FUN_00564060 @ 00564060  kind=lib  attributed-by=lib-island  size=50 */

void FUN_00564060(int param_1,int param_2)

{
  FUN_00565020(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc + param_2 * 0x10));
  if (param_2 != 1) {
    FUN_00565020(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c));
  }
  return;
}


/* FUN_005640a0 @ 005640a0  kind=lib  attributed-by=lib-island  size=215 */

ushort FUN_005640a0(int *param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  code *local_18;
  code *local_14;
  int local_10;
  int *local_8;
  
  if (param_2 == 0) {
    return 0;
  }
  piVar2 = (int *)*param_1;
  if (*(int *)(*piVar2 + 0x5c) < piVar2[0x78] + *(int *)(param_2 + 0x14)) {
    FUN_00553950(piVar2,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar2 + 0x5c));
    return 1;
  }
  piVar2[0x78] = piVar2[0x78] + *(int *)(param_2 + 0x14);
  bVar1 = *(byte *)(param_1 + 7);
  *(byte *)(param_1 + 7) = bVar1 & 0xfd;
  local_10 = *param_1;
  local_18 = FUN_00546470;
  local_14 = FUN_00546ad0;
  local_8 = param_1;
  FUN_00578680(&local_18,param_2);
  *(int *)(*param_1 + 0x1e0) = *(int *)(*param_1 + 0x1e0) - *(int *)(param_2 + 0x14);
  if ((0 < param_1[6]) || (0 < *(int *)(local_10 + 0x44))) {
    *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 8;
  }
  if ((*(byte *)(param_1 + 7) & 2) != 0) {
    *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 2;
    return *(ushort *)(param_2 + 2) >> 3 & 1;
  }
  if ((bVar1 & 2) != 0) {
    *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 2;
  }
  return *(ushort *)(param_2 + 2) >> 3 & 1;
}


/* FUN_00564180 @ 00564180  kind=lib  attributed-by=lib-island  size=172 */

undefined4 FUN_00564180(int *param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  ushort uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (param_3 != (int *)0x0) {
    if (*(char *)(*param_1 + 0x38) == '\0') {
      if (*(int *)(*param_1 + 0x58) < *param_3) {
        FUN_00553950(param_1,"too many terms in %s BY clause",param_4);
        return 1;
      }
      piVar2 = (int *)*param_2;
      puVar3 = (undefined4 *)param_3[2];
      iVar4 = 0;
      if (0 < *param_3) {
        do {
          uVar1 = *(ushort *)((int)puVar3 + 0xe);
          if (uVar1 != 0) {
            if (*piVar2 < (int)(uint)uVar1) {
              FUN_00553950(param_1,"%r %s BY term out of range - should be between 1 and %d",
                           iVar4 + 1,param_4,*piVar2);
              return 1;
            }
            FUN_00545f00(param_1,piVar2,uVar1 - 1,*puVar3,param_4,0);
          }
          iVar4 = iVar4 + 1;
          puVar3 = puVar3 + 5;
        } while (iVar4 < *param_3);
      }
      return 0;
    }
  }
  return 0;
}


/* FUN_00564230 @ 00564230  kind=lib  attributed-by=lib-island  size=51 */

void FUN_00564230(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *local_18;
  code *local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  local_10 = param_1;
  local_8 = param_3;
  local_18 = FUN_00546470;
  local_14 = FUN_00546ad0;
  FUN_00578760(&local_18,param_2);
  return;
}


/* FUN_00564270 @ 00564270  kind=lib  attributed-by=lib-island  size=205 */

undefined4 * FUN_00564270(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = *param_1;
  uVar2 = *(uint *)(iVar1 + 0x18);
  *(uint *)(iVar1 + 0x18) = uVar2 & 0xfffffffb | 8;
  FUN_00567060(param_1,param_2,0);
  if (param_1[0x11] == 0) {
    puVar4 = (undefined4 *)param_2[0xf];
    while (puVar3 = puVar4, puVar3 != (undefined4 *)0x0) {
      param_2 = puVar3;
      puVar4 = (undefined4 *)puVar3[0xf];
    }
    *(uint *)(iVar1 + 0x18) = uVar2;
    puVar4 = (undefined4 *)FUN_00552230(iVar1,0x48);
    if (puVar4 != (undefined4 *)0x0) {
      memset(puVar4,0,0x48);
      *(undefined2 *)(puVar4 + 10) = 1;
      *puVar4 = 0;
      puVar4[7] = 1000000;
      FUN_005478e0(param_1,*param_2,(short *)((int)puVar4 + 0x26),puVar4 + 1);
      FUN_00547720(param_1,(int)*(short *)((int)puVar4 + 0x26),puVar4[1],param_2);
      *(undefined2 *)(puVar4 + 9) = 0xffff;
      if (*(char *)(iVar1 + 0x38) == '\0') {
        return puVar4;
      }
      FUN_005529a0(iVar1,puVar4);
    }
  }
  return (undefined4 *)0x0;
}


/* FUN_00564340 @ 00564340  kind=lib  attributed-by=lib-island  size=217 */

void FUN_00564340(int param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  bVar2 = false;
  if (DAT_0076b3bc != (code *)0x0) {
    (*DAT_0076b3bc)();
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 4 + iVar4);
      if (iVar1 != 0) {
        if (*(char *)(iVar1 + 8) == '\x02') {
          bVar2 = true;
        }
        FUN_0054ed50(iVar1,param_2);
        *(undefined1 *)(*(int *)(param_1 + 0x10) + 8 + iVar4) = 0;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x14));
  }
  FUN_0052f080(param_1,0x44);
  if (DAT_0076b3c0 != (code *)0x0) {
    (*DAT_0076b3c0)();
  }
  if ((*(byte *)(param_1 + 0x18) & 2) != 0) {
    for (iVar3 = *(int *)(param_1 + 4); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x3c)) {
      *(uint *)(iVar3 + 0x60) = *(uint *)(iVar3 + 0x60) | 0x20;
    }
    FUN_00564000(param_1);
  }
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  if ((*(code **)(param_1 + 0xb4) != (code *)0x0) &&
     ((bVar2 || (*(char *)(param_1 + 0x36) == '\0')))) {
    (**(code **)(param_1 + 0xb4))(*(undefined4 *)(param_1 + 0xb0));
  }
  return;
}


/* FUN_00564420 @ 00564420  kind=lib  attributed-by=lib-string  size=91 */

void FUN_00564420(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0054ab50(param_1,0x16,"ROLLBACK",0,0);
  if (iVar1 == 0) {
    iVar1 = param_1[2];
    if (iVar1 == 0) {
      iVar1 = FUN_0056c7b0(*param_1);
      param_1[2] = iVar1;
      if (iVar1 == 0) {
        return;
      }
      FUN_0056bdc0(iVar1,0x94);
    }
    FUN_0056be90(iVar1,0x22,1,1);
  }
  return;
}


/* FUN_00564480 @ 00564480  kind=lib  attributed-by=lib-island  size=85 */

void FUN_00564480(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_2 * 0x10 + *(int *)(param_1 + 0x10);
  for (puVar1 = *(undefined4 **)(*(int *)(iVar2 + 0xc) + 0x10); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    if (*(int *)(puVar1[2] + 0x20) == param_3) {
      *(undefined4 *)(puVar1[2] + 0x20) = param_4;
    }
  }
  for (puVar1 = *(undefined4 **)(*(int *)(iVar2 + 0xc) + 0x20); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    if (*(int *)(puVar1[2] + 0x28) == param_3) {
      *(undefined4 *)(puVar1[2] + 0x28) = param_4;
    }
  }
  return;
}


/* FUN_005644e0 @ 005644e0  kind=lib  attributed-by=lib-island  size=173 */

void FUN_005644e0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = (undefined4 *)*param_1;
joined_r0x005644eb:
  do {
    if (puVar3 == (undefined4 *)0x0) {
      *param_1 = 0;
      *(undefined2 *)(param_1 + 6) = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[5] = 0;
      *(undefined1 *)((int)param_1 + 0x1a) = 1;
      return;
    }
    iVar1 = param_1[1];
    puVar2 = (undefined4 *)*puVar3;
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x1f0) != 0) {
        if ((puVar3 < *(undefined4 **)(iVar1 + 0x104)) ||
           (*(undefined4 **)(iVar1 + 0x108) <= puVar3)) {
          iVar4 = (*DAT_00766608._4_4_)(puVar3);
          **(int **)(iVar1 + 0x1f0) = **(int **)(iVar1 + 0x1f0) + iVar4;
          puVar3 = puVar2;
        }
        else {
          **(int **)(iVar1 + 0x1f0) = **(int **)(iVar1 + 0x1f0) + (uint)*(ushort *)(iVar1 + 0xe8);
          puVar3 = puVar2;
        }
        goto joined_r0x005644eb;
      }
      if ((*(undefined4 **)(iVar1 + 0x104) <= puVar3) && (puVar3 < *(undefined4 **)(iVar1 + 0x108)))
      {
        *puVar3 = *(undefined4 *)(iVar1 + 0x100);
        *(int *)(iVar1 + 0xec) = *(int *)(iVar1 + 0xec) + -1;
        *(undefined4 **)(iVar1 + 0x100) = puVar3;
        puVar3 = puVar2;
        goto joined_r0x005644eb;
      }
    }
    FUN_00524410(puVar3);
    puVar3 = puVar2;
  } while( true );
}


/* FUN_00564590 @ 00564590  kind=lib  attributed-by=lib-island  size=151 */

void FUN_00564590(undefined4 *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  
  if (*(short *)(param_1 + 6) == 0) {
    puVar3 = (undefined4 *)FUN_00552230(param_1[1],0x3f8);
    if (puVar3 == (undefined4 *)0x0) {
      return;
    }
    *puVar3 = *param_1;
    *param_1 = puVar3;
    param_1[4] = puVar3 + 2;
    *(undefined2 *)(param_1 + 6) = 0x3f;
  }
  puVar1 = (uint *)param_1[4];
  *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + -1;
  param_1[4] = puVar1 + 4;
  if (puVar1 != (uint *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = 0;
    puVar2 = (uint *)param_1[3];
    if (puVar2 != (uint *)0x0) {
      if ((((*(byte *)((int)param_1 + 0x1a) & 1) != 0) && ((int)param_3 <= (int)puVar2[1])) &&
         (((int)param_3 < (int)puVar2[1] || (param_2 <= *puVar2)))) {
        *(byte *)((int)param_1 + 0x1a) = *(byte *)((int)param_1 + 0x1a) & 0xfe;
      }
      puVar2[2] = (uint)puVar1;
      param_1[3] = puVar1;
      return;
    }
    param_1[2] = puVar1;
    param_1[3] = puVar1;
  }
  return;
}


/* FUN_00564630 @ 00564630  kind=lib  attributed-by=lib-island  size=91 */

undefined4 FUN_00564630(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(byte *)(param_1 + 0x1a) & 2) == 0) {
    if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
      uVar3 = FUN_00546fe0(*(undefined4 *)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = uVar3;
    }
    *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) | 2;
  }
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != (undefined4 *)0x0) {
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    iVar2 = *(int *)(*(int *)(param_1 + 8) + 8);
    *(int *)(param_1 + 8) = iVar2;
    if (iVar2 == 0) {
      FUN_005644e0(param_1);
    }
    return 1;
  }
  return 0;
}


/* FUN_00564690 @ 00564690  kind=lib  attributed-by=lib-island  size=353 */

undefined4 FUN_00564690(undefined4 *param_1,char param_2,uint param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 local_c [4];
  undefined4 local_8;
  
  if (param_2 == *(char *)((int)param_1 + 0x1b)) goto LAB_00564796;
  iVar4 = param_1[2];
  if (iVar4 != 0) {
    puVar3 = param_1 + 5;
    if ((*(byte *)((int)param_1 + 0x1a) & 1) == 0) {
      iVar4 = FUN_00546fe0(iVar4);
    }
    puVar5 = (undefined4 *)*puVar3;
    while (puVar5 != (undefined4 *)0x0) {
      puVar3 = puVar5 + 2;
      if (puVar5[3] == 0) goto LAB_00564772;
      FUN_00547210(puVar5[3],&local_8,local_c);
      puVar5[3] = 0;
      iVar4 = FUN_00546f70(local_8,iVar4);
      puVar5 = (undefined4 *)*puVar3;
    }
    if (*(short *)(param_1 + 6) == 0) {
      puVar5 = (undefined4 *)FUN_00552230(param_1[1],0x3f8);
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *param_1;
        param_1[4] = puVar5 + 2;
        *param_1 = puVar5;
        *(undefined2 *)(param_1 + 6) = 0x3f;
        goto LAB_00564743;
      }
      puVar5 = (undefined4 *)0x0;
    }
    else {
LAB_00564743:
      puVar5 = (undefined4 *)param_1[4];
      *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + -1;
      param_1[4] = puVar5 + 4;
    }
    *puVar3 = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
LAB_00564772:
      uVar6 = FUN_00547100(iVar4);
      puVar5[3] = uVar6;
    }
    *(byte *)((int)param_1 + 0x1a) = *(byte *)((int)param_1 + 0x1a) | 1;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *(char *)((int)param_1 + 0x1b) = param_2;
LAB_00564796:
  iVar4 = param_1[5];
joined_r0x0056479b:
  if (iVar4 == 0) {
    return 0;
  }
  puVar1 = *(uint **)(iVar4 + 0xc);
joined_r0x005647a8:
  do {
    if (puVar1 == (uint *)0x0) break;
    uVar2 = puVar1[1];
    if ((int)uVar2 <= param_4) {
      if (((int)uVar2 < param_4) || (*puVar1 < param_3)) {
        puVar1 = (uint *)puVar1[2];
        goto joined_r0x005647a8;
      }
      if (((int)uVar2 < param_4) || (((int)uVar2 <= param_4 && (*puVar1 <= param_3)))) {
        return 1;
      }
    }
    puVar1 = (uint *)puVar1[3];
  } while( true );
  iVar4 = *(int *)(iVar4 + 8);
  goto joined_r0x0056479b;
}


/* FUN_00564800 @ 00564800  kind=lib  attributed-by=lib-island  size=938 */

int FUN_00564800(int *param_1,int param_2,int *param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  bool bVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 extraout_ECX;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  iVar3 = *param_1;
  local_10 = 0;
  local_18 = *(int *)(iVar3 + 0x54);
  local_14 = -1;
  if (*(int *)(iVar3 + 0x84) == 0) {
    *(undefined4 *)(iVar3 + 0xe0) = 0;
  }
  param_1[3] = 0;
  param_1[0x7e] = param_2;
  local_8 = (undefined4 *)FUN_0055da00(0x64c);
  if (local_8 == (undefined4 *)0x0) {
    *(undefined1 *)(iVar3 + 0x38) = 1;
    return 7;
  }
  *local_8 = 0xffffffff;
  uVar1 = *(undefined1 *)(iVar3 + 0xea);
  if (*(int *)(iVar3 + 0x104) != 0) {
    *(undefined1 *)(iVar3 + 0xea) = 1;
  }
  cVar2 = *(char *)(iVar3 + 0x38);
  iVar10 = 0;
  while( true ) {
    if ((cVar2 != '\0') || (pcVar8 = (char *)(param_2 + iVar10), *pcVar8 == '\0'))
    goto LAB_00564967;
    param_1[0x84] = (int)pcVar8;
    iVar9 = FUN_0055a220(pcVar8,&local_1c);
    iVar4 = local_1c;
    local_c = iVar10 + iVar9;
    param_1[0x85] = iVar9;
    if (local_18 < local_c) break;
    if (local_1c == 1) {
      param_1[0x7e] = local_c + param_2;
LAB_005648fb:
      FUN_00560af0(local_8,local_1c,param_1[0x84],param_1[0x85],param_1);
      local_14 = iVar4;
      iVar10 = local_c;
      if (param_1[3] != 0) goto LAB_00564967;
    }
    else {
      if (local_1c == 0x94) {
        FUN_005521a0(iVar3,*param_3);
        iVar10 = FUN_0055d980(iVar3,"unrecognized token: \"%T\"",param_1 + 0x84);
        bVar7 = true;
        *param_3 = iVar10;
        local_10 = 1;
        iVar10 = local_c;
        goto LAB_00564969;
      }
      if (local_1c != 0x95) goto LAB_005648fb;
      if (*(int *)(iVar3 + 0xe0) != 0) {
        FUN_00553950(param_1,"interrupt");
        param_1[3] = 9;
        iVar10 = local_c;
        goto LAB_00564967;
      }
    }
    cVar2 = *(char *)(iVar3 + 0x38);
    iVar10 = local_c;
  }
  param_1[3] = 0x12;
  iVar10 = local_c;
LAB_00564967:
  bVar7 = false;
LAB_00564969:
  if (((*(char *)(iVar10 + param_2) == '\0') && (!bVar7)) && (param_1[3] == 0)) {
    if (local_14 != 1) {
      FUN_00560af0(local_8,1,param_1[0x84],param_1[0x85],param_1);
      param_1[0x7e] = iVar10 + param_2;
    }
    FUN_00560af0(local_8,0,param_1[0x84],param_1[0x85],param_1);
  }
  FUN_00560c30(local_8,FUN_00524410);
  *(undefined1 *)(iVar3 + 0xea) = uVar1;
  if (*(char *)(iVar3 + 0x38) != '\0') {
    param_1[3] = 7;
  }
  iVar10 = param_1[3];
  if (((iVar10 != 0) && (iVar10 != 0x65)) && (param_1[1] == 0)) {
    uVar11 = FUN_00553860(iVar10);
    FUN_005670f0(extraout_ECX,iVar3,&DAT_00716900,uVar11);
  }
  iVar10 = param_1[1];
  if (iVar10 != 0) {
    *param_3 = iVar10;
    FUN_00525a30(param_1[3],&DAT_00716900,iVar10);
    local_10 = local_10 + 1;
    param_1[1] = 0;
  }
  if ((param_1[2] != 0) && (0 < param_1[0x11])) {
    if (*(char *)((int)param_1 + 0x12) != '\0') goto LAB_00564a7c;
    FUN_0056c8b0(param_1[2]);
    param_1[2] = 0;
  }
  if (*(char *)((int)param_1 + 0x12) == '\0') {
    FUN_005521a0(iVar3,param_1[0x6a]);
    param_1[0x6a] = 0;
    param_1[0x69] = 0;
  }
LAB_00564a7c:
  FUN_00524410(param_1[0x88]);
  if (*(char *)((int)param_1 + 0x1d5) == '\0') {
    FUN_005529a0(iVar3,param_1[0x7f]);
  }
  puVar5 = (undefined4 *)param_1[0x80];
  if (puVar5 != (undefined4 *)0x0) {
    FUN_00552b20(iVar3,puVar5[7]);
    FUN_005521a0(iVar3,*puVar5);
    FUN_005521a0(iVar3,puVar5[1]);
    FUN_00555e30(iVar3,puVar5[3]);
    FUN_0055afc0(iVar3,puVar5[4]);
    FUN_005521a0(iVar3,puVar5);
  }
  iVar10 = param_1[0x74];
  while (iVar10 = iVar10 + -1, -1 < iVar10) {
    FUN_005521a0(iVar3,*(undefined4 *)(param_1[0x7b] + iVar10 * 4));
  }
  FUN_005521a0(iVar3,param_1[0x7b]);
  FUN_005521a0(iVar3,param_1[0x7d]);
  iVar10 = param_1[0x6b];
  while (iVar10 != 0) {
    piVar6 = (int *)param_1[0x6b];
    param_1[0x6b] = *piVar6;
    FUN_005521a0(iVar3,piVar6);
    iVar10 = param_1[0x6b];
  }
  iVar10 = param_1[0x89];
  while (iVar10 != 0) {
    iVar10 = param_1[0x89];
    param_1[0x89] = *(int *)(iVar10 + 0x44);
    FUN_005529a0(iVar3,iVar10);
    iVar10 = param_1[0x89];
  }
  if ((0 < local_10) && (param_1[3] == 0)) {
    param_1[3] = 1;
    return local_10;
  }
  return local_10;
}


/* FUN_00564bb0 @ 00564bb0  kind=lib  attributed-by=lib-string  size=858 */

int FUN_00564bb0(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  uint local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = 0;
  if (*(char *)(param_2 + 0x36) == '\0') {
    pcVar10 = "cannot VACUUM from within a transaction";
  }
  else {
    if (*(int *)(param_2 + 0x84) < 2) {
      uVar1 = *(uint *)(param_2 + 0x18);
      uVar2 = *(undefined4 *)(param_2 + 0x48);
      *(uint *)(param_2 + 0x18) = uVar1 & 0xfffaffff | 0x100500;
      uVar3 = *(undefined4 *)(param_2 + 0x4c);
      uVar4 = *(undefined4 *)(param_2 + 0x98);
      *(undefined4 *)(param_2 + 0x98) = 0;
      local_8 = *(int *)(*(int *)(param_2 + 0x10) + 4);
      iVar9 = *(int *)(param_2 + 0x14);
      local_14 = (uint)*(byte *)(**(int **)(local_8 + 4) + 0xe);
      pcVar10 = "ATTACH \':memory:\' AS vacuum_db;";
      if (*(char *)(param_2 + 0x37) != '\x02') {
        pcVar10 = "ATTACH \'\' AS vacuum_db;";
      }
      iVar6 = FUN_00534bc0(param_2,param_1,pcVar10);
      iVar5 = *(int *)(param_2 + 0x14);
      if (iVar9 < iVar5) {
        local_10 = *(int *)(param_2 + 0x10) + -0x10 + iVar5 * 0x10;
      }
      iVar9 = local_8;
      if (iVar6 == 0) {
        iVar5 = *(int *)(*(int *)(param_2 + 0x10) + -0xc + iVar5 * 0x10);
        FUN_0054c930(iVar5);
        iVar9 = local_8;
        local_c = FUN_0054d580(local_8);
        iVar6 = FUN_00534bc0(param_2,param_1,"PRAGMA vacuum_db.synchronous=OFF");
        if (((iVar6 == 0) && (iVar6 = FUN_00534bc0(param_2,param_1,"BEGIN;"), iVar6 == 0)) &&
           (iVar6 = FUN_0054c3f0(iVar9,2), iVar6 == 0)) {
          if (*(char *)(**(int **)(iVar9 + 4) + 5) == '\x05') {
            *(undefined4 *)(param_2 + 0x40) = 0;
          }
          iVar6 = FUN_0054f2a0(iVar5,*(undefined4 *)(*(int *)(iVar9 + 4) + 0x20),local_c,0);
          if (((iVar6 == 0) &&
              ((local_14 != 0 ||
               (iVar6 = FUN_0054f2a0(iVar5,*(undefined4 *)(param_2 + 0x40),local_c,0), iVar6 == 0)))
              ) && (*(char *)(param_2 + 0x38) == '\0')) {
            if (*(char *)(param_2 + 0x3a) < '\0') {
              iVar6 = FUN_0054d4a0(iVar9);
            }
            else {
              iVar6 = (int)*(char *)(param_2 + 0x3a);
            }
            FUN_0054f150(iVar5,iVar6);
            iVar6 = FUN_00534a60(param_2,param_1,
                                 "SELECT \'CREATE TABLE vacuum_db.\' || substr(sql,14)   FROM sqlite_master WHERE type=\'table\' AND name!=\'sqlite_sequence\'   AND rootpage>0"
                                );
            if (((iVar6 == 0) &&
                (iVar6 = FUN_00534a60(param_2,param_1,
                                      "SELECT \'CREATE INDEX vacuum_db.\' || substr(sql,14)  FROM sqlite_master WHERE sql LIKE \'CREATE INDEX %\' "
                                     ), iVar6 == 0)) &&
               ((iVar6 = FUN_00534a60(param_2,param_1,
                                      "SELECT \'CREATE UNIQUE INDEX vacuum_db.\' || substr(sql,21)   FROM sqlite_master WHERE sql LIKE \'CREATE UNIQUE INDEX %\'"
                                     ), iVar6 == 0 &&
                ((((iVar6 = FUN_00534a60(param_2,param_1,
                                         "SELECT \'INSERT INTO vacuum_db.\' || quote(name) || \' SELECT * FROM main.\' || quote(name) || \';\'FROM main.sqlite_master WHERE type = \'table\' AND name!=\'sqlite_sequence\'   AND rootpage>0"
                                        ), iVar6 == 0 &&
                   (iVar6 = FUN_00534a60(param_2,param_1,
                                         "SELECT \'DELETE FROM vacuum_db.\' || quote(name) || \';\' FROM vacuum_db.sqlite_master WHERE name=\'sqlite_sequence\' "
                                        ), iVar6 == 0)) &&
                  (iVar6 = FUN_00534a60(param_2,param_1,
                                        "SELECT \'INSERT INTO vacuum_db.\' || quote(name) || \' SELECT * FROM main.\' || quote(name) || \';\' FROM vacuum_db.sqlite_master WHERE name==\'sqlite_sequence\';"
                                       ), iVar6 == 0)) &&
                 (iVar6 = FUN_00534bc0(param_2,param_1,
                                       "INSERT INTO vacuum_db.sqlite_master   SELECT type, name, tbl_name, rootpage, sql    FROM main.sqlite_master   WHERE type=\'view\' OR type=\'trigger\'      OR (type=\'table\' AND rootpage=0)"
                                      ), iVar6 == 0)))))) {
              iVar8 = 0;
              do {
                FUN_0054d510(local_8,(&DAT_007125fc)[iVar8],&local_14);
                iVar6 = FUN_0054f6e0(iVar5,(&DAT_007125fc)[iVar8],
                                     (byte)(&DAT_007125fd)[iVar8] + local_14);
                iVar9 = local_8;
                if (iVar6 != 0) goto LAB_00564eaa;
                iVar8 = iVar8 + 2;
              } while (iVar8 < 8);
              iVar6 = FUN_0054cac0(local_8,iVar5);
              if ((iVar6 == 0) && (iVar6 = FUN_0054c930(iVar5), iVar6 == 0)) {
                uVar7 = FUN_0054d4a0(iVar5);
                FUN_0054f150(iVar9,uVar7);
                iVar6 = FUN_0054f2a0(iVar9,*(undefined4 *)(*(int *)(iVar5 + 4) + 0x20),local_c,1);
              }
            }
          }
          else {
            iVar6 = 7;
          }
        }
      }
LAB_00564eaa:
      *(uint *)(param_2 + 0x18) = uVar1;
      *(undefined4 *)(param_2 + 0x48) = uVar2;
      *(undefined4 *)(param_2 + 0x4c) = uVar3;
      *(undefined4 *)(param_2 + 0x98) = uVar4;
      FUN_0054f2a0(iVar9,0xffffffff,0xffffffff,1);
      iVar9 = local_10;
      *(undefined1 *)(param_2 + 0x36) = 1;
      if (local_10 != 0) {
        FUN_0054c710(*(undefined4 *)(local_10 + 4));
        *(undefined4 *)(iVar9 + 4) = 0;
        *(undefined4 *)(iVar9 + 0xc) = 0;
      }
      FUN_00564000(param_2);
      return iVar6;
    }
    pcVar10 = "cannot VACUUM - SQL statements in progress";
  }
  FUN_005670f0(param_1,param_2,pcVar10);
  return 1;
}


/* FUN_00564f10 @ 00564f10  kind=lib  attributed-by=lib-island  size=113 */

undefined4 FUN_00564f10(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    FUN_00525a30(0x15,"API call with %s database connection pointer",&DAT_00716880);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 != -0x5fd65969) {
    if ((iVar1 != 0x4b771290) && (iVar1 != -0xfc486fa)) {
      FUN_00525a30(0x15,"API call with %s database connection pointer","invalid");
      return 0;
    }
    FUN_00525a30(0x15,"API call with %s database connection pointer","unopened");
    return 0;
  }
  return 1;
}


/* FUN_00564f90 @ 00564f90  kind=lib  attributed-by=lib-island  size=136 */

void FUN_00564f90(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0055e3f0(*param_1,param_3);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = param_1[2];
  if (iVar2 == 0) {
    iVar2 = FUN_0056c7b0(*param_1);
    param_1[2] = iVar2;
    if (iVar2 == 0) goto LAB_00565008;
    FUN_0056bdc0(iVar2,0x94);
  }
  iVar3 = FUN_0054ab50(param_1,0x20,(&PTR_s_BEGIN_00712068)[param_2],iVar1,0);
  if (iVar3 == 0) {
    FUN_0056bf50(iVar2,0x21,param_2,0,0,iVar1,0xffffffff);
    return;
  }
LAB_00565008:
  FUN_005521a0(*param_1,iVar1);
  return;
}


/* FUN_00565020 @ 00565020  kind=lib  attributed-by=lib-island  size=287 */

void FUN_00565020(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  undefined8 local_c;
  
  local_24 = *(undefined8 *)(param_1 + 8);
  local_1c = *(undefined8 *)(param_1 + 0x10);
  local_14 = *(undefined8 *)(param_1 + 0x28);
  local_c = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  FUN_0055ac70(param_1 + 0x18);
  for (puVar2 = (undefined4 *)local_c; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2)
  {
    puVar1 = (undefined4 *)puVar2[2];
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00552b20(0,puVar1[7]);
      FUN_00524410(*puVar1);
      FUN_00524410(puVar1[1]);
      FUN_00555e30(0,puVar1[3]);
      FUN_0055afc0(0,puVar1[4]);
      FUN_00524410(puVar1);
    }
  }
  FUN_0055ac70(&local_14);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  for (puVar2 = (undefined4 *)local_1c; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2)
  {
    FUN_005529a0(0,puVar2[2]);
  }
  FUN_0055ac70(&local_24);
  FUN_0055ac70(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if ((*(ushort *)(param_1 + 0x4e) & 1) != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    *(ushort *)(param_1 + 0x4e) = *(ushort *)(param_1 + 0x4e) & 0xfffe;
  }
  return;
}


/* FUN_00565140 @ 00565140  kind=lib  attributed-by=lib-island  size=284 */

void * FUN_00565140(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  
  if (param_2 == 0) {
    pvVar4 = (void *)FUN_0055da00(0x54);
    if (pvVar4 == (void *)0x0) goto LAB_005651d1;
    memset(pvVar4,0,0x54);
  }
  else {
    iVar2 = *(int *)(param_2 + 4);
    FUN_0054d260(param_2);
    if (*(int *)(iVar2 + 0x30) == 0) {
      pvVar4 = (void *)FUN_0055da00(0x54);
      if (pvVar4 != (void *)0x0) {
        memset(pvVar4,0,0x54);
      }
      *(void **)(iVar2 + 0x30) = pvVar4;
      *(code **)(iVar2 + 0x34) = FUN_00565020;
    }
    if (*(char *)(param_2 + 9) != '\0') {
      piVar1 = (int *)(param_2 + 0xc);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        iVar3 = *(int *)(*(int *)(param_2 + 4) + 0x38);
        if (iVar3 != 0) {
          (*DAT_00766638)(iVar3);
        }
        *(undefined1 *)(param_2 + 10) = 0;
      }
    }
    pvVar4 = *(void **)(iVar2 + 0x30);
  }
  if (pvVar4 != (void *)0x0) {
    if (*(char *)((int)pvVar4 + 0x4c) == '\0') {
      *(undefined4 *)((int)pvVar4 + 0x10) = 0;
      *(undefined4 *)((int)pvVar4 + 0xc) = 0;
      *(undefined4 *)((int)pvVar4 + 8) = 0;
      *(undefined4 *)((int)pvVar4 + 0x14) = 0;
      *(undefined4 *)((int)pvVar4 + 0x20) = 0;
      *(undefined4 *)((int)pvVar4 + 0x1c) = 0;
      *(undefined4 *)((int)pvVar4 + 0x18) = 0;
      *(undefined4 *)((int)pvVar4 + 0x24) = 0;
      *(undefined4 *)((int)pvVar4 + 0x30) = 0;
      *(undefined4 *)((int)pvVar4 + 0x2c) = 0;
      *(undefined4 *)((int)pvVar4 + 0x28) = 0;
      *(undefined4 *)((int)pvVar4 + 0x34) = 0;
      *(undefined4 *)((int)pvVar4 + 0x40) = 0;
      *(undefined4 *)((int)pvVar4 + 0x3c) = 0;
      *(undefined4 *)((int)pvVar4 + 0x38) = 0;
      *(undefined4 *)((int)pvVar4 + 0x44) = 0;
      *(undefined1 *)((int)pvVar4 + 0x4d) = 1;
    }
    return pvVar4;
  }
LAB_005651d1:
  *(undefined1 *)(param_1 + 0x38) = 1;
  return (void *)0x0;
}


/* FUN_00565260 @ 00565260  kind=lib  attributed-by=lib-island  size=54 */

int FUN_00565260(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    return -1000000;
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    piVar2 = (int *)(*(int *)(param_1 + 0x10) + 0xc);
    do {
      if (*piVar2 == param_2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x14));
  }
  return iVar1;
}


/* FUN_005652a0 @ 005652a0  kind=lib  attributed-by=lib-island  size=297 */

void FUN_005652a0(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    if ((param_1 < DAT_00766688) || (DAT_0076b4a0 <= param_1)) {
      if (DAT_007665e0 == 0) {
        (*DAT_00766604)(param_1);
      }
      else {
        iVar1 = (*DAT_00766608._4_4_)(param_1);
        if (DAT_0076b488 != 0) {
          (*DAT_00766630)(DAT_0076b488);
        }
        DAT_0076b370 = DAT_0076b370 - iVar1;
        if (DAT_0076b398 < DAT_0076b370) {
          DAT_0076b398 = DAT_0076b370;
        }
        DAT_0076b360 = DAT_0076b360 - iVar1;
        if (DAT_0076b388 < DAT_0076b360) {
          DAT_0076b388 = DAT_0076b360;
        }
        DAT_0076b384 = DAT_0076b384 + -1;
        if (DAT_0076b3ac < DAT_0076b384) {
          DAT_0076b3ac = DAT_0076b384;
        }
        (*DAT_00766604)(param_1);
        if (DAT_0076b488 != 0) {
                    /* WARNING: Could not recover jumptable at 0x005653b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*DAT_00766638)();
          return;
        }
      }
    }
    else {
      if (DAT_0076b488 != 0) {
        (*DAT_00766630)(DAT_0076b488);
      }
      *param_1 = DAT_0076b4a4;
      DAT_0076b4a8 = DAT_0076b4a8 + 1;
      DAT_0076b36c = DAT_0076b36c + -1;
      if (DAT_0076b394 < DAT_0076b36c) {
        DAT_0076b394 = DAT_0076b36c;
      }
      DAT_0076b4a4 = param_1;
      if (DAT_0076b488 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00565313. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_00766638)();
        return;
      }
    }
  }
  return;
}


/* FUN_005653d0 @ 005653d0  kind=lib  attributed-by=lib-island  size=280 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_005653d0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *local_8;
  
  if (DAT_0076b488 != 0) {
    (*DAT_00766630)(DAT_0076b488);
  }
  puVar2 = DAT_0076b4a4;
  if ((DAT_0076b4a8 != 0) && (param_1 <= DAT_0076668c)) {
    DAT_0076b4a8 = DAT_0076b4a8 + -1;
    _DAT_0076b380 = param_1;
    DAT_0076b4a4 = (undefined4 *)*DAT_0076b4a4;
    DAT_0076b36c = DAT_0076b36c + 1;
    if (DAT_0076b394 < DAT_0076b36c) {
      DAT_0076b394 = DAT_0076b36c;
    }
    if (DAT_0076b3a8 < param_1) {
      DAT_0076b3a8 = param_1;
    }
    if (DAT_0076b488 != 0) {
      (*DAT_00766638)(DAT_0076b488);
    }
    return puVar2;
  }
  if (DAT_007665e0 == 0) {
    if (DAT_0076b488 != 0) {
      (*DAT_00766638)(DAT_0076b488);
    }
    puVar2 = (undefined4 *)(*DAT_00766600)(param_1);
    return puVar2;
  }
  if (DAT_0076b3a8 < param_1) {
    DAT_0076b3a8 = param_1;
  }
  _DAT_0076b380 = param_1;
  iVar1 = FUN_0053dcf0(param_1,&local_8);
  if ((local_8 != (undefined4 *)0x0) &&
     (DAT_0076b370 = DAT_0076b370 + iVar1, DAT_0076b398 < DAT_0076b370)) {
    DAT_0076b398 = DAT_0076b370;
  }
  if (DAT_0076b488 != 0) {
    (*DAT_00766638)(DAT_0076b488);
  }
  return local_8;
}


/* FUN_005654f0 @ 005654f0  kind=lib  attributed-by=lib-island  size=6161 */

void FUN_005654f0(int *param_1,int *param_2,byte *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined2 *puVar9;
  uint uVar10;
  char *pcVar11;
  int *piVar12;
  short *psVar13;
  int *piVar14;
  ushort in_FPUControlWord;
  undefined8 local_ec;
  longlong local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  byte local_cc;
  undefined1 local_cb;
  int local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  uint local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  int *local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  byte *local_58;
  uint local_54;
  int *local_50;
  uint local_4c;
  undefined1 *local_48;
  int *local_44;
  undefined4 *local_40;
  int *local_3c;
  uint *local_38;
  int local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  uint *local_28;
  int local_24;
  undefined1 *local_20;
  short *local_1c;
  undefined2 local_18 [2];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_58 = param_3;
  local_c0 = param_1[0x79];
  iVar6 = *param_1;
  param_1[0x79] = param_1[0x7a];
  local_50 = param_1;
  local_6c = param_2;
  local_20 = (undefined1 *)0x1;
  param_1[0x7a] = param_1[0x7a] + 1;
  local_34 = iVar6;
  if ((((param_2 == (int *)0x0) || (*(char *)(iVar6 + 0x38) != '\0')) || (param_1[0x11] != 0)) ||
     (iVar3 = FUN_0054ab50(param_1,0x15,0,0,0), iVar3 != 0)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_b4 = 0;
  local_ac = 0;
  local_a4 = 0;
  local_9c = 0;
  local_94 = 0;
  if (*local_58 < 5) {
    FUN_00556700(iVar6,param_2[0xe]);
    *(ushort *)((int)param_2 + 6) = *(ushort *)((int)param_2 + 6) & 0xfffe;
    param_2[0xe] = 0;
  }
  FUN_00567060(param_1,param_2,0);
  local_38 = (uint *)param_2[0xe];
  local_3c = (int *)*param_2;
  local_1c = (short *)param_2[10];
  if ((param_1[0x11] != 0) || (*(char *)(iVar6 + 0x38) != '\0')) goto LAB_00566ca5;
  local_40 = (undefined4 *)(*(ushort *)((int)param_2 + 6) >> 2 & 1);
  piVar4 = (int *)FUN_0055ab80(param_1);
  iVar6 = local_34;
  local_44 = piVar4;
  if (piVar4 == (int *)0x0) goto LAB_00566ca5;
  if ((1 < *local_3c) && ((*local_58 == 6 || (*local_58 == 7)))) {
    FUN_00553950(param_1,"only a single result allowed for a SELECT that is part of an expression");
    iVar6 = local_34;
    goto LAB_00566ca5;
  }
  local_28 = (uint *)0x0;
  iVar3 = param_2[0xf];
  psVar13 = local_1c;
  piVar14 = param_1;
  for (; (param_1 = local_50, local_50 = param_1, local_34 = iVar6, iVar3 == 0 &&
         ((int)local_28 < (int)*psVar13)); local_28 = (uint *)((int)local_28 + 1)) {
    local_24 = (int)local_28 * 9;
    local_4c = *(uint *)(psVar13 + (int)local_28 * 0x24 + 0xe);
    if (local_4c != 0) {
      if (*(int *)(psVar13 + (int)local_28 * 0x24 + 0x10) == 0) {
        iVar6 = FUN_00566e60(param_2);
        param_1[0x78] = param_1[0x78] + iVar6;
        local_54 = *(ushort *)(local_4c + 6) >> 2 & 1;
        iVar3 = FUN_00538dd0(param_1,param_2,local_28,local_40,local_54);
        iVar6 = local_24;
        if (iVar3 == 0) {
          if (((*local_1c == 1) && ((*(ushort *)((int)param_2 + 6) & 0x100) == 0)) &&
             ((*(ushort *)(local_34 + 0x34) & 0x100) == 0)) {
            param_1[0x13] = param_1[0x13] + 1;
            *(int *)(local_1c + local_24 * 4 + 0x12) = param_1[0x13];
            param_1[0x13] = param_1[0x13] + 1;
            iVar3 = param_1[0x13];
            FUN_00550aa0(local_50,0xffffffff);
            FUN_0056bdc0(piVar4,1);
            iVar6 = FUN_0056be30(piVar4,0x2c,*(undefined4 *)(local_1c + iVar6 * 4 + 0x1a));
            FUN_0056c490(piVar4,1);
            *(int *)(local_1c + local_24 * 4 + 0x10) = iVar6;
            FUN_0056be90(piVar4,7,0,iVar3);
            FUN_0056c490(piVar4,1);
            local_14 = *(undefined4 *)(local_1c + local_24 * 4 + 0x12);
            local_18[0] = 10;
            local_10 = 0;
            local_c = 0;
            *(char *)(local_1c + local_24 * 4 + 0x18) = (char)local_50[0x7a];
            FUN_005654f0(local_50,local_4c,local_18);
            local_30 = CONCAT22(in_FPUControlWord,(undefined2)local_30);
            local_54 = in_FPUControlWord | 0xc00;
            local_bc = (longlong)ROUND(*(double *)(local_4c + 0x20));
            *(undefined4 *)(*(int *)(local_1c + local_24 * 4 + 0xc) + 0x1c) = (undefined4)local_bc;
            *(uint *)(local_1c + local_24 * 4 + 0x16) =
                 *(uint *)(local_1c + local_24 * 4 + 0x16) | 4;
            FUN_0056c2e0(piVar4,iVar6,local_10);
            FUN_0056c300(piVar4,iVar6,local_c);
            FUN_0056be90(piVar4,7,1,iVar3);
            FUN_0056be30(piVar4,4,*(undefined4 *)(local_1c + local_24 * 4 + 0x12));
            FUN_00573d80(piVar4,iVar6 + -1);
            param_2 = local_6c;
            param_1 = local_50;
          }
          else {
            local_60 = 0;
            iVar6 = param_1[0x13] + 1;
            param_1[0x13] = iVar6;
            *(int *)(local_1c + local_24 * 4 + 0x12) = iVar6;
            local_5c = FUN_0056be90(piVar4,7,0,iVar6);
            *(int *)(local_1c + local_24 * 4 + 0x10) = local_5c + 1;
            if ((*(byte *)(local_1c + local_24 * 4 + 0x16) & 2) == 0) {
              local_60 = FUN_00550380(param_1);
            }
            local_14 = *(undefined4 *)(local_1c + local_24 * 4 + 0x1a);
            local_18[0] = 9;
            local_10 = 0;
            local_c = 0;
            *(char *)(local_1c + local_24 * 4 + 0x18) = (char)param_1[0x7a];
            FUN_005654f0(param_1,local_4c,local_18);
            local_30 = CONCAT22(in_FPUControlWord,(undefined2)local_30);
            local_54 = in_FPUControlWord | 0xc00;
            local_bc = (longlong)ROUND(*(double *)(local_4c + 0x20));
            *(undefined4 *)(*(int *)(local_1c + local_24 * 4 + 0xc) + 0x1c) = (undefined4)local_bc;
            if (local_60 != 0) {
              FUN_00573d80(piVar4,local_60);
            }
            uVar7 = FUN_0056be30(piVar4,3,*(undefined4 *)(local_1c + local_24 * 4 + 0x12));
            FUN_0056c2c0(piVar4,local_5c,uVar7);
          }
          param_1[0xf] = 0;
          *(undefined1 *)((int)param_1 + 0x13) = 0;
        }
        else {
          if (local_54 != 0) {
            *(ushort *)((int)param_2 + 6) = *(ushort *)((int)param_2 + 6) | 4;
            local_40 = (undefined4 *)0x1;
          }
          local_28 = (uint *)0xffffffff;
        }
        iVar6 = local_34;
        if (*(char *)(local_34 + 0x38) != '\0') goto LAB_00566ca5;
        iVar6 = FUN_00566e60(param_2);
        param_1[0x78] = param_1[0x78] - iVar6;
        psVar13 = (short *)param_2[10];
        local_1c = psVar13;
        if (4 < *local_58) {
          local_38 = (uint *)param_2[0xe];
        }
      }
      else if ((*(byte *)(psVar13 + (int)local_28 * 0x24 + 0x16) & 4) == 0) {
        FUN_0056be90(piVar4,2,*(undefined4 *)(psVar13 + (int)local_28 * 0x24 + 0x12),
                     *(undefined4 *)(psVar13 + (int)local_28 * 0x24 + 0x10));
        psVar13 = local_1c;
      }
    }
    iVar3 = param_2[0xf];
    iVar6 = local_34;
    piVar14 = param_1;
  }
  local_3c = (int *)*param_2;
  local_28 = (uint *)param_2[0xc];
  local_48 = (undefined1 *)param_2[0xb];
  local_60 = param_2[0xd];
  local_cc = *(byte *)((int)param_2 + 6) & 1;
  local_30 = CONCAT13(*(byte *)((int)param_2 + 6),(undefined3)local_30) & 0x1ffffff;
  if (param_2[0xf] != 0) {
    if (param_2[0x11] == 0) {
      iVar3 = 0;
      piVar4 = param_2;
      piVar12 = (int *)0x0;
      do {
        piVar5 = piVar4;
        piVar5[0x10] = (int)piVar12;
        piVar5[0x11] = (int)param_2;
        iVar3 = iVar3 + 1;
        piVar4 = (int *)piVar5[0xf];
        piVar12 = piVar5;
      } while ((int *)piVar5[0xf] != (int *)0x0);
      if ((*(int *)(iVar6 + 0x60) != 0) && (*(int *)(iVar6 + 0x60) < iVar3)) {
        FUN_00553950(piVar14,"too many terms in compound SELECT");
        param_1 = piVar14;
        goto LAB_00566ca5;
      }
    }
    FUN_0053e4b0(piVar14,param_2,local_58);
    piVar14[0x79] = local_c0;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar6 = FUN_00556680(local_28,local_38);
  if ((iVar6 == 0) && ((*(byte *)(local_34 + 0x34) & 4) == 0)) {
    local_38 = (uint *)0x0;
  }
  if (((*(byte *)((int)param_2 + 6) & 5) == 1) &&
     (iVar6 = FUN_00556680(local_38,*param_2), iVar6 == 0)) {
    *(ushort *)((int)param_2 + 6) = *(ushort *)((int)param_2 + 6) & 0xfffe;
    local_28 = (uint *)FUN_005567e0(local_34,*param_2,0);
    param_2[0xc] = (int)local_28;
    local_38 = (uint *)0x0;
LAB_00565a73:
    local_2c = (undefined1 *)0xffffffff;
  }
  else {
    if (local_38 == (uint *)0x0) goto LAB_00565a73;
    uVar7 = FUN_0053cc90(piVar14,local_38);
    local_38[1] = piVar14[0x12];
    piVar14[0x12] = piVar14[0x12] + 1;
    local_2c = (undefined1 *)FUN_0056bf50(piVar4,0x2a,local_38[1],*local_38 + 2,0,uVar7,0xfffffff0);
    param_2[6] = (int)local_2c;
  }
  if (*local_58 == 9) {
    FUN_0056be90(piVar4,0x2a,*(undefined4 *)(local_58 + 4),*local_3c);
  }
  uVar7 = FUN_005741e0(piVar4);
  local_bc = CONCAT44(uVar7,(undefined4)local_bc);
  param_2[8] = 0;
  param_2[9] = 0x43e00000;
  puVar8 = (undefined1 *)FUN_00532b80(piVar14,param_2,uVar7);
  if ((param_2[2] == 0) && (puVar8 = local_2c, -1 < (int)local_2c)) {
    puVar8 = (undefined1 *)FUN_005736b0(piVar4,local_2c);
    *puVar8 = 0x2b;
    *(ushort *)((int)param_2 + 6) = *(ushort *)((int)param_2 + 6) | 0x40;
  }
  if ((*(byte *)((int)param_2 + 6) & 1) == 0) {
    local_4c = (uint)puVar8 & 0xffffff00;
  }
  else {
    iVar6 = piVar14[0x12];
    piVar14[0x12] = iVar6 + 1;
    local_c8 = iVar6;
    uVar7 = FUN_0053cc90(piVar14,*local_6c,0xfffffff0);
    local_c4 = FUN_0056bf50(piVar4,0x2a,iVar6,0,0,uVar7);
    FUN_0056c490(piVar4,8);
    local_4c = 3;
    param_2 = local_6c;
  }
  local_cb = (undefined1)local_4c;
  if ((local_40 == (undefined4 *)0x0) && (local_28 == (uint *)0x0)) {
    if (local_30._3_1_ == '\0') {
      iVar6 = 0;
    }
    else {
      iVar6 = *param_2;
    }
    local_60 = FUN_005788a0(piVar14,local_1c,local_48,local_38,iVar6,0,0);
    iVar6 = local_34;
    param_1 = piVar14;
    if (local_60 == 0) goto LAB_00566ca5;
    if (*(double *)(local_60 + 0x30) < *(double *)(param_2 + 8)) {
      *(double *)(param_2 + 8) = *(double *)(local_60 + 0x30);
    }
    local_4c = local_4c & 0xff;
    if (*(byte *)(local_60 + 0xe) != 0) {
      local_4c = (uint)*(byte *)(local_60 + 0xe);
    }
    local_cb = (undefined1)local_4c;
    if (local_38 != (uint *)0x0) {
      local_44 = (int *)0x0;
      if ((uint)*(ushort *)(local_60 + 8) == *local_38) {
        local_38 = (uint *)0x0;
      }
    }
    if ((-1 < (int)local_2c) && (local_38 == (uint *)0x0)) {
      FUN_0056c4b0(piVar4,local_2c);
      param_2[6] = -1;
    }
    FUN_00548280(piVar14,param_2,local_3c,0,0,local_38,&local_cc,local_58,
                 *(undefined4 *)(local_60 + 0x14),*(undefined4 *)(local_60 + 0x18));
    FUN_005794a0(local_60);
  }
  else {
    local_78 = 0;
    local_2c = (undefined1 *)0x0;
    if (local_28 == (uint *)0x0) {
      param_2[8] = 0;
      param_2[9] = 0x3ff00000;
    }
    else {
      iVar6 = *(int *)*param_2;
      if (0 < iVar6) {
        puVar9 = (undefined2 *)(((int *)*param_2)[2] + 0x10);
        do {
          iVar6 = iVar6 + -1;
          *puVar9 = 0;
          puVar9 = puVar9 + 10;
          piVar4 = local_44;
        } while (0 < iVar6);
      }
      uVar10 = *local_28;
      if (0 < (int)uVar10) {
        puVar9 = (undefined2 *)(local_28[2] + 0x10);
        do {
          uVar10 = uVar10 - 1;
          *puVar9 = 0;
          puVar9 = puVar9 + 10;
        } while (0 < (int)uVar10);
      }
      if (100.0 < *(double *)(param_2 + 8)) {
        param_2[8] = 0;
        param_2[9] = 0x40590000;
      }
    }
    local_84 = FUN_005741e0(piVar4);
    local_dc = 0;
    local_d4 = 0;
    local_ec = CONCAT44(local_1c,piVar14);
    local_e4 = ZEXT48(&local_b4) << 0x20;
    if (local_28 == (uint *)0x0) {
      local_ac = local_ac & 0xffffffff;
    }
    else {
      local_ac = CONCAT44(*local_28 + 1,(undefined4)local_ac);
    }
    local_a4 = CONCAT44(local_a4._4_4_,local_28);
    FUN_00553cb0(&local_ec,local_3c);
    FUN_00553cb0(&local_ec,local_38);
    if (local_60 != 0) {
      FUN_00553d20(&local_ec,local_60);
    }
    local_9c = CONCAT44((int)local_9c,(int)local_9c);
    if (0 < local_94._4_4_) {
      iVar6 = 0;
      iVar3 = 0;
      bVar1 = local_d4._4_1_;
      do {
        local_d4 = CONCAT35(local_d4._5_3_,CONCAT14(bVar1,(undefined4)local_d4)) | 0x800000000;
        FUN_00553cb0(&local_ec,*(undefined4 *)(*(int *)(iVar6 + (int)local_94) + 0x10));
        bVar1 = local_d4._4_1_ & 0xf7;
        iVar3 = iVar3 + 1;
        local_d4 = local_d4 & 0xfffffff7ffffffff;
        iVar6 = iVar6 + 0x10;
        param_2 = local_6c;
        piVar14 = local_50;
      } while (iVar3 < local_94._4_4_);
    }
    iVar6 = local_34;
    param_1 = piVar14;
    if (*(char *)(local_34 + 0x38) != '\0') goto LAB_00566ca5;
    if (local_28 == (uint *)0x0) {
      local_70 = 0;
      local_40 = (undefined4 *)FUN_0053c7e0(param_2,&local_b4);
      if (local_40 == (undefined4 *)0x0) {
        local_44 = (int *)0x0;
        cVar2 = FUN_0053de70(param_2);
        local_30 = CONCAT13(cVar2,(undefined3)local_30);
        if (((cVar2 != '\0') &&
            (local_70 = FUN_005567e0(local_34,*(undefined4 *)(**(int **)(*param_2 + 8) + 0x10),0),
            local_44 = (int *)local_70, local_70 != 0)) && (*(char *)(local_34 + 0x38) == '\0')) {
          *(bool *)(*(int *)(local_70 + 8) + 0xc) = local_30._3_1_ != '\x01';
          *(undefined1 *)**(undefined4 **)(local_70 + 8) = 0x98;
        }
        FUN_00545ce0(piVar14,&local_b4);
        local_44 = (int *)FUN_005788a0(piVar14,local_1c,local_48,local_44,0,local_30 >> 0x18,0);
        iVar6 = local_34;
        if (local_44 == (int *)0x0) {
          FUN_00556700(local_34,local_70);
          goto LAB_00566ca5;
        }
        FUN_0057b3b0(piVar14,&local_b4);
        if ((short)local_44[2] != 0) {
          FUN_0056be90(piVar4,1,0,local_44[6]);
        }
        FUN_005794a0(local_44);
        FUN_00536ea0(piVar14,&local_b4);
      }
      else {
        local_44 = (int *)FUN_00565260(*piVar14,local_40[0x10]);
        local_80 = piVar14[0x12];
        piVar14[0x12] = local_80 + 1;
        local_54 = local_40[8];
        local_5c = 0;
        local_7c = 0;
        FUN_00550aa0(piVar14,local_44);
        FUN_005681e0(piVar14,local_44,local_40[8],0,*local_40);
        iVar6 = local_40[2];
        if (iVar6 != 0) {
          local_7c = 0;
          do {
            if ((*(char *)(iVar6 + 0x2e) == '\0') &&
               ((local_7c == 0 || (*(int *)(iVar6 + 0x24) < *(int *)(local_7c + 0x24))))) {
              local_7c = iVar6;
            }
            iVar6 = *(int *)(iVar6 + 0x14);
          } while (iVar6 != 0);
          param_2 = local_6c;
          if ((local_7c != 0) && (*(int *)(local_7c + 0x24) < (int)*(short *)((int)local_40 + 0x26))
             ) {
            local_54 = *(uint *)(local_7c + 0x28);
            local_5c = FUN_0055b2a0(piVar14,local_7c);
          }
        }
        FUN_0056bef0(piVar4,0x27,local_80,local_54,local_44);
        if (local_5c != 0) {
          local_64 = piVar4[1];
          iVar6 = *piVar4;
          if ((local_64 == 0) || (*(char *)(iVar6 + 0x38) != '\0')) {
            FUN_00539320(iVar6,0xfffffff0,local_5c);
          }
          else {
            iVar3 = piVar4[7] + -1;
            FUN_00539320(iVar6,(int)*(char *)(local_64 + 1 + iVar3 * 0x14),
                         *(undefined4 *)(local_64 + 0x10 + iVar3 * 0x14));
            *(int *)(local_64 + 0x10 + iVar3 * 0x14) = local_5c;
            *(undefined1 *)(local_64 + 1 + iVar3 * 0x14) = 0xfa;
            param_2 = local_6c;
          }
        }
        FUN_0056be90(piVar4,0x20,local_80,*(undefined4 *)((int)local_94 + 8));
        FUN_0056be30(piVar4,0x2d,local_80);
        FUN_005351c0(piVar14,local_40,local_7c);
      }
      local_38 = (uint *)0x0;
      FUN_00555f40(piVar14,local_60,local_84,8);
      FUN_00548280(piVar14,param_2,*param_2,0,0,0,0,local_58,local_84,local_84);
      FUN_00556700(local_34,local_70);
    }
    else {
      local_b4 = CONCAT44(piVar14[0x12],(undefined4)local_b4);
      piVar14[0x12] = piVar14[0x12] + 1;
      local_68 = FUN_0053cc90(piVar14,local_28);
      local_64 = FUN_0056bf50(piVar4,0x2b,local_b4._4_4_,local_ac._4_4_,0,local_68,0xfffffff0);
      piVar14[0x13] = piVar14[0x13] + 1;
      local_24 = piVar14[0x13];
      piVar14[0x13] = local_24 + 2;
      local_7c = FUN_005741e0(piVar4);
      piVar14[0x13] = piVar14[0x13] + 1;
      local_5c = piVar14[0x13];
      local_80 = FUN_005741e0(piVar4);
      local_70 = piVar14[0x13] + 1;
      iVar6 = piVar14[0x13] + *local_28;
      piVar14[0x13] = iVar6;
      local_40 = (undefined4 *)(iVar6 + 1);
      piVar14[0x13] = *local_28 + iVar6;
      FUN_0056be90(piVar4,7,0,local_24 + 1);
      FUN_0056be90(piVar4,7,0,local_24);
      FUN_0056bef0(piVar4,10,0,local_70,(*local_28 - 1) + local_70);
      FUN_0056be90(piVar4,2,local_5c,local_80);
      local_54 = FUN_005788a0(piVar14,local_1c,local_48,local_28,0,0,0);
      iVar6 = local_34;
      if (local_54 == 0) goto LAB_00566ca5;
      if ((uint)*(ushort *)(local_54 + 8) == *local_28) {
        local_30 = 0;
      }
      else {
        if ((local_30._3_1_ == '\0') ||
           (pcVar11 = "DISTINCT", (*(byte *)((int)param_2 + 6) & 1) != 0)) {
          pcVar11 = "GROUP BY";
        }
        FUN_005352d0(piVar14,pcVar11);
        local_20 = (undefined1 *)*local_28;
        local_8c = (int)local_20 + 1;
        local_30 = 1;
        local_78 = local_8c;
        if (0 < (int)local_9c) {
          piVar12 = (int *)(local_a4._4_4_ + 0xc);
          uVar10 = local_8c;
          iVar6 = (int)local_9c;
          do {
            if ((int)uVar10 <= *piVar12) {
              local_78 = local_78 + 1;
              uVar10 = uVar10 + 1;
            }
            piVar12 = piVar12 + 6;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        local_2c = (undefined1 *)piVar14[0x10];
        if (piVar14[0xf] < (int)local_78) {
          local_2c = (undefined1 *)(piVar14[0x13] + 1);
          piVar14[0x13] = piVar14[0x13] + local_78;
        }
        else {
          piVar14[0x10] = (int)local_2c + local_78;
          piVar14[0xf] = piVar14[0xf] - local_78;
        }
        FUN_00554130(piVar14);
        puVar8 = local_2c;
        FUN_005546b0(piVar14,local_28,local_2c,0);
        FUN_0056be90(piVar4,0x37,local_b4._4_4_,(int)local_20 + (int)puVar8);
        local_20 = (undefined1 *)0x0;
        if (0 < (int)local_9c) {
          puVar8 = (undefined1 *)((int)puVar8 + local_8c);
          iVar6 = 0;
          uVar10 = local_8c;
          local_48 = puVar8;
          do {
            if ((int)uVar10 <= *(int *)(iVar6 + 0xc + local_a4._4_4_)) {
              puVar8 = (undefined1 *)
                       FUN_00554760(piVar14,*(undefined4 *)(iVar6 + local_a4._4_4_),
                                    *(undefined4 *)(iVar6 + 8 + local_a4._4_4_),
                                    *(undefined4 *)(iVar6 + 4 + local_a4._4_4_),puVar8,0);
              if (local_48 != puVar8) {
                FUN_0056be90(piVar4,0xf,puVar8,local_48);
              }
              uVar10 = local_8c + 1;
              puVar8 = local_48 + 1;
              local_8c = uVar10;
              local_48 = puVar8;
            }
            local_20 = (undefined1 *)((int)local_20 + 1);
            iVar6 = iVar6 + 0x18;
          } while ((int)local_20 < (int)local_9c);
        }
        if (*(char *)((int)piVar14 + 0x13) == '\0') {
          piVar14[0x13] = piVar14[0x13] + 1;
          iVar6 = piVar14[0x13];
        }
        else {
          bVar1 = *(char *)((int)piVar14 + 0x13) - 1;
          *(byte *)((int)piVar14 + 0x13) = bVar1;
          iVar6 = piVar14[bVar1 + 7];
        }
        local_20 = (undefined1 *)piVar4[7];
        if (((int)local_20 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
          piVar4[7] = piVar4[7] + 1;
          iVar3 = piVar4[1];
          *(undefined1 **)(iVar3 + 4 + (int)local_20 * 0x14) = local_2c;
          *(undefined2 *)(iVar3 + (int)local_20 * 0x14) = 0x1f;
          *(undefined1 *)(iVar3 + 3 + (int)local_20 * 0x14) = 0;
          *(uint *)(iVar3 + 8 + (int)local_20 * 0x14) = local_78;
          *(int *)(iVar3 + 0xc + (int)local_20 * 0x14) = iVar6;
          *(undefined4 *)(iVar3 + 0x10 + (int)local_20 * 0x14) = 0;
        }
        local_48 = local_b4._4_4_;
        local_20 = (undefined1 *)piVar4[7];
        if (((int)local_20 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
          piVar4[7] = piVar4[7] + 1;
          iVar3 = piVar4[1];
          *(undefined2 *)(iVar3 + (int)local_20 * 0x14) = 0x60;
          *(undefined1 *)(iVar3 + 3 + (int)local_20 * 0x14) = 0;
          *(undefined1 **)(iVar3 + 4 + (int)local_20 * 0x14) = local_48;
          *(int *)(iVar3 + 8 + (int)local_20 * 0x14) = iVar6;
          *(undefined4 *)(iVar3 + 0xc + (int)local_20 * 0x14) = 0;
          *(undefined4 *)(iVar3 + 0x10 + (int)local_20 * 0x14) = 0;
        }
        uVar10 = local_78;
        if ((iVar6 != 0) && (*(byte *)((int)piVar14 + 0x13) < 8)) {
          iVar3 = 0;
          piVar12 = piVar14 + 0x19;
          do {
            if (piVar12[4] == iVar6) {
              *(undefined1 *)(piVar12 + 2) = 1;
              goto LAB_0056610e;
            }
            iVar3 = iVar3 + 1;
            piVar12 = piVar12 + 6;
          } while (iVar3 < 10);
          piVar14[*(byte *)((int)piVar14 + 0x13) + 7] = iVar6;
          *(char *)((int)piVar14 + 0x13) = *(char *)((int)piVar14 + 0x13) + '\x01';
        }
LAB_0056610e:
        FUN_00554430(piVar14,local_2c,local_78);
        if (piVar14[0xf] < (int)uVar10) {
          piVar14[0xf] = uVar10;
          piVar14[0x10] = (int)local_2c;
        }
        FUN_005794a0(local_54);
        local_78 = piVar14[0x12];
        local_ac = CONCAT44(local_ac._4_4_,local_78);
        piVar14[0x12] = local_78 + 1;
        if (*(char *)((int)piVar14 + 0x13) == '\0') {
          piVar14[0x13] = piVar14[0x13] + 1;
          local_2c = (undefined1 *)piVar14[0x13];
        }
        else {
          bVar1 = *(char *)((int)piVar14 + 0x13) - 1;
          *(byte *)((int)piVar14 + 0x13) = bVar1;
          local_2c = (undefined1 *)piVar14[bVar1 + 7];
        }
        local_20 = (undefined1 *)piVar4[7];
        if (((int)local_20 < piVar4[8]) || (iVar6 = FUN_0053b4b0(piVar4), iVar6 == 0)) {
          piVar4[7] = piVar4[7] + 1;
          iVar6 = piVar4[1];
          *(uint *)(iVar6 + 4 + (int)local_20 * 0x14) = local_78;
          *(undefined2 *)(iVar6 + (int)local_20 * 0x14) = 0x2c;
          *(undefined1 *)(iVar6 + 3 + (int)local_20 * 0x14) = 0;
          *(undefined1 **)(iVar6 + 8 + (int)local_20 * 0x14) = local_2c;
          *(uint *)(iVar6 + 0xc + (int)local_20 * 0x14) = uVar10;
          *(undefined4 *)(iVar6 + 0x10 + (int)local_20 * 0x14) = 0;
        }
        iVar6 = piVar4[7];
        local_20 = local_b4._4_4_;
        if ((iVar6 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
          iVar3 = piVar4[1];
          piVar4[7] = piVar4[7] + 1;
          *(undefined1 **)(iVar3 + 4 + iVar6 * 0x14) = local_20;
          *(undefined2 *)(iVar3 + iVar6 * 0x14) = 0x46;
          *(undefined1 *)(iVar3 + 3 + iVar6 * 0x14) = 0;
          *(int *)(iVar3 + 8 + iVar6 * 0x14) = local_84;
          *(undefined4 *)(iVar3 + 0xc + iVar6 * 0x14) = 0;
          *(undefined4 *)(iVar3 + 0x10 + iVar6 * 0x14) = 0;
        }
        local_b4._0_2_ = CONCAT11(1,(undefined1)local_b4);
        FUN_00554130(piVar14);
      }
      local_88 = piVar4[7];
      FUN_00554130(piVar14);
      if (local_30 != 0) {
        iVar6 = piVar4[7];
        local_20 = local_b4._4_4_;
        if ((iVar6 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
          iVar3 = piVar4[1];
          piVar4[7] = piVar4[7] + 1;
          *(undefined1 **)(iVar3 + 4 + iVar6 * 0x14) = local_20;
          *(undefined2 *)(iVar3 + iVar6 * 0x14) = 0x3e;
          *(undefined1 *)(iVar3 + 3 + iVar6 * 0x14) = 0;
          *(undefined1 **)(iVar3 + 8 + iVar6 * 0x14) = local_2c;
          *(undefined4 *)(iVar3 + 0xc + iVar6 * 0x14) = 0;
          *(undefined4 *)(iVar3 + 0x10 + iVar6 * 0x14) = 0;
        }
      }
      local_2c = (undefined1 *)0x0;
      if (0 < (int)*local_28) {
        do {
          puVar8 = local_2c;
          if (local_30 == 0) {
            local_b4 = CONCAT71(local_b4._1_7_,1);
            local_48 = (undefined1 *)((int)local_40 + (int)local_2c);
            pcVar11 = *(char **)(local_28[2] + (int)local_2c * 0x14);
            if ((pcVar11 == (char *)0x0) || (*pcVar11 != -0x7c)) {
              local_20 = (undefined1 *)FUN_00554e20(piVar14,pcVar11,local_48);
              if (((local_20 != local_48) && (iVar6 = piVar14[2], puVar8 = local_2c, iVar6 != 0)) &&
                 ((local_74 = *(uint *)(iVar6 + 0x1c), (int)local_74 < *(int *)(iVar6 + 0x20) ||
                  (iVar3 = FUN_0053b4b0(iVar6), puVar8 = local_2c, iVar3 == 0)))) {
                *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + 1;
                iVar6 = *(int *)(iVar6 + 4);
                *(undefined1 **)(iVar6 + 4 + local_74 * 0x14) = local_20;
                *(undefined2 *)(iVar6 + local_74 * 0x14) = 0xf;
                uVar10 = local_74;
                goto LAB_005663c0;
              }
            }
            else {
              local_74 = *(uint *)(pcVar11 + 0x18);
              local_20 = (undefined1 *)piVar14[2];
              local_8c = *(uint *)(local_20 + 0x1c);
              if (((int)local_8c < *(int *)(local_20 + 0x20)) ||
                 (iVar6 = FUN_0053b4b0(local_20), iVar6 == 0)) {
                *(int *)(local_20 + 0x1c) = *(int *)(local_20 + 0x1c) + 1;
                iVar6 = *(int *)(local_20 + 4);
                *(undefined2 *)(iVar6 + local_8c * 0x14) = 0xe;
                *(uint *)(iVar6 + 4 + local_8c * 0x14) = local_74;
                uVar10 = local_8c;
LAB_005663c0:
                *(undefined4 *)(iVar6 + 0x10 + uVar10 * 0x14) = 0;
                *(undefined4 *)(iVar6 + 0xc + uVar10 * 0x14) = 0;
                *(undefined1 **)(iVar6 + 8 + uVar10 * 0x14) = local_48;
                *(undefined1 *)(iVar6 + 3 + uVar10 * 0x14) = 0;
                puVar8 = local_2c;
              }
            }
          }
          else {
            local_20 = (undefined1 *)piVar4[7];
            if (((int)local_20 < piVar4[8]) || (iVar6 = FUN_0053b4b0(piVar4), iVar6 == 0)) {
              iVar6 = piVar4[1];
              piVar4[7] = piVar4[7] + 1;
              *(uint *)(iVar6 + 4 + (int)local_20 * 0x14) = local_78;
              *(undefined2 *)(iVar6 + (int)local_20 * 0x14) = 0x1d;
              *(undefined1 *)(iVar6 + 3 + (int)local_20 * 0x14) = 0;
              *(undefined1 **)(iVar6 + 8 + (int)local_20 * 0x14) = puVar8;
              *(undefined1 **)(iVar6 + 0xc + (int)local_20 * 0x14) =
                   (undefined1 *)((int)local_40 + (int)puVar8);
              *(undefined4 *)(iVar6 + 0x10 + (int)local_20 * 0x14) = 0;
            }
            if ((puVar8 == (undefined1 *)0x0) && (piVar4[1] != 0)) {
              *(undefined1 *)(piVar4[1] + -0x11 + piVar4[7] * 0x14) = 0x20;
            }
          }
          local_2c = puVar8 + 1;
        } while ((int)local_2c < (int)*local_28);
      }
      iVar6 = piVar4[7];
      local_74 = *local_28;
      if ((iVar6 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
        iVar3 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(int *)(iVar3 + 4 + iVar6 * 0x14) = local_70;
        *(undefined4 **)(iVar3 + 8 + iVar6 * 0x14) = local_40;
        *(undefined2 *)(iVar3 + iVar6 * 0x14) = 0x18;
        *(undefined1 *)(iVar3 + 3 + iVar6 * 0x14) = 0;
        *(uint *)(iVar3 + 0xc + iVar6 * 0x14) = local_74;
        *(undefined4 *)(iVar3 + 0x10 + iVar6 * 0x14) = 0;
      }
      else {
        iVar6 = 1;
      }
      FUN_0056c320(piVar4,iVar6,local_68,0xfffffffa);
      uVar10 = piVar4[7];
      local_74 = uVar10;
      if (((int)uVar10 < piVar4[8]) || (iVar6 = FUN_0053b4b0(piVar4), iVar6 == 0)) {
        iVar6 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(undefined2 *)(iVar6 + uVar10 * 0x14) = 0x19;
        *(undefined1 *)(iVar6 + 3 + uVar10 * 0x14) = 0;
        *(uint *)(iVar6 + 4 + uVar10 * 0x14) = uVar10 + 1;
        *(undefined4 *)(iVar6 + 8 + uVar10 * 0x14) = 0;
        *(uint *)(iVar6 + 0xc + uVar10 * 0x14) = uVar10 + 1;
        *(undefined4 *)(iVar6 + 0x10 + uVar10 * 0x14) = 0;
      }
      FUN_00554ca0(piVar14,local_40,local_70,*local_28);
      local_68 = piVar4[7];
      if ((local_68 < piVar4[8]) || (iVar6 = FUN_0053b4b0(piVar4), iVar6 == 0)) {
        piVar4[7] = piVar4[7] + 1;
        iVar6 = piVar4[1];
        *(int *)(iVar6 + 4 + local_68 * 0x14) = local_24 + 2;
        *(undefined2 *)(iVar6 + local_68 * 0x14) = 2;
        *(undefined1 *)(iVar6 + 3 + local_68 * 0x14) = 0;
        *(int *)(iVar6 + 8 + local_68 * 0x14) = local_7c;
        *(undefined4 *)(iVar6 + 0xc + local_68 * 0x14) = 0;
        *(undefined4 *)(iVar6 + 0x10 + local_68 * 0x14) = 0;
        uVar10 = local_74;
        piVar14 = local_50;
      }
      local_68 = piVar4[7];
      if ((local_68 < piVar4[8]) || (iVar6 = FUN_0053b4b0(piVar4), iVar6 == 0)) {
        piVar4[7] = piVar4[7] + 1;
        iVar6 = piVar4[1];
        *(int *)(iVar6 + 4 + local_68 * 0x14) = local_24 + 1;
        *(undefined2 *)(iVar6 + local_68 * 0x14) = 0x78;
        *(undefined1 *)(iVar6 + 3 + local_68 * 0x14) = 0;
        *(int *)(iVar6 + 8 + local_68 * 0x14) = local_84;
        *(undefined4 *)(iVar6 + 0xc + local_68 * 0x14) = 0;
        *(undefined4 *)(iVar6 + 0x10 + local_68 * 0x14) = 0;
        piVar14 = local_50;
      }
      local_68 = piVar4[7];
      if ((local_68 < piVar4[8]) || (iVar6 = FUN_0053b4b0(piVar4), iVar6 == 0)) {
        piVar4[7] = piVar4[7] + 1;
        iVar6 = piVar4[1];
        *(int *)(iVar6 + 4 + local_68 * 0x14) = local_5c;
        *(undefined2 *)(iVar6 + local_68 * 0x14) = 2;
        *(undefined1 *)(iVar6 + 3 + local_68 * 0x14) = 0;
        *(int *)(iVar6 + 8 + local_68 * 0x14) = local_80;
        *(undefined4 *)(iVar6 + 0xc + local_68 * 0x14) = 0;
        *(undefined4 *)(iVar6 + 0x10 + local_68 * 0x14) = 0;
      }
      if ((-1 < (int)uVar10) && (uVar10 < (uint)piVar4[7])) {
        *(int *)(piVar4[1] + 8 + uVar10 * 0x14) = piVar4[7];
      }
      FUN_0057b3b0(piVar14,&local_b4);
      iVar6 = piVar4[7];
      if ((iVar6 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
        iVar3 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(undefined2 *)(iVar3 + iVar6 * 0x14) = 7;
        *(undefined1 *)(iVar3 + 3 + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 4 + iVar6 * 0x14) = 1;
        *(int *)(iVar3 + 8 + iVar6 * 0x14) = local_24;
        *(undefined4 *)(iVar3 + 0xc + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x10 + iVar6 * 0x14) = 0;
      }
      if (local_30 == 0) {
        FUN_005794a0(local_54);
        iVar6 = local_64;
        local_88 = piVar4[1];
        if (local_88 != 0) {
          FUN_00539320(*piVar4,(int)*(char *)(local_88 + 1 + local_64 * 0x14),
                       *(undefined4 *)(local_88 + 0x10 + local_64 * 0x14));
          *(undefined8 *)(local_88 + iVar6 * 0x14) = 0;
          *(undefined8 *)(local_88 + 8 + iVar6 * 0x14) = 0;
          *(undefined4 *)(local_88 + 0x10 + iVar6 * 0x14) = 0;
          *(undefined1 *)(local_88 + iVar6 * 0x14) = 0x95;
        }
      }
      else {
        iVar6 = piVar4[7];
        local_68 = (int)local_b4._4_4_;
        if ((iVar6 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
          iVar3 = piVar4[1];
          piVar4[7] = piVar4[7] + 1;
          *(int *)(iVar3 + 4 + iVar6 * 0x14) = local_68;
          *(undefined2 *)(iVar3 + iVar6 * 0x14) = 0x51;
          *(undefined1 *)(iVar3 + 3 + iVar6 * 0x14) = 0;
          *(int *)(iVar3 + 8 + iVar6 * 0x14) = local_88;
          *(undefined4 *)(iVar3 + 0xc + iVar6 * 0x14) = 0;
          *(undefined4 *)(iVar3 + 0x10 + iVar6 * 0x14) = 0;
        }
      }
      iVar6 = piVar4[7];
      if ((iVar6 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
        piVar4[7] = piVar4[7] + 1;
        iVar3 = piVar4[1];
        *(int *)(iVar3 + 4 + iVar6 * 0x14) = local_24 + 2;
        *(undefined2 *)(iVar3 + iVar6 * 0x14) = 2;
        *(undefined1 *)(iVar3 + 3 + iVar6 * 0x14) = 0;
        *(int *)(iVar3 + 8 + iVar6 * 0x14) = local_7c;
        *(undefined4 *)(iVar3 + 0xc + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x10 + iVar6 * 0x14) = 0;
        piVar14 = local_50;
      }
      iVar6 = piVar4[7];
      if ((iVar6 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
        iVar3 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(undefined2 *)(iVar3 + iVar6 * 0x14) = 1;
        *(undefined1 *)(iVar3 + 3 + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 4 + iVar6 * 0x14) = 0;
        *(int *)(iVar3 + 8 + iVar6 * 0x14) = local_84;
        *(undefined4 *)(iVar3 + 0xc + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x10 + iVar6 * 0x14) = 0;
      }
      iVar6 = piVar4[7];
      local_88 = iVar6;
      if ((iVar6 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
        piVar4[7] = piVar4[7] + 1;
        iVar3 = piVar4[1];
        *(undefined2 *)(iVar3 + iVar6 * 0x14) = 7;
        *(undefined1 *)(iVar3 + 3 + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 4 + iVar6 * 0x14) = 1;
        *(int *)(iVar3 + 8 + iVar6 * 0x14) = local_24 + 1;
        *(undefined4 *)(iVar3 + 0xc + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x10 + iVar6 * 0x14) = 0;
      }
      iVar6 = piVar4[7];
      if ((iVar6 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
        piVar4[7] = piVar4[7] + 1;
        iVar3 = piVar4[1];
        *(undefined2 *)(iVar3 + iVar6 * 0x14) = 3;
        *(undefined1 *)(iVar3 + 3 + iVar6 * 0x14) = 0;
        *(int *)(iVar3 + 4 + iVar6 * 0x14) = local_24 + 2;
        *(undefined4 *)(iVar3 + 8 + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0xc + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x10 + iVar6 * 0x14) = 0;
        piVar14 = local_50;
      }
      if (piVar4[10] != 0) {
        *(int *)(piVar4[10] - (local_7c * 4 + 4)) = piVar4[7];
      }
      iVar6 = piVar4[7];
      if ((iVar6 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
        iVar3 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(int *)(iVar3 + 4 + iVar6 * 0x14) = local_24;
        *(undefined2 *)(iVar3 + iVar6 * 0x14) = 0x78;
        *(undefined1 *)(iVar3 + 3 + iVar6 * 0x14) = 0;
        *(int *)(iVar3 + 8 + iVar6 * 0x14) = iVar6 + 2;
        *(undefined4 *)(iVar3 + 0xc + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x10 + iVar6 * 0x14) = 0;
      }
      local_64 = piVar4[7];
      if ((local_64 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
        piVar4[7] = piVar4[7] + 1;
        iVar3 = piVar4[1];
        *(undefined2 *)(iVar3 + local_64 * 0x14) = 3;
        *(undefined1 *)(iVar3 + 3 + local_64 * 0x14) = 0;
        *(int *)(iVar3 + 4 + local_64 * 0x14) = local_24 + 2;
        *(undefined4 *)(iVar3 + 8 + local_64 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0xc + local_64 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x10 + local_64 * 0x14) = 0;
        piVar4 = local_44;
        piVar14 = local_50;
      }
      FUN_00536ea0(piVar14,&local_b4);
      FUN_00555f40(piVar14,local_60,iVar6 + 1,8);
      param_2 = local_6c;
      FUN_00548280(piVar14,local_6c,*local_6c,0,0,local_38,&local_cc,local_58,iVar6 + 1,local_88);
      local_64 = piVar4[7];
      if ((local_64 < piVar4[8]) || (iVar6 = FUN_0053b4b0(piVar4), iVar6 == 0)) {
        piVar4[7] = piVar4[7] + 1;
        iVar6 = piVar4[1];
        *(undefined2 *)(iVar6 + local_64 * 0x14) = 3;
        *(undefined1 *)(iVar6 + 3 + local_64 * 0x14) = 0;
        *(int *)(iVar6 + 4 + local_64 * 0x14) = local_24 + 2;
        *(undefined4 *)(iVar6 + 8 + local_64 * 0x14) = 0;
        *(undefined4 *)(iVar6 + 0xc + local_64 * 0x14) = 0;
        *(undefined4 *)(iVar6 + 0x10 + local_64 * 0x14) = 0;
        piVar14 = local_50;
      }
      if (piVar4[10] != 0) {
        *(int *)(piVar4[10] - (local_80 * 4 + 4)) = piVar4[7];
      }
      FUN_00545ce0(piVar14,&local_b4);
      local_64 = piVar4[7];
      if ((local_64 < piVar4[8]) || (iVar6 = FUN_0053b4b0(piVar4), iVar6 == 0)) {
        piVar4[7] = piVar4[7] + 1;
        iVar6 = piVar4[1];
        *(undefined2 *)(iVar6 + local_64 * 0x14) = 3;
        *(undefined1 *)(iVar6 + 3 + local_64 * 0x14) = 0;
        *(int *)(iVar6 + 4 + local_64 * 0x14) = local_5c;
        *(undefined4 *)(iVar6 + 8 + local_64 * 0x14) = 0;
        *(undefined4 *)(iVar6 + 0xc + local_64 * 0x14) = 0;
        *(undefined4 *)(iVar6 + 0x10 + local_64 * 0x14) = 0;
      }
    }
    if (piVar4[10] != 0) {
      *(int *)(piVar4[10] - (local_84 * 4 + 4)) = piVar4[7];
    }
  }
  if ((char)local_4c == '\x03') {
    FUN_005352d0(piVar14,"DISTINCT");
  }
  if (local_38 != (uint *)0x0) {
    FUN_005352d0(piVar14,"ORDER BY");
    FUN_0053a0f0(piVar14,param_2,piVar4,*local_3c,local_58);
  }
  if (piVar4[10] != 0) {
    *(int *)(piVar4[10] - (local_bc._4_4_ * 4 + 4)) = piVar4[7];
  }
  local_20 = (undefined1 *)0x0;
  iVar6 = local_34;
  param_1 = piVar14;
LAB_00566ca5:
  param_1[0x79] = local_c0;
  if ((local_20 == (undefined1 *)0x0) && (*local_58 == 5)) {
    FUN_00539ac0(param_1,local_1c,local_3c);
  }
  FUN_005521a0(iVar6,local_a4._4_4_);
  FUN_005521a0(iVar6,(int)local_94);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00566d10 @ 00566d10  kind=lib  attributed-by=lib-island  size=35 */

void FUN_00566d10(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_005303a0(param_1,param_2);
    FUN_005521a0(param_1,param_2);
  }
  return;
}


/* FUN_00566d40 @ 00566d40  kind=lib  attributed-by=lib-island  size=278 */

undefined4 * FUN_00566d40(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar1 = (undefined4 *)FUN_00552230(param_1,0x50);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  uVar2 = FUN_005567e0(param_1,*param_2,param_3);
  *puVar1 = uVar2;
  uVar2 = FUN_00567420(param_1,param_2[10],param_3);
  puVar1[10] = uVar2;
  uVar2 = FUN_00536250(param_1,param_2[0xb],param_3,0);
  puVar1[0xb] = uVar2;
  uVar2 = FUN_005567e0(param_1,param_2[0xc],param_3);
  puVar1[0xc] = uVar2;
  uVar2 = FUN_00536250(param_1,param_2[0xd],param_3,0);
  puVar1[0xd] = uVar2;
  uVar2 = FUN_005567e0(param_1,param_2[0xe],param_3);
  puVar1[0xe] = uVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  iVar3 = FUN_00566d40(param_1,param_2[0xf],param_3);
  puVar1[0xf] = iVar3;
  if (iVar3 != 0) {
    *(undefined4 **)(iVar3 + 0x40) = puVar1;
  }
  puVar1[0x10] = 0;
  uVar2 = FUN_00536250(param_1,param_2[0x12],param_3,0);
  puVar1[0x12] = uVar2;
  uVar2 = FUN_00536250(param_1,param_2[0x13],param_3,0);
  puVar1[0x13] = uVar2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(ushort *)((int)puVar1 + 6) = *(ushort *)((int)param_2 + 6) & 0xfff7;
  puVar1[0x11] = 0;
  puVar1[4] = 0xffffffff;
  puVar1[5] = 0xffffffff;
  puVar1[6] = 0xffffffff;
  return puVar1;
}


/* FUN_00566e60 @ 00566e60  kind=lib  attributed-by=lib-island  size=33 */

undefined4 FUN_00566e60(undefined4 param_1)

{
  undefined4 local_8;
  
  local_8 = 0;
  FUN_0053b770(param_1,&local_8);
  return local_8;
}


/* FUN_00566e90 @ 00566e90  kind=lib  attributed-by=lib-island  size=455 */

void FUN_00566e90(int *param_1,int *param_2,void *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,int param_8,undefined4 param_9,
                 undefined4 param_10)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *_Dst;
  undefined1 *_Dst_00;
  int iVar4;
  undefined4 local_58 [20];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar2 = *param_1;
  _Dst = (undefined4 *)FUN_00552230(iVar2,0x50);
  if ((_Dst == (undefined4 *)0x0) || (memset(_Dst,0,0x50), _Dst == (undefined4 *)0x0)) {
    _Dst = local_58;
    memset(_Dst,0,0x50);
  }
  if (param_2 == (int *)0x0) {
    _Dst_00 = (undefined1 *)FUN_00552230(iVar2,0x2d);
    if (_Dst_00 != (undefined1 *)0x0) {
      memset(_Dst_00,0,0x2d);
      *(undefined2 *)(_Dst_00 + 0x1e) = 0xffff;
      *_Dst_00 = 0x71;
      *(undefined1 **)(_Dst_00 + 4) = _Dst_00 + 0x2c;
      _Dst_00[0x2c] = 0;
      *(undefined4 *)(_Dst_00 + 0x14) = 1;
    }
    iVar3 = *param_1;
    param_2 = (int *)FUN_00552230(iVar3,0xc);
    if (param_2 != (int *)0x0) {
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      iVar4 = FUN_00552230(iVar3,0x14);
      param_2[2] = iVar4;
      if (iVar4 != 0) {
        puVar1 = (undefined8 *)(iVar4 + *param_2 * 0x14);
        *param_2 = *param_2 + 1;
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)(puVar1 + 2) = 0;
        *(undefined1 **)puVar1 = _Dst_00;
        goto LAB_00566f9e;
      }
    }
    FUN_00555e30(iVar3,_Dst_00);
    FUN_00556700(iVar3,param_2);
    param_2 = (int *)0x0;
  }
LAB_00566f9e:
  *_Dst = param_2;
  if ((param_3 == (void *)0x0) &&
     (param_3 = (void *)FUN_00552230(iVar2,0x50), param_3 != (void *)0x0)) {
    memset(param_3,0,0x50);
  }
  _Dst[0xb] = param_4;
  _Dst[0xc] = param_5;
  _Dst[0xd] = param_6;
  _Dst[0xe] = param_7;
  _Dst[10] = param_3;
  *(undefined1 *)(_Dst + 1) = 0x74;
  *(ushort *)((int)_Dst + 6) = (ushort)(param_8 != 0);
  _Dst[0x12] = param_9;
  _Dst[0x13] = param_10;
  _Dst[4] = 0xffffffff;
  _Dst[5] = 0xffffffff;
  _Dst[6] = 0xffffffff;
  if (*(char *)(iVar2 + 0x38) == '\0') {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_005303a0(iVar2,_Dst);
  if (_Dst != local_58) {
    FUN_005521a0(iVar2,_Dst);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00567060 @ 00567060  kind=lib  attributed-by=lib-island  size=131 */

void FUN_00567060(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  code *local_18;
  code *local_14;
  int *local_10;
  
  if ((param_2 != 0) && (iVar1 = *param_1, (*(byte *)(param_2 + 6) & 0x20) == 0)) {
    local_14 = FUN_00547b70;
    local_18 = plasma::Shape::vfunction14;
    local_10 = param_1;
    FUN_00578760(&local_18,param_2);
    if ((param_1[0x11] == 0) &&
       (((*(char *)(iVar1 + 0x38) == '\0' &&
         (FUN_00564230(param_1,param_2,param_3), param_1[0x11] == 0)) &&
        (*(char *)(iVar1 + 0x38) == '\0')))) {
      local_14 = FUN_00547860;
      local_18 = plasma::Shape::vfunction14;
      local_10 = param_1;
      FUN_00578760(&local_18,param_2);
    }
  }
  return;
}


/* FUN_005670f0 @ 005670f0  kind=lib  attributed-by=lib-island  size=139 */

void FUN_005670f0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int local_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  char local_54;
  undefined2 local_53;
  undefined1 local_50 [72];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_68 = local_50;
  local_58 = *(undefined4 *)(param_2 + 0x50);
  local_60 = 0;
  local_5c = 0x46;
  local_53 = 1;
  local_54 = '\0';
  local_6c = param_2;
  local_64 = local_68;
  FUN_0056aa30(&local_6c,1,param_3,&stack0x00000010);
  uVar1 = FUN_00567fb0(&local_6c);
  if (local_54 != '\0') {
    *(undefined1 *)(param_2 + 0x38) = 1;
  }
  FUN_005521a0(param_2,*param_1);
  *param_1 = uVar1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00567180 @ 00567180  kind=lib  attributed-by=lib-island  size=181 */

short * FUN_00567180(int param_1,short *param_2,int *param_3,int *param_4)

{
  int iVar1;
  short *psVar2;
  undefined4 uVar3;
  
  if (param_2 == (short *)0x0) {
    param_2 = (short *)FUN_00552230(param_1,0x50);
    if ((param_2 == (short *)0x0) || (memset(param_2,0,0x50), param_2 == (short *)0x0)) {
      return (short *)0x0;
    }
    param_2[1] = 1;
  }
  psVar2 = (short *)FUN_00567680(param_1,param_2,1,(int)*param_2);
  if (*(char *)(param_1 + 0x38) == '\0') {
    iVar1 = *psVar2 * 9 + -8;
    if ((param_4 == (int *)0x0) || (*param_4 == 0)) {
      param_4 = param_3;
      param_3 = (int *)0x0;
    }
    uVar3 = FUN_0055e3f0(param_1,param_4);
    *(undefined4 *)(psVar2 + iVar1 * 4 + 4) = uVar3;
    uVar3 = FUN_0055e3f0(param_1,param_3);
    *(undefined4 *)(psVar2 + iVar1 * 4 + 2) = uVar3;
    return psVar2;
  }
  FUN_00567370(param_1,psVar2);
  return (short *)0x0;
}


/* FUN_00567240 @ 00567240  kind=lib  attributed-by=lib-island  size=199 */

short * FUN_00567240(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                    int param_5,int param_6,int param_7,int param_8)

{
  short sVar1;
  char *pcVar2;
  short *psVar3;
  undefined4 uVar4;
  
  uVar4 = *param_1;
  if ((param_2 == 0) && ((param_7 != 0 || (param_8 != 0)))) {
    pcVar2 = "ON";
    if (param_7 == 0) {
      pcVar2 = "USING";
    }
    FUN_00553950(param_1,"a JOIN clause is required before %s",pcVar2);
  }
  else {
    psVar3 = (short *)FUN_00567180(uVar4,param_2,param_3,param_4);
    if ((psVar3 != (short *)0x0) && (sVar1 = *psVar3, sVar1 != 0)) {
      if (*(int *)(param_5 + 4) != 0) {
        uVar4 = FUN_0055e3f0(uVar4,param_5);
        *(undefined4 *)(psVar3 + sVar1 * 0x24 + -0x1a) = uVar4;
      }
      *(int *)(psVar3 + sVar1 * 0x24 + -0x16) = param_6;
      *(int *)(psVar3 + sVar1 * 0x24 + -8) = param_7;
      *(int *)(psVar3 + sVar1 * 0x24 + -6) = param_8;
      return psVar3;
    }
  }
  FUN_00555e30(uVar4,param_7);
  FUN_0055afc0(uVar4,param_8);
  if (param_6 != 0) {
    FUN_005303a0(uVar4,param_6);
    FUN_005521a0(uVar4,param_6);
  }
  return (short *)0x0;
}


/* FUN_00567310 @ 00567310  kind=lib  attributed-by=lib-island  size=84 */

void FUN_00567310(int param_1,short *param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_2 != (short *)0x0) && (iVar2 = 0, 0 < *param_2)) {
    piVar1 = (int *)(param_2 + 0xe);
    do {
      if (-1 < piVar1[6]) {
        return;
      }
      piVar1[6] = *(int *)(param_1 + 0x48);
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      if (*piVar1 != 0) {
        FUN_00567310(param_1,*(undefined4 *)(*piVar1 + 0x28));
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x12;
    } while (iVar2 < *param_2);
  }
  return;
}


/* FUN_00567370 @ 00567370  kind=lib  attributed-by=lib-island  size=170 */

void FUN_00567370(undefined4 param_1,short *param_2)

{
  int iVar1;
  short *psVar2;
  int local_8;
  
  if (param_2 != (short *)0x0) {
    local_8 = 0;
    if (0 < *param_2) {
      psVar2 = param_2 + 8;
      do {
        FUN_005521a0(param_1,*(undefined4 *)(psVar2 + -2));
        FUN_005521a0(param_1,*(undefined4 *)psVar2);
        FUN_005521a0(param_1,*(undefined4 *)(psVar2 + 2));
        FUN_005521a0(param_1,*(undefined4 *)(psVar2 + 0x1c));
        FUN_005529a0(param_1,*(undefined4 *)(psVar2 + 4));
        iVar1 = *(int *)(psVar2 + 6);
        if (iVar1 != 0) {
          FUN_005303a0(param_1,iVar1);
          FUN_005521a0(param_1,iVar1);
        }
        FUN_00555e30(param_1,*(undefined4 *)(psVar2 + 0x14));
        FUN_0055afc0(param_1,*(undefined4 *)(psVar2 + 0x16));
        local_8 = local_8 + 1;
        psVar2 = psVar2 + 0x24;
      } while (local_8 < *param_2);
    }
    FUN_005521a0(param_1,param_2);
  }
  return;
}


/* FUN_00567420 @ 00567420  kind=lib  attributed-by=lib-island  size=599 */

short * FUN_00567420(undefined4 param_1,short *param_2,undefined4 param_3)

{
  char cVar1;
  short sVar2;
  char *pcVar3;
  int iVar4;
  short *psVar5;
  void *pvVar6;
  char *pcVar7;
  size_t sVar8;
  undefined4 uVar9;
  short *psVar10;
  short *psVar11;
  int local_8;
  
  if (param_2 != (short *)0x0) {
    if (*param_2 < 1) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*param_2 + -1) * 0x48;
    }
    psVar5 = (short *)FUN_00552230(param_1,iVar4 + 0x50);
    if (psVar5 != (short *)0x0) {
      sVar2 = *param_2;
      psVar5[1] = sVar2;
      *psVar5 = sVar2;
      local_8 = 0;
      if (0 < *param_2) {
        psVar11 = param_2 + 0x14;
        psVar10 = psVar5 + 8;
        do {
          *(undefined4 *)(psVar10 + -4) = *(undefined4 *)(psVar11 + -0x10);
          pcVar3 = *(char **)(psVar11 + -0xe);
          if (pcVar3 == (char *)0x0) {
            pvVar6 = (void *)0x0;
          }
          else {
            cVar1 = *pcVar3;
            pcVar7 = pcVar3;
            while (cVar1 != '\0') {
              pcVar7 = pcVar7 + 1;
              cVar1 = *pcVar7;
            }
            sVar8 = ((int)pcVar7 - (int)pcVar3 & 0x3fffffffU) + 1;
            pvVar6 = (void *)FUN_00552230(param_1,sVar8);
            if (pvVar6 != (void *)0x0) {
              memcpy(pvVar6,pcVar3,sVar8);
            }
          }
          *(void **)(psVar10 + -2) = pvVar6;
          pcVar3 = *(char **)((int)psVar10 + ((int)param_2 - (int)psVar5));
          if (pcVar3 == (char *)0x0) {
            pvVar6 = (void *)0x0;
          }
          else {
            cVar1 = *pcVar3;
            pcVar7 = pcVar3;
            while (cVar1 != '\0') {
              pcVar7 = pcVar7 + 1;
              cVar1 = *pcVar7;
            }
            sVar8 = ((int)pcVar7 - (int)pcVar3 & 0x3fffffffU) + 1;
            pvVar6 = (void *)FUN_00552230(param_1,sVar8);
            if (pvVar6 != (void *)0x0) {
              memcpy(pvVar6,pcVar3,sVar8);
            }
          }
          *(void **)psVar10 = pvVar6;
          pcVar3 = *(char **)(psVar11 + -10);
          if (pcVar3 == (char *)0x0) {
            pvVar6 = (void *)0x0;
          }
          else {
            cVar1 = *pcVar3;
            pcVar7 = pcVar3;
            while (cVar1 != '\0') {
              pcVar7 = pcVar7 + 1;
              cVar1 = *pcVar7;
            }
            sVar8 = ((int)pcVar7 - (int)pcVar3 & 0x3fffffffU) + 1;
            pvVar6 = (void *)FUN_00552230(param_1,sVar8);
            if (pvVar6 != (void *)0x0) {
              memcpy(pvVar6,pcVar3,sVar8);
            }
          }
          *(void **)(psVar10 + 2) = pvVar6;
          *(char *)(psVar10 + 0xc) = (char)*psVar11;
          *(undefined4 *)(psVar10 + 0x12) = *(undefined4 *)(psVar11 + 6);
          *(undefined4 *)(psVar10 + 8) = *(undefined4 *)(psVar11 + -4);
          *(undefined4 *)(psVar10 + 10) = *(undefined4 *)(psVar11 + -2);
          *(uint *)(psVar10 + 0xe) =
               *(uint *)(psVar10 + 0xe) ^ (*(uint *)(psVar10 + 0xe) ^ *(uint *)(psVar11 + 2)) & 2;
          *(uint *)(psVar10 + 0xe) =
               *(uint *)(psVar10 + 0xe) ^ (*(uint *)(psVar11 + 2) ^ *(uint *)(psVar10 + 0xe)) & 4;
          pcVar3 = *(char **)(psVar11 + 0x10);
          if (pcVar3 == (char *)0x0) {
            pvVar6 = (void *)0x0;
          }
          else {
            cVar1 = *pcVar3;
            pcVar7 = pcVar3;
            while (cVar1 != '\0') {
              pcVar7 = pcVar7 + 1;
              cVar1 = *pcVar7;
            }
            sVar8 = ((int)pcVar7 - (int)pcVar3 & 0x3fffffffU) + 1;
            pvVar6 = (void *)FUN_00552230(param_1,sVar8);
            if (pvVar6 != (void *)0x0) {
              memcpy(pvVar6,pcVar3,sVar8);
            }
          }
          *(void **)(psVar10 + 0x1c) = pvVar6;
          *(uint *)(psVar10 + 0xe) =
               *(uint *)(psVar10 + 0xe) ^ (*(uint *)(psVar10 + 0xe) ^ *(uint *)(psVar11 + 2)) & 1;
          *(undefined4 *)(psVar10 + 0x1e) = *(undefined4 *)(psVar11 + 0x12);
          iVar4 = *(int *)(psVar11 + -8);
          *(int *)(psVar10 + 4) = iVar4;
          if (iVar4 != 0) {
            *(short *)(iVar4 + 0x28) = *(short *)(iVar4 + 0x28) + 1;
          }
          uVar9 = FUN_00566d40(param_1,*(undefined4 *)(psVar11 + -6),param_3);
          *(undefined4 *)(psVar10 + 6) = uVar9;
          uVar9 = FUN_00536250(param_1,*(undefined4 *)(psVar11 + 8),param_3,0);
          *(undefined4 *)(psVar10 + 0x14) = uVar9;
          uVar9 = FUN_0055b080(param_1,*(undefined4 *)(psVar11 + 10));
          *(undefined4 *)(psVar10 + 0x16) = uVar9;
          *(undefined4 *)(psVar10 + 0x18) = *(undefined4 *)(psVar11 + 0xc);
          *(undefined4 *)(psVar10 + 0x1a) = *(undefined4 *)(psVar11 + 0xe);
          local_8 = local_8 + 1;
          psVar10 = psVar10 + 0x24;
          psVar11 = psVar11 + 0x24;
        } while (local_8 < *param_2);
      }
      return psVar5;
    }
  }
  return (short *)0x0;
}


/* FUN_00567680 @ 00567680  kind=lib  attributed-by=lib-island  size=277 */

short * FUN_00567680(int param_1,short *param_2,int param_3,int param_4)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  
  if ((int)param_2[1] < *param_2 + param_3) {
    psVar1 = (short *)FUN_00552390(param_1,param_2,(*param_2 + param_3) * 0x48 + 8);
    if (psVar1 == (short *)0x0) {
      return param_2;
    }
    if (((param_1 == 0) || (psVar1 < *(short **)(param_1 + 0x104))) ||
       (*(short **)(param_1 + 0x108) <= psVar1)) {
      uVar2 = (*DAT_00766608._4_4_)(psVar1);
    }
    else {
      uVar2 = (uint)*(ushort *)(param_1 + 0xe8);
    }
    psVar1[1] = (short)((uVar2 - 0x50) / 0x48) + 1;
    param_2 = psVar1;
  }
  iVar3 = *param_2 + -1;
  if (param_4 <= iVar3) {
    iVar4 = (iVar3 - param_4) + 1;
    psVar1 = param_2 + ((iVar3 + param_3) * 9 + 1) * 4;
    psVar5 = param_2 + (iVar3 * 9 + 1) * 4;
    do {
      psVar6 = psVar5;
      psVar7 = psVar1;
      for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)psVar7 = *(undefined4 *)psVar6;
        psVar6 = psVar6 + 2;
        psVar7 = psVar7 + 2;
      }
      iVar4 = iVar4 + -1;
      psVar1 = psVar1 + -0x24;
      psVar5 = psVar5 + -0x24;
    } while (iVar4 != 0);
  }
  *param_2 = *param_2 + (short)param_3;
  memset(param_2 + param_4 * 0x24 + 4,0,param_3 * 0x48);
  if (param_4 < param_3 + param_4) {
    psVar1 = param_2 + param_4 * 0x24 + 0x1a;
    param_4 = (param_3 + param_4) - param_4;
    do {
      psVar1[0] = -1;
      psVar1[1] = -1;
      psVar1 = psVar1 + 0x24;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return param_2;
}


/* FUN_005677a0 @ 005677a0  kind=lib  attributed-by=lib-island  size=66 */

void FUN_005677a0(undefined4 *param_1,short *param_2,int *param_3)

{
  undefined4 uVar1;
  
  if ((param_2 != (short *)0x0) && (0 < *param_2)) {
    param_2 = param_2 + *param_2 * 0x24;
    if ((param_3[1] == 1) && (*param_3 == 0)) {
      *(uint *)(param_2 + -0xe) = *(uint *)(param_2 + -0xe) | 1;
      return;
    }
    uVar1 = FUN_0055e3f0(*param_1,param_3);
    *(undefined4 *)param_2 = uVar1;
  }
  return;
}


/* FUN_005677f0 @ 005677f0  kind=lib  attributed-by=lib-island  size=74 */

int FUN_005677f0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0055d7d0(param_1,0,param_2 + 8);
  FUN_005529a0(*param_1,*(undefined4 *)(param_2 + 0x18));
  *(int *)(param_2 + 0x18) = iVar1;
  if (iVar1 != 0) {
    *(short *)(iVar1 + 0x28) = *(short *)(iVar1 + 0x28) + 1;
  }
  iVar2 = FUN_0055b3c0(param_1,param_2 + 8);
  if (iVar2 != 0) {
    iVar1 = 0;
  }
  return iVar1;
}


/* FUN_00567840 @ 00567840  kind=lib  attributed-by=lib-island  size=52 */

void FUN_00567840(short *param_1)

{
  int iVar1;
  short *psVar2;
  
  if (param_1 != (short *)0x0) {
    iVar1 = *param_1 + -1;
    if (0 < iVar1) {
      psVar2 = param_1 + (iVar1 * 9 + 5) * 4;
      do {
        iVar1 = iVar1 + -1;
        *(char *)psVar2 = (char)psVar2[-0x24];
        psVar2 = psVar2 + -0x24;
      } while (0 < iVar1);
    }
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}


/* FUN_00567880 @ 00567880  kind=lib  attributed-by=lib-string  size=947 */

void FUN_00567880(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  char *pcVar12;
  int iVar13;
  byte *local_8;
  
  piVar2 = param_1;
  iVar13 = *param_1;
  iVar4 = FUN_00568810(param_1,param_2,param_3,&local_8);
  if (iVar4 < 0) {
    return;
  }
  if (param_4 != 0) {
    if ((*(int *)(param_3 + 4) != 0) && (iVar4 != 1)) {
      FUN_00553950(param_1,"temporary table name must be unqualified");
      return;
    }
    param_1 = (int *)0x1;
    iVar4 = (int)param_1;
  }
  param_1 = (int *)iVar4;
  piVar2[0x82] = *(int *)local_8;
  piVar2[0x83] = *(int *)(local_8 + 4);
  pbVar5 = (byte *)FUN_0055e3f0(iVar13,local_8);
  if (pbVar5 == (byte *)0x0) {
    return;
  }
  iVar4 = FUN_0054f8c0(piVar2,pbVar5);
  if (iVar4 == 0) {
    if (*(char *)(iVar13 + 0x80) == '\x01') {
      param_4 = 1;
    }
    iVar4 = (int)param_1 * 0x10;
    uVar10 = *(undefined4 *)(iVar4 + *(int *)(iVar13 + 0x10));
    pcVar12 = "sqlite_temp_master";
    if (param_4 != 1) {
      pcVar12 = "sqlite_master";
    }
    iVar6 = FUN_0054ab50(piVar2,0x12,pcVar12,0,uVar10);
    if (iVar6 == 0) {
      if (param_5 == 0) {
        cVar3 = (param_4 != 0) * '\x02' + '\x02';
      }
      else {
        cVar3 = (param_4 == 0) * '\x02' + '\x06';
      }
      if ((param_6 != 0) || (iVar6 = FUN_0054ab50(piVar2,cVar3,pbVar5,0,uVar10), iVar6 == 0)) {
        if (*(char *)((int)piVar2 + 0x1d5) != '\0') {
LAB_00567a37:
          puVar7 = (undefined4 *)FUN_005522c0(iVar13,0x48);
          if (puVar7 == (undefined4 *)0x0) {
            *(undefined1 *)(iVar13 + 0x38) = 1;
            piVar2[0x11] = piVar2[0x11] + 1;
            piVar2[3] = 7;
            FUN_005521a0(iVar13,pbVar5);
            return;
          }
          *(undefined2 *)(puVar7 + 9) = 0xffff;
          *puVar7 = pbVar5;
          puVar7[0x10] = *(undefined4 *)(iVar4 + 0xc + *(int *)(iVar13 + 0x10));
          *(undefined2 *)(puVar7 + 10) = 1;
          puVar7[7] = 1000000;
          piVar2[0x7f] = (int)puVar7;
          if (*(char *)((int)piVar2 + 0x12) == '\0') {
            pcVar12 = "sqlite_sequence";
            do {
              bVar1 = *pbVar5;
              bVar11 = bVar1 < (byte)*pcVar12;
              if (bVar1 != *pcVar12) {
LAB_00567ac0:
                uVar8 = -(uint)bVar11 | 1;
                goto LAB_00567ac5;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar5[1];
              bVar11 = bVar1 < (byte)pcVar12[1];
              if (bVar1 != pcVar12[1]) goto LAB_00567ac0;
              pbVar5 = pbVar5 + 2;
              pcVar12 = pcVar12 + 2;
            } while (bVar1 != 0);
            uVar8 = 0;
LAB_00567ac5:
            if (uVar8 == 0) {
              *(undefined4 **)(puVar7[0x10] + 0x48) = puVar7;
            }
          }
          if (*(char *)(iVar13 + 0x81) != '\0') {
            return;
          }
          iVar4 = FUN_0055ab80(piVar2);
          if (iVar4 == 0) {
            return;
          }
          FUN_0054bc80(piVar2,0,param_1);
          if (param_6 != 0) {
            FUN_0056bdc0(iVar4,0x84);
          }
          iVar6 = piVar2[0x13];
          iVar9 = iVar6 + 1;
          piVar2[100] = iVar9;
          local_8 = (byte *)(iVar6 + 2);
          piVar2[0x65] = (int)local_8;
          piVar2[0x13] = iVar6 + 3;
          FUN_0056bef0(iVar4,0x24,param_1,iVar6 + 3,2);
          FUN_00576ba0(iVar4,param_1);
          uVar10 = FUN_0056be30(iVar4,0x1b,local_8 + 1);
          FUN_0056be90(iVar4,7,(-(uint)((*(uint *)(iVar13 + 0x18) & 0x1000) != 0) & 0xfffffffd) + 4,
                       local_8 + 1);
          FUN_0056bef0(iVar4,0x25,param_1,2,local_8 + 1);
          FUN_0056be90(iVar4,7,*(undefined1 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0xc) + 0x4d),
                       local_8 + 1);
          FUN_0056bef0(iVar4,0x25,param_1,5,local_8 + 1);
          FUN_00573d80(iVar4,uVar10);
          if ((param_5 == 0) && (param_6 == 0)) {
            uVar10 = 0x69;
            iVar13 = (int)param_1;
          }
          else {
            iVar13 = 0;
            uVar10 = 7;
          }
          FUN_0056be90(iVar4,uVar10,iVar13,local_8);
          FUN_0055e4f0(piVar2,param_1);
          FUN_0056be90(iVar4,0x38,0,iVar9);
          FUN_0056be90(iVar4,10,0,iVar6 + 3);
          FUN_0056bef0(iVar4,0x39,0,iVar6 + 3,iVar9);
          FUN_0056c490(iVar4,8);
          FUN_0056bdc0(iVar4,0x2d);
          return;
        }
        uVar10 = *(undefined4 *)(iVar4 + *(int *)(iVar13 + 0x10));
        iVar6 = FUN_005637c0(piVar2);
        if (iVar6 == 0) {
          iVar6 = FUN_005572d0(iVar13,pbVar5,uVar10);
          if (iVar6 == 0) {
            iVar6 = FUN_00557190(iVar13,pbVar5,uVar10);
            if (iVar6 == 0) goto LAB_00567a37;
            pcVar12 = "there is already an index named %s";
            local_8 = pbVar5;
          }
          else {
            if (param_7 != 0) {
              FUN_00550aa0(piVar2,param_1);
              FUN_005521a0(iVar13,pbVar5);
              return;
            }
            pcVar12 = "table %T already exists";
          }
          FUN_00553950(piVar2,pcVar12,local_8);
        }
      }
    }
  }
  FUN_005521a0(iVar13,pbVar5);
  return;
}


/* FUN_00567c40 @ 00567c40  kind=lib  attributed-by=lib-island  size=41 */

void FUN_00567c40(int param_1,int param_2)

{
  (&DAT_0076b360)[param_1] = (&DAT_0076b360)[param_1] + param_2;
  if ((int)(&DAT_0076b388)[param_1] < (int)(&DAT_0076b360)[param_1]) {
    (&DAT_0076b388)[param_1] = (&DAT_0076b360)[param_1];
  }
  return;
}


/* FUN_00567c70 @ 00567c70  kind=lib  attributed-by=lib-island  size=34 */

void FUN_00567c70(int param_1,int param_2)

{
  (&DAT_0076b360)[param_1] = param_2;
  if ((int)(&DAT_0076b388)[param_1] < param_2) {
    (&DAT_0076b388)[param_1] = param_2;
  }
  return;
}


/* FUN_00567ca0 @ 00567ca0  kind=lib  attributed-by=lib-island  size=457 */

uint FUN_00567ca0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint local_c;
  int local_8;
  
  if (param_1[0xc] != -0x420df25d) {
    FUN_005280f0(param_1);
  }
  puVar1 = (undefined4 *)*param_1;
  if (*(char *)(puVar1 + 0xe) == '\0') {
    if ((param_1[0x15] < 1) && ((*(byte *)(param_1 + 0x18) & 0x20) != 0)) {
      param_1[0x16] = 0x11;
      uVar5 = 1;
    }
    else {
      if (param_1[0x15] < 0) {
        if (puVar1[0x21] == 0) {
          puVar1[0x38] = 0;
        }
        if ((puVar1[0x28] != 0) && (*(char *)((int)puVar1 + 0x81) == '\0')) {
          FUN_0055e930(*puVar1,param_1 + 0x20);
        }
        puVar1[0x21] = puVar1[0x21] + 1;
        if ((param_1[0x18] & 0x100U) == 0) {
          puVar1[0x22] = puVar1[0x22] + 1;
        }
        param_1[0x15] = 0;
      }
      if ((*(byte *)(param_1 + 0x18) & 3) == 0) {
        puVar1[0x23] = puVar1[0x23] + 1;
        uVar5 = FUN_0056c9c0(param_1);
        puVar1[0x23] = puVar1[0x23] + -1;
      }
      else {
        uVar5 = FUN_00573e30();
      }
      if ((((uVar5 != 100) && (puVar1[0x28] != 0)) && (*(char *)((int)puVar1 + 0x81) == '\0')) &&
         (param_1[0x26] != 0)) {
        FUN_0055e930(*puVar1,&local_c);
        uVar6 = __allmul(local_c - param_1[0x20],
                         (local_8 - param_1[0x21]) - (uint)(local_c < (uint)param_1[0x20]),1000000,0
                        );
        (*(code *)puVar1[0x28])(puVar1[0x29],param_1[0x26],uVar6);
      }
      if (uVar5 == 0x65) {
        iVar2 = FUN_00534680(puVar1);
        param_1[0x16] = iVar2;
        if (iVar2 != 0) {
          uVar5 = 1;
        }
      }
      puVar1[0xb] = uVar5;
      iVar2 = *param_1;
      uVar4 = param_1[0x16];
      if (iVar2 == 0) {
        uVar3 = 0xff;
      }
      else {
        if ((*(char *)(iVar2 + 0x38) != '\0') || (uVar4 == 0xc0a)) {
          FUN_00553890(iVar2,7,0);
          *(undefined1 *)(iVar2 + 0x38) = 0;
          uVar4 = 7;
        }
        uVar3 = *(uint *)(iVar2 + 0x30);
      }
      if ((uVar3 & uVar4) == 7) {
        param_1[0x16] = 7;
      }
    }
    if ((((param_1[0x18] & 0x200U) != 0) && (uVar5 != 100)) && (uVar5 != 0x65)) {
      uVar5 = FUN_00576a80(param_1);
    }
    return puVar1[0xc] & uVar5;
  }
  param_1[0x16] = 7;
  return 7;
}


/* FUN_00567e70 @ 00567e70  kind=lib  attributed-by=lib-island  size=313 */

void FUN_00567e70(undefined4 *param_1,char *param_2,size_t param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  void *_Dst;
  int iVar6;
  int iVar7;
  char *pcVar8;
  
  if (*(char *)(param_1 + 6) == '\0' && *(char *)((int)param_1 + 0x1a) == '\0') {
    if ((int)param_3 < 0) {
      if (param_2 == (char *)0x0) {
        return;
      }
      cVar3 = *param_2;
      pcVar8 = param_2;
      while (cVar3 != '\0') {
        pcVar8 = pcVar8 + 1;
        cVar3 = *pcVar8;
      }
      param_3 = (int)pcVar8 - (int)param_2 & 0x3fffffff;
    }
    if (param_3 == 0) {
      return;
    }
    if (param_2 == (char *)0x0) {
      return;
    }
    if ((int)param_1[4] <= (int)(param_1[3] + param_3)) {
      if (*(char *)((int)param_1 + 0x19) == '\0') {
        param_3 = (param_1[4] - param_1[3]) - 1;
        *(undefined1 *)((int)param_1 + 0x1a) = 1;
        if ((int)param_3 < 1) {
          return;
        }
      }
      else {
        iVar5 = param_1[2];
        if (iVar5 == param_1[1]) {
          iVar5 = 0;
        }
        uVar1 = param_3 + 1;
        uVar4 = param_1[3];
        uVar2 = uVar1 + uVar4;
        iVar6 = ((int)uVar1 >> 0x1f) + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar1,uVar4);
        iVar7 = (int)param_1[5] >> 0x1f;
        if ((iVar7 <= iVar6) && ((iVar7 < iVar6 || ((uint)param_1[5] < uVar2)))) {
          FUN_00568030(param_1);
          *(undefined1 *)((int)param_1 + 0x1a) = 1;
          return;
        }
        param_1[4] = uVar2;
        if (*(char *)((int)param_1 + 0x19) == '\x01') {
          _Dst = (void *)FUN_00552390(*param_1,iVar5,uVar2);
        }
        else {
          iVar6 = FUN_00579f80();
          if (iVar6 != 0) goto LAB_00567f95;
          _Dst = (void *)FUN_00563800(iVar5,uVar2);
        }
        if (_Dst == (void *)0x0) {
LAB_00567f95:
          *(undefined1 *)(param_1 + 6) = 1;
          FUN_00568030(param_1);
          return;
        }
        if ((iVar5 == 0) && (0 < (int)param_1[3])) {
          memcpy(_Dst,(void *)param_1[2],param_1[3]);
        }
        param_1[2] = _Dst;
      }
    }
    memcpy((void *)(param_1[2] + param_1[3]),param_2,param_3);
    param_1[3] = param_1[3] + param_3;
  }
  return;
}


/* FUN_00567fb0 @ 00567fb0  kind=lib  attributed-by=lib-island  size=127 */

int FUN_00567fb0(undefined4 *param_1)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  
  if (param_1[2] != 0) {
    *(undefined1 *)(param_1[2] + param_1[3]) = 0;
    iVar1 = param_1[2];
    if (*(char *)((int)param_1 + 0x19) == '\0') {
      return iVar1;
    }
    if (iVar1 != param_1[1]) {
      return iVar1;
    }
    if (*(char *)((int)param_1 + 0x19) == '\x01') {
      _Dst = (void *)FUN_00552230(*param_1,param_1[3] + 1);
    }
    else {
      iVar1 = param_1[3];
      iVar2 = FUN_00579f80();
      if (iVar2 == 0) {
        _Dst = (void *)FUN_0055da00(iVar1 + 1);
      }
      else {
        _Dst = (void *)0x0;
      }
    }
    param_1[2] = _Dst;
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,(void *)param_1[1],param_1[3] + 1);
      return param_1[2];
    }
    *(undefined1 *)(param_1 + 6) = 1;
  }
  return 0;
}


/* FUN_00568030 @ 00568030  kind=lib  attributed-by=lib-island  size=60 */

void FUN_00568030(undefined4 *param_1)

{
  if (param_1[2] != param_1[1]) {
    if (*(char *)((int)param_1 + 0x19) == '\x01') {
      FUN_005521a0(*param_1);
      param_1[2] = 0;
      return;
    }
    FUN_00524410(param_1[2]);
  }
  param_1[2] = 0;
  return;
}


/* FUN_00568070 @ 00568070  kind=lib  attributed-by=lib-island  size=34 */

uint FUN_00568070(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 != (char *)0x0) {
    cVar1 = *param_1;
    pcVar2 = param_1;
    while (cVar1 != '\0') {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
    }
    return (int)pcVar2 - (int)param_1 & 0x3fffffff;
  }
  return 0;
}


/* FUN_005680a0 @ 005680a0  kind=lib  attributed-by=lib-island  size=85 */

undefined4 FUN_005680a0(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) && (param_3 == -0x80000000)) {
    if ((int)param_1[1] < 0) {
      *param_1 = *param_1;
      param_1[1] = param_1[1] + -0x80000000;
      return 0;
    }
    return 1;
  }
  uVar1 = FUN_00549380(param_1,-param_2,-(param_3 + (uint)(param_2 != 0)));
  return uVar1;
}


/* FUN_00568100 @ 00568100  kind=lib  attributed-by=lib-island  size=217 */

void FUN_00568100(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_2 + 0x14) == 0) {
    iVar5 = *param_1;
    iVar1 = FUN_0055da00(*(short *)(param_2 + 0x26) + 1);
    if (iVar1 == 0) {
      *(undefined1 *)(iVar5 + 0x38) = 1;
      return;
    }
    if (0 < *(short *)(param_2 + 0x26)) {
      iVar5 = 0;
      iVar3 = 0;
      do {
        iVar4 = iVar3 + 1;
        *(undefined1 *)(iVar3 + iVar1) = *(undefined1 *)(iVar5 + 0x15 + *(int *)(param_2 + 4));
        iVar5 = iVar5 + 0x18;
        iVar3 = iVar4;
      } while (iVar4 < *(short *)(param_2 + 0x26));
    }
    *(undefined1 *)(*(short *)(param_2 + 0x26) + iVar1) = 0;
    *(int *)(param_2 + 0x14) = iVar1;
  }
  iVar5 = param_1[1];
  iVar1 = *(int *)(param_2 + 0x14);
  iVar3 = *param_1;
  if ((iVar5 != 0) && (*(char *)(iVar3 + 0x38) == '\0')) {
    iVar4 = iVar5 + (param_1[7] + -1) * 0x14;
    FUN_00539320(iVar3,(int)*(char *)(iVar4 + 1),
                 *(undefined4 *)(iVar5 + 0x10 + (param_1[7] + -1) * 0x14));
    *(undefined4 *)(iVar4 + 0x10) = 0;
    if (iVar1 == 0) {
      *(undefined4 *)(iVar4 + 0x10) = 0;
      *(undefined1 *)(iVar4 + 1) = 0;
      return;
    }
    uVar2 = FUN_00568070(iVar1);
    uVar2 = FUN_005524a0(*param_1,iVar1,uVar2);
    *(undefined4 *)(iVar4 + 0x10) = uVar2;
    *(undefined1 *)(iVar4 + 1) = 0xff;
    return;
  }
  FUN_00539320(iVar3,0,iVar1);
  return;
}


/* FUN_005681e0 @ 005681e0  kind=lib  attributed-by=lib-island  size=238 */

void FUN_005681e0(int *param_1,int param_2,int param_3,char param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if ((int *)param_1[0x6c] != (int *)0x0) {
    param_1 = (int *)param_1[0x6c];
  }
  iVar3 = 0;
  iVar2 = param_1[0x69];
  if (0 < iVar2) {
    piVar4 = (int *)param_1[0x6a];
    do {
      if ((*piVar4 == param_2) && (piVar4[1] == param_3)) {
        if (((char)piVar4[2] == '\0') && (param_4 == '\0')) {
          *(undefined1 *)(piVar4 + 2) = 0;
          return;
        }
        *(undefined1 *)(piVar4 + 2) = 1;
        return;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 4;
    } while (iVar3 < iVar2);
  }
  iVar3 = param_1[0x6a];
  iVar1 = *param_1;
  iVar2 = FUN_00552390(iVar1,iVar3,(iVar2 + 1) * 0x10);
  if (iVar2 == 0) {
    FUN_005521a0(iVar1,iVar3);
  }
  param_1[0x6a] = iVar2;
  if (iVar2 != 0) {
    piVar4 = (int *)(param_1[0x69] * 0x10 + iVar2);
    param_1[0x69] = param_1[0x69] + 1;
    piVar4[1] = param_3;
    *(char *)(piVar4 + 2) = param_4;
    *piVar4 = param_2;
    piVar4[3] = param_5;
    return;
  }
  param_1[0x69] = 0;
  *(undefined1 *)(*param_1 + 0x38) = 1;
  return;
}


/* FUN_005682d0 @ 005682d0  kind=lib  attributed-by=lib-island  size=329 */

undefined4 FUN_005682d0(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int local_8;
  
  if (*(int *)(*param_2 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(*param_2 + 0xc));
  }
  local_8 = 0;
  if (0 < *(short *)(param_1 + 0x4c)) {
    iVar2 = 0;
    do {
      uVar1 = *(ushort *)(param_2[0x11] + 0x1c + iVar2);
      puVar3 = (undefined8 *)(param_2[0x11] + iVar2);
      puVar4 = (undefined8 *)(*(int *)(param_1 + 0x44) + iVar2);
      if ((uVar1 & 0x2460) != 0) {
        if ((uVar1 & 0x2000) == 0) {
          if (((uVar1 & 0x400) == 0) || (*(code **)(puVar3 + 4) == (code *)0x0)) {
            if ((uVar1 & 0x20) == 0) {
              if ((uVar1 & 0x40) != 0) {
                FUN_00574f20(puVar3);
              }
            }
            else {
              FUN_005644e0(*(undefined4 *)(puVar3 + 2));
            }
          }
          else {
            (**(code **)(puVar3 + 4))(*(undefined4 *)((int)puVar3 + 4));
            *(undefined4 *)(puVar3 + 4) = 0;
          }
        }
        else {
          FUN_00574670(puVar3,*(undefined4 *)(puVar3 + 2));
          FUN_00574d40(puVar3);
        }
      }
      FUN_005521a0(*(undefined4 *)puVar3,*(undefined4 *)((int)puVar3 + 0x24));
      *(undefined4 *)((int)puVar3 + 4) = 0;
      *(undefined4 *)((int)puVar3 + 0x24) = 0;
      *(undefined4 *)(puVar3 + 4) = 0;
      *puVar3 = *puVar4;
      puVar3[1] = puVar4[1];
      puVar3[2] = puVar4[2];
      puVar3[3] = puVar4[3];
      puVar3[4] = puVar4[4];
      *(undefined2 *)((int)puVar4 + 0x1c) = 1;
      *(undefined4 *)(puVar4 + 4) = 0;
      *(undefined4 *)((int)puVar4 + 0x24) = 0;
      local_8 = local_8 + 1;
      iVar2 = iVar2 + 0x28;
    } while (local_8 < *(short *)(param_1 + 0x4c));
  }
  if (*(int *)(*param_2 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(*param_2 + 0xc));
  }
  return 0;
}


/* FUN_00568420 @ 00568420  kind=lib  attributed-by=lib-island  size=186 */

uint FUN_00568420(undefined4 param_1,int param_2,int *param_3,int param_4,byte param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint local_8;
  
  local_8 = 0;
  if (param_2 == 0) {
    return 0;
  }
  do {
    if ((*(char *)(param_2 + 8) == (char)((param_3 != (int *)0x0) + 'j')) &&
       ((*(byte *)(param_2 + 9) & param_5) != 0)) {
      iVar1 = *(int *)(param_2 + 0x10);
      if ((iVar1 == 0) || (param_3 == (int *)0x0)) {
LAB_00568499:
        iVar1 = FUN_0053ad90(param_1,param_2,param_6,param_7);
        if (iVar1 != 0) {
          local_8 = local_8 | *(uint *)(iVar1 + 0x10 + param_4 * 4);
        }
      }
      else {
        iVar3 = 0;
        if (0 < *param_3) {
          puVar2 = (undefined4 *)(param_3[2] + 4);
          do {
            iVar1 = FUN_0055b160(iVar1,*puVar2);
            if (-1 < iVar1) goto LAB_00568499;
            iVar1 = *(int *)(param_2 + 0x10);
            iVar3 = iVar3 + 1;
            puVar2 = puVar2 + 5;
          } while (iVar3 < *param_3);
        }
      }
    }
    param_2 = *(int *)(param_2 + 0x20);
    if (param_2 == 0) {
      return local_8;
    }
  } while( true );
}


/* FUN_005684e0 @ 005684e0  kind=lib  attributed-by=lib-island  size=117 */

undefined1 * FUN_005684e0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *_Dst;
  undefined4 uVar2;
  
  iVar1 = param_2[1];
  _Dst = (undefined1 *)FUN_00552230(param_1,iVar1 + 0x28U);
  if (_Dst != (undefined1 *)0x0) {
    memset(_Dst,0,iVar1 + 0x28U);
    memcpy(_Dst + 0x28,(void *)*param_2,param_2[1]);
    *(undefined1 **)(_Dst + 0xc) = _Dst + 0x28;
    *(undefined4 *)(_Dst + 0x10) = param_2[1];
    *_Dst = 0x6a;
    uVar2 = FUN_00536250(param_1,param_3,1,0);
    *(undefined4 *)(_Dst + 0x14) = uVar2;
    _Dst[1] = 99;
  }
  FUN_00555e30(param_1,param_3);
  return _Dst;
}


/* FUN_00568560 @ 00568560  kind=lib  attributed-by=lib-island  size=184 */

undefined1 *
FUN_00568560(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            int param_5,undefined1 param_6)

{
  int iVar1;
  undefined1 *_Dst;
  undefined4 uVar2;
  
  iVar1 = param_2[1];
  _Dst = (undefined1 *)FUN_00552230(param_1,iVar1 + 0x28U);
  if (_Dst == (undefined1 *)0x0) {
    FUN_0055afc0(param_1,param_3);
  }
  else {
    memset(_Dst,0,iVar1 + 0x28U);
    memcpy(_Dst + 0x28,(void *)*param_2,param_2[1]);
    *(undefined1 **)(_Dst + 0xc) = _Dst + 0x28;
    *(undefined4 *)(_Dst + 0x10) = param_2[1];
    *_Dst = 0x69;
    uVar2 = FUN_00566d40(param_1,param_5,1);
    *(undefined4 *)(_Dst + 8) = uVar2;
    *(undefined4 *)(_Dst + 0x1c) = param_3;
    uVar2 = FUN_005567e0(param_1,param_4,1);
    *(undefined4 *)(_Dst + 0x18) = uVar2;
    _Dst[1] = param_6;
  }
  FUN_00556700(param_1,param_4);
  if (param_5 != 0) {
    FUN_005303a0(param_1,param_5);
    FUN_005521a0(param_1,param_5);
  }
  return _Dst;
}


/* FUN_00568620 @ 00568620  kind=lib  attributed-by=lib-island  size=112 */

int FUN_00568620(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  iVar1 = *(int *)(*(int *)(*param_1 + 0x10) + 0x1c);
  if (*(char *)((int)param_1 + 0x1ca) != '\0') {
    return 0;
  }
  if ((iVar1 != param_2[0x10]) && (piVar4 = *(int **)(iVar1 + 0x30), piVar4 != (int *)0x0)) {
    do {
      iVar1 = piVar4[2];
      if ((*(int *)(iVar1 + 0x18) == param_2[0x10]) &&
         (iVar2 = FUN_0057a2c0(*(undefined4 *)(iVar1 + 4),*param_2), iVar2 == 0)) {
        if (iVar3 == 0) {
          iVar3 = param_2[0xf];
        }
        *(int *)(iVar1 + 0x20) = iVar3;
        iVar3 = iVar1;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)0x0);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  return param_2[0xf];
}


/* FUN_00568690 @ 00568690  kind=lib  attributed-by=lib-island  size=98 */

undefined8 * FUN_00568690(undefined4 param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00552230(param_1,0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(int *)(puVar1 + 1) = param_2;
    *(undefined2 *)puVar1 = 0x6374;
    return puVar1;
  }
  if (param_2 != 0) {
    FUN_005303a0(param_1,param_2);
    FUN_005521a0(param_1,param_2);
  }
  return (undefined8 *)0x0;
}


/* FUN_00568700 @ 00568700  kind=lib  attributed-by=lib-island  size=146 */

undefined1 *
FUN_00568700(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5)

{
  int iVar1;
  undefined1 *_Dst;
  undefined4 uVar2;
  
  iVar1 = param_2[1];
  _Dst = (undefined1 *)FUN_00552230(param_1,iVar1 + 0x28U);
  if (_Dst != (undefined1 *)0x0) {
    memset(_Dst,0,iVar1 + 0x28U);
    memcpy(_Dst + 0x28,(void *)*param_2,param_2[1]);
    *(undefined1 **)(_Dst + 0xc) = _Dst + 0x28;
    *(undefined4 *)(_Dst + 0x10) = param_2[1];
    *_Dst = 0x6b;
    uVar2 = FUN_005567e0(param_1,param_3,1);
    *(undefined4 *)(_Dst + 0x18) = uVar2;
    uVar2 = FUN_00536250(param_1,param_4,1,0);
    *(undefined4 *)(_Dst + 0x14) = uVar2;
    _Dst[1] = param_5;
  }
  FUN_00556700(param_1,param_3);
  FUN_00555e30(param_1,param_4);
  return _Dst;
}


/* FUN_005687a0 @ 005687a0  kind=lib  attributed-by=lib-island  size=109 */

int FUN_005687a0(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar2 = 0;
  iVar3 = iVar2;
  if ((*(uint *)(*param_1 + 0x18) & 0x400000) != 0) {
    iVar2 = FUN_00568620(param_1,param_2);
    iVar3 = iVar2;
  }
  for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
    if ((*(byte *)(iVar2 + 8) == param_3) &&
       (iVar1 = FUN_0052f320(*(undefined4 *)(iVar2 + 0x10),param_4), iVar1 != 0)) {
      uVar4 = uVar4 | *(byte *)(iVar2 + 9);
    }
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar4;
  }
  iVar2 = 0;
  if (uVar4 != 0) {
    iVar2 = iVar3;
  }
  return iVar2;
}


/* FUN_00568810 @ 00568810  kind=lib  attributed-by=lib-island  size=147 */

uint FUN_00568810(int *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  if ((param_3 == 0) || (*(int *)(param_3 + 4) == 0)) {
    uVar3 = (uint)*(byte *)(iVar1 + 0x80);
    *param_4 = param_2;
  }
  else {
    if (*(char *)(iVar1 + 0x81) != '\0') {
      FUN_00553950(param_1,"corrupt database");
      param_1[0x11] = param_1[0x11] + 1;
      return 0xffffffff;
    }
    *param_4 = param_3;
    uVar2 = FUN_0055e3f0(iVar1,param_2);
    uVar3 = FUN_00556be0(iVar1,uVar2);
    FUN_005521a0(iVar1,uVar2);
    if ((int)uVar3 < 0) {
      FUN_00553950(param_1,"unknown database %T",param_2);
      param_1[0x11] = param_1[0x11] + 1;
      return 0xffffffff;
    }
  }
  return uVar3;
}


/* FUN_005688b0 @ 005688b0  kind=lib  attributed-by=lib-island  size=210 */

void FUN_005688b0(int param_1,uint param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  
  puVar5 = (uint *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc + param_2 * 0x10) + 0x18);
  uVar8 = 0;
  if (param_3 != (char *)0x0) {
    cVar1 = *param_3;
    pcVar7 = param_3;
    while (cVar1 != '\0') {
      pcVar7 = pcVar7 + 1;
      cVar1 = *pcVar7;
    }
    uVar8 = (int)pcVar7 - (int)param_3 & 0x3fffffff;
  }
  uVar2 = *puVar5;
  if (uVar2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = FUN_0057a870(param_3,uVar8);
    param_2 = param_2 % uVar2;
  }
  iVar6 = FUN_00537190(puVar5,param_3,uVar8,param_2);
  if (iVar6 != 0) {
    iVar3 = *(int *)(iVar6 + 8);
    FUN_00545b50(puVar5,iVar6,param_2);
    if (iVar3 != 0) {
      iVar6 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
      if (iVar6 == iVar3) {
        *(undefined4 *)(*(int *)(iVar3 + 0xc) + 8) = *(undefined4 *)(iVar3 + 0x14);
      }
      else {
        do {
          iVar4 = iVar6;
          if (iVar4 == 0) goto LAB_00568966;
          iVar6 = *(int *)(iVar4 + 0x14);
        } while (*(int *)(iVar4 + 0x14) != iVar3);
        *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(iVar3 + 0x14);
      }
LAB_00568966:
      FUN_005521a0(param_1,*(undefined4 *)(iVar3 + 0x10));
      FUN_005521a0(param_1,iVar3);
    }
  }
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 2;
  return;
}


/* FUN_00568990 @ 00568990  kind=lib  attributed-by=lib-island  size=168 */

void FUN_00568990(int param_1,uint param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (param_3 != (char *)0x0) {
    cVar1 = *param_3;
    pcVar6 = param_3;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
    uVar7 = (int)pcVar6 - (int)param_3 & 0x3fffffff;
  }
  puVar4 = (uint *)(*(int *)(param_2 * 0x10 + *(int *)(param_1 + 0x10) + 0xc) + 8);
  uVar2 = *puVar4;
  if (uVar2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = FUN_0057a870(param_3,uVar7);
    param_2 = param_2 % uVar2;
  }
  iVar5 = FUN_00537190(puVar4,param_3,uVar7,param_2);
  if (iVar5 == 0) {
    FUN_005529a0(param_1,0);
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 2;
    return;
  }
  uVar3 = *(undefined4 *)(iVar5 + 8);
  FUN_00545b50(puVar4,iVar5,param_2);
  FUN_005529a0(param_1,uVar3);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 2;
  return;
}


/* FUN_00568a40 @ 00568a40  kind=lib  attributed-by=lib-island  size=244 */

void FUN_00568a40(int param_1,uint param_2,char *param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  
  puVar6 = (uint *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc + param_2 * 0x10) + 0x28);
  uVar9 = 0;
  if (param_3 != (char *)0x0) {
    cVar2 = *param_3;
    pcVar8 = param_3;
    while (cVar2 != '\0') {
      pcVar8 = pcVar8 + 1;
      cVar2 = *pcVar8;
    }
    uVar9 = (int)pcVar8 - (int)param_3 & 0x3fffffff;
  }
  uVar3 = *puVar6;
  if (uVar3 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = FUN_0057a870(param_3,uVar9);
    param_2 = param_2 % uVar3;
  }
  iVar7 = FUN_00537190(puVar6,param_3,uVar9,param_2);
  if (iVar7 != 0) {
    puVar4 = *(undefined4 **)(iVar7 + 8);
    FUN_00545b50(puVar6,iVar7,param_2);
    if (puVar4 != (undefined4 *)0x0) {
      if (puVar4[5] == puVar4[6]) {
        iVar7 = FUN_0057b020(puVar4);
        piVar1 = (int *)(iVar7 + 0x3c);
        puVar5 = (undefined4 *)*piVar1;
        while (puVar5 != puVar4) {
          piVar1 = puVar5 + 8;
          puVar5 = (undefined4 *)*piVar1;
        }
        *piVar1 = *(int *)(*piVar1 + 0x20);
      }
      FUN_00552b20(param_1,puVar4[7]);
      FUN_005521a0(param_1,*puVar4);
      FUN_005521a0(param_1,puVar4[1]);
      FUN_00555e30(param_1,puVar4[3]);
      FUN_0055afc0(param_1,puVar4[4]);
      FUN_005521a0(param_1,puVar4);
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 2;
    }
  }
  return;
}


/* FUN_00568b40 @ 00568b40  kind=lib  attributed-by=lib-string  size=7341 */

/* WARNING: Removing unreachable block (ram,0x0056a639) */
/* WARNING: Removing unreachable block (ram,0x0056a644) */
/* WARNING: Removing unreachable block (ram,0x0056a65f) */
/* WARNING: Removing unreachable block (ram,0x0056a666) */
/* WARNING: Removing unreachable block (ram,0x0056a67e) */
/* WARNING: Removing unreachable block (ram,0x0056a68f) */
/* WARNING: Removing unreachable block (ram,0x0056a693) */
/* WARNING: Removing unreachable block (ram,0x0056a6ad) */
/* WARNING: Removing unreachable block (ram,0x0056a6b8) */
/* WARNING: Removing unreachable block (ram,0x0056a682) */
/* WARNING: Removing unreachable block (ram,0x0056a66d) */
/* WARNING: Removing unreachable block (ram,0x0056a64b) */
/* WARNING: Removing unreachable block (ram,0x0056a6d0) */

void FUN_00568b40(int *param_1,int param_2,int *param_3,undefined4 param_4,int param_5)

{
  byte *pbVar1;
  undefined2 *puVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  char *pcVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  undefined4 *puVar19;
  byte *pbVar20;
  uint *puVar21;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  int local_6c;
  uint local_68;
  int local_64;
  char *local_60;
  int local_5c;
  byte *local_58;
  undefined4 *local_54;
  uint local_50;
  uint *local_4c;
  int local_48;
  int local_44;
  int *local_40;
  int local_3c;
  int local_38;
  uint *local_34;
  int *local_30;
  uint *local_2c;
  uint *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint *local_c;
  int *local_8;
  
  local_1c = *param_1;
  local_40 = (int *)0x0;
  local_14 = 0;
  local_60 = (char *)0x0;
  local_44 = 0;
  local_64 = 0;
  local_58 = (byte *)0x0;
  local_74 = 0;
  if ((param_1[0x11] != 0) || (*(char *)(local_1c + 0x38) != '\0')) {
    local_6c = param_2;
    iVar15 = local_14;
    goto LAB_0056a7bd;
  }
  local_6c = param_2;
  piVar9 = (int *)FUN_005677f0(param_1,param_2);
  iVar15 = local_14;
  local_8 = piVar9;
  if (piVar9 == (int *)0x0) goto LAB_0056a7bd;
  local_24 = FUN_00565260(*param_1,piVar9[0x10]);
  local_48 = FUN_005687a0(param_1,piVar9,0x6b,param_3,&local_68);
  local_50 = (uint)(piVar9[3] != 0);
  iVar10 = FUN_00576bd0(param_1,piVar9);
  iVar15 = local_14;
  if (((iVar10 != 0) ||
      (iVar10 = FUN_0055cf00(param_1,piVar9,local_68), iVar15 = local_14, iVar10 != 0)) ||
     (local_14 = FUN_00552230(local_1c,(int)*(short *)((int)piVar9 + 0x26) << 2), iVar15 = local_14,
     local_14 == 0)) goto LAB_0056a7bd;
  iVar15 = 0;
  if (0 < *(short *)((int)piVar9 + 0x26)) {
    do {
      *(undefined4 *)(local_14 + iVar15 * 4) = 0xffffffff;
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(short *)((int)piVar9 + 0x26));
  }
  local_18 = param_1[0x12];
  *(int *)(param_2 + 0x34) = local_18;
  param_1[0x12] = param_1[0x12] + 1;
  iVar10 = param_1[0x12];
  for (iVar15 = piVar9[2]; iVar15 != 0; iVar15 = *(int *)(iVar15 + 0x14)) {
    iVar10 = iVar10 + 1;
    param_1[0x12] = iVar10;
  }
  local_8c = 0;
  local_84 = 0;
  local_7c = 0;
  local_94 = CONCAT44(param_2,param_1);
  local_3c = 0;
  local_10 = 0;
  if (0 < *param_3) {
    local_30 = (int *)0x0;
    do {
      piVar9 = local_30;
      iVar10 = FUN_005640a0(&local_94,*(undefined4 *)(param_3[2] + (int)local_30));
      iVar15 = local_14;
      if (iVar10 != 0) goto LAB_0056a7bd;
      iVar10 = 0;
      if (0 < *(short *)((int)local_8 + 0x26)) {
        local_54 = (undefined4 *)(param_3[2] + (int)piVar9);
        puVar19 = (undefined4 *)local_8[1];
        do {
          pbVar18 = (byte *)*puVar19;
          pbVar20 = (byte *)local_54[1];
          bVar4 = *pbVar18;
          while ((bVar4 != 0 && ((&DAT_007120d8)[bVar4] == (&DAT_007120d8)[*pbVar20]))) {
            pbVar1 = pbVar18 + 1;
            pbVar18 = pbVar18 + 1;
            pbVar20 = pbVar20 + 1;
            bVar4 = *pbVar1;
          }
          piVar9 = local_30;
          if ((&DAT_007120d8)[*pbVar18] == (&DAT_007120d8)[*pbVar20]) {
            if (iVar10 == (short)local_8[9]) {
              local_3c = 1;
              local_60 = (char *)*local_54;
            }
            *(uint *)(local_14 + iVar10 * 4) = local_10;
            break;
          }
          iVar10 = iVar10 + 1;
          puVar19 = puVar19 + 6;
        } while (iVar10 < *(short *)((int)local_8 + 0x26));
      }
      if (*(short *)((int)local_8 + 0x26) <= iVar10) {
        iVar15 = param_3[2];
        iVar11 = FUN_0055cf90(*(undefined4 *)(iVar15 + 4 + (int)piVar9));
        if (iVar11 == 0) {
          FUN_00553950(param_1,"no such column: %s",
                       *(undefined4 *)(param_3[2] + 4 + local_10 * 0x14));
          *(undefined1 *)((int)param_1 + 0x11) = 1;
          iVar15 = local_14;
          goto LAB_0056a7bd;
        }
        local_60 = *(char **)(iVar15 + (int)piVar9);
        local_3c = 1;
      }
      iVar11 = FUN_0054ab50(param_1,0x17,*local_8,*(undefined4 *)(local_8[1] + iVar10 * 0x18),
                            *(undefined4 *)(*(int *)(local_1c + 0x10) + local_24 * 0x10));
      iVar15 = local_14;
      if (iVar11 == 1) goto LAB_0056a7bd;
      if (iVar11 == 2) {
        *(undefined4 *)(local_14 + iVar10 * 4) = 0xffffffff;
      }
      local_10 = local_10 + 1;
      local_30 = piVar9 + 5;
      piVar9 = local_8;
    } while ((int)local_10 < *param_3);
  }
  local_38 = FUN_00558580(param_1,piVar9,local_14,local_3c);
  iVar15 = piVar9[2];
  iVar10 = 0;
  if (iVar15 == 0) {
LAB_00568e8c:
    piVar12 = (int *)0x0;
  }
  else {
    do {
      iVar15 = *(int *)(iVar15 + 0x14);
      iVar10 = iVar10 + 1;
    } while (iVar15 != 0);
    if (iVar10 < 1) goto LAB_00568e8c;
    piVar12 = (int *)FUN_00552230(local_1c,iVar10 * 4);
    iVar15 = local_14;
    local_40 = piVar12;
    if (piVar12 == (int *)0x0) goto LAB_0056a7bd;
  }
  for (iVar15 = piVar9[2]; iVar15 != 0; iVar15 = *(int *)(iVar15 + 0x14)) {
    if ((local_38 == 0) && (local_3c == 0)) {
      iVar10 = 0;
      if (0 < *(int *)(iVar15 + 0x24)) {
        piVar9 = *(int **)(iVar15 + 4);
        iVar11 = 0;
        do {
          if (-1 < *(int *)(local_14 + *piVar9 * 4)) {
            param_1[0x13] = param_1[0x13] + 1;
            iVar10 = param_1[0x13];
            break;
          }
          iVar11 = iVar11 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar11 < *(int *)(iVar15 + 0x24));
      }
    }
    else {
      param_1[0x13] = param_1[0x13] + 1;
      iVar10 = param_1[0x13];
    }
    *piVar12 = iVar10;
    piVar12 = piVar12 + 1;
  }
  piVar9 = (int *)param_1[2];
  local_30 = piVar9;
  if (piVar9 == (int *)0x0) {
    iVar15 = *param_1;
    piVar9 = (int *)FUN_00552230(iVar15,0xc0);
    if (piVar9 == (int *)0x0) {
      piVar9 = (int *)0x0;
      local_30 = (int *)0x0;
    }
    else {
      local_30 = piVar9;
      memset(piVar9,0,0xc0);
      *piVar9 = iVar15;
      if (*(int *)(iVar15 + 4) != 0) {
        *(int **)(*(int *)(iVar15 + 4) + 0x38) = piVar9;
      }
      piVar9[0xf] = *(int *)(iVar15 + 4);
      piVar9[0xe] = 0;
      *(int **)(iVar15 + 4) = piVar9;
      piVar9[0xc] = 0x26bceaa5;
    }
    param_1[2] = (int)piVar9;
    iVar15 = local_14;
    if (piVar9 == (int *)0x0) goto LAB_0056a7bd;
    iVar15 = piVar9[7];
    if ((iVar15 < piVar9[8]) || (iVar10 = FUN_0053b4b0(piVar9), iVar10 == 0)) {
      iVar10 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(undefined2 *)(iVar10 + iVar15 * 0x14) = 0x94;
      *(undefined1 *)(iVar10 + 3 + iVar15 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 4 + iVar15 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 8 + iVar15 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0xc + iVar15 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0x10 + iVar15 * 0x14) = 0;
    }
  }
  if (*(char *)((int)param_1 + 0x12) == '\0') {
    piVar9[0x18] = piVar9[0x18] | 0x10;
  }
  piVar12 = param_1;
  if ((int *)param_1[0x6c] != (int *)0x0) {
    piVar12 = (int *)param_1[0x6c];
  }
  FUN_00550aa0(param_1,local_24);
  iVar15 = local_14;
  *(byte *)((int)piVar12 + 0x17) = *(byte *)((int)piVar12 + 0x17) | 1;
  piVar12[0x55] = piVar12[0x55] | 1 << ((byte)local_24 & 0x1f);
  if ((*(byte *)((int)local_8 + 0x2a) & 0x10) != 0) {
    FUN_0057b9f0(param_1,param_2,local_8,param_3,local_60,local_14,param_4,param_5);
    param_4 = 0;
    local_6c = 0;
    goto LAB_0056a7bd;
  }
  param_1[0x13] = param_1[0x13] + 1;
  puVar21 = (uint *)param_1[0x13];
  local_28 = (uint *)((int)puVar21 + 1);
  param_1[0x13] = (int)local_28;
  if ((local_48 != 0) || (local_38 != 0)) {
    local_58 = (byte *)((int)puVar21 + 2);
    param_1[0x13] = (int)((int)*(short *)((int)local_8 + 0x26) + (int)local_28);
  }
  if (((local_3c != 0) || (local_48 != 0)) || (local_2c = local_28, local_38 != 0)) {
    param_1[0x13] = param_1[0x13] + 1;
    local_2c = (uint *)param_1[0x13];
  }
  local_20 = param_1[0x13] + 1;
  param_1[0x13] = (int)*(short *)((int)local_8 + 0x26) + param_1[0x13];
  local_34 = puVar21;
  if (local_50 != 0) {
    local_74 = CONCAT44(param_1,param_1[0x81]);
    param_1[0x81] = *local_8;
    FUN_0055dc60(param_1,local_8,param_4,local_18);
  }
  iVar10 = FUN_005640a0(&local_94,param_4);
  iVar15 = local_14;
  if (iVar10 != 0) goto LAB_0056a7bd;
  iVar15 = piVar9[7];
  if ((iVar15 < piVar9[8]) || (iVar10 = FUN_0053b4b0(piVar9), iVar10 == 0)) {
    iVar10 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(undefined2 *)(iVar10 + iVar15 * 0x14) = 10;
    *(undefined1 *)(iVar10 + 3 + iVar15 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 4 + iVar15 * 0x14) = 0;
    *(uint **)(iVar10 + 8 + iVar15 * 0x14) = puVar21;
    *(uint **)(iVar10 + 0xc + iVar15 * 0x14) = local_28;
    *(undefined4 *)(iVar10 + 0x10 + iVar15 * 0x14) = 0;
  }
  iVar10 = FUN_005788a0(param_1,param_2,param_4,0,0,4,0);
  iVar15 = local_14;
  if (iVar10 == 0) goto LAB_0056a7bd;
  local_54 = (undefined4 *)(uint)*(byte *)(iVar10 + 0xc);
  iVar15 = piVar9[7];
  if ((iVar15 < piVar9[8]) || (iVar11 = FUN_0053b4b0(piVar9), iVar11 == 0)) {
    iVar11 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(int *)(iVar11 + 4 + iVar15 * 0x14) = local_18;
    *(undefined2 *)(iVar11 + iVar15 * 0x14) = 0x41;
    *(undefined1 *)(iVar11 + 3 + iVar15 * 0x14) = 0;
    *(uint **)(iVar11 + 8 + iVar15 * 0x14) = local_28;
    *(undefined4 *)(iVar11 + 0xc + iVar15 * 0x14) = 0;
    *(undefined4 *)(iVar11 + 0x10 + iVar15 * 0x14) = 0;
  }
  if ((local_54 == (undefined4 *)0x0) &&
     ((iVar15 = piVar9[7], iVar15 < piVar9[8] || (iVar11 = FUN_0053b4b0(piVar9), iVar11 == 0)))) {
    iVar11 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(uint **)(iVar11 + 4 + iVar15 * 0x14) = local_34;
    *(undefined2 *)(iVar11 + iVar15 * 0x14) = 0x70;
    *(undefined1 *)(iVar11 + 3 + iVar15 * 0x14) = 0;
    *(uint **)(iVar11 + 8 + iVar15 * 0x14) = local_28;
    *(undefined4 *)(iVar11 + 0xc + iVar15 * 0x14) = 0;
    *(undefined4 *)(iVar11 + 0x10 + iVar15 * 0x14) = 0;
  }
  FUN_005794a0(iVar10);
  if (((*(byte *)(local_1c + 0x18) & 0x10) != 0) && (param_1[0x6d] == 0)) {
    param_1[0x13] = param_1[0x13] + 1;
    iVar15 = piVar9[7];
    iVar10 = param_1[0x13];
    local_64 = iVar10;
    if ((iVar15 < piVar9[8]) || (iVar11 = FUN_0053b4b0(piVar9), iVar11 == 0)) {
      iVar11 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(undefined2 *)(iVar11 + iVar15 * 0x14) = 7;
      *(undefined1 *)(iVar11 + 3 + iVar15 * 0x14) = 0;
      *(undefined4 *)(iVar11 + 4 + iVar15 * 0x14) = 0;
      *(int *)(iVar11 + 8 + iVar15 * 0x14) = iVar10;
      *(undefined4 *)(iVar11 + 0xc + iVar15 * 0x14) = 0;
      *(undefined4 *)(iVar11 + 0x10 + iVar15 * 0x14) = 0;
    }
  }
  piVar12 = local_8;
  if (local_50 == 0) {
    if (local_54 == (undefined4 *)0x0) {
      FUN_0055e5f0(param_1,local_18,local_24,local_8,0x28);
    }
    if (param_5 == 5) {
LAB_00569282:
      iVar10 = 1;
      local_44 = 1;
    }
    else {
      iVar15 = piVar12[2];
      iVar10 = 0;
      local_44 = 0;
      for (; iVar15 != 0; iVar15 = *(int *)(iVar15 + 0x14)) {
        if (*(char *)(iVar15 + 0x2c) == '\x05') goto LAB_00569282;
      }
    }
    iVar15 = piVar12[2];
    local_10 = 0;
    uVar13 = local_10;
    while (local_5c = iVar15, local_10 = uVar13, iVar15 != 0) {
      if ((iVar10 != 0) || (iVar10 = 0, 0 < local_40[uVar13])) {
        local_4c = (uint *)FUN_0055b2a0(param_1,iVar15);
        iVar10 = piVar9[8];
        local_c = *(uint **)(iVar15 + 0x28);
        iVar15 = piVar9[7];
        if (iVar15 < iVar10) {
LAB_00569338:
          piVar9[7] = piVar9[7] + 1;
          puVar2 = (undefined2 *)(piVar9[1] + iVar15 * 0x14);
          *(uint *)(puVar2 + 2) = local_18 + 1 + uVar13;
          *(uint **)(puVar2 + 4) = local_c;
          *puVar2 = 0x28;
          *(undefined1 *)((int)puVar2 + 3) = 0;
          *(int *)(puVar2 + 6) = local_24;
          *(undefined4 *)(puVar2 + 8) = 0;
        }
        else {
          if (iVar10 == 0) {
            iVar10 = 0x33;
          }
          else {
            iVar10 = iVar10 * 2;
          }
          uVar13 = FUN_00552390(*piVar9,piVar9[1],iVar10 * 0x14);
          if (uVar13 != 0) {
            iVar10 = *piVar9;
            if (((iVar10 == 0) || (uVar13 < *(uint *)(iVar10 + 0x104))) ||
               (*(uint *)(iVar10 + 0x108) <= uVar13)) {
              uVar16 = (*DAT_00766608._4_4_)(uVar13);
            }
            else {
              uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
            }
            piVar9[1] = uVar13;
            piVar9[8] = uVar16 / 0x14;
            uVar13 = local_10;
            goto LAB_00569338;
          }
          iVar15 = 1;
          uVar13 = local_10;
        }
        iVar10 = piVar9[1];
        iVar11 = *piVar9;
        if ((iVar10 == 0) || (*(char *)(iVar11 + 0x38) != '\0')) {
          FUN_00539320(iVar11,0xfffffff0,local_4c);
          iVar10 = local_44;
        }
        else {
          if (iVar15 < 0) {
            iVar15 = piVar9[7] + -1;
          }
          iVar3 = iVar10 + iVar15 * 0x14;
          FUN_00539320(iVar11,(int)*(char *)(iVar3 + 1),
                       *(undefined4 *)(iVar10 + 0x10 + iVar15 * 0x14));
          *(undefined4 *)(iVar3 + 0x10) = 0;
          iVar10 = local_44;
          uVar13 = local_10;
          if (local_4c == (uint *)0x0) {
            *(undefined4 *)(iVar3 + 0x10) = 0;
            *(undefined1 *)(iVar3 + 1) = 0;
          }
          else {
            *(uint **)(iVar3 + 0x10) = local_4c;
            *(undefined1 *)(iVar3 + 1) = 0xfa;
          }
        }
      }
      uVar13 = uVar13 + 1;
      iVar15 = *(int *)(local_5c + 0x14);
    }
  }
  uVar13 = piVar9[7];
  if (local_54 == (undefined4 *)0x0) {
    local_10 = uVar13;
    if (((int)uVar13 < piVar9[8]) || (iVar15 = FUN_0053b4b0(piVar9), iVar15 == 0)) {
      iVar15 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(uint **)(iVar15 + 4 + uVar13 * 0x14) = local_34;
      *(undefined2 *)(iVar15 + uVar13 * 0x14) = 0x71;
      *(undefined1 *)(iVar15 + 3 + uVar13 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 8 + uVar13 * 0x14) = 0;
      *(uint **)(iVar15 + 0xc + uVar13 * 0x14) = local_28;
      *(undefined4 *)(iVar15 + 0x10 + uVar13 * 0x14) = 0;
    }
    else {
      local_10 = 1;
    }
  }
  else {
    if (((int)uVar13 < piVar9[8]) || (iVar15 = FUN_0053b4b0(piVar9), iVar15 == 0)) {
      iVar15 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(undefined2 *)(iVar15 + uVar13 * 0x14) = 0x4a;
      *(undefined1 *)(iVar15 + 3 + uVar13 * 0x14) = 0;
      *(uint **)(iVar15 + 4 + uVar13 * 0x14) = local_28;
      *(undefined4 *)(iVar15 + 8 + uVar13 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 0xc + uVar13 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 0x10 + uVar13 * 0x14) = 0;
    }
    else {
      uVar13 = 1;
    }
    uVar16 = piVar9[7];
    local_10 = uVar16;
    if (((int)uVar16 < piVar9[8]) || (iVar15 = FUN_0053b4b0(piVar9), iVar15 == 0)) {
      iVar15 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(undefined2 *)(iVar15 + uVar16 * 0x14) = 1;
      *(undefined1 *)(iVar15 + 3 + uVar16 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 4 + uVar16 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 8 + uVar16 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 0xc + uVar16 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 0x10 + uVar16 * 0x14) = 0;
    }
    else {
      local_10 = 1;
    }
    if ((-1 < (int)uVar13) && (uVar13 < (uint)piVar9[7])) {
      *(int *)(piVar9[1] + 8 + uVar13 * 0x14) = piVar9[7];
    }
  }
  iVar15 = piVar9[7];
  iVar10 = piVar9[8];
  if (iVar15 < iVar10) {
LAB_00569574:
    iVar10 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(int *)(iVar10 + 4 + iVar15 * 0x14) = local_18;
    *(uint *)(iVar10 + 8 + iVar15 * 0x14) = local_10;
    *(undefined2 *)(iVar10 + iVar15 * 0x14) = 0x36;
    *(undefined1 *)(iVar10 + 3 + iVar15 * 0x14) = 0;
    *(uint **)(iVar10 + 0xc + iVar15 * 0x14) = local_28;
    *(undefined4 *)(iVar10 + 0x10 + iVar15 * 0x14) = 0;
  }
  else {
    if (iVar10 == 0) {
      iVar10 = 0x33;
    }
    else {
      iVar10 = iVar10 * 2;
    }
    uVar13 = FUN_00552390(*piVar9,piVar9[1],iVar10 * 0x14);
    if (uVar13 != 0) {
      iVar10 = *piVar9;
      if (((iVar10 == 0) || (uVar13 < *(uint *)(iVar10 + 0x104))) ||
         (*(uint *)(iVar10 + 0x108) <= uVar13)) {
        uVar16 = (*DAT_00766608._4_4_)(uVar13);
      }
      else {
        uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
      }
      piVar9[8] = uVar16 / 0x14;
      piVar9[1] = uVar13;
      goto LAB_00569574;
    }
  }
  puVar21 = local_2c;
  if (local_3c != 0) {
    if ((local_60 == (char *)0x0) || (*local_60 != -0x7c)) {
      local_c = (uint *)FUN_00554e20(param_1,local_60,local_2c);
      if (((local_c != puVar21) && (iVar15 = param_1[2], iVar15 != 0)) &&
         ((iVar10 = *(int *)(iVar15 + 0x1c), iVar10 < *(int *)(iVar15 + 0x20) ||
          (iVar11 = FUN_0053b4b0(iVar15), iVar11 == 0)))) {
        iVar11 = *(int *)(iVar15 + 4);
        *(int *)(iVar15 + 0x1c) = *(int *)(iVar15 + 0x1c) + 1;
        *(undefined2 *)(iVar11 + iVar10 * 0x14) = 0xf;
        goto LAB_005695eb;
      }
    }
    else {
      local_c = *(uint **)(local_60 + 0x18);
      iVar15 = param_1[2];
      iVar10 = *(int *)(iVar15 + 0x1c);
      if ((iVar10 < *(int *)(iVar15 + 0x20)) || (iVar11 = FUN_0053b4b0(iVar15), iVar11 == 0)) {
        iVar11 = *(int *)(iVar15 + 4);
        *(int *)(iVar15 + 0x1c) = *(int *)(iVar15 + 0x1c) + 1;
        *(undefined2 *)(iVar11 + iVar10 * 0x14) = 0xe;
LAB_005695eb:
        *(undefined1 *)(iVar11 + 3 + iVar10 * 0x14) = 0;
        *(uint **)(iVar11 + 4 + iVar10 * 0x14) = local_c;
        *(uint **)(iVar11 + 8 + iVar10 * 0x14) = local_2c;
        *(undefined4 *)(iVar11 + 0xc + iVar10 * 0x14) = 0;
        *(undefined4 *)(iVar11 + 0x10 + iVar10 * 0x14) = 0;
      }
    }
    puVar21 = local_2c;
    iVar15 = piVar9[7];
    if ((iVar15 < piVar9[8]) || (iVar10 = FUN_0053b4b0(piVar9), iVar10 == 0)) {
      iVar10 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(undefined2 *)(iVar10 + iVar15 * 0x14) = 0x15;
      *(undefined1 *)(iVar10 + 3 + iVar15 * 0x14) = 0;
      *(uint **)(iVar10 + 4 + iVar15 * 0x14) = puVar21;
      *(undefined4 *)(iVar10 + 8 + iVar15 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0xc + iVar15 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0x10 + iVar15 * 0x14) = 0;
    }
  }
  piVar12 = local_8;
  if (local_38 == 0) {
    if (local_48 != 0) {
      uVar13 = 0;
      goto LAB_005696c5;
    }
  }
  else {
    uVar13 = FUN_005583e0(param_1,local_8);
LAB_005696c5:
    uVar16 = FUN_00568420(param_1,local_48,param_3,0,3,piVar12,param_5);
    local_34 = (uint *)(uVar13 | uVar16);
    iVar15 = 0;
    piVar12 = local_8;
    if (0 < *(short *)((int)local_8 + 0x26)) {
      do {
        if (((*(int *)(local_14 + iVar15 * 4) < 0) || (local_34 == (uint *)0xffffffff)) ||
           ((iVar15 < 0x20 && (((uint)local_34 & 1 << ((byte)iVar15 & 0x1f)) != 0)))) {
          FUN_00554810(piVar9,piVar12,local_18,iVar15,local_58 + iVar15);
          piVar12 = local_8;
        }
        else {
          local_c = (uint *)piVar9[7];
          iVar10 = piVar9[8];
          if (iVar10 <= (int)local_c) {
            if (iVar10 == 0) {
              iVar10 = 0x33;
            }
            else {
              iVar10 = iVar10 * 2;
            }
            uVar13 = FUN_00552390(*piVar9,piVar9[1],iVar10 * 0x14);
            piVar12 = local_8;
            if (uVar13 == 0) goto LAB_005697f0;
            iVar10 = *piVar9;
            if (((iVar10 == 0) || (uVar13 < *(uint *)(iVar10 + 0x104))) ||
               (*(uint *)(iVar10 + 0x108) <= uVar13)) {
              uVar16 = (*DAT_00766608._4_4_)(uVar13);
            }
            else {
              uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
            }
            piVar9[8] = uVar16 / 0x14;
            piVar9[1] = uVar13;
            piVar12 = local_8;
          }
          piVar9[7] = piVar9[7] + 1;
          puVar2 = (undefined2 *)(piVar9[1] + (int)local_c * 0x14);
          *puVar2 = 10;
          *(undefined1 *)((int)puVar2 + 3) = 0;
          *(undefined4 *)(puVar2 + 2) = 0;
          *(byte **)(puVar2 + 4) = local_58 + iVar15;
          *(undefined4 *)(puVar2 + 6) = 0;
          *(undefined4 *)(puVar2 + 8) = 0;
        }
LAB_005697f0:
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(short *)((int)piVar12 + 0x26));
    }
    if (local_3c == 0) {
      iVar15 = piVar9[7];
      iVar10 = piVar9[8];
      if (iVar10 <= iVar15) {
        if (iVar10 == 0) {
          iVar10 = 0x33;
        }
        else {
          iVar10 = iVar10 * 2;
        }
        uVar13 = FUN_00552390(*piVar9,piVar9[1],iVar10 * 0x14);
        if (uVar13 == 0) goto LAB_005698a8;
        iVar10 = *piVar9;
        if (((iVar10 == 0) || (uVar13 < *(uint *)(iVar10 + 0x104))) ||
           (*(uint *)(iVar10 + 0x108) <= uVar13)) {
          uVar16 = (*DAT_00766608._4_4_)(uVar13);
        }
        else {
          uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
        }
        piVar9[8] = uVar16 / 0x14;
        piVar9[1] = uVar13;
      }
      iVar10 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(uint **)(iVar10 + 4 + iVar15 * 0x14) = local_28;
      *(undefined2 *)(iVar10 + iVar15 * 0x14) = 0xe;
      *(undefined1 *)(iVar10 + 3 + iVar15 * 0x14) = 0;
      *(uint **)(iVar10 + 8 + iVar15 * 0x14) = local_2c;
      *(undefined4 *)(iVar10 + 0xc + iVar15 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0x10 + iVar15 * 0x14) = 0;
    }
  }
LAB_005698a8:
  piVar12 = local_8;
  local_58 = (byte *)FUN_00568420(param_1,local_48,param_3,1,1,local_8,param_5);
  iVar15 = piVar9[7];
  local_c = (uint *)(local_20 + -1 + (int)*(short *)((int)piVar12 + 0x26));
  iVar10 = piVar9[8];
  if (iVar15 < iVar10) {
LAB_00569940:
    iVar10 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(undefined2 *)(iVar10 + iVar15 * 0x14) = 10;
    *(undefined1 *)(iVar10 + 3 + iVar15 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 4 + iVar15 * 0x14) = 0;
    *(int *)(iVar10 + 8 + iVar15 * 0x14) = local_20;
    *(uint **)(iVar10 + 0xc + iVar15 * 0x14) = local_c;
    *(undefined4 *)(iVar10 + 0x10 + iVar15 * 0x14) = 0;
  }
  else {
    if (iVar10 == 0) {
      iVar10 = 0x33;
    }
    else {
      iVar10 = iVar10 * 2;
    }
    uVar13 = FUN_00552390(*piVar9,piVar9[1],iVar10 * 0x14);
    if (uVar13 != 0) {
      iVar10 = *piVar9;
      if (((iVar10 == 0) || (uVar13 < *(uint *)(iVar10 + 0x104))) ||
         (*(uint *)(iVar10 + 0x108) <= uVar13)) {
        uVar16 = (*DAT_00766608._4_4_)(uVar13);
      }
      else {
        uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
      }
      piVar9[8] = uVar16 / 0x14;
      piVar9[1] = uVar13;
      goto LAB_00569940;
    }
  }
  local_24 = 0;
  piVar12 = local_8;
  iVar15 = local_20;
  if (0 < *(short *)((int)local_8 + 0x26)) {
    do {
      iVar10 = local_24;
      if (local_24 != (short)piVar12[9]) {
        iVar11 = *(int *)(local_14 + local_24 * 4);
        if (iVar11 < 0) {
          if ((((local_68 & 1) == 0) || (0x1f < local_24)) ||
             (((uint)local_58 & 1 << ((byte)local_24 & 0x1f)) != 0)) {
            iVar15 = piVar9[7];
            iVar10 = piVar9[8];
            if (iVar15 < iVar10) {
LAB_00569c27:
              piVar9[7] = piVar9[7] + 1;
              puVar2 = (undefined2 *)(piVar9[1] + iVar15 * 0x14);
              *(int *)(puVar2 + 2) = local_18;
              *puVar2 = 0x1d;
              *(undefined1 *)((int)puVar2 + 3) = 0;
              *(int *)(puVar2 + 4) = local_24;
              *(int *)(puVar2 + 6) = local_20 + local_24;
              *(undefined4 *)(puVar2 + 8) = 0;
            }
            else {
              if (iVar10 == 0) {
                iVar10 = 0x33;
              }
              else {
                iVar10 = iVar10 * 2;
              }
              uVar13 = FUN_00552390(*piVar9,piVar9[1],iVar10 * 0x14);
              if (uVar13 != 0) {
                iVar10 = *piVar9;
                if (((iVar10 == 0) || (uVar13 < *(uint *)(iVar10 + 0x104))) ||
                   (*(uint *)(iVar10 + 0x108) <= uVar13)) {
                  uVar16 = (*DAT_00766608._4_4_)(uVar13);
                }
                else {
                  uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
                }
                piVar9[1] = uVar13;
                piVar9[8] = uVar16 / 0x14;
                goto LAB_00569c27;
              }
            }
            iVar15 = local_20;
            iVar10 = local_24;
            FUN_00550cd0(piVar9,local_8,local_24,local_20 + local_24);
            piVar12 = local_8;
          }
        }
        else {
          pcVar6 = *(char **)(param_3[2] + iVar11 * 0x14);
          if ((pcVar6 == (char *)0x0) || (*pcVar6 != -0x7c)) {
            puVar21 = (uint *)(iVar15 + local_24);
            local_c = puVar21;
            local_4c = (uint *)FUN_00554e20(param_1,pcVar6,puVar21);
            piVar12 = local_8;
            iVar15 = local_20;
            if ((local_4c != puVar21) &&
               (piVar7 = (int *)param_1[2], iVar10 = local_24, piVar7 != (int *)0x0)) {
              local_34 = (uint *)piVar7[7];
              iVar15 = piVar7[8];
              if (iVar15 <= (int)local_34) {
                if (iVar15 == 0) {
                  iVar15 = 0x33;
                }
                else {
                  iVar15 = iVar15 * 2;
                }
                uVar13 = FUN_00552390(*piVar7,piVar7[1],iVar15 * 0x14);
                piVar12 = local_8;
                iVar15 = local_20;
                iVar10 = local_24;
                if (uVar13 == 0) goto LAB_00569b5e;
                iVar15 = *piVar7;
                if (((iVar15 == 0) || (uVar13 < *(uint *)(iVar15 + 0x104))) ||
                   (*(uint *)(iVar15 + 0x108) <= uVar13)) {
                  uVar16 = (*DAT_00766608._4_4_)(uVar13);
                }
                else {
                  uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
                }
                piVar7[1] = uVar13;
                piVar7[8] = uVar16 / 0x14;
                puVar21 = local_c;
              }
              iVar15 = piVar7[1];
              piVar7[7] = piVar7[7] + 1;
              *(undefined2 *)(iVar15 + (int)local_34 * 0x14) = 0xf;
              *(undefined1 *)(iVar15 + 3 + (int)local_34 * 0x14) = 0;
              *(uint **)(iVar15 + 4 + (int)local_34 * 0x14) = local_4c;
              *(uint **)(iVar15 + 8 + (int)local_34 * 0x14) = puVar21;
              *(undefined4 *)(iVar15 + 0xc + (int)local_34 * 0x14) = 0;
              *(undefined4 *)(iVar15 + 0x10 + (int)local_34 * 0x14) = 0;
              piVar12 = local_8;
              iVar15 = local_20;
              iVar10 = local_24;
            }
          }
          else {
            local_34 = *(uint **)(pcVar6 + 0x18);
            piVar7 = (int *)param_1[2];
            local_c = (uint *)piVar7[7];
            iVar10 = piVar7[8];
            if (iVar10 <= (int)local_c) {
              if (iVar10 == 0) {
                iVar10 = 0x33;
              }
              else {
                iVar10 = iVar10 * 2;
              }
              uVar13 = FUN_00552390(*piVar7,piVar7[1],iVar10 * 0x14);
              piVar12 = local_8;
              iVar15 = local_20;
              iVar10 = local_24;
              if (uVar13 == 0) goto LAB_00569b5e;
              iVar15 = *piVar7;
              if (((iVar15 == 0) || (uVar13 < *(uint *)(iVar15 + 0x104))) ||
                 (*(uint *)(iVar15 + 0x108) <= uVar13)) {
                uVar16 = (*DAT_00766608._4_4_)(uVar13);
              }
              else {
                uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
              }
              piVar7[8] = uVar16 / 0x14;
              piVar7[1] = uVar13;
              piVar12 = local_8;
              iVar15 = local_20;
            }
            piVar7[7] = piVar7[7] + 1;
            puVar2 = (undefined2 *)(piVar7[1] + (int)local_c * 0x14);
            *(uint **)(puVar2 + 2) = local_34;
            *puVar2 = 0xe;
            *(undefined1 *)((int)puVar2 + 3) = 0;
            *(int *)(puVar2 + 4) = iVar15 + local_24;
            *(undefined4 *)(puVar2 + 6) = 0;
            *(undefined4 *)(puVar2 + 8) = 0;
            iVar10 = local_24;
          }
        }
      }
LAB_00569b5e:
      local_24 = iVar10 + 1;
    } while (local_24 < *(short *)((int)piVar12 + 0x26));
  }
  if ((local_68 & 1) != 0) {
    local_c = (uint *)(int)*(short *)((int)piVar12 + 0x26);
    iVar15 = piVar9[7];
    iVar10 = piVar9[8];
    if (iVar15 < iVar10) {
LAB_00569ccd:
      iVar10 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(int *)(iVar10 + 4 + iVar15 * 0x14) = local_20;
      *(undefined2 *)(iVar10 + iVar15 * 0x14) = 0x1e;
      *(undefined1 *)(iVar10 + 3 + iVar15 * 0x14) = 0;
      *(uint **)(iVar10 + 8 + iVar15 * 0x14) = local_c;
      *(undefined4 *)(iVar10 + 0xc + iVar15 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0x10 + iVar15 * 0x14) = 0;
    }
    else {
      if (iVar10 == 0) {
        iVar10 = 0x33;
      }
      else {
        iVar10 = iVar10 * 2;
      }
      uVar13 = FUN_00552390(*piVar9,piVar9[1],iVar10 * 0x14);
      if (uVar13 != 0) {
        iVar10 = *piVar9;
        if (((iVar10 == 0) || (uVar13 < *(uint *)(iVar10 + 0x104))) ||
           (*(uint *)(iVar10 + 0x108) <= uVar13)) {
          uVar16 = (*DAT_00766608._4_4_)(uVar13);
        }
        else {
          uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
        }
        piVar9[8] = uVar16 / 0x14;
        piVar9[1] = uVar13;
        goto LAB_00569ccd;
      }
    }
    piVar12 = local_8;
    FUN_00568100(piVar9,local_8);
    FUN_00550410(param_1,local_48,0x6b,param_3,1,piVar12,local_28,param_5,local_10);
    iVar15 = piVar9[7];
    iVar10 = piVar9[8];
    if (iVar15 < iVar10) {
LAB_00569d94:
      iVar10 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(int *)(iVar10 + 4 + iVar15 * 0x14) = local_18;
      *(uint *)(iVar10 + 8 + iVar15 * 0x14) = local_10;
      *(undefined2 *)(iVar10 + iVar15 * 0x14) = 0x36;
      *(undefined1 *)(iVar10 + 3 + iVar15 * 0x14) = 0;
      *(uint **)(iVar10 + 0xc + iVar15 * 0x14) = local_28;
      *(undefined4 *)(iVar10 + 0x10 + iVar15 * 0x14) = 0;
    }
    else {
      if (iVar10 == 0) {
        iVar10 = 0x33;
      }
      else {
        iVar10 = iVar10 * 2;
      }
      uVar13 = FUN_00552390(*piVar9,piVar9[1],iVar10 * 0x14);
      if (uVar13 != 0) {
        iVar10 = *piVar9;
        if (((iVar10 == 0) || (uVar13 < *(uint *)(iVar10 + 0x104))) ||
           (*(uint *)(iVar10 + 0x108) <= uVar13)) {
          uVar16 = (*DAT_00766608._4_4_)(uVar13);
        }
        else {
          uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
        }
        piVar9[8] = uVar16 / 0x14;
        piVar9[1] = uVar13;
        goto LAB_00569d94;
      }
    }
    iVar15 = 0;
    piVar12 = local_8;
    if (0 < *(short *)((int)local_8 + 0x26)) {
      do {
        if ((*(int *)(local_14 + iVar15 * 4) < 0) && (iVar15 != (short)piVar12[9])) {
          local_c = (uint *)piVar9[7];
          iVar10 = piVar9[8];
          if ((int)local_c < iVar10) {
LAB_00569e6b:
            piVar9[7] = piVar9[7] + 1;
            puVar2 = (undefined2 *)(piVar9[1] + (int)local_c * 0x14);
            *(int *)(puVar2 + 2) = local_18;
            *puVar2 = 0x1d;
            *(undefined1 *)((int)puVar2 + 3) = 0;
            *(int *)(puVar2 + 4) = iVar15;
            *(int *)(puVar2 + 6) = local_20 + iVar15;
            *(undefined4 *)(puVar2 + 8) = 0;
          }
          else {
            if (iVar10 == 0) {
              iVar10 = 0x33;
            }
            else {
              iVar10 = iVar10 * 2;
            }
            uVar13 = FUN_00552390(*piVar9,piVar9[1],iVar10 * 0x14);
            if (uVar13 != 0) {
              iVar10 = *piVar9;
              if (((iVar10 == 0) || (uVar13 < *(uint *)(iVar10 + 0x104))) ||
                 (*(uint *)(iVar10 + 0x108) <= uVar13)) {
                uVar16 = (*DAT_00766608._4_4_)(uVar13);
              }
              else {
                uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
              }
              piVar9[8] = uVar16 / 0x14;
              piVar9[1] = uVar13;
              goto LAB_00569e6b;
            }
          }
          FUN_00550cd0(piVar9,local_8,iVar15,local_20 + iVar15);
          piVar12 = local_8;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(short *)((int)piVar12 + 0x26));
    }
  }
  puVar21 = local_28;
  if (local_50 == 0) {
    puVar14 = (uint *)0x0;
    if (local_3c != 0) {
      puVar14 = local_28;
    }
    FUN_00558890(param_1,piVar12,local_18,local_2c,local_40,puVar14,1,param_5,local_10,0);
    if (local_38 != 0) {
      FUN_00557cc0(param_1,local_8,puVar21,0);
    }
    uVar13 = piVar9[7];
    iVar15 = piVar9[8];
    if ((int)uVar13 < iVar15) {
LAB_00569f79:
      iVar15 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(undefined2 *)(iVar15 + uVar13 * 0x14) = 0x36;
      *(undefined1 *)(iVar15 + 3 + uVar13 * 0x14) = 0;
      *(int *)(iVar15 + 4 + uVar13 * 0x14) = local_18;
      *(undefined4 *)(iVar15 + 8 + uVar13 * 0x14) = 0;
      *(uint **)(iVar15 + 0xc + uVar13 * 0x14) = puVar21;
      *(undefined4 *)(iVar15 + 0x10 + uVar13 * 0x14) = 0;
    }
    else {
      if (iVar15 == 0) {
        iVar15 = 0x33;
      }
      else {
        iVar15 = iVar15 * 2;
      }
      uVar16 = FUN_00552390(*piVar9,piVar9[1],iVar15 * 0x14);
      if (uVar16 != 0) {
        iVar15 = *piVar9;
        if (((iVar15 == 0) || (uVar16 < *(uint *)(iVar15 + 0x104))) ||
           (*(uint *)(iVar15 + 0x108) <= uVar16)) {
          uVar17 = (*DAT_00766608._4_4_)(uVar16);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar15 + 0xe8);
        }
        piVar9[1] = uVar16;
        piVar9[8] = uVar17 / 0x14;
        puVar21 = local_28;
        goto LAB_00569f79;
      }
      uVar13 = 1;
    }
    FUN_00559f10(param_1,local_8,local_18,local_40);
    if ((local_38 != 0) || (local_3c != 0)) {
      local_c = (uint *)piVar9[7];
      iVar15 = piVar9[8];
      if (iVar15 <= (int)local_c) {
        if (iVar15 == 0) {
          iVar15 = 0x33;
        }
        else {
          iVar15 = iVar15 * 2;
        }
        uVar16 = FUN_00552390(*piVar9,piVar9[1],iVar15 * 0x14);
        if (uVar16 == 0) goto LAB_0056a078;
        iVar15 = *piVar9;
        if (((iVar15 == 0) || (uVar16 < *(uint *)(iVar15 + 0x104))) ||
           (*(uint *)(iVar15 + 0x108) <= uVar16)) {
          uVar17 = (*DAT_00766608._4_4_)(uVar16);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar15 + 0xe8);
        }
        piVar9[8] = uVar17 / 0x14;
        piVar9[1] = uVar16;
      }
      iVar15 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(undefined2 *)(iVar15 + (int)local_c * 0x14) = 0x3b;
      *(undefined1 *)(iVar15 + 3 + (int)local_c * 0x14) = 0;
      *(int *)(iVar15 + 4 + (int)local_c * 0x14) = local_18;
      *(undefined4 *)(iVar15 + 8 + (int)local_c * 0x14) = 0;
      *(undefined4 *)(iVar15 + 0xc + (int)local_c * 0x14) = 0;
      *(undefined4 *)(iVar15 + 0x10 + (int)local_c * 0x14) = 0;
    }
LAB_0056a078:
    iVar15 = local_38;
    if ((-1 < (int)uVar13) && (uVar13 < (uint)piVar9[7])) {
      *(int *)(piVar9[1] + 8 + uVar13 * 0x14) = piVar9[7];
    }
    if (local_38 != 0) {
      FUN_00557cc0(param_1,local_8,0,local_2c);
    }
    FUN_00550e30(param_1,local_8,local_18,local_2c,local_40,1,0,0);
    if ((iVar15 != 0) && ((*(uint *)(*param_1 + 0x18) & 0x40000) != 0)) {
      local_c = (uint *)*local_8;
      uVar13 = 0;
      if (local_c != (uint *)0x0) {
        bVar4 = (byte)*local_c;
        puVar21 = local_c;
        while (bVar4 != 0) {
          puVar21 = (uint *)((int)puVar21 + 1);
          bVar4 = *(byte *)puVar21;
        }
        uVar13 = (int)puVar21 - (int)local_c & 0x3fffffff;
      }
      local_4c = (uint *)(local_8[0x10] + 0x38);
      if (*(int *)(local_8[0x10] + 0x44) == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = 0;
        local_34 = local_c;
        if (uVar13 != 0) {
          uVar16 = 0;
          uVar17 = uVar13;
          do {
            uVar8 = *local_34;
            local_34 = (uint *)((int)local_34 + 1);
            uVar17 = uVar17 - 1;
            uVar16 = uVar16 ^ (uint)(byte)(&DAT_007120d8)[(byte)uVar8] ^ uVar16 * 8;
            piVar9 = local_30;
          } while (0 < (int)uVar17);
        }
        uVar16 = uVar16 % *local_4c;
      }
      iVar15 = FUN_00537190(local_4c,local_c,uVar13,uVar16);
      piVar12 = local_8;
      if (iVar15 != 0) {
        for (iVar15 = *(int *)(iVar15 + 8); iVar15 != 0; iVar15 = *(int *)(iVar15 + 0xc)) {
          iVar10 = FUN_00537450(param_1,piVar12,iVar15,param_3);
          if (iVar10 != 0) {
            FUN_00550470(param_1,iVar10,piVar12,local_28,2,0);
          }
          piVar9 = local_30;
        }
      }
    }
  }
  if (((*(byte *)(local_1c + 0x18) & 0x10) != 0) && (param_1[0x6d] == 0)) {
    iVar15 = piVar9[7];
    iVar10 = piVar9[8];
    if (iVar10 <= iVar15) {
      if (iVar10 == 0) {
        iVar10 = 0x33;
      }
      else {
        iVar10 = iVar10 * 2;
      }
      uVar13 = FUN_00552390(*piVar9,piVar9[1],iVar10 * 0x14);
      if (uVar13 == 0) goto LAB_0056a25d;
      iVar10 = *piVar9;
      if (((iVar10 == 0) || (uVar13 < *(uint *)(iVar10 + 0x104))) ||
         (*(uint *)(iVar10 + 0x108) <= uVar13)) {
        uVar16 = (*DAT_00766608._4_4_)(uVar13);
      }
      else {
        uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
      }
      piVar9[8] = uVar16 / 0x14;
      piVar9[1] = uVar13;
    }
    iVar10 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(undefined2 *)(iVar10 + iVar15 * 0x14) = 0x14;
    *(undefined1 *)(iVar10 + 3 + iVar15 * 0x14) = 0;
    *(int *)(iVar10 + 4 + iVar15 * 0x14) = local_64;
    *(undefined4 *)(iVar10 + 8 + iVar15 * 0x14) = 1;
    *(undefined4 *)(iVar10 + 0xc + iVar15 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0x10 + iVar15 * 0x14) = 0;
  }
LAB_0056a25d:
  FUN_00550410(param_1,local_48,0x6b,param_3,2,local_8,local_28,param_5,local_10);
  iVar15 = piVar9[7];
  iVar10 = piVar9[8];
  if (iVar15 < iVar10) {
LAB_0056a2ea:
    iVar10 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(undefined2 *)(iVar10 + iVar15 * 0x14) = 1;
    *(undefined1 *)(iVar10 + 3 + iVar15 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 4 + iVar15 * 0x14) = 0;
    *(uint *)(iVar10 + 8 + iVar15 * 0x14) = local_10;
    *(undefined4 *)(iVar10 + 0xc + iVar15 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0x10 + iVar15 * 0x14) = 0;
  }
  else {
    if (iVar10 == 0) {
      iVar10 = 0x33;
    }
    else {
      iVar10 = iVar10 * 2;
    }
    uVar13 = FUN_00552390(*piVar9,piVar9[1],iVar10 * 0x14);
    if (uVar13 != 0) {
      iVar10 = *piVar9;
      if (((iVar10 == 0) || (uVar13 < *(uint *)(iVar10 + 0x104))) ||
         (*(uint *)(iVar10 + 0x108) <= uVar13)) {
        uVar16 = (*DAT_00766608._4_4_)(uVar13);
      }
      else {
        uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
      }
      piVar9[8] = uVar16 / 0x14;
      piVar9[1] = uVar13;
      goto LAB_0056a2ea;
    }
  }
  if ((-1 < (int)local_10) && (local_10 < (uint)piVar9[7])) {
    *(int *)(piVar9[1] + 8 + local_10 * 0x14) = piVar9[7];
  }
  iVar15 = 0;
  for (local_50 = local_8[2]; local_50 != 0; local_50 = *(uint *)(local_50 + 0x14)) {
    if ((local_44 != 0) || (0 < local_40[iVar15])) {
      local_c = (uint *)piVar9[7];
      iVar10 = piVar9[8];
      if (iVar10 <= (int)local_c) {
        if (iVar10 == 0) {
          iVar10 = 0x33;
        }
        else {
          iVar10 = iVar10 * 2;
        }
        uVar13 = FUN_00552390(*piVar9,piVar9[1],iVar10 * 0x14);
        if (uVar13 == 0) goto LAB_0056a408;
        iVar10 = *piVar9;
        if (((iVar10 == 0) || (uVar13 < *(uint *)(iVar10 + 0x104))) ||
           (*(uint *)(iVar10 + 0x108) <= uVar13)) {
          uVar16 = (*DAT_00766608._4_4_)(uVar13);
        }
        else {
          uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
        }
        piVar9[8] = uVar16 / 0x14;
        piVar9[1] = uVar13;
      }
      piVar9[7] = piVar9[7] + 1;
      puVar2 = (undefined2 *)(piVar9[1] + (int)local_c * 0x14);
      *puVar2 = 0x2d;
      *(undefined1 *)((int)puVar2 + 3) = 0;
      *(int *)(puVar2 + 2) = local_18 + 1 + iVar15;
      *(undefined4 *)(puVar2 + 4) = 0;
      *(undefined4 *)(puVar2 + 6) = 0;
      *(undefined4 *)(puVar2 + 8) = 0;
    }
LAB_0056a408:
    iVar15 = iVar15 + 1;
  }
  iVar15 = piVar9[7];
  iVar10 = piVar9[8];
  if (iVar15 < iVar10) {
LAB_0056a483:
    iVar10 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(undefined2 *)(iVar10 + iVar15 * 0x14) = 0x2d;
    *(undefined1 *)(iVar10 + 3 + iVar15 * 0x14) = 0;
    *(int *)(iVar10 + 4 + iVar15 * 0x14) = local_18;
    *(undefined4 *)(iVar10 + 8 + iVar15 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0xc + iVar15 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0x10 + iVar15 * 0x14) = 0;
  }
  else {
    if (iVar10 == 0) {
      iVar10 = 0x33;
    }
    else {
      iVar10 = iVar10 * 2;
    }
    uVar13 = FUN_00552390(*piVar9,piVar9[1],iVar10 * 0x14);
    if (uVar13 != 0) {
      iVar10 = *piVar9;
      if (((iVar10 == 0) || (uVar13 < *(uint *)(iVar10 + 0x104))) ||
         (*(uint *)(iVar10 + 0x108) <= uVar13)) {
        uVar16 = (*DAT_00766608._4_4_)(uVar13);
      }
      else {
        uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
      }
      piVar9[8] = uVar16 / 0x14;
      piVar9[1] = uVar13;
      goto LAB_0056a483;
    }
  }
  if ((*(char *)((int)param_1 + 0x12) == '\0') && (param_1[0x6d] == 0)) {
    FUN_0054b260(param_1);
  }
  iVar15 = local_14;
  if ((((*(byte *)(local_1c + 0x18) & 0x10) == 0) || (param_1[0x6d] != 0)) ||
     (*(char *)((int)param_1 + 0x12) != '\0')) goto LAB_0056a7bd;
  iVar15 = piVar9[7];
  iVar10 = piVar9[8];
  if (iVar15 < iVar10) {
LAB_0056a564:
    iVar10 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(undefined2 *)(iVar10 + iVar15 * 0x14) = 0x10;
    *(undefined1 *)(iVar10 + 3 + iVar15 * 0x14) = 0;
    *(int *)(iVar10 + 4 + iVar15 * 0x14) = local_64;
    *(undefined4 *)(iVar10 + 8 + iVar15 * 0x14) = 1;
    *(undefined4 *)(iVar10 + 0xc + iVar15 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0x10 + iVar15 * 0x14) = 0;
  }
  else {
    if (iVar10 == 0) {
      iVar10 = 0x33;
    }
    else {
      iVar10 = iVar10 * 2;
    }
    uVar13 = FUN_00552390(*piVar9,piVar9[1],iVar10 * 0x14);
    if (uVar13 != 0) {
      iVar10 = *piVar9;
      if (((iVar10 == 0) || (uVar13 < *(uint *)(iVar10 + 0x104))) ||
         (*(uint *)(iVar10 + 0x108) <= uVar13)) {
        uVar16 = (*DAT_00766608._4_4_)(uVar13);
      }
      else {
        uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
      }
      piVar9[8] = uVar16 / 0x14;
      piVar9[1] = uVar13;
      goto LAB_0056a564;
    }
  }
  iVar15 = *piVar9;
  FUN_00545650(piVar9[4],(uint)*(ushort *)(piVar9 + 0xb) * 2);
  FUN_005521a0(iVar15,piVar9[4]);
  *(undefined2 *)(piVar9 + 0xb) = 1;
  piVar12 = (int *)FUN_00552230(iVar15,0x50);
  if (piVar12 != (int *)0x0) {
    memset(piVar12,0,0x50);
  }
  piVar9[4] = (int)piVar12;
  if (piVar12 != (int *)0x0) {
    *(undefined2 *)(piVar12 + 7) = 1;
    *piVar12 = *piVar9;
    *(undefined2 *)(piVar12 + 0x11) = 1;
    piVar12[10] = *piVar9;
  }
  iVar15 = local_14;
  if (*(char *)(*piVar9 + 0x38) == '\0') {
    piVar9 = (int *)piVar9[4];
    if (*piVar9 == 0) {
      iVar15 = 1000000000;
    }
    else {
      iVar15 = *(int *)(*piVar9 + 0x50);
    }
    iVar10 = 0;
    if (-1 < iVar15) {
      do {
        if ("rows updated"[iVar10] == '\0') break;
        iVar10 = iVar10 + 1;
      } while (iVar10 <= iVar15);
    }
    uVar5 = *(ushort *)(piVar9 + 7);
    if ((uVar5 & 0x2460) != 0) {
      if ((uVar5 & 0x2000) == 0) {
        if (((uVar5 & 0x400) == 0) || ((code *)piVar9[8] == (code *)0x0)) {
          if ((uVar5 & 0x20) == 0) {
            if ((uVar5 & 0x40) != 0) {
              piVar12 = (int *)piVar9[4];
              piVar12[1] = *(int *)(*piVar12 + 0xa4);
              *(int **)(*piVar12 + 0xa4) = piVar12;
              if ((*(byte *)(piVar9 + 7) & 0x20) != 0) {
                FUN_005644e0(piVar9[4]);
              }
              *(ushort *)(piVar9 + 7) = *(ushort *)(piVar9 + 7) & 0xbe01 | 1;
              *(undefined1 *)((int)piVar9 + 0x1e) = 5;
            }
          }
          else {
            FUN_005644e0(piVar9[4]);
          }
        }
        else {
          (*(code *)piVar9[8])(piVar9[1]);
          piVar9[8] = 0;
        }
      }
      else {
        FUN_00574670(piVar9,piVar9[4]);
        FUN_00574d40(piVar9);
      }
    }
    FUN_005521a0(*piVar9,piVar9[9]);
    piVar9[9] = 0;
    piVar9[8] = 0;
    piVar9[1] = (int)"rows updated";
    piVar9[6] = iVar10;
    *(undefined2 *)(piVar9 + 7) = 0xa02;
    *(undefined2 *)((int)piVar9 + 0x1e) = 0x103;
    iVar15 = local_14;
  }
LAB_0056a7bd:
  if (local_74._4_4_ != 0) {
    *(undefined4 *)(local_74._4_4_ + 0x204) = (undefined4)local_74;
  }
  FUN_005521a0(local_1c,local_40);
  iVar10 = local_1c;
  FUN_005521a0(local_1c,iVar15);
  FUN_00567370(iVar10,local_6c);
  FUN_00556700(iVar10,param_3);
  FUN_00555e30(iVar10,param_4);
  return;
}


/* FUN_0056a8f0 @ 0056a8f0  kind=lib  attributed-by=lib-island  size=77 */

int FUN_0056a8f0(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  
  iVar3 = 0;
  if (param_2 < 0) {
    pbVar4 = (byte *)0xffffffff;
  }
  else {
    pbVar4 = param_1 + param_2;
  }
  bVar2 = *param_1;
  while ((bVar2 != 0 && (param_1 < pbVar4))) {
    bVar2 = *param_1;
    param_1 = param_1 + 1;
    if (0xbf < bVar2) {
      bVar2 = *param_1;
      while ((bVar2 & 0xc0) == 0x80) {
        pbVar1 = param_1 + 1;
        param_1 = param_1 + 1;
        bVar2 = *pbVar1;
      }
    }
    iVar3 = iVar3 + 1;
    bVar2 = *param_1;
  }
  return iVar3;
}


/* FUN_0056a9b0 @ 0056a9b0  kind=lib  attributed-by=lib-island  size=118 */

void FUN_0056a9b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int local_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  char local_54;
  undefined2 local_53;
  undefined1 local_50 [72];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_68 = local_50;
  local_58 = *(undefined4 *)(param_1 + 0x50);
  local_60 = 0;
  local_5c = 0x46;
  local_53 = 1;
  local_54 = '\0';
  local_6c = param_1;
  local_64 = local_68;
  FUN_0056aa30(&local_6c,1,param_2,param_3);
  FUN_00567fb0(&local_6c);
  if (local_54 != '\0') {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0056aa30 @ 0056aa30  kind=lib  attributed-by=lib-island  size=3513 */

/* WARNING: Removing unreachable block (ram,0x0056b033) */

void FUN_0056aa30(int param_1,int param_2,byte *param_3,double *param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  char cVar6;
  int iVar7;
  int extraout_ECX;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *unaff_EBX;
  byte *pbVar11;
  char *pcVar12;
  double *pdVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  int *piVar17;
  bool bVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  longlong lVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  byte *local_a4;
  uint local_a0;
  byte *local_9c;
  undefined8 local_98;
  byte *local_90;
  byte *local_8c;
  undefined1 *local_88;
  byte *local_80;
  int local_7c;
  byte *local_78;
  byte *local_74;
  byte *local_70;
  char local_6a;
  char local_69;
  byte local_68;
  bool local_67;
  bool local_66;
  char local_65;
  byte *local_64;
  byte local_5d;
  byte *local_5c;
  double *local_58;
  char local_52;
  byte local_51;
  byte local_50;
  int local_4f [17];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  bVar4 = *param_3;
  pbVar15 = (byte *)0x0;
  local_5c = (byte *)0x0;
  local_7c = param_1;
  local_58 = param_4;
  do {
    if (bVar4 == 0) {
switchD_0056acc6_default:
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    pbVar11 = param_3;
    if (bVar4 != 0x25) {
      local_78 = param_3 + 1;
      iVar7 = 1;
      bVar4 = *local_78;
      while ((bVar4 != 0x25 && (bVar18 = bVar4 != 0, bVar4 = 0, bVar18))) {
        pbVar15 = local_78 + 1;
        local_78 = local_78 + 1;
        iVar7 = iVar7 + 1;
        bVar4 = *pbVar15;
      }
      local_5c = param_3;
      FUN_00567e70(local_7c,param_3,iVar7);
      pbVar11 = local_78;
      pbVar15 = param_3;
      if (bVar4 == 0) goto switchD_0056acc6_default;
    }
    iVar7 = (int)(char)pbVar11[1];
    pbVar11 = pbVar11 + 1;
    if (iVar7 == 0) {
      FUN_00567e70(local_7c,&DAT_007020e0,1);
      goto switchD_0056acc6_default;
    }
    local_69 = '\0';
    local_67 = false;
    local_68 = 0;
    local_51 = 0;
    local_5d = 0;
    local_65 = '\0';
    do {
      switch(iVar7) {
      case 0x20:
        local_51 = 1;
        break;
      case 0x21:
        local_67 = true;
        break;
      default:
        goto switchD_0056ab24_caseD_22;
      case 0x23:
        local_68 = 1;
        break;
      case 0x2b:
        local_5d = 1;
        break;
      case 0x2d:
        local_65 = '\x01';
        break;
      case 0x30:
        local_69 = '\x01';
      }
      iVar7 = (int)(char)pbVar11[1];
      pbVar11 = pbVar11 + 1;
    } while (iVar7 != 0);
switchD_0056ab24_caseD_22:
    local_64 = (byte *)0x0;
    if (iVar7 == 0x2a) {
      local_64 = *(byte **)local_58;
      local_58 = (double *)((int)local_58 + 4);
      if ((int)local_64 < 0) {
        local_64 = (byte *)-(int)local_64;
        local_65 = '\x01';
      }
      iVar7 = (int)(char)pbVar11[1];
      pbVar11 = pbVar11 + 1;
    }
    else if (0x2f < iVar7) {
      local_64 = (byte *)0x0;
      do {
        pbVar15 = local_5c;
        if (0x39 < iVar7) break;
        pbVar11 = pbVar11 + 1;
        local_64 = (byte *)(iVar7 + ((int)local_64 * 5 + -0x18) * 2);
        iVar7 = (int)(char)*pbVar11;
      } while (0x2f < iVar7);
    }
    if (iVar7 == 0x2e) {
      iVar7 = (int)(char)pbVar11[1];
      local_78 = pbVar11 + 1;
      local_74 = (byte *)0x0;
      if (iVar7 == 0x2a) {
        local_74 = *(byte **)local_58;
        if ((int)local_74 < 0) {
          local_74 = (byte *)-(int)local_74;
        }
        iVar7 = (int)(char)pbVar11[2];
        local_78 = pbVar11 + 2;
        local_58 = (double *)((int)local_58 + 4);
      }
      else {
        while ((0x2f < iVar7 && (iVar7 < 0x3a))) {
          local_78 = local_78 + 1;
          local_74 = (byte *)(iVar7 + ((int)local_74 * 5 + -0x18) * 2);
          iVar7 = (int)(char)*local_78;
        }
      }
    }
    else {
      local_74 = (byte *)0xffffffff;
      local_78 = pbVar11;
    }
    if (iVar7 == 0x6c) {
      iVar7 = (int)(char)local_78[1];
      local_66 = true;
      pbVar11 = local_78 + 1;
      if (iVar7 != 0x6c) goto LAB_0056ac3d;
      iVar7 = (int)(char)local_78[2];
      local_78 = local_78 + 2;
      local_6a = '\x01';
    }
    else {
      local_66 = false;
      pbVar11 = local_78;
LAB_0056ac3d:
      local_78 = pbVar11;
      local_6a = '\0';
    }
    local_88 = &DAT_00712570;
    local_52 = '\0';
    local_8c = (byte *)0x0;
    pcVar12 = "d\n\x01\x01";
    do {
      if (iVar7 == *pcVar12) {
        iVar7 = (int)local_8c * 6;
        local_88 = &DAT_00712570 + iVar7;
        if ((param_2 == 0) && (((&DAT_00712572)[iVar7] & 2) != 0)) goto switchD_0056acc6_default;
        local_52 = (&DAT_00712573)[iVar7];
        break;
      }
      local_8c = local_8c + 1;
      pcVar12 = pcVar12 + 6;
    } while ((int)pcVar12 < 0x7125fa);
    local_8c = (byte *)0x0;
    switch(local_52) {
    case '\x01':
    case '\x10':
      cVar6 = local_6a;
      goto LAB_0056acd9;
    case '\x02':
    case '\x03':
    case '\x04':
      pdVar13 = local_58 + 1;
      local_98 = *local_58;
      if ((int)local_74 < 0) {
        local_74 = (byte *)0x6;
      }
      if (0.0 <= local_98) {
        if (local_5d == 0) {
          local_51 = -(local_51 != 0) & 0x20;
        }
        else {
          local_51 = 0x2b;
        }
      }
      else {
        local_98 = -local_98;
        local_51 = 0x2d;
      }
      if ((local_52 == '\x04') && (0 < (int)local_74)) {
        local_74 = local_74 + -1;
      }
      dVar19 = 0.5;
      pbVar15 = local_74;
      if (7 < (int)local_74) {
        iVar7 = ((uint)(local_74 + -8) >> 3) + 1;
        pbVar15 = local_74 + iVar7 * -8;
        do {
          dVar19 = dVar19 * 0.1 * 0.1 * 0.1 * 0.1 * 0.1 * 0.1 * 0.1 * 0.1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      for (; 0 < (int)pbVar15; pbVar15 = pbVar15 + -1) {
        dVar19 = dVar19 * 0.1;
      }
      if (local_52 == '\x02') {
        local_98 = local_98 + dVar19;
      }
      pbVar15 = (byte *)0x0;
      local_80 = (byte *)0x0;
      local_58 = pdVar13;
      if (0.0 < local_98) {
        dVar20 = 1.0;
        if (1e+100 <= local_98) {
          do {
            local_80 = pbVar15;
            if (0x15e < (int)pbVar15) break;
            dVar20 = dVar20 * 1e+100;
            pbVar15 = pbVar15 + 100;
            local_80 = pbVar15;
          } while (dVar20 * 1e+100 <= local_98);
        }
        for (; (dVar20 * 1e+64 <= local_98 && ((int)local_80 < 0x15f)); local_80 = local_80 + 0x40)
        {
          dVar20 = dVar20 * 1e+64;
        }
        for (; (dVar20 * 100000000.0 <= local_98 && ((int)local_80 < 0x15f));
            local_80 = local_80 + 8) {
          dVar20 = dVar20 * 100000000.0;
        }
        for (; (dVar20 * 10.0 <= local_98 && ((int)local_80 < 0x15f)); local_80 = local_80 + 1) {
          dVar20 = dVar20 * 10.0;
        }
        for (local_98 = local_98 / dVar20; local_98 < 1e-08; local_98 = local_98 * 100000000.0) {
          local_80 = local_80 + -8;
        }
        for (; local_98 < 1.0; local_98 = local_98 * 10.0) {
          local_80 = local_80 + -1;
        }
        if (0x15e < (int)local_80) {
          if (local_51 == 0x2d) {
            local_5c = &DAT_0071686c;
          }
          else {
            local_5c = &DAT_00716874;
            if (local_51 != 0x2b) {
              local_5c = &DAT_0071687c;
            }
          }
          if (local_5c == (byte *)0x0) goto LAB_0056b764;
          bVar4 = *local_5c;
          pbVar15 = local_5c;
          while (bVar4 != 0) {
            pbVar15 = pbVar15 + 1;
            bVar4 = *pbVar15;
          }
LAB_0056b1a6:
          pbVar11 = (byte *)((int)pbVar15 - (int)local_5c & 0x3fffffff);
          pbVar15 = local_5c;
          break;
        }
      }
      pbVar15 = &local_50;
      if ((local_52 != '\x02') && (local_98 = local_98 + dVar19, 10.0 <= local_98)) {
        local_98 = local_98 * 0.1;
        local_80 = local_80 + 1;
      }
      local_70 = local_80;
      if (local_52 == '\x04') {
        local_66 = local_68 == 0;
        if (((int)local_80 < -4) || ((int)local_74 < (int)local_80)) {
          local_52 = '\x03';
LAB_0056b20c:
          local_70 = (byte *)0x0;
        }
        else {
          local_74 = local_74 + -(int)local_80;
          local_52 = '\x02';
        }
      }
      else {
        local_66 = local_67;
        if (local_52 == '\x03') goto LAB_0056b20c;
      }
      if ((0x37 < (int)(local_70 + (int)local_74 + (int)local_64)) &&
         (pbVar15 = (byte *)FUN_0055da00(local_70 + (int)local_74 + (int)local_64 + 0xf),
         local_8c = pbVar15, pbVar15 == (byte *)0x0)) goto LAB_0056b687;
      local_90 = (byte *)((uint)local_67 * 10 + 0x10);
      local_5d = 0 < (int)local_74 | local_67 | local_68;
      pbVar11 = pbVar15;
      if (local_51 != 0) {
        *pbVar15 = local_51;
        pbVar11 = pbVar15 + 1;
      }
      dVar19 = local_98;
      if ((int)local_70 < 0) {
        *pbVar11 = 0x30;
        pbVar11 = pbVar11 + 1;
      }
      else {
        do {
          if ((int)local_90 < 1) {
            bVar4 = 0x30;
          }
          else {
            local_90 = local_90 + -1;
            bVar4 = (char)(int)dVar19 + 0x30;
            dVar19 = (dVar19 - (double)(int)dVar19) * 10.0;
          }
          *pbVar11 = bVar4;
          pbVar11 = pbVar11 + 1;
          local_70 = local_70 + -1;
        } while (-1 < (int)local_70);
      }
      if (local_5d != 0) {
        *pbVar11 = 0x2e;
        pbVar11 = pbVar11 + 1;
      }
      pbVar5 = local_70 + 1;
      pbVar14 = local_90;
      pbVar10 = local_74;
      if ((int)pbVar5 < 0) {
        local_70 = (byte *)-(int)pbVar5;
        pbVar16 = pbVar11;
        for (uVar9 = (uint)local_70 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          pbVar16[0] = 0x30;
          pbVar16[1] = 0x30;
          pbVar16[2] = 0x30;
          pbVar16[3] = 0x30;
          pbVar16 = pbVar16 + 4;
        }
        pbVar11 = pbVar11 + (int)local_70;
        pbVar10 = local_74 + (int)pbVar5;
        for (uVar9 = (uint)local_70 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pbVar16 = 0x30;
          pbVar16 = pbVar16 + 1;
        }
      }
      while (0 < (int)pbVar10) {
        if ((int)pbVar14 < 1) {
          bVar4 = 0x30;
        }
        else {
          pbVar14 = pbVar14 + -1;
          bVar4 = (char)(int)dVar19 + 0x30;
          dVar19 = (dVar19 - (double)(int)dVar19) * 10.0;
        }
        *pbVar11 = bVar4;
        pbVar11 = pbVar11 + 1;
        pbVar10 = pbVar10 + -1;
      }
      if ((local_66 != false) && (local_5d != 0)) {
        bVar4 = pbVar11[-1];
        pbVar14 = pbVar11 + -1;
        while (pbVar10 = pbVar14, bVar4 == 0x30) {
          *pbVar10 = 0;
          pbVar14 = pbVar10 + -1;
          pbVar11 = pbVar10;
          bVar4 = pbVar10[-1];
        }
        if (pbVar11[-1] == 0x2e) {
          if (local_67 == false) {
            pbVar11 = pbVar11 + -1;
            *pbVar11 = 0;
          }
          else {
            *pbVar11 = 0x30;
            pbVar11 = pbVar11 + 1;
          }
        }
      }
      if (local_52 == '\x03') {
        *pbVar11 = "0123456789ABCDEF0123456789abcdef"[(byte)local_88[4]];
        if ((int)local_80 < 0) {
          pbVar11[1] = 0x2d;
          local_80 = (byte *)-(int)local_80;
        }
        else {
          pbVar11[1] = 0x2b;
        }
        pbVar14 = pbVar11 + 2;
        if (99 < (int)local_80) {
          *pbVar14 = (char)((int)local_80 / 100) + 0x30;
          pbVar14 = pbVar11 + 3;
          local_80 = (byte *)((int)local_80 % 100);
        }
        cVar6 = (char)((int)local_80 / 10);
        *pbVar14 = cVar6 + 0x30;
        pbVar14[1] = (char)local_80 + cVar6 * -10 + 0x30;
        pbVar11 = pbVar14 + 2;
      }
      *pbVar11 = 0;
      pbVar11 = pbVar11 + -(int)pbVar15;
      local_5c = pbVar15;
      if (local_69 == '\0') break;
      if (local_65 == '\0') {
        if ((int)pbVar11 < (int)local_64) {
          uVar9 = (int)local_64 - (int)pbVar11;
          if ((int)uVar9 <= (int)local_64) {
            pbVar11 = local_64;
            do {
              pbVar15[(int)pbVar11] = pbVar15[(int)pbVar11 - uVar9];
              pbVar11 = pbVar11 + -1;
            } while ((int)uVar9 <= (int)pbVar11);
          }
          pbVar11 = local_64;
          if (uVar9 != 0) {
            pbVar14 = pbVar15 + (local_51 != 0);
            for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              pbVar14[0] = 0x30;
              pbVar14[1] = 0x30;
              pbVar14[2] = 0x30;
              pbVar14[3] = 0x30;
              pbVar14 = pbVar14 + 4;
            }
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pbVar14 = 0x30;
              pbVar14 = pbVar14 + 1;
            }
          }
        }
        goto LAB_0056b76f;
      }
      goto LAB_0056b781;
    case '\x05':
      **(undefined4 **)local_58 = *(undefined4 *)(local_7c + 0xc);
      local_64 = (byte *)0x0;
      pbVar11 = (byte *)0x0;
      local_58 = (double *)((int)local_58 + 4);
      break;
    case '\x06':
    case '\a':
      pdVar13 = (double *)((int)local_58 + 4);
      local_5c = *(byte **)local_58;
      if (local_5c == (byte *)0x0) {
        local_5c = &DAT_006fc918;
      }
      else {
        local_8c = (byte *)0x0;
        if (local_52 == '\a') {
          local_8c = local_5c;
        }
      }
      pbVar15 = local_5c;
      local_58 = pdVar13;
      if ((int)local_74 < 0) {
        if (local_5c == (byte *)0x0) {
LAB_0056b764:
          pbVar11 = (byte *)0x0;
          pbVar15 = local_5c;
        }
        else {
          pbVar11 = local_5c;
          if (*local_5c == 0) goto LAB_0056b1a6;
          do {
            pbVar11 = pbVar11 + 1;
          } while (*pbVar11 != 0);
          pbVar11 = (byte *)((int)pbVar11 - (int)local_5c & 0x3fffffff);
        }
      }
      else {
        pbVar11 = (byte *)0x0;
        if (0 < (int)local_74) {
          do {
            if (local_5c[(int)pbVar11] == 0) break;
            pbVar11 = pbVar11 + 1;
          } while ((int)pbVar11 < (int)local_74);
        }
      }
      break;
    case '\b':
      local_50 = 0x25;
      pbVar11 = (byte *)0x1;
      pbVar15 = &local_50;
      local_5c = &local_50;
      break;
    case '\t':
      local_50 = (byte)*(uint *)local_58;
      if ((int)local_74 < 0) {
        pbVar11 = (byte *)0x1;
        pbVar15 = &local_50;
        local_5c = &local_50;
        local_58 = (double *)((int)local_58 + 4);
      }
      else {
        if (1 < (int)local_74) {
          iVar7 = (*(uint *)local_58 & 0xff) * 0x1010101;
          piVar17 = local_4f;
          for (uVar9 = (uint)(local_74 + -1) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *piVar17 = iVar7;
            piVar17 = piVar17 + 1;
          }
          for (uVar9 = (uint)(local_74 + -1) & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(char *)piVar17 = (char)iVar7;
            piVar17 = (int *)((int)piVar17 + 1);
          }
        }
        pbVar11 = local_74;
        pbVar15 = &local_50;
        local_5c = &local_50;
        local_58 = (double *)((int)local_58 + 4);
      }
      break;
    case '\n':
    case '\v':
    case '\x0f':
      local_70 = (byte *)0x27;
      if (local_52 == '\x0f') {
        local_70 = (byte *)0x22;
      }
      local_80 = *(byte **)local_58;
      local_58 = (double *)((int)local_58 + 4);
      bVar18 = local_80 == (byte *)0x0;
      local_98 = (double)(ulonglong)CONCAT14(bVar18,(undefined4)local_98);
      if ((bVar18) && (local_80 = &DAT_00716880, local_52 != '\v')) {
        local_80 = &DAT_00716888;
      }
      iVar7 = 0;
      pbVar15 = local_74;
      for (local_90 = (byte *)0x0; (pbVar15 != (byte *)0x0 && (local_90[(int)local_80] != 0));
          local_90 = local_90 + 1) {
        if (local_90[(int)local_80] == (byte)local_70) {
          iVar7 = iVar7 + 1;
        }
        pbVar15 = pbVar15 + -1;
      }
      if ((bVar18) || (local_52 != '\v')) {
        local_88 = (undefined1 *)0x0;
      }
      else {
        local_88 = (undefined1 *)0x1;
      }
      pbVar15 = local_90 + iVar7 + 1 + (int)local_88 * 2;
      if ((int)pbVar15 < 0x47) {
        local_5c = &local_50;
      }
      else {
        if (pbVar15 + -1 < (byte *)0x7ffffeff) {
          if (DAT_007665e0 == 0) {
            local_a4 = (byte *)(*DAT_00766600)(pbVar15);
          }
          else {
            if (DAT_0076b488 != 0) {
              (*DAT_00766630)(DAT_0076b488);
            }
            FUN_0053dcf0(pbVar15,&local_a4);
            if (DAT_0076b488 != 0) {
              (*DAT_00766638)(DAT_0076b488);
            }
          }
        }
        else {
          local_a4 = (byte *)0x0;
        }
        local_8c = local_a4;
        local_5c = local_a4;
        if (local_a4 == (byte *)0x0) goto LAB_0056b687;
      }
      bVar4 = (byte)local_70;
      if (local_88 != (undefined1 *)0x0) {
        *local_5c = bVar4;
      }
      pbVar11 = (byte *)(uint)(local_88 != (undefined1 *)0x0);
      iVar7 = 0;
      pbVar15 = pbVar11;
      if (0 < (int)local_90) {
        do {
          pbVar11 = pbVar15 + 1;
          bVar1 = local_80[iVar7];
          local_5c[(int)pbVar15] = bVar1;
          if (bVar1 == bVar4) {
            local_5c[(int)pbVar11] = bVar1;
            pbVar11 = pbVar15 + 2;
          }
          iVar7 = iVar7 + 1;
          pbVar15 = pbVar11;
        } while (iVar7 < (int)local_90);
      }
      if (local_88 != (undefined1 *)0x0) {
        local_5c[(int)pbVar11] = bVar4;
        pbVar11 = pbVar11 + 1;
      }
      local_5c[(int)pbVar11] = 0;
      pbVar15 = local_5c;
      break;
    case '\f':
      pdVar13 = (double *)((int)local_58 + 4);
      puVar2 = *(undefined4 **)local_58;
      local_58 = pdVar13;
      if (puVar2 != (undefined4 *)0x0) {
        uVar24 = puVar2[1];
        uVar23 = *puVar2;
        goto LAB_0056b705;
      }
      goto LAB_0056b710;
    case '\r':
      pdVar13 = local_58 + 1;
      iVar7 = *(int *)local_58;
      local_98 = (double)CONCAT44(*(int *)((int)local_58 + 4) * 9,(undefined4)local_98);
      iVar3 = *(int *)(iVar7 + 0xc + *(int *)((int)local_58 + 4) * 0x48);
      local_58 = pdVar13;
      if (iVar3 != 0) {
        FUN_00567e70(local_7c,iVar3,0xffffffff);
        FUN_00567e70(local_7c,&DAT_00716890,1);
      }
      uVar24 = 0xffffffff;
      uVar23 = *(undefined4 *)(iVar7 + 0x10 + local_98._4_4_ * 8);
LAB_0056b705:
      FUN_00567e70(local_7c,uVar23,uVar24);
LAB_0056b710:
      local_64 = (byte *)0x0;
      pbVar11 = (byte *)0x0;
      break;
    case '\x0e':
      cVar6 = '\0';
LAB_0056acd9:
      if ((local_88[2] & 1) == 0) {
        if (cVar6 == '\0') {
          local_80 = *(byte **)local_58;
          pdVar13 = (double *)((int)local_58 + 4);
          local_5c = (byte *)0x0;
        }
        else {
          local_80 = *(byte **)local_58;
          pdVar13 = local_58 + 1;
          local_5c = *(byte **)((int)local_58 + 4);
        }
        local_51 = 0;
        local_58 = pdVar13;
      }
      else {
        if (cVar6 == '\0') {
          local_80 = *(byte **)local_58;
          local_58 = (double *)((int)local_58 + 4);
          local_5c = (byte *)((int)local_80 >> 0x1f);
        }
        else {
          local_80 = *(byte **)local_58;
          local_5c = *(byte **)((int)local_58 + 4);
          local_58 = local_58 + 1;
        }
        if (((int)local_5c < 1) && ((int)local_5c < 0)) {
          if ((local_80 == (byte *)0x0) && (local_5c == (byte *)0x80000000)) {
            local_51 = 0x2d;
          }
          else {
            bVar18 = local_80 != (byte *)0x0;
            local_80 = (byte *)-(int)local_80;
            local_5c = (byte *)-(int)(local_5c + bVar18);
            local_51 = 0x2d;
          }
        }
        else if (local_5d == 0) {
          local_51 = -(local_51 != 0) & 0x20;
        }
        else {
          local_51 = 0x2b;
        }
      }
      if (local_80 == (byte *)0x0 && local_5c == (byte *)0x0) {
        local_68 = 0;
      }
      if ((local_69 != '\0') && ((int)local_74 < (int)(local_64 + -(uint)(local_51 != 0)))) {
        local_74 = local_64 + -(uint)(local_51 != 0);
      }
      if ((int)local_74 < 0x3c) {
        pbVar15 = (byte *)0x46;
        local_90 = &local_50;
        local_70 = (byte *)0x46;
      }
      else {
        pbVar15 = local_74 + 10;
        local_70 = pbVar15;
        local_90 = (byte *)FUN_0055da00(pbVar15);
        local_8c = local_90;
        if (local_90 == (byte *)0x0) {
LAB_0056b687:
          *(undefined1 *)(local_7c + 0x18) = 1;
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
      pbVar15 = local_90 + (int)(pbVar15 + -1);
      if (local_52 == '\x10') {
        uVar21 = __aulldiv(local_80,local_5c,10,0);
        local_a0 = (uint)uVar21;
        local_9c = local_80 + local_a0 * -10;
        if ((3 < (int)local_9c) || (lVar22 = __aullrem(uVar21,10,0), lVar22 == 1)) {
          local_9c = (byte *)0x0;
        }
        pbVar15[-1] = "thstndrd"[(int)local_9c * 2 + 1];
        pbVar15 = pbVar15 + -2;
        *pbVar15 = "thstndrd"[(int)local_9c * 2];
      }
      lVar22 = CONCAT44(local_5c,local_80);
      local_98 = (double)CONCAT44("0123456789ABCDEF0123456789abcdef" + (byte)local_88[4],
                                  (undefined4)local_98);
      local_a0 = (uint)(byte)local_88[1];
      local_9c = (byte *)0x0;
      do {
        pbVar11 = unaff_EBX;
        pbVar15 = pbVar15 + -1;
        unaff_EBX = pbVar11;
        lVar22 = __aulldvrm(lVar22,local_a0,local_9c);
        *pbVar15 = *(byte *)(extraout_ECX + local_98._4_4_);
        local_80 = pbVar11;
      } while (lVar22 != 0);
      local_5c = pbVar15;
      for (pbVar11 = pbVar15 + (int)(local_74 + (-(int)local_70 - (int)local_90) + 1);
          0 < (int)pbVar11; pbVar11 = pbVar11 + -1) {
        local_5c = local_5c + -1;
        *local_5c = 0x30;
      }
      if (local_51 != 0) {
        local_5c = local_5c + -1;
        *local_5c = local_51;
      }
      if ((local_68 != 0) && (local_88[5] != 0)) {
        pbVar15 = &DAT_00712568 + (byte)local_88[5];
        bVar4 = *pbVar15;
        while (bVar4 != 0) {
          local_5c = local_5c + -1;
          pbVar15 = pbVar15 + 1;
          *local_5c = bVar4;
          bVar4 = *pbVar15;
        }
      }
      pbVar11 = local_90 + (int)(local_70 + (-1 - (int)local_5c));
      pbVar15 = local_5c;
      break;
    default:
      goto switchD_0056acc6_default;
    }
    if (local_65 == '\0') {
LAB_0056b76f:
      if (0 < (int)local_64 - (int)pbVar11) {
        FUN_0054a160(local_7c,(int)local_64 - (int)pbVar11);
      }
    }
LAB_0056b781:
    if (0 < (int)pbVar11) {
      FUN_00567e70(local_7c,pbVar15,pbVar11);
    }
    if ((local_65 != '\0') && (0 < (int)local_64 - (int)pbVar11)) {
      FUN_0054a160(local_7c,(int)local_64 - (int)pbVar11);
    }
    FUN_00524410(local_8c);
    param_3 = local_78 + 1;
    bVar4 = *param_3;
  } while( true );
}


/* FUN_0056b870 @ 0056b870  kind=lib  attributed-by=lib-island  size=147 */

void FUN_0056b870(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[2];
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_0056c7b0(*param_1);
    param_1[2] = piVar2;
    if (piVar2 == (int *)0x0) {
      return;
    }
    FUN_0056bdc0(piVar2,0x94);
  }
  iVar1 = piVar2[7];
  if ((iVar1 < piVar2[8]) || (iVar3 = FUN_0053b4b0(piVar2), iVar3 == 0)) {
    iVar3 = piVar2[1];
    piVar2[7] = piVar2[7] + 1;
    *(undefined2 *)(iVar3 + iVar1 * 0x14) = 0x7f;
    *(undefined1 *)(iVar3 + 3 + iVar1 * 0x14) = 0;
    *(undefined4 *)(iVar3 + 4 + iVar1 * 0x14) = 0;
    *(undefined4 *)(iVar3 + 8 + iVar1 * 0x14) = 0;
    *(undefined4 *)(iVar3 + 0xc + iVar1 * 0x14) = 0;
    *(undefined4 *)(iVar3 + 0x10 + iVar1 * 0x14) = 0;
  }
  piVar2[0x1a] = piVar2[0x1a] | 1;
  if (*(char *)(*(int *)(*(int *)(*piVar2 + 0x10) + 4) + 9) != '\0') {
    piVar2[0x1b] = piVar2[0x1b] | 1;
  }
  return;
}


/* FUN_0056b910 @ 0056b910  kind=lib  attributed-by=lib-island  size=76 */

void FUN_0056b910(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((*(ushort *)(param_1 + 7) & 0x2460) != 0) {
      FUN_00574d80(param_1);
    }
    FUN_005521a0(*param_1,param_1[9]);
    param_1[1] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    FUN_005521a0(*param_1,param_1);
  }
  return;
}


/* FUN_0056b960 @ 0056b960  kind=lib  attributed-by=lib-island  size=801 */

undefined4
FUN_0056b960(int param_1,char *param_2,uint param_3,undefined4 param_4,undefined4 *param_5)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  char cVar6;
  undefined1 *local_10;
  int local_c;
  int *local_8;
  
  piVar5 = (int *)0x0;
  local_8 = (int *)0x0;
  local_c = 1;
  local_10 = &DAT_006fc918;
  if (param_2 == (char *)0x0) {
    *param_5 = 0;
    return 0;
  }
  cVar6 = *param_2;
  if (cVar6 == -0x7c) {
    cVar6 = param_2[0x23];
  }
  if (cVar6 == -100) {
    pcVar1 = *(char **)(param_2 + 8);
    if ((*pcVar1 == -0x7f) || (*pcVar1 == -0x7e)) {
      cVar6 = *pcVar1;
      local_c = -1;
      local_10 = &DAT_00716f48;
      param_2 = pcVar1;
      goto LAB_0056b9c9;
    }
LAB_0056b9f6:
    iVar2 = FUN_0056b960(param_1,*(undefined4 *)(param_2 + 8),param_3,param_4,&local_8);
    if (iVar2 == 0) {
      FUN_00574c50();
      iVar2 = local_8[4];
      if ((iVar2 == 0) && (local_8[5] == -0x80000000)) {
        *(ushort *)(local_8 + 7) = *(ushort *)(local_8 + 7) & 4;
        *(ushort *)(local_8 + 7) = *(ushort *)(local_8 + 7) | 8;
        local_8[2] = 0;
        local_8[3] = 0x43e00000;
      }
      else {
        local_8[4] = -iVar2;
        local_8[5] = -(local_8[5] + (uint)(iVar2 != 0));
      }
      *(ulonglong *)(local_8 + 2) = *(ulonglong *)(local_8 + 2) ^ 0x8000000000000000;
      FUN_0052b5d0(local_8,param_4,param_3);
    }
LAB_0056bc64:
    piVar5 = local_8;
    if (local_8 == (int *)0x0) goto LAB_0056bc74;
  }
  else {
LAB_0056b9c9:
    if (((cVar6 == '^') || (cVar6 == -0x7e)) || (cVar6 == -0x7f)) {
      local_8 = (int *)FUN_00552230(param_1,0x28);
      if (local_8 == (int *)0x0) {
LAB_0056baaa:
        *(undefined1 *)(param_1 + 0x38) = 1;
        FUN_005521a0(param_1,0);
        FUN_0056b910(local_8);
        *param_5 = 0;
        return 7;
      }
      local_8[0] = 0;
      local_8[1] = 0;
      local_8[2] = 0;
      local_8[3] = 0;
      local_8[4] = 0;
      local_8[5] = 0;
      local_8[6] = 0;
      local_8[7] = 0;
      local_8[8] = 0;
      local_8[9] = 0;
      *(undefined2 *)(local_8 + 7) = 1;
      *(undefined1 *)((int)local_8 + 0x1e) = 5;
      *local_8 = param_1;
      if ((*(ushort *)(param_2 + 2) & 0x400) == 0) {
        iVar2 = FUN_0055d980(param_1,&DAT_00716f4c,local_10,*(undefined4 *)(param_2 + 4));
        if (iVar2 == 0) goto LAB_0056baaa;
        if (local_8 != (int *)0x0) {
          FUN_00575040(local_8,iVar2,0xffffffff,1,FUN_0055dc20);
        }
        if (cVar6 != -0x7e) goto LAB_0056bb9e;
        *(undefined1 *)((int)local_8 + 0x1e) = 2;
LAB_0056bbae:
        piVar5 = local_8;
        if ((char)param_4 != 'b') goto LAB_0056bc1c;
        FUN_0052b630();
        if ((*(byte *)(piVar5 + 7) & 8) != 0) {
          FUN_00573cb0();
        }
      }
      else {
        FUN_00574ec0(local_8,(longlong)*(int *)(param_2 + 4) * (longlong)local_c);
LAB_0056bb9e:
        if ((cVar6 == -0x7f) || (cVar6 == -0x7e)) goto LAB_0056bbae;
LAB_0056bc1c:
        FUN_0052b5d0(local_8,param_4,1);
      }
      if ((*(ushort *)(local_8 + 7) & 0xc) != 0) {
        *(ushort *)(local_8 + 7) = *(ushort *)(local_8 + 7) & 0xfffd;
      }
      if ((((char)param_3 != '\x01') && ((*(byte *)(local_8 + 7) & 2) != 0)) &&
         ((uint)*(byte *)((int)local_8 + 0x1f) != (param_3 & 0xff))) {
        FUN_00575420(local_8,param_3 & 0xff);
      }
      goto LAB_0056bc64;
    }
    if (cVar6 == -100) goto LAB_0056b9f6;
    if (cVar6 != 'b') {
      if (cVar6 != -0x7d) goto LAB_0056bc74;
      local_8 = (int *)FUN_0056bc90();
      if (local_8 == (int *)0x0) goto LAB_0056baaa;
      iVar2 = *(int *)(param_2 + 4);
      iVar3 = FUN_00568070();
      uVar4 = FUN_0055aeb0(param_1,iVar2 + 2,iVar3 + -1,(iVar3 + -1) / 2,0,FUN_0055dc20);
      FUN_00575040(local_8,uVar4);
      goto LAB_0056bc64;
    }
    local_8 = (int *)FUN_0056bc90();
    if (local_8 == (int *)0x0) goto LAB_0056baaa;
  }
  FUN_00575310();
  piVar5 = local_8;
LAB_0056bc74:
  *param_5 = piVar5;
  return 0;
}


/* FUN_0056bc90 @ 0056bc90  kind=lib  attributed-by=lib-island  size=67 */

void FUN_0056bc90(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00552230(param_1,0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(undefined2 *)((int)puVar1 + 0x1c) = 1;
    *(undefined1 *)((int)puVar1 + 0x1e) = 5;
    *(undefined4 *)puVar1 = param_1;
  }
  return;
}


/* FUN_0056bce0 @ 0056bce0  kind=lib  attributed-by=lib-island  size=169 */

undefined4 FUN_0056bce0(int param_1,byte param_2)

{
  ushort uVar1;
  int iVar2;
  
  if ((param_1 == 0) || (uVar1 = *(ushort *)(param_1 + 0x1c), (uVar1 & 1) != 0)) {
    return 0;
  }
  *(ushort *)(param_1 + 0x1c) = uVar1 >> 3 & 2 | uVar1;
  if ((uVar1 & 0x4000) != 0) {
    FUN_00574600(param_1);
  }
  if ((*(byte *)(param_1 + 0x1c) & 2) == 0) {
    FUN_00575350(param_1,param_2);
  }
  else {
    if (*(byte *)(param_1 + 0x1f) != (param_2 & 0xf7)) {
      FUN_00575420(param_1,param_2 & 0xf7);
    }
    if ((((param_2 & 8) != 0) && ((*(uint *)(param_1 + 4) & 1) != 0)) &&
       (iVar2 = FUN_00574af0(param_1), iVar2 != 0)) {
      return 0;
    }
    FUN_00574bf0(param_1);
  }
  if (*(byte *)(param_1 + 0x1f) != (param_2 & 0xf7)) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 4);
}


/* FUN_0056bd90 @ 0056bd90  kind=lib  attributed-by=lib-island  size=38 */

void FUN_0056bd90(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    param_1 = param_1 >> 7 | param_2 << 0x19;
    param_2 = param_2 >> 7;
    iVar1 = iVar1 + 1;
    if (param_1 == 0 && param_2 == 0) {
      return;
    }
  } while (iVar1 < 9);
  return;
}


/* FUN_0056bdc0 @ 0056bdc0  kind=lib  attributed-by=lib-island  size=97 */

int FUN_0056bdc0(int param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x20) <= iVar2) {
    iVar3 = FUN_0053b4b0(param_1);
    if (iVar3 != 0) {
      return 1;
    }
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  puVar1 = (undefined1 *)(*(int *)(param_1 + 4) + iVar2 * 0x14);
  *puVar1 = param_2;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[1] = 0;
  return iVar2;
}


/* FUN_0056be30 @ 0056be30  kind=lib  attributed-by=lib-island  size=96 */

int FUN_0056be30(int param_1,undefined1 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x20) <= iVar2) {
    iVar3 = FUN_0053b4b0(param_1);
    if (iVar3 != 0) {
      return 1;
    }
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  puVar1 = (undefined1 *)(*(int *)(param_1 + 4) + iVar2 * 0x14);
  *puVar1 = param_2;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = param_3;
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[1] = 0;
  return iVar2;
}


/* FUN_0056be90 @ 0056be90  kind=lib  attributed-by=lib-island  size=95 */

int FUN_0056be90(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x20) <= iVar2) {
    iVar3 = FUN_0053b4b0(param_1);
    if (iVar3 != 0) {
      return 1;
    }
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  puVar1 = (undefined1 *)(*(int *)(param_1 + 4) + iVar2 * 0x14);
  *puVar1 = param_2;
  *(undefined4 *)(puVar1 + 4) = param_3;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 8) = param_4;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[1] = 0;
  return iVar2;
}


/* FUN_0056bef0 @ 0056bef0  kind=lib  attributed-by=lib-island  size=94 */

int FUN_0056bef0(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x20) <= iVar2) {
    iVar3 = FUN_0053b4b0(param_1);
    if (iVar3 != 0) {
      return 1;
    }
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  puVar1 = (undefined1 *)(*(int *)(param_1 + 4) + iVar2 * 0x14);
  *(undefined4 *)(puVar1 + 4) = param_3;
  *puVar1 = param_2;
  *(undefined4 *)(puVar1 + 8) = param_4;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 0xc) = param_5;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[1] = 0;
  return iVar2;
}


/* FUN_0056bf50 @ 0056bf50  kind=lib  attributed-by=lib-island  size=108 */

int FUN_0056bf50(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x20) <= iVar3) {
    iVar2 = FUN_0053b4b0(param_1);
    if (iVar2 != 0) {
      iVar3 = 1;
      goto LAB_0056bfa6;
    }
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  puVar1 = (undefined1 *)(*(int *)(param_1 + 4) + iVar3 * 0x14);
  *puVar1 = param_2;
  *(undefined4 *)(puVar1 + 4) = param_3;
  *(undefined4 *)(puVar1 + 8) = param_4;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 0xc) = param_5;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[1] = 0;
LAB_0056bfa6:
  FUN_0056c320(param_1,iVar3,param_6,param_7);
  return iVar3;
}


/* FUN_0056bfc0 @ 0056bfc0  kind=lib  attributed-by=lib-island  size=171 */

int FUN_0056bfc0(int *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_1[7];
  if (param_1[8] <= iVar6) {
    iVar4 = FUN_0053b4b0(param_1);
    if (iVar4 != 0) {
      iVar6 = 1;
      goto LAB_0056c016;
    }
  }
  param_1[7] = param_1[7] + 1;
  puVar1 = (undefined1 *)(param_1[1] + iVar6 * 0x14);
  *puVar1 = param_2;
  *(undefined4 *)(puVar1 + 4) = param_3;
  *(undefined4 *)(puVar1 + 8) = param_4;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 0xc) = param_5;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[1] = 0;
LAB_0056c016:
  iVar4 = param_1[1];
  iVar3 = *param_1;
  if ((iVar4 != 0) && (*(char *)(iVar3 + 0x38) == '\0')) {
    iVar5 = iVar6;
    if (iVar6 < 0) {
      iVar5 = param_1[7] + -1;
    }
    iVar2 = iVar4 + iVar5 * 0x14;
    FUN_00539320(iVar3,(int)*(char *)(iVar2 + 1),*(undefined4 *)(iVar4 + 0x10 + iVar5 * 0x14));
    *(undefined4 *)(iVar2 + 0x10) = param_6;
    *(undefined1 *)(iVar2 + 1) = 0xf2;
    return iVar6;
  }
  FUN_00539320(iVar3,0xfffffff2,param_6);
  return iVar6;
}


/* FUN_0056c070 @ 0056c070  kind=lib  attributed-by=lib-island  size=168 */

int FUN_0056c070(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = param_1;
  if (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x1c) + param_2) {
    iVar4 = FUN_0053b4b0(param_1);
    if (iVar4 != 0) {
      return 0;
    }
  }
  iVar4 = *(int *)(param_1 + 0x1c);
  if (0 < param_2) {
    pcVar6 = (char *)(param_3 + 1);
    iVar7 = iVar4 * 0x14;
    param_1 = param_2;
    do {
      iVar8 = (int)pcVar6[1];
      pbVar5 = (byte *)(*(int *)(iVar3 + 4) + iVar7);
      *pbVar5 = pcVar6[-1];
      *(int *)(pbVar5 + 4) = (int)*pcVar6;
      if ((iVar8 < 0) && (((&DAT_007122e8)[*pbVar5] & 1) != 0)) {
        *(int *)(pbVar5 + 8) = (iVar4 - iVar8) + -1;
      }
      else {
        *(int *)(pbVar5 + 8) = iVar8;
      }
      pcVar1 = pcVar6 + 2;
      iVar7 = iVar7 + 0x14;
      pcVar6 = pcVar6 + 4;
      param_1 = param_1 + -1;
      *(int *)(pbVar5 + 0xc) = (int)*pcVar1;
      pbVar5[1] = 0;
      pbVar5[0x10] = 0;
      pbVar5[0x11] = 0;
      pbVar5[0x12] = 0;
      pbVar5[0x13] = 0;
      pbVar5[3] = 0;
    } while (param_1 != 0);
    piVar2 = (int *)(iVar3 + 0x1c);
    *piVar2 = *piVar2 + param_2;
  }
  return iVar4;
}


/* FUN_0056c120 @ 0056c120  kind=lib  attributed-by=lib-island  size=241 */

void FUN_0056c120(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = param_1[7];
  if ((iVar7 < param_1[8]) || (iVar4 = FUN_0053b4b0(param_1), iVar4 == 0)) {
    param_1[7] = param_1[7] + 1;
    puVar2 = (undefined2 *)(param_1[1] + iVar7 * 0x14);
    *puVar2 = 0x6a;
    *(undefined1 *)((int)puVar2 + 3) = 0;
    *(undefined4 *)(puVar2 + 2) = param_2;
    *(undefined4 *)(puVar2 + 4) = 0;
    *(undefined4 *)(puVar2 + 6) = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
  }
  else {
    iVar7 = 1;
  }
  iVar4 = param_1[1];
  iVar8 = *param_1;
  if ((iVar4 == 0) || (*(char *)(iVar8 + 0x38) != '\0')) {
    FUN_00539320(iVar8,0xffffffff,param_3);
  }
  else {
    if (iVar7 < 0) {
      iVar7 = param_1[7] + -1;
    }
    iVar3 = iVar4 + iVar7 * 0x14;
    FUN_00539320(iVar8,(int)*(char *)(iVar3 + 1),*(undefined4 *)(iVar4 + 0x10 + iVar7 * 0x14));
    *(undefined4 *)(iVar3 + 0x10) = 0;
    if (param_3 == 0) {
      *(undefined4 *)(iVar3 + 0x10) = 0;
      *(undefined1 *)(iVar3 + 1) = 0;
    }
    else {
      *(int *)(iVar3 + 0x10) = param_3;
      *(undefined1 *)(iVar3 + 1) = 0xff;
    }
  }
  iVar7 = *param_1;
  iVar4 = 0;
  if (0 < *(int *)(iVar7 + 0x14)) {
    uVar6 = param_1[0x1a];
    iVar8 = 0;
    do {
      uVar5 = 1 << ((byte)iVar4 & 0x1f);
      uVar6 = uVar6 | uVar5;
      param_1[0x1a] = uVar6;
      if ((iVar4 != 1) &&
         (piVar1 = (int *)(iVar7 + 0x10), iVar7 = *param_1,
         *(char *)(*(int *)(*piVar1 + 4 + iVar8) + 9) != '\0')) {
        param_1[0x1b] = param_1[0x1b] | uVar5;
      }
      iVar4 = iVar4 + 1;
      iVar8 = iVar8 + 0x10;
    } while (iVar4 < *(int *)(iVar7 + 0x14));
  }
  return;
}


/* FUN_0056c220 @ 0056c220  kind=lib  attributed-by=lib-island  size=102 */

undefined4 * FUN_0056c220(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (uint)*(ushort *)((int)param_1 + 6) * 0x28 + 0x40;
  if ((int)(param_3 + (-param_2 & 7U)) < iVar1) {
    puVar2 = (undefined4 *)FUN_00552230(*param_1,iVar1);
    *param_4 = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
  }
  else {
    puVar2 = (undefined4 *)(param_2 + (-param_2 & 7U));
    *param_4 = 0;
  }
  puVar2[4] = puVar2 + 6;
  *puVar2 = param_1;
  *(short *)(puVar2 + 1) = *(short *)((int)param_1 + 6) + 1;
  return puVar2;
}


/* FUN_0056c290 @ 0056c290  kind=lib  attributed-by=lib-island  size=39 */

undefined4 FUN_0056c290(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (((*(byte *)(param_1 + 0x1c) & 2) != 0) && (*(byte *)(param_1 + 0x1f) != param_2)) {
    uVar1 = FUN_00575420();
    return uVar1;
  }
  return 0;
}


/* FUN_0056c2c0 @ 0056c2c0  kind=lib  attributed-by=lib-island  size=29 */

void FUN_0056c2c0(int param_1,uint param_2,undefined4 param_3)

{
  if (param_2 < *(uint *)(param_1 + 0x1c)) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 4 + param_2 * 0x14) = param_3;
  }
  return;
}


/* FUN_0056c2e0 @ 0056c2e0  kind=lib  attributed-by=lib-island  size=29 */

void FUN_0056c2e0(int param_1,uint param_2,undefined4 param_3)

{
  if (param_2 < *(uint *)(param_1 + 0x1c)) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 8 + param_2 * 0x14) = param_3;
  }
  return;
}


/* FUN_0056c300 @ 0056c300  kind=lib  attributed-by=lib-island  size=29 */

void FUN_0056c300(int param_1,uint param_2,undefined4 param_3)

{
  if (param_2 < *(uint *)(param_1 + 0x1c)) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xc + param_2 * 0x14) = param_3;
  }
  return;
}


/* FUN_0056c320 @ 0056c320  kind=lib  attributed-by=lib-island  size=359 */

void FUN_0056c320(int *param_1,int param_2,void *param_3,int param_4)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  void *_Src;
  uint _Size;
  void *_Dst_00;
  undefined4 uVar4;
  
  iVar2 = param_1[1];
  iVar3 = *param_1;
  if ((iVar2 == 0) || (*(char *)(iVar3 + 0x38) != '\0')) {
    if ((param_4 != -6) && (param_4 != -10)) {
      FUN_00539320(iVar3,param_4,param_3);
      return;
    }
  }
  else {
    if (param_2 < 0) {
      param_2 = param_1[7] + -1;
    }
    iVar1 = iVar2 + param_2 * 0x14;
    FUN_00539320(iVar3,(int)*(char *)(iVar1 + 1),*(undefined4 *)(iVar2 + 0x10 + param_2 * 0x14));
    *(undefined4 *)(iVar1 + 0x10) = 0;
    if (param_4 == -0xe) {
      *(void **)(iVar1 + 0x10) = param_3;
      *(undefined1 *)(iVar1 + 1) = 0xf2;
      return;
    }
    if (param_3 == (void *)0x0) {
      *(undefined4 *)(iVar1 + 0x10) = 0;
      *(undefined1 *)(iVar1 + 1) = 0;
      return;
    }
    if (param_4 != -6) {
      if (param_4 == -0x10) {
        *(void **)(iVar1 + 0x10) = param_3;
        *(undefined1 *)(iVar1 + 1) = 0xfa;
        return;
      }
      if (param_4 == -10) {
        *(void **)(iVar1 + 0x10) = param_3;
        *(undefined1 *)(iVar1 + 1) = 0xf6;
        *(int *)((int)param_3 + 0xc) = *(int *)((int)param_3 + 0xc) + 1;
        return;
      }
      if (param_4 < 0) {
        *(void **)(iVar1 + 0x10) = param_3;
        *(char *)(iVar1 + 1) = (char)param_4;
        return;
      }
      if (param_4 == 0) {
        param_4 = FUN_00568070(param_3);
      }
      uVar4 = FUN_005524a0(*param_1,param_3,param_4);
      *(undefined4 *)(iVar1 + 0x10) = uVar4;
      *(undefined1 *)(iVar1 + 1) = 0xff;
      return;
    }
    _Size = (uint)*(ushort *)((int)param_3 + 6);
    _Dst_00 = (void *)FUN_0055da00(_Size * 5 + 0xc);
    *(void **)(iVar1 + 0x10) = _Dst_00;
    if (_Dst_00 == (void *)0x0) {
      *(undefined1 *)(*param_1 + 0x38) = 1;
      *(undefined1 *)(iVar1 + 1) = 0;
      return;
    }
    memcpy(_Dst_00,param_3,_Size * 4 + 0xc);
    _Src = *(void **)((int)_Dst_00 + 8);
    _Dst = (void *)((int)_Dst_00 + (_Size + 3) * 4);
    *(void **)((int)_Dst_00 + 8) = _Dst;
    memcpy(_Dst,_Src,_Size);
    *(undefined1 *)(iVar1 + 1) = 0xfa;
  }
  return;
}


/* FUN_0056c490 @ 0056c490  kind=lib  attributed-by=lib-island  size=28 */

void FUN_0056c490(int param_1,undefined1 param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 4) + -0x11 + *(int *)(param_1 + 0x1c) * 0x14) = param_2;
  }
  return;
}


/* FUN_0056c4b0 @ 0056c4b0  kind=lib  attributed-by=lib-island  size=67 */

void FUN_0056c4b0(undefined4 *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  if (iVar2 != 0) {
    puVar1 = (undefined8 *)(iVar2 + param_2 * 0x14);
    FUN_00539320(*param_1,(int)*(char *)((int)puVar1 + 1),
                 *(undefined4 *)(iVar2 + 0x10 + param_2 * 0x14));
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined1 *)puVar1 = 0x95;
  }
  return;
}


/* FUN_0056c500 @ 0056c500  kind=lib  attributed-by=lib-string  size=94 */

undefined4 FUN_0056c500(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (param_2 == 0) {
    if (param_1[0x23] < 0) {
      return 0;
    }
    if (0 < param_1[0x23]) goto LAB_0056c53a;
    iVar2 = param_1[0x22];
  }
  else {
    if (0 < *(int *)(iVar1 + 0x1ec)) goto LAB_0056c53a;
    if (*(int *)(iVar1 + 0x1ec) < 0) {
      return 0;
    }
    iVar2 = *(int *)(iVar1 + 0x1e8);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_0056c53a:
  param_1[0x16] = 0x13;
  *(undefined1 *)(param_1 + 0x17) = 2;
  FUN_005670f0(param_1 + 0xd,iVar1,"foreign key constraint failed");
  return 1;
}


/* FUN_0056c560 @ 0056c560  kind=lib  attributed-by=lib-island  size=327 */

void FUN_0056c560(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  char *pcVar6;
  
  FUN_00545650(*(undefined4 *)(param_2 + 0x44),(int)*(short *)(param_2 + 0x4c));
  FUN_00545650(*(undefined4 *)(param_2 + 0x10),(uint)*(ushort *)(param_2 + 0x2c) * 2);
  puVar4 = *(uint **)(param_2 + 0xb0);
  while (puVar4 != (uint *)0x0) {
    uVar2 = *puVar4;
    puVar3 = (uint *)puVar4[6];
    if ((uVar2 != 0) && (uVar1 = uVar2 + puVar4[1] * 0x14, uVar2 < uVar1)) {
      pcVar6 = (char *)(uVar2 + 1);
      iVar5 = ((uVar1 - uVar2) - 1) / 0x14 + 1;
      do {
        FUN_00539320(param_1,(int)*pcVar6,*(undefined4 *)(pcVar6 + 0xf));
        pcVar6 = pcVar6 + 0x14;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_005521a0(param_1,uVar2);
    FUN_005521a0(param_1,puVar4);
    puVar4 = puVar3;
  }
  iVar5 = (int)*(short *)(param_2 + 0x4e);
  while (iVar5 = iVar5 + -1, -1 < iVar5) {
    FUN_005521a0(param_1,*(undefined4 *)(*(int *)(param_2 + 0x48) + iVar5 * 4));
  }
  uVar2 = *(uint *)(param_2 + 4);
  if ((uVar2 != 0) && (uVar1 = uVar2 + *(int *)(param_2 + 0x1c) * 0x14, uVar2 < uVar1)) {
    pcVar6 = (char *)(uVar2 + 1);
    iVar5 = ((uVar1 - uVar2) - 1) / 0x14 + 1;
    do {
      FUN_00539320(param_1,(int)*pcVar6,*(undefined4 *)(pcVar6 + 0xf));
      pcVar6 = pcVar6 + 0x14;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_005521a0(param_1,uVar2);
  FUN_005521a0(param_1,*(undefined4 *)(param_2 + 0x28));
  FUN_005521a0(param_1,*(undefined4 *)(param_2 + 0x10));
  FUN_005521a0(param_1,*(undefined4 *)(param_2 + 0x98));
  FUN_005521a0(param_1,*(undefined4 *)(param_2 + 0x9c));
  return;
}


/* FUN_0056c6b0 @ 0056c6b0  kind=lib  attributed-by=lib-island  size=250 */

int FUN_0056c6b0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_10;
  int local_c;
  
  iVar1 = *param_1;
  iVar5 = 0;
  if (*(int *)(iVar1 + 0x1e4) == 0) {
    return 0;
  }
  if (param_1[0x1c] == 0) {
    return 0;
  }
  iVar4 = param_1[0x1c] + -1;
  local_c = 0;
  if (0 < *(int *)(iVar1 + 0x14)) {
    local_10 = 0;
    do {
      iVar2 = *(int *)(local_10 + 4 + *(int *)(iVar1 + 0x10));
      if (iVar2 != 0) {
        if ((param_2 != 2) || (iVar3 = FUN_0054efb0(iVar2,2,iVar4), iVar3 == 0)) {
          iVar3 = FUN_0054efb0(iVar2,1,iVar4);
        }
        if (iVar5 == 0) {
          iVar5 = iVar3;
        }
      }
      local_c = local_c + 1;
      local_10 = local_10 + 0x10;
    } while (local_c < *(int *)(iVar1 + 0x14));
  }
  *(int *)(iVar1 + 0x1e4) = *(int *)(iVar1 + 0x1e4) + -1;
  param_1[0x1c] = 0;
  if (iVar5 == 0) {
    if ((param_2 == 2) && (iVar5 = FUN_00577550(iVar1,2,iVar4), iVar5 != 0)) goto LAB_0056c77e;
    iVar5 = FUN_00577550(iVar1,1,iVar4);
  }
  if (param_2 != 2) {
    return iVar5;
  }
LAB_0056c77e:
  *(int *)(iVar1 + 0x1e8) = param_1[0x24];
  *(int *)(iVar1 + 0x1ec) = param_1[0x25];
  return iVar5;
}


/* FUN_0056c7b0 @ 0056c7b0  kind=lib  attributed-by=lib-island  size=91 */

int * FUN_0056c7b0(int param_1)

{
  int *_Dst;
  
  _Dst = (int *)FUN_00552230(param_1,0xc0);
  if (_Dst != (int *)0x0) {
    memset(_Dst,0,0xc0);
    *_Dst = param_1;
    if (*(int *)(param_1 + 4) != 0) {
      *(int **)(*(int *)(param_1 + 4) + 0x38) = _Dst;
    }
    _Dst[0xf] = *(int *)(param_1 + 4);
    _Dst[0xe] = 0;
    *(int **)(param_1 + 4) = _Dst;
    _Dst[0xc] = 0x26bceaa5;
    return _Dst;
  }
  return (int *)0x0;
}


/* FUN_0056c810 @ 0056c810  kind=lib  attributed-by=lib-island  size=152 */

int FUN_0056c810(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_1;
  if (*(char *)((int)param_1 + 0x1d) == '\0') {
    if (*param_1 != 0) {
      iVar2 = FUN_0054ce80(*param_1,&param_1);
      if (iVar2 != 0) {
        return iVar2;
      }
      if (param_1 != (int *)0x0) {
        *(undefined1 *)(piVar1 + 7) = 1;
        piVar1[0x14] = 0;
      }
    }
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0054df80(*param_1,0,param_1[0xe],param_1[0xf],0,&param_1);
    if (iVar2 == 0) {
      piVar1[0x10] = piVar1[0xe];
      piVar1[0x11] = piVar1[0xf];
      if (param_1 == (int *)0x0) {
        *(undefined1 *)((int)piVar1 + 0x19) = 1;
        *(undefined1 *)((int)piVar1 + 0x1d) = 0;
        piVar1[0x14] = 0;
        return 0;
      }
      FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xee9a,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
      return 0xb;
    }
  }
  return iVar2;
}


/* FUN_0056c8b0 @ 0056c8b0  kind=lib  attributed-by=lib-island  size=82 */

void FUN_0056c8b0(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    FUN_0056c560(iVar1,param_1);
    if (param_1[0xe] == 0) {
      *(int *)(iVar1 + 4) = param_1[0xf];
    }
    else {
      *(int *)(param_1[0xe] + 0x3c) = param_1[0xf];
    }
    if (param_1[0xf] != 0) {
      *(int *)(param_1[0xf] + 0x38) = param_1[0xe];
    }
    param_1[0xc] = -0x49f93c38;
    *param_1 = 0;
    FUN_005521a0(iVar1,param_1);
  }
  return;
}


/* FUN_0056c910 @ 0056c910  kind=lib  attributed-by=lib-island  size=77 */

void FUN_0056c910(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar1 = param_1;
  if (0 < param_1[1]) {
    do {
      piVar3 = piVar1 + 2;
      if (((0x1f < iVar2) || ((param_2 & 1 << ((byte)iVar2 & 0x1f)) == 0)) && (*piVar3 != 0)) {
        if ((code *)piVar1[3] != (code *)0x0) {
          (*(code *)piVar1[3])(*piVar3);
        }
        *piVar3 = 0;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar3;
    } while (iVar2 < param_1[1]);
  }
  return;
}


/* FUN_0056c960 @ 0056c960  kind=lib  attributed-by=lib-island  size=87 */

void FUN_0056c960(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1[0x1b] != 0) {
    iVar1 = *(int *)(*param_1 + 0x14);
    iVar3 = 0;
    uVar2 = 1;
    if (0 < iVar1) {
      piVar4 = (int *)(*(int *)(*param_1 + 0x10) + 4);
      do {
        if (((iVar3 != 1) && ((param_1[0x1b] & uVar2) != 0)) && (*piVar4 != 0)) {
          FUN_0054d260(*piVar4);
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 4;
        uVar2 = uVar2 * 2;
      } while (iVar3 < iVar1);
    }
  }
  return;
}


/* FUN_0056c9c0 @ 0056c9c0  kind=lib  attributed-by=lib-string  size=25849 */

/* WARNING: Removing unreachable block (ram,0x00571cdd) */
/* WARNING: Removing unreachable block (ram,0x0056da07) */
/* WARNING: Removing unreachable block (ram,0x00570ac3) */

void FUN_0056c9c0(int *param_1)

{
  ulonglong *puVar1;
  uint *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined1 uVar5;
  ushort uVar6;
  int *piVar7;
  undefined4 uVar8;
  size_t _Size;
  uint6 uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  char cVar14;
  undefined2 uVar15;
  int iVar16;
  undefined4 *puVar17;
  byte *pbVar18;
  undefined4 *puVar19;
  int *piVar20;
  undefined8 *puVar21;
  undefined4 uVar22;
  int iVar23;
  undefined *puVar24;
  int iVar25;
  undefined4 uVar26;
  ushort uVar27;
  int iVar28;
  uint uVar29;
  undefined4 extraout_ECX;
  int iVar30;
  char *pcVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  undefined4 *puVar35;
  undefined4 *puVar36;
  bool bVar37;
  float10 fVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  longlong lVar41;
  undefined8 uVar42;
  int local_130;
  undefined4 local_11c;
  undefined4 local_118;
  int local_114;
  int local_110;
  int local_10c;
  undefined4 *local_108;
  uint local_104;
  uint local_100;
  char local_f9;
  undefined8 local_f8;
  uint local_f0;
  int local_ec;
  undefined4 *local_e8;
  undefined4 *local_e4;
  int local_e0;
  undefined4 *local_dc;
  int *local_d8;
  int local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 *local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  byte *local_98;
  undefined4 *local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  byte *local_68;
  byte *local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 *local_4c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  puVar19 = (undefined4 *)*param_1;
  local_e0 = param_1[1];
  local_e4 = (undefined4 *)param_1[2];
  local_f0 = CONCAT31(local_f0._1_3_,*(undefined1 *)(*(int *)(puVar19[4] + 0xc) + 0x4d));
  local_10c = 0;
  local_104 = puVar19[8];
  local_100 = puVar19[9];
  puVar35 = (undefined4 *)0x0;
  local_d8 = param_1;
  local_ec = 0;
  local_d4 = 0;
  local_f9 = '\0';
  local_114 = 0;
  local_dc = (undefined4 *)0x0;
  local_110 = 0;
  local_e8 = puVar19;
  FUN_0056c960();
  uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
  iVar25 = CONCAT22(local_a0._6_2_,local_a0._4_2_);
  lVar41 = CONCAT44(iVar25,(undefined4 *)local_a0);
  local_c0 = uVar39;
  if (local_d8[0x16] == 7) goto LAB_00572e06;
  local_d8[0x16] = 0;
  local_d8[5] = 0;
  puVar19[0x6d] = 0;
  if (puVar19[0x38] == 0) {
    iVar28 = puVar19[0x45];
    local_ec = local_d8[0x15];
LAB_0056caa0:
    iVar30 = local_ec;
    local_c0 = uVar39;
    if (*(char *)(puVar19 + 0xe) != '\0') goto LAB_00572e06;
    if (iVar28 != 0) {
      iVar25 = local_114;
      if (puVar19[0x47] == local_114) {
        local_a0 = lVar41;
        iVar16 = (*(code *)puVar19[0x45])();
        iVar25 = 0;
        uVar39 = local_c0;
        lVar41 = local_a0;
        if (iVar16 != 0) {
          iVar16 = 9;
          local_d4 = iVar16;
          goto LAB_00572e2d;
        }
      }
      local_114 = iVar25 + 1;
    }
    if ((*(byte *)(local_e0 + 2 + iVar30 * 0x14) & 2) != 0) {
      puVar35 = local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
      local_dc = puVar35;
      if ((*(ushort *)(puVar35 + 7) & 0x2460) != 0) {
        local_c0 = uVar39;
        local_a0 = lVar41;
        FUN_00574d80();
        uVar39 = local_c0;
        lVar41 = local_a0;
      }
      *(undefined2 *)(puVar35 + 7) = 4;
    }
    uVar11 = local_c8;
    piVar20 = local_d8;
    puVar10 = local_dc;
    iVar33 = local_e0;
    puVar17 = local_e4;
    puVar36 = local_e8;
    iVar23 = local_ec;
    iVar25 = (int)((ulonglong)lVar41 >> 0x20);
    local_a0._0_4_ = (undefined4 *)lVar41;
    local_c0._4_4_ = (undefined4 *)(uVar39 >> 0x20);
    puVar12 = local_c0._4_4_;
    local_c0._0_4_ = (int *)uVar39;
    local_a0._6_2_ = (undefined2)((ulonglong)lVar41 >> 0x30);
    bVar4 = *(byte *)(local_e0 + iVar30 * 0x14);
    iVar16 = local_d4;
    puVar13 = local_dc;
    uVar40 = local_d0;
    if (0x93 < bVar4 - 1) goto LAB_0056e371;
    uVar26 = (int *)local_d0;
    uVar32 = (uint)local_c8._4_4_;
    uVar34 = (uint)local_b8._4_4_;
    local_c0._7_1_ = (undefined1)(uVar39 >> 0x38);
    local_c0._4_4_ = puVar12;
    local_a0._4_4_ = iVar25;
    local_c0 = uVar39;
    switch(bVar4) {
    case 1:
      if (puVar19[0x38] == 0) goto LAB_0056e360;
      goto LAB_0056cb4e;
    case 2:
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      *(undefined2 *)(local_e4 + iVar25 * 10 + 7) = 4;
      local_e4[iVar25 * 10 + 4] = local_ec;
      local_e4[iVar25 * 10 + 5] = local_ec >> 0x1f;
      goto LAB_0056cbbf;
    case 3:
      local_ec = local_e4[*(int *)(local_e0 + 4 + iVar30 * 0x14) * 10 + 4];
      break;
    case 4:
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      *(undefined2 *)(local_e4 + iVar25 * 10 + 7) = 4;
      iVar30 = local_e4[iVar25 * 10 + 4];
      local_d0 = CONCAT44(local_d0._4_4_,iVar30);
      local_e4[iVar25 * 10 + 4] = local_ec;
      local_e4[iVar25 * 10 + 5] = local_ec >> 0x1f;
      local_ec = iVar30;
      uVar40 = local_d0;
      break;
    case 5:
      if ((*(byte *)(local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10 + 7) & 1) != 0)
      goto switchD_0056cb3a_caseD_6;
      break;
    case 6:
switchD_0056cb3a_caseD_6:
      if ((*(int *)(local_e0 + 4 + iVar30 * 0x14) != 0) || (local_d8[0x28] == 0)) {
        local_d8[0x16] = *(int *)(local_e0 + 4 + iVar30 * 0x14);
        *(undefined1 *)(local_d8 + 0x17) = *(undefined1 *)(local_e0 + 8 + iVar30 * 0x14);
        local_d8[0x15] = local_ec;
        iVar25 = *(int *)(local_e0 + 0x10 + iVar30 * 0x14);
        if (iVar25 == 0) {
          if (local_d8[0x16] != 0) {
            FUN_00525a30(*(undefined4 *)(local_e0 + 4 + iVar30 * 0x14),
                         "constraint failed at %d in [%s]",local_ec,local_d8[0x26]);
          }
        }
        else {
          FUN_005670f0(local_d8 + 0xd,puVar19,&DAT_00716900,iVar25);
          FUN_00525a30(*(undefined4 *)(local_e0 + 4 + iVar30 * 0x14),"abort at %d in [%s]: %s",
                       iVar23,local_d8[0x26],*(undefined4 *)(local_e0 + 0x10 + iVar30 * 0x14));
        }
        iVar25 = FUN_00573740();
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        piVar20 = local_d8;
        if (iVar25 == 5) {
LAB_00572cab:
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          piVar20[0x16] = 5;
        }
        goto LAB_00572ea7;
      }
      iVar25 = *(int *)(local_d8[0x28] + 4);
      local_d8[0x2a] = local_d8[0x2a] + -1;
      local_d8[0x28] = iVar25;
      iVar25 = local_d8[0x19];
      puVar19[0x13] = puVar19[0x13] + iVar25;
      puVar19[0x12] = iVar25;
      local_ec = FUN_005735f0();
      local_104 = puVar19[8];
      local_100 = puVar19[9];
      if (*(int *)(local_e0 + 8 + iVar30 * 0x14) == 4) {
        local_ec = *(int *)(local_d8[1] + 8 + local_ec * 0x14) + -1;
      }
      local_e0 = local_d8[1];
      local_e4 = (undefined4 *)local_d8[2];
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 7:
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      puVar35[4] = iVar25;
      puVar35[5] = iVar25 >> 0x1f;
      break;
    case 8:
      puVar36 = *(undefined4 **)(local_e0 + 0x10 + iVar30 * 0x14);
      puVar35[4] = *puVar36;
      puVar35[5] = puVar36[1];
      break;
    case 9:
      goto switchD_0056cb3a_caseD_9;
    case 10:
      iVar25 = *(int *)(local_e0 + 0xc + iVar30 * 0x14) - *(int *)(local_e0 + 8 + iVar30 * 0x14);
      uVar15 = 1;
      if (*(int *)(local_e0 + 4 + iVar30 * 0x14) != 0) {
        uVar15 = 0x101;
      }
      local_d0._0_6_ = CONCAT24(uVar15,iVar25);
      *(undefined2 *)(local_dc + 7) = uVar15;
      puVar35 = local_dc;
      while (iVar16 = local_d4, puVar13 = puVar35, uVar40 = local_d0, uVar39 = local_c0, 0 < iVar25)
      {
        if ((*(ushort *)(puVar35 + 0x11) & 0x2460) != 0) {
          FUN_00574d80();
        }
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        *(undefined2 *)(puVar35 + 0x11) = local_d0._4_2_;
        iVar25 = (int)(int *)local_d0 + -1;
        local_d0 = CONCAT44(local_d0._4_4_,iVar25);
        puVar19 = local_e8;
        puVar35 = puVar35 + 10;
      }
      break;
    case 0xb:
      FUN_00575040(puVar35,*(undefined4 *)(local_e0 + 0x10 + iVar30 * 0x14),
                   *(undefined4 *)(local_e0 + 4 + iVar30 * 0x14));
      *(char *)((int)puVar35 + 0x1f) = (char)local_f0;
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0xc:
      local_d0 = CONCAT44(local_d0._4_4_,
                          local_d8[0x11] + (*(int *)(local_e0 + 4 + iVar30 * 0x14) * 5 + -5) * 8);
      iVar25 = FUN_005753f0();
      puVar35 = local_dc;
      uVar39 = local_c0;
      if (iVar25 != 0) goto LAB_00572de0;
      FUN_005752a0(local_dc);
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0xd:
      local_d0 = local_d0 & 0xffffffff;
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      iVar16 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
      local_c8 = CONCAT44(iVar16,iVar25);
      puVar36 = local_e4 + iVar25 * 10;
      puVar35 = local_e4 + iVar16 * 10;
      iVar25 = *(int *)(local_e0 + 0xc + iVar30 * 0x14) + 1;
      local_dc = puVar35;
      while (iVar25 != 0) {
        local_d0 = CONCAT44(iVar25 + -1,puVar35[9]);
        puVar35[9] = 0;
        FUN_00574b60();
        puVar36[9] = (int *)local_d0;
        puVar36 = puVar36 + 10;
        puVar35 = puVar35 + 10;
        iVar25 = (int)local_d0._4_4_;
      }
      local_d0 = CONCAT44(0xffffffff,(int *)local_d0);
      iVar16 = local_d4;
      puVar13 = puVar35;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0xe:
      local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(local_e0 + 0xc + iVar30 * 0x14));
      puVar36 = local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
      while( true ) {
        local_dc = puVar36;
        local_a0._4_4_ = iVar25;
        local_c0 = uVar39;
        FUN_005752a0(puVar36);
        iVar25 = local_a0._4_4_;
        uVar39 = local_c0;
        if ((*(ushort *)(puVar36 + 7) & 0x1000) != 0) {
          iVar30 = FUN_00574af0();
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          iVar25 = local_a0._4_4_;
          uVar39 = local_c0;
          if (iVar30 != 0) goto LAB_00572e06;
        }
        lVar41 = CONCAT44(iVar25,(undefined4 *)local_a0);
        iVar30 = (int)(int *)local_d0;
        local_d0 = CONCAT44(local_d0._4_4_,(int)(int *)local_d0 + -1);
        iVar16 = local_d4;
        puVar35 = local_dc;
        puVar13 = local_dc;
        uVar40 = local_d0;
        if (iVar30 == 0) break;
        puVar36 = puVar36 + 10;
      }
      break;
    case 0xf:
      puVar35 = local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
      local_dc = puVar35;
      FUN_005752a0(puVar35);
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x10:
      local_d4 = FUN_0056c500();
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if (local_d4 == 0) {
        local_d4 = FUN_0056c6b0();
        iVar25 = local_e0;
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        if (local_d4 == 0) {
          local_d8[0x14] = local_d8[0x14] + 2U | 1;
          puVar35 = local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10;
          local_d8[5] = (int)puVar35;
          iVar28 = 0;
          local_d0 = ZEXT48(puVar35);
          if (*(int *)(local_e0 + 8 + iVar30 * 0x14) < 1) goto LAB_00572c54;
          goto LAB_0056d0d0;
        }
      }
      break;
    case 0x11:
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      if (iVar25 != 0) {
        FUN_00574ec0(local_e4 + iVar25 * 10);
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x12:
      cVar14 = *(char *)(local_e0 + 3 + iVar30 * 0x14);
      local_88 = (ulonglong)CONCAT14(cVar14,local_d8[3]);
      local_dc = local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10;
      puVar35 = local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
      iVar16 = 0;
      local_d0 = ZEXT48(puVar35) << 0x20;
      iVar25 = local_d8[3];
      if (cVar14 != '\0') {
        while( true ) {
          *(undefined4 **)(iVar25 + iVar16 * 4) = puVar35;
          local_c0 = uVar39;
          if ((*(ushort *)((int)local_d0._4_4_ + 0x1c) & 0x1000) != 0) {
            iVar25 = FUN_00574af0();
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
            puVar19 = puVar36;
            if (iVar25 != 0) goto LAB_00572e06;
          }
          FUN_00575310();
          iVar16 = (int)(int *)local_d0 + 1;
          puVar35 = (undefined4 *)((int)local_d0._4_4_ + 0x28);
          local_d0 = CONCAT44(puVar35,iVar16);
          if (local_88._4_4_ <= iVar16) break;
          iVar25 = (int)local_88;
          uVar39 = local_c0;
        }
      }
      puVar35 = local_dc;
      puVar19 = *(undefined4 **)(local_e0 + 0x10 + iVar30 * 0x14);
      if (*(char *)(local_e0 + 1 + iVar30 * 0x14) == -5) {
        puVar17 = puVar19;
        puVar19 = (undefined4 *)0x0;
      }
      else {
        puVar17 = (undefined4 *)*puVar19;
      }
      local_c8 = CONCAT44(puVar19,puVar17);
      local_a4._0_2_ = 1;
      local_c0._0_4_ = puVar36;
      local_a0._0_4_ = (undefined4 *)0x0;
      local_a0._4_2_ = 0;
      local_a0._6_2_ = 0;
      FUN_00574b60(&local_c0);
      local_a4 = (undefined4 *)(CONCAT22(local_a4._2_2_,(undefined2)local_a4) & 0xffffbe01 | 1);
      local_90 = local_90 & 0xffffffff00000000;
      if ((*(byte *)((int)(int *)local_c8 + 3) & 8) != 0) {
        local_94 = *(undefined4 **)(local_e0 + -4 + iVar30 * 0x14);
      }
      puVar36[8] = local_104;
      puVar36[9] = local_100;
      (**(code **)((int)(int *)local_c8 + 0xc))(&local_c8,local_88._4_4_);
      local_104 = puVar36[8];
      local_100 = puVar36[9];
      if (local_c8._4_4_ != (undefined4 *)0x0) {
        FUN_0056c910(local_c8._4_4_);
        *(undefined4 **)(local_e0 + 0x10 + iVar30 * 0x14) = local_c8._4_4_;
        *(undefined1 *)(local_e0 + 1 + iVar30 * 0x14) = 0xf9;
      }
      if (*(char *)(puVar36 + 0xe) == '\0') {
        if ((int)local_90 != 0) {
          uVar26 = FUN_0056bce0(&local_c0);
          FUN_005670f0(local_d8 + 0xd,puVar36,&DAT_00716900,uVar26);
          local_d4 = (int)local_90;
        }
        FUN_0056c290();
        FUN_00574b60(puVar35,&local_c0);
        iVar25 = FUN_005753f0(puVar35);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        puVar19 = puVar36;
        goto joined_r0x005727a5;
      }
      FUN_00574d40();
      lVar41 = CONCAT44(CONCAT22(local_a0._6_2_,local_a0._4_2_),(undefined4 *)local_a0);
      puVar19 = puVar36;
      goto LAB_00572e06;
    case 0x13:
      puVar35 = local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
      local_dc = puVar35;
      if ((*(byte *)(local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10 + 7) & 1) == 0) {
        lVar41 = FUN_00573c40();
        if (lVar41 == 0) {
          FUN_00574ec0(puVar35);
          iVar16 = local_d4;
          puVar35 = local_dc;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
        else {
          FUN_00574ec0(puVar35);
          iVar16 = local_d4;
          puVar35 = local_dc;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
      }
      else {
        FUN_00574f20();
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x14:
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      FUN_00574a70();
      uVar34 = *(uint *)(local_e0 + 8 + iVar30 * 0x14);
      puVar2 = puVar17 + iVar25 * 10 + 4;
      uVar32 = *puVar2;
      *puVar2 = *puVar2 + uVar34;
      puVar17[iVar25 * 10 + 5] =
           puVar17[iVar25 * 10 + 5] + ((int)uVar34 >> 0x1f) + (uint)CARRY4(uVar32,uVar34);
      iVar16 = local_d4;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x15:
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      FUN_0052b630();
      uVar39 = local_c0;
      if ((*(byte *)(puVar17 + iVar25 * 10 + 7) & 8) != 0) {
        FUN_00573cb0();
        uVar39 = local_c0;
      }
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      puVar35 = local_dc;
      if ((*(ushort *)(puVar17 + iVar25 * 10 + 7) & 4) == 0) {
        iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
        if (iVar30 == 0) {
          local_d4 = 0x14;
          local_c0 = uVar39;
          goto LAB_00572d8c;
        }
        goto LAB_0056e364;
      }
      *(ushort *)(puVar17 + iVar25 * 10 + 7) = *(ushort *)(puVar17 + iVar25 * 10 + 7) & 0xbe04 | 4;
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      break;
    case 0x16:
      if ((*(byte *)(local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10 + 7) & 4) != 0) {
        FUN_00574cd0();
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x17:
      local_10c = *(int *)(local_e0 + 0x10 + iVar30 * 0x14);
      break;
    case 0x18:
      if ((*(byte *)(local_e0 + 3 + iVar30 * 0x14) & 1) == 0) {
        local_10c = 0;
      }
      uVar32 = *(uint *)(local_e0 + 0xc + iVar30 * 0x14);
      local_c0._0_4_ = *(int **)(local_e0 + 0x10 + iVar30 * 0x14);
      uVar26 = *(undefined4 *)(local_e0 + 4 + iVar30 * 0x14);
      puVar35 = (undefined4 *)0x0;
      local_f8 = (double)CONCAT44(uVar26,(undefined4)local_f8);
      local_c8 = CONCAT44(*(undefined4 *)(local_e0 + 8 + iVar30 * 0x14),uVar26);
      local_d0 = (ulonglong)uVar32;
      if (0 < (int)uVar32) {
        while( true ) {
          local_c0._4_4_ = puVar35;
          if (local_10c != 0) {
            local_c0._4_4_ = *(undefined4 **)(local_10c + (int)puVar35 * 4);
          }
          local_b8 = (double)(ulonglong)
                             CONCAT14(*(undefined1 *)
                                       (*(int *)((int)(int *)local_c0 + 8) + (int)puVar35),
                                      *(undefined4 *)((int)(int *)local_c0 + ((int)puVar35 + 3) * 4)
                                     );
          local_a0._4_4_ = iVar25;
          local_110 = FUN_0055ddd0(local_e4 + (local_f8._4_4_ + (int)local_c0._4_4_) * 10);
          if (local_110 != 0) break;
          puVar35 = (undefined4 *)((int)local_d0._4_4_ + 1);
          local_d0 = CONCAT44(puVar35,(int *)local_d0);
          if ((int)(int *)local_d0 <= (int)puVar35) goto LAB_0056e0a3;
          local_f8 = (double)CONCAT44((int *)local_c8,(undefined4)local_f8);
          iVar25 = local_a0._4_4_;
        }
        if (local_b8._4_4_ != (byte *)0x0) {
          local_110 = -local_110;
        }
      }
LAB_0056e0a3:
      local_10c = 0;
      iVar16 = local_d4;
      puVar19 = local_e8;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x19:
      if (local_110 < 0) {
        iVar30 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      }
      else {
        if (local_110 == 0) goto LAB_0056e360;
        iVar30 = *(int *)(local_e0 + 0xc + iVar30 * 0x14);
      }
      goto LAB_0056e364;
    case 0x1a:
      iVar23 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      if (*(char *)(local_d8[0x2e] + iVar23) != '\0') goto LAB_0056e360;
      *(undefined1 *)(local_d8[0x2e] + iVar23) = 1;
      break;
    case 0x1b:
    case 0x1c:
      if ((*(byte *)(local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10 + 7) & 1) == 0) {
        fVar38 = (float10)FUN_005759b0();
        local_f8 = (double)fVar38;
        uVar32 = (uint)(local_f8 != 0.0);
        local_d0 = CONCAT44(local_d0._4_4_,uVar32);
        if (*(char *)(local_e0 + iVar30 * 0x14) == '\x1c') {
          uVar32 = (uint)(uVar32 == 0);
          goto LAB_0056e32a;
        }
      }
      else {
        uVar32 = *(uint *)(local_e0 + 0xc + iVar30 * 0x14);
LAB_0056e32a:
        local_d0 = CONCAT44(local_d0._4_4_,uVar32);
      }
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      iVar25 = local_a0._4_4_;
      uVar39 = local_c0;
joined_r0x00571ca9:
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      if (uVar32 != 0) goto LAB_0056e360;
      break;
    case 0x1d:
      local_c0._0_4_ = *(int **)(local_e0 + 4 + iVar30 * 0x14);
      local_c0._4_4_ = *(undefined4 **)(local_e0 + 8 + iVar30 * 0x14);
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = (undefined1  [8])0x0;
      local_70 = 0;
      local_94 = local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10;
      piVar7 = *(int **)(local_d8[0x10] + (int)(int *)local_c0 * 4);
      local_b8 = (double)ZEXT48(piVar7);
      local_b0 = (double)CONCAT44(local_b0._4_4_,*piVar7);
      if (*piVar7 == 0) {
        if (piVar7[4] < 1) {
LAB_0056e436:
          local_d0 = local_d0 & 0xffffffff00000000;
LAB_0056e440:
          *(ushort *)(local_94 + 7) = *(ushort *)(local_94 + 7) & 0xbe01 | 1;
          iVar16 = local_d4;
          puVar19 = local_e8;
          puVar35 = local_dc;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
        else {
          local_4c = local_e4 + piVar7[4] * 10;
          if (*(char *)((int)piVar7 + 0x22) == '\0') {
            local_d0 = CONCAT44(local_d0._4_4_,local_4c[6]);
            local_b8 = (double)CONCAT44(local_4c[1],piVar7);
            if ((*(byte *)(local_e0 + 3 + iVar30 * 0x14) & 0x20) == 0) {
              iVar16 = local_d8[0x14];
            }
            else {
              iVar16 = 0;
            }
            piVar7[0x14] = iVar16;
LAB_0056e565:
            uVar32 = (uint)(int *)local_d0;
LAB_0056e56b:
            iVar16 = (int)(int *)local_b8;
            local_a0._4_4_ = iVar25;
            goto LAB_0056e571;
          }
          FUN_005752a0(local_94);
          iVar16 = local_d4;
          puVar19 = local_e8;
          puVar35 = local_dc;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          if ((*(ushort *)(local_94 + 7) & 0x1000) != 0) {
            iVar25 = FUN_00574af0();
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
            iVar16 = local_d4;
            puVar19 = local_e8;
            puVar35 = local_dc;
            puVar13 = local_dc;
            uVar40 = local_d0;
            uVar39 = local_c0;
            if (iVar25 != 0) goto LAB_00572e06;
          }
        }
      }
      else {
        local_d4 = FUN_0056c810();
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        puVar19 = local_e8;
        if (local_d4 != 0) goto LAB_00572d8c;
        if (*(char *)((int)(int *)local_b8 + 0x1c) != '\0') goto LAB_0056e436;
        if (*(int *)((int)(int *)local_b8 + 0x50) != piVar20[0x14]) {
          if (*(char *)((int)(int *)local_b8 + 0x1f) == '\0') {
            FUN_0054cf70();
            iVar25 = local_a0._4_4_;
            goto LAB_0056e565;
          }
          FUN_0054dd50();
          local_d0 = CONCAT44(local_d0._4_4_,(int *)local_c8);
          uVar32 = (uint)(int *)local_c8;
          iVar25 = local_a0._4_4_;
          goto LAB_0056e56b;
        }
        uVar32 = *(uint *)((int)(int *)local_b8 + 0x54);
        local_d0 = CONCAT44(local_d0._4_4_,uVar32);
        local_b8 = (double)CONCAT44(*(undefined4 *)((int)(int *)local_b8 + 0x60),(int *)local_b8);
        iVar16 = (int)(int *)local_b8;
LAB_0056e571:
        puVar19 = local_e8;
        if (uVar32 == 0) goto LAB_0056e440;
        uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
        if ((uint)local_e8[0x14] < uVar32) goto LAB_00572de0;
        local_a4 = *(undefined4 **)(iVar16 + 0x14);
        iVar25 = *(int *)(iVar16 + 0x58);
        local_b0 = (double)CONCAT44(iVar25,(undefined4 *)local_b0);
        if (*(int *)(iVar16 + 0x50) == local_d8[0x14]) {
          local_a8 = *(undefined4 **)(iVar16 + 0x5c);
LAB_0056e826:
          puVar19 = local_e8;
          if (local_a8[(int)local_c0._4_4_] == 0) {
            if (*(char *)(local_e0 + 1 + iVar30 * 0x14) == -8) {
              FUN_005752a0(local_94,*(undefined4 *)(local_e0 + 0x10 + iVar30 * 0x14));
            }
            else {
              *(ushort *)(local_94 + 7) = *(ushort *)(local_94 + 7) & 0xbe01 | 1;
            }
          }
          else {
            if (local_b8._4_4_ == (byte *)0x0) {
              local_50 = *(uint *)(iVar25 + (int)local_c0._4_4_ * 4);
              bVar4 = *(byte *)(local_e0 + 3 + iVar30 * 0x14);
              if (((bVar4 & 0xc0) == 0) ||
                 (((local_50 < 0xc || ((local_50 & 1) != 0)) && (-1 < (char)bVar4)))) {
                local_a0._0_4_ = (undefined4 *)FUN_00576250();
                FUN_00574b60(&local_90);
                local_d4 = FUN_00574710((undefined4 *)local_b0,local_a8[(int)local_c0._4_4_],
                                        (undefined4 *)local_a0,
                                        *(undefined1 *)((int)(int *)local_b8 + 0x1f),&local_90);
                iVar16 = local_d4;
                puVar35 = local_dc;
                puVar13 = local_dc;
                uVar40 = local_d0;
                uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
                lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
                if (local_d4 != 0) break;
                pbVar18 = local_90._4_4_;
              }
              else {
                pbVar18 = (byte *)(-(uint)(local_50 < 0xc) & (uint)&local_c8);
              }
              uVar42 = CONCAT44(local_94,local_50);
              local_98 = pbVar18;
            }
            else {
              if ((*(ushort *)(local_94 + 7) & 0x2460) != 0) {
                FUN_00574d80();
                iVar25 = local_b0._4_4_;
              }
              pbVar18 = (byte *)(local_a8[(int)local_c0._4_4_] + (int)local_b8._4_4_);
              uVar42 = CONCAT44(local_94,*(undefined4 *)(iVar25 + (int)local_c0._4_4_ * 4));
            }
            FUN_00575e30(pbVar18,uVar42);
            *(char *)((int)local_94 + 0x1f) = (char)local_f0;
          }
          if (local_70._4_4_ != 0) {
            *(ushort *)(local_94 + 7) = *(ushort *)(local_94 + 7) & 0xe7ff;
            *(ushort *)(local_94 + 7) = *(ushort *)(local_94 + 7) | 0x200;
            local_94[1] = local_90._4_4_;
            local_94[9] = local_70._4_4_;
          }
          local_d4 = FUN_00574af0();
          iVar16 = local_d4;
          puVar35 = local_dc;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
        else {
          local_a8 = (undefined4 *)(iVar25 + (int)local_a4 * 4);
          local_54 = 0;
          *(undefined4 **)(iVar16 + 0x5c) = local_a8;
          *(int **)((int)(int *)local_b8 + 0x54) = (int *)local_d0;
          *(int *)((int)(int *)local_b8 + 0x50) = local_d8[0x14];
          if (local_b8._4_4_ == (byte *)0x0) {
            if (*(char *)((int)(int *)local_b8 + 0x1f) == '\0') {
              local_98 = (byte *)FUN_0054cf50((undefined4 *)local_b0);
            }
            else {
              local_98 = (byte *)FUN_0054dce0();
            }
            if (local_54 < (int *)local_d0) {
              *(undefined4 *)((int)(int *)local_b8 + 0x60) = 0;
            }
            else {
              local_b8 = (double)CONCAT44(local_98,(int *)local_b8);
              *(byte **)((int)(int *)local_b8 + 0x60) = local_98;
            }
          }
          else {
            local_98 = local_b8._4_4_;
          }
          if (*local_98 < 0x80) {
            local_60 = (undefined4 *)(uint)*local_98;
            local_58 = 1;
          }
          else {
            local_58 = FUN_0055aaf0(local_98);
            local_58 = local_58 & 0xff;
          }
          if (local_60 < (undefined4 *)0x18004) {
            local_a0._0_4_ = (undefined4 *)((int)local_a4 * 5 + 3);
            if ((int)local_60 < (int)(undefined4 *)local_a0) {
              local_a0._0_4_ = local_60;
            }
            if ((local_b8._4_4_ == (byte *)0x0) && ((int)local_54 < (int)(undefined4 *)local_a0)) {
              local_78._4_2_ = 0;
              local_90 = local_90 & 0xffffffff00000000;
              local_d4 = FUN_00574710((undefined4 *)local_b0,0,(undefined4 *)local_a0);
              iVar16 = local_d4;
              puVar19 = local_e8;
              puVar35 = local_dc;
              puVar13 = local_dc;
              uVar40 = local_d0;
              uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
              lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
              if (local_d4 != 0) break;
              local_98 = local_90._4_4_;
            }
            local_64 = local_98 + (int)(undefined4 *)local_a0;
            local_68 = local_98 + local_58;
            iVar25 = 0;
            local_a0._4_4_ = 0;
            if (0 < (int)local_a4) {
              do {
                if (local_68 < local_64) {
                  local_a8[iVar25] = local_60;
                  local_a0._4_4_ = iVar25;
                  if (*local_68 < 0x80) {
                    local_50 = (uint)*local_68;
                    local_68 = local_68 + 1;
                  }
                  else {
                    uVar32 = FUN_0055aaf0(local_68);
                    local_68 = local_68 + (uVar32 & 0xff);
                  }
                  *(uint *)(local_b0._4_4_ + local_a0._4_4_ * 4) = local_50;
                  local_5c = (undefined4 *)FUN_00576250();
                  local_60 = (undefined4 *)((int)local_60 + (int)local_5c);
                  iVar25 = local_a0._4_4_;
                  if (local_60 < local_5c) {
                    local_68 = local_64 + 1;
                    break;
                  }
                }
                else {
                  local_a8[iVar25] = 0;
                }
                iVar25 = iVar25 + 1;
                local_a0._4_4_ = iVar25;
              } while (iVar25 < (int)local_a4);
            }
            FUN_00574d40();
            local_78._4_2_ = 1;
            if (((local_68 <= local_64) && (local_60 <= (int *)local_d0)) &&
               ((local_68 != local_64 || (local_60 == (int *)local_d0)))) {
              iVar25 = local_b0._4_4_;
              goto LAB_0056e826;
            }
            local_d4 = FUN_00551190();
            iVar16 = local_d4;
            puVar19 = local_e8;
            puVar35 = local_dc;
            puVar13 = local_dc;
            uVar40 = local_d0;
            uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          }
          else {
            local_d4 = FUN_00551190();
            iVar16 = local_d4;
            puVar35 = local_dc;
            puVar13 = local_dc;
            uVar40 = local_d0;
            uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          }
        }
      }
      break;
    case 0x1e:
      pcVar31 = *(char **)(local_e0 + 0x10 + iVar30 * 0x14);
      puVar35 = local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10;
      cVar14 = *pcVar31;
      uVar26 = CONCAT31(local_d0._5_3_,cVar14);
      local_d0._0_4_ = (int *)pcVar31;
      while (cVar14 != '\0') {
        local_d0 = CONCAT44(uVar26,(char *)((int)(int *)local_d0 + 1));
        if ((*(ushort *)(puVar35 + 7) & 0x4000) != 0) {
          FUN_00574600();
        }
        FUN_0052b5d0(puVar35);
        cVar14 = *(char *)(int *)local_d0;
        puVar35 = puVar35 + 10;
        uVar26 = CONCAT31(local_d0._5_3_,cVar14);
        puVar19 = local_e8;
      }
      local_d0 = CONCAT44(uVar26,(char *)((int)(int *)local_d0 + 1));
      iVar16 = local_d4;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x1f:
      local_c0._0_4_ = (int *)0x0;
      uVar32 = 0;
      local_b0 = (double)((ulonglong)local_b0._4_4_ << 0x20);
      local_c8 = 0;
      local_98 = *(byte **)(local_e0 + 0x10 + iVar30 * 0x14);
      local_f8 = (double)CONCAT44(local_98,(undefined4)local_f8);
      puVar35 = local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10;
      iVar25 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
      local_a0._4_2_ = (ushort)iVar25;
      local_a0._6_2_ = (undefined2)((uint)iVar25 >> 0x10);
      local_a0._0_4_ = puVar35 + iVar25 * 10 + -10;
      local_94 = (undefined4 *)(uint)*(byte *)((int)local_d8 + 0x5d);
      local_dc = local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10;
      local_d0 = CONCAT44(puVar35,(int *)local_d0);
      local_a4 = puVar35;
      if (puVar35 <= (undefined4 *)local_a0) {
        uVar32 = 0;
        do {
          if (local_f8._4_4_ != 0) {
            FUN_0052b5d0(puVar35,*(undefined1 *)
                                  (((int)puVar35 - (int)local_a4) / 0x28 + local_f8._4_4_));
            local_f8 = (double)CONCAT44(local_98,(undefined4)local_f8);
            uVar32 = (uint)(undefined4 *)local_b0;
            puVar35 = local_d0._4_4_;
          }
          if (((*(ushort *)(puVar35 + 7) & 0x4000) != 0) && (0 < (int)puVar35[6])) {
            FUN_00574600();
            local_f8 = (double)CONCAT44(local_98,(undefined4)local_f8);
            uVar32 = (uint)(undefined4 *)local_b0;
            puVar35 = local_d0._4_4_;
          }
          local_a8 = (undefined4 *)FUN_00576140(puVar35);
          uVar34 = FUN_00576250(local_a8);
          local_c8 = CONCAT44((int)local_c8._4_4_ + ((int)uVar34 >> 0x1f) +
                              (uint)CARRY4((uint)(int *)local_c8,uVar34),
                              (int)(int *)local_c8 + uVar34);
          local_90 = CONCAT44(uVar34,(int)local_90);
          iVar25 = FUN_0056bd90(extraout_ECX,0);
          local_c0._0_4_ = (int *)((int)(int *)local_c0 + iVar25);
          if ((*(ushort *)(puVar35 + 7) & 0x4000) == 0) {
            if (uVar34 != 0) {
              uVar32 = 0;
            }
          }
          else {
            uVar32 = uVar32 + puVar35[4];
          }
          puVar35 = puVar35 + 10;
          local_b0 = (double)CONCAT44(local_b0._4_4_,uVar32);
          local_d0 = CONCAT44(puVar35,(int *)local_d0);
        } while (puVar35 <= (undefined4 *)local_a0);
      }
      iVar25 = FUN_0056bd90((int *)local_c0);
      uVar34 = (int)(int *)local_c0 + iVar25;
      local_b0 = (double)CONCAT44(iVar25,(undefined4 *)local_b0);
      local_c0._0_4_ = (int *)uVar34;
      iVar30 = FUN_0056bd90(uVar34,(int)uVar34 >> 0x1f);
      puVar35 = local_dc;
      if (iVar25 < iVar30) {
        uVar34 = uVar34 + 1;
        local_c0._0_4_ = (int *)uVar34;
      }
      uVar29 = (uVar34 - uVar32) + (int)(int *)local_c8;
      iVar30 = ((((int)uVar34 >> 0x1f) - ((int)uVar32 >> 0x1f)) - (uint)(uVar34 < uVar32)) +
               (int)local_c8._4_4_ + (uint)CARRY4(uVar34 - uVar32,(uint)(int *)local_c8);
      local_b8 = (double)CONCAT44(iVar30,uVar29);
      iVar25 = (int)local_e8[0x14] >> 0x1f;
      puVar19 = local_e8;
      local_a0._4_4_ = CONCAT22(local_a0._6_2_,local_a0._4_2_);
      uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
      if ((iVar25 < iVar30) ||
         ((iVar25 <= iVar30 &&
          (local_a0._4_4_ = CONCAT22(local_a0._6_2_,local_a0._4_2_),
          uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0), (uint)local_e8[0x14] < uVar29))))
      goto LAB_00572de0;
      iVar25 = FUN_005748c0(local_dc);
      lVar41 = CONCAT44(CONCAT22(local_a0._6_2_,local_a0._4_2_),(undefined4 *)local_a0);
      puVar19 = local_e8;
      if (iVar25 != 0) goto LAB_00572e06;
      local_d0 = CONCAT44(local_d0._4_4_,(undefined1 *)puVar35[1]);
      if ((int *)local_c0 < 0x80) {
        *(undefined1 *)puVar35[1] = (char)(int *)local_c0;
        uVar32 = 1;
      }
      else {
        uVar32 = FUN_00563780();
      }
      uVar34 = uVar32 & 0xff;
      local_90 = CONCAT44(local_90._4_4_,uVar32) & 0xffffffff000000ff;
      local_d0 = CONCAT44(local_a4,(int *)local_d0);
      if (local_a4 <= (undefined4 *)local_a0) {
        do {
          local_a8 = (undefined4 *)FUN_00576140();
          if (local_a8 < (undefined4 *)0x80) {
            *(char *)(uVar34 + (int)(int *)local_d0) = (char)local_a8;
            uVar32 = 1;
          }
          else {
            uVar32 = FUN_00563780();
          }
          uVar34 = (int)local_90 + (uVar32 & 0xff);
          puVar19 = (undefined4 *)((int)local_d0._4_4_ + 0x28);
          local_90 = CONCAT44(local_90._4_4_,uVar34);
          local_d0 = CONCAT44(puVar19,(int *)local_d0);
        } while (puVar19 <= (undefined4 *)local_a0);
      }
      local_d0 = CONCAT44(local_a4,(int *)local_d0);
      if (local_a4 <= (undefined4 *)local_a0) {
        do {
          iVar25 = FUN_00576090((int)(int *)local_d0 + uVar34,(int)(int *)local_b8 - uVar34);
          uVar34 = (int)local_90 + iVar25;
          puVar19 = (undefined4 *)((int)local_d0._4_4_ + 0x28);
          local_90 = CONCAT44(local_90._4_4_,uVar34);
          local_d0 = CONCAT44(puVar19,(int *)local_d0);
        } while (puVar19 <= (undefined4 *)local_a0);
      }
      puVar35[6] = (int *)local_b8;
      *(undefined2 *)(puVar35 + 7) = 0x410;
      puVar35[8] = 0;
      if ((undefined4 *)local_b0 != (undefined4 *)0x0) {
        puVar35[4] = (undefined4 *)local_b0;
        *(undefined2 *)(puVar35 + 7) = 0x4410;
      }
      *(undefined1 *)((int)puVar35 + 0x1f) = 1;
      iVar16 = local_d4;
      puVar19 = local_e8;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
      lVar41 = CONCAT44(CONCAT22(local_a0._6_2_,local_a0._4_2_),(undefined4 *)local_a0);
      break;
    case 0x20:
      iVar25 = **(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_c8 = CONCAT44(uVar32,iVar25);
      if (iVar25 == 0) {
        local_d0 = 0;
        puVar35[4] = 0;
        puVar35[5] = 0;
        uVar40 = local_d0;
      }
      else {
        local_d4 = FUN_0054cbd0();
        puVar35[4] = (int *)local_d0;
        puVar35[5] = local_d0._4_4_;
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x21:
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      uVar26 = *(undefined4 *)(local_e0 + 0x10 + iVar30 * 0x14);
      local_f8 = (double)CONCAT44(uVar26,(undefined4)local_f8);
      local_d0 = CONCAT44(uVar26,iVar25);
      if (iVar25 == 0) {
        puVar19 = local_e8;
        if ((int)local_e8[0x22] < 1) {
          uVar26 = FUN_00568070();
          local_c8 = CONCAT44(local_c8._4_4_,uVar26);
          local_d4 = FUN_00577550(puVar36,0,puVar36[0x79] + puVar36[0x78]);
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          puVar19 = puVar36;
          if (local_d4 != 0) goto LAB_00572d8c;
          piVar20 = (int *)FUN_00552230();
          local_c8 = CONCAT44(piVar20,(int *)local_c8);
          iVar16 = local_d4;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          if (piVar20 != (int *)0x0) {
            *piVar20 = (int)(piVar20 + 6);
            memcpy((void *)*piVar20,local_d0._4_4_,(int)(int *)local_c8 + 1);
            if (*(char *)((int)puVar36 + 0x36) == '\0') {
              puVar36[0x78] = puVar36[0x78] + 1;
            }
            else {
              *(undefined1 *)((int)puVar36 + 0x36) = 0;
              *(undefined1 *)((int)puVar36 + 0x3d) = 1;
            }
            *(undefined4 *)((int)local_c8._4_4_ + 0x10) = puVar36[0x76];
            puVar36[0x76] = local_c8._4_4_;
            *(undefined4 *)((int)local_c8._4_4_ + 8) = puVar36[0x7a];
            *(undefined4 *)((int)local_c8._4_4_ + 0xc) = puVar36[0x7b];
            iVar16 = local_d4;
            puVar13 = local_dc;
            uVar40 = local_d0;
            uVar39 = local_c0;
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          }
        }
        else {
LAB_0056eeeb:
          FUN_005670f0(local_d8 + 0xd);
          local_d4 = 5;
          iVar16 = 5;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
      }
      else {
        iVar16 = 0;
        local_b8 = (double)((ulonglong)uVar34 << 0x20);
        iVar30 = local_e8[0x76];
        local_c0._0_4_ = (int *)iVar30;
        if (iVar30 != 0) {
LAB_0056eff6:
          local_c0._0_4_ = (int *)iVar30;
          iVar23 = FUN_0057a2c0();
          piVar20 = local_d8;
          puVar19 = local_e8;
          if (iVar23 != 0) goto code_r0x0056f005;
          if ((0 < (int)local_e8[0x22]) && (iVar25 == 1)) {
            FUN_005670f0(local_d8 + 0xd);
            local_d4 = 5;
            iVar16 = 5;
            puVar35 = local_dc;
            puVar13 = local_dc;
            uVar40 = local_d0;
            uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
            break;
          }
          if ((*(int *)(iVar30 + 0x10) == 0) && (*(char *)((int)local_e8 + 0x3d) != '\0')) {
            local_f8 = (double)CONCAT44(1,(undefined4)local_f8);
            if (iVar25 == 1) {
              iVar25 = FUN_0056c500(local_d8);
              puVar19 = local_e8;
              lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
              if (iVar25 != 0) goto LAB_00572ea7;
              *(undefined1 *)((int)local_e8 + 0x36) = 1;
              iVar25 = FUN_00573740();
              if (iVar25 != 5) {
                *(undefined1 *)((int)puVar19 + 0x3d) = 0;
                local_d4 = piVar20[0x16];
                goto LAB_0056f1dc;
              }
              piVar20[0x15] = local_ec;
              *(undefined1 *)((int)puVar19 + 0x36) = 0;
              goto LAB_00572cab;
            }
          }
          else {
            local_f8 = (double)((ulonglong)local_f8 & 0xffffffff);
          }
          local_b8._0_4_ = (int *)((local_e8[0x78] - iVar16) - 1);
          if ((iVar25 == 2) && (local_b8._4_4_ = (byte *)0x0, 0 < (int)local_e8[5])) {
            do {
              FUN_0054f600();
              local_b8._4_4_ = (byte *)((int)local_b8._4_4_ + 1);
            } while ((int)local_b8._4_4_ < (int)puVar19[5]);
            iVar25 = (int)(int *)local_d0;
            iVar30 = (int)(int *)local_c0;
          }
          iVar23 = 0;
          local_b8 = (double)ZEXT48((int *)local_b8);
          iVar16 = local_d4;
          if (0 < (int)puVar19[5]) {
            while( true ) {
              local_d4 = iVar16;
              puVar35 = local_e8;
              local_d4 = FUN_0054efb0(*(undefined4 *)(local_e8[4] + 4 + iVar23 * 0x10));
              lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
              puVar19 = puVar35;
              local_c0 = CONCAT44(local_c0._4_4_,(int *)local_c0);
              if (local_d4 != 0) break;
              iVar23 = (int)local_b8._4_4_ + 1;
              local_b8 = (double)CONCAT44(iVar23,(int *)local_b8);
              iVar25 = (int)(int *)local_d0;
              iVar30 = (int)(int *)local_c0;
              puVar19 = local_e8;
              iVar16 = 0;
              if ((int)puVar35[5] <= iVar23) goto LAB_0056f1c0;
            }
            goto LAB_00572d8c;
          }
LAB_0056f1c0:
          if ((iVar25 == 2) && ((*(byte *)(puVar19 + 6) & 2) != 0)) {
            FUN_00553a10();
            FUN_00564000();
            puVar19[6] = puVar19[6] | 2;
LAB_0056f1dc:
            iVar25 = (int)(int *)local_d0;
            iVar30 = (int)(int *)local_c0;
          }
          if (puVar19[0x76] != iVar30) {
            do {
              local_c0._4_4_ = (undefined4 *)puVar19[0x76];
              puVar19[0x76] = local_c0._4_4_[4];
              FUN_005521a0();
              puVar19[0x78] = puVar19[0x78] + -1;
            } while ((int *)puVar19[0x76] != (int *)local_c0);
            iVar25 = (int)(int *)local_d0;
            iVar30 = (int)(int *)local_c0;
          }
          puVar19 = local_e8;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
          if (iVar25 == 1) {
            local_e8[0x76] = *(undefined4 *)(iVar30 + 0x10);
            FUN_005521a0();
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
            uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
            iVar16 = local_d4;
            puVar35 = local_dc;
            puVar13 = local_dc;
            uVar40 = local_d0;
            if (local_f8._4_4_ == 0) {
              puVar19[0x78] = puVar19[0x78] + -1;
LAB_0056f285:
              local_d4 = FUN_00577550(puVar19);
              lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
              iVar16 = local_d4;
              puVar35 = local_dc;
              puVar13 = local_dc;
              uVar40 = local_d0;
              uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
              local_c0 = CONCAT44(local_c0._4_4_,(int *)local_c0);
              if (local_d4 != 0) goto LAB_00572d8c;
            }
          }
          else {
            local_e8[0x7a] = *(undefined4 *)(iVar30 + 8);
            local_e8[0x7b] = *(undefined4 *)(iVar30 + 0xc);
            iVar16 = local_d4;
            puVar35 = local_dc;
            puVar13 = local_dc;
            uVar40 = local_d0;
            if (local_f8._4_4_ == 0) goto LAB_0056f285;
          }
          break;
        }
LAB_0056f01f:
        puVar19 = local_e8;
        FUN_005670f0(local_d8 + 0xd,local_e8);
        local_d4 = 1;
        iVar16 = 1;
        puVar35 = local_dc;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x22:
      uVar34 = *(uint *)(local_e0 + 4 + iVar30 * 0x14);
      iVar25 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
      local_d0 = CONCAT44(iVar25,uVar34);
      if ((uVar34 == 0) || (*(char *)((int)puVar19 + 0x36) != '\0')) {
        local_c8 = (ulonglong)uVar32 << 0x20;
      }
      else {
        local_c8 = CONCAT44(uVar32,1);
        if ((iVar25 == 0) && (0 < (int)puVar19[0x22])) goto LAB_0056eeeb;
      }
      if (uVar34 != *(byte *)((int)puVar19 + 0x36)) {
        if (iVar25 == 0) {
          iVar25 = FUN_0056c500(local_d8,1);
          piVar20 = local_d8;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          if (iVar25 != 0) goto LAB_00572ea7;
          *(char *)((int)puVar19 + 0x36) = (char)local_d0;
          iVar25 = FUN_00573740();
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          if (iVar25 == 5) {
            piVar20[0x15] = local_ec;
            *(char *)((int)puVar19 + 0x36) = '\x01' - (char)local_d0;
            local_d8[0x16] = 5;
            goto LAB_00572ea7;
          }
        }
        else {
          FUN_00564340(puVar19,0x204);
          *(undefined1 *)((int)puVar19 + 0x36) = 1;
        }
        FUN_0054fdb0();
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        goto LAB_00572ea7;
      }
      FUN_005670f0(local_d8 + 0xd);
      local_d4 = 1;
      iVar16 = 1;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x23:
      iVar25 = *(int *)(puVar19[4] + 4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 0x10);
      local_d0 = CONCAT44(local_d0._4_4_,iVar25);
      uVar40 = local_d0;
      if (iVar25 != 0) {
        local_d4 = FUN_0054c3f0(iVar25);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        if (local_d4 == 5) {
          local_d8[0x15] = local_ec;
          local_d8[0x16] = 5;
          goto LAB_00572ea7;
        }
        if (local_d4 != 0) goto LAB_00572d8c;
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        if (((*(int *)(local_e0 + 8 + iVar30 * 0x14) != 0) &&
            ((*(byte *)(local_d8 + 0x18) & 0x80) != 0)) &&
           ((*(char *)((int)puVar19 + 0x36) == '\0' || (1 < (int)puVar19[0x21])))) {
          if (local_d8[0x1c] == 0) {
            puVar19[0x79] = puVar19[0x79] + 1;
            local_d8[0x1c] = puVar19[0x78] + puVar19[0x79];
          }
          local_d4 = FUN_00577550(puVar19,0);
          if (local_d4 == 0) {
            local_d4 = FUN_0054c3a0((int *)local_d0);
          }
          local_d8[0x24] = puVar19[0x7a];
          local_d8[0x25] = puVar19[0x7b];
          iVar16 = local_d4;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
      }
      break;
    case 0x24:
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      local_d0 = CONCAT44(iVar25,(int *)local_d0);
      uVar26 = *(undefined4 *)(local_e0 + 0xc + iVar30 * 0x14);
      local_c8 = CONCAT44(uVar32,uVar26);
      FUN_0054d510(*(undefined4 *)(puVar19[4] + 4 + iVar25 * 0x10),uVar26);
      puVar35[4] = (int *)local_d0;
      puVar35[5] = (int)(int *)local_d0 >> 0x1f;
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x25:
      local_d0 = CONCAT44(local_d0._4_4_,*(int *)(local_e0 + 4 + iVar30 * 0x14) * 0x10 + puVar19[4])
      ;
      iVar25 = *(int *)(local_e0 + 0xc + iVar30 * 0x14);
      FUN_00574a70();
      local_d4 = FUN_0054f6e0(*(undefined4 *)((int)(int *)local_d0 + 4),
                              *(undefined4 *)(local_e0 + 8 + iVar30 * 0x14),puVar17[iVar25 * 10 + 4]
                             );
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      iVar16 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
      if (iVar16 == 1) {
        **(undefined4 **)((int)(int *)local_d0 + 0xc) = puVar17[iVar25 * 10 + 4];
        puVar19[6] = puVar19[6] | 2;
      }
      else if (iVar16 == 2) {
        *(undefined1 *)(*(int *)((int)(int *)local_d0 + 0xc) + 0x4c) =
             *(undefined1 *)(puVar17 + iVar25 * 10 + 4);
      }
      iVar16 = local_d4;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      if (*(int *)(local_e0 + 4 + iVar30 * 0x14) == 1) {
        FUN_00553a10();
        local_d8[0x18] = local_d8[0x18] & 0xffffffdf;
        iVar16 = local_d4;
        puVar35 = local_dc;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x26:
      iVar16 = *(int *)(puVar19[4] + 4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 0x10);
      local_c8 = CONCAT44(uVar32,iVar16);
      if (iVar16 == 0) {
        iVar16 = 0;
        local_d0 = 0;
        iVar23 = 0;
      }
      else {
        FUN_0054d510(iVar16,1);
        iVar23 = *(int *)(*(int *)(puVar19[4] + 0xc + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 0x10)
                         + 4);
        iVar16 = (int)(int *)local_d0;
        iVar25 = local_a0._4_4_;
        uVar39 = local_c0;
      }
      local_d0 = CONCAT44(iVar23,(int *)local_d0);
      if ((iVar16 != *(int *)(local_e0 + 8 + iVar30 * 0x14)) ||
         (iVar16 = local_d4, puVar13 = local_dc, uVar40 = local_d0,
         lVar41 = CONCAT44(iVar25,(undefined4 *)local_a0),
         iVar23 != *(int *)(local_e0 + 0xc + iVar30 * 0x14))) {
        local_a0._4_4_ = iVar25;
        local_c0 = uVar39;
        FUN_005521a0(puVar19);
        iVar25 = FUN_00552450(puVar19,"database schema has changed");
        local_d8[0xd] = iVar25;
        if ((int *)**(int **)(puVar19[4] + 0xc + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 0x10) !=
            (int *)local_d0) {
          FUN_00564060(puVar19);
        }
        local_d8[0x18] = local_d8[0x18] | 0x20;
        local_d4 = 0x11;
        iVar16 = 0x11;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x27:
    case 0x28:
      if ((*(byte *)(local_d8 + 0x18) & 0x20) == 0) {
        local_d0 = 0;
        iVar25 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
        iVar16 = *(int *)(local_e0 + 0xc + iVar30 * 0x14);
        local_c8 = CONCAT44(iVar16,iVar25);
        iVar23 = iVar16 * 0x10 + local_e8[4];
        local_b8 = (double)CONCAT44(iVar23,(int *)local_b8);
        local_c0._4_4_ = *(undefined4 **)(iVar23 + 4);
        if (*(char *)(local_e0 + iVar30 * 0x14) == '(') {
          local_c0._0_4_ = (int *)0x1;
          bVar4 = *(byte *)(*(int *)(iVar23 + 0xc) + 0x4c);
          if (bVar4 < *(byte *)((int)local_d8 + 0x5d)) {
            *(byte *)((int)local_d8 + 0x5d) = bVar4;
          }
        }
        else {
          local_c0._0_4_ = (int *)0x0;
        }
        iVar23 = 0;
        if ((*(byte *)(local_e0 + 3 + iVar30 * 0x14) & 2) != 0) {
          FUN_00574a70();
          local_c8 = CONCAT44(local_c8._4_4_,puVar17[iVar25 * 10 + 4]);
          if ((int)puVar17[iVar25 * 10 + 4] < 2) {
            local_d4 = FUN_00551190();
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
            puVar19 = local_e8;
            goto LAB_00572d8c;
          }
          iVar23 = (int)(int *)local_d0;
          iVar16 = (int)local_c8._4_4_;
        }
        iVar25 = local_e0;
        cVar14 = *(char *)(local_e0 + 1 + iVar30 * 0x14);
        if (cVar14 == -6) {
          uVar32 = *(uint *)(local_e0 + 0x10 + iVar30 * 0x14);
          local_d0 = (ulonglong)uVar32 << 0x20;
          *(undefined1 *)(uVar32 + 4) =
               *(undefined1 *)(*(int *)(*(int *)(*local_d8 + 0x10) + 0xc) + 0x4d);
          iVar23 = *(ushort *)(uVar32 + 6) + 1;
          iVar16 = (int)local_c8._4_4_;
LAB_0056f708:
          local_d0 = CONCAT44(local_d0._4_4_,iVar23);
        }
        else if (cVar14 == -0xe) {
          iVar23 = *(int *)(local_e0 + 0x10 + iVar30 * 0x14);
          goto LAB_0056f708;
        }
        iVar16 = FUN_00529890(local_d8,*(undefined4 *)(local_e0 + 4 + iVar30 * 0x14),iVar23,iVar16);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        local_b8 = (double)CONCAT44(local_b8._4_4_,iVar16);
        puVar19 = local_e8;
        if (iVar16 == 0) goto LAB_00572e06;
        *(undefined1 *)(iVar16 + 0x1c) = 1;
        *(undefined1 *)(iVar16 + 0x20) = 1;
        local_d4 = FUN_0054ce30(local_c0._4_4_,(int *)local_c8,(int *)local_c0,local_d0._4_4_);
        ((int *)local_b8)[2] = (int)local_d0._4_4_;
        *(byte *)(*(int *)local_b8 + 0x5d) = *(byte *)(iVar25 + 3 + iVar30 * 0x14) & 1;
        *(bool *)((int)(int *)local_b8 + 0x1e) = *(char *)(iVar25 + 1 + iVar30 * 0x14) != -6;
        *(bool *)((int)(int *)local_b8 + 0x1f) = *(char *)((int)(int *)local_b8 + 0x1e) == '\0';
        iVar16 = local_d4;
        puVar19 = local_e8;
        puVar35 = local_dc;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      else {
        local_d4 = 4;
        iVar16 = 4;
      }
      break;
    case 0x29:
    case 0x2a:
      iVar25 = FUN_00529890(local_d8,*(undefined4 *)(local_e0 + 4 + iVar30 * 0x14),
                            *(undefined4 *)(local_e0 + 8 + iVar30 * 0x14),0xffffffff);
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      local_d0 = CONCAT44(local_d0._4_4_,iVar25);
      if (iVar25 == 0) goto LAB_00572e06;
      *(undefined1 *)(iVar25 + 0x1c) = 1;
      local_d4 = FUN_0054e4a0(*puVar19,0,puVar19,iVar25 + 4,
                              *(byte *)(local_e0 + 3 + iVar30 * 0x14) | 5);
      if (local_d4 == 0) {
        local_d4 = FUN_0054c3f0(*(undefined4 *)((int)(int *)local_d0 + 4));
        if (local_d4 == 0) {
          if (*(int *)(local_e0 + 0x10 + iVar30 * 0x14) == 0) {
            local_d4 = FUN_0054ce30(*(undefined4 *)((int)(int *)local_d0 + 4),1,1,0);
            *(undefined1 *)((int)(int *)local_d0 + 0x1e) = 1;
          }
          else {
            local_d4 = FUN_0054cde0(*(undefined4 *)((int)(int *)local_d0 + 4),&local_11c);
            if (local_d4 == 0) {
              local_d4 = FUN_0054ce30(*(undefined4 *)((int)(int *)local_d0 + 4),local_11c,1,
                                      *(undefined4 *)(local_e0 + 0x10 + iVar30 * 0x14));
              *(undefined4 *)((int)(int *)local_d0 + 8) =
                   *(undefined4 *)(local_e0 + 0x10 + iVar30 * 0x14);
              *(undefined1 *)(*(int *)((int)(int *)local_d0 + 8) + 4) =
                   *(undefined1 *)(*(int *)(*(int *)(*local_d8 + 0x10) + 0xc) + 0x4d);
            }
            *(undefined1 *)((int)(int *)local_d0 + 0x1e) = 0;
          }
        }
      }
      *(bool *)((int)(int *)local_d0 + 0x20) = *(char *)(local_e0 + 3 + iVar30 * 0x14) != '\b';
      *(bool *)((int)(int *)local_d0 + 0x1f) = *(char *)((int)(int *)local_d0 + 0x1e) == '\0';
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x2b:
      iVar25 = FUN_00529890(local_d8,*(undefined4 *)(local_e0 + 4 + iVar30 * 0x14),
                            *(undefined4 *)(local_e0 + 8 + iVar30 * 0x14),0xffffffff);
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      local_d0 = CONCAT44(local_d0._4_4_,iVar25);
      if (iVar25 == 0) goto LAB_00572e06;
      *(undefined4 *)(iVar25 + 8) = *(undefined4 *)(local_e0 + 0x10 + iVar30 * 0x14);
      *(undefined1 *)(*(int *)(iVar25 + 8) + 4) =
           *(undefined1 *)(*(int *)(*(int *)(*local_d8 + 0x10) + 0xc) + 0x4d);
      *(undefined1 *)(iVar25 + 0x21) = 1;
      local_d4 = FUN_005764e0(puVar19);
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x2c:
      iVar25 = FUN_00529890(local_d8,*(undefined4 *)(local_e0 + 4 + iVar30 * 0x14),
                            *(undefined4 *)(local_e0 + 0xc + iVar30 * 0x14),0xffffffff);
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      local_d0 = CONCAT44(local_d0._4_4_,iVar25);
      if (iVar25 == 0) goto LAB_00572e06;
      *(undefined1 *)(iVar25 + 0x1c) = 1;
      *(undefined4 *)(iVar25 + 0x10) = *(undefined4 *)(local_e0 + 8 + iVar30 * 0x14);
      *(undefined1 *)(iVar25 + 0x1e) = 1;
      *(undefined1 *)(iVar25 + 0x1f) = 0;
      *(undefined1 *)(iVar25 + 0x22) = *(undefined1 *)(local_e0 + 3 + iVar30 * 0x14);
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      break;
    case 0x2d:
      FUN_00573650(local_d8);
      *(undefined4 *)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4) = 0;
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
      piVar20 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_c8 = CONCAT44(uVar32,piVar20);
      if (*piVar20 == 0) goto LAB_0056e360;
      uVar5 = *(undefined1 *)(local_e0 + iVar30 * 0x14);
      local_d0 = (ulonglong)CONCAT14(uVar5,(int *)local_d0);
      *(undefined1 *)(piVar20 + 7) = 0;
      if (*(char *)((int)piVar20 + 0x1e) == '\0') {
        local_a8 = *(undefined4 **)(local_e0 + 0x10 + iVar30 * 0x14);
        local_c0._0_4_ = (int *)piVar20[2];
        local_c0._4_4_ =
             (undefined4 *)(CONCAT13(local_c0._7_1_,CONCAT12(uVar5,local_a8._0_2_)) & 0xff01ffff);
        local_b0 = (double)CONCAT44(local_b0._4_4_,
                                    local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10);
        if ((*(ushort *)(local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10 + 7) & 0x4000) !=
            0) {
          FUN_00574600();
          piVar20 = (int *)local_c8;
        }
        local_d4 = FUN_0054df80(*piVar20,&local_c0,0,0,0);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        if (local_d4 != 0) goto LAB_00572d8c;
        *(undefined1 *)((int)(int *)local_c8 + 0x19) = 0;
      }
      else {
        puVar35 = local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10;
        FUN_0052b630();
        lVar41 = FUN_00573c40(puVar35);
        *(undefined1 *)((int)(int *)local_c8 + 0x19) = 0;
        if ((*(ushort *)(puVar35 + 7) & 4) == 0) {
          uVar39 = local_c0;
          if ((*(ushort *)(puVar35 + 7) & 8) == 0) {
            iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
            puVar35 = local_dc;
            goto LAB_0056e364;
          }
          if (lVar41 == -0x8000000000000000) {
            local_f8 = -9.223372036854776e+18;
            if ((*(double *)(puVar35 + 2) < -9.223372036854776e+18) ||
               (0.0 < *(double *)(puVar35 + 2))) {
              local_d0 = CONCAT44(local_d0._4_4_,1);
              local_a0 = lVar41;
              if (0.0 < *(double *)(puVar35 + 2) || *(double *)(puVar35 + 2) == 0.0) {
                if ((int)local_d0._4_4_ < 0x30) {
                  local_d4 = FUN_0054dd90(*(int *)local_c8);
                  lVar41 = local_a0;
                  uVar39 = local_c0;
                  goto LAB_0056fba7;
                }
              }
              else if (0x2f < (int)local_d0._4_4_) {
                local_d4 = FUN_0054d460(*(int *)local_c8);
                lVar41 = local_a0;
                uVar39 = local_c0;
LAB_0056fba7:
                local_c0 = uVar39;
                if (local_d4 != 0) goto LAB_00572d8c;
                iVar16 = local_d4;
                puVar35 = local_dc;
                puVar13 = local_dc;
                uVar40 = local_d0;
                if ((int *)local_d0 != (int *)0x0) {
                  iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
                  goto LAB_0056e364;
                }
                break;
              }
LAB_0056cbbf:
              iVar16 = local_d4;
              puVar35 = local_dc;
              local_ec = *(int *)(local_e0 + 8 + iVar30 * 0x14) + -1;
              puVar13 = local_dc;
              uVar40 = local_d0;
              break;
            }
          }
          if ((local_d0._4_4_ == (int *)0x2e) || (local_d0._4_4_ == (int *)0x30)) {
            local_f8 = (double)lVar41;
            if (local_f8 < *(double *)(puVar35 + 2)) {
              lVar41 = lVar41 + 1;
            }
          }
          else {
            local_f8 = (double)lVar41;
            if (*(double *)(puVar35 + 2) <= local_f8 && local_f8 != *(double *)(puVar35 + 2)) {
              lVar41 = lVar41 + -1;
            }
          }
        }
        local_a0 = lVar41;
        local_d4 = FUN_0054df80(*(int *)local_c8,0,lVar41,0);
        lVar41 = local_a0;
        if (local_d4 != 0) goto LAB_00572d8c;
        if ((int *)local_d0 == (int *)0x0) {
          *(undefined1 *)((int)(int *)local_c8 + 0x19) = 1;
          *(longlong *)((int)(int *)local_c8 + 0x40) = local_a0;
        }
      }
      *(undefined1 *)((int)(int *)local_c8 + 0x1d) = 0;
      ((int *)local_c8)[0x14] = 0;
      puVar35 = local_dc;
      local_a0 = lVar41;
      if ((int)local_d0._4_4_ < 0x30) {
        if (((int)(int *)local_d0 < 1) &&
           (((int *)local_d0 != (int *)0x0 || (local_d0._4_4_ != (int *)0x2e)))) {
          uVar32 = (uint)(*(char *)(*(int *)local_c8 + 0x5b) != '\x01');
          local_d0 = CONCAT44(local_d0._4_4_,uVar32);
          bVar37 = uVar32 == 0;
          goto LAB_0056de1b;
        }
        local_d4 = FUN_0054eaf0(*(int *)local_c8);
        lVar41 = local_a0;
      }
      else {
        if ((-1 < (int)(int *)local_d0) &&
           (((int *)local_d0 != (int *)0x0 || (local_d0._4_4_ != (int *)0x31)))) {
          local_d0 = ZEXT48(local_d0._4_4_) << 0x20;
          iVar16 = local_d4;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          break;
        }
        local_d4 = FUN_0054e330(*(int *)local_c8);
        lVar41 = local_a0;
      }
      if (local_d4 != 0) goto LAB_00572d8c;
      *(undefined1 *)((int)(int *)local_c8 + 0x19) = 0;
      bVar37 = (int *)local_d0 == (int *)0x0;
      puVar35 = local_dc;
      goto LAB_0056de1b;
    case 0x32:
      piVar20 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,piVar20);
      uVar40 = local_d0;
      if (*piVar20 != 0) {
        *(undefined1 *)(piVar20 + 7) = 0;
        uVar42 = FUN_00573c40();
        *(undefined8 *)((int)(int *)local_d0 + 0x38) = uVar42;
        *(undefined1 *)((int)(int *)local_d0 + 0x19) = 0;
        *(undefined1 *)((int)(int *)local_d0 + 0x1d) = 1;
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x33:
    case 0x34:
      uVar32 = 0;
      piVar20 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_d0 = ZEXT48(piVar20) << 0x20;
      puVar35 = local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10;
      if (*piVar20 != 0) {
        if (*(int *)(local_e0 + 0x10 + iVar30 * 0x14) < 1) {
          puVar21 = (undefined8 *)FUN_0056c220(piVar20[2],&local_a0,0x97);
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          local_c0 = CONCAT44(local_c0._4_4_,puVar21);
          if (puVar21 == (undefined8 *)0x0) goto LAB_00572e06;
          local_c0._0_4_ = (int *)puVar21;
          FUN_00575bc0(*(undefined4 *)((int)local_d0._4_4_ + 8),puVar35[6],puVar35[1]);
          *(byte *)((int)(int *)local_c0 + 6) = *(byte *)((int)(int *)local_c0 + 6) | 2;
          piVar20 = local_d0._4_4_;
        }
        else {
          local_b8._0_6_ = CONCAT24(*(undefined2 *)(local_e0 + 0x10 + iVar30 * 0x14),piVar20[2]);
          local_c0._0_4_ = (int *)&local_b8;
          local_b8._0_7_ = CONCAT16(2,(undefined6)local_b8);
          local_a8 = puVar35;
        }
        local_d4 = FUN_0054df80(*piVar20,(int *)local_c0,0,0,0);
        iVar25 = local_a0._4_4_;
        if (*(int *)(local_e0 + 0x10 + iVar30 * 0x14) == 0) {
          FUN_005521a0(puVar19);
          iVar25 = local_a0._4_4_;
        }
        uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
        iVar16 = local_d4;
        puVar35 = local_dc;
        puVar13 = local_dc;
        uVar40 = local_d0;
        lVar41 = CONCAT44(iVar25,(undefined4 *)local_a0);
        if (local_d4 != 0) break;
        uVar32 = (uint)((int *)local_c8 == (int *)0x0);
        local_d0 = CONCAT44(local_d0._4_4_,uVar32);
        *(undefined1 *)((int)local_d0._4_4_ + 0x1d) = 0;
        *(undefined4 *)((int)local_d0._4_4_ + 0x50) = 0;
      }
      lVar41 = CONCAT44(iVar25,(undefined4 *)local_a0);
      puVar35 = local_dc;
      uVar40 = local_d0;
      iVar16 = local_d4;
      puVar13 = local_dc;
      if (*(char *)(local_e0 + iVar30 * 0x14) == '4') {
        if (uVar32 != 0) {
          iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
          lVar41 = CONCAT44(iVar25,(undefined4 *)local_a0);
          goto LAB_0056e364;
        }
      }
      else if (uVar32 == 0) {
        iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
        goto LAB_0056e364;
      }
      break;
    case 0x35:
      iVar25 = *(int *)(local_e0 + 0xc + iVar30 * 0x14);
      local_c0._0_4_ = local_e4 + *(int *)(local_e0 + 0x10 + iVar30 * 0x14) * 10;
      piVar20 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_d0 = CONCAT44(piVar20,(int *)local_d0);
      piVar20[0x13] = 0;
      piVar20[0x14] = 0;
      iVar23 = *piVar20;
      local_f8 = (double)CONCAT44(iVar23,(undefined4)local_f8);
      uVar6 = *(ushort *)(piVar20[2] + 6);
      uVar27 = 0;
      local_c8._0_6_ = CONCAT24(uVar6,iVar23);
      local_d0 = local_d0 & 0xffffffffffff0000;
      uVar39 = CONCAT44(puVar12,(int *)local_c0);
      if (uVar6 != 0) {
        uVar32 = 0;
        do {
          if ((*(byte *)((int *)local_c0 + uVar32 * 10 + 7) & 1) != 0) {
            iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
            local_c8 = local_c8 & 0xffffffff00000000;
            puVar19 = local_e8;
            puVar35 = local_dc;
            goto LAB_0056e364;
          }
          uVar27 = uVar27 + 1;
          uVar32 = (uint)uVar27;
          local_d0 = CONCAT62(local_d0._2_6_,uVar27);
        } while (uVar32 < uVar6);
      }
      puVar19 = puVar36;
      puVar35 = puVar10;
      uVar40 = local_d0;
      if (iVar23 != 0) {
        local_b8._0_6_ = CONCAT24(uVar6 + 1,*(undefined4 *)((int)local_d0._4_4_ + 8));
        local_b8._0_7_ = CONCAT16(4,(undefined6)local_b8);
        local_a8 = (int *)local_c0;
        FUN_00574a70();
        local_a0._0_4_ = (undefined4 *)puVar17[iVar25 * 10 + 4];
        local_a0._4_2_ = (ushort)puVar17[iVar25 * 10 + 5];
        local_a0._6_2_ = (undefined2)((uint)puVar17[iVar25 * 10 + 5] >> 0x10);
        local_d4 = FUN_0054df80((int *)local_c8,&local_b8,0,0,0,(int)local_d0._4_4_ + 0x4c);
        if (((ulonglong)local_b8 & 0x4000000000000) == 0) {
          if (((undefined4 *)local_b0 != (undefined4 *)local_a0) ||
             (local_b0._4_4_ != CONCAT22(local_a0._6_2_,local_a0._4_2_))) {
            puVar17[iVar25 * 10 + 4] = (undefined4 *)local_b0;
            puVar17[iVar25 * 10 + 5] = local_b0._4_4_;
            iVar16 = local_d4;
            puVar19 = local_e8;
            puVar35 = local_dc;
            puVar13 = local_dc;
            uVar40 = local_d0;
            uVar39 = local_c0;
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
            break;
          }
        }
LAB_005717d0:
        iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
        puVar19 = local_e8;
        puVar35 = local_dc;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        uVar39 = local_c0;
        goto LAB_0056e364;
      }
      break;
    case 0x36:
      iVar25 = *(int *)(local_e0 + 0xc + iVar30 * 0x14);
      piVar20 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      iVar23 = *piVar20;
      local_d0 = CONCAT44(iVar23,piVar20);
      if (iVar23 == 0) {
        iVar25 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
        piVar20[0x13] = 0;
        puVar35 = puVar10;
        local_ec = iVar25 + -1;
        uVar40 = local_d0;
      }
      else {
        local_c8 = (ulonglong)uVar32 << 0x20;
        local_c0._0_4_ = (int *)local_e4[iVar25 * 10 + 4];
        local_c0._4_4_ = (undefined4 *)local_e4[iVar25 * 10 + 5];
        local_d4 = FUN_0054df80(iVar23,0,(int *)local_c0,local_c0._4_4_,0);
        *(undefined4 *)((int)(int *)local_d0 + 0x40) = local_e4[iVar25 * 10 + 4];
        *(undefined4 *)((int)(int *)local_d0 + 0x44) = local_e4[iVar25 * 10 + 5];
        *(bool *)((int)(int *)local_d0 + 0x19) = (int *)local_c8 == (int *)0x0;
        *(undefined1 *)((int)(int *)local_d0 + 0x1c) = 0;
        *(undefined4 *)((int)(int *)local_d0 + 0x50) = 0;
        *(undefined1 *)((int)(int *)local_d0 + 0x1d) = 0;
        if ((int *)local_c8 != (int *)0x0) {
          local_ec = *(int *)(local_e0 + 8 + iVar30 * 0x14) + -1;
        }
        *(int **)((int)(int *)local_d0 + 0x4c) = (int *)local_c8;
        iVar16 = local_d4;
        puVar19 = local_e8;
        puVar35 = local_dc;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x37:
      iVar25 = *(int *)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      puVar35[4] = *(undefined4 *)(iVar25 + 0x30);
      puVar35[5] = *(undefined4 *)(iVar25 + 0x34);
      iVar25 = *(int *)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      puVar2 = (uint *)(iVar25 + 0x30);
      uVar32 = *puVar2;
      *puVar2 = *puVar2 + 1;
      piVar20 = (int *)(iVar25 + 0x34);
      *piVar20 = *piVar20 + (uint)(0xfffffffe < uVar32);
      break;
    case 0x38:
      local_d0 = 0;
      piVar20 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_c8 = ZEXT48(piVar20);
      iVar16 = *piVar20;
      if (iVar16 != 0) {
        if (*(char *)((int)piVar20 + 0x1b) == '\0') {
          local_130 = *(int *)(iVar16 + 0x20);
          iVar23 = *(int *)(iVar16 + 0x24);
          local_d0 = *(ulonglong *)(iVar16 + 0x20);
          if (local_130 == 0 && iVar23 == 0) {
            local_d4 = FUN_0054dd90(*piVar20);
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
            if (local_d4 != 0) goto LAB_00572d8c;
            if (local_c8._4_4_ == (undefined4 *)0x0) {
              local_d4 = FUN_0054dd50(*(int *)local_c8);
              if (((int)local_d0._4_4_ < 0x7fffffff) || ((int *)local_d0 != (int *)0xffffffff)) {
                iVar23 = (int)local_d0._4_4_ + (uint)(0xfffffffe < (int *)local_d0);
                goto LAB_005703e8;
              }
              *(undefined1 *)((int)(int *)local_c8 + 0x1b) = 1;
              local_130 = -1;
              iVar23 = (int)local_d0._4_4_;
              iVar25 = local_a0._4_4_;
              uVar39 = local_c0;
            }
            else {
              iVar23 = 0;
              local_d0._0_4_ = (int *)0x0;
LAB_005703e8:
              local_130 = (int)(int *)local_d0 + 1;
              local_d0 = CONCAT44(iVar23,local_130);
              iVar25 = local_a0._4_4_;
              uVar39 = local_c0;
            }
            piVar20 = (int *)local_c8;
          }
          local_c0._0_4_ = (int *)uVar39;
          iVar16 = *(int *)(local_e0 + 0xc + iVar30 * 0x14);
          local_a0._4_4_ = iVar25;
          if (iVar16 != 0) {
            iVar25 = local_d8[0x28];
            if (iVar25 == 0) {
              local_c0._4_4_ = local_e4 + iVar16 * 10;
            }
            else {
              local_b8 = (double)CONCAT44(local_b8._4_4_,iVar25);
              for (iVar16 = *(int *)(iVar25 + 4); iVar16 != 0; iVar16 = *(int *)(iVar16 + 4)) {
                local_b8._4_4_ = (byte *)((ulonglong)local_b8 >> 0x20);
                local_b8 = (double)CONCAT44(local_b8._4_4_,iVar16);
                iVar25 = iVar16;
              }
              local_c0._4_4_ =
                   (undefined4 *)
                   (*(int *)(iVar25 + 0xc) + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 0x28);
            }
            FUN_00574a70();
            uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
            uVar32 = local_c0._4_4_[4];
            uVar40 = local_c8;
            iVar25 = local_a0._4_4_;
            if (((uVar32 == 0xffffffff) && (local_c0._4_4_[5] == 0x7fffffff)) ||
               (*(char *)((int)(int *)local_c8 + 0x1b) != '\0')) {
LAB_00572d9f:
              local_c8 = uVar40;
              local_d4 = 0xd;
              lVar41 = CONCAT44(iVar25,(undefined4 *)local_a0);
              local_c0 = CONCAT44(local_c0._4_4_,(int *)local_c0);
              goto LAB_00572d8c;
            }
            uVar34 = uVar32 + 1;
            iVar25 = local_c0._4_4_[5] + (uint)(0xfffffffe < uVar32);
            uVar32 = (uint)(int *)local_d0;
            if (((int)local_d0._4_4_ <= iVar25) &&
               (((int)local_d0._4_4_ < iVar25 || ((int *)local_d0 < uVar34)))) {
              local_d0 = CONCAT44(iVar25,uVar34);
              uVar32 = uVar34;
            }
            local_c0._4_4_[4] = uVar32;
            local_c0._4_4_[5] = local_d0._4_4_;
            local_130 = (int)(int *)local_d0;
            iVar23 = (int)local_d0._4_4_;
            piVar20 = (int *)local_c8;
          }
          if ((iVar23 < 0x7fffffff) || (local_130 != -1)) {
            local_130 = local_130 + 1;
          }
          else {
            local_130 = 0;
          }
          local_c0 = uVar39;
          FUN_0054f260(*piVar20,local_130);
          piVar20 = (int *)local_c8;
          uVar40 = local_c8;
          iVar25 = local_a0._4_4_;
          uVar39 = local_c0;
          if (*(char *)((int)(int *)local_c8 + 0x1b) != '\0') goto LAB_00570534;
        }
        else {
LAB_00570534:
          iVar25 = (local_100 & 0x3fffffff) + (uint)(0xfffffffe < local_104);
          local_d0 = CONCAT44(iVar25,local_104 + 1);
          local_c0._0_4_ = (int *)0x0;
          local_d4 = FUN_0054df80(*piVar20,0,local_104 + 1,iVar25,0);
          uVar40 = local_c8;
          iVar25 = local_a0._4_4_;
          while (local_d4 == 0) {
            local_c8._4_4_ = (undefined4 *)(uVar40 >> 0x20);
            if ((local_c8._4_4_ != (undefined4 *)0x0) ||
               (local_c0._0_4_ = (int *)((int)(int *)local_c0 + 1), 99 < (int)(int *)local_c0)) {
              if (local_c8._4_4_ == (undefined4 *)0x0) goto LAB_00572d9f;
              break;
            }
            local_c8 = uVar40;
            local_a0._4_4_ = iVar25;
            FUN_005245e0(8);
            if ((int)(int *)local_c0 < 5) {
              local_d0._0_4_ = (int *)((uint)(int *)local_d0 & 0xffffff);
              uVar32 = 0;
            }
            else {
              uVar32 = (uint)local_d0._4_4_ & 0x3fffffff;
            }
            iVar25 = (int)(int *)local_d0 + 1;
            iVar30 = uVar32 + (0xfffffffe < (int *)local_d0);
            local_d0 = CONCAT44(iVar30,iVar25);
            local_d4 = FUN_0054df80(*(int *)local_c8,0,iVar25,iVar30,0);
            uVar40 = local_c8;
            iVar25 = local_a0._4_4_;
          }
          uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
          local_c8._0_4_ = (int *)uVar40;
        }
        local_c8 = uVar40;
        puVar3 = (undefined1 *)((int)(int *)local_c8 + 0x19);
        *puVar3 = 0;
        *(undefined1 *)((int)(int *)local_c8 + 0x1d) = 0;
        *(undefined4 *)((int)(int *)local_c8 + 0x50) = 0;
      }
      local_dc[4] = (int *)local_d0;
      local_dc[5] = local_d0._4_4_;
      iVar16 = local_d4;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      lVar41 = CONCAT44(iVar25,(undefined4 *)local_a0);
      break;
    case 0x39:
    case 0x3a:
      puVar35 = local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
      local_c0._0_4_ = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      uVar32 = *(uint *)(local_e0 + 0xc + iVar30 * 0x14);
      if (*(char *)(local_e0 + iVar30 * 0x14) == '9') {
        local_d0._4_4_ = local_e4 + uVar32 * 10;
        uVar32 = local_d0._4_4_[4];
        uVar29 = local_d0._4_4_[5];
      }
      else {
        uVar29 = (int)uVar32 >> 0x1f;
      }
      local_d0 = CONCAT44(local_d0._4_4_,puVar35);
      local_c8 = CONCAT44(uVar29,uVar32);
      if ((*(byte *)(local_e0 + 3 + iVar30 * 0x14) & 1) != 0) {
        local_d8[0x19] = local_d8[0x19] + 1;
      }
      if ((*(byte *)(local_e0 + 3 + iVar30 * 0x14) & 2) != 0) {
        local_e8[8] = uVar32;
        local_e8[9] = uVar29;
        local_104 = uVar32;
        local_100 = uVar29;
      }
      if ((*(byte *)(puVar35 + 7) & 1) != 0) {
        puVar35[1] = 0;
        puVar35[6] = 0;
      }
      if ((*(byte *)(local_e0 + 3 + iVar30 * 0x14) & 0x10) == 0) {
        local_b8 = (double)((ulonglong)uVar34 << 0x20);
      }
      else {
        local_b8 = (double)CONCAT44(uVar34,((int *)local_c0)[0x13]);
      }
      if ((*(ushort *)(puVar35 + 7) & 0x4000) == 0) {
        local_c0._4_4_ = (undefined4 *)0x0;
      }
      else {
        local_c0._4_4_ = (undefined4 *)puVar35[4];
      }
      FUN_0054f260(*(int *)local_c0,0);
      iVar25 = local_e0;
      local_d4 = FUN_0054d680(*(int *)local_c0,0,(int *)local_c8,local_c8._4_4_,
                              *(undefined4 *)((int)(int *)local_d0 + 4),
                              *(undefined4 *)((int)(int *)local_d0 + 0x18),local_c0._4_4_,
                              *(byte *)(local_e0 + 3 + iVar30 * 0x14) & 8,(int *)local_b8);
      puVar19 = local_e8;
      *(undefined1 *)((int)(int *)local_c0 + 0x19) = 0;
      *(undefined1 *)((int)(int *)local_c0 + 0x1d) = 0;
      ((int *)local_c0)[0x14] = 0;
      iVar16 = local_d4;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if (((local_d4 == 0) &&
          (uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0),
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0), local_e8[0x2f] != 0)) &&
         (uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0),
         lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0),
         *(int *)(iVar25 + 0x10 + iVar30 * 0x14) != 0)) {
        uVar26 = *(undefined4 *)(local_e8[4] + ((int *)local_c0)[3] * 0x10);
        local_b8 = (double)CONCAT44(uVar26,(int *)local_b8);
        uVar8 = *(undefined4 *)(iVar25 + 0x10 + iVar30 * 0x14);
        uVar22 = 0x12;
        if ((*(byte *)(iVar25 + 3 + iVar30 * 0x14) & 4) != 0) {
          uVar22 = 0x17;
        }
        local_b0 = (double)CONCAT44(uVar22,uVar8);
        (*(code *)local_e8[0x2f])(local_e8[0x2e],uVar22,uVar26,uVar8,(int *)local_c8);
        iVar16 = local_d4;
        puVar35 = local_dc;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x3b:
      local_d0 = 0;
      iVar25 = *(int *)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_c8 = CONCAT44(uVar32,iVar25);
      if ((puVar19[0x2f] != 0) && (*(int *)(local_e0 + 0x10 + iVar30 * 0x14) != 0)) {
        local_d0 = *(ulonglong *)(iVar25 + 0x40);
      }
      local_d4 = FUN_0056c810();
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if (local_d4 != 0) {
LAB_00572d8c:
        if (*(char *)(puVar19 + 0xe) == '\0') {
          iVar16 = local_d4;
          if (local_d4 == 0xc0a) goto LAB_00572e2d;
        }
        else {
          local_d4 = 7;
        }
        local_a0 = lVar41;
        uVar26 = FUN_00553860();
        FUN_005670f0(local_d8 + 0xd,puVar19,&DAT_00716900,uVar26);
        iVar16 = local_d4;
        lVar41 = local_a0;
        goto LAB_00572e2d;
      }
      FUN_0054f260(*(int *)local_c8,0);
      local_d4 = FUN_0054cfd0(*(int *)local_c8);
      *(undefined4 *)((int)(int *)local_c8 + 0x50) = 0;
      if (((local_d4 == 0) && ((code *)puVar19[0x2f] != (code *)0x0)) &&
         (iVar25 = *(int *)(local_e0 + 0x10 + iVar30 * 0x14), iVar25 != 0)) {
        (*(code *)puVar19[0x2f])
                  (puVar19[0x2e],9,
                   *(undefined4 *)(puVar19[4] + *(int *)((int)(int *)local_c8 + 0xc) * 0x10),iVar25,
                   (int *)local_d0);
      }
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if ((*(byte *)(local_e0 + 8 + iVar30 * 0x14) & 1) != 0) {
        local_d8[0x19] = local_d8[0x19] + 1;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x3c:
      iVar25 = local_d8[0x19];
      puVar19[0x13] = puVar19[0x13] + iVar25;
      puVar19[0x12] = iVar25;
      local_d8[0x19] = 0;
      break;
    case 0x3d:
      uVar26 = *(undefined4 *)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,uVar26);
      local_d4 = FUN_00576430(uVar26,local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10);
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if (local_d0._4_4_ != (int *)0x0) {
        iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
        goto LAB_0056e364;
      }
      break;
    case 0x3e:
      puVar35 = local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
      uVar26 = *(undefined4 *)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,uVar26);
      local_dc = puVar35;
      local_d4 = FUN_00576940(uVar26);
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x3f:
    case 0x40:
      local_dc = local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
      puVar35 = *(undefined4 **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_d0 = CONCAT44(*puVar35,puVar35);
      local_d4 = FUN_0056c810();
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if (local_d4 != 0) goto LAB_00572d8c;
      if (*(char *)((int)(int *)local_d0 + 0x1f) == '\0') {
        FUN_0054cf70(local_d0._4_4_);
        uVar32 = (uint)(int *)local_c8;
        uVar39 = local_c0;
        if ((uint)puVar19[0x14] < (int *)local_c8) goto LAB_00572de0;
LAB_00570af7:
        puVar35 = local_dc;
        iVar25 = FUN_005748c0(local_dc,uVar32);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        if (iVar25 == 0) {
          puVar35[6] = (int *)local_c8;
          *(ushort *)(puVar35 + 7) = *(ushort *)(puVar35 + 7) & 0xbe10 | 0x10;
          if (*(char *)((int)(int *)local_d0 + 0x1f) == '\0') {
            local_d4 = FUN_0054cf10(local_d0._4_4_,0,(int *)local_c8);
            *(undefined1 *)((int)puVar35 + 0x1f) = 1;
            iVar16 = local_d4;
            puVar35 = local_dc;
            puVar13 = local_dc;
            uVar40 = local_d0;
            uVar39 = local_c0;
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          }
          else {
            local_d4 = FUN_00528920(local_d0._4_4_,0,(int *)local_c8,puVar35[1]);
            *(undefined1 *)((int)puVar35 + 0x1f) = 1;
            iVar16 = local_d4;
            puVar13 = local_dc;
            uVar40 = local_d0;
            uVar39 = local_c0;
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          }
          break;
        }
        goto LAB_00572e06;
      }
      FUN_0054dd50(local_d0._4_4_);
      uVar39 = local_c0;
      if ((longlong)local_c0 <= (longlong)(int)puVar19[0x14]) {
        local_c8 = CONCAT44(local_c8._4_4_,(int *)local_c0);
        uVar32 = (uint)(int *)local_c0;
        goto LAB_00570af7;
      }
LAB_00572de0:
      local_c0 = uVar39;
      FUN_005670f0(local_d8 + 0xd,puVar19,"string or blob too big");
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      iVar16 = 0x12;
      local_d4 = iVar16;
      goto LAB_00572e2d;
    case 0x41:
      iVar25 = *(int *)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,iVar25);
      uVar40 = local_d0;
      if (*(char *)(iVar25 + 0x1c) == '\0') {
        if (*(char *)(iVar25 + 0x1d) == '\0') {
          if (*(undefined4 **)(iVar25 + 0x24) == (undefined4 *)0x0) {
            local_d4 = FUN_0056c810();
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
            if (local_d4 != 0) goto LAB_00572d8c;
            if (*(char *)((int)(int *)local_d0 + 0x19) == '\0') {
              local_d4 = FUN_0054dd50(*(int *)local_d0);
              puVar35[4] = (int *)local_c8;
              puVar35[5] = local_c8._4_4_;
              iVar16 = local_d4;
              puVar13 = local_dc;
              uVar40 = local_d0;
              uVar39 = local_c0;
              lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
            }
            else {
              uVar26 = ((int *)local_d0)[0x11];
              local_c8 = *(ulonglong *)((int *)local_d0 + 0x10);
              puVar35[4] = (int)*(ulonglong *)((int *)local_d0 + 0x10);
              puVar35[5] = uVar26;
              iVar16 = local_d4;
              puVar13 = local_dc;
              uVar40 = local_d0;
              uVar39 = local_c0;
            }
          }
          else {
            local_c0._0_4_ = (int *)**(undefined4 **)(iVar25 + 0x24);
            local_c0._4_4_ = (undefined4 *)*(int *)local_c0;
            local_d4 = (**(code **)((int)local_c0._4_4_ + 0x30))(*(undefined4 *)(iVar25 + 0x24));
            FUN_0053b8a0(local_d8,(int *)local_c0);
            puVar35[4] = (int *)local_c8;
            puVar35[5] = local_c8._4_4_;
            iVar16 = local_d4;
            puVar13 = local_dc;
            uVar40 = local_d0;
            uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          }
        }
        else {
          uVar26 = *(undefined4 *)(iVar25 + 0x3c);
          local_c8 = *(ulonglong *)(iVar25 + 0x38);
          puVar35[4] = *(undefined4 *)(iVar25 + 0x38);
          puVar35[5] = uVar26;
        }
      }
      else {
        *(undefined2 *)(puVar35 + 7) = 1;
      }
      break;
    case 0x42:
      piVar20 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,piVar20);
      *(undefined1 *)(piVar20 + 7) = 1;
      *(undefined1 *)((int)piVar20 + 0x19) = 0;
      uVar40 = local_d0;
      if (*piVar20 != 0) {
        FUN_0054c670();
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x43:
      piVar20 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      iVar25 = *piVar20;
      local_d0 = CONCAT44(iVar25,piVar20);
      local_c8 = (ulonglong)uVar32 << 0x20;
      if (iVar25 != 0) {
        local_d4 = FUN_0054dd90(iVar25);
        piVar20 = (int *)local_d0;
        uVar39 = local_c0;
      }
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      *(undefined1 *)(piVar20 + 7) = (undefined1)local_c8;
      *(undefined1 *)((int)(int *)local_d0 + 0x1d) = 0;
      *(undefined1 *)((int)(int *)local_d0 + 0x19) = 0;
      *(undefined4 *)((int)(int *)local_d0 + 0x50) = 0;
      iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      if ((0 < iVar30) && ((int *)local_c8 != (int *)0x0)) goto LAB_0056e364;
      break;
    case 0x44:
    case 0x45:
      if ((*(byte *)(local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10 + 7) & 1) == 0) {
        lVar41 = FUN_00573c40();
        if (lVar41 == 0) {
          iVar25 = 0;
        }
        else {
          iVar25 = 1;
        }
      }
      else {
        iVar25 = 2;
      }
      local_d0 = CONCAT44(local_d0._4_4_,iVar25);
      if ((*(byte *)(puVar17 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10 + 7) & 1) == 0) {
        lVar41 = FUN_00573c40();
        if (lVar41 == 0) {
          iVar16 = 0;
        }
        else {
          iVar16 = 1;
        }
      }
      else {
        iVar16 = 2;
        local_d0._0_4_ = (int *)iVar25;
      }
      iVar25 = iVar16 + (int)(int *)local_d0 * 2;
      if (*(char *)(local_e0 + iVar30 * 0x14) == 'E') {
        bVar4 = (&UNK_00712c84)[iVar25 + (int)(int *)local_d0];
      }
      else {
        bVar4 = (&UNK_00712d3c)[iVar25 + (int)(int *)local_d0];
      }
      uVar32 = (uint)bVar4;
      local_d0 = CONCAT44(iVar16,uVar32);
      puVar35 = puVar17 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10;
      uVar40 = local_d0;
      iVar16 = local_d4;
      puVar13 = puVar35;
      uVar39 = local_c0;
      if (uVar32 == 2) {
        *(ushort *)(puVar35 + 7) = *(ushort *)(puVar35 + 7) & 0xbe01 | 1;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      else {
        puVar35[4] = uVar32;
        puVar35[5] = 0;
        *(ushort *)(puVar35 + 7) = *(ushort *)(puVar35 + 7) & 0xbe04 | 4;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x46:
    case 0x47:
      local_d8[0x1e] = local_d8[0x1e] + 1;
      goto LAB_00570da6;
    case 0x48:
LAB_00570da6:
      puVar36 = *(undefined4 **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,puVar36);
      local_c8 = CONCAT44(uVar32,1);
      if (puVar36[0x12] == 0) {
        local_d0 = CONCAT44(*puVar36,puVar36);
        local_d4 = FUN_0054d460(*puVar36);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        iVar25 = (int)(int *)local_c8;
        *(bool *)((int)(int *)local_d0 + 0x1a) = (int *)local_c8 == (int *)0x0;
        *(undefined1 *)((int)(int *)local_d0 + 0x1d) = 0;
        *(undefined4 *)((int)(int *)local_d0 + 0x50) = 0;
        *(undefined1 *)((int)(int *)local_d0 + 0x19) = 0;
        *(undefined1 *)((int)(int *)local_d0 + 0x1c) = (undefined1)local_c8;
        bVar37 = iVar25 == 0;
      }
      else {
        local_d4 = FUN_00576660(puVar19,puVar36);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        *(undefined1 *)((int)(int *)local_d0 + 0x1c) = (undefined1)local_c8;
        bVar37 = (int *)local_c8 == (int *)0x0;
      }
LAB_0056de1b:
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      if (!bVar37) {
        iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
        goto LAB_0056e364;
      }
      break;
    case 0x49:
      if ((*(byte *)(local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10 + 7) & 1) != 0)
      goto LAB_0056e360;
      break;
    case 0x4a:
      bVar37 = (*(byte *)(local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10 + 7) & 1) == 0;
      goto LAB_0056e35e;
    default:
      puVar35 = local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10;
      puVar17 = local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10;
      uVar6 = *(ushort *)(puVar35 + 7);
      local_d0 = CONCAT26(uVar6,(undefined6)local_d0);
      uVar40 = local_d0;
      uVar27 = *(ushort *)(puVar17 + 7);
      local_d0._6_1_ = (byte)uVar6;
      local_c8 = CONCAT62(local_c8._2_6_,uVar27);
      bVar4 = *(byte *)(local_e0 + 3 + iVar30 * 0x14);
      if ((((byte)uVar27 | local_d0._6_1_) & 1) == 0) {
        local_d0._5_3_ = SUB83(uVar40,5);
        local_d0 = CONCAT35(local_d0._5_3_,CONCAT14(bVar4,uVar26)) & 0xffffff67ffffffff;
        if ((bVar4 & 0x67) != 0) {
          FUN_0052b5d0(puVar35,local_d0._4_4_);
          FUN_0052b5d0(puVar17,local_d0._4_4_,local_f0);
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          puVar19 = local_e8;
          if (*(char *)(local_e8 + 0xe) != '\0') goto LAB_00572e06;
        }
        if ((*(ushort *)(puVar35 + 7) & 0x4000) != 0) {
          FUN_00574600();
        }
        if ((*(ushort *)(puVar17 + 7) & 0x4000) != 0) {
          FUN_00574600();
        }
        iVar25 = FUN_0055ddd0(puVar17,puVar35);
      }
      else {
        local_d0 = uVar40;
        if (-1 < (char)bVar4) {
          if ((bVar4 & 0x10) != 0) {
            puVar35 = local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
            *(ushort *)(puVar35 + 7) = *(ushort *)(puVar35 + 7) & 0xbe01 | 1;
            puVar19 = puVar36;
            puVar13 = puVar35;
            break;
          }
          bVar37 = (bVar4 & 8) == 0;
          puVar19 = local_e8;
          puVar35 = local_dc;
          goto LAB_0056de1b;
        }
        if ((((uVar6 & 1) == 0) || ((uVar27 & 1) == 0)) || ((uVar27 & 0x100) != 0)) {
          iVar25 = 1;
        }
        else {
          iVar25 = 0;
        }
      }
      switch(*(undefined1 *)(local_e0 + iVar30 * 0x14)) {
      case 0x4b:
        uVar32 = (uint)(iVar25 != 0);
        break;
      case 0x4c:
        uVar32 = (uint)(iVar25 == 0);
        break;
      case 0x4d:
        uVar32 = (uint)(0 < iVar25);
        break;
      case 0x4e:
        uVar32 = (uint)(iVar25 < 1);
        break;
      case 0x4f:
        uVar32 = (uint)(iVar25 < 0);
        break;
      default:
        uVar32 = (uint)(-1 < iVar25);
      }
      if ((*(byte *)(local_e0 + 3 + iVar30 * 0x14) & 0x10) == 0) {
        if (uVar32 != 0) {
          local_ec = *(int *)(local_e0 + 8 + iVar30 * 0x14) + -1;
        }
      }
      else {
        local_dc = local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
        *(ushort *)(local_dc + 7) = *(ushort *)(local_dc + 7) & 0xbe04 | 4;
        local_dc[4] = uVar32;
        local_dc[5] = 0;
      }
      *(ushort *)(puVar35 + 7) =
           *(ushort *)(puVar35 + 7) ^
           (*(ushort *)(puVar35 + 7) ^ (ushort)(local_d0 >> 0x30)) & 0x1ff;
      *(ushort *)(puVar17 + 7) =
           *(ushort *)(puVar17 + 7) ^ (*(ushort *)(puVar17 + 7) ^ (ushort)local_c8) & 0x1ff;
      iVar16 = local_d4;
      puVar19 = local_e8;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = CONCAT44((int)(local_d0 >> 0x20),uVar32);
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x51:
    case 0x5c:
    case 0x5f:
      if (puVar19[0x38] != 0) goto LAB_0056cb4e;
      puVar36 = *(undefined4 **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,puVar36);
      uVar40 = local_d0;
      if (puVar36 != (undefined4 *)0x0) {
        if (puVar36[0x12] == 0) {
          local_d0 = CONCAT44(1,puVar36);
          local_d4 = (**(code **)(local_e0 + 0x10 + iVar30 * 0x14))(*puVar36);
        }
        else {
          local_d4 = FUN_005765a0(puVar19,puVar36);
        }
        *(undefined1 *)((int)(int *)local_d0 + 0x1c) = local_d0._4_1_;
        *(undefined4 *)((int)(int *)local_d0 + 0x50) = 0;
        if (local_d0._4_4_ == (int *)0x0) {
          bVar4 = *(byte *)(local_e0 + 3 + iVar30 * 0x14);
          local_ec = *(int *)(local_e0 + 8 + iVar30 * 0x14) + -1;
          if (bVar4 != 0) {
            local_d8[bVar4 + 0x1c] = local_d8[bVar4 + 0x1c] + 1;
          }
        }
        *(undefined1 *)((int)(int *)local_d0 + 0x19) = 0;
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
      puVar36 = local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10;
      puVar35 = local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10;
      local_dc = puVar35;
      if (((*(byte *)(local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10 + 7) |
           *(byte *)(puVar36 + 7)) & 1) == 0) {
        local_d0 = FUN_00573c40();
        uVar39 = FUN_00573c40(puVar36);
        uVar34 = (uint)(uVar39 >> 0x20);
        uVar32 = (uint)uVar39;
        cVar14 = *(char *)(local_e0 + iVar30 * 0x14);
        local_b8 = (double)CONCAT71(local_b8._1_7_,cVar14);
        if (cVar14 == 'R') {
          uVar29 = (uint)(int *)local_d0 & uVar32;
          local_d0 = CONCAT44((uint)local_d0._4_4_ & uVar34,uVar29);
        }
        else if (cVar14 == 'S') {
          uVar29 = (uint)(int *)local_d0 | uVar32;
          local_d0 = CONCAT44((uint)local_d0._4_4_ | uVar34,uVar29);
        }
        else {
          uVar29 = (uint)(int *)local_d0;
          if (uVar39 != 0) {
            if ((longlong)uVar39 < 0x100000000) {
              if ((longlong)uVar39 < 0) {
                cVar14 = -0x57 - cVar14;
                local_b8 = (double)CONCAT71(local_b8._1_7_,cVar14);
                if (((longlong)uVar39 < -0x100000000) ||
                   ((0x7fffffffffffffff < uVar39 && (uVar32 < 0xffffffc1)))) {
                  uVar39 = 0x40;
                  goto LAB_0056da0c;
                }
                uVar39 = CONCAT44(-(uVar34 + (uVar32 != 0)),-uVar32);
              }
              if ((longlong)uVar39 < 0x40) {
                if (cVar14 == 'T') {
                  local_d0 = local_d0 << (uVar39 & 0xffffffff);
                  local_c8._0_4_ = (int *)local_d0;
                  uVar29 = (uint)(int *)local_c8;
                  local_c8 = local_d0;
                }
                else {
                  local_c8 = local_d0 >> (uVar39 & 0xffffffff);
                  if (((int)local_d0._4_4_ < 1) && ((longlong)local_d0 < 0)) {
                    local_c0 = uVar39;
                    uVar42 = __allshl();
                    local_c8 = CONCAT44((uint)local_c8._4_4_ | (uint)((ulonglong)uVar42 >> 0x20),
                                        (uint)(int *)local_c8 | (uint)uVar42);
                    uVar39 = local_c0;
                  }
                  local_d0 = local_c8;
                  uVar29 = (uint)(int *)local_c8;
                }
                goto LAB_0056dafd;
              }
            }
LAB_0056da0c:
            if ((((int)local_d0._4_4_ < 1) && ((longlong)local_d0 < 0)) && (cVar14 != 'T')) {
              local_d0 = 0xffffffffffffffff;
              uVar29 = 0xffffffff;
            }
            else {
              local_d0 = 0;
              uVar29 = 0;
            }
          }
        }
LAB_0056dafd:
        local_dc[4] = uVar29;
        local_dc[5] = local_d0._4_4_;
        *(ushort *)(local_dc + 7) = *(ushort *)(local_dc + 7) & 0xbe04 | 4;
        iVar16 = local_d4;
        puVar35 = local_dc;
        puVar13 = local_dc;
        uVar40 = local_d0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      else {
        FUN_00574f20();
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      FUN_0052b630();
      puVar35 = puVar17 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
      FUN_0052b630(puVar35);
      local_dc = local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10;
      uVar9 = CONCAT24(*(ushort *)(puVar17 + iVar25 * 10 + 7) | *(ushort *)(puVar35 + 7),
                       (int *)local_d0);
      local_d0 = (ulonglong)uVar9;
      uVar40 = local_c0;
      if (((*(ushort *)(puVar17 + iVar25 * 10 + 7) | *(ushort *)(puVar35 + 7)) & 1) != 0)
      goto LAB_0056d67a;
      local_d0._1_7_ = (uint7)(uint5)(uVar9 >> 8);
      if ((*(byte *)(puVar17 + iVar25 * 10 + 7) & *(byte *)(puVar35 + 7) & 4) == 0) {
        local_d0 = (ulonglong)local_d0._1_7_ << 8;
        uVar39 = local_c0;
        goto LAB_0056d4cd;
      }
      uVar32 = (uint)*(ulonglong *)(puVar17 + iVar25 * 10 + 4);
      uVar34 = puVar17[iVar25 * 10 + 5];
      local_c8 = *(ulonglong *)(puVar17 + iVar25 * 10 + 4);
      puVar1 = (ulonglong *)(puVar35 + 4);
      local_c0._0_4_ = (int *)*puVar1;
      local_f8 = (double)CONCAT44((int *)local_c0,(undefined4)local_f8);
      local_108 = (undefined4 *)puVar35[5];
      uVar39 = *puVar1;
      local_d0 = CONCAT71(local_d0._1_7_,1);
      local_c0._4_4_ = local_108;
      switch(*(undefined1 *)(local_e0 + iVar30 * 0x14)) {
      case 0x56:
        iVar25 = FUN_00549380(&local_c0,uVar32);
        uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
        if (iVar25 != 0) goto LAB_0056d4cd;
        break;
      case 0x57:
        iVar25 = FUN_005680a0(&local_c0,uVar32);
        uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
        goto joined_r0x0056d401;
      case 0x58:
        iVar25 = FUN_0055e2a0(&local_c0,uVar32);
        uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
joined_r0x0056d401:
        if (iVar25 == 0) break;
LAB_0056d4cd:
        local_c0 = uVar39;
        fVar38 = (float10)FUN_005759b0();
        local_b8 = (double)fVar38;
        fVar38 = (float10)FUN_005759b0(puVar35);
        local_b0 = (double)fVar38;
        switch(*(undefined1 *)(local_e0 + iVar30 * 0x14)) {
        case 0x56:
          local_b0 = local_b0 + local_b8;
          break;
        case 0x57:
          local_b0 = local_b0 - local_b8;
          break;
        case 0x58:
          local_b0 = local_b0 * local_b8;
          break;
        case 0x59:
          uVar40 = local_c0;
          if (local_b8 != 0.0) {
            local_b0 = local_b0 / local_b8;
            break;
          }
          goto LAB_0056d67a;
        default:
          uVar39 = FUN_0068d946();
          local_c8 = uVar39;
          uVar40 = FUN_0068d946();
          if (uVar39 == 0) goto LAB_0056d67a;
          if (uVar39 == 0xffffffffffffffff) {
            uVar39 = 1;
            local_c8 = 1;
          }
          local_c0 = uVar40;
          lVar41 = __allrem(uVar40,uVar39);
          local_b0 = (double)lVar41;
        }
        iVar25 = FUN_0055cec0(local_b0);
        puVar35 = local_dc;
        uVar40 = local_c0;
        if (iVar25 == 0) {
          *(double *)(local_dc + 2) = local_b0;
          *(ushort *)(local_dc + 7) = *(ushort *)(local_dc + 7) & 0xbe08 | 8;
          iVar16 = local_d4;
          puVar19 = local_e8;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          if (((local_d0 & 0x800000000) == 0) &&
             (lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0), (char)local_d0 == '\0')) {
            FUN_00573cb0();
            iVar16 = local_d4;
            puVar19 = local_e8;
            puVar13 = local_dc;
            uVar40 = local_d0;
            uVar39 = local_c0;
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          }
        }
        else {
LAB_0056d67a:
          puVar35 = local_dc;
          local_c0 = uVar40;
          FUN_00574f20();
          iVar16 = local_d4;
          puVar19 = local_e8;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
        goto LAB_0056e371;
      case 0x59:
        uVar40 = *puVar1;
        if (uVar32 != 0 || uVar34 != 0) {
          if ((((uVar32 & uVar34) == 0xffffffff) && ((int *)local_c0 == (int *)0x0)) &&
             (local_108 == (undefined4 *)0x80000000)) goto LAB_0056d4cd;
          uVar39 = __alldiv((int *)local_c0,local_108,uVar32,uVar34);
          break;
        }
        goto LAB_0056d67a;
      default:
        uVar40 = *puVar1;
        if (uVar32 == 0 && uVar34 == 0) goto LAB_0056d67a;
        if ((uVar32 & uVar34) == 0xffffffff) {
          uVar32 = 1;
          uVar34 = 0;
          local_c8 = 1;
        }
        uVar39 = __allrem((int *)local_c0,local_108,uVar32,uVar34);
      }
      *(ulonglong *)(local_dc + 4) = uVar39;
      *(ushort *)(local_dc + 7) = *(ushort *)(local_dc + 7) & 0xbe04 | 4;
      iVar16 = local_d4;
      puVar19 = local_e8;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x5b:
      puVar36 = local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10;
      puVar17 = local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
      puVar35 = local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10;
      local_dc = puVar35;
      if (((*(byte *)(puVar17 + 7) | (byte)*(ushort *)(puVar36 + 7)) & 1) == 0) {
        if ((*(ushort *)(puVar36 + 7) & 0x4000) != 0) {
          iVar25 = FUN_00574600();
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          puVar19 = local_e8;
          if (iVar25 != 0) goto LAB_00572e06;
        }
        if ((*(ushort *)(puVar17 + 7) & 0x4000) != 0) {
          iVar25 = FUN_00574600();
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          puVar19 = local_e8;
          if (iVar25 != 0) goto LAB_00572e06;
        }
        if ((*(byte *)(puVar36 + 7) & 0x12) == 0) {
          iVar25 = FUN_00575350(puVar36);
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          puVar19 = local_e8;
          if (iVar25 != 0) goto LAB_00572e06;
        }
        if ((*(byte *)(puVar17 + 7) & 0x12) == 0) {
          iVar25 = FUN_00575350(puVar17);
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          puVar19 = local_e8;
          if (iVar25 != 0) goto LAB_00572e06;
        }
        puVar35 = local_dc;
        uVar32 = puVar36[6] + puVar17[6];
        local_d0 = (ulonglong)(int)uVar32;
        iVar25 = (int)local_e8[0x14] >> 0x1f;
        puVar19 = local_e8;
        uVar39 = local_c0;
        if ((iVar25 < (int)uVar32 >> 0x1f) ||
           ((iVar25 <= (int)uVar32 >> 0x1f && ((uint)local_e8[0x14] < uVar32)))) goto LAB_00572de0;
        *(ushort *)(local_dc + 7) = *(ushort *)(local_dc + 7) & 0xbe02 | 2;
        iVar25 = FUN_005748c0(local_dc,uVar32 + 2);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        puVar19 = local_e8;
        if (iVar25 != 0) goto LAB_00572e06;
        if (puVar35 != puVar17) {
          memcpy((void *)puVar35[1],(void *)puVar17[1],puVar17[6]);
        }
        memcpy((void *)(puVar35[1] + puVar17[6]),(void *)puVar36[1],puVar36[6]);
        *(undefined1 *)((int)(int *)local_d0 + puVar35[1]) = 0;
        *(undefined1 *)(puVar35[1] + 1 + (int)(int *)local_d0) = 0;
        *(ushort *)(puVar35 + 7) = *(ushort *)(puVar35 + 7) | 0x200;
        puVar35[6] = (int *)local_d0;
        *(char *)((int)puVar35 + 0x1f) = (char)local_f0;
        iVar16 = local_d4;
        puVar19 = local_e8;
        puVar35 = local_dc;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      else {
        FUN_00574f20();
        iVar16 = local_d4;
        puVar19 = local_e8;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x5d:
      puVar35 = local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
      local_dc = puVar35;
      if ((*(byte *)(local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10 + 7) & 1) == 0) {
        uVar42 = FUN_00573c40();
        FUN_00574ec0(puVar35,~(uint)uVar42,~(uint)((ulonglong)uVar42 >> 0x20));
        iVar16 = local_d4;
        puVar35 = local_dc;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      else {
        FUN_00574f20();
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x5e:
      *(undefined1 *)(local_e0 + iVar30 * 0x14) = 9;
      uVar42 = FUN_00568070();
      *(int *)(local_e0 + 4 + iVar30 * 0x14) = (int)uVar42;
      uVar39 = local_c0;
      if ((char)local_f0 != '\x01') {
        local_d4 = FUN_00575040(puVar35,(int)((ulonglong)uVar42 >> 0x20),0xffffffff,1);
        uVar39 = local_c0;
        if (local_d4 == 0x12) goto LAB_00572de0;
        iVar25 = FUN_0056c290(puVar35);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        if (iVar25 != 0) goto LAB_00572e06;
        puVar35[9] = 0;
        *(ushort *)(puVar35 + 7) = *(ushort *)(puVar35 + 7) & 0xfbff | 0x800;
        if (*(char *)(local_e0 + 1 + iVar30 * 0x14) == -1) {
          FUN_005521a0(puVar19);
        }
        *(undefined1 *)(local_e0 + 1 + iVar30 * 0x14) = 0xff;
        *(undefined4 *)(local_e0 + 0x10 + iVar30 * 0x14) = puVar35[1];
        *(undefined4 *)(local_e0 + 4 + iVar30 * 0x14) = puVar35[6];
        uVar39 = local_c0;
      }
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if ((int)puVar19[0x14] < *(int *)(local_e0 + 4 + iVar30 * 0x14)) goto LAB_00572de0;
switchD_0056cb3a_caseD_9:
      *(undefined2 *)(puVar35 + 7) = 0xa02;
      puVar35[1] = *(undefined4 *)(local_e0 + 0x10 + iVar30 * 0x14);
      puVar35[6] = *(undefined4 *)(local_e0 + 4 + iVar30 * 0x14);
      *(char *)((int)puVar35 + 0x1f) = (char)local_f0;
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      break;
    case 0x60:
    case 0x61:
      piVar20 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      iVar25 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
      iVar23 = *piVar20;
      local_d0 = CONCAT44(iVar23,piVar20);
      puVar19 = puVar36;
      puVar35 = puVar10;
      uVar40 = local_d0;
      if (iVar23 != 0) {
        if ((*(ushort *)(local_e4 + iVar25 * 10 + 7) & 0x4000) != 0) {
          local_d4 = FUN_00574600();
          iVar16 = local_d4;
          puVar19 = local_e8;
          puVar35 = local_dc;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          if (local_d4 != 0) break;
          piVar20 = (int *)local_d0;
          iVar23 = (int)local_d0._4_4_;
        }
        puVar19 = local_e8;
        if (piVar20[0x12] == 0) {
          iVar16 = puVar17[iVar25 * 10 + 6];
          local_c8 = CONCAT44(puVar17[iVar25 * 10 + 1],iVar16);
          local_d4 = FUN_0054d680(iVar23,puVar17[iVar25 * 10 + 1],iVar16,iVar16 >> 0x1f,
                                  &DAT_006fc918,0,0,*(undefined4 *)(local_e0 + 0xc + iVar30 * 0x14))
          ;
          *(undefined4 *)((int)(int *)local_d0 + 0x50) = 0;
          iVar16 = local_d4;
          puVar19 = local_e8;
          puVar35 = local_dc;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
        else {
          local_d4 = FUN_005769c0(local_e8,piVar20);
          iVar16 = local_d4;
          puVar35 = local_dc;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
      }
      break;
    case 0x62:
      piVar20 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      iVar25 = *piVar20;
      local_d0 = CONCAT44(iVar25,piVar20);
      uVar40 = local_d0;
      if (iVar25 != 0) {
        local_c0._0_4_ = (int *)piVar20[2];
        local_c0._4_3_ = (uint3)*(ushort *)(local_e0 + 0xc + iVar30 * 0x14);
        local_b0 = (double)CONCAT44(local_b0._4_4_,
                                    local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10);
        local_d4 = FUN_0054df80(iVar25,&local_c0,0,0,0);
        if ((local_d4 == 0) && ((int *)local_c8 == (int *)0x0)) {
          local_d4 = FUN_0054cfd0();
        }
        *(undefined4 *)((int)(int *)local_d0 + 0x50) = 0;
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 99:
      piVar20 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      iVar25 = *piVar20;
      local_d0 = CONCAT44(piVar20,iVar25);
      *(undefined2 *)(local_dc + 7) = 1;
      puVar35 = puVar10;
      uVar40 = local_d0;
      if (iVar25 != 0) {
        local_d4 = FUN_0056c810();
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        if (local_d4 != 0) goto LAB_00572d8c;
        iVar16 = local_d4;
        puVar35 = local_dc;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        if (*(char *)((int)local_d0._4_4_ + 0x1c) == '\0') {
          local_d4 = FUN_00573ae0(puVar19,(int *)local_d0);
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          if (local_d4 != 0) goto LAB_00572d8c;
          puVar10[4] = (int *)local_c8;
          puVar10[5] = local_c8._4_4_;
          *(undefined2 *)(puVar10 + 7) = 4;
          iVar16 = local_d4;
          puVar35 = puVar10;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
        }
      }
      break;
    case 100:
    case 0x65:
      piVar20 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,piVar20);
      uVar40 = local_d0;
      if (*piVar20 != 0) {
        local_c8._0_6_ = CONCAT24(*(undefined2 *)(local_e0 + 0x10 + iVar30 * 0x14),piVar20[2]);
        local_c8._7_1_ = SUB81(uVar11,7);
        local_c8._0_7_ =
             CONCAT16((*(char *)(local_e0 + 3 + iVar30 * 0x14) != '\0') + '\x02',
                      (undefined6)local_c8);
        local_b8 = (double)CONCAT44(uVar34,local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10)
        ;
        local_d4 = FUN_00573a20(piVar20,&local_c8);
        if (*(char *)(local_e0 + iVar30 * 0x14) == 'd') {
          iVar25 = -(int)local_d0._4_4_;
        }
        else {
          iVar25 = (int)local_d0._4_4_ + 1;
        }
        local_d0 = CONCAT44(iVar25,(int *)local_d0);
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        if (0 < iVar25) {
          iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
          goto LAB_0056e364;
        }
      }
      break;
    case 0x66:
      iVar16 = 0;
      local_d0 = local_d0 & 0xffffffff;
      iVar25 = puVar19[1];
      local_c8 = CONCAT44(uVar32,iVar25);
      uVar40 = local_d0;
      while (local_d0 = uVar40, iVar25 != 0) {
        if (((*(int *)(iVar25 + 0x30) == -0x420df25d) &&
            (((byte)*(undefined4 *)(iVar25 + 0x60) & 0xc) < 8)) && (-1 < *(int *)(iVar25 + 0x54))) {
          iVar16 = iVar16 + 1;
          local_d0._0_4_ = (int *)uVar40;
          local_d0 = CONCAT44(iVar16,(int *)local_d0);
        }
        iVar25 = *(int *)(iVar25 + 0x3c);
        local_c8._4_4_ = (undefined4 *)(local_c8 >> 0x20);
        local_c8 = CONCAT44(local_c8._4_4_,iVar25);
        uVar40 = local_d0;
      }
      *(undefined2 *)(puVar35 + 7) = 1;
      local_d0._4_4_ = (int *)(uVar40 >> 0x20);
      if ((int)local_d0._4_4_ < 2) {
        iVar25 = *(int *)(local_e0 + 0xc + iVar30 * 0x14);
        local_c8 = CONCAT44(iVar25,(int *)local_c8);
        local_d4 = FUN_0054d210(*(undefined4 *)(puVar19[4] + 4 + iVar25 * 0x10),
                                *(undefined4 *)(local_e0 + 4 + iVar30 * 0x14));
        *(undefined2 *)(puVar35 + 7) = 4;
        puVar35[4] = (int *)local_d0;
        puVar35[5] = (int)(int *)local_d0 >> 0x1f;
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        if ((local_d4 == 0) &&
           (lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0), (int *)local_d0 != (int *)0x0)
           ) {
          FUN_00564480(puVar19,local_c8._4_4_,(int *)local_d0);
          local_f9 = local_c8._4_1_ + '\x01';
          iVar16 = local_d4;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
      }
      else {
        local_d4 = 6;
        *(undefined1 *)(local_d8 + 0x17) = 2;
        iVar16 = 6;
      }
      break;
    case 0x67:
      local_d0 = ZEXT48(local_d0._4_4_) << 0x20;
      local_d4 = FUN_0054c690(*(undefined4 *)
                               (puVar19[4] + 4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 0x10),
                              *(undefined4 *)(local_e0 + 4 + iVar30 * 0x14));
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if (*(int *)(local_e0 + 0xc + iVar30 * 0x14) != 0) {
        local_d8[0x19] = local_d8[0x19] + (int)(int *)local_d0;
        iVar25 = *(int *)(local_e0 + 0xc + iVar30 * 0x14);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        if (0 < iVar25) {
          puVar2 = local_e4 + iVar25 * 10 + 4;
          uVar32 = *puVar2;
          *puVar2 = *puVar2 + (int)(int *)local_d0;
          local_e4[iVar25 * 10 + 5] =
               local_e4[iVar25 * 10 + 5] + ((int)(int *)local_d0 >> 0x1f) +
               (uint)CARRY4(uVar32,(uint)(int *)local_d0);
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
      }
      break;
    case 0x68:
    case 0x69:
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14) * 0x10 + puVar19[4];
      local_c8 = CONCAT44(uVar32,iVar25);
      local_d0 = (ulonglong)((*(char *)(local_e0 + iVar30 * 0x14) != 'i') + 1) << 0x20;
      local_d4 = FUN_0054cde0(*(undefined4 *)(iVar25 + 4),&local_d0);
      puVar35[4] = (int *)local_d0;
      puVar35[5] = (int)(int *)local_d0 >> 0x1f;
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x6a:
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      pcVar31 = "sqlite_temp_master";
      if (iVar25 != 1) {
        pcVar31 = "sqlite_master";
      }
      local_d0 = CONCAT44(pcVar31,iVar25);
      local_c0._4_4_ = *(undefined4 **)(local_e0 + 4 + iVar30 * 0x14);
      local_c0._0_4_ = local_d8 + 0xd;
      local_c8._4_4_ = puVar19;
      iVar25 = FUN_0055d980(puVar19,
                            "SELECT name, rootpage, sql FROM \'%q\'.%s WHERE %s ORDER BY rowid",
                            *(undefined4 *)(puVar19[4] + iVar25 * 0x10),pcVar31);
      local_c8 = CONCAT44(local_c8._4_4_,iVar25);
      if (iVar25 == 0) {
        local_d4 = 7;
LAB_005714b4:
        FUN_00564000();
      }
      else {
        *(undefined1 *)((int)puVar19 + 0x81) = 1;
        local_b8 = (double)((ulonglong)local_b8 & 0xffffffff00000000);
        local_d4 = FUN_00520760(puVar19,iVar25,FUN_0055b540,(int)&local_c8 + 4);
        if (local_d4 == 0) {
          local_d4 = (int)(int *)local_b8;
        }
        FUN_005521a0(puVar19,(int *)local_c8);
        *(undefined1 *)((int)puVar19 + 0x81) = 0;
        if (local_d4 != 0) goto LAB_005714b4;
      }
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      if (local_d4 == 7) goto LAB_00572e06;
      break;
    case 0x6b:
      local_d4 = FUN_00549ed0(puVar19);
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x6c:
      FUN_00568990(puVar19,*(undefined4 *)(local_e0 + 4 + iVar30 * 0x14));
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x6d:
      FUN_005688b0(puVar19,*(undefined4 *)(local_e0 + 4 + iVar30 * 0x14));
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x6e:
      FUN_00568a40(puVar19,*(undefined4 *)(local_e0 + 4 + iVar30 * 0x14));
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x6f:
      local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(local_e0 + 8 + iVar30 * 0x14));
      iVar25 = FUN_00552230(puVar19);
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      local_d0 = CONCAT44(iVar25,(int *)local_d0);
      if (iVar25 == 0) goto LAB_00572e06;
      local_c0._4_4_ = local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10;
      puVar35 = local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10;
      iVar16 = 0;
      local_c8 = local_c8 & 0xffffffff00000000;
      if (0 < (int)(int *)local_d0) {
        do {
          uVar26 = FUN_00573c40();
          *(undefined4 *)((int)local_d0._4_4_ + (int)(int *)local_c8 * 4) = uVar26;
          iVar16 = (int)(int *)local_c8 + 1;
          local_c8 = CONCAT44(local_c8._4_4_,iVar16);
          iVar25 = (int)local_d0._4_4_;
        } while (iVar16 < (int)(int *)local_d0);
      }
      *(undefined4 *)(iVar25 + iVar16 * 4) = 0;
      local_c0._0_4_ =
           (int *)FUN_0054d880(*(undefined4 *)
                                (puVar19[4] + 4 +
                                (uint)*(byte *)(local_e0 + 3 + iVar30 * 0x14) * 0x10),local_d0._4_4_
                               ,(int *)local_d0,local_c0._4_4_[4]);
      FUN_005521a0(puVar19,local_d0._4_4_);
      puVar2 = local_c0._4_4_ + 4;
      uVar32 = *puVar2;
      *puVar2 = *puVar2 - (int)local_c8._4_4_;
      local_c0._4_4_[5] =
           (local_c0._4_4_[5] - ((int)local_c8._4_4_ >> 0x1f)) - (uint)(uVar32 < local_c8._4_4_);
      FUN_00574f20(puVar35);
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if (local_c8._4_4_ != (undefined4 *)0x0) {
        if ((int *)local_c0 == (int *)0x0) goto LAB_00572e06;
        FUN_00575040(puVar35,(int *)local_c0,0xffffffff,1);
      }
      FUN_0056c290(puVar35);
      iVar16 = local_d4;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x70:
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
      if ((*(byte *)(local_e4 + iVar25 * 10 + 7) & 0x20) == 0) {
        FUN_00574f70();
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        if ((*(byte *)(puVar17 + iVar25 * 10 + 7) & 0x20) == 0) goto LAB_00572e06;
      }
      FUN_00564590(puVar17[iVar25 * 10 + 4],local_e4[iVar30 * 10 + 4]);
      iVar16 = local_d4;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x71:
      if (puVar19[0x38] != 0) goto LAB_0056cb4e;
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      if ((*(byte *)(local_e4 + iVar25 * 10 + 7) & 0x20) != 0) {
        iVar25 = FUN_00564630(local_e4[iVar25 * 10 + 4]);
        if (iVar25 != 0) {
          FUN_00574ec0(local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10,(int *)local_d0);
          iVar16 = local_d4;
          puVar35 = local_dc;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          break;
        }
      }
      FUN_00574f20();
      iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
      puVar35 = local_dc;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      uVar39 = local_c0;
LAB_0056e364:
      iVar16 = local_d4;
      local_ec = iVar30 + -1;
      puVar13 = local_dc;
      uVar40 = local_d0;
      break;
    case 0x72:
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      iVar23 = *(int *)(local_e0 + 0xc + iVar30 * 0x14);
      uVar32 = *(uint *)(local_e0 + 0x10 + iVar30 * 0x14);
      local_d0 = CONCAT44(local_d0._4_4_,uVar32);
      if ((*(byte *)(local_e4 + iVar25 * 10 + 7) & 0x20) == 0) {
        FUN_00574f70();
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        puVar19 = local_e8;
        if ((*(byte *)(puVar17 + iVar25 * 10 + 7) & 0x20) == 0) goto LAB_00572e06;
        uVar32 = (uint)(int *)local_d0;
      }
      bVar37 = (int)uVar32 < 0;
      if (uVar32 != 0) {
        if (bVar37) {
          uVar32 = 0xff;
        }
        else {
          uVar32 = uVar32 & 0xf;
        }
        iVar16 = FUN_00564690(puVar17[iVar25 * 10 + 4],uVar32,local_e4[iVar23 * 10 + 4]);
        local_d0 = CONCAT44(iVar16,(int *)local_d0);
        if (iVar16 != 0) goto LAB_005717d0;
        bVar37 = (int)(int *)local_d0 < 0;
      }
      iVar16 = local_d4;
      puVar19 = local_e8;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if (!bVar37) {
        FUN_00564590(puVar17[iVar25 * 10 + 4],local_e4[iVar23 * 10 + 4]);
        iVar16 = local_d4;
        puVar19 = local_e8;
        puVar35 = local_dc;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x73:
      iVar23 = *(int *)(local_e0 + 0x10 + iVar30 * 0x14);
      local_b8 = (double)CONCAT44(uVar34,iVar23);
      puVar36 = local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10;
      local_c8 = CONCAT44(uVar32,puVar36);
      if (*(char *)(local_e0 + 3 + iVar30 * 0x14) != '\0') {
        local_c0._4_4_ = (undefined4 *)local_d8[0x28];
        local_b8 = (double)CONCAT44(*(int *)(iVar23 + 0x14),iVar23);
        for (; local_c0._4_4_ != (undefined4 *)0x0; local_c0._4_4_ = (undefined4 *)local_c0._4_4_[1]
            ) {
          puVar35 = puVar10;
          uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
          if (local_c0._4_4_[6] == *(int *)(iVar23 + 0x14)) goto LAB_0056e371;
        }
      }
      if (local_d8[0x2a] < (int)puVar19[0x1e]) {
        if ((*(byte *)(puVar36 + 7) & 0x40) == 0) {
          iVar25 = *(int *)(iVar23 + 8) + *(int *)(iVar23 + 0xc);
          local_d0 = CONCAT44(*(int *)(iVar23 + 0x10) + (*(int *)(iVar23 + 0xc) + iVar25 * 10) * 4 +
                              0x48,iVar25);
          local_c0._4_4_ = (undefined4 *)FUN_005522c0(puVar19);
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          if (local_c0._4_4_ == (undefined4 *)0x0) goto LAB_00572e06;
          FUN_00574d40();
          *(undefined2 *)((int)(int *)local_c8 + 0x1c) = 0x40;
          *(undefined4 **)((int)(int *)local_c8 + 0x10) = local_c0._4_4_;
          *local_c0._4_4_ = local_d8;
          local_c0._4_4_[0xf] = (int *)local_d0;
          local_c0._4_4_[0x10] = *(undefined4 *)((int)(int *)local_b8 + 0xc);
          local_c0._4_4_[0xb] = local_ec;
          local_c0._4_4_[3] = local_d8[2];
          local_c0._4_4_[0xd] = local_d8[6];
          local_c0._4_4_[5] = local_d8[0x10];
          *(undefined2 *)(local_c0._4_4_ + 10) = *(undefined2 *)((int)local_d8 + 0x2e);
          local_c0._4_4_[2] = local_d8[1];
          local_c0._4_4_[0xc] = local_d8[7];
          local_c0._4_4_[6] = *(undefined4 *)((int)(int *)local_b8 + 0x14);
          local_c0._4_4_[4] = local_d8[0x2e];
          local_c0._4_4_[0xe] = local_d8[0x2d];
          puVar35 = local_c0._4_4_ + 0x12;
          local_c8 = CONCAT44(puVar35,(int *)local_c8);
          local_c0._0_4_ = local_c0._4_4_ + (local_c0._4_4_[0xf] * 5 + 9) * 2;
          uVar39 = local_c8;
          while (local_c8 = uVar39, iVar25 = local_a0._4_4_, puVar35 != (int *)local_c0) {
            *(undefined2 *)(puVar35 + 7) = 0x80;
            local_c8._4_4_ = (undefined4 *)(uVar39 >> 0x20);
            *local_c8._4_4_ = puVar19;
            puVar35 = local_c8._4_4_ + 10;
            local_c8._0_4_ = (int *)uVar39;
            local_c8 = CONCAT44(puVar35,(int *)local_c8);
            uVar39 = local_c8;
          }
        }
        else {
          local_c0._4_4_ = (undefined4 *)puVar36[4];
        }
        local_d8[0x2a] = local_d8[0x2a] + 1;
        local_c0._4_4_[1] = local_d8[0x28];
        local_c0._4_4_[8] = local_104;
        local_c0._4_4_[9] = local_100;
        local_c0._4_4_[0x11] = local_d8[0x19];
        local_d8[0x28] = (int)local_c0._4_4_;
        local_e4 = local_c0._4_4_ + 8;
        local_d8[0x19] = 0;
        local_d8[2] = (int)local_e4;
        local_d8[6] = local_c0._4_4_[0xf];
        *(undefined2 *)((int)local_d8 + 0x2e) = *(undefined2 *)(local_c0._4_4_ + 0x10);
        puVar35 = local_e4 + (local_d8[6] + 1) * 10;
        local_d8[0x10] = (int)puVar35;
        local_e0 = *(int *)local_b8;
        local_d8[1] = local_e0;
        local_d8[7] = ((int *)local_b8)[1];
        local_d8[0x2e] = (int)(puVar35 + *(ushort *)((int)local_d8 + 0x2e));
        _Size = ((int *)local_b8)[4];
        local_d8[0x2d] = _Size;
        local_ec = -1;
        local_a0._4_4_ = iVar25;
        memset(puVar35 + *(ushort *)((int)local_d8 + 0x2e),0,_Size);
        iVar16 = local_d4;
        puVar35 = local_dc;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      else {
        local_d4 = 1;
        FUN_005670f0(local_d8 + 0xd,puVar19);
        iVar16 = 1;
        puVar35 = local_dc;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x74:
      iVar16 = local_d8[0x28];
      iVar25 = *(int *)(iVar16 + 0xc) +
               (*(int *)(*(int *)(iVar16 + 8) + 4 + *(int *)(iVar16 + 0x2c) * 0x14) +
               *(int *)(local_e0 + 4 + iVar30 * 0x14)) * 0x28;
      local_d0 = CONCAT44(iVar25,iVar16);
      FUN_005752a0(puVar35,iVar25);
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x75:
      uVar32 = *(uint *)(local_e0 + 8 + iVar30 * 0x14);
      if (*(int *)(local_e0 + 4 + iVar30 * 0x14) == 0) {
        puVar2 = (uint *)(local_d8 + 0x22);
        uVar34 = *puVar2;
        *puVar2 = *puVar2 + uVar32;
        local_d8[0x23] = local_d8[0x23] + ((int)uVar32 >> 0x1f) + (uint)CARRY4(uVar34,uVar32);
      }
      else {
        puVar2 = puVar19 + 0x7a;
        uVar34 = *puVar2;
        *puVar2 = *puVar2 + uVar32;
        puVar19[0x7b] = puVar19[0x7b] + ((int)uVar32 >> 0x1f) + (uint)CARRY4(uVar34,uVar32);
      }
      break;
    case 0x76:
      if (*(int *)(local_e0 + 4 + iVar30 * 0x14) == 0) {
        bVar37 = local_d8[0x22] == 0 && local_d8[0x23] == 0;
      }
      else {
        bVar37 = puVar19[0x7a] == 0 && puVar19[0x7b] == 0;
      }
LAB_0056e35e:
      if (bVar37) {
LAB_0056e360:
        iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
        lVar41 = CONCAT44(iVar25,(undefined4 *)local_a0);
        goto LAB_0056e364;
      }
      break;
    case 0x77:
      uVar32 = local_d8[0x28];
      if (uVar32 == 0) {
        puVar35 = local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10;
      }
      else {
        for (uVar34 = *(uint *)(uVar32 + 4); uVar34 != 0; uVar34 = *(uint *)(uVar34 + 4)) {
          uVar32 = uVar34;
        }
        local_d0 = (ulonglong)uVar32 << 0x20;
        puVar35 = (undefined4 *)
                  (*(int *)(uVar32 + 0xc) + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 0x28);
      }
      local_d0 = CONCAT44(local_d0._4_4_,puVar35);
      FUN_00574a70();
      puVar36 = local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
      FUN_00574a70(puVar36);
      iVar25 = puVar36[5];
      iVar16 = local_d4;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if ((*(int *)((int)(int *)local_d0 + 0x14) <= iVar25) &&
         ((*(int *)((int)(int *)local_d0 + 0x14) < iVar25 ||
          (lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0),
          *(uint *)((int)(int *)local_d0 + 0x10) < (uint)puVar36[4])))) {
        *(undefined4 *)((int)(int *)local_d0 + 0x10) = puVar36[4];
        *(int *)((int)(int *)local_d0 + 0x14) = iVar25;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x78:
      iVar23 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      if (-1 < (int)local_e4[iVar23 * 10 + 5]) {
        if (0 < (int)local_e4[iVar23 * 10 + 5]) goto LAB_0056e360;
        uVar32 = local_e4[iVar23 * 10 + 4];
        goto joined_r0x00571ca9;
      }
      break;
    case 0x79:
      if (((int)local_e4[*(int *)(local_e0 + 4 + iVar30 * 0x14) * 10 + 5] < 1) &&
         ((int)local_e4[*(int *)(local_e0 + 4 + iVar30 * 0x14) * 10 + 5] < 0)) goto LAB_0056e360;
      break;
    case 0x7a:
      iVar25 = *(int *)(local_e0 + 4 + iVar30 * 0x14);
      uVar34 = *(uint *)(local_e0 + 0xc + iVar30 * 0x14);
      puVar2 = local_e4 + iVar25 * 10 + 4;
      uVar32 = *puVar2;
      *puVar2 = *puVar2 + uVar34;
      local_e4[iVar25 * 10 + 5] =
           local_e4[iVar25 * 10 + 5] + ((int)uVar34 >> 0x1f) + (uint)CARRY4(uVar32,uVar34);
      puVar19 = puVar36;
      if (local_e4[iVar25 * 10 + 4] == 0 && local_e4[iVar25 * 10 + 5] == 0) {
        iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
        puVar19 = local_e8;
        goto LAB_0056e364;
      }
      break;
    case 0x7b:
      uVar32 = (uint)*(byte *)(local_e0 + 3 + iVar30 * 0x14);
      local_c8._4_4_ = local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
      iVar16 = local_d8[3];
      iVar23 = 0;
      local_80 = CONCAT44(local_80._4_4_,iVar16);
      local_d0 = (ulonglong)uVar32;
      if (uVar32 != 0) {
        while( true ) {
          *(undefined4 **)(iVar16 + iVar23 * 4) = local_c8._4_4_;
          local_a0._4_4_ = iVar25;
          local_c0 = uVar39;
          FUN_00575310();
          iVar23 = (int)local_d0._4_4_ + 1;
          local_c8._4_4_ = local_c8._4_4_ + 10;
          local_d0 = CONCAT44(iVar23,(int *)local_d0);
          if ((int)(int *)local_d0 <= iVar23) break;
          iVar16 = (int)local_80;
          iVar25 = local_a0._4_4_;
          uVar39 = local_c0;
        }
      }
      iVar25 = local_e0;
      local_c0._0_4_ = *(int **)(local_e0 + 0x10 + iVar30 * 0x14);
      puVar35 = local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10;
      local_c8 = CONCAT44(local_c8._4_4_,puVar35);
      puVar35[6] = puVar35[6] + 1;
      local_a0._4_2_ = 1;
      local_94 = (undefined4 *)0x0;
      local_98 = (byte *)0x0;
      local_b8 = (double)ZEXT48(puVar19);
      local_90 = ZEXT48(puVar35);
      local_88 = 0;
      if ((*(byte *)((int)(int *)local_c0 + 3) & 8) != 0) {
        local_90 = CONCAT44(*(undefined4 *)(local_e0 + -4 + iVar30 * 0x14),puVar35);
      }
      (**(code **)((int)(int *)local_c0 + 0x10))(&local_c0,(int *)local_d0);
      if ((int)local_88 != 0) {
        uVar26 = FUN_0056bce0(&local_b8);
        FUN_005670f0(local_d8 + 0xd,puVar19,&DAT_00716900,uVar26);
        local_d4 = (int)local_88;
      }
      if (local_88._4_4_ != 0) {
        iVar25 = *(int *)(iVar25 + -0x10 + iVar30 * 0x14);
        local_d0 = CONCAT44(iVar25,(int *)local_d0);
        if (iVar25 != 0) {
          FUN_00574ec0(local_e4 + iVar25 * 10,1);
        }
      }
      FUN_00574d40();
      iVar16 = local_d4;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
      lVar41 = CONCAT44(CONCAT22(local_a0._6_2_,local_a0._4_2_),(undefined4 *)local_a0);
      break;
    case 0x7c:
      local_d0 = CONCAT44(local_d0._4_4_,local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10);
      local_d4 = FUN_00574670(local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10);
      if (local_d4 != 0) {
        uVar26 = FUN_0056bce0((int *)local_d0);
        FUN_005670f0(local_d8 + 0xd,puVar19,&DAT_00716900,uVar26);
      }
      FUN_0056c290((int *)local_d0);
      iVar25 = FUN_005753f0((int *)local_d0);
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
joined_r0x005727a5:
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      if (iVar25 != 0) goto LAB_00572de0;
      break;
    case 0x7d:
      local_d0 = local_d0 & 0xffffffff;
      local_c8 = 0xffffffffffffffff;
      local_d4 = FUN_0054f920(puVar19,*(undefined4 *)(local_e0 + 4 + iVar30 * 0x14),
                              *(undefined4 *)(local_e0 + 8 + iVar30 * 0x14),&local_c8);
      if (local_d4 == 5) {
        local_d4 = 0;
        local_d0 = 0x100000000;
      }
      iVar25 = 0;
      local_d0 = local_d0 & 0xffffffff00000000;
      local_c0._0_4_ = local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10;
      do {
        FUN_00574ec0((int *)local_c0,*(undefined4 *)((int)&local_d0 + iVar25 * 4 + 4));
        iVar25 = (int)(int *)local_d0 + 1;
        local_c0._0_4_ = (int *)local_c0 + 10;
        local_d0 = CONCAT44(local_d0._4_4_,iVar25);
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      } while (iVar25 < 3);
      break;
    case 0x7e:
      uVar32 = *(uint *)(local_e0 + 0xc + iVar30 * 0x14);
      iVar25 = *(int *)(puVar19[4] + 4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 0x10);
      local_f8 = (double)CONCAT44(iVar25,(undefined4)local_f8);
      iVar16 = **(int **)(iVar25 + 4);
      local_d0 = CONCAT44(iVar16,iVar25);
      bVar4 = *(byte *)(iVar16 + 5);
      uVar34 = (uint)bVar4;
      if (uVar32 == 0xffffffff) {
        uVar32 = uVar34;
      }
      local_c8 = (ulonglong)CONCAT14(bVar4,uVar32);
      if ((2 < *(byte *)(iVar16 + 0xf)) ||
         (((**(int **)(iVar16 + 0x40) != 0 && (-1 < *(int *)(iVar16 + 0x4c))) &&
          ((0 < *(int *)(iVar16 + 0x4c) || (*(int *)(iVar16 + 0x48) != 0)))))) {
        local_c8 = (ulonglong)CONCAT14(bVar4,uVar34);
        uVar32 = uVar34;
      }
      local_c0._0_4_ = (int *)&DAT_006fc918;
      if (*(char *)(iVar16 + 0xe) == '\0') {
        local_c0._0_4_ = *(int **)(iVar16 + 0x90);
      }
      if (uVar32 == 5) {
        iVar25 = FUN_00568070();
        if (iVar25 != 0) {
          uVar42 = FUN_00560300();
          uVar32 = (uint)((ulonglong)uVar42 >> 0x20);
          if ((int)uVar42 != 0) {
            iVar25 = local_f8._4_4_;
            goto LAB_0057211b;
          }
        }
        local_c8 = CONCAT44(local_c8._4_4_,uVar34);
LAB_005720b9:
        if (local_d4 != 0) goto LAB_005720c2;
      }
      else {
LAB_0057211b:
        puVar19 = local_e8;
        if ((uVar32 == uVar34) || ((uVar34 != 5 && (uVar32 != 5)))) goto LAB_005720b9;
        if ((*(char *)((int)local_e8 + 0x36) == '\0') || (1 < (int)local_e8[0x21])) {
          local_d4 = 1;
          FUN_005670f0(local_d8 + 0xd,local_e8,"cannot change %s wal mode from within a transaction"
                      );
          iVar16 = 1;
          puVar35 = local_dc;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          break;
        }
        if (uVar34 == 5) {
          local_d4 = FUN_0055ef90();
          if (local_d4 == 0) {
            FUN_0055fda0(local_d0._4_4_);
            iVar25 = (int)(int *)local_d0;
LAB_005721c8:
            local_d4 = FUN_0054f3d0(iVar25);
            uVar34 = (uint)local_c8._4_4_;
            iVar16 = (int)local_d0._4_4_;
            goto LAB_005720b9;
          }
          uVar34 = (uint)local_c8._4_4_;
          iVar16 = (int)local_d0._4_4_;
        }
        else {
          if (uVar34 == 4) {
            FUN_0055fda0(iVar16);
            iVar25 = (int)(int *)local_d0;
            uVar34 = (uint)local_c8._4_4_;
            iVar16 = (int)local_d0._4_4_;
          }
          if (local_d4 == 0) goto LAB_005721c8;
        }
LAB_005720c2:
        local_c8 = CONCAT44(local_c8._4_4_,uVar34);
      }
      iVar25 = FUN_0055fda0(iVar16);
      local_c8 = CONCAT44(local_c8._4_4_,iVar25);
      puVar35 = local_e4 + *(int *)(local_e0 + 8 + iVar30 * 0x14) * 10;
      *(undefined2 *)(puVar35 + 7) = 0xa02;
      if (iVar25 == 6) {
        puVar24 = (undefined *)0x0;
      }
      else {
        puVar24 = (&PTR_s_delete_0071347c)[iVar25];
      }
      puVar35[1] = puVar24;
      local_dc = puVar35;
      uVar26 = FUN_00568070();
      puVar35[6] = uVar26;
      *(undefined1 *)((int)puVar35 + 0x1f) = 1;
      FUN_0056c290(puVar35,local_f0 & 0xff);
      iVar16 = local_d4;
      puVar19 = local_e8;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x7f:
      local_d4 = FUN_00564bb0(local_d8 + 0xd);
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x80:
      local_d0 = CONCAT44(local_d0._4_4_,
                          *(undefined4 *)
                           (puVar19[4] + 4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 0x10));
      local_d4 = FUN_0054d5c0();
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if (local_d4 == 0x65) {
        local_d4 = 0;
        iVar16 = 0;
        local_ec = *(int *)(local_e0 + 8 + iVar30 * 0x14) + -1;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x81:
      if (*(int *)(local_e0 + 4 + iVar30 * 0x14) == 0) {
        FUN_00553a10();
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      else {
        local_d8[0x18] = local_d8[0x18] | 0x20;
      }
      break;
    case 0x82:
      *(undefined2 *)(puVar35 + 7) = 8;
      *(undefined8 *)(puVar35 + 2) = **(undefined8 **)(local_e0 + 0x10 + iVar30 * 0x14);
      break;
    case 0x83:
      cVar14 = *(char *)(local_e0 + 0xc + iVar30 * 0x14);
      local_118 = CONCAT31(local_118._1_3_,cVar14);
      if ((cVar14 != '\0') || ((puVar19[6] & 0x800) == 0)) {
        local_d4 = FUN_0054deb0(*(undefined4 *)
                                 (puVar19[4] + 4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 0x10),
                                *(undefined4 *)(local_e0 + 8 + iVar30 * 0x14));
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        if ((char)local_d4 == '\x06') {
          FUN_005670f0(local_d8 + 0xd,puVar19,"database table is locked: %s");
          iVar16 = local_d4;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
      }
      break;
    case 0x84:
      local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(local_e0 + 0x10 + iVar30 * 0x14));
      local_d4 = FUN_00576d50(puVar19);
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if ((int *)local_d0 != (int *)0x0) {
        FUN_0053b8a0(local_d8);
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x85:
      local_d4 = FUN_00576fe0(puVar19,*(undefined4 *)(local_e0 + 4 + iVar30 * 0x14),
                              *(undefined4 *)(local_e0 + 0x10 + iVar30 * 0x14));
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x86:
      local_d8[0x18] = local_d8[0x18] & 0xfffffffbU | 8;
      local_d4 = FUN_00577100(puVar19,*(undefined4 *)(local_e0 + 4 + iVar30 * 0x14));
      local_d8[0x18] = local_d8[0x18] & 0xfffffff3;
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x87:
      local_d0 = 0;
      piVar20 = *(int **)(*(int *)(local_e0 + 0x10 + iVar30 * 0x14) + 8);
      local_c8 = CONCAT44(*piVar20,piVar20);
      local_d4 = (**(code **)(*piVar20 + 0x18))(piVar20);
      FUN_0053b8a0(local_d8,(int *)local_c8);
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if (local_d4 == 0) {
        *local_d0._4_4_ = (int)(int *)local_c8;
        iVar25 = FUN_00529890(local_d8,*(undefined4 *)(local_e0 + 4 + iVar30 * 0x14),0,0xffffffff);
        local_d0 = CONCAT44(local_d0._4_4_,iVar25);
        if (iVar25 == 0) {
          *(undefined1 *)(puVar19 + 0xe) = 1;
          (**(code **)((int)local_c8._4_4_ + 0x1c))();
          iVar16 = local_d4;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
        else {
          *(int **)(iVar25 + 0x24) = local_d0._4_4_;
          *(undefined4 *)(iVar25 + 0x28) = *(undefined4 *)*local_d0._4_4_;
          iVar16 = local_d4;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
      }
      break;
    case 0x88:
      puVar35 = local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10;
      local_c0._0_4_ = puVar35 + 10;
      iVar16 = *(int *)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_108 = *(undefined4 **)(iVar16 + 0x24);
      local_b8 = (double)CONCAT44(iVar16,(int *)*local_108);
      iVar16 = *(int *)*local_108;
      local_c8 = CONCAT44(puVar35,iVar16);
      iVar23 = puVar35[0xe];
      local_f8 = (double)CONCAT44(puVar35[4],(undefined4)local_f8);
      local_d0 = CONCAT44(puVar35[4],iVar23);
      iVar33 = 0;
      local_a8 = (undefined4 *)local_d8[3];
      local_b0 = 0.0;
      local_d4 = iVar16;
      local_c0._4_4_ = local_108;
      if (0 < iVar23) {
        do {
          local_a8[iVar33] = (int *)local_c0 + (iVar33 + 1) * 10;
          FUN_00575310();
          iVar33 = local_b0._4_4_ + 1;
          local_b0 = (double)CONCAT44(iVar33,(undefined4 *)local_b0);
        } while (iVar33 < (int)(int *)local_d0);
        local_f8 = (double)CONCAT44(local_d0._4_4_,(undefined4)local_f8);
        iVar23 = (int)(int *)local_d0;
        iVar16 = (int)(int *)local_c8;
        iVar25 = local_a0._4_4_;
      }
      iVar33 = local_e0;
      local_d8[0x18] = local_d8[0x18] & 0xfffffff7U | 4;
      local_108 = local_c0._4_4_;
      local_a0._4_4_ = iVar25;
      local_d4 = (**(code **)(iVar16 + 0x20))
                           (local_c0._4_4_,local_f8._4_4_,
                            *(undefined4 *)(local_e0 + 0x10 + iVar30 * 0x14),iVar23);
      local_d8[0x18] = local_d8[0x18] & 0xfffffff3;
      FUN_0053b8a0(local_d8,(int *)local_b8);
      if (local_d4 == 0) {
        iVar25 = (**(code **)((int)(int *)local_c8 + 0x28))();
        local_b0 = (double)CONCAT44(local_b0._4_4_,iVar25);
      }
      else {
        iVar25 = (int)(undefined4 *)local_b0;
      }
      if (iVar25 != 0) {
        local_ec = *(int *)(iVar33 + 8 + iVar30 * 0x14) + -1;
      }
      *(undefined1 *)((int)local_b8._4_4_ + 0x1c) = 0;
      iVar16 = local_d4;
      puVar19 = local_e8;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = CONCAT44(local_c0._4_4_,(int *)local_c0);
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x89:
      iVar25 = *(int *)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_c8 = CONCAT44(uVar32,local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10);
      if (*(char *)(iVar25 + 0x1c) == '\0') {
        local_d0 = CONCAT44(*(undefined4 *)**(undefined4 **)(iVar25 + 0x24),
                            (undefined4 *)**(undefined4 **)(iVar25 + 0x24));
        memset(&local_c0,0,0x40);
        FUN_00574b60(&local_b8,(int *)local_c8);
        local_a0._4_2_ = local_a0._4_2_ & 0xbe01 | 1;
        local_d4 = (**(code **)((int)local_d0._4_4_ + 0x2c))
                             (*(undefined4 *)(iVar25 + 0x24),&local_c0,
                              *(undefined4 *)(local_e0 + 8 + iVar30 * 0x14));
        FUN_0053b8a0(local_d8,(int *)local_d0);
        if ((int)local_88 != 0) {
          local_d4 = (int)local_88;
        }
        FUN_0056c290(&local_b8,local_f0 & 0xff);
        FUN_00574b60((int *)local_c8,&local_b8);
        iVar25 = FUN_005753f0((int *)local_c8);
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        puVar35 = local_dc;
        goto joined_r0x005727a5;
      }
      FUN_00574f20();
      iVar16 = local_d4;
      puVar35 = local_dc;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x8a:
      uVar32 = *(uint *)(local_d8[0x10] + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 4);
      local_c8 = (ulonglong)uVar32 << 0x20;
      if (*(char *)(uVar32 + 0x1c) == '\0') {
        iVar25 = *(int *)**(undefined4 **)(uVar32 + 0x24);
        local_d0 = CONCAT44(iVar25,(int *)**(undefined4 **)(uVar32 + 0x24));
        local_d8[0x18] = local_d8[0x18] & 0xfffffff7U | 4;
        local_d4 = (**(code **)(iVar25 + 0x24))();
        piVar20[0x18] = piVar20[0x18] & 0xfffffff3;
        FUN_0053b8a0(piVar20,(int *)local_d0);
        puVar19 = local_e8;
        if (local_d4 == 0) {
          iVar25 = (**(code **)((int)local_d0._4_4_ + 0x28))();
          local_c8 = CONCAT44(local_c8._4_4_,iVar25);
        }
        else {
          iVar25 = (int)(int *)local_c8;
        }
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        if (iVar25 == 0) {
          iVar30 = *(int *)(local_e0 + 8 + iVar30 * 0x14);
          goto LAB_0056e364;
        }
      }
      break;
    case 0x8b:
      local_d0 = CONCAT44(local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10,
                          *(undefined4 *)(*(int *)(local_e0 + 0x10 + iVar30 * 0x14) + 8));
      local_d4 = FUN_0056c290(local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10);
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if (local_d4 == 0) {
        local_d4 = (**(code **)(*(int *)local_d0 + 0x4c))((int *)local_d0);
        FUN_0053b8a0(local_d8,(int *)local_d0);
        local_d8[0x18] = local_d8[0x18] & 0xffffffdf;
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x8c:
      piVar20 = *(int **)(*(int *)(local_e0 + 0x10 + iVar30 * 0x14) + 8);
      iVar23 = *piVar20;
      local_d0 = CONCAT44(iVar23,piVar20);
      uVar34 = *(uint *)(local_e0 + 8 + iVar30 * 0x14);
      local_c8 = CONCAT44(uVar32,uVar34);
      uVar40 = local_d0;
      if (*(int *)(iVar23 + 0x34) != 0) {
        uVar5 = *(undefined1 *)(puVar19 + 0xf);
        local_c8 = (ulonglong)uVar34;
        local_b8 = (double)CONCAT44(local_e4 + *(int *)(local_e0 + 0xc + iVar30 * 0x14) * 10,
                                    local_d8[3]);
        if (0 < (int)uVar34) {
          do {
            local_a0._4_4_ = iVar25;
            local_c0 = uVar39;
            FUN_00575310();
            *(byte **)((int)(int *)local_b8 + (int)local_c8._4_4_ * 4) = local_b8._4_4_;
            iVar16 = (int)local_c8._4_4_ + 1;
            local_b8 = (double)CONCAT44((int)local_b8._4_4_ + 0x28,(int *)local_b8);
            local_c8 = CONCAT44(iVar16,(int *)local_c8);
            iVar25 = local_a0._4_4_;
            uVar39 = local_c0;
          } while (iVar16 < (int)(int *)local_c8);
        }
        puVar35 = local_e8;
        *(undefined1 *)(local_e8 + 0xf) = *(undefined1 *)(iVar33 + 3 + iVar30 * 0x14);
        local_d4 = (**(code **)((int)local_d0._4_4_ + 0x34))
                             ((int *)local_d0,(int *)local_c8,(int *)local_b8);
        piVar20 = local_d8;
        *(undefined1 *)(puVar35 + 0xf) = uVar5;
        FUN_0053b8a0(local_d8,(int *)local_d0);
        puVar19 = local_e8;
        puVar35 = local_dc;
        uVar40 = local_d0;
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar39 = local_c0;
        if (local_d4 == 0) {
          if (*(int *)(local_e0 + 4 + iVar30 * 0x14) == 0) {
LAB_00572ab8:
            piVar20[0x19] = piVar20[0x19] + 1;
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          }
          else {
            local_100 = (uint)local_c0._4_4_;
            local_104 = (uint)(int *)local_c0;
            *(ulonglong *)(local_e8 + 8) = local_c0;
            piVar20[0x19] = piVar20[0x19] + 1;
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          }
        }
        else {
          if ((local_d4 != 0x13) ||
             (*(char *)(*(int *)(local_e0 + 0x10 + iVar30 * 0x14) + 0x10) == '\0'))
          goto LAB_00572ab8;
          cVar14 = *(char *)(local_e0 + 3 + iVar30 * 0x14);
          if (cVar14 == '\x04') {
            local_d4 = 0;
            iVar16 = 0;
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          }
          else if (cVar14 == '\x05') {
            *(undefined1 *)(piVar20 + 0x17) = 2;
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          }
          else {
            *(char *)(piVar20 + 0x17) = cVar14;
            lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
          }
        }
      }
      break;
    case 0x8d:
      puVar36 = local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10;
      uVar6 = *(ushort *)(puVar36 + 7);
      puVar35 = puVar10;
      if ((uVar6 & 1) == 0) {
        *(ushort *)(puVar36 + 7) = uVar6 >> 3 & 2 | uVar6;
        if (((uVar6 >> 3 & 2) == 0 && (uVar6 & 2) == 0) && ((uVar6 & 0xc) != 0)) {
          FUN_00575350(puVar36);
        }
        *(ushort *)(puVar36 + 7) = *(ushort *)(puVar36 + 7) & 0xfff3;
        if ((*(ushort *)(puVar36 + 7) & 0x4000) == 0) {
          *(ushort *)(puVar36 + 7) = *(ushort *)(puVar36 + 7) & 0xbfe3;
          local_d4 = 0;
          iVar16 = local_d4;
          puVar35 = local_dc;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
        else {
          local_d4 = FUN_00574600();
          *(ushort *)(puVar36 + 7) = *(ushort *)(puVar36 + 7) & 0xbfe3;
          iVar16 = local_d4;
          puVar35 = local_dc;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
      }
      break;
    case 0x8e:
      puVar36 = local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10;
      uVar6 = *(ushort *)(puVar36 + 7);
      puVar35 = puVar10;
      if ((uVar6 & 1) == 0) {
        if ((uVar6 & 0x10) == 0) {
          if (((uVar6 & 2) == 0) && ((uVar6 & 0xc) != 0)) {
            FUN_00575350(puVar36);
          }
          *(ushort *)(puVar36 + 7) = *(ushort *)(puVar36 + 7) & 0xbe10 | 0x10;
          iVar16 = local_d4;
          puVar35 = local_dc;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
        else {
          *(ushort *)(puVar36 + 7) = uVar6 & 0xfe10;
        }
      }
      break;
    case 0x8f:
      FUN_00574c50();
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x90:
      if ((*(byte *)(local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10 + 7) & 1) == 0) {
        FUN_00574a70();
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x91:
      if ((*(byte *)(local_e4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 10 + 7) & 1) == 0) {
        FUN_00574cd0();
        iVar16 = local_d4;
        puVar13 = local_dc;
        uVar40 = local_d0;
        uVar39 = local_c0;
        lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      }
      break;
    case 0x92:
      puVar35[4] = *(undefined4 *)
                    (*(int *)(*(int *)(puVar19[4] + 4 +
                                      *(int *)(local_e0 + 4 + iVar30 * 0x14) * 0x10) + 4) + 0x2c);
      puVar35[5] = 0;
      break;
    case 0x93:
      iVar25 = FUN_0054df20(*(undefined4 *)
                             (puVar19[4] + 4 + *(int *)(local_e0 + 4 + iVar30 * 0x14) * 0x10));
      puVar35[4] = iVar25;
      puVar35[5] = iVar25 >> 0x1f;
      iVar16 = local_d4;
      puVar13 = local_dc;
      uVar40 = local_d0;
      uVar39 = local_c0;
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      break;
    case 0x94:
      if ((puVar19[0x26] != 0) && ((local_d8[0x18] & 0x400U) == 0)) {
        iVar25 = *(int *)(local_e0 + 0x10 + iVar30 * 0x14);
        if (iVar25 == 0) {
          iVar25 = local_d8[0x26];
        }
        local_d0 = CONCAT44(local_d0._4_4_,iVar25);
        uVar40 = local_d0;
        if (iVar25 != 0) {
          uVar26 = FUN_00573170(local_d8);
          local_d0 = CONCAT44(uVar26,(int *)local_d0);
          (*(code *)puVar19[0x26])(puVar19[0x27],uVar26);
          FUN_005521a0(puVar19,local_d0._4_4_);
          iVar16 = local_d4;
          puVar13 = local_dc;
          uVar40 = local_d0;
          uVar39 = local_c0;
          lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
        }
      }
    }
LAB_0056e371:
    local_d0 = uVar40;
    local_dc = puVar13;
    local_ec = local_ec + 1;
    local_c0 = uVar39;
    if (iVar16 != 0) goto LAB_00572e2d;
    goto LAB_0056caa0;
  }
LAB_0056cb4e:
  local_d8[0x16] = 9;
  local_d4 = 9;
  local_a0._4_4_ = iVar25;
  local_c0 = uVar39;
  FUN_005670f0(local_d8 + 0xd,puVar19,&DAT_00716900,"interrupted");
  iVar16 = 9;
  lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
  goto LAB_00572e2d;
code_r0x0056f005:
  iVar16 = iVar16 + 1;
  local_b8 = (double)CONCAT44(local_b8._4_4_,iVar16);
  iVar30 = *(int *)(iVar30 + 0x10);
  local_c0._0_4_ = (int *)iVar30;
  if (iVar30 == 0) goto LAB_0056f01f;
  goto LAB_0056eff6;
LAB_0056d0d0:
  do {
    puVar19 = local_e8;
    if ((*(ushort *)(puVar35 + iVar28 * 10 + 7) & 0x1000) != 0) {
      iVar28 = FUN_00574af0();
      lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
      if (iVar28 != 0) goto LAB_00572e06;
    }
    FUN_00574bf0();
    FUN_00575310((int)(int *)local_d0 + (int)local_d0._4_4_ * 0x28);
    iVar28 = (int)local_d0._4_4_ + 1;
    local_d0 = CONCAT44(iVar28,(int *)local_d0);
    puVar35 = (int *)local_d0;
  } while (iVar28 < *(int *)(iVar25 + 8 + iVar30 * 0x14));
LAB_00572c54:
  lVar41 = CONCAT44(local_a0._4_4_,(undefined4 *)local_a0);
  if (*(char *)(puVar19 + 0xe) == '\0') {
    local_d8[0x15] = local_ec + 1;
    goto LAB_00572ea7;
  }
LAB_00572e06:
  *(undefined1 *)(puVar19 + 0xe) = 1;
  local_a0 = lVar41;
  FUN_005670f0(local_d8 + 0xd,puVar19,"out of memory");
  iVar16 = 7;
  local_d4 = iVar16;
  lVar41 = local_a0;
LAB_00572e2d:
  local_d8[0x16] = iVar16;
  local_a0 = lVar41;
  FUN_00525a30(iVar16,"statement aborts at %d: [%s] %s",local_ec,local_d8[0x26],local_d8[0xd]);
  FUN_00573740(local_d8);
  cVar14 = local_f9;
  if (local_d4 == 0xc0a) {
    *(undefined1 *)(puVar19 + 0xe) = 1;
  }
  lVar41 = local_a0;
  if (local_f9 != '\0') {
    FUN_00565020();
    lVar41 = local_a0;
    if (cVar14 != '\x02') {
      FUN_00565020();
      lVar41 = local_a0;
    }
  }
LAB_00572ea7:
  local_e8[8] = local_104;
  local_e8[9] = local_100;
  local_a0 = lVar41;
  FUN_00573db0();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00573170 @ 00573170  kind=lib  attributed-by=lib-island  size=860 */

void FUN_00573170(uint *param_1,char *param_2)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined4 local_a4;
  int local_a0;
  uint local_9c;
  uint *local_98;
  int local_94;
  uint local_90;
  undefined1 *local_8c;
  undefined1 *local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined2 local_77;
  int local_74;
  int local_70;
  undefined1 local_6c [100];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_9c = *param_1;
  local_8c = local_6c;
  local_7c = *(undefined4 *)(local_9c + 0x50);
  local_74 = 0;
  local_94 = 1;
  local_84 = 0;
  local_80 = 100;
  local_77 = 1;
  local_78 = 0;
  local_90 = local_9c;
  local_88 = local_8c;
  local_98 = param_1;
  if (*(int *)(local_9c + 0x8c) < 2) {
    cVar3 = *param_2;
    while (cVar3 != '\0') {
      iVar5 = 0;
      local_70 = 0;
      pcVar6 = param_2;
      while ((iVar4 = local_70, cVar3 != '\0' &&
             (iVar4 = FUN_0055a220(pcVar6,&local_a0), local_a0 != 0x85))) {
        pcVar6 = pcVar6 + iVar4;
        iVar5 = iVar5 + iVar4;
        cVar3 = *pcVar6;
      }
      local_70 = iVar4;
      FUN_00567e70(&local_90,param_2);
      iVar4 = local_70;
      param_2 = param_2 + iVar5;
      if (local_70 == 0) break;
      if (*param_2 == '?') {
        iVar5 = local_94;
        if (1 < local_70) {
          FUN_0055a0e0(param_2 + 1);
          iVar5 = local_74;
        }
      }
      else {
        iVar5 = FUN_005758f0(local_98,param_2);
      }
      local_74 = iVar5;
      iVar5 = local_74;
      local_94 = local_74 + 1;
      param_2 = param_2 + iVar4;
      uVar2 = local_98[0x11];
      uVar1 = *(ushort *)((uVar2 - 0xc) + local_74 * 0x28);
      local_a8 = param_2;
      if ((uVar1 & 1) == 0) {
        if ((uVar1 & 4) == 0) {
          if ((uVar1 & 8) == 0) {
            if ((uVar1 & 2) == 0) {
              if ((uVar1 & 0x4000) == 0) {
                FUN_00567e70(&local_90,&DAT_007170dc);
                local_70 = 0;
                if (0 < *(int *)((uVar2 - 0x10) + iVar5 * 0x28)) {
                  iVar4 = 0;
                  do {
                    FUN_00579a80(&local_90,&DAT_007170e0);
                    iVar4 = iVar4 + 1;
                    param_2 = local_a8;
                  } while (iVar4 < *(int *)((uVar2 - 0x10) + iVar5 * 0x28));
                }
                goto LAB_00573496;
              }
              FUN_00579a80(&local_90);
            }
            else {
              cVar3 = *(char *)(*(int *)(*(int *)(local_9c + 0x10) + 0xc) + 0x4d);
              local_a4 = CONCAT31(local_a4._1_3_,cVar3);
              if (cVar3 == '\x01') {
                FUN_00579a80(&local_90,"\'%.*q\'");
              }
              else {
                local_c8 = 0;
                local_c0 = 0;
                local_b8 = 0;
                local_b0 = 0;
                local_d0 = (ulonglong)local_9c;
                FUN_00575040(&local_d0,*(undefined4 *)((uVar2 - 0x24) + local_74 * 0x28),
                             *(undefined4 *)((uVar2 - 0x10) + local_74 * 0x28));
                FUN_0056c290(&local_d0,1);
                FUN_00579a80(&local_90,"\'%.*q\'",(undefined4)local_b8,local_d0._4_4_);
                FUN_00574d40(&local_d0);
              }
            }
          }
          else {
            FUN_00579a80(&local_90,"%!.15g");
          }
        }
        else {
          FUN_00579a80(&local_90,&DAT_0071680c);
        }
      }
      else {
LAB_00573496:
        FUN_00567e70(&local_90);
      }
      cVar3 = *param_2;
    }
  }
  else {
    cVar3 = *param_2;
    while (pcVar6 = param_2, cVar3 != '\0') {
      do {
        pcVar6 = pcVar6 + 1;
        if (cVar3 == '\n') break;
        cVar3 = *pcVar6;
      } while (cVar3 != '\0');
      FUN_00567e70(&local_90,&DAT_007170c0,3);
      FUN_00567e70(&local_90,param_2,(int)pcVar6 - (int)param_2);
      param_2 = pcVar6;
      cVar3 = *pcVar6;
    }
  }
  FUN_00567fb0(&local_90);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005734d0 @ 005734d0  kind=lib  attributed-by=lib-island  size=112 */

undefined4 FUN_005734d0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((param_1[0xc] == -0x420df25d) || (param_1[0xc] == 0x519c2973)) {
    uVar2 = FUN_00575ca0(param_1);
  }
  iVar1 = *param_1;
  FUN_0056c560(iVar1,param_1);
  if (param_1[0xe] == 0) {
    *(int *)(iVar1 + 4) = param_1[0xf];
  }
  else {
    *(int *)(param_1[0xe] + 0x3c) = param_1[0xf];
  }
  if (param_1[0xf] != 0) {
    *(int *)(param_1[0xf] + 0x38) = param_1[0xe];
  }
  param_1[0xc] = -0x49f93c38;
  *param_1 = 0;
  FUN_005521a0(iVar1,param_1);
  return uVar2;
}


/* FUN_00573540 @ 00573540  kind=lib  attributed-by=lib-island  size=164 */

void FUN_00573540(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_1[0xf];
  iVar6 = 0;
  if (0 < param_1[0x10]) {
    do {
      piVar2 = (int *)param_1[iVar1 * 10 + iVar6 + 0x12];
      puVar3 = (undefined4 *)*param_1;
      if (piVar2 != (int *)0x0) {
        FUN_00576360(*puVar3,piVar2);
        if (piVar2[1] == 0) {
          if (*piVar2 != 0) {
            FUN_0054c7f0(*piVar2);
          }
        }
        else {
          FUN_0054c710(piVar2[1]);
        }
        iVar4 = piVar2[9];
        if (iVar4 != 0) {
          iVar5 = piVar2[10];
          puVar3[0x18] = puVar3[0x18] & 0xfffffff7 | 4;
          (**(code **)(iVar5 + 0x1c))(iVar4);
          puVar3[0x18] = puVar3[0x18] & 0xfffffff3;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_1[0x10]);
  }
  FUN_00545650(param_1 + 0x12,param_1[0xf]);
  FUN_005521a0(*(undefined4 *)*param_1,param_1);
  return;
}


/* FUN_005735f0 @ 005735f0  kind=lib  attributed-by=lib-island  size=93 */

int FUN_005735f0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  piVar1[0x2e] = param_1[4];
  iVar2 = *piVar1;
  piVar1[0x2d] = param_1[0xe];
  piVar1[1] = param_1[2];
  piVar1[7] = param_1[0xc];
  piVar1[2] = param_1[3];
  piVar1[6] = param_1[0xd];
  piVar1[0x10] = param_1[5];
  *(short *)((int)piVar1 + 0x2e) = (short)param_1[10];
  *(int *)(iVar2 + 0x20) = param_1[8];
  *(int *)(iVar2 + 0x24) = param_1[9];
  piVar1[0x19] = param_1[0x11];
  return param_1[0xb];
}


/* FUN_00573650 @ 00573650  kind=lib  attributed-by=lib-island  size=95 */

void FUN_00573650(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != (int *)0x0) {
    FUN_00576360(*param_1,param_2);
    if (param_2[1] == 0) {
      if (*param_2 != 0) {
        FUN_0054c7f0(*param_2);
      }
    }
    else {
      FUN_0054c710(param_2[1]);
    }
    iVar1 = param_2[9];
    if (iVar1 != 0) {
      iVar2 = param_2[10];
      param_1[0x18] = param_1[0x18] & 0xfffffff7 | 4;
      (**(code **)(iVar2 + 0x1c))(iVar1);
      param_1[0x18] = param_1[0x18] & 0xfffffff3;
    }
  }
  return;
}


/* FUN_005736b0 @ 005736b0  kind=lib  attributed-by=lib-island  size=43 */

undefined1 * FUN_005736b0(int *param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = param_1[7] + -1;
  }
  if (*(char *)(*param_1 + 0x38) != '\0') {
    return &DAT_0076b50c;
  }
  return (undefined1 *)(param_1[1] + param_2 * 0x14);
}


/* FUN_005736e0 @ 005736e0  kind=lib  attributed-by=lib-island  size=88 */

int FUN_005736e0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != (undefined4 *)0x0) &&
     (iVar2 = param_1[0x11], iVar1 = param_2 * 5 + -5,
     (*(byte *)(iVar2 + 0x1c + iVar1 * 8) & 1) == 0)) {
    iVar3 = FUN_0056bc90(*param_1);
    if (iVar3 != 0) {
      FUN_00574570(iVar3,iVar2 + iVar1 * 8);
      FUN_0052b5d0(iVar3,param_3,1);
      FUN_00575310(iVar3);
    }
    return iVar3;
  }
  return 0;
}


/* FUN_00573740 @ 00573740  kind=lib  attributed-by=lib-string  size=721 */

undefined4 FUN_00573740(int *param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x38) != '\0') {
    param_1[0x16] = 7;
  }
  if ((void *)param_1[0x2e] != (void *)0x0) {
    memset((void *)param_1[0x2e],0,param_1[0x2d]);
  }
  FUN_00530420(param_1);
  if (param_1[0xc] != -0x420df25d) {
    return 0;
  }
  if (param_1[0x15] < 0) goto LAB_005739e9;
  iVar6 = 0;
  FUN_0056c960(param_1);
  cVar1 = (char)param_1[0x16];
  if ((((cVar1 == '\a') || (cVar1 == '\n')) || (cVar1 == '\t')) || (cVar1 == '\r')) {
    bVar3 = true;
    if (((param_1[0x18] & 0x100U) == 0) || (cVar1 != '\t')) {
      if (((cVar1 == '\a') || (cVar1 == '\r')) && ((char)param_1[0x18] < '\0')) {
        iVar6 = 2;
      }
      else {
        FUN_00564340(iVar2,0x204);
        FUN_0054fdb0(iVar2);
        *(undefined1 *)(iVar2 + 0x36) = 1;
      }
    }
  }
  else {
    bVar3 = false;
  }
  if (((param_1[0x16] == 0) && (-1 < param_1[0x23])) &&
     ((0 < param_1[0x23] || (param_1[0x22] != 0)))) {
    param_1[0x16] = 0x13;
    *(undefined1 *)(param_1 + 0x17) = 2;
    FUN_005670f0(param_1 + 0xd,*param_1,"foreign key constraint failed");
  }
  if ((((*(int *)(iVar2 + 0x120) < 1) || (*(int *)(iVar2 + 0x138) != 0)) &&
      (*(char *)(iVar2 + 0x36) != '\0')) &&
     (*(uint *)(iVar2 + 0x88) == (~((uint)param_1[0x18] >> 8) & 1))) {
    if ((param_1[0x16] == 0) || (((char)param_1[0x17] == '\x03' && (!bVar3)))) {
      iVar4 = FUN_0056c500(param_1,1);
      if (iVar4 == 0) {
        iVar4 = FUN_0057c2a0(iVar2,param_1);
        if (iVar4 == 5) {
          if ((param_1[0x18] & 0x100U) != 0) {
            FUN_00573db0(param_1);
            return 5;
          }
        }
        else if (iVar4 == 0) {
          *(uint *)(iVar2 + 0x18) = *(uint *)(iVar2 + 0x18) & 0xfffffffd;
          *(undefined4 *)(iVar2 + 0x1e8) = 0;
          *(undefined4 *)(iVar2 + 0x1ec) = 0;
          goto LAB_00573929;
        }
        param_1[0x16] = iVar4;
        FUN_00564340(iVar2,0);
      }
      else {
        if ((param_1[0x18] & 0x100U) != 0) {
          FUN_00573db0(param_1);
          return 1;
        }
        param_1[0x16] = 0x13;
        FUN_00564340(iVar2,0);
      }
    }
    else {
      FUN_00564340(iVar2,0);
    }
LAB_00573929:
    *(undefined4 *)(iVar2 + 0x1e4) = 0;
    if (iVar6 != 0) goto LAB_00573959;
  }
  else {
    if (iVar6 == 0) {
      if ((param_1[0x16] == 0) || ((char)param_1[0x17] == '\x03')) {
        iVar6 = 1;
        goto LAB_00573959;
      }
      if ((char)param_1[0x17] == '\x02') {
        iVar6 = 2;
        goto LAB_00573959;
      }
    }
    else {
LAB_00573959:
      iVar4 = FUN_0056c6b0(param_1,iVar6);
      if (iVar4 == 0) goto LAB_005739a1;
      if ((param_1[0x16] == 0) || (param_1[0x16] == 0x13)) {
        param_1[0x16] = iVar4;
        FUN_005521a0(iVar2,param_1[0xd]);
        param_1[0xd] = 0;
      }
    }
    FUN_00564340(iVar2,0x204);
    FUN_0054fdb0(iVar2);
    *(undefined1 *)(iVar2 + 0x36) = 1;
  }
LAB_005739a1:
  if ((*(byte *)(param_1 + 0x18) & 0x10) != 0) {
    if (iVar6 == 2) {
      *(undefined4 *)(iVar2 + 0x48) = 0;
    }
    else {
      iVar6 = param_1[0x19];
      *(int *)(iVar2 + 0x4c) = *(int *)(iVar2 + 0x4c) + iVar6;
      *(int *)(iVar2 + 0x48) = iVar6;
    }
    param_1[0x19] = 0;
  }
  FUN_00573db0(param_1);
  if ((-1 < param_1[0x15]) &&
     (*(int *)(iVar2 + 0x84) = *(int *)(iVar2 + 0x84) + -1, (param_1[0x18] & 0x100U) == 0)) {
    *(int *)(iVar2 + 0x88) = *(int *)(iVar2 + 0x88) + -1;
  }
LAB_005739e9:
  param_1[0xc] = 0x519c2973;
  if (*(char *)(*param_1 + 0x38) != '\0') {
    param_1[0x16] = 7;
  }
  uVar5 = 0;
  if (param_1[0x16] == 5) {
    uVar5 = 5;
  }
  return uVar5;
}


/* FUN_00573a20 @ 00573a20  kind=lib  attributed-by=lib-island  size=191 */

int FUN_00573a20(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  undefined8 local_c;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x5b) == '\x01') {
    FUN_0053a7f0(iVar2);
    iVar1 = *(int *)(iVar2 + 0x28);
    if ((*(int *)(iVar2 + 0x2c) + -1 + (uint)(iVar1 != 0) == 0) && (iVar1 - 1U < 0x7fffffff)) {
      local_2c = 0;
      local_24 = 0;
      local_1c = 0;
      local_14 = 0;
      local_c = 0;
      iVar2 = FUN_00574710(*param_1,0,iVar1,1,&local_2c);
      if (iVar2 != 0) {
        return iVar2;
      }
      uVar3 = FUN_00575a10((undefined4)local_14,local_2c._4_4_,param_2);
      *param_3 = uVar3;
      FUN_00574d40(&local_2c);
      return 0;
    }
  }
  *param_3 = 0;
  FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xf116,
               "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
  return 0xb;
}


/* FUN_00573ae0 @ 00573ae0  kind=lib  attributed-by=lib-island  size=347 */

int FUN_00573ae0(undefined4 param_1,uint param_2,undefined4 *param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 local_5c [16];
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  ulonglong local_1c;
  undefined8 local_14;
  undefined8 local_c;
  
  uVar8 = param_2;
  if (*(char *)(param_2 + 0x5b) == '\x01') {
    FUN_0053a7f0(param_2);
    uVar6 = *(undefined4 *)(uVar8 + 0x28);
    local_c = CONCAT44(*(undefined4 *)(uVar8 + 0x2c),(undefined4)local_c);
  }
  else {
    local_c = 0;
    local_c._0_4_ = 0;
    uVar6 = (undefined4)local_c;
  }
  local_34 = 0;
  local_2c = 0;
  local_24 = 0;
  local_1c = 0;
  local_14 = 0;
  iVar4 = FUN_00574710(uVar8,0,uVar6,1,&local_34);
  if (iVar4 == 0) {
    pbVar2 = local_34._4_4_;
    if (*local_34._4_4_ < 0x80) {
      uVar8 = (uint)*local_34._4_4_;
    }
    else {
      FUN_0055aaf0(local_34._4_4_,&param_2);
      uVar8 = param_2;
    }
    if ((2 < uVar8) && (uVar3 = (uint)local_1c, (int)uVar8 <= (int)(uint)local_1c)) {
      pbVar5 = pbVar2 + (uVar8 - 1);
      bVar1 = *pbVar5;
      if (bVar1 < 0x80) {
        uVar7 = (uint)bVar1;
      }
      else {
        FUN_0055aaf0(pbVar5,&param_2);
        uVar7 = param_2;
      }
      if ((uVar7 - 1 < 9) && (uVar7 != 7)) {
        uVar9 = FUN_00576250(uVar7);
        if ((int)uVar9 + uVar8 <= uVar3) {
          FUN_00575e30(pbVar2 + (uVar3 - (int)uVar9),(int)((ulonglong)uVar9 >> 0x20),local_5c);
          *param_3 = local_4c;
          param_3[1] = local_48;
          FUN_00574d40(&local_34);
          return 0;
        }
      }
    }
    if ((local_1c & 0x246000000000) != 0) {
      FUN_00574d80(&local_34);
    }
    FUN_005521a0((undefined4)local_34,local_14._4_4_);
    local_34 = local_34 & 0xffffffff;
    local_14 = 0;
    FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xf0f7,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    iVar4 = 0xb;
  }
  return iVar4;
}


/* FUN_00573c40 @ 00573c40  kind=lib  attributed-by=lib-island  size=109 */

undefined8 FUN_00573c40(int param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 local_c;
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if ((uVar1 & 4) != 0) {
    return *(undefined8 *)(param_1 + 0x10);
  }
  if ((uVar1 & 8) != 0) {
    uVar2 = FUN_00534710(*(undefined8 *)(param_1 + 8));
    return uVar2;
  }
  if ((uVar1 & 0x12) != 0) {
    local_c = 0;
    FUN_0054a9a0(*(undefined4 *)(param_1 + 4),&local_c,*(undefined4 *)(param_1 + 0x18),
                 *(undefined1 *)(param_1 + 0x1f));
    return local_c;
  }
  return 0;
}


/* FUN_00573cb0 @ 00573cb0  kind=lib  attributed-by=lib-island  size=202 */

/* WARNING: Removing unreachable block (ram,0x00573d5d) */

void FUN_00573cb0(int param_1)

{
  double dVar1;
  longlong lVar2;
  
  dVar1 = *(double *)(param_1 + 8);
  if (-9.223372036854776e+18 <= dVar1) {
    if (dVar1 <= 9.223372036854776e+18) {
      lVar2 = FUN_0068d946();
    }
    else {
      lVar2 = -0x8000000000000000;
    }
  }
  else {
    lVar2 = -0x8000000000000000;
  }
  *(longlong *)(param_1 + 0x10) = lVar2;
  if (((dVar1 == (double)lVar2) && (-0x8000000000000000 < lVar2)) &&
     ((lVar2 < 0x7fffffff00000000 || ((int)lVar2 != -1)))) {
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | 4;
  }
  return;
}


/* FUN_00573d80 @ 00573d80  kind=lib  attributed-by=lib-island  size=34 */

void FUN_00573d80(int param_1,uint param_2)

{
  if ((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 0x1c))) {
    *(uint *)(*(int *)(param_1 + 4) + 8 + param_2 * 0x14) = *(uint *)(param_1 + 0x1c);
  }
  return;
}


/* FUN_00573db0 @ 00573db0  kind=lib  attributed-by=lib-island  size=128 */

void FUN_00573db0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint local_8;
  
  if (param_1[0x1b] != 0) {
    iVar2 = *(int *)(*param_1 + 0x14);
    local_8 = 1;
    if (0 < iVar2) {
      piVar5 = (int *)(*(int *)(*param_1 + 0x10) + 4);
      iVar6 = 0;
      do {
        if ((((iVar6 != 1) && ((param_1[0x1b] & local_8) != 0)) && (iVar3 = *piVar5, iVar3 != 0)) &&
           (*(char *)(iVar3 + 9) != '\0')) {
          piVar1 = (int *)(iVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            iVar4 = *(int *)(*(int *)(iVar3 + 4) + 0x38);
            if (iVar4 != 0) {
              (*DAT_00766638)(iVar4);
            }
            *(undefined1 *)(iVar3 + 10) = 0;
          }
        }
        iVar6 = iVar6 + 1;
        local_8 = local_8 * 2;
        piVar5 = piVar5 + 4;
      } while (iVar6 < iVar2);
    }
  }
  return;
}


/* FUN_00573e30 @ 00573e30  kind=lib  attributed-by=lib-island  size=933 */

undefined4 FUN_00573e30(int *param_1)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  iVar7 = param_1[2];
  iVar6 = *param_1;
  iVar11 = iVar7 + 0x28;
  piVar10 = (int *)0x0;
  local_c = 0;
  local_10 = 0;
  FUN_00545650(iVar11,8);
  param_1[5] = 0;
  if (param_1[0x16] == 7) {
    *(undefined1 *)(iVar6 + 0x38) = 1;
  }
  else {
    local_18 = param_1[7];
    if ((param_1[0x18] & 3U) == 1) {
      iVar8 = param_1[2];
      local_10 = iVar8 + 0x168;
      if ((*(byte *)(iVar8 + 0x184) & 0x10) != 0) {
        piVar10 = *(int **)(iVar8 + 0x16c);
        local_c = *(uint *)(iVar8 + 0x180) >> 2;
      }
      iVar8 = 0;
      local_14 = 0;
      local_18 = 0;
      if (1 < local_c) {
        local_14 = 0;
        local_18 = 0;
        iVar9 = iVar8;
        do {
          iVar8 = iVar9 + 2;
          local_14 = local_14 + *(int *)(piVar10[iVar9] + 4);
          local_18 = local_18 + *(int *)(piVar10[iVar9 + 1] + 4);
          iVar9 = iVar8;
        } while (iVar8 < (int)(local_c - 1));
      }
      iVar9 = param_1[7];
      if (iVar8 < (int)local_c) {
        iVar9 = iVar9 + *(int *)(piVar10[iVar8] + 4);
      }
      local_18 = iVar9 + local_14 + local_18;
    }
    do {
      iVar8 = param_1[0x15];
      param_1[0x15] = iVar8 + 1;
      if (local_18 <= iVar8) {
        param_1[0x16] = 0;
        return 0x65;
      }
    } while (((param_1[0x18] & 3U) == 2) && (*(char *)(param_1[1] + iVar8 * 0x14) != -0x6a));
    if (*(int *)(iVar6 + 0xe0) != 0) {
      param_1[0x16] = 9;
      FUN_005670f0(param_1 + 0xd,iVar6,&DAT_00716900,"interrupted");
      return 1;
    }
    if (iVar8 < param_1[7]) {
      iVar6 = param_1[1];
    }
    else {
      iVar8 = iVar8 - param_1[7];
      iVar9 = 0;
      iVar6 = *(int *)(*piVar10 + 4);
      if (iVar6 <= iVar8) {
        do {
          iVar9 = iVar9 + 1;
          iVar8 = iVar8 - iVar6;
          iVar6 = *(int *)(piVar10[iVar9] + 4);
        } while (iVar6 <= iVar8);
      }
      iVar6 = *(int *)piVar10[iVar9];
    }
    pbVar1 = (byte *)(iVar6 + iVar8 * 0x14);
    if (((byte)param_1[0x18] & 3) == 1) {
      *(undefined2 *)(iVar7 + 0x44) = 4;
      *(int *)(iVar7 + 0x38) = iVar8;
      *(int *)(iVar7 + 0x3c) = iVar8 >> 0x1f;
      *(undefined1 *)(iVar7 + 0x46) = 1;
      *(undefined2 *)(iVar7 + 0x6c) = 0xa02;
      pcVar3 = (&PTR_DAT_00713208)[*pbVar1];
      *(char **)(iVar7 + 0x54) = pcVar3;
      uVar5 = 0;
      if (pcVar3 != (char *)0x0) {
        cVar2 = *pcVar3;
        pcVar4 = pcVar3;
        while (cVar2 != '\0') {
          pcVar4 = pcVar4 + 1;
          cVar2 = *pcVar4;
        }
        uVar5 = (int)pcVar4 - (int)pcVar3 & 0x3fffffff;
      }
      *(uint *)(iVar7 + 0x68) = uVar5;
      *(undefined2 *)(iVar7 + 0x6e) = 0x103;
      iVar11 = iVar7 + 0x78;
      if (pbVar1[1] == 0xee) {
        iVar7 = local_c * 4;
        uVar5 = 0;
        if (local_c != 0) {
          do {
            if (piVar10[uVar5] == *(int *)(pbVar1 + 0x10)) break;
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < (int)local_c);
        }
        if ((uVar5 == local_c) &&
           (iVar6 = FUN_005748c0(local_10,iVar7 + 4,local_c != 0), iVar6 == 0)) {
          *(undefined4 *)(iVar7 + *(int *)(local_10 + 4)) = *(undefined4 *)(pbVar1 + 0x10);
          *(ushort *)(local_10 + 0x1c) = *(ushort *)(local_10 + 0x1c) | 0x10;
          *(int *)(local_10 + 0x18) = iVar7 + 4;
        }
      }
    }
    *(undefined2 *)(iVar11 + 0x1c) = 4;
    iVar7 = *(int *)(pbVar1 + 4);
    *(undefined1 *)(iVar11 + 0x1e) = 1;
    *(int *)(iVar11 + 0x10) = iVar7;
    *(int *)(iVar11 + 0x14) = iVar7 >> 0x1f;
    *(undefined2 *)(iVar11 + 0x44) = 4;
    iVar7 = *(int *)(pbVar1 + 8);
    *(int *)(iVar11 + 0x38) = iVar7;
    *(int *)(iVar11 + 0x3c) = iVar7 >> 0x1f;
    *(undefined1 *)(iVar11 + 0x46) = 1;
    *(undefined2 *)(iVar11 + 0x6c) = 4;
    iVar7 = *(int *)(pbVar1 + 0xc);
    *(int *)(iVar11 + 0x60) = iVar7;
    *(int *)(iVar11 + 100) = iVar7 >> 0x1f;
    *(undefined1 *)(iVar11 + 0x6e) = 1;
    iVar7 = FUN_005748c0(iVar11 + 0x78,0x20,0);
    if (iVar7 == 0) {
      *(undefined2 *)(iVar11 + 0x94) = 0x602;
      pcVar4 = (char *)FUN_005343b0(pbVar1,*(undefined4 *)(iVar11 + 0x7c),0x20);
      pcVar3 = *(char **)(iVar11 + 0x7c);
      if (pcVar4 == pcVar3) {
        uVar5 = 0;
        if (pcVar3 != (char *)0x0) {
          cVar2 = *pcVar3;
          pcVar4 = pcVar3;
          while (cVar2 != '\0') {
            pcVar4 = pcVar4 + 1;
            cVar2 = *pcVar4;
          }
          uVar5 = (int)pcVar4 - (int)pcVar3 & 0x3fffffff;
        }
        *(uint *)(iVar11 + 0x90) = uVar5;
        *(undefined1 *)(iVar11 + 0x97) = 1;
      }
      else {
        FUN_00575040(iVar11 + 0x78,pcVar4,0xffffffff,1,0);
      }
      *(undefined1 *)(iVar11 + 0x96) = 3;
      if (((byte)param_1[0x18] & 3) == 1) {
        iVar7 = FUN_005748c0(iVar11 + 0xa0,4,0);
        if (iVar7 != 0) {
          return 1;
        }
        *(undefined2 *)(iVar11 + 0xbc) = 0x602;
        *(undefined4 *)(iVar11 + 0xb8) = 2;
        FUN_005240c0(3,*(undefined4 *)(iVar11 + 0xa4),&DAT_00716fa4,pbVar1[3]);
        *(undefined2 *)(iVar11 + 0xbe) = 0x103;
        *(undefined2 *)(iVar11 + 0xe4) = 1;
        *(undefined1 *)(iVar11 + 0xe6) = 5;
      }
      *(ushort *)(param_1 + 0xb) = (2 - ((*(ushort *)(param_1 + 0x18) & 3) - 1)) * 4;
      param_1[5] = param_1[2] + 0x28;
      param_1[0x16] = 0;
      return 100;
    }
  }
  return 1;
}


/* FUN_005741e0 @ 005741e0  kind=lib  attributed-by=lib-island  size=104 */

int FUN_005741e0(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = param_1[9];
  param_1[9] = uVar1 + 1;
  if ((uVar1 & uVar1 - 1) == 0) {
    uVar2 = param_1[10];
    uVar3 = *param_1;
    iVar4 = FUN_00552390(uVar3,uVar2,uVar1 * 8 + 4);
    if (iVar4 == 0) {
      FUN_005521a0(uVar3,uVar2);
    }
    param_1[10] = iVar4;
  }
  if (param_1[10] != 0) {
    *(undefined4 *)(param_1[10] + uVar1 * 4) = 0xffffffff;
  }
  return -1 - uVar1;
}


/* FUN_00574250 @ 00574250  kind=lib  attributed-by=lib-island  size=780 */

void FUN_00574250(int *param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  size_t _Size;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar2 = param_1;
  iVar9 = *(int *)(param_2 + 0x48);
  local_8 = *param_1;
  local_c = *(int *)(param_2 + 0x1cc);
  local_14 = *(int *)(param_2 + 0x198);
  iVar3 = *(int *)(param_2 + 0x54);
  if (iVar3 == 0) {
    iVar3 = 1;
  }
  iVar12 = *(int *)(param_2 + 0x4c) + iVar9;
  pvVar6 = (void *)(param_1[1] + param_1[7] * 0x14);
  uVar7 = param_1[1] + param_1[8] * 0x14;
  local_10 = iVar12;
  FUN_005469d0(param_1,&local_14);
  if ((*(char *)(param_2 + 0x17) == '\0') || (*(char *)(param_2 + 0x18) == '\0')) {
    iVar4 = 0;
  }
  else {
    iVar4 = 1;
  }
  param_1[0x18] = param_1[0x18] ^ (iVar4 << 7 ^ param_1[0x18]) & 0x80U;
  if ((*(char *)(param_2 + 0x1d4) != '\0') && (local_10 = iVar12, iVar12 < 10)) {
    local_10 = 10;
  }
  memset(pvVar6,0,uVar7 - (int)pvVar6);
  uVar11 = (int)pvVar6 + ((uint)pvVar6 & 7);
  param_1[0x18] = param_1[0x18] & 0xffffffdf;
  param_1 = (int *)uVar7;
  do {
    uVar7 = piVar2[2];
    _Size = 0;
    if (uVar7 == 0) {
      _Size = local_10 * 0x28;
      if (_Size + uVar11 <= param_1) {
        uVar7 = uVar11;
        uVar11 = _Size + uVar11;
        _Size = 0;
      }
    }
    piVar2[2] = uVar7;
    uVar10 = piVar2[0x11];
    uVar8 = uVar10;
    uVar7 = uVar11;
    if (uVar10 == 0) {
      uVar7 = local_c * 0x28 + uVar11;
      uVar8 = uVar11;
      if (param_1 < uVar7) {
        _Size = _Size + local_c * 0x28;
        uVar8 = uVar10;
        uVar7 = uVar11;
      }
    }
    piVar2[0x11] = uVar8;
    uVar10 = piVar2[3];
    uVar8 = uVar10;
    uVar11 = uVar7;
    if (uVar10 == 0) {
      uVar5 = local_14 * 4 + 7U & 0xfffffff8;
      uVar11 = uVar5 + uVar7;
      uVar8 = uVar7;
      if (param_1 < uVar11) {
        _Size = _Size + uVar5;
        uVar8 = uVar10;
        uVar11 = uVar7;
      }
    }
    piVar2[3] = uVar8;
    uVar10 = piVar2[0x12];
    uVar8 = uVar10;
    uVar7 = uVar11;
    if (uVar10 == 0) {
      uVar5 = local_c * 4 + 7U & 0xfffffff8;
      uVar7 = uVar5 + uVar11;
      uVar8 = uVar11;
      if (param_1 < uVar7) {
        _Size = _Size + uVar5;
        uVar8 = uVar10;
        uVar7 = uVar11;
      }
    }
    piVar2[0x12] = uVar8;
    uVar10 = piVar2[0x10];
    uVar8 = uVar10;
    uVar11 = uVar7;
    if (uVar10 == 0) {
      uVar5 = iVar9 * 4 + 7U & 0xfffffff8;
      uVar11 = uVar5 + uVar7;
      uVar8 = uVar7;
      if (param_1 < uVar11) {
        _Size = _Size + uVar5;
        uVar8 = uVar10;
        uVar11 = uVar7;
      }
    }
    uVar7 = piVar2[0x2e];
    piVar2[0x10] = uVar8;
    uVar10 = uVar7;
    if ((uVar7 == 0) && (uVar8 = iVar3 + 7U & 0xfffffff8, uVar10 = uVar11, param_1 < uVar8 + uVar11)
       ) {
      _Size = _Size + uVar8;
      uVar10 = uVar7;
    }
    piVar2[0x2e] = uVar10;
    if (_Size != 0) {
      pvVar6 = (void *)FUN_00552230(local_8,_Size);
      if (pvVar6 != (void *)0x0) {
        memset(pvVar6,0,_Size);
      }
      piVar2[0x27] = (int)pvVar6;
    }
    iVar12 = local_8;
    uVar11 = piVar2[0x27];
    param_1 = (int *)(_Size + uVar11);
  } while ((_Size != 0) && (*(char *)(local_8 + 0x38) == '\0'));
  *(short *)((int)piVar2 + 0x2e) = (short)iVar9;
  piVar2[0x2d] = iVar3;
  if ((piVar2[0x11] != 0) && (*(short *)(piVar2 + 0x13) = (short)local_c, 0 < local_c)) {
    iVar9 = 0;
    iVar3 = local_c;
    do {
      *(undefined2 *)(iVar9 + 0x1c + piVar2[0x11]) = 1;
      *(int *)(iVar9 + piVar2[0x11]) = local_8;
      iVar3 = iVar3 + -1;
      iVar9 = iVar9 + 0x28;
    } while (iVar3 != 0);
  }
  if ((void *)piVar2[0x12] != (void *)0x0) {
    sVar1 = *(short *)(param_2 + 0x1d0);
    *(short *)((int)piVar2 + 0x4e) = sVar1;
    memcpy((void *)piVar2[0x12],*(void **)(param_2 + 0x1ec),(int)sVar1 << 2);
    memset(*(void **)(param_2 + 0x1ec),0,*(int *)(param_2 + 0x1d0) << 2);
  }
  if (piVar2[2] != 0) {
    piVar2[2] = piVar2[2] + -0x28;
    piVar2[6] = local_10;
    if (0 < local_10) {
      iVar9 = 0x28;
      do {
        *(undefined2 *)(iVar9 + 0x1c + piVar2[2]) = 0x80;
        *(int *)(iVar9 + piVar2[2]) = iVar12;
        local_10 = local_10 + -1;
        iVar9 = iVar9 + 0x28;
      } while (local_10 != 0);
    }
  }
  piVar2[0x18] = piVar2[0x18] ^ ((uint)*(byte *)(param_2 + 0x1d4) ^ piVar2[0x18]) & 3;
  piVar2[0x15] = -1;
  piVar2[0x16] = 0;
  *(undefined2 *)(piVar2 + 0x17) = 0xff02;
  piVar2[0xc] = -0x420df25d;
  piVar2[0x19] = 0;
  piVar2[0x14] = 1;
  piVar2[0x1c] = 0;
  piVar2[0x22] = 0;
  piVar2[0x23] = 0;
  return;
}


/* FUN_00574570 @ 00574570  kind=lib  attributed-by=lib-island  size=138 */

undefined4 FUN_00574570(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  if ((*(ushort *)((int)param_1 + 0x1c) & 0x2460) != 0) {
    FUN_00574d80(param_1);
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(ushort *)((int)param_1 + 0x1c) = *(ushort *)((int)param_1 + 0x1c) & 0xfbff;
  if (((*(ushort *)((int)param_1 + 0x1c) & 0x12) != 0) &&
     ((*(ushort *)((int)param_2 + 0x1c) & 0x800) == 0)) {
    *(ushort *)((int)param_1 + 0x1c) = *(ushort *)((int)param_1 + 0x1c) | 0x1000;
    uVar1 = FUN_00574af0(param_1);
    return uVar1;
  }
  return 0;
}


/* FUN_00574600 @ 00574600  kind=lib  attributed-by=lib-island  size=97 */

undefined4 FUN_00574600(int param_1)

{
  int iVar1;
  
  if ((*(ushort *)(param_1 + 0x1c) & 0x4000) != 0) {
    iVar1 = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x18);
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    iVar1 = FUN_005748c0(param_1,iVar1,1);
    if (iVar1 != 0) {
      return 7;
    }
    memset((void *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x18)),0,*(size_t *)(param_1 + 0x10))
    ;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x10);
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xbdff;
  }
  return 0;
}


/* FUN_00574670 @ 00574670  kind=lib  attributed-by=lib-island  size=156 */

undefined4 FUN_00574670(undefined8 *param_1,int param_2)

{
  code *pcVar1;
  int local_44 [2];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined8 local_1c;
  undefined8 *local_14;
  undefined4 local_c;
  
  if (param_2 == 0) {
    return 0;
  }
  pcVar1 = *(code **)(param_2 + 0x14);
  if (pcVar1 != (code *)0x0) {
    memset(local_44,0,0x40);
    uStack_20 = 1;
    local_3c = *(undefined4 *)param_1;
    local_14 = param_1;
    local_44[0] = param_2;
    (*pcVar1)(local_44);
    FUN_005521a0(*(undefined4 *)param_1,*(undefined4 *)((int)param_1 + 0x24));
    *param_1 = CONCAT44(uStack_38,local_3c);
    param_1[1] = local_34;
    param_1[2] = local_2c;
    param_1[3] = CONCAT26(uStack_1e,CONCAT24(uStack_20,local_24));
    param_1[4] = local_1c;
    return local_c;
  }
  return 0;
}


/* FUN_00574710 @ 00574710  kind=lib  attributed-by=lib-island  size=420 */

int FUN_00574710(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int local_c;
  int local_8;
  
  local_c = 0;
  if (param_4 == 0) {
    local_8 = 0;
    iVar2 = 0;
    if (*(char *)(param_1 + 0x5b) == '\x01') {
      iVar2 = *(int *)(param_1 + 0x88 + *(short *)(param_1 + 0x5e) * 4);
      if (*(short *)(param_1 + 0x42) == 0) {
        uVar3 = (uint)*(ushort *)(param_1 + 0x60 + *(short *)(param_1 + 0x5e) * 2);
        FUN_0052eda0(iVar2,(uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar2 + 0x40) + uVar3 * 2),
                                           *(undefined1 *)(*(int *)(iVar2 + 0x40) + 1 + uVar3 * 2))
                                 & *(ushort *)(iVar2 + 0x12)) + *(int *)(iVar2 + 0x38),
                     param_1 + 0x28);
      }
      if (*(char *)(iVar2 + 2) == '\0') {
        local_8 = *(int *)(param_1 + 0x28);
      }
      else {
        local_8 = 0;
      }
      iVar2 = (uint)*(ushort *)(param_1 + 0x3e) - local_8;
      local_8 = local_8 + (uint)*(ushort *)(param_1 + 0x3c) + *(int *)(param_1 + 0x30);
    }
  }
  else {
    local_8 = FUN_0054dce0(param_1,&local_c);
    iVar2 = local_c;
  }
  if ((param_2 + param_3 <= iVar2) && ((*(ushort *)(param_5 + 7) & 0x400) == 0)) {
    if ((*(ushort *)(param_5 + 7) & 0x2460) != 0) {
      FUN_00574d80(param_5);
    }
    FUN_005521a0(*param_5,param_5[9]);
    param_5[1] = local_8 + param_2;
    param_5[6] = param_3;
    param_5[9] = 0;
    param_5[8] = 0;
    *(undefined2 *)(param_5 + 7) = 0x1010;
    return 0;
  }
  iVar2 = FUN_005748c0(param_5,param_3 + 2,0);
  if (iVar2 == 0) {
    param_5[7] = 0x40610;
    if (param_4 == 0) {
      uVar1 = param_5[1];
      if (*(byte *)(param_1 + 0x5b) == 0) {
        param_4 = 4;
      }
      else if ((*(byte *)(param_1 + 0x5b) < 2) || (param_4 = FUN_0052eee0(param_1), param_4 == 0)) {
        param_4 = FUN_00528920(param_1,param_2,param_3,uVar1,0);
      }
    }
    else {
      param_4 = FUN_00528920(param_1,param_2,param_3,param_5[1],0);
    }
    *(undefined1 *)(param_3 + param_5[1]) = 0;
    *(undefined1 *)(param_5[1] + 1 + param_3) = 0;
    if (param_4 != 0) {
      FUN_00574d40(param_5);
      param_5[6] = param_3;
      return param_4;
    }
    iVar2 = 0;
  }
  param_5[6] = param_3;
  return iVar2;
}


/* FUN_005748c0 @ 005748c0  kind=lib  attributed-by=lib-island  size=277 */

undefined4 FUN_005748c0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = *param_1;
  if (param_2 < 0x20) {
    param_2 = 0x20;
  }
  uVar2 = param_1[9];
  if ((((iVar4 == 0) || (uVar2 == 0)) || (uVar2 < *(uint *)(iVar4 + 0x104))) ||
     (*(uint *)(iVar4 + 0x108) <= uVar2)) {
    uVar2 = (*DAT_00766608._4_4_)(uVar2);
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0xe8);
  }
  if ((int)uVar2 < param_2) {
    if (param_3 != 0) {
      iVar4 = param_1[1];
      if (iVar4 == param_1[9]) {
        iVar1 = *param_1;
        iVar3 = FUN_00552390(iVar1,iVar4,param_2);
        if (iVar3 == 0) {
          FUN_005521a0(iVar1,iVar4);
        }
        param_1[9] = iVar3;
        param_1[1] = iVar3;
        param_3 = 0;
        goto LAB_00574962;
      }
    }
    FUN_005521a0(*param_1,param_1[9]);
    iVar4 = FUN_00552230(*param_1,param_2);
    param_1[9] = iVar4;
  }
LAB_00574962:
  _Src = (void *)param_1[1];
  if (((_Src != (void *)0x0) && (param_3 != 0)) &&
     ((_Dst = (void *)param_1[9], _Dst != (void *)0x0 && (_Src != _Dst)))) {
    memcpy(_Dst,_Src,param_1[6]);
  }
  if (((*(ushort *)(param_1 + 7) & 0x400) != 0) && ((code *)param_1[8] != (code *)0x0)) {
    (*(code *)param_1[8])(param_1[1]);
  }
  iVar4 = param_1[9];
  param_1[1] = iVar4;
  if (iVar4 == 0) {
    *(undefined2 *)(param_1 + 7) = 1;
  }
  else {
    *(ushort *)(param_1 + 7) = *(ushort *)(param_1 + 7) & 0xe7ff;
  }
  param_1[8] = 0;
  uVar5 = 7;
  if (iVar4 != 0) {
    uVar5 = 0;
  }
  return uVar5;
}


/* FUN_005749e0 @ 005749e0  kind=lib  attributed-by=lib-island  size=137 */

int FUN_005749e0(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined1 uVar4;
  
  if (*(int *)(param_1 + 0x18) < 2) {
    return 0;
  }
  cVar1 = **(char **)(param_1 + 4);
  cVar2 = (*(char **)(param_1 + 4))[1];
  if (cVar1 == -2) {
    if (cVar2 != -1) {
      return 0;
    }
    uVar4 = 3;
  }
  else {
    if (cVar1 != -1) {
      return 0;
    }
    if (cVar2 != -2) {
      return 0;
    }
    uVar4 = 2;
  }
  iVar3 = FUN_00574af0(param_1);
  if (iVar3 == 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -2;
    memmove(*(void **)(param_1 + 4),(void *)((int)*(void **)(param_1 + 4) + 2),
            *(size_t *)(param_1 + 0x18));
    *(undefined1 *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 4)) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x18) + 1 + *(int *)(param_1 + 4)) = 0;
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | 0x200;
    *(undefined1 *)(param_1 + 0x1f) = uVar4;
  }
  return iVar3;
}


/* FUN_00574a70 @ 00574a70  kind=lib  attributed-by=lib-island  size=127 */

undefined4 FUN_00574a70(int param_1)

{
  ushort uVar1;
  undefined8 local_c;
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 8) == 0) {
      local_c = 0;
      if ((uVar1 & 0x12) != 0) {
        FUN_0054a9a0(*(undefined4 *)(param_1 + 4),&local_c,*(undefined4 *)(param_1 + 0x18),
                     *(undefined1 *)(param_1 + 0x1f));
      }
    }
    else {
      local_c = FUN_00534710(*(undefined8 *)(param_1 + 8));
    }
  }
  else {
    local_c = *(undefined8 *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = (int)local_c;
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xbe04 | 4;
  *(int *)(param_1 + 0x14) = (int)((ulonglong)local_c >> 0x20);
  return 0;
}


/* FUN_00574af0 @ 00574af0  kind=lib  attributed-by=lib-island  size=106 */

undefined4 FUN_00574af0(int param_1)

{
  int iVar1;
  
  if ((*(ushort *)(param_1 + 0x1c) & 0x4000) != 0) {
    FUN_00574600(param_1);
  }
  if (((*(byte *)(param_1 + 0x1c) & 0x12) != 0) &&
     (*(int *)(param_1 + 4) != *(int *)(param_1 + 0x24))) {
    iVar1 = FUN_005748c0(param_1,*(int *)(param_1 + 0x18) + 2,1);
    if (iVar1 != 0) {
      return 7;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 4)) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x18) + 1 + *(int *)(param_1 + 4)) = 0;
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | 0x200;
  }
  return 0;
}


/* FUN_00574b60 @ 00574b60  kind=lib  attributed-by=lib-island  size=138 */

void FUN_00574b60(undefined8 *param_1,undefined8 *param_2)

{
  if ((*(ushort *)((int)param_1 + 0x1c) & 0x2460) != 0) {
    FUN_00574d80(param_1);
  }
  FUN_005521a0(*(undefined4 *)param_1,*(undefined4 *)((int)param_1 + 0x24));
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *(undefined2 *)((int)param_2 + 0x1c) = 1;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((int)param_2 + 0x24) = 0;
  return;
}


/* FUN_00574bf0 @ 00574bf0  kind=lib  attributed-by=lib-island  size=87 */

undefined4 FUN_00574bf0(int param_1)

{
  int iVar1;
  
  if (((*(ushort *)(param_1 + 0x1c) & 0x200) == 0) && ((*(ushort *)(param_1 + 0x1c) & 2) != 0)) {
    iVar1 = FUN_005748c0(param_1,*(int *)(param_1 + 0x18) + 2,1);
    if (iVar1 != 0) {
      return 7;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 4)) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x18) + 1 + *(int *)(param_1 + 4)) = 0;
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | 0x200;
  }
  return 0;
}


/* FUN_00574c50 @ 00574c50  kind=lib  attributed-by=lib-island  size=126 */

undefined4 FUN_00574c50(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if ((*(byte *)(param_1 + 0x1c) & 0xd) == 0) {
    iVar1 = FUN_0054a9a0(*(undefined4 *)(param_1 + 4),param_1 + 0x10,*(undefined4 *)(param_1 + 0x18)
                         ,*(undefined1 *)(param_1 + 0x1f));
    if (iVar1 == 0) {
      *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xbe04 | 4;
      *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xffed;
      return 0;
    }
    fVar2 = (float10)FUN_005759b0(param_1);
    *(double *)(param_1 + 8) = (double)fVar2;
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xbe08 | 8;
    FUN_00573cb0(param_1);
  }
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xffed;
  return 0;
}


/* FUN_00574cd0 @ 00574cd0  kind=lib  attributed-by=lib-island  size=109 */

undefined4 FUN_00574cd0(int param_1)

{
  ushort uVar1;
  double local_c;
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if ((uVar1 & 8) == 0) {
    if ((uVar1 & 4) == 0) {
      local_c = 0.0;
      if ((uVar1 & 0x12) != 0) {
        local_c = 0.0;
        FUN_0054a330(*(undefined4 *)(param_1 + 4),&local_c,*(undefined4 *)(param_1 + 0x18),
                     *(undefined1 *)(param_1 + 0x1f));
      }
    }
    else {
      local_c = (double)*(longlong *)(param_1 + 0x10);
    }
  }
  else {
    local_c = *(double *)(param_1 + 8);
  }
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xbe08 | 8;
  *(double *)(param_1 + 8) = local_c;
  return 0;
}


/* FUN_00574d40 @ 00574d40  kind=lib  attributed-by=lib-island  size=64 */

void FUN_00574d40(undefined4 *param_1)

{
  if ((*(ushort *)(param_1 + 7) & 0x2460) != 0) {
    FUN_00574d80(param_1);
  }
  FUN_005521a0(*param_1,param_1[9]);
  param_1[1] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  return;
}


/* FUN_00574d80 @ 00574d80  kind=lib  attributed-by=lib-island  size=105 */

void FUN_00574d80(int param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if ((uVar1 & 0x2000) != 0) {
    FUN_00574670(param_1,*(undefined4 *)(param_1 + 0x10));
    FUN_00574d40(param_1);
    return;
  }
  if (((uVar1 & 0x400) != 0) && (*(code **)(param_1 + 0x20) != (code *)0x0)) {
    (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0x20) = 0;
    return;
  }
  if ((uVar1 & 0x20) != 0) {
    FUN_005644e0(*(undefined4 *)(param_1 + 0x10));
    return;
  }
  if ((uVar1 & 0x40) != 0) {
    FUN_00574f20(param_1);
  }
  return;
}


/* FUN_00574df0 @ 00574df0  kind=lib  attributed-by=lib-island  size=200 */

/* WARNING: Removing unreachable block (ram,0x00574e1e) */
/* WARNING: Removing unreachable block (ram,0x00574e24) */
/* WARNING: Removing unreachable block (ram,0x00574e38) */
/* WARNING: Removing unreachable block (ram,0x00574e3e) */
/* WARNING: Removing unreachable block (ram,0x00574e49) */

void FUN_00574df0(undefined4 *param_1,undefined8 param_2)

{
  if ((*(ushort *)(param_1 + 7) & 0x2460) != 0) {
    FUN_00574d80(param_1);
  }
  FUN_005521a0(*param_1,param_1[9]);
  param_1[1] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 2) = param_2;
  *(undefined1 *)((int)param_1 + 0x1e) = 2;
  *(undefined2 *)(param_1 + 7) = 8;
  return;
}


/* FUN_00574ec0 @ 00574ec0  kind=lib  attributed-by=lib-island  size=89 */

void FUN_00574ec0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(ushort *)(param_1 + 7) & 0x2460) != 0) {
    FUN_00574d80(param_1);
  }
  FUN_005521a0(*param_1,param_1[9]);
  param_1[4] = param_2;
  param_1[5] = param_3;
  param_1[1] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 7) = 4;
  *(undefined1 *)((int)param_1 + 0x1e) = 1;
  return;
}


/* FUN_00574f20 @ 00574f20  kind=lib  attributed-by=lib-island  size=77 */

void FUN_00574f20(int param_1)

{
  int *piVar1;
  
  if ((*(byte *)(param_1 + 0x1c) & 0x40) != 0) {
    piVar1 = *(int **)(param_1 + 0x10);
    piVar1[1] = *(int *)(*piVar1 + 0xa4);
    *(int **)(*piVar1 + 0xa4) = piVar1;
  }
  if ((*(byte *)(param_1 + 0x1c) & 0x20) != 0) {
    FUN_005644e0(*(undefined4 *)(param_1 + 0x10));
  }
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xbe01 | 1;
  *(undefined1 *)(param_1 + 0x1e) = 5;
  return;
}


/* FUN_00574f70 @ 00574f70  kind=lib  attributed-by=lib-island  size=204 */

void FUN_00574f70(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  if ((*(ushort *)(param_1 + 7) & 0x2460) != 0) {
    FUN_00574d80(param_1);
  }
  FUN_005521a0(*param_1,param_1[9]);
  param_1[1] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  uVar3 = FUN_00552230(iVar1,0x40);
  param_1[9] = uVar3;
  if (*(char *)(iVar1 + 0x38) != '\0') {
    *(undefined2 *)(param_1 + 7) = 1;
    return;
  }
  if (((uVar3 == 0) || (uVar3 < *(uint *)(iVar1 + 0x104))) || (*(uint *)(iVar1 + 0x108) <= uVar3)) {
    uVar3 = (*DAT_00766608._4_4_)(uVar3);
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar1 + 0xe8);
  }
  puVar2 = (undefined4 *)param_1[9];
  *(short *)(puVar2 + 6) = (short)(uVar3 - 0x20 >> 4);
  puVar2[1] = iVar1;
  *puVar2 = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[5] = 0;
  puVar2[4] = puVar2 + 8;
  *(undefined2 *)((int)puVar2 + 0x1a) = 1;
  param_1[4] = (int)puVar2;
  *(undefined2 *)(param_1 + 7) = 0x20;
  return;
}


/* FUN_00575040 @ 00575040  kind=lib  attributed-by=lib-island  size=504 */

undefined4 FUN_00575040(int *param_1,void *param_2,size_t param_3,char param_4,code *param_5)

{
  int *piVar1;
  ushort uVar2;
  size_t _Size;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  
  if (param_2 == (void *)0x0) {
    if ((*(byte *)(param_1 + 7) & 0x40) != 0) {
      piVar1 = (int *)param_1[4];
      piVar1[1] = *(int *)(*piVar1 + 0xa4);
      *(int **)(*piVar1 + 0xa4) = piVar1;
    }
    if ((*(byte *)(param_1 + 7) & 0x20) != 0) {
      FUN_005644e0(param_1[4]);
    }
    *(ushort *)(param_1 + 7) = *(ushort *)(param_1 + 7) & 0xbe01 | 1;
    *(undefined1 *)((int)param_1 + 0x1e) = 5;
    return 0;
  }
  if (*param_1 == 0) {
    iVar7 = 1000000000;
  }
  else {
    iVar7 = *(int *)(*param_1 + 0x50);
  }
  uVar6 = 2;
  if (param_4 == '\0') {
    uVar6 = 0x10;
  }
  if ((int)param_3 < 0) {
    param_3 = 0;
    if (param_4 == '\x01') {
      if (-1 < iVar7) {
        do {
          if (*(char *)(param_3 + (int)param_2) == '\0') break;
          param_3 = param_3 + 1;
        } while ((int)param_3 <= iVar7);
      }
    }
    else if (-1 < iVar7) {
      do {
        if (*(char *)(param_3 + 1 + (int)param_2) == '\0' &&
            *(char *)(param_3 + (int)param_2) == '\0') break;
        param_3 = param_3 + 2;
      } while ((int)param_3 <= iVar7);
    }
    uVar6 = uVar6 | 0x200;
  }
  if (param_5 == (code *)0xffffffff) {
    _Size = param_3;
    if ((uVar6 & 0x200) != 0) {
      _Size = (param_4 != '\x01') + 1 + param_3;
    }
    if (iVar7 < (int)param_3) {
      return 0x12;
    }
    iVar3 = FUN_005748c0(param_1,_Size,0);
    if (iVar3 != 0) {
      return 7;
    }
    memcpy((void *)param_1[1],param_2,_Size);
  }
  else {
    if (param_5 == FUN_0055dc20) {
      if ((*(ushort *)(param_1 + 7) & 0x2460) != 0) {
        FUN_00574d80(param_1);
      }
      FUN_005521a0(*param_1,param_1[9]);
      param_1[9] = (int)param_2;
      param_1[8] = 0;
    }
    else {
      if ((*(ushort *)(param_1 + 7) & 0x2460) != 0) {
        FUN_00574d80(param_1);
      }
      FUN_005521a0(*param_1,param_1[9]);
      param_1[8] = (int)param_5;
      uVar2 = 0x400;
      if (param_5 == (code *)0x0) {
        uVar2 = 0x800;
      }
      param_1[9] = 0;
      uVar6 = uVar6 | uVar2;
    }
    param_1[1] = (int)param_2;
  }
  *(ushort *)(param_1 + 7) = uVar6;
  param_1[6] = param_3;
  cVar5 = '\x01';
  if (param_4 != '\0') {
    cVar5 = param_4;
  }
  *(char *)((int)param_1 + 0x1f) = cVar5;
  *(char *)((int)param_1 + 0x1e) = (param_4 == '\0') + '\x03';
  if ((cVar5 != '\x01') && (iVar3 = FUN_005749e0(param_1), iVar3 != 0)) {
    return 7;
  }
  uVar4 = 0;
  if (iVar7 < (int)param_3) {
    uVar4 = 0x12;
  }
  return uVar4;
}


/* FUN_005752a0 @ 005752a0  kind=lib  attributed-by=lib-island  size=109 */

void FUN_005752a0(undefined8 *param_1,undefined8 *param_2,ushort param_3)

{
  if ((*(ushort *)((int)param_1 + 0x1c) & 0x2460) != 0) {
    FUN_00574d80(param_1);
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = 0;
  if ((*(ushort *)((int)param_2 + 0x1c) & 0x800) == 0) {
    *(ushort *)((int)param_1 + 0x1c) = *(ushort *)((int)param_1 + 0x1c) & 0xe3ff | param_3;
  }
  return;
}


/* FUN_00575310 @ 00575310  kind=lib  attributed-by=lib-island  size=53 */

void FUN_00575310(int param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x1e) = 5;
    return;
  }
  if ((uVar1 & 4) != 0) {
    *(undefined1 *)(param_1 + 0x1e) = 1;
    return;
  }
  if ((uVar1 & 8) != 0) {
    *(undefined1 *)(param_1 + 0x1e) = 2;
    return;
  }
  *(char *)(param_1 + 0x1e) = '\x04' - ((uVar1 & 2) != 0);
  return;
}


/* FUN_00575350 @ 00575350  kind=lib  attributed-by=lib-island  size=160 */

undefined4 FUN_00575350(int param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  uVar2 = *(ushort *)(param_1 + 0x1c);
  iVar3 = FUN_005748c0(param_1,0x20,0);
  if (iVar3 == 0) {
    if ((uVar2 & 4) == 0) {
      uVar7 = *(undefined8 *)(param_1 + 8);
      pcVar6 = "%!.15g";
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      pcVar6 = "%lld";
    }
    FUN_005240c0(0x20,*(undefined4 *)(param_1 + 4),pcVar6,uVar7);
    pcVar6 = *(char **)(param_1 + 4);
    uVar5 = 0;
    if (pcVar6 != (char *)0x0) {
      cVar1 = *pcVar6;
      pcVar4 = pcVar6;
      while (cVar1 != '\0') {
        pcVar4 = pcVar4 + 1;
        cVar1 = *pcVar4;
      }
      uVar5 = (int)pcVar4 - (int)pcVar6 & 0x3fffffff;
    }
    *(uint *)(param_1 + 0x18) = uVar5;
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | 0x202;
    *(undefined1 *)(param_1 + 0x1f) = 1;
    if (((*(byte *)(param_1 + 0x1c) & 2) != 0) && (param_2 != 1)) {
      FUN_00575420(param_1,param_2);
    }
    return 0;
  }
  return 7;
}


/* FUN_005753f0 @ 005753f0  kind=lib  attributed-by=lib-island  size=43 */

bool FUN_005753f0(int *param_1)

{
  int iVar1;
  
  if ((*(ushort *)(param_1 + 7) & 0x12) != 0) {
    iVar1 = param_1[6];
    if ((*(ushort *)(param_1 + 7) & 0x4000) != 0) {
      iVar1 = iVar1 + param_1[4];
    }
    return *(int *)(*param_1 + 0x50) < iVar1;
  }
  return false;
}


/* FUN_00575420 @ 00575420  kind=lib  attributed-by=lib-island  size=1215 */

undefined4 FUN_00575420(undefined4 *param_1,char param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  undefined1 *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  undefined1 *puVar12;
  ushort *puVar13;
  uint local_8;
  
  if (*(char *)((int)param_1 + 0x1f) == '\x01') {
    if (param_2 != '\x01') {
      iVar3 = param_1[6] * 2 + 2;
      goto LAB_005754a0;
    }
  }
  else if (param_2 != '\x01') {
    iVar3 = FUN_00574af0(param_1);
    if (iVar3 != 0) {
      return 7;
    }
    puVar9 = (undefined1 *)param_1[1];
    puVar12 = puVar9 + (param_1[6] & 0xfffffffe);
    for (; puVar9 < puVar12; puVar9 = puVar9 + 2) {
      uVar1 = *puVar9;
      *puVar9 = puVar9[1];
      puVar9[1] = uVar1;
    }
    *(char *)((int)param_1 + 0x1f) = param_2;
    return 0;
  }
  param_1[6] = param_1[6] & 0xfffffffe;
  iVar3 = param_1[6] * 2 + 1;
LAB_005754a0:
  puVar10 = (ushort *)param_1[1];
  puVar13 = (ushort *)(param_1[6] + (int)puVar10);
  pbVar4 = (byte *)FUN_00552230(*param_1,iVar3);
  if (pbVar4 == (byte *)0x0) {
    return 7;
  }
  if (*(char *)((int)param_1 + 0x1f) == '\x01') {
    pbVar5 = pbVar4;
    if (param_2 == '\x02') {
      while (puVar10 < puVar13) {
        local_8 = (uint)(byte)*puVar10;
        puVar10 = (ushort *)((int)puVar10 + 1);
        if (local_8 < 0xc0) {
LAB_0057554b:
          bVar7 = (byte)(local_8 >> 8);
          if (local_8 < 0x10000) {
            *pbVar5 = (byte)local_8;
            pbVar5[1] = bVar7;
            pbVar5 = pbVar5 + 2;
          }
          else {
            bVar6 = (byte)(local_8 - 0x10000 >> 10);
            *pbVar5 = ((byte)(local_8 >> 10) ^ bVar6) & 0x3f ^ bVar6;
            pbVar5[1] = ((byte)(local_8 - 0x10000 >> 0x12) & 3) - 0x28;
            pbVar5[2] = (byte)local_8;
            pbVar5[3] = (bVar7 & 3) - 0x24;
            pbVar5 = pbVar5 + 4;
          }
        }
        else {
          local_8 = (uint)(byte)(&DAT_007151b0)[local_8];
          for (; (puVar10 != puVar13 && (((byte)*puVar10 & 0xc0) == 0x80));
              puVar10 = (ushort *)((int)puVar10 + 1)) {
            local_8 = local_8 * 0x40 + ((byte)*puVar10 & 0x3f);
          }
          if (((0x7f < local_8) && ((local_8 & 0xfffff800) != 0xd800)) &&
             ((local_8 & 0xfffffffe) != 0xfffe)) goto LAB_0057554b;
          *pbVar5 = 0xfd;
          pbVar5[1] = 0xff;
          pbVar5 = pbVar5 + 2;
        }
      }
    }
    else {
      while (puVar10 < puVar13) {
        uVar8 = (uint)(byte)*puVar10;
        puVar10 = (ushort *)((int)puVar10 + 1);
        if (uVar8 < 0xc0) {
LAB_0057561c:
          bVar7 = (byte)(uVar8 >> 8);
          if (uVar8 < 0x10000) {
            *pbVar5 = bVar7;
            pbVar5[1] = (byte)uVar8;
            pbVar5 = pbVar5 + 2;
          }
          else {
            *pbVar5 = ((byte)(uVar8 - 0x10000 >> 0x12) & 3) - 0x28;
            bVar6 = (byte)(uVar8 - 0x10000 >> 10);
            pbVar5[1] = ((byte)(uVar8 >> 10) ^ bVar6) & 0x3f ^ bVar6;
            pbVar5[2] = (bVar7 & 3) - 0x24;
            pbVar5[3] = (byte)uVar8;
            pbVar5 = pbVar5 + 4;
          }
        }
        else {
          uVar8 = (uint)(byte)(&DAT_007151b0)[uVar8];
          for (; (puVar10 != puVar13 && (((byte)*puVar10 & 0xc0) == 0x80));
              puVar10 = (ushort *)((int)puVar10 + 1)) {
            uVar8 = uVar8 * 0x40 + ((byte)*puVar10 & 0x3f);
          }
          if (((0x7f < uVar8) && ((uVar8 & 0xfffff800) != 0xd800)) &&
             ((uVar8 & 0xfffffffe) != 0xfffe)) goto LAB_0057561c;
          *pbVar5 = 0xff;
          pbVar5[1] = 0xfd;
          pbVar5 = pbVar5 + 2;
        }
      }
    }
    param_1[6] = (int)pbVar5 - (int)pbVar4;
    *pbVar5 = 0;
    pbVar5 = pbVar5 + 1;
  }
  else {
    pbVar5 = pbVar4;
    if (*(char *)((int)param_1 + 0x1f) == '\x02') {
      while (puVar10 < puVar13) {
        uVar8 = (uint)*puVar10;
        puVar11 = puVar10 + 1;
        if ((uVar8 - 0xd800 < 0x800) && (puVar11 < puVar13)) {
          uVar2 = *puVar11;
          puVar11 = puVar10 + 2;
          uVar8 = ((uVar8 & 0x3f) + 0x40 + (uVar8 & 0x3c0)) * 0x400 + (uVar2 & 0x3ff);
        }
        bVar7 = (byte)uVar8;
        puVar10 = puVar11;
        if (uVar8 < 0x80) {
          *pbVar5 = bVar7;
          pbVar5 = pbVar5 + 1;
        }
        else if (uVar8 < 0x800) {
          *pbVar5 = ((byte)(uVar8 >> 6) & 0x1f) - 0x40;
          pbVar5[1] = (bVar7 & 0x3f) + 0x80;
          pbVar5 = pbVar5 + 2;
        }
        else if (uVar8 < 0x10000) {
          *pbVar5 = ((byte)(uVar8 >> 0xc) & 0xf) - 0x20;
          pbVar5[1] = ((byte)(uVar8 >> 6) & 0x3f) + 0x80;
          pbVar5[2] = (bVar7 & 0x3f) + 0x80;
          pbVar5 = pbVar5 + 3;
        }
        else {
          *pbVar5 = (char)(uVar8 >> 0x12) - 0x10;
          pbVar5[1] = ((byte)(uVar8 >> 0xc) & 0x3f) + 0x80;
          pbVar5[2] = ((byte)(uVar8 >> 6) & 0x3f) + 0x80;
          pbVar5[3] = (bVar7 & 0x3f) + 0x80;
          pbVar5 = pbVar5 + 4;
        }
      }
    }
    else {
      while (puVar10 < puVar13) {
        uVar8 = (uint)CONCAT11((byte)*puVar10,*(byte *)((int)puVar10 + 1));
        puVar11 = puVar10 + 1;
        if ((uVar8 - 0xd800 < 0x800) && (puVar11 < puVar13)) {
          uVar2 = *puVar11;
          puVar11 = puVar10 + 2;
          uVar8 = ((uVar8 & 0x3f) + 0x40 + (uVar8 & 0x3c0)) * 0x400 +
                  (CONCAT11((byte)uVar2,*(byte *)((int)puVar10 + 3)) & 0x3ff);
        }
        bVar7 = (byte)uVar8;
        puVar10 = puVar11;
        if (uVar8 < 0x80) {
          *pbVar5 = bVar7;
          pbVar5 = pbVar5 + 1;
        }
        else if (uVar8 < 0x800) {
          *pbVar5 = ((byte)(uVar8 >> 6) & 0x1f) - 0x40;
          pbVar5[1] = (bVar7 & 0x3f) + 0x80;
          pbVar5 = pbVar5 + 2;
        }
        else if (uVar8 < 0x10000) {
          *pbVar5 = ((byte)(uVar8 >> 0xc) & 0xf) - 0x20;
          pbVar5[1] = ((byte)(uVar8 >> 6) & 0x3f) + 0x80;
          pbVar5[2] = (bVar7 & 0x3f) + 0x80;
          pbVar5 = pbVar5 + 3;
        }
        else {
          *pbVar5 = (char)(uVar8 >> 0x12) - 0x10;
          pbVar5[1] = ((byte)(uVar8 >> 0xc) & 0x3f) + 0x80;
          pbVar5[2] = ((byte)(uVar8 >> 6) & 0x3f) + 0x80;
          pbVar5[3] = (bVar7 & 0x3f) + 0x80;
          pbVar5 = pbVar5 + 4;
        }
      }
    }
    param_1[6] = (int)pbVar5 - (int)pbVar4;
  }
  *pbVar5 = 0;
  if ((*(ushort *)(param_1 + 7) & 0x2460) != 0) {
    FUN_00574d80(param_1);
  }
  FUN_005521a0(*param_1,param_1[9]);
  *(char *)((int)param_1 + 0x1f) = param_2;
  param_1[1] = pbVar4;
  param_1[9] = pbVar4;
  *(ushort *)(param_1 + 7) = *(ushort *)(param_1 + 7) & 0xe7ff | 0x600;
  param_1[8] = 0;
  return 0;
}


/* FUN_005758f0 @ 005758f0  kind=lib  attributed-by=lib-island  size=184 */

int FUN_005758f0(int param_1,int *param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != (int *)0x0) {
    iVar6 = 0;
    if (0 < *(short *)(param_1 + 0x4e)) {
      puVar7 = *(undefined4 **)(param_1 + 0x48);
      do {
        piVar1 = (int *)*puVar7;
        piVar2 = piVar1;
        piVar4 = param_2;
        uVar5 = param_3;
        if (piVar1 != (int *)0x0) {
          while (uVar3 = uVar5 - 4, 3 < uVar5) {
            if (*piVar2 != *piVar4) goto LAB_0057594b;
            piVar2 = piVar2 + 1;
            piVar4 = piVar4 + 1;
            uVar5 = uVar3;
          }
          if (uVar3 != 0xfffffffc) {
LAB_0057594b:
            if (((char)*piVar2 != (char)*piVar4) ||
               ((uVar3 != 0xfffffffd &&
                ((*(char *)((int)piVar2 + 1) != *(char *)((int)piVar4 + 1) ||
                 ((uVar3 != 0xfffffffe &&
                  ((*(char *)((int)piVar2 + 2) != *(char *)((int)piVar4 + 2) ||
                   ((uVar3 != 0xffffffff &&
                    (*(char *)((int)piVar2 + 3) != *(char *)((int)piVar4 + 3)))))))))))))
            goto LAB_00575987;
          }
          if (*(char *)((int)piVar1 + param_3) == '\0') {
            return iVar6 + 1;
          }
        }
LAB_00575987:
        iVar6 = iVar6 + 1;
        puVar7 = puVar7 + 1;
      } while (iVar6 < *(short *)(param_1 + 0x4e));
    }
  }
  return 0;
}


/* FUN_005759b0 @ 005759b0  kind=lib  attributed-by=lib-island  size=89 */

float10 FUN_005759b0(int param_1)

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
  if ((uVar1 & 0x12) != 0) {
    local_c = 0.0;
    FUN_0054a330(*(undefined4 *)(param_1 + 4),&local_c,*(undefined4 *)(param_1 + 0x18),
                 *(undefined1 *)(param_1 + 0x1f));
    return (float10)local_c;
  }
  return (float10)0;
}


/* FUN_00575a10 @ 00575a10  kind=lib  attributed-by=lib-island  size=420 */

int FUN_00575a10(int param_1,byte *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_48 [4];
  int local_38;
  int local_34;
  undefined1 local_29;
  uint local_20;
  uint local_1c;
  undefined4 *local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  piVar1 = param_3;
  local_18 = (undefined4 *)*param_3;
  local_29 = *(undefined1 *)(local_18 + 1);
  local_48[0] = *local_18;
  iVar6 = 0;
  if (*param_2 < 0x80) {
    local_8 = (uint)*param_2;
    local_14 = 1;
  }
  else {
    local_14 = FUN_0055aaf0(param_2,&local_20);
    local_8 = local_20;
    local_14 = local_14 & 0xff;
  }
  local_20 = (uint)*(ushort *)((int)local_18 + 6);
  local_c = local_8;
  if (local_14 < local_8) {
    param_3 = local_18 + 3;
    local_10 = 0;
    do {
      if ((int)(uint)*(ushort *)(piVar1 + 1) <= iVar6) break;
      if (param_2[local_14] < 0x80) {
        local_1c = (uint)param_2[local_14];
        uVar3 = 1;
      }
      else {
        uVar3 = FUN_0055aaf0(param_2 + local_14,&local_1c);
        uVar3 = uVar3 & 0xff;
      }
      uVar2 = local_c;
      local_14 = local_14 + uVar3;
      if (param_1 <= (int)local_c) {
        if (local_1c < 0xc) {
          uVar3 = (uint)(byte)(&DAT_0071312c)[local_1c];
        }
        else {
          uVar3 = local_1c - 0xc >> 1;
        }
        if (uVar3 != 0) break;
      }
      iVar4 = FUN_00575e30(param_2 + local_c,local_1c,local_48);
      local_c = uVar2 + iVar4;
      if (iVar6 < (int)local_20) {
        uVar5 = *param_3;
      }
      else {
        uVar5 = 0;
      }
      iVar4 = FUN_0055ddd0(local_48,piVar1[4] + local_10,uVar5);
      if (iVar4 != 0) {
        if ((iVar6 < (int)local_20) && (*(char *)(iVar6 + local_18[2]) != '\0')) {
          iVar4 = -iVar4;
        }
        if ((*(byte *)((int)piVar1 + 6) & 4) == 0) {
          return iVar4;
        }
        if (iVar6 != *(ushort *)(piVar1 + 1) - 1) {
          return iVar4;
        }
        piVar1[2] = local_38;
        piVar1[3] = local_34;
        *(byte *)((int)piVar1 + 6) = *(byte *)((int)piVar1 + 6) & 0xfb;
        return iVar4;
      }
      param_3 = param_3 + 1;
      local_10 = local_10 + 0x28;
      iVar6 = iVar6 + 1;
    } while (local_14 < local_8);
  }
  iVar6 = 0;
  if ((*(byte *)((int)piVar1 + 6) & 1) == 0) {
    if (((*(byte *)((int)piVar1 + 6) & 2) == 0) && (local_14 < local_8)) {
      iVar6 = 1;
    }
    return iVar6;
  }
  return -1;
}


/* FUN_00575bc0 @ 00575bc0  kind=lib  attributed-by=lib-island  size=213 */

void FUN_00575bc0(undefined4 *param_1,int param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  uint local_c;
  undefined4 *local_8;
  
  uVar2 = param_4;
  local_8 = *(undefined4 **)(param_4 + 0x10);
  *(undefined1 *)(param_4 + 6) = 0;
  if (*param_3 < 0x80) {
    uVar5 = 1;
    uVar6 = (uint)*param_3;
  }
  else {
    uVar5 = FUN_0055aaf0(param_3,&param_4);
    uVar5 = uVar5 & 0xff;
    uVar6 = param_4;
  }
  uVar7 = 0;
  for (param_4 = uVar6;
      ((uVar5 < uVar6 && (uVar7 < *(ushort *)(uVar2 + 4))) && ((int)param_4 <= param_2));
      param_4 = param_4 + iVar4) {
    bVar1 = param_3[uVar5];
    if (bVar1 < 0x80) {
      local_c = (uint)bVar1;
      uVar3 = 1;
    }
    else {
      uVar3 = FUN_0055aaf0(param_3 + uVar5,&local_c);
      uVar3 = uVar3 & 0xff;
    }
    uVar5 = uVar5 + uVar3;
    *(undefined1 *)((int)local_8 + 0x1f) = *(undefined1 *)(param_1 + 1);
    *local_8 = *param_1;
    local_8[9] = 0;
    iVar4 = FUN_00575e30(param_3 + param_4,local_c,local_8);
    local_8 = local_8 + 10;
    uVar7 = uVar7 + 1;
  }
  *(ushort *)(uVar2 + 4) = uVar7;
  return;
}


/* FUN_00575ca0 @ 00575ca0  kind=lib  attributed-by=lib-island  size=356 */

uint FUN_00575ca0(int *param_1)

{
  int iVar1;
  int *piVar2;
  void *_Src;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *param_1;
  FUN_00573740(param_1);
  if (param_1[0x15] < 0) {
    if ((param_1[0x16] != 0) && ((*(byte *)(param_1 + 0x18) & 0x20) != 0)) {
      FUN_00553890(iVar1,param_1[0x16],0);
      piVar2 = *(int **)(iVar1 + 0xd4);
      _Src = (void *)param_1[0xd];
      if (piVar2 != (int *)0x0) {
        if (_Src == (void *)0x0) {
          if ((*(byte *)(piVar2 + 7) & 0x40) != 0) {
            piVar3 = (int *)piVar2[4];
            piVar3[1] = *(int *)(*piVar3 + 0xa4);
            *(int **)(*piVar3 + 0xa4) = piVar3;
          }
          if ((*(byte *)(piVar2 + 7) & 0x20) != 0) {
            FUN_005644e0(piVar2[4]);
          }
          *(ushort *)(piVar2 + 7) = *(ushort *)(piVar2 + 7) & 0xbe01 | 1;
          *(undefined1 *)((int)piVar2 + 0x1e) = 5;
        }
        else {
          if (*piVar2 == 0) {
            iVar4 = 1000000000;
          }
          else {
            iVar4 = *(int *)(*piVar2 + 0x50);
          }
          iVar5 = 0;
          if (-1 < iVar4) {
            do {
              if (*(char *)(iVar5 + (int)_Src) == '\0') break;
              iVar5 = iVar5 + 1;
            } while (iVar5 <= iVar4);
          }
          if ((iVar5 <= iVar4) && (iVar4 = FUN_005748c0(piVar2,iVar5 + 1,0), iVar4 == 0)) {
            memcpy((void *)piVar2[1],_Src,iVar5 + 1);
            piVar2[6] = iVar5;
            piVar2[7] = 0x1030202;
          }
        }
      }
      FUN_005521a0(iVar1,param_1[0xd]);
      param_1[0xd] = 0;
    }
  }
  else {
    FUN_00576a80(param_1);
    FUN_005521a0(iVar1,param_1[0xd]);
    param_1[0xd] = 0;
    if ((param_1[0x18] & 0x40U) != 0) {
      param_1[0x18] = param_1[0x18] | 0x20;
    }
  }
  FUN_005521a0(*param_1,param_1[0xd]);
  param_1[0xd] = 0;
  param_1[5] = 0;
  param_1[0xc] = 0x26bceaa5;
  return param_1[0x16] & *(uint *)(iVar1 + 0x30);
}


/* FUN_00575e10 @ 00575e10  kind=lib  attributed-by=lib-island  size=32 */

void FUN_00575e10(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x28) - (param_2 * 4 + 4)) = *(undefined4 *)(param_1 + 0x1c);
  }
  return;
}


/* FUN_00575e30 @ 00575e30  kind=lib  attributed-by=lib-island  size=552 */

uint FUN_00575e30(char *param_1,uint param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int3 iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  int extraout_ECX;
  undefined4 uVar7;
  uint uVar8;
  
  switch(param_2) {
  case 0:
  case 10:
  case 0xb:
    *(undefined2 *)(param_3 + 0x1c) = 1;
    return 0;
  case 1:
    cVar1 = *param_1;
    *(int *)(param_3 + 0x10) = (int)cVar1;
    *(undefined2 *)(param_3 + 0x1c) = 4;
    *(int *)(param_3 + 0x14) = (int)cVar1 >> 0x1f;
    return 1;
  case 2:
    cVar1 = *param_1;
    cVar2 = param_1[1];
    *(int *)(param_3 + 0x10) = (int)CONCAT11(cVar1,cVar2);
    *(undefined2 *)(param_3 + 0x1c) = 4;
    *(int *)(param_3 + 0x14) = (int)CONCAT11(cVar1,cVar2) >> 0x1f;
    return 2;
  case 3:
    iVar6 = (int)CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]);
    *(int *)(param_3 + 0x10) = iVar6;
    *(undefined2 *)(param_3 + 0x1c) = 4;
    *(int *)(param_3 + 0x14) = iVar6 >> 0x1f;
    return 3;
  case 4:
    iVar3 = CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]);
    *(uint *)(param_3 + 0x10) = CONCAT31(iVar3,param_1[3]);
    *(int *)(param_3 + 0x14) = (int)iVar3 >> 0x17;
    *(undefined2 *)(param_3 + 0x1c) = 4;
    return 4;
  case 5:
    cVar1 = *param_1;
    cVar2 = param_1[1];
    *(uint *)(param_3 + 0x10) =
         CONCAT31(CONCAT21(CONCAT11(param_1[2],param_1[3]),param_1[4]),param_1[5]);
    *(int *)(param_3 + 0x14) = (int)CONCAT11(cVar1,cVar2);
    *(undefined2 *)(param_3 + 0x1c) = 4;
    return 6;
  case 6:
  case 7:
    break;
  case 8:
  case 9:
    *(uint *)(param_3 + 0x10) = param_2 - 8;
    *(undefined2 *)(param_3 + 0x1c) = 4;
    *(undefined4 *)(param_3 + 0x14) = 0;
    return 0;
  default:
    uVar8 = param_2 - 0xc >> 1;
    *(char **)(param_3 + 4) = param_1;
    *(uint *)(param_3 + 0x18) = uVar8;
    *(undefined4 *)(param_3 + 0x20) = 0;
    uVar4 = 0x1002;
    if ((param_2 & 1) == 0) {
      uVar4 = 0x1010;
    }
    *(undefined2 *)(param_3 + 0x1c) = uVar4;
    return uVar8;
  }
  uVar5 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
  uVar7 = CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]);
  if (param_2 != 6) {
    *(undefined4 *)(param_3 + 8) = uVar7;
    *(undefined4 *)(param_3 + 0xc) = uVar5;
    iVar6 = FUN_0055cec0(*(undefined8 *)(param_3 + 8));
    *(ushort *)(extraout_ECX + 0x1c) = (-(ushort)(iVar6 != 0) & 0xfff9) + 8;
    return 8;
  }
  *(undefined4 *)(param_3 + 0x10) = uVar7;
  *(undefined4 *)(param_3 + 0x14) = uVar5;
  *(undefined2 *)(param_3 + 0x1c) = 4;
  return 8;
}


/* FUN_00576090 @ 00576090  kind=lib  attributed-by=lib-island  size=175 */

uint FUN_00576090(void *param_1,uint param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  size_t _Size;
  
  uVar1 = FUN_00576140(param_3,param_4);
  if (6 < uVar1 - 1) {
    if (uVar1 < 0xc) {
      return 0;
    }
    _Size = *(size_t *)(param_3 + 0x18);
    memcpy(param_1,*(void **)(param_3 + 4),_Size);
    if ((*(ushort *)(param_3 + 0x1c) & 0x4000) != 0) {
      _Size = _Size + *(int *)(param_3 + 0x10);
      if (param_2 < _Size) {
        _Size = param_2;
      }
      memset((void *)(*(int *)(param_3 + 0x18) + (int)param_1),0,_Size - *(int *)(param_3 + 0x18));
    }
    return _Size;
  }
  if (uVar1 == 7) {
    uVar4 = *(uint *)(param_3 + 8);
    uVar3 = *(uint *)(param_3 + 0xc);
  }
  else {
    uVar4 = *(uint *)(param_3 + 0x10);
    uVar3 = *(uint *)(param_3 + 0x14);
    if (0xb < uVar1) {
      uVar1 = uVar1 - 0xc >> 1;
      uVar2 = uVar1;
      goto joined_r0x005760c2;
    }
  }
  uVar1 = (uint)(byte)(&DAT_0071312c)[uVar1];
  uVar2 = uVar1;
joined_r0x005760c2:
  while (uVar1 != 0) {
    uVar1 = uVar1 - 1;
    *(char *)(uVar1 + (int)param_1) = (char)uVar4;
    uVar4 = uVar4 >> 8 | uVar3 << 0x18;
    uVar3 = uVar3 >> 8;
  }
  return uVar2;
}


/* FUN_00576140 @ 00576140  kind=lib  attributed-by=lib-island  size=261 */

int FUN_00576140(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 8) == 0) {
      iVar5 = *(int *)(param_1 + 0x18);
      if ((uVar1 & 0x4000) != 0) {
        iVar5 = iVar5 + *(int *)(param_1 + 0x10);
      }
      return (uVar1 >> 1 & 1) + iVar5 * 2 + 0xc;
    }
    return 7;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0x14);
  uVar4 = uVar3;
  uVar6 = uVar2;
  if (((int)uVar3 < 1) && ((int)uVar3 < 0)) {
    if ((int)uVar3 < -0x7fff) {
      if ((int)uVar3 < -0x8000) {
        return 6;
      }
      if (uVar2 == 0) {
        return 6;
      }
    }
    uVar4 = -(uVar3 + (uVar2 != 0));
    uVar6 = -uVar2;
  }
  if (uVar4 == 0) {
    if (uVar6 < 0x80) {
      if ((((uVar2 & 1) != uVar2) || (uVar3 != 0)) || (iVar5 = uVar6 + 8, param_2 < 4)) {
        iVar5 = 1;
      }
      return iVar5;
    }
    if (uVar6 < 0x8000) {
      return 2;
    }
    if (uVar6 < 0x800000) {
      return 3;
    }
    if (uVar6 < 0x80000000) {
      return 4;
    }
  }
  if (0x7fff < uVar4) {
    return 6;
  }
  return 5;
}


/* FUN_00576250 @ 00576250  kind=lib  attributed-by=lib-island  size=27 */

uint FUN_00576250(uint param_1)

{
  if (0xb < param_1) {
    return param_1 - 0xc >> 1;
  }
  return (uint)(byte)(&DAT_0071312c)[param_1];
}


/* FUN_00576270 @ 00576270  kind=lib  attributed-by=lib-island  size=62 */

undefined4 FUN_00576270(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if (*(char *)(*param_1 + 0x38) != '\0') {
    return 7;
  }
  uVar1 = FUN_00575040(param_1[4] + ((uint)*(ushort *)(param_1 + 0xb) * param_3 + param_2) * 0x28,
                       param_4,0xffffffff,1,param_5);
  return uVar1;
}


/* FUN_005762b0 @ 005762b0  kind=lib  attributed-by=lib-island  size=121 */

void FUN_005762b0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Dst;
  int iVar2;
  
  uVar1 = *param_1;
  FUN_00545650(param_1[4],(uint)*(ushort *)(param_1 + 0xb) * 2);
  FUN_005521a0(uVar1,param_1[4]);
  *(short *)(param_1 + 0xb) = (short)param_2;
  iVar2 = param_2 * 2;
  _Dst = (undefined4 *)FUN_00552230(uVar1,param_2 * 0x50);
  if (_Dst != (undefined4 *)0x0) {
    memset(_Dst,0,param_2 * 0x50);
  }
  param_1[4] = _Dst;
  if (_Dst != (undefined4 *)0x0) {
    for (; 0 < iVar2; iVar2 = iVar2 + -1) {
      *(undefined2 *)(_Dst + 7) = 1;
      *_Dst = *param_1;
      _Dst = _Dst + 10;
    }
  }
  return;
}


/* FUN_00576330 @ 00576330  kind=lib  attributed-by=lib-island  size=45 */

void FUN_00576330(int param_1,int param_2)

{
  if (0x20 < param_2) {
    *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
    return;
  }
  *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << ((char)param_2 - 1U & 0x1f);
  return;
}


/* FUN_00576360 @ 00576360  kind=lib  attributed-by=lib-island  size=201 */

void FUN_00576360(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  void *_Dst;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = *(int *)(param_2 + 0x48);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x24) != 0) {
      local_8 = 0;
      if (0 < *(int *)(iVar1 + 0x14)) {
        local_c = 0;
        do {
          _Dst = (void *)(*(int *)(iVar1 + 0x24) + local_c);
          FUN_005521a0(param_1,*(undefined4 *)((int)_Dst + 0x1c));
          FUN_005521a0(param_1,*(undefined4 *)((int)_Dst + 0x24));
          memset(_Dst,0,0x30);
          local_8 = local_8 + 1;
          local_c = local_c + 0x30;
        } while (local_8 < *(int *)(iVar1 + 0x14));
      }
      FUN_005521a0(param_1,*(undefined4 *)(iVar1 + 0x24));
    }
    piVar2 = *(int **)(iVar1 + 0x2c);
    if (piVar2 != (int *)0x0) {
      if (*piVar2 != 0) {
        (**(code **)(*piVar2 + 4))(piVar2);
        *piVar2 = 0;
      }
      FUN_00524410(piVar2);
    }
    FUN_0057d110(param_1,*(undefined4 *)(iVar1 + 0x30));
    FUN_005521a0(param_1,*(undefined4 *)(iVar1 + 0x34));
    FUN_005521a0(param_1,iVar1);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return;
}


/* FUN_00576430 @ 00576430  kind=lib  attributed-by=lib-island  size=172 */

undefined4 FUN_00576430(int param_1,int param_2,undefined4 *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 uVar7;
  int iVar8;
  
  iVar2 = *(int *)(param_1 + 0x48);
  if (*(int *)(iVar2 + 0x28) == 0) {
    iVar8 = (*(int **)(iVar2 + 0x30))[1];
    iVar5 = **(int **)(iVar2 + 0x30);
  }
  else {
    iVar5 = *(int *)(*(int *)(iVar2 + 0x28) + 4) * 0x30 + *(int *)(iVar2 + 0x24);
    iVar8 = *(int *)(iVar5 + 0x14);
    iVar5 = *(int *)(iVar5 + 0x20);
  }
  iVar2 = *(int *)(iVar2 + 0x34);
  uVar7 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 4);
  iVar4 = *(int *)(param_1 + 8);
  if (iVar5 != 0) {
    FUN_00575bc0(iVar4,iVar8,iVar5,iVar2);
  }
  uVar1 = *(ushort *)(iVar4 + 6);
  iVar8 = 0;
  *(ushort *)(iVar2 + 4) = uVar1;
  if (uVar1 != 0) {
    pbVar6 = (byte *)(*(int *)(iVar2 + 0x10) + 0x1c);
    do {
      if ((*pbVar6 & 1) != 0) {
        *param_3 = 0xffffffff;
        return 0;
      }
      iVar8 = iVar8 + 1;
      pbVar6 = pbVar6 + 0x28;
    } while (iVar8 < (int)(uint)uVar1);
  }
  *(byte *)(iVar2 + 6) = *(byte *)(iVar2 + 6) | 2;
  uVar7 = FUN_00575a10(uVar7,uVar3,iVar2);
  *param_3 = uVar7;
  return 0;
}


/* FUN_005764e0 @ 005764e0  kind=lib  attributed-by=lib-island  size=184 */

undefined4 FUN_005764e0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *_Dst;
  int *piVar3;
  int iVar4;
  
  _Dst = (void *)FUN_00552230(param_1,0x38);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,0x38);
  }
  *(void **)(param_2 + 0x48) = _Dst;
  if (_Dst == (void *)0x0) {
    return 7;
  }
  puVar2 = *(undefined4 **)(param_2 + 8);
  iVar1 = (uint)*(ushort *)((int)puVar2 + 6) * 0x28 + 0x40;
  if (iVar1 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_00552230(*puVar2,iVar1);
    if (piVar3 == (int *)0x0) goto LAB_00576557;
  }
  piVar3[4] = (int)(piVar3 + 6);
  *piVar3 = (int)puVar2;
  *(short *)(piVar3 + 1) = *(short *)((int)puVar2 + 6) + 1;
LAB_00576557:
  *(int **)((int)_Dst + 0x34) = piVar3;
  if (piVar3 == (int *)0x0) {
    return 7;
  }
  if (*(char *)(param_1 + 0x37) != '\x02') {
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 4) + 0x20);
    *(int *)((int)_Dst + 0x1c) = iVar1 * 10;
    iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 0x50);
    if (iVar4 < 10) {
      iVar4 = 10;
    }
    *(int *)((int)_Dst + 0x20) = iVar4 * iVar1;
  }
  return 0;
}


/* FUN_005765a0 @ 005765a0  kind=lib  attributed-by=lib-island  size=186 */

int FUN_005765a0(undefined4 param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_2 + 0x48);
  if (*(int *)(iVar1 + 0x28) != 0) {
    iVar3 = *(int *)(*(int *)(iVar1 + 0x28) + 4);
    iVar2 = FUN_0057cc30(param_1,iVar3 * 0x30 + *(int *)(iVar1 + 0x24));
    iVar3 = *(int *)(iVar1 + 0x14) + iVar3;
    while ((iVar2 == 0 && (iVar3 = iVar3 / 2, 0 < iVar3))) {
      iVar2 = FUN_0057c9c0(param_2,iVar3);
    }
    *param_3 = (uint)(*(int *)(*(int *)(iVar1 + 0x24) + 0x18 +
                              *(int *)(*(int *)(iVar1 + 0x28) + 4) * 0x30) == 0);
    return iVar2;
  }
  iVar3 = *(int *)(iVar1 + 0x30);
  *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar3 + 8);
  *(undefined4 *)(iVar3 + 8) = 0;
  FUN_0057d110(param_1,iVar3);
  *param_3 = (uint)(*(int *)(iVar1 + 0x30) == 0);
  return 0;
}


/* FUN_00576660 @ 00576660  kind=lib  attributed-by=lib-island  size=724 */

void FUN_00576660(undefined4 param_1,int param_2,uint *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  void *pvVar6;
  int *piVar7;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  uint *local_44;
  int local_40;
  undefined8 local_3c;
  void *local_34;
  int *local_30;
  size_t local_2c;
  undefined4 local_28;
  int local_24;
  undefined1 local_20 [12];
  undefined1 local_14 [12];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  puVar1 = *(undefined4 **)(param_2 + 0x48);
  piVar5 = (int *)0x0;
  local_28 = param_1;
  local_40 = param_2;
  local_44 = param_3;
  local_30 = (int *)0x0;
  local_3c = 0;
  local_24 = 2;
  if (puVar1[6] == 0) {
    *param_3 = (uint)(puVar1[0xc] == 0);
    FUN_0057d1b0();
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar2 = FUN_0057ced0(param_1,param_2);
  if (iVar2 != 0) goto LAB_00576923;
  iVar2 = puVar1[6];
  if (iVar2 < 0x11) {
    if (2 < iVar2) goto LAB_005766ea;
    iVar3 = 2;
  }
  else {
    iVar2 = 0x10;
LAB_005766ea:
    iVar3 = 2;
    do {
      iVar3 = iVar3 * 2;
      local_24 = iVar3;
    } while (iVar3 < iVar2);
  }
  local_2c = iVar3 * 0x34;
  local_34 = (void *)FUN_00552230(local_28,local_2c);
  if (local_34 != (void *)0x0) {
    memset(local_34,0,local_2c);
  }
  puVar1[9] = local_34;
  if (local_34 == (void *)0x0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  puVar1[5] = local_24;
  puVar1[10] = (void *)(local_24 * 0x30 + (int)local_34);
  iVar2 = 0;
  do {
    local_24 = 0;
    piVar7 = piVar5;
    if (iVar2 == 0) {
      local_2c = 0;
      do {
        piVar7 = piVar5;
        if ((int)puVar1[6] <= (int)local_2c) break;
        local_74 = 0;
        local_6c = 0;
        local_64 = 0;
        local_5c = 0;
        local_54 = 0;
        iVar2 = FUN_0057ca80(local_28,local_40,&local_4c);
        if (iVar2 != 0) break;
        if ((int)puVar1[6] < 0x11) goto LAB_005768e3;
        if ((piVar5 != (int *)0x0) || (iVar2 = FUN_0057d0a0(local_28,&local_30), iVar2 == 0)) {
          local_34 = (void *)0x0;
          FUN_00536a00(local_28,local_30,&local_74,(undefined4)local_3c,local_3c._4_4_);
          uVar4 = FUN_00563680(local_14,local_4c,local_48);
          FUN_00536a90(&local_74,local_14,uVar4);
          pvVar6 = (void *)0x0;
          do {
            if (pvVar6 != (void *)0x0) break;
            iVar2 = *(int *)(puVar1[10] + 4) * 0x30 + puVar1[9];
            uVar4 = FUN_00563680(local_20,*(int *)(iVar2 + 0x14),*(int *)(iVar2 + 0x14) >> 0x1f);
            FUN_00536a90(&local_74,local_20,uVar4);
            FUN_00536a90(&local_74,*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
            iVar2 = FUN_005765a0(local_28,local_40,&local_34);
            pvVar6 = local_34;
          } while (iVar2 == 0);
          iVar3 = FUN_00536970(local_28,&local_74,&local_3c);
          if (iVar2 == 0) {
            iVar2 = iVar3;
          }
        }
        local_24 = local_24 + 1;
        local_2c = local_2c + 0x10;
        piVar5 = local_30;
        piVar7 = local_30;
      } while (iVar2 == 0);
    }
    piVar5 = piVar7;
    if ((int)puVar1[6] < 0x11) break;
    piVar5 = (int *)puVar1[0xb];
    puVar1[0xb] = piVar7;
    *puVar1 = (undefined4)local_3c;
    puVar1[6] = local_24;
    puVar1[1] = local_3c._4_4_;
    puVar1[2] = 0;
    puVar1[3] = 0;
    local_3c = 0;
    local_30 = piVar5;
  } while (iVar2 == 0);
LAB_005768e3:
  if (piVar5 != (int *)0x0) {
    if (*piVar5 != 0) {
      (**(code **)(*piVar5 + 4))(piVar5);
      *piVar5 = 0;
    }
    FUN_00524410(piVar5);
  }
  *local_44 = (uint)(*(int *)(puVar1[9] + 0x18 + *(int *)(puVar1[10] + 4) * 0x30) == 0);
LAB_00576923:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00576940 @ 00576940  kind=lib  attributed-by=lib-island  size=119 */

undefined4 FUN_00576940(int param_1,int param_2)

{
  int iVar1;
  void *_Src;
  size_t _Size;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (*(int *)(iVar1 + 0x28) == 0) {
    _Size = (*(undefined4 **)(iVar1 + 0x30))[1];
    _Src = (void *)**(undefined4 **)(iVar1 + 0x30);
  }
  else {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x28) + 4) * 0x30 + *(int *)(iVar1 + 0x24);
    _Size = *(size_t *)(iVar1 + 0x14);
    _Src = *(void **)(iVar1 + 0x20);
  }
  iVar1 = FUN_005748c0(param_2,_Size,0);
  if (iVar1 != 0) {
    return 7;
  }
  *(size_t *)(param_2 + 0x18) = _Size;
  *(ushort *)(param_2 + 0x1c) = *(ushort *)(param_2 + 0x1c) & 0xbe10 | 0x10;
  memcpy(*(void **)(param_2 + 4),_Src,_Size);
  return 0;
}


/* FUN_005769c0 @ 005769c0  kind=lib  attributed-by=lib-island  size=183 */

undefined4 FUN_005769c0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar4 = *(uint *)(param_3 + 0x18);
  uVar5 = (int)uVar4 >> 0x1f;
  iVar1 = *(int *)(param_2 + 0x48);
  iVar6 = 0;
  do {
    uVar4 = uVar4 >> 7 | uVar5 << 0x19;
    uVar5 = uVar5 >> 7;
    iVar6 = iVar6 + 1;
    if (uVar4 == 0 && uVar5 == 0) break;
  } while (iVar6 < 9);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + *(int *)(param_3 + 0x18) + iVar6;
  puVar2 = (undefined4 *)FUN_00552230(param_1,*(int *)(param_3 + 0x18) + 0xc);
  if (puVar2 == (undefined4 *)0x0) {
    return 7;
  }
  *puVar2 = puVar2 + 3;
  memcpy(puVar2 + 3,*(void **)(param_3 + 4),*(size_t *)(param_3 + 0x18));
  puVar2[1] = *(undefined4 *)(param_3 + 0x18);
  puVar2[2] = *(undefined4 *)(iVar1 + 0x30);
  *(undefined4 **)(iVar1 + 0x30) = puVar2;
  if ((0 < *(int *)(iVar1 + 0x20)) &&
     ((*(int *)(iVar1 + 0x20) < *(int *)(iVar1 + 0x10) ||
      ((*(int *)(iVar1 + 0x1c) < *(int *)(iVar1 + 0x10) && (DAT_0076b4ac != 0)))))) {
    uVar3 = FUN_0057ced0(param_1,param_2);
    *(undefined4 *)(iVar1 + 0x10) = 0;
    return uVar3;
  }
  return 0;
}


/* FUN_00576a80 @ 00576a80  kind=lib  attributed-by=lib-island  size=277 */

int FUN_00576a80(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *_Src;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = *param_1;
  iVar3 = param_1[0x16];
  if (param_1[0xd] == 0) {
    FUN_00553890(iVar2,iVar3,0);
    return iVar3;
  }
  uVar1 = *(undefined1 *)(iVar2 + 0x38);
  if (DAT_0076b3bc != (code *)0x0) {
    (*DAT_0076b3bc)();
  }
  piVar4 = *(int **)(iVar2 + 0xd4);
  _Src = (void *)param_1[0xd];
  if (piVar4 != (int *)0x0) {
    if (_Src == (void *)0x0) {
      if ((*(byte *)(piVar4 + 7) & 0x40) != 0) {
        piVar5 = (int *)piVar4[4];
        piVar5[1] = *(int *)(*piVar5 + 0xa4);
        *(int **)(*piVar5 + 0xa4) = piVar5;
      }
      if ((*(byte *)(piVar4 + 7) & 0x20) != 0) {
        FUN_005644e0(piVar4[4]);
      }
      *(ushort *)(piVar4 + 7) = *(ushort *)(piVar4 + 7) & 0xbe01 | 1;
      *(undefined1 *)((int)piVar4 + 0x1e) = 5;
    }
    else {
      if (*piVar4 == 0) {
        iVar6 = 1000000000;
      }
      else {
        iVar6 = *(int *)(*piVar4 + 0x50);
      }
      iVar7 = 0;
      if (-1 < iVar6) {
        do {
          if (*(char *)(iVar7 + (int)_Src) == '\0') break;
          iVar7 = iVar7 + 1;
        } while (iVar7 <= iVar6);
      }
      if (iVar7 <= iVar6) {
        iVar6 = FUN_005748c0(piVar4,iVar7 + 1,0);
        if (iVar6 == 0) {
          memcpy((void *)piVar4[1],_Src,iVar7 + 1);
          piVar4[6] = iVar7;
          piVar4[7] = 0x1030202;
        }
      }
    }
  }
  if (DAT_0076b3c0 != (code *)0x0) {
    (*DAT_0076b3c0)();
  }
  *(undefined1 *)(iVar2 + 0x38) = uVar1;
  *(int *)(iVar2 + 0x2c) = iVar3;
  return iVar3;
}


/* FUN_00576ba0 @ 00576ba0  kind=lib  attributed-by=lib-island  size=48 */

void FUN_00576ba0(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 1 << ((byte)param_2 & 0x1f);
  param_1[0x1a] = param_1[0x1a] | uVar1;
  if ((param_2 != 1) &&
     (*(char *)(*(int *)(*(int *)(*param_1 + 0x10) + 4 + param_2 * 0x10) + 9) != '\0')) {
    param_1[0x1b] = param_1[0x1b] | uVar1;
  }
  return;
}


/* FUN_00576bd0 @ 00576bd0  kind=lib  attributed-by=lib-island  size=320 */

undefined4 FUN_00576bd0(int *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_EDX;
  
  iVar2 = *param_1;
  iVar5 = FUN_00576ed0(param_1,param_2);
  if (iVar5 == 0) {
    if (((*(byte *)((int)param_2 + 0x2a) & 0x10) != 0) || (0 < *(short *)((int)param_2 + 0x26))) {
      return 0;
    }
    if (-1 < *(short *)((int)param_2 + 0x26)) {
      iVar5 = FUN_00566d40(iVar2,param_2[3],0);
      if (iVar5 == 0) {
        return 1;
      }
      uVar1 = *(undefined1 *)(iVar2 + 0xea);
      iVar3 = param_1[0x12];
      FUN_00567310(param_1,*(undefined4 *)(iVar5 + 0x28));
      *(undefined2 *)((int)param_2 + 0x26) = 0xffff;
      uVar4 = *(undefined4 *)(iVar2 + 0x10c);
      *(undefined1 *)(iVar2 + 0xea) = 0;
      *(undefined4 *)(iVar2 + 0x10c) = 0;
      iVar6 = FUN_00564270(extraout_EDX,iVar5);
      *(undefined4 *)(iVar2 + 0x10c) = uVar4;
      *(undefined1 *)(iVar2 + 0xea) = uVar1;
      param_1[0x12] = iVar3;
      if (iVar6 != 0) {
        *(undefined2 *)((int)param_2 + 0x26) = *(undefined2 *)(iVar6 + 0x26);
        param_2[1] = *(undefined4 *)(iVar6 + 4);
        *(undefined2 *)(iVar6 + 0x26) = 0;
        *(undefined4 *)(iVar6 + 4) = 0;
        FUN_005529a0(iVar2,iVar6);
        *(ushort *)(param_2[0x10] + 0x4e) = *(ushort *)(param_2[0x10] + 0x4e) | 2;
        FUN_00566d10(iVar2,iVar5);
        return 0;
      }
      *(undefined2 *)((int)param_2 + 0x26) = 0;
      FUN_00566d10(iVar2,iVar5);
      return 1;
    }
    FUN_00553950(param_1,"view %s is circularly defined",*param_2);
  }
  return 1;
}


/* FUN_00576d10 @ 00576d10  kind=lib  attributed-by=lib-island  size=59 */

void FUN_00576d10(int param_1,int *param_2)

{
  if (*(int *)(param_1 + 0x218) == 0) {
    *(int *)(param_1 + 0x218) = *param_2;
    *(int *)(param_1 + 0x21c) = param_2[1];
    return;
  }
  *(int *)(param_1 + 0x21c) = (param_2[1] - *(int *)(param_1 + 0x218)) + *param_2;
  return;
}


/* FUN_00576d50 @ 00576d50  kind=lib  attributed-by=lib-island  size=153 */

int FUN_00576d50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = *(int *)(param_1 + 0x120);
  if ((0 < iVar1) && (*(int *)(param_1 + 0x138) == 0)) {
    return 6;
  }
  if (param_2 == 0) {
    return 0;
  }
  iVar2 = **(int **)(param_2 + 8);
  if (*(int *)(iVar2 + 0x38) != 0) {
    iVar4 = 0;
    if (0 < iVar1) {
      piVar3 = *(int **)(param_1 + 0x138);
      do {
        if (*piVar3 == param_2) {
          return 0;
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar4 < iVar1);
    }
    iVar4 = FUN_0053b530(param_1);
    if ((iVar4 == 0) &&
       (iVar4 = (**(code **)(iVar2 + 0x38))(*(undefined4 *)(param_2 + 8)), iVar4 == 0)) {
      *(int *)(*(int *)(param_1 + 0x138) + *(int *)(param_1 + 0x120) * 4) = param_2;
      *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
    }
  }
  return iVar4;
}


/* FUN_00576df0 @ 00576df0  kind=lib  attributed-by=lib-island  size=218 */

void FUN_00576df0(int *param_1,int *param_2,undefined4 param_3,int *param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  
  FUN_00567880(param_1,param_2,param_3,0,0,1,param_5);
  puVar1 = (undefined4 *)param_1[0x7f];
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = *param_1;
    iVar5 = -1000000;
    if (puVar1[0x10] != 0) {
      iVar5 = 0;
      if (0 < *(int *)(iVar2 + 0x14)) {
        piVar3 = (int *)(*(int *)(iVar2 + 0x10) + 0xc);
        do {
          if (*piVar3 == puVar1[0x10]) break;
          iVar5 = iVar5 + 1;
          piVar3 = piVar3 + 4;
        } while (iVar5 < *(int *)(iVar2 + 0x14));
      }
    }
    *(byte *)((int)puVar1 + 0x2a) = *(byte *)((int)puVar1 + 0x2a) | 0x10;
    puVar1[0xc] = 0;
    uVar4 = FUN_0055e3f0(iVar2,param_4);
    FUN_00528d20(iVar2,puVar1,uVar4);
    FUN_00528d20(iVar2,puVar1,0);
    uVar4 = FUN_00552450(iVar2,*puVar1);
    FUN_00528d20(iVar2,puVar1,uVar4);
    param_1[0x83] = (param_4[1] - *param_2) + *param_4;
    if ((undefined4 *)puVar1[0xd] != (undefined4 *)0x0) {
      FUN_0054ab50(param_1,0x1d,*puVar1,*(undefined4 *)puVar1[0xd],
                   *(undefined4 *)(*(int *)(*param_1 + 0x10) + iVar5 * 0x10));
    }
  }
  return;
}


/* FUN_00576ed0 @ 00576ed0  kind=lib  attributed-by=lib-island  size=257 */

int FUN_00576ed0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 local_8;
  
  iVar2 = *param_1;
  if ((*(byte *)(param_2 + 0x2a) & 0x10) != 0) {
    piVar3 = *(int **)(param_2 + 0x38);
    while( true ) {
      if (piVar3 == (int *)0x0) {
        pcVar4 = (char *)**(undefined4 **)(param_2 + 0x34);
        uVar9 = 0;
        if (pcVar4 != (char *)0x0) {
          cVar1 = *pcVar4;
          pcVar8 = pcVar4;
          while (cVar1 != '\0') {
            pcVar8 = pcVar8 + 1;
            cVar1 = *pcVar8;
          }
          uVar9 = (int)pcVar8 - (int)pcVar4 & 0x3fffffff;
        }
        if (*(int *)(iVar2 + 0x130) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_0057a870(pcVar4,uVar9);
          uVar6 = uVar6 % *(uint *)(iVar2 + 0x124);
        }
        iVar7 = FUN_00537190(iVar2 + 0x124,pcVar4,uVar9,uVar6);
        if ((iVar7 != 0) && (piVar3 = *(int **)(iVar7 + 8), piVar3 != (int *)0x0)) {
          local_8 = 0;
          iVar7 = FUN_0057d530(iVar2,param_2,piVar3,*(undefined4 *)(*piVar3 + 8),&local_8);
          uVar5 = local_8;
          if (iVar7 != 0) {
            FUN_00553950(param_1,&DAT_00716900,local_8);
          }
          FUN_005521a0(iVar2,uVar5);
          return iVar7;
        }
        FUN_00553950(param_1,"no such module: %s",pcVar4);
        return 1;
      }
      if (*piVar3 == iVar2) break;
      piVar3 = (int *)piVar3[6];
    }
  }
  return 0;
}


/* FUN_00576fe0 @ 00576fe0  kind=lib  attributed-by=lib-island  size=280 */

int FUN_00576fe0(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  char *pcVar8;
  uint uVar9;
  
  iVar3 = FUN_005572d0(param_1,param_3,*(undefined4 *)(*(int *)(param_1 + 0x10) + param_2 * 0x10));
  pcVar2 = (char *)**(undefined4 **)(iVar3 + 0x34);
  uVar9 = 0;
  if (pcVar2 != (char *)0x0) {
    cVar1 = *pcVar2;
    pcVar8 = pcVar2;
    while (cVar1 != '\0') {
      pcVar8 = pcVar8 + 1;
      cVar1 = *pcVar8;
    }
    uVar9 = (int)pcVar8 - (int)pcVar2 & 0x3fffffff;
  }
  if (*(int *)(param_1 + 0x130) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0057a870(pcVar2,uVar9);
    uVar4 = uVar4 % *(uint *)(param_1 + 0x124);
  }
  iVar5 = FUN_00537190(param_1 + 0x124,pcVar2,uVar9,uVar4);
  if ((iVar5 == 0) || (piVar7 = *(int **)(iVar5 + 8), piVar7 == (int *)0x0)) {
    uVar6 = FUN_0055d980(param_1,"no such module: %s",pcVar2);
    *param_4 = uVar6;
    iVar5 = 1;
  }
  else {
    iVar5 = FUN_0057d530(param_1,iVar3,piVar7,*(undefined4 *)(*piVar7 + 4),param_4);
    if ((iVar5 == 0) && (piVar7 = *(int **)(iVar3 + 0x38), piVar7 != (int *)0x0)) {
      do {
        if (*piVar7 == param_1) {
          iVar5 = FUN_0053b530(param_1);
          if (iVar5 == 0) {
            for (piVar7 = *(int **)(iVar3 + 0x38); (piVar7 != (int *)0x0 && (*piVar7 != param_1));
                piVar7 = (int *)piVar7[6]) {
            }
            *(int **)(*(int *)(param_1 + 0x138) + *(int *)(param_1 + 0x120) * 4) = piVar7;
            *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
            piVar7[3] = piVar7[3] + 1;
          }
          return iVar5;
        }
        piVar7 = (int *)piVar7[6];
      } while (piVar7 != (int *)0x0);
      return 0;
    }
  }
  return iVar5;
}


/* FUN_00577100 @ 00577100  kind=lib  attributed-by=lib-island  size=129 */

int FUN_00577100(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar3 = FUN_005572d0(param_1,param_3,*(undefined4 *)(*(int *)(param_1 + 0x10) + param_2 * 0x10));
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x38) != 0)) {
    puVar4 = (undefined4 *)FUN_0057d830(param_1,iVar3);
    iVar5 = (**(code **)(*(int *)puVar4[1] + 0x14))(puVar4[2]);
    if (iVar5 == 0) {
      puVar4[2] = 0;
      *(undefined4 *)(iVar3 + 0x38) = 0;
      piVar2 = puVar4 + 3;
      *piVar2 = *piVar2 + -1;
      uVar1 = *puVar4;
      if (*piVar2 == 0) {
        piVar2 = (int *)puVar4[2];
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x10))(piVar2);
        }
        FUN_005521a0(uVar1,puVar4);
      }
    }
    return iVar5;
  }
  return 0;
}


/* FUN_00577190 @ 00577190  kind=lib  attributed-by=lib-island  size=92 */

void FUN_00577190(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x1f0) == 0)) {
    FUN_0057d830(0,param_2);
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    iVar1 = 0;
    if (0 < *(int *)(param_2 + 0x30)) {
      do {
        if (iVar1 != 1) {
          FUN_005521a0(param_1,*(undefined4 *)(*(int *)(param_2 + 0x34) + iVar1 * 4));
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_2 + 0x30));
    }
    FUN_005521a0(param_1,*(undefined4 *)(param_2 + 0x34));
  }
  return;
}


/* FUN_005771f0 @ 005771f0  kind=lib  attributed-by=lib-string  size=396 */

void FUN_005771f0(int *param_1,int *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  
  puVar2 = (undefined4 *)param_1[0x7f];
  iVar3 = *param_1;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00528cb0(param_1);
    param_1[0x86] = 0;
    if (0 < (int)puVar2[0xc]) {
      if (*(char *)(iVar3 + 0x81) == '\0') {
        if (param_2 != (int *)0x0) {
          param_1[0x83] = (param_2[1] - param_1[0x82]) + *param_2;
        }
        uVar4 = FUN_0055d980(iVar3,"CREATE VIRTUAL TABLE %T",param_1 + 0x82);
        iVar5 = FUN_00565260(iVar3,puVar2[0x10]);
        pcVar9 = "sqlite_temp_master";
        if (iVar5 != 1) {
          pcVar9 = "sqlite_master";
        }
        FUN_0055e450(param_1,
                     "UPDATE %Q.%s SET type=\'table\', name=%Q, tbl_name=%Q, rootpage=0, sql=%Q WHERE rowid=#%d"
                     ,*(undefined4 *)(*(int *)(iVar3 + 0x10) + iVar5 * 0x10),pcVar9,*puVar2,*puVar2,
                     uVar4,param_1[100]);
        FUN_005521a0(iVar3,uVar4);
        uVar4 = FUN_0055ab80(param_1);
        FUN_0054f7b0(param_1,iVar5);
        FUN_0056be90(uVar4,0x81,0,0);
        uVar6 = FUN_0055d980(iVar3,"name=\'%q\' AND type=\'table\'",*puVar2);
        FUN_0056c120(uVar4,iVar5,uVar6);
        pcVar9 = (char *)*puVar2;
        uVar8 = 0;
        if (pcVar9 != (char *)0x0) {
          cVar1 = *pcVar9;
          pcVar7 = pcVar9;
          while (cVar1 != '\0') {
            pcVar7 = pcVar7 + 1;
            cVar1 = *pcVar7;
          }
          uVar8 = (int)pcVar7 - (int)pcVar9 & 0x3fffffff;
        }
        FUN_0056bf50(uVar4,0x85,iVar5,0,0,pcVar9,uVar8 + 1);
        return;
      }
      pcVar9 = (char *)*puVar2;
      uVar8 = 0;
      if (pcVar9 != (char *)0x0) {
        cVar1 = *pcVar9;
        pcVar7 = pcVar9;
        while (cVar1 != '\0') {
          pcVar7 = pcVar7 + 1;
          cVar1 = *pcVar7;
        }
        uVar8 = (int)pcVar7 - (int)pcVar9 & 0x3fffffff;
      }
      iVar5 = FUN_0055ada0(puVar2[0x10] + 8,pcVar9,uVar8,puVar2);
      if (iVar5 != 0) {
        *(undefined1 *)(iVar3 + 0x38) = 1;
        return;
      }
      param_1[0x7f] = 0;
    }
  }
  return;
}


/* FUN_00577380 @ 00577380  kind=lib  attributed-by=lib-island  size=131 */

void FUN_00577380(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((int *)param_1[0x6c] != (int *)0x0) {
    param_1 = (int *)param_1[0x6c];
  }
  iVar4 = 0;
  iVar3 = param_1[0x76];
  if (0 < iVar3) {
    piVar1 = (int *)param_1[0x88];
    do {
      if (param_2 == *piVar1) {
        return;
      }
      iVar4 = iVar4 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar4 < iVar3);
  }
  iVar4 = param_1[0x88];
  iVar2 = FUN_00579f80();
  if ((iVar2 == 0) && (iVar3 = FUN_00563800(iVar4,iVar3 * 4 + 4), iVar3 != 0)) {
    param_1[0x88] = iVar3;
    *(int *)(iVar3 + param_1[0x76] * 4) = param_2;
    param_1[0x76] = param_1[0x76] + 1;
    return;
  }
  *(undefined1 *)(*param_1 + 0x38) = 1;
  return;
}


/* FUN_00577410 @ 00577410  kind=lib  attributed-by=lib-island  size=320 */

undefined8 * FUN_00577410(undefined4 param_1,undefined8 *param_2,undefined4 param_3,char *param_4)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_c = 0;
  if ((((param_4 != (char *)0x0) && (*param_4 == -0x68)) &&
      (iVar5 = *(int *)(param_4 + 0x28), iVar5 != 0)) && ((*(byte *)(iVar5 + 0x2a) & 0x10) != 0)) {
    uVar7 = FUN_0055a900(param_1,iVar5);
    piVar2 = *(int **)((int)uVar7 + 8);
    iVar5 = *piVar2;
    if (*(int *)(iVar5 + 0x48) == 0) {
      return param_2;
    }
    pbVar4 = (byte *)FUN_00552450((int)((ulonglong)uVar7 >> 0x20),*(undefined4 *)(param_2 + 3));
    if (pbVar4 != (byte *)0x0) {
      bVar1 = *pbVar4;
      pbVar3 = pbVar4;
      while (bVar1 != 0) {
        *pbVar3 = (&DAT_007120d8)[*pbVar3];
        bVar1 = pbVar3[1];
        pbVar3 = pbVar3 + 1;
      }
      iVar5 = (**(code **)(iVar5 + 0x48))(piVar2,param_3,pbVar4,&local_8,&local_c);
      FUN_005521a0(param_1,pbVar4);
      if (iVar5 != 0) {
        iVar5 = FUN_00568070(*(undefined4 *)(param_2 + 3));
        puVar6 = (undefined8 *)FUN_005522c0(param_1,iVar5 + 0x25);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = *param_2;
          puVar6[1] = param_2[1];
          puVar6[2] = param_2[2];
          puVar6[3] = param_2[3];
          *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(param_2 + 4);
          *(void **)(puVar6 + 3) = (void *)((int)puVar6 + 0x24);
          uVar7 = FUN_00568070(*(undefined4 *)(param_2 + 3));
          memcpy((void *)((int)puVar6 + 0x24),(void *)((ulonglong)uVar7 >> 0x20),(int)uVar7 + 1);
          *(undefined4 *)((int)puVar6 + 0xc) = local_8;
          *(byte *)((int)puVar6 + 3) = *(byte *)((int)puVar6 + 3) | 4;
          *(undefined4 *)((int)puVar6 + 4) = local_c;
          return puVar6;
        }
      }
    }
    return param_2;
  }
  return param_2;
}


/* FUN_00577550 @ 00577550  kind=lib  attributed-by=lib-island  size=128 */

int FUN_00577550(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x138) == 0) {
    return 0;
  }
  iVar5 = 0;
  do {
    if (*(int *)(param_1 + 0x120) <= iVar5) {
      return iVar4;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x138) + iVar5 * 4);
    piVar2 = (int *)**(int **)(iVar1 + 4);
    if ((*(int *)(iVar1 + 8) != 0) && (1 < *piVar2)) {
      if (param_2 == 0) {
        pcVar3 = (code *)piVar2[0x14];
        *(int *)(iVar1 + 0x14) = param_3 + 1;
      }
      else if (param_2 == 2) {
        pcVar3 = (code *)piVar2[0x16];
      }
      else {
        pcVar3 = (code *)piVar2[0x15];
      }
      if ((pcVar3 != (code *)0x0) && (param_3 < *(int *)(iVar1 + 0x14))) {
        iVar4 = (*pcVar3)(*(undefined4 *)(iVar1 + 8),param_3);
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar4 == 0);
  return iVar4;
}


