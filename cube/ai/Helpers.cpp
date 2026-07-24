// Helpers (ai) -- cube. 22 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Helpers.h"

/* FUN_0043f470 @ 0043f470  kind=gamemisc  attributed-by=caller-vote  size=626 */

/* WARNING: Removing unreachable block (ram,0x0043f53d) */
/* WARNING: Removing unreachable block (ram,0x0043f54d) */
/* WARNING: Removing unreachable block (ram,0x0043f556) */
/* WARNING: Removing unreachable block (ram,0x0043f559) */
/* WARNING: Removing unreachable block (ram,0x0043f549) */
/* WARNING: Removing unreachable block (ram,0x0043f567) */
/* WARNING: Removing unreachable block (ram,0x0043f576) */
/* WARNING: Removing unreachable block (ram,0x0043f581) */
/* WARNING: Removing unreachable block (ram,0x0043f57d) */
/* WARNING: Removing unreachable block (ram,0x0043f571) */
/* WARNING: Removing unreachable block (ram,0x0043f584) */

void FUN_0043f470(undefined4 param_1,int *param_2)

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
              goto LAB_0043f6ce;
            }
LAB_0043f670:
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
            goto LAB_0043f670;
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
            goto LAB_0043f6ce;
          }
        }
        piVar5 = (int *)piVar3[1];
        piVar6 = piVar3;
      } while (piVar3 != *(int **)(*in_ECX + 4));
    }
    *(undefined1 *)(piVar6 + 3) = 1;
  }
LAB_0043f6ce:
  if ((void *)param_2[4] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_2[4]);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(param_2);
}


/* FUN_00444520 @ 00444520  kind=gamemisc  attributed-by=caller-vote  size=99 */

undefined4 FUN_00444520(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  if (((((*(char *)(in_ECX + 0x140) == '\x03') || (iVar2 = *(int *)(in_ECX + 100), iVar2 == 0x75))
       || (iVar2 == 0x56)) ||
      ((*(char *)(in_ECX + 0xaa8) == '\x03' &&
       (((cVar1 = *(char *)(in_ECX + 0xaa9), cVar1 == '\n' || (cVar1 == '\v')) || (cVar1 == '\f'))))
      )) || (iVar2 == 0x68)) {
    return 1;
  }
  if (*(char *)(in_ECX + 0xaa8) == '\x03') {
    cVar1 = *(char *)(in_ECX + 0xaa9);
    if (cVar1 == '\x06') {
      return 1;
    }
    if (cVar1 == '\a') {
      return 1;
    }
    if (cVar1 == '\b') {
      return 1;
    }
    if (cVar1 == '\n') {
      return 1;
    }
    if (cVar1 == '\v') {
      return 1;
    }
  }
  return 0;
}


/* FUN_00444ae0 @ 00444ae0  kind=gamemisc  attributed-by=caller-vote  size=155 */

float10 FUN_00444ae0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  float10 fVar3;
  
  switch(param_1) {
  case 3:
  case 4:
    return (float10)0.1;
  default:
switchD_00444af9_caseD_5:
    return (float10)0;
  case 0x1f:
  case 0x21:
  case 0x25:
  case 0x2b:
  case 0x2d:
  case 0x2e:
  case 0x5f:
    break;
  case 0x22:
    fVar3 = (float10)FUN_0043ed60(0x22,param_2);
    return (float10)((1.0 - (float)fVar3 * 0.75) * 0.125);
  }
  piVar1 = *(int **)(in_ECX + 0x1178);
  piVar2 = (int *)*piVar1;
  if (piVar2 != piVar1) {
    while ((char)piVar2[2] != '\t') {
      piVar2 = (int *)*piVar2;
      if (piVar2 == piVar1) {
        return (float10)0.3;
      }
    }
    if (piVar2 != (int *)0xfffffff8) goto switchD_00444af9_caseD_5;
  }
  return (float10)0.3;
}


/* FUN_00444bf0 @ 00444bf0  kind=gamemisc  attributed-by=caller-vote  size=177 */

undefined8 FUN_00444bf0(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int in_ECX;
  int iVar6;
  float fVar7;
  int iStack_8;
  
  piVar2 = *(int **)(in_ECX + 0x13a4);
  piVar5 = (int *)*piVar2;
  fVar7 = 0.0;
  if (piVar5 != piVar2) {
    iStack_8 = 0;
    iVar6 = 0;
    do {
      if ((piVar5[4] != 0 || piVar5[5] != 0) && (fVar7 <= (float)piVar5[6])) {
        iVar6 = piVar5[4];
        iStack_8 = piVar5[5];
        fVar7 = (float)piVar5[6];
      }
      if (*(char *)((int)piVar5 + 0xd) == '\0') {
        piVar3 = (int *)piVar5[2];
        if (*(char *)((int)piVar3 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0xd);
          piVar5 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0xd);
            piVar5 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0xd);
          piVar4 = (int *)piVar5[1];
          piVar3 = piVar5;
          while ((piVar5 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0xd);
            piVar4 = (int *)piVar5[1];
            piVar3 = piVar5;
          }
        }
      }
    } while (piVar5 != piVar2);
    return CONCAT44(iStack_8,iVar6);
  }
  return 0;
}


/* FUN_004452a0 @ 004452a0  kind=gamemisc  attributed-by=caller-vote  size=268 */

int FUN_004452a0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  
  if ((*(char *)(in_ECX + 0xaa8) == '\x03') && (*(char *)(in_ECX + 0xaa9) == '\x06')) {
    return 0x17;
  }
  if (((*(char *)(in_ECX + 0x140) != '\x03') && (*(int *)(in_ECX + 100) != 0x75)) &&
     (*(int *)(in_ECX + 100) != 0x56)) {
    if (*(char *)(in_ECX + 0xaa8) == '\x03') {
      cVar1 = *(char *)(in_ECX + 0xaa9);
      if (((cVar1 == '\n') || (cVar1 == '\v')) || (cVar1 == '\f')) goto LAB_00445365;
      if (cVar1 == '\x05') {
        return 5;
      }
      cVar1 = *(char *)(in_ECX + 0xaa9);
      if ((((cVar1 == '\x0f') || (cVar1 == '\x10')) ||
          (((cVar1 == '\x11' ||
            ((((cVar1 == '\x05' || (cVar1 == '\n')) || (cVar1 == '\v')) ||
             ((cVar1 == '\x12' || (cVar1 == '\b')))))) || (cVar1 == '\x06')))) || (cVar1 == '\a')) {
        uVar2 = *(uint *)(in_ECX + 0x70) & 0x80000001;
        if ((int)uVar2 < 0) {
          uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
        }
        return 0x42 - (uint)(uVar2 != 0);
      }
    }
    uVar2 = *(uint *)(in_ECX + 0x70) & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    return (uVar2 != 0) + 3;
  }
LAB_00445365:
  if (*(char *)(in_ECX + 0xaa9) == '\v') {
    return (*(char *)(in_ECX + 0x141) != '\x01') + 0x2d;
  }
  if (*(char *)(in_ECX + 0xaa9) == '\n') {
    return (uint)(*(char *)(in_ECX + 0x141) == '\x01') * 2 + 0x1f;
  }
  iVar3 = 0x25;
  if (*(char *)(in_ECX + 0x141) == '\x01') {
    iVar3 = 0x2b;
  }
  return iVar3;
}


/* FUN_00445410 @ 00445410  kind=gamemisc  attributed-by=caller-vote  size=479 */

undefined4 FUN_00445410(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  float10 fVar5;
  float fVar6;
  float fVar7;
  
  if ((*(int *)(in_ECX + 0x128) != 0) || (*(char *)(in_ECX + 0x68) == '0')) {
    return 0;
  }
  iVar3 = FUN_0043d1a0();
  if (((*(int *)(in_ECX + 0x70) == 0) || (cVar1 = *(char *)(in_ECX + 0x68), cVar1 == '\x1e')) ||
     (cVar1 == ' ')) goto LAB_004455ca;
  switch(cVar1) {
  case '\0':
  case '2':
  case '`':
    iVar4 = 100;
    goto LAB_004455c8;
  default:
    fVar5 = (float10)FUN_00447700();
    fVar7 = (float)fVar5;
    fVar6 = 500.0;
    break;
  case '\x03':
  case '\x04':
  case '\x05':
  case '>':
    fVar5 = (float10)FUN_00447700();
    fVar7 = (float)fVar5;
    fVar6 = 300.0;
    break;
  case '\a':
  case '\x0e':
  case '\x12':
    fVar5 = (float10)FUN_00447700();
    fVar7 = (float)fVar5;
    fVar6 = 200.0;
    break;
  case '\n':
    iVar4 = 600;
    goto LAB_004455c8;
  case '\v':
  case '<':
  case '=':
  case 'h':
    fVar5 = (float10)FUN_00447700();
    fVar7 = (float)fVar5;
    fVar6 = 100.0;
    break;
  case '\x0f':
    fVar5 = (float10)FUN_00447700();
    fVar7 = (float)fVar5;
    fVar6 = 400.0;
    break;
  case '\x16':
  case '\x1a':
  case '\x1e':
  case '\x1f':
  case ' ':
  case '!':
  case '\"':
  case '%':
  case '&':
  case '\'':
  case '(':
  case ')':
  case '*':
  case '+':
  case ',':
  case '-':
  case '.':
  case '^':
  case '_':
    fVar5 = (float10)FUN_00447700();
    fVar7 = (float)fVar5;
    fVar6 = 100.0;
    break;
  case '\x17':
    fVar5 = (float10)FUN_00447700();
    fVar7 = (float)fVar5;
    fVar6 = 10.0;
    break;
  case '0':
    iVar4 = 0;
    goto LAB_004455c8;
  case '6':
    iVar4 = 400;
    goto LAB_004455c8;
  case '9':
  case ':':
    fVar5 = (float10)FUN_00447700();
    fVar7 = (float)fVar5;
    fVar6 = 300.0;
    break;
  case 'A':
  case 'B':
    fVar5 = (float10)FUN_00447700();
    fVar7 = (float)fVar5;
    fVar6 = 200.0;
    break;
  case 'C':
    fVar5 = (float10)FUN_00447700();
    fVar7 = (float)fVar5;
    fVar6 = 100.0;
    break;
  case 'D':
  case 'E':
  case ']':
    fVar5 = (float10)FUN_00447700();
    fVar7 = (float)fVar5;
    fVar6 = 800.0;
    break;
  case 'G':
  case 'H':
    iVar4 = 200;
    goto LAB_004455c8;
  }
  iVar4 = (int)(fVar6 / (fVar7 * *(float *)(in_ECX + 0x17c)));
LAB_004455c8:
  iVar3 = iVar3 - iVar4;
LAB_004455ca:
  if (iVar3 <= *(int *)(in_ECX + 0x6c)) {
    uVar2 = FUN_00445020();
    *(undefined1 *)(in_ECX + 0x68) = uVar2;
    *(undefined4 *)(in_ECX + 0x6c) = 0;
  }
  return 1;
}


