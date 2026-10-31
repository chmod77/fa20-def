
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013d7d0(undefined1 *param_1)

{
  int iVar1;
  char cVar3;
  uint uVar2;
  int iVar4;
  char *pcVar5;
  
  if (_DAT_ffff2668 == 0) {
    if (_DAT_ffff2664 == 0) {
      if (_DAT_ffff2660 == 0) {
        iVar1 = 0;
        if (_DAT_ffff265c == 0) {
          *param_1 = 0xff;
          *(undefined2 *)(param_1 + 6) = 0xffff;
          return;
        }
        iVar4 = 0;
      }
      else {
        iVar1 = 4;
        iVar4 = 0x20;
      }
    }
    else {
      iVar1 = 8;
      iVar4 = 0x40;
    }
  }
  else {
    iVar1 = 0xc;
    iVar4 = 0x60;
  }
  pcVar5 = &DAT_ffff265c + iVar1;
  if (*(short *)(iVar1 + -0xd9a2) == 0) {
    cVar3 = *(char *)(iVar1 + -0xd9a3);
  }
  else {
    pcVar5 = (char *)(iVar1 + -0xd9a2);
    iVar4 = iVar4 + 0x10;
    cVar3 = *(char *)(iVar1 + -0xd9a1);
  }
  if (cVar3 == '\0') {
    cVar3 = *pcVar5;
  }
  else {
    iVar4 = iVar4 + 8;
    cVar3 = pcVar5[1];
  }
  uVar2 = (uint)cVar3;
  if ((uVar2 & 0x80) == 0) {
    if ((uVar2 & 0x40) == 0) {
      if ((uVar2 & 0x20) == 0) {
        if ((uVar2 & 0x10) == 0) {
          if ((uVar2 & 8) == 0) {
            if ((uVar2 & 4) == 0) {
              if ((uVar2 & 2) != 0) {
                iVar4 = iVar4 + 1;
              }
            }
            else {
              iVar4 = iVar4 + 2;
            }
          }
          else {
            iVar4 = iVar4 + 3;
          }
        }
        else {
          iVar4 = iVar4 + 4;
        }
      }
      else {
        iVar4 = iVar4 + 5;
      }
    }
    else {
      iVar4 = iVar4 + 6;
    }
  }
  else {
    iVar4 = iVar4 + 7;
  }
  *param_1 = (char)iVar4;
  *(undefined2 *)(param_1 + 6) =
       *(undefined2 *)
        (*(int *)(param_1 + 0x24) + **(short **)(*(int *)(param_1 + 0x20) + iVar4 * 8 + 4) * 2);
  return;
}