/* FUN_004456a0 @ 004456a0  kind=gamemisc  attributed-by=caller-vote  size=1740 */

undefined4 FUN_004456a0(void)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int in_ECX;
  float10 fVar7;
  float10 extraout_ST0;
  float fVar8;
  float fVar9;
  
  iVar4 = FUN_0043d1a0();
  if (*(int *)(in_ECX + 0x70) == 0) goto LAB_00445830;
  switch(*(undefined1 *)(in_ECX + 0x68)) {
  case 0:
  case 0x32:
  case 0x60:
    iVar5 = 100;
    goto LAB_0044582e;
  default:
    fVar7 = (float10)FUN_00447700();
    fVar9 = (float)fVar7;
    fVar8 = 500.0;
    break;
  case 3:
  case 4:
  case 5:
  case 0x3e:
    fVar7 = (float10)FUN_00447700();
    fVar9 = (float)fVar7;
    fVar8 = 300.0;
    break;
  case 7:
  case 0xe:
  case 0x12:
    fVar7 = (float10)FUN_00447700();
    fVar9 = (float)fVar7;
    fVar8 = 200.0;
    break;
  case 10:
    iVar5 = 600;
    goto LAB_0044582e;
  case 0xb:
  case 0x3c:
  case 0x3d:
  case 0x68:
    fVar7 = (float10)FUN_00447700();
    fVar9 = (float)fVar7;
    fVar8 = 100.0;
    break;
  case 0xf:
    fVar7 = (float10)FUN_00447700();
    fVar9 = (float)fVar7;
    fVar8 = 400.0;
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
    fVar7 = (float10)FUN_00447700();
    fVar9 = (float)fVar7;
    fVar8 = 100.0;
    break;
  case 0x17:
    fVar7 = (float10)FUN_00447700();
    fVar9 = (float)fVar7;
    fVar8 = 10.0;
    break;
  case 0x30:
    iVar5 = 0;
    goto LAB_0044582e;
  case 0x36:
    iVar5 = 400;
    goto LAB_0044582e;
  case 0x39:
  case 0x3a:
    fVar7 = (float10)FUN_00447700();
    fVar9 = (float)fVar7;
    fVar8 = 300.0;
    break;
  case 0x41:
  case 0x42:
    fVar7 = (float10)FUN_00447700();
    fVar9 = (float)fVar7;
    fVar8 = 200.0;
    break;
  case 0x43:
    fVar7 = (float10)FUN_00447700();
    fVar9 = (float)fVar7;
    fVar8 = 100.0;
    break;
  case 0x44:
  case 0x45:
  case 0x5d:
    fVar7 = (float10)FUN_00447700();
    fVar9 = (float)fVar7;
    fVar8 = 800.0;
    break;
  case 0x47:
  case 0x48:
    iVar5 = 200;
    goto LAB_0044582e;
  }
  iVar5 = (int)(fVar8 / (fVar9 * *(float *)(in_ECX + 0x17c)));
LAB_0044582e:
  iVar4 = iVar4 - iVar5;
LAB_00445830:
  iVar5 = FUN_004452a0();
  if (((*(char *)(in_ECX + 0x140) == '\x04') && (*(char *)(in_ECX + 0x141) == '\x01')) &&
     ((iVar5 == 0x11 || ((iVar5 == 5 || (iVar5 == 0x14)))))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((*(int *)(in_ECX + 0x6c) < iVar4) ||
     (((*(int *)(in_ECX + 0x128) != 0 && (!bVar2)) ||
      (FUN_00444ae0(iVar5,0xffffffff),
      *(float *)(in_ECX + 0x170) <= (float)extraout_ST0 &&
      (float)extraout_ST0 != *(float *)(in_ECX + 0x170))))) {
    return 0;
  }
  cVar3 = FUN_004452a0();
  *(char *)(in_ECX + 0x68) = cVar3;
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  if (((cVar3 == '%') || (cVar3 == '.')) ||
     ((cVar3 == '_' || ((cVar3 == '\x1f' || (cVar3 == '!')))))) {
    piVar1 = *(int **)(in_ECX + 0x1178);
    piVar6 = (int *)*piVar1;
    if (piVar6 != piVar1) {
LAB_004458d7:
      if ((char)piVar6[2] != '\t') goto code_r0x004458dd;
      if (piVar6 != (int *)0xfffffff8) {
        switch(cVar3) {
        case '\0':
        case '\b':
        case '\v':
        case '\x1c':
        case '2':
        case '7':
        case '<':
        case '=':
        case '>':
        case '`':
        case 'b':
        case 'h':
          iVar4 = 0;
          goto LAB_00445d49;
        case '\x01':
        case '\t':
          fVar7 = (float10)FUN_00447700();
          fVar9 = (float)fVar7;
          fVar8 = 300.0;
          break;
        case '\x02':
        case '\x03':
        case '\x04':
          fVar7 = (float10)FUN_00447700();
          fVar9 = (float)fVar7;
          fVar8 = 100.0;
          break;
        case '\x05':
          fVar7 = (float10)FUN_00447700();
          fVar9 = (float)fVar7;
          fVar8 = 100.0;
          break;
        case '\x06':
        case '\a':
          fVar7 = (float10)FUN_00447700();
          iVar4 = (int)(50.0 / ((float)fVar7 * *(float *)(in_ECX + 0x17c)));
          goto LAB_00445d49;
        case '\n':
          fVar7 = (float10)FUN_00447700();
          fVar9 = (float)fVar7;
          fVar8 = 100.0;
          break;
        case '\f':
        case '\x10':
        case 'C':
          fVar7 = (float10)FUN_00447700();
          fVar9 = (float)fVar7;
          fVar8 = 200.0;
          break;
        case '\r':
          fVar7 = (float10)FUN_00447700();
          fVar9 = (float)fVar7;
          fVar8 = 200.0;
          break;
        case '\x0e':
          fVar7 = (float10)FUN_00447700();
          fVar9 = (float)fVar7;
          fVar8 = 100.0;
          break;
        case '\x0f':
          fVar7 = (float10)FUN_00447700();
          fVar9 = (float)fVar7;
          fVar8 = 200.0;
          break;
        case '\x11':
        case '\x12':
        case '\x13':
        case '\x14':
        case '\x15':
          fVar7 = (float10)FUN_00447700();
          fVar9 = (float)fVar7;
          fVar8 = 100.0;
          break;
        case '\x16':
          fVar7 = (float10)FUN_00447700();
          goto LAB_00445d31;
        case '\x17':
          fVar7 = (float10)FUN_00447700();
          iVar4 = (int)(50.0 / ((float)fVar7 * *(float *)(in_ECX + 0x17c)));
          goto LAB_00445d49;
        case '\x18':
        case '\x19':
        case '\x1b':
        case '$':
        case ';':
        case '?':
        case '@':
          fVar7 = (float10)FUN_00447700();
          iVar4 = (int)(50.0 / ((float)fVar7 * *(float *)(in_ECX + 0x17c)));
          goto LAB_00445d49;
        case '\x1a':
          fVar7 = (float10)FUN_00447700();
          fVar9 = (float)fVar7;
          fVar8 = 300.0;
          break;
        default:
          fVar7 = (float10)FUN_00447700();
LAB_00445d31:
          fVar9 = (float)fVar7;
          fVar8 = 400.0;
          break;
        case '\x1e':
        case ' ':
          fVar7 = (float10)FUN_00447700();
          fVar9 = (float)fVar7;
          fVar8 = 800.0;
          break;
        case '\x1f':
        case '!':
          fVar7 = (float10)FUN_00447700();
          iVar4 = (int)(1600.0 / ((float)fVar7 * *(float *)(in_ECX + 0x17c)));
          goto LAB_00445d49;
        case '\"':
          fVar7 = (float10)FUN_00447700();
          iVar4 = (int)(1600.0 / ((float)fVar7 * *(float *)(in_ECX + 0x17c)));
          goto LAB_00445d49;
        case '%':
        case '+':
        case 'Y':
          if (*(char *)(in_ECX + 0xaa9) == '\f') {
            fVar7 = (float10)FUN_00447700();
            iVar4 = (int)(600.0 / ((float)fVar7 * *(float *)(in_ECX + 0x17c)));
          }
          else {
            fVar7 = (float10)FUN_00447700();
            iVar4 = (int)(1200.0 / ((float)fVar7 * *(float *)(in_ECX + 0x17c)));
          }
          goto LAB_00445d49;
        case '&':
        case ',':
          fVar7 = (float10)FUN_00447700();
          fVar9 = (float)fVar7;
          fVar8 = 500.0;
          break;
        case '\'':
        case '(':
        case ')':
        case '*':
          fVar7 = (float10)FUN_00447700();
          fVar9 = (float)fVar7;
          fVar8 = 200.0;
          break;
        case '-':
        case '.':
          fVar7 = (float10)FUN_00447700();
          iVar4 = (int)(1200.0 / ((float)fVar7 * *(float *)(in_ECX + 0x17c)));
          goto LAB_00445d49;
        case '0':
        case 'e':
          iVar4 = 100;
          goto LAB_00445d49;
        case '6':
          iVar4 = 400;
          goto LAB_00445d49;
        case '9':
        case ':':
          fVar7 = (float10)FUN_00447700();
          fVar9 = (float)fVar7;
          fVar8 = 800.0;
          break;
        case 'A':
        case 'B':
          fVar7 = (float10)FUN_00447700();
          fVar9 = (float)fVar7;
          fVar8 = 300.0;
          break;
        case 'D':
        case 'E':
        case 'F':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
          fVar7 = (float10)FUN_00447700();
          fVar9 = (float)fVar7;
          fVar8 = 300.0;
          break;
        case 'G':
        case 'H':
          iVar4 = 200;
          goto LAB_00445d49;
        case 'W':
          fVar7 = (float10)FUN_00447700();
          iVar4 = (int)(5000.0 / ((float)fVar7 * *(float *)(in_ECX + 0x17c)));
          goto LAB_00445d49;
        case '[':
          fVar7 = (float10)FUN_00447700();
          iVar4 = (int)(1000.0 / ((float)fVar7 * *(float *)(in_ECX + 0x17c)));
          goto LAB_00445d49;
        case ']':
          fVar7 = (float10)FUN_00447700();
          fVar9 = (float)fVar7;
          fVar8 = 800.0;
          break;
        case '^':
          fVar7 = (float10)FUN_00447700();
          fVar9 = (float)fVar7;
          fVar8 = 500.0;
          break;
        case '_':
          fVar7 = (float10)FUN_00447700();
          iVar4 = (int)(1000.0 / ((float)fVar7 * *(float *)(in_ECX + 0x17c)));
          goto LAB_00445d49;
        case 'i':
          iVar4 = 5000;
          goto LAB_00445d49;
        }
        iVar4 = (int)(fVar8 / (fVar9 * *(float *)(in_ECX + 0x17c)));
LAB_00445d49:
        *(int *)(in_ECX + 0x6c) = iVar4;
      }
    }
  }
LAB_00445d4c:
  if (!bVar2) {
    *(undefined4 *)(in_ECX + 0x128) = 0;
  }
  return 1;
code_r0x004458dd:
  piVar6 = (int *)*piVar6;
  if (piVar6 == piVar1) goto LAB_00445d4c;
  goto LAB_004458d7;
}


/* FUN_00446bb0 @ 00446bb0  kind=gamemisc  attributed-by=caller-vote  size=704 */

void FUN_00446bb0(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  uint local_2c [6];
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if ((*(byte *)(in_ECX + 0x7e) & 4) != 0) {
    FUN_00423e70();
    fVar4 = *(float *)(in_ECX + 0x30) * 0.017453292;
    dVar6 = (double)fVar4;
    libm_sse2_cos_precise();
    fVar5 = (float)dVar6;
    dVar6 = (double)fVar4;
    libm_sse2_sin_precise();
    fVar7 = (float)dVar6;
    fVar9 = *(float *)(in_ECX + 0x84) * 0.5;
    fVar8 = *(float *)(in_ECX + 0x88) * 0.35;
    iVar3 = 0;
    fVar4 = 1.0 / (fVar9 * (local_50 * fVar5 - local_60 * fVar7) +
                   (local_50 * fVar7 + local_60 * fVar5) * 0.0 + local_40 * fVar8 + local_30);
    local_14 = fVar4 * (fVar9 * (local_5c * fVar5 - local_6c * fVar7) +
                        (local_5c * fVar7 + local_6c * fVar5) * 0.0 + local_4c * fVar8 + local_3c);
    local_10 = fVar4 * (fVar9 * (local_58 * fVar5 - local_68 * fVar7) +
                        (local_58 * fVar7 + local_68 * fVar5) * 0.0 + local_48 * fVar8 + local_38);
    local_c = fVar4 * (fVar9 * (local_54 * fVar5 - local_64 * fVar7) +
                       (local_54 * fVar7 + local_64 * fVar5) * 0.0 + local_44 * fVar8 + local_34);
    do {
      uVar10 = FUN_0068d946();
      local_2c[iVar3 * 2] = (uint)uVar10;
      local_2c[iVar3 * 2 + 1] = (uint)((ulonglong)uVar10 >> 0x20);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
    *param_1 = *(uint *)(in_ECX + 0x10);
    param_1[1] = *(uint *)(in_ECX + 0x14);
    param_1[2] = *(uint *)(in_ECX + 0x18);
    param_1[3] = *(uint *)(in_ECX + 0x1c);
    param_1[4] = *(uint *)(in_ECX + 0x20);
    param_1[5] = *(uint *)(in_ECX + 0x24);
    uVar2 = *param_1;
    *param_1 = *param_1 + local_2c[0];
    param_1[1] = param_1[1] + local_2c[1] + (uint)CARRY4(uVar2,local_2c[0]);
    puVar1 = param_1 + 2;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + local_2c[2];
    param_1[3] = param_1[3] + local_2c[3] + (uint)CARRY4(uVar2,local_2c[2]);
    puVar1 = param_1 + 4;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + local_2c[4];
    param_1[5] = param_1[5] + local_2c[5] + (uint)CARRY4(uVar2,local_2c[4]);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  *param_1 = *(uint *)(in_ECX + 0x10);
  param_1[1] = *(uint *)(in_ECX + 0x14);
  param_1[2] = *(uint *)(in_ECX + 0x18);
  param_1[3] = *(uint *)(in_ECX + 0x1c);
  param_1[4] = *(uint *)(in_ECX + 0x20);
  param_1[5] = *(uint *)(in_ECX + 0x24);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00451d70 @ 00451d70  kind=gamemisc  attributed-by=caller-vote  size=39 */

int FUN_00451d70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0043c8a0(param_1,param_2);
  if (iVar1 != -8) {
    FUN_004594c0(param_3);
  }
  return iVar1;
}


/* FUN_004594c0 @ 004594c0  kind=gamemisc  attributed-by=caller-vote  size=98 */

void FUN_004594c0(int param_1)

{
  int in_ECX;
  
  FUN_0040ee70(param_1);
  *(undefined4 *)(in_ECX + 0x118) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(in_ECX + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(in_ECX + 0x120) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(in_ECX + 0x124) = *(undefined4 *)(param_1 + 0x124);
  *(undefined1 *)(in_ECX + 0x128) = *(undefined1 *)(param_1 + 0x128);
  *(undefined2 *)(in_ECX + 0x12a) = *(undefined2 *)(param_1 + 0x12a);
  return;
}


/* FUN_0058ce60 @ 0058ce60  kind=gamemisc  attributed-by=caller-vote  size=71 */

void FUN_0058ce60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      param_3[4] = param_1[4];
      param_3[5] = param_1[5];
    }
    param_3 = param_3 + 6;
  }
  return;
}


/* FUN_0058ceb0 @ 0058ceb0  kind=gamemisc  attributed-by=caller-vote  size=157 */

void FUN_0058ceb0(int *param_1)

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
  puStack_c = &LAB_006f15e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  cVar2 = FUN_0058cfe0((param_1[1] - *param_1) / 0x18);
  if (cVar2 != '\0') {
    local_8 = 0;
    uVar3 = FUN_0058ce60(*piVar1,piVar1[1],*in_ECX,(int)&param_1 + 3,param_1);
    in_ECX[1] = uVar3;
  }
  ExceptionList = local_10;
  return;
}


/* FUN_0058cfe0 @ 0058cfe0  kind=gamemisc  attributed-by=caller-vote  size=102 */

undefined4 FUN_0058cfe0(uint param_1)

{
  void *pvVar1;
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0xaaaaaaa < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  pvVar1 = operator_new(param_1 * 0x18);
  if (pvVar1 != (void *)0x0) {
    *in_ECX = pvVar1;
    in_ECX[1] = pvVar1;
    pvVar1 = (void *)((int)pvVar1 + param_1 * 0x18);
    in_ECX[2] = pvVar1;
    return CONCAT31((int3)((uint)pvVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_005957c0 @ 005957c0  kind=gamemisc  attributed-by=caller-vote  size=139 */

void FUN_005957c0(int param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_1c;
  undefined8 local_14;
  undefined8 local_c;
  
  FUN_00446af0(param_2);
  local_1c = *param_2;
  local_2c = *(undefined4 *)(param_1 + 8);
  local_28 = *(undefined4 *)(param_1 + 0xc);
  local_14 = param_2[1];
  local_c = param_2[2];
  iVar1 = *(int *)(param_3 + 0x58);
  local_24 = local_2c;
  local_20 = local_28;
  iVar2 = FUN_00451c70(iVar1,*(undefined4 *)(iVar1 + 4),&local_2c);
  if (*(int *)(param_3 + 0x5c) == 0x5555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(param_3 + 0x5c) = *(int *)(param_3 + 0x5c) + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_0059ed30 @ 0059ed30  kind=gamemisc  attributed-by=caller-vote  size=345 */

int FUN_0059ed30(int param_1,int param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int local_14;
  int local_10;
  
  iVar1 = FUN_00434d10((int)(param_1 + (param_1 >> 0x1f & 0xffU)) >> 8,
                       (int)(param_2 + (param_2 >> 0x1f & 0xffU)) >> 8);
  if ((iVar1 == 0) || (piVar9 = *(int **)(iVar1 + 0x88), piVar9 == *(int **)(iVar1 + 0x8c))) {
    return 0;
  }
  do {
    iVar10 = 0;
    local_10 = 0;
    while( true ) {
      iVar6 = *piVar9;
      uVar3 = *(uint *)(iVar6 + 4) & 0x80000001;
      bVar12 = uVar3 == 0;
      if ((int)uVar3 < 0) {
        bVar12 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar12) {
        iVar5 = *(int *)(iVar6 + 100);
      }
      else {
        iVar5 = *(int *)(iVar6 + 0x68);
      }
      if (iVar5 <= iVar10) break;
      iVar7 = 0;
      iVar5 = 0;
      while( true ) {
        uVar3 = *(uint *)(iVar6 + 4) & 0x80000001;
        bVar12 = uVar3 == 0;
        if ((int)uVar3 < 0) {
          bVar12 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar12) {
          iVar11 = *(int *)(iVar6 + 0x68);
        }
        else {
          iVar11 = *(int *)(iVar6 + 100);
        }
        if (iVar11 <= iVar7) break;
        iVar11 = 0;
        if (0 < *(int *)(iVar6 + 0x6c)) {
          local_14 = 0;
          do {
            pcVar2 = (char *)FUN_00598930(iVar10,iVar7,iVar11);
            if (*pcVar2 == '\x01') {
              iVar6 = *piVar9;
              iVar8 = *(int *)(iVar6 + 0xc) + local_10;
              iVar4 = *(int *)(iVar6 + 0x10) + iVar5;
              iVar6 = *(int *)(iVar6 + 0x14) + local_14;
              if ((((iVar8 <= param_1) && (iVar4 <= param_2)) && (iVar6 <= param_3)) &&
                 (((param_1 <= iVar8 + 0xd && (param_2 <= iVar4 + 0xd)) && (param_3 <= iVar6 + 6))))
              {
                return *piVar9;
              }
            }
            iVar6 = *piVar9;
            local_14 = local_14 + 7;
            iVar11 = iVar11 + 1;
          } while (iVar11 < *(int *)(iVar6 + 0x6c));
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 0xd;
      }
      iVar10 = iVar10 + 1;
      local_10 = local_10 + 0xd;
    }
    piVar9 = piVar9 + 1;
    if (piVar9 == *(int **)(iVar1 + 0x8c)) {
      return 0;
    }
  } while( true );
}


/* FUN_0059f0a0 @ 0059f0a0  kind=gamemisc  attributed-by=caller-vote  size=1952 */

/* WARNING: Removing unreachable block (ram,0x0059f755) */
/* WARNING: Removing unreachable block (ram,0x0059f69a) */
/* WARNING: Removing unreachable block (ram,0x0059f7fa) */

void FUN_0059f0a0(uint *param_1,float *param_2,char param_3)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  int in_ECX;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  undefined8 uVar21;
  longlong lVar22;
  longlong lVar23;
  uint local_2c [6];
  undefined8 local_14;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = CONCAT44(param_2[1] * 0.5,*param_2 * 0.5);
  local_c = param_2[2] * 0.5;
  iVar15 = 0;
  do {
    uVar21 = FUN_0068d946();
    local_2c[iVar15 * 2] = (uint)uVar21;
    local_2c[iVar15 * 2 + 1] = (uint)((ulonglong)uVar21 >> 0x20);
    iVar15 = iVar15 + 1;
  } while (iVar15 < 3);
  bVar19 = param_1[2] < local_2c[2];
  iVar14 = param_1[2] - local_2c[2];
  iVar15 = param_1[3] - local_2c[3];
  bVar20 = param_1[4] < local_2c[4];
  iVar12 = param_1[4] - local_2c[4];
  uVar11 = param_1[5];
  iVar16 = uVar11 - local_2c[5];
  uVar5 = __alldiv(*param_1 - local_2c[0],
                   (param_1[1] - local_2c[1]) - (uint)(*param_1 < local_2c[0]),0x10000,0);
  uVar6 = __alldiv(iVar14,iVar15 - (uint)bVar19,0x10000,0);
  iVar15 = __alldiv(iVar12,iVar16 - (uint)bVar20,0x10000,0);
  iVar16 = 0;
  local_14 = CONCAT44(param_2[1] * 0.5,*param_2 * 0.5);
  local_c = param_2[2] * 0.5;
  do {
    uVar21 = FUN_0068d946();
    local_2c[iVar16 * 2] = (uint)uVar21;
    local_2c[iVar16 * 2 + 1] = (uint)((ulonglong)uVar21 >> 0x20);
    iVar16 = iVar16 + 1;
  } while (iVar16 < 3);
  uVar13 = param_1[2];
  uVar10 = param_1[3];
  uVar17 = param_1[4];
  iVar16 = __alldiv(*param_1 + local_2c[0],
                    param_1[1] + local_2c[1] + (uint)CARRY4(*param_1,local_2c[0]),0x10000,0);
  iVar12 = __alldiv(uVar13 + local_2c[2],uVar10 + local_2c[3] + (uint)CARRY4(uVar13,local_2c[2]),
                    0x10000,0);
  iVar14 = __alldiv(uVar17 + local_2c[4],uVar11 + local_2c[5] + (uint)CARRY4(uVar17,local_2c[4]),
                    0x10000,0);
  for (uVar11 = uVar5; uVar13 = uVar6, (int)uVar11 <= iVar16; uVar11 = uVar11 + 1) {
    for (; iVar18 = iVar15, (int)uVar13 <= iVar12; uVar13 = uVar13 + 1) {
      for (; iVar18 <= iVar14; iVar18 = iVar18 + 1) {
        if ((((((int)uVar11 <= (int)uVar5) || (iVar16 <= (int)uVar11)) ||
             ((int)uVar13 <= (int)uVar6)) || ((iVar12 <= (int)uVar13 || (iVar18 <= iVar15)))) ||
           (iVar14 <= iVar18)) {
          if ((((int)uVar11 < 0) || ((int)uVar13 < 0)) ||
             ((0xffffff < (int)uVar11 || (0xffffff < (int)uVar13)))) {
LAB_0059f407:
            puVar9 = &DAT_0076b7d4;
          }
          else {
            iVar7 = ((int)uVar13 >> 0x1f & 0xffU) + uVar13;
            uVar17 = iVar7 >> 8;
            iVar8 = ((int)uVar11 >> 0x1f & 0xffU) + uVar11;
            uVar10 = iVar8 >> 8;
            if (((((int)uVar10 < 0) || ((int)uVar17 < 0)) || (0xffff < (int)uVar10)) ||
               (0xffff < (int)uVar17)) goto LAB_0059f407;
            iVar7 = (int)(uVar17 + (iVar7 >> 0x1f & 0x3fU)) >> 6;
            iVar8 = (int)(uVar10 + (iVar8 >> 0x1f & 0x3fU)) >> 6;
            if (((iVar8 < 0) || (iVar7 < 0)) ||
               ((0x3ff < iVar8 ||
                ((0x3ff < iVar7 ||
                 (iVar7 = *(int *)(in_ECX + 0xbc + (iVar8 * 0x400 + iVar7) * 4), iVar7 == 0))))))
            goto LAB_0059f407;
            uVar10 = uVar10 & 0x8000003f;
            if ((int)uVar10 < 0) {
              uVar10 = (uVar10 - 1 | 0xffffffc0) + 1;
            }
            uVar17 = uVar17 & 0x8000003f;
            if ((int)uVar17 < 0) {
              uVar17 = (uVar17 - 1 | 0xffffffc0) + 1;
            }
            iVar7 = *(int *)(iVar7 + 0x10018 + (uVar10 * 0x40 + uVar17) * 4);
            if (iVar7 == 0) goto LAB_0059f407;
            uVar10 = uVar13 & 0x800000ff;
            if ((int)uVar10 < 0) {
              uVar10 = (uVar10 - 1 | 0xffffff00) + 1;
            }
            uVar17 = uVar11 & 0x800000ff;
            if ((int)uVar17 < 0) {
              uVar17 = (uVar17 - 1 | 0xffffff00) + 1;
            }
            iVar7 = (uVar10 * 0x100 + uVar17) * 0x20 + *(int *)(iVar7 + 0xa8);
            if ((iVar7 == 0) || (iVar8 = *(int *)(iVar7 + 0x10), iVar18 < iVar8)) goto LAB_0059f407;
            if (iVar18 < *(int *)(iVar7 + 0x1c) + iVar8) {
              puVar9 = (undefined *)FUN_0042f730(iVar18 - iVar8);
              if ((((puVar9[3] & 0x1f) == 0) && (iVar18 < 1)) && ((puVar9[3] & 0x40) == 0)) {
                puVar9 = &DAT_0076b7cc;
              }
            }
            else {
              puVar9 = &DAT_0076b7cc;
              if (0 < iVar18) {
                puVar9 = &DAT_0076b7d0;
              }
            }
          }
          if (((puVar9[3] & 0x1f) != 0) && ((puVar9[3] & 0x1f) != 2)) goto LAB_0059f5cb;
        }
      }
    }
  }
  if (param_3 != '\0') {
    iVar15 = __alldiv(*param_1,param_1[1],0x10000,0);
    iVar15 = (int)((iVar15 >> 0x1f & 7U) + iVar15) >> 3;
    iVar16 = __alldiv(param_1[2],param_1[3],0x10000,0);
    uVar11 = iVar15 - 1;
    iVar15 = iVar15 + 1;
    iVar16 = (int)(iVar16 + (iVar16 >> 0x1f & 7U)) >> 3;
    if ((int)uVar11 <= iVar15) {
      uVar5 = iVar16 - 1;
      uVar6 = uVar5;
      do {
        for (; (int)uVar6 <= iVar16 + 1; uVar6 = uVar6 + 1) {
          if (((-1 < (int)uVar11) && (-1 < (int)uVar6)) &&
             (((int)uVar11 < 0x200000 &&
              (((int)uVar6 < 0x200000 &&
               (iVar12 = FUN_00434d10((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5,
                                      (int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5), iVar12 != 0
               )))))) {
            uVar13 = uVar6 & 0x8000001f;
            if ((int)uVar13 < 0) {
              uVar13 = (uVar13 - 1 | 0xffffffe0) + 1;
            }
            uVar10 = uVar11 & 0x8000001f;
            if ((int)uVar10 < 0) {
              uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
            }
            piVar2 = (int *)(*(int *)(iVar12 + 0xac) + (uVar13 * 0x20 + uVar10) * 8);
            if (piVar2 != (int *)0x0) {
              puVar3 = (undefined4 *)*piVar2;
              for (puVar4 = (undefined4 *)*puVar3; puVar4 != puVar3; puVar4 = (undefined4 *)*puVar4)
              {
                piVar2 = (int *)puVar4[2];
                iVar12 = *piVar2;
                if ((((iVar12 != 7) && (iVar12 != 6)) && (iVar12 != 9)) &&
                   ((((iVar12 != 1 && (iVar12 != 8)) &&
                     ((iVar12 != 2 && ((iVar12 != 3 && (iVar12 != 5)))))) ||
                    ((char)piVar2[0xc] != '\0')))) {
                  local_c = (float)piVar2[0xb];
                  local_14 = *(undefined8 *)(piVar2 + 9);
                  lVar22 = FUN_0068d946();
                  uVar21 = FUN_0068d946();
                  iVar18 = (int)((ulonglong)uVar21 >> 0x20);
                  uVar10 = (uint)uVar21;
                  uVar13 = piVar2[2];
                  iVar7 = (piVar2[3] - (int)((ulonglong)lVar22 >> 0x20)) -
                          (uint)(uVar13 < (uint)lVar22);
                  iVar14 = iVar18 + param_1[1] + (uint)CARRY4(uVar10,*param_1);
                  iVar12 = puVar4[2];
                  if ((iVar7 <= iVar14) &&
                     (((iVar7 < iVar14 || (uVar13 - (uint)lVar22 <= uVar10 + *param_1)) &&
                      (CONCAT44((param_1[1] - iVar18) - (uint)(*param_1 < uVar10),*param_1 - uVar10)
                       < lVar22 + *(longlong *)(piVar2 + 2))))) {
                    lVar22 = FUN_0068d946();
                    uVar21 = FUN_0068d946();
                    iVar14 = (int)((ulonglong)uVar21 >> 0x20);
                    uVar10 = (uint)uVar21;
                    puVar1 = (uint *)(iVar12 + 0x10);
                    uVar13 = *puVar1;
                    iVar18 = (*(int *)(iVar12 + 0x14) - (int)((ulonglong)lVar22 >> 0x20)) -
                             (uint)(uVar13 < (uint)lVar22);
                    iVar12 = iVar14 + param_1[3] + (uint)CARRY4(uVar10,param_1[2]);
                    if ((iVar18 <= iVar12) &&
                       (((iVar18 < iVar12 || (uVar13 - (uint)lVar22 <= uVar10 + param_1[2])) &&
                        (CONCAT44((param_1[3] - iVar14) - (uint)(param_1[2] < uVar10),
                                  param_1[2] - uVar10) < lVar22 + *(longlong *)puVar1)))) {
                      uVar13 = param_1[4];
                      puVar1 = (uint *)(puVar4[2] + 0x18);
                      uVar10 = *puVar1;
                      iVar12 = *(int *)(puVar4[2] + 0x1c);
                      lVar22 = *(longlong *)puVar1;
                      uVar21 = FUN_0068d946();
                      uVar17 = param_1[5];
                      iVar14 = (int)((ulonglong)uVar21 >> 0x20) + uVar17 +
                               (uint)CARRY4((uint)uVar21,uVar13);
                      if ((iVar12 <= iVar14) &&
                         ((iVar12 < iVar14 || (uVar10 <= (uint)uVar21 + uVar13)))) {
                        uVar21 = FUN_0068d946();
                        lVar23 = FUN_0068d946();
                        if (CONCAT44((uVar17 - (int)((ulonglong)uVar21 >> 0x20)) -
                                     (uint)(uVar13 < (uint)uVar21),uVar13 - (uint)uVar21) <
                            lVar23 + lVar22) {
LAB_0059f5cb:
                          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        uVar11 = uVar11 + 1;
        uVar6 = uVar5;
      } while ((int)uVar11 <= iVar15);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005a78a0 @ 005a78a0  kind=gamemisc  attributed-by=caller-vote  size=89 */

undefined4 FUN_005a78a0(int *param_1,int *param_2,int *param_3,int *param_4)

{
  do {
    if (param_1 == param_2) {
LAB_005a78e4:
      if (param_3 == param_4) {
        return 0;
      }
      return 1;
    }
    if (param_3 == param_4) {
      if (param_1 != param_2) {
        return 0;
      }
      goto LAB_005a78e4;
    }
    if (*param_1 < *param_3) {
      return 1;
    }
    if (*param_3 < *param_1) {
      return 0;
    }
    param_1 = param_1 + 1;
    param_3 = param_3 + 1;
  } while( true );
}


/* FUN_005a7a40 @ 005a7a40  kind=gamemisc  attributed-by=caller-vote  size=46 */

void FUN_005a7a40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = *param_4;
  in_ECX[4] = param_4[1];
  in_ECX[5] = param_4[2];
  return;
}


/* FUN_005a7c10 @ 005a7c10  kind=gamemisc  attributed-by=caller-vote  size=126 */

undefined4 * FUN_005a7c10(undefined4 *param_1)

{
  int *piVar1;
  int *in_ECX;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)*in_ECX;
  if (*(char *)((int)local_8[1] + 0xd) == '\0') {
    puVar3 = (undefined4 *)local_8[1];
    do {
      piVar2 = (int *)*param_1;
      for (piVar1 = (int *)puVar3[4]; piVar1 != (int *)puVar3[5]; piVar1 = piVar1 + 1) {
        if (piVar2 == (int *)param_1[1]) {
          if (piVar1 != (int *)puVar3[5]) goto LAB_005a7c68;
          break;
        }
        if (*piVar1 < *piVar2) goto LAB_005a7c86;
        if (*piVar2 < *piVar1) goto LAB_005a7c68;
        piVar2 = piVar2 + 1;
      }
      if (piVar2 == (int *)param_1[1]) {
LAB_005a7c68:
        puVar4 = (undefined4 *)*puVar3;
        local_8 = puVar3;
      }
      else {
LAB_005a7c86:
        puVar4 = (undefined4 *)puVar3[2];
      }
      puVar3 = puVar4;
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  return local_8;
}


/* FUN_005a9d40 @ 005a9d40  kind=gamemisc  attributed-by=caller-vote  size=89 */

int FUN_005a9d40(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = (int)*param_1 >> 0x1f;
  iVar3 = (*param_1 ^ uVar1) - uVar1;
  uVar1 = (int)param_1[1] >> 0x1f;
  iVar4 = (param_1[1] ^ uVar1) - uVar1;
  uVar1 = (int)param_1[2] >> 0x1f;
  iVar2 = (param_1[2] ^ uVar1) - uVar1;
  if (iVar4 < iVar3) {
    return (iVar3 * 10 + iVar4 * 4 + iVar2 * 10) * 2;
  }
  return (iVar3 * 4 + iVar4 * 10 + iVar2 * 10) * 2;
}


/* FUN_005a9e50 @ 005a9e50  kind=gamemisc  attributed-by=caller-vote  size=304 */

void FUN_005a9e50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  int in_ECX;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [8];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f35c8;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_28 = (undefined4 *)0x0;
  local_24 = 0;
  local_20 = 0;
  local_14 = in_ECX;
  FUN_0040d9d0(3);
  *local_28 = param_1;
  local_28[1] = param_2;
  local_28[2] = param_3;
  local_8 = 0;
  puVar4 = (undefined4 *)FUN_005a7a70(&local_28);
  *puVar4 = *param_4;
  puVar4[1] = param_4[1];
  puVar4[2] = param_4[2];
  puVar4[3] = param_4[3];
  puVar4[4] = param_4[4];
  puVar4[5] = param_4[5];
  FUN_005a7700(local_1c,0,&local_28,DAT_0076dda2);
  puVar4 = local_28;
  iVar1 = *(int *)(in_ECX + 0x140c);
  if ((*(int *)(in_ECX + 0x1408) != iVar1) &&
     (*(int *)(*(int *)(in_ECX + 0x1408) + 0x20) <= (int)param_4[1])) goto LAB_005a9f62;
  param_1 = FUN_005a7c10(&local_28);
  if (param_1 == iVar1) {
LAB_005a9f51:
    param_1 = iVar1;
  }
  else {
    cVar2 = FUN_005a78a0(puVar4,local_24,*(undefined4 *)(param_1 + 0x10),
                         *(undefined4 *)(param_1 + 0x14),uVar3);
    if (cVar2 != '\0') goto LAB_005a9f51;
  }
  *(int *)(local_14 + 0x1408) = param_1;
LAB_005a9f62:
  if (puVar4 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar4);
  }
  ExceptionList = local_10;
  return;
}


/* FUN_00609480 @ 00609480  kind=gamemisc  attributed-by=caller-vote  size=5444 */

/* WARNING: Removing unreachable block (ram,0x0060a066) */
/* WARNING: Removing unreachable block (ram,0x00609ebe) */
/* WARNING: Removing unreachable block (ram,0x00609e07) */
/* WARNING: Removing unreachable block (ram,0x00609fbb) */
/* WARNING: Removing unreachable block (ram,0x0060a0b4) */

void FUN_00609480(int param_1,float *param_2,float *param_3,float param_4)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 **ppuVar11;
  undefined4 uVar12;
  uint uVar13;
  float fVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  undefined4 *puVar19;
  float fVar20;
  bool bVar21;
  double dVar22;
  float fVar23;
  undefined8 uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  undefined1 auStack_2d0 [7];
  char local_2c9;
  float local_2c8;
  float local_2c4;
  uint local_2c0;
  uint local_2bc;
  float local_2b8;
  int *local_2b4;
  float local_2b0;
  float local_2ac;
  int *local_2a8;
  int local_2a4;
  float local_2a0;
  int iStack_29c;
  char local_291;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  int local_27c;
  int *local_278;
  int local_274;
  int *local_270;
  float local_26c;
  undefined4 *local_268;
  float *local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  int local_22c;
  undefined4 *local_228;
  undefined4 local_224;
  float local_220;
  float local_21c;
  undefined8 local_218;
  int local_210;
  int iStack_20c;
  float local_208 [2];
  int *local_200;
  float fStack_1fc;
  undefined8 local_1f8;
  float local_1ec [3];
  uint local_1e0;
  int iStack_1dc;
  uint local_1d8;
  int iStack_1d4;
  longlong local_1d0;
  undefined8 local_1c4;
  float local_1bc;
  uint local_1b8;
  int iStack_1b4;
  uint local_1b0;
  int iStack_1ac;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong local_190;
  int local_188;
  int iStack_184;
  int local_180;
  int iStack_17c;
  undefined8 local_178;
  int local_170;
  int iStack_16c;
  int local_168;
  int iStack_164;
  longlong local_160;
  int local_154;
  int local_150;
  int local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  uint local_130;
  int *local_12c;
  int local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  int local_110;
  int iStack_10c;
  int local_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e4 [9];
  uint local_c0 [7];
  float local_a4 [3];
  uint local_98 [18];
  longlong local_50;
  longlong local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int local_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)auStack_2d0;
  local_2a4 = param_1;
  local_28c = *param_2;
  local_2b4 = (int *)param_2[2];
  local_2ac = param_2[1];
  local_2b0 = param_2[3];
  fVar23 = *param_3;
  local_284 = param_3[1];
  local_40 = (int)local_28c - (int)fVar23;
  iStack_3c = ((int)local_2ac - (int)local_284) - (uint)((uint)local_28c < (uint)fVar23);
  local_2a8 = (int *)param_3[2];
  local_2c8 = param_3[3];
  local_38 = (int)local_2b4 - (int)local_2a8;
  iStack_34 = ((int)local_2b0 - (int)local_2c8) - (uint)(local_2b4 < local_2a8);
  local_118 = (float)CONCAT44(iStack_3c,local_40) * 1.5258789e-05;
  local_258 = param_4 * param_4;
  local_114 = (float)CONCAT44(iStack_34,local_38) * 1.5258789e-05;
  if (local_114 * local_114 + local_118 * local_118 < local_258) {
    local_2a0 = (float)((int)param_2[4] - (int)param_3[4]);
    iStack_29c = ((int)param_2[5] - (int)param_3[5]) - (uint)((uint)param_2[4] < (uint)param_3[4]);
    local_2c4 = (float)CONCAT44(iStack_29c,local_2a0);
    if (ABS(local_2c4 * 1.5258789e-05) < *(float *)(param_1 + 0x88) + param_4) {
LAB_006095eb:
      __security_check_cookie(local_c ^ (uint)auStack_2d0);
      return;
    }
  }
  local_28 = (int)fVar23 - (int)local_28c;
  local_1f8._0_4_ = param_2[4];
  local_1f8._4_4_ = param_2[5];
  iStack_24 = ((int)local_284 - (int)local_2ac) - (uint)((uint)fVar23 < (uint)local_28c);
  local_20 = (int)local_2a8 - (int)local_2b4;
  iStack_1c = ((int)local_2c8 - (int)local_2b0) - (uint)(local_2a8 < local_2b4);
  local_124 = (float)CONCAT44(iStack_24,local_28) * 1.5258789e-05;
  local_120 = (float)CONCAT44(iStack_1c,local_20) * 1.5258789e-05;
  local_21c = 0.0;
  fVar23 = local_120 * local_120 + local_124 * local_124 + 0.0;
  local_2c8 = local_120;
  local_2c4 = local_124;
  local_208[0] = local_28c;
  local_208[1] = local_2ac;
  local_200 = local_2b4;
  fStack_1fc = local_2b0;
  if (2500.0 < fVar23) {
    dVar22 = (double)fVar23;
    libm_sse2_sqrt_precise();
    local_124 = (1.0 / (float)dVar22) * local_2c4 * 50.0;
    local_120 = (1.0 / (float)dVar22) * local_2c8 * 50.0;
  }
  dVar22 = (double)(local_120 * local_120 + local_124 * local_124 + 0.5625);
  libm_sse2_sqrt_precise();
  lVar26 = CONCAT44(local_2a8,local_290);
  lVar25 = CONCAT44(local_2c8,local_278);
  local_2c4 = 0.0;
  local_2a0 = (float)(int)((float)dVar22 + 1.0);
  lVar27 = local_1f8;
  if (0 < (int)local_2a0) {
    do {
      iVar17 = local_2a4;
      local_2a8 = (int *)((ulonglong)lVar26 >> 0x20);
      local_290 = (float)lVar26;
      local_1a0 = CONCAT44(((int)local_208[1] - (int)param_3[1]) -
                           (uint)((uint)local_208[0] < (uint)*param_3),
                           (int)local_208[0] - (int)*param_3);
      local_198 = CONCAT44(((int)fStack_1fc - (int)param_3[3]) -
                           (uint)(local_200 < (int *)param_3[2]),(int)local_200 - (int)param_3[2]);
      pfVar1 = param_3 + 4;
      local_50 = local_1a0;
      local_190 = local_1f8 - *(longlong *)pfVar1;
      local_48 = local_198;
      local_f8 = (float)local_1a0 * 1.5258789e-05;
      local_f4 = (float)local_198 * 1.5258789e-05;
      if (local_f4 * local_f4 + local_f8 * local_f8 <= local_258) {
        local_218 = local_1f8 - *(longlong *)pfVar1;
        local_2c8 = (float)(local_1f8 - *(longlong *)pfVar1);
        if (ABS(local_2c8 * 1.5258789e-05) < *(float *)(local_2a4 + 0x88) + param_4)
        goto LAB_006095eb;
      }
      local_148._0_4_ = (float)*(undefined8 *)param_3;
      local_148._4_4_ = (int)((ulonglong)*(undefined8 *)param_3 >> 0x20);
      local_148 = CONCAT44((local_148._4_4_ - (int)local_208[1]) -
                           (uint)((uint)(float)local_148 < (uint)local_208[0]),
                           (int)(float)local_148 - (int)local_208[0]);
      local_140._0_4_ = (int *)*(undefined8 *)(param_3 + 2);
      local_140._4_4_ = (int)((ulonglong)*(undefined8 *)(param_3 + 2) >> 0x20);
      local_140 = CONCAT44((local_140._4_4_ - (int)fStack_1fc) -
                           (uint)((int *)local_140 < local_200),
                           (int)(int *)local_140 - (int)local_200);
      local_138 = *(undefined8 *)(param_3 + 4);
      local_1ec[0] = (float)local_148 * 1.5258789e-05;
      local_2c8 = (float)local_140 * 1.5258789e-05;
      local_1ec[1] = local_2c8;
      fVar23 = local_2c8 * local_2c8 + local_1ec[0] * local_1ec[0] + local_21c;
      if (0.0 < fVar23) {
        dVar22 = (double)fVar23;
        libm_sse2_sqrt_precise();
        lVar26 = CONCAT44(local_2a8,local_290);
        local_1ec[0] = (1.0 / (float)dVar22) * local_1ec[0];
        local_1ec[1] = (1.0 / (float)dVar22) * local_2c8;
      }
      lVar25 = CONCAT44(local_2c8,local_278);
      local_1ec[2] = -0.71;
      local_2b0 = 0.0;
      local_264 = (float *)(iVar17 + 0x80);
      do {
        fVar20 = local_2b0;
        local_2a8 = (int *)((ulonglong)lVar26 >> 0x20);
        local_290 = (float)lVar26;
        local_2c8 = (float)((ulonglong)lVar25 >> 0x20);
        local_278 = (int *)lVar25;
        local_240 = local_1ec[(int)local_2b0] * 65536.0;
        uVar24 = FUN_0068d946();
        local_22c = (int)((ulonglong)uVar24 >> 0x20);
        local_234 = (float)uVar24;
        pfVar1 = local_208 + (int)fVar20 * 2;
        fVar23 = *pfVar1;
        *pfVar1 = (float)((int)*pfVar1 + (int)local_234);
        local_208[(int)fVar20 * 2 + 1] =
             (float)((int)local_208[(int)fVar20 * 2 + 1] + local_22c +
                    (uint)CARRY4((uint)fVar23,(uint)local_234));
        local_291 = '\x01';
        cVar4 = FUN_0059f0a0(local_208,iVar17 + 0x80,0);
        lVar26 = CONCAT44(local_2a8,local_290);
        lVar25 = CONCAT44(local_2c8,local_278);
        local_2c9 = cVar4;
        if ((cVar4 == '\0') || (cVar5 = local_291, fVar20 == 2.8026e-45)) {
          iVar17 = __alldiv(local_208[0],local_208[1],0x10000,0);
          iVar6 = (int)((iVar17 >> 0x1f & 7U) + iVar17) >> 3;
          iVar17 = __alldiv(local_200,fStack_1fc,0x10000,0);
          lVar26 = CONCAT44(local_2a8,local_290);
          lVar25 = CONCAT44(local_2c8,local_278);
          uVar13 = iVar6 - 1;
          local_288 = (float)(iVar6 + 1);
          iVar17 = (int)(iVar17 + (iVar17 >> 0x1f & 7U)) >> 3;
          if ((int)local_288 < (int)uVar13) {
            cVar4 = local_2c9;
            local_2bc = uVar13;
            if (local_2c9 != '\0') {
LAB_0060a124:
              iVar17 = local_2a4;
              cVar5 = '\0';
              goto LAB_0060a12a;
            }
          }
          else {
            local_280 = (float)(iVar17 - 1);
            uVar18 = iVar17 + 1;
            fVar23 = local_280;
            local_2c0 = uVar18;
            do {
              cVar5 = local_2c9;
              local_2bc = uVar13;
              if ((int)uVar18 < (int)fVar23) {
                fVar14 = fVar23;
                fVar20 = local_2b0;
                cVar4 = local_2c9;
                local_2b8 = fVar23;
                if (local_2c9 != '\0') goto LAB_0060a124;
              }
              else {
                do {
                  local_278 = (int *)lVar25;
                  local_2b8 = fVar23;
                  if ((((-1 < (int)uVar13) && (-1 < (int)fVar23)) && ((int)uVar13 < 0x200000)) &&
                     ((int)fVar23 < 0x200000)) {
                    iVar17 = ((int)fVar23 >> 0x1f & 0x1fU) + (int)fVar23;
                    uVar16 = iVar17 >> 5;
                    iVar6 = ((int)uVar13 >> 0x1f & 0x1fU) + uVar13;
                    uVar8 = iVar6 >> 5;
                    uVar13 = local_2bc;
                    uVar18 = local_2c0;
                    cVar5 = local_2c9;
                    if (((-1 < (int)uVar8) && (-1 < (int)uVar16)) &&
                       (((int)uVar8 < 0x10000 && ((int)uVar16 < 0x10000)))) {
                      iVar6 = (int)(uVar8 + (iVar6 >> 0x1f & 0x3fU)) >> 6;
                      iVar17 = (int)((iVar17 >> 0x1f & 0x3fU) + uVar16) >> 6;
                      if (((-1 < iVar6) && (-1 < iVar17)) &&
                         ((iVar6 < 0x400 &&
                          ((iVar17 < 0x400 &&
                           (iVar17 = *(int *)(local_274 + 0xbc + (iVar6 * 0x400 + iVar17) * 4),
                           iVar17 != 0)))))) {
                        uVar8 = uVar8 & 0x8000003f;
                        if ((int)uVar8 < 0) {
                          uVar8 = (uVar8 - 1 | 0xffffffc0) + 1;
                        }
                        uVar16 = uVar16 & 0x8000003f;
                        if ((int)uVar16 < 0) {
                          uVar16 = (uVar16 - 1 | 0xffffffc0) + 1;
                        }
                        iVar17 = *(int *)(iVar17 + 0x10018 + (uVar8 * 0x40 + uVar16) * 4);
                        if (iVar17 != 0) {
                          uVar8 = (uint)fVar23 & 0x8000001f;
                          if ((int)uVar8 < 0) {
                            uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
                          }
                          uVar16 = local_2bc & 0x8000001f;
                          if ((int)uVar16 < 0) {
                            uVar16 = (uVar16 - 1 | 0xffffffe0) + 1;
                          }
                          piVar15 = (int *)(*(int *)(iVar17 + 0xac) + (uVar8 * 0x20 + uVar16) * 8);
                          if (piVar15 != (int *)0x0) {
                            local_270 = (int *)*piVar15;
                            piVar15 = (int *)*local_270;
                            if (piVar15 != local_270) {
                              do {
                                local_2a8 = (int *)((ulonglong)lVar26 >> 0x20);
                                local_290 = (float)lVar26;
                                local_2b4 = (int *)piVar15[2];
                                iVar17 = *local_2b4;
                                lVar25 = CONCAT44(iVar17,local_278);
                                if (((iVar17 != 7) &&
                                    (lVar25 = CONCAT44(iVar17,local_278), iVar17 != 6)) &&
                                   (lVar25 = CONCAT44(iVar17,local_278), iVar17 != 9)) {
                                  puVar3 = *(undefined4 **)(local_2a4 + 0x1468);
                                  puVar19 = puVar3;
                                  if (*(char *)((int)puVar3[1] + 0xd) == '\0') {
                                    puVar9 = (undefined4 *)puVar3[1];
                                    do {
                                      if ((uint)puVar9[4] < (uint)piVar15[2]) {
                                        puVar10 = (undefined4 *)puVar9[2];
                                      }
                                      else {
                                        puVar10 = (undefined4 *)*puVar9;
                                        puVar19 = puVar9;
                                      }
                                      puVar9 = puVar10;
                                    } while (*(char *)((int)puVar10 + 0xd) == '\0');
                                  }
                                  if ((puVar19 == puVar3) || ((uint)piVar15[2] < (uint)puVar19[4]))
                                  {
                                    local_268 = puVar3;
                                    ppuVar11 = &local_268;
                                  }
                                  else {
                                    local_228 = puVar19;
                                    ppuVar11 = &local_228;
                                  }
                                  lVar25 = CONCAT44(iVar17,local_278);
                                  if ((*ppuVar11 == puVar3) &&
                                     ((((iVar17 != 1 && (iVar17 != 8)) &&
                                       ((iVar17 != 2 && ((iVar17 != 3 && (iVar17 != 5)))))) ||
                                      (lVar25 = CONCAT44(iVar17,local_278),
                                      (char)local_2b4[0xc] != '\0')))) {
                                    local_1c4 = *(undefined8 *)(local_2b4 + 9);
                                    local_1bc = (float)local_2b4[0xb];
                                    uVar13 = local_2b4[8] & 0x80000001;
                                    bVar21 = uVar13 == 0;
                                    if ((int)uVar13 < 0) {
                                      bVar21 = (uVar13 - 1 | 0xfffffffe) == 0xffffffff;
                                    }
                                    if (!bVar21) {
                                      local_1c4._4_4_ = (float)((ulonglong)local_1c4 >> 0x20);
                                      local_1c4 = CONCAT44((float)local_1c4,local_1c4._4_4_);
                                    }
                                    local_210 = (int)local_208[(int)local_2b0 * 2] -
                                                local_2b4[(int)local_2b0 * 2 + 2];
                                    iStack_20c = ((int)local_208[(int)local_2b0 * 2 + 1] -
                                                 local_2b4[(int)local_2b0 * 2 + 3]) -
                                                 (uint)((uint)local_208[(int)local_2b0 * 2] <
                                                       (uint)local_2b4[(int)local_2b0 * 2 + 2]);
                                    local_2c8 = (float)CONCAT44(iStack_20c,local_210);
                                    local_25c = local_2c8 * local_1ec[(int)local_2b0];
                                    uVar24 = FUN_0068d946();
                                    local_2c8 = (float)uVar24;
                                    local_224 = 0;
                                    lVar27 = FUN_0068d946();
                                    lVar26 = CONCAT44(local_2a8,local_290);
                                    lVar25 = CONCAT44(local_2c8,local_278);
                                    if (CONCAT44((int)((ulonglong)uVar24 >> 0x20),local_2c8) <
                                        lVar27) {
                                      local_260 = (float)local_1c4 * 0.5 * 65536.0;
                                      uVar24 = FUN_0068d946();
                                      local_28c = (float)((ulonglong)uVar24 >> 0x20);
                                      local_278 = (int *)uVar24;
                                      local_2c8 = (float)local_2b4[2];
                                      fVar23 = (float)local_2b4[3];
                                      local_238 = *local_264 * 0.5 * 65536.0;
                                      local_2ac = fVar23;
                                      lVar26 = FUN_0068d946();
                                      local_2a8 = (int *)((ulonglong)lVar26 >> 0x20);
                                      local_290 = (float)lVar26;
                                      local_27c = (int)local_2c8 - (int)local_278;
                                      lVar27 = lVar26 + CONCAT44(local_208[1],local_208[0]);
                                      uVar12 = (undefined4)lVar27;
                                      lVar25 = CONCAT44(uVar12,local_278);
                                      if (CONCAT44(((int)fVar23 - (int)local_28c) -
                                                   (uint)((uint)local_2c8 < local_278),local_27c) <=
                                          lVar27) {
                                        local_2ac = (float)((int)fVar23 + (int)local_28c +
                                                           (uint)CARRY4((uint)local_2c8,
                                                                        (uint)local_278));
                                        iVar17 = ((int)local_208[1] - (int)local_2a8) -
                                                 (uint)((uint)local_208[0] < (uint)local_290);
                                        lVar25 = CONCAT44(uVar12,local_278);
                                        if ((iVar17 <= (int)local_2ac) &&
                                           ((iVar17 < (int)local_2ac ||
                                            (lVar25 = CONCAT44(uVar12,local_278),
                                            (uint)((int)local_208[0] - (int)local_290) <
                                            (uint)((int)local_2c8 + (int)local_278))))) {
                                          local_250 = local_1c4._4_4_ * 0.5 * 65536.0;
                                          local_2c8 = (float)uVar12;
                                          uVar24 = FUN_0068d946();
                                          local_28c = (float)((ulonglong)uVar24 >> 0x20);
                                          local_2a8 = (int *)uVar24;
                                          local_290 = (float)local_2b4[4];
                                          fVar23 = (float)local_2b4[5];
                                          local_230 = *(float *)(local_2a4 + 0x84) * 0.5 * 65536.0;
                                          local_2ac = fVar23;
                                          lVar25 = FUN_0068d946();
                                          local_2c8 = (float)((ulonglong)lVar25 >> 0x20);
                                          local_278 = (int *)lVar25;
                                          local_27c = (int)local_290 - (int)local_2a8;
                                          lVar27 = lVar25 + CONCAT44(fStack_1fc,local_200);
                                          uVar12 = (undefined4)lVar27;
                                          lVar26 = CONCAT44(local_2a8,uVar12);
                                          if (CONCAT44(((int)fVar23 - (int)local_28c) -
                                                       (uint)((uint)local_290 < local_2a8),local_27c
                                                      ) <= lVar27) {
                                            local_2ac = (float)((int)fVar23 + (int)local_28c +
                                                               (uint)CARRY4((uint)local_290,
                                                                            (uint)local_2a8));
                                            iVar17 = ((int)fStack_1fc - (int)local_2c8) -
                                                     (uint)(local_200 < local_278);
                                            lVar26 = CONCAT44(local_2a8,uVar12);
                                            if ((iVar17 <= (int)local_2ac) &&
                                               ((iVar17 < (int)local_2ac ||
                                                (lVar26 = CONCAT44(local_2a8,uVar12),
                                                (uint)((int)local_200 - (int)local_278) <
                                                (uint)((int)local_290 + (int)local_2a8))))) {
                                              local_248 = *(float *)(local_2a4 + 0x88) * 0.5 *
                                                          65536.0;
                                              local_290 = (float)uVar12;
                                              lVar27 = FUN_0068d946();
                                              local_2c8 = (float)((ulonglong)lVar27 >> 0x20);
                                              lVar25 = CONCAT44(local_2c8,local_278);
                                              local_2a8 = (int *)lVar27;
                                              local_290 = (float)*(longlong *)(local_2b4 + 6);
                                              lVar26 = CONCAT44(local_2a8,local_290);
                                              local_27c = local_2b4[7];
                                              if (*(longlong *)(local_2b4 + 6) <= lVar27 + local_1f8
                                                 ) {
                                                local_220 = local_1bc * 65536.0;
                                                lVar27 = FUN_0068d946();
                                                lVar25 = CONCAT44(local_2c8,local_278);
                                                lVar26 = CONCAT44(local_2a8,local_290);
                                                if (local_1f8 - CONCAT44(local_2c8,local_2a8) <
                                                    lVar27 + CONCAT44(local_27c,local_290)) {
                                                  fVar20 = local_2b0;
                                                  cVar4 = '\x01';
                                                  lVar25 = CONCAT44(local_2c8,local_278);
                                                  lVar26 = CONCAT44(local_2a8,local_290);
                                                  goto LAB_0060a124;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                local_278 = (int *)lVar25;
                                piVar15 = (int *)*piVar15;
                                uVar13 = local_2bc;
                                uVar18 = local_2c0;
                                cVar5 = local_2c9;
                              } while (piVar15 != local_270);
                            }
                          }
                        }
                      }
                    }
                  }
                  fVar20 = local_2b0;
                  cVar4 = local_2c9;
                  if (cVar5 != '\0') goto LAB_0060a124;
                  fVar23 = (float)((int)local_2b8 + 1);
                  fVar14 = local_280;
                  local_2b8 = fVar23;
                } while ((int)fVar23 <= (int)uVar18);
              }
              uVar13 = uVar13 + 1;
              fVar23 = fVar14;
              fVar20 = local_2b0;
              local_2bc = uVar13;
            } while ((int)uVar13 <= (int)local_288);
          }
        }
        else {
LAB_0060a12a:
          if (cVar4 != '\0') {
            if (((fVar20 == 2.8026e-45) || (cVar5 == '\0')) ||
               ((*(ushort *)(iVar17 + 0x7e) & 0x100) != 0)) {
LAB_0060a881:
              pfVar1 = local_208 + (int)fVar20 * 2;
              fVar23 = *pfVar1;
              *pfVar1 = (float)((int)*pfVar1 - (int)local_234);
              local_208[(int)fVar20 * 2 + 1] =
                   (float)(((int)local_208[(int)fVar20 * 2 + 1] - local_22c) -
                          (uint)((uint)fVar23 < (uint)local_234));
            }
            else {
              local_288 = *(float *)(iVar17 + 0x80);
              local_280 = *(float *)(iVar17 + 0x84);
              local_270 = *(int **)(iVar17 + 0x88);
              local_284 = (float)((uint)local_284 & 0xffffff00);
              local_e4[0] = local_288 * 0.5;
              iVar17 = 0;
              local_e4[1] = local_280 * 0.5;
              local_e4[2] = (float)local_270 * 0.5;
              do {
                local_2a8 = (int *)((ulonglong)lVar26 >> 0x20);
                local_290 = (float)lVar26;
                local_2c8 = (float)((ulonglong)lVar25 >> 0x20);
                local_278 = (int *)lVar25;
                local_26c = local_e4[iVar17] * 65536.0;
                uVar24 = FUN_0068d946();
                lVar26 = CONCAT44(local_2a8,local_290);
                lVar25 = CONCAT44(local_2c8,local_278);
                local_98[iVar17 * 2] = (uint)uVar24;
                local_98[iVar17 * 2 + 1] = (uint)((ulonglong)uVar24 >> 0x20);
                iVar17 = iVar17 + 1;
              } while (iVar17 < 3);
              local_e4[3] = 0.0;
              local_e4[4] = 0.0;
              local_e4[5] = 1.01;
              iVar17 = 0;
              do {
                local_254 = local_e4[iVar17 + 3] * 65536.0;
                uVar24 = FUN_0068d946();
                local_c0[iVar17 * 2] = (uint)uVar24;
                local_c0[iVar17 * 2 + 1] = (uint)((ulonglong)uVar24 >> 0x20);
                iVar17 = iVar17 + 1;
              } while (iVar17 < 3);
              uVar13 = (int)local_208[0] + local_c0[0];
              iVar17 = (int)local_208[1] + local_c0[1] +
                       (uint)CARRY4((uint)local_208[0],local_c0[0]);
              _local_1e0 = CONCAT44(iVar17,uVar13);
              uVar18 = (int)local_200 + local_c0[2];
              iVar6 = (int)fStack_1fc + local_c0[3] + (uint)CARRY4((uint)local_200,local_c0[2]);
              _local_1d8 = CONCAT44(iVar6,uVar18);
              local_1d0 = local_1f8 + CONCAT44(local_c0[5],local_c0[4]);
              _local_170 = CONCAT44((iVar17 - local_98[1]) - (uint)(uVar13 < local_98[0]),
                                    uVar13 - local_98[0]);
              _local_168 = CONCAT44((iVar6 - local_98[3]) - (uint)(uVar18 < local_98[2]),
                                    uVar18 - local_98[2]);
              local_160 = (local_1f8 + CONCAT44(local_c0[5],local_c0[4])) -
                          CONCAT44(local_98[5],local_98[4]);
              FUN_0042f040(&local_130,&local_170);
              iVar17 = 0;
              local_a4[0] = local_288 * 0.5;
              local_a4[1] = local_280 * 0.5;
              local_a4[2] = (float)local_270 * 0.5;
              do {
                local_24c = local_a4[iVar17] * 65536.0;
                uVar24 = FUN_0068d946();
                local_98[iVar17 * 2 + 6] = (uint)uVar24;
                local_98[iVar17 * 2 + 7] = (uint)((ulonglong)uVar24 >> 0x20);
                iVar17 = iVar17 + 1;
              } while (iVar17 < 3);
              local_e4[6] = 0.0;
              local_e4[7] = 0.0;
              local_e4[8] = 1.01;
              iVar17 = 0;
              do {
                local_244 = local_e4[iVar17 + 6] * 65536.0;
                uVar24 = FUN_0068d946();
                local_98[iVar17 * 2 + 0xc] = (uint)uVar24;
                local_98[iVar17 * 2 + 0xd] = (uint)((ulonglong)uVar24 >> 0x20);
                iVar17 = iVar17 + 1;
              } while (iVar17 < 3);
              uVar13 = (int)local_208[0] + local_98[0xc];
              iVar17 = (int)local_208[1] + local_98[0xd] +
                       (uint)CARRY4((uint)local_208[0],local_98[0xc]);
              _local_1b8 = CONCAT44(iVar17,uVar13);
              uVar18 = (int)local_200 + local_98[0xe];
              iVar6 = (int)fStack_1fc + local_98[0xf] + (uint)CARRY4((uint)local_200,local_98[0xe]);
              _local_1b0 = CONCAT44(iVar6,uVar18);
              local_1a8 = local_1f8 + CONCAT44(local_98[0x11],local_98[0x10]);
              _local_188 = CONCAT44(iVar17 + local_98[7] + (uint)CARRY4(uVar13,local_98[6]),
                                    uVar13 + local_98[6]);
              _local_180 = CONCAT44(iVar6 + local_98[9] + (uint)CARRY4(uVar18,local_98[8]),
                                    uVar18 + local_98[8]);
              local_178 = local_1f8 + CONCAT44(local_98[0x11],local_98[0x10]) +
                          CONCAT44(local_98[0xb],local_98[10]);
              FUN_0042f040(&local_154,&local_188);
              local_2c0 = local_130;
              uVar13 = local_130;
              piVar15 = local_12c;
              if ((int)local_130 <= local_154) {
                do {
                  local_2b4 = piVar15;
                  piVar15 = local_2b4;
                  iVar17 = local_128;
                  local_2c0 = uVar13;
                  if ((int)local_2b4 <= local_150) {
                    do {
                      if (iVar17 <= local_14c) {
                        do {
                          if ((((int)uVar13 < 0) || ((int)local_2b4 < 0)) ||
                             ((0xffffff < (int)uVar13 || (0xffffff < (int)local_2b4)))) {
LAB_0060a74b:
                            puVar7 = &DAT_0076de34;
                          }
                          else {
                            iVar6 = ((int)local_2b4 >> 0x1f & 0xffU) + (int)local_2b4;
                            uVar18 = iVar6 >> 8;
                            iVar2 = ((int)uVar13 >> 0x1f & 0xffU) + uVar13;
                            uVar13 = iVar2 >> 8;
                            if (((((int)uVar13 < 0) || ((int)uVar18 < 0)) || (0xffff < (int)uVar13))
                               || (0xffff < (int)uVar18)) goto LAB_0060a74b;
                            local_288 = (float)((int)(uVar18 + (iVar6 >> 0x1f & 0x3fU)) >> 6);
                            iVar6 = (int)(uVar13 + (iVar2 >> 0x1f & 0x3fU)) >> 6;
                            if ((((iVar6 < 0) || ((int)local_288 < 0)) || (0x3ff < iVar6)) ||
                               ((0x3ff < (int)local_288 ||
                                (iVar6 = *(int *)(local_274 + 0xbc +
                                                 ((int)local_288 + iVar6 * 0x400) * 4), iVar6 == 0))
                               )) goto LAB_0060a74b;
                            uVar13 = uVar13 & 0x8000003f;
                            if ((int)uVar13 < 0) {
                              uVar13 = (uVar13 - 1 | 0xffffffc0) + 1;
                            }
                            uVar18 = uVar18 & 0x8000003f;
                            if ((int)uVar18 < 0) {
                              uVar18 = (uVar18 - 1 | 0xffffffc0) + 1;
                            }
                            iVar6 = *(int *)(iVar6 + 0x10018 + (uVar13 * 0x40 + uVar18) * 4);
                            if (iVar6 == 0) goto LAB_0060a74b;
                            uVar13 = (uint)local_2b4 & 0x800000ff;
                            if ((int)uVar13 < 0) {
                              uVar13 = (uVar13 - 1 | 0xffffff00) + 1;
                            }
                            uVar18 = local_2c0 & 0x800000ff;
                            if ((int)uVar18 < 0) {
                              uVar18 = (uVar18 - 1 | 0xffffff00) + 1;
                            }
                            iVar6 = (uVar13 * 0x100 + uVar18) * 0x20 + *(int *)(iVar6 + 0xa8);
                            if ((iVar6 == 0) || (iVar2 = *(int *)(iVar6 + 0x10), iVar17 < iVar2))
                            goto LAB_0060a74b;
                            if (iVar17 < *(int *)(iVar6 + 0x1c) + iVar2) {
                              puVar7 = (undefined *)FUN_0042f730(iVar17 - iVar2);
                              if ((((puVar7[3] & 0x1f) == 0) && (iVar17 < 1)) &&
                                 ((puVar7[3] & 0x40) == 0)) {
                                puVar7 = &DAT_0076de2c;
                              }
                            }
                            else {
                              puVar7 = &DAT_0076de2c;
                              if (0 < iVar17) {
                                puVar7 = &DAT_0076de30;
                              }
                            }
                          }
                          lVar26 = CONCAT44(local_2a8,local_290);
                          lVar25 = CONCAT44(local_2c8,local_278);
                          if (((puVar7[3] & 0x1f) != 0) &&
                             (local_284 = (float)((uint)local_284 & 0xff), (puVar7[3] & 0x1f) != 2))
                          {
                            local_284 = 1.4013e-45;
                          }
                          iVar17 = iVar17 + 1;
                          uVar13 = local_2c0;
                        } while (iVar17 <= local_14c);
                        iVar17 = local_128;
                        fVar20 = local_2b0;
                        if (SUB41(local_284,0) != '\0') goto LAB_0060a881;
                      }
                      local_2b4 = (int *)((int)local_2b4 + 1);
                      piVar15 = local_12c;
                    } while ((int)local_2b4 <= local_150);
                  }
                  local_2c0 = uVar13 + 1;
                  uVar13 = local_2c0;
                } while ((int)local_2c0 <= local_154);
              }
              local_23c = *(float *)(local_2a4 + 0x88) * 0.5 * 65536.0;
              lVar26 = FUN_0068d946();
              local_280 = (float)((ulonglong)lVar26 >> 0x20);
              local_288 = (float)lVar26;
              lVar26 = local_1f8 - lVar26;
              if ((lVar26 < 0x100000000) && (lVar26 < 0)) {
                lVar26 = lVar26 + -0x10000;
              }
              uVar13 = __alldiv(lVar26,0x10000,0);
              uVar24 = FUN_0068d946();
              uVar18 = uVar13 * 0x10000 - (uint)uVar24;
              local_1f8._0_4_ = (float)(uVar18 + (int)local_288);
              local_1f8._4_4_ =
                   (float)((((((int)uVar13 >> 0x1f) << 0x10 | uVar13 >> 0x10) -
                            (int)((ulonglong)uVar24 >> 0x20)) -
                           (uint)(uVar13 * 0x10000 < (uint)uVar24)) + (int)local_280 +
                          (uint)CARRY4(uVar18,(uint)local_288));
              lVar27 = FUN_0068d946();
              lVar26 = CONCAT44(local_2a8,local_290);
              lVar25 = CONCAT44(local_2c8,local_278);
              local_1f8 = lVar27 + CONCAT44(local_1f8._4_4_,(float)local_1f8);
              fVar20 = local_2b0;
            }
          }
        }
        local_278 = (int *)lVar25;
        local_2b0 = (float)((int)fVar20 + 1);
        iVar17 = local_2a4;
      } while ((int)local_2b0 < 3);
      local_2c4 = (float)((int)local_2c4 + 1);
      lVar27 = local_1f8;
    } while ((int)local_2c4 < (int)local_2a0);
  }
  local_2a8 = (int *)((ulonglong)lVar26 >> 0x20);
  local_290 = (float)lVar26;
  local_2c8 = (float)((ulonglong)lVar25 >> 0x20);
  local_278 = (int *)lVar25;
  local_1f8._4_4_ = (float)((ulonglong)lVar27 >> 0x20);
  local_1f8._0_4_ = (float)lVar27;
  local_110 = (int)local_208[0] - (int)*param_2;
  iStack_10c = ((int)local_208[1] - (int)param_2[1]) - (uint)((uint)local_208[0] < (uint)*param_2);
  local_108 = (int)local_200 - (int)param_2[2];
  iStack_104 = ((int)fStack_1fc - (int)param_2[3]) - (uint)(local_200 < (int *)param_2[2]);
  local_100 = (int)(float)local_1f8 - (int)param_2[4];
  iStack_fc = ((int)local_1f8._4_4_ - (int)param_2[5]) -
              (uint)((uint)(float)local_1f8 < (uint)param_2[4]);
  local_f0 = (float)CONCAT44(iStack_10c,local_110) * 1.5258789e-05;
  local_2a0 = (float)CONCAT44(iStack_fc,local_100);
  local_ec = (float)CONCAT44(iStack_104,local_108) * 1.5258789e-05;
  local_1f8 = lVar27;
  __security_check_cookie(local_c ^ (uint)auStack_2d0);
  return;
}


