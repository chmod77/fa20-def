
uint FUN_0014dcca(undefined4 *param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  byte bVar6;
  uint uVar5;
  
  bVar3 = DAT_ffff1e16 & 2;
  if ((*(byte *)*param_1 & 2) == 0) {
    if ((*(byte *)(param_1[0x1d] + 1) & 2) == 0) goto LAB_0014dcfa;
LAB_0014dcf6:
    bVar4 = false;
  }
  else {
    if ((*(byte *)(param_1[0x1d] + 1) & 2) == 0) goto LAB_0014dcf6;
LAB_0014dcfa:
    bVar4 = true;
  }
  bVar1 = *(byte *)(param_1[0x1d] + 1);
  bVar6 = bVar1 | 0x80;
  if (!bVar4) {
    bVar6 = bVar1 & 0x7f;
  }
  *(byte *)(param_1[0x1d] + 1) = bVar6;
  if (*(char *)param_1[1] == '\0') {
    if (((int)*(char *)(param_1[0x1d] + 1) & 0x80U) == 0) {
      *(byte *)(param_1[0x1d] + 1) = *(byte *)(param_1[0x1d] + 1) & 0xdf;
    }
    else if (((*(byte *)(param_1[0x1d] + 1) & 0x20) == 0) && ((*(byte *)param_1[0x1d] & 0x40) != 0))
    {
      *(undefined1 *)param_1[1] = 1;
      *(byte *)(param_1[0x1d] + 1) = *(byte *)(param_1[0x1d] + 1) | 4;
      *(byte *)(param_1[0x1d] + 1) = *(byte *)(param_1[0x1d] + 1) | 0x20;
    }
    if (((*(byte *)(param_1[0x1d] + 1) & 0x10) != 0) && ((*(byte *)(param_1[0x1d] + 1) & 4) == 0)) {
      *(byte *)(param_1[0x1d] + 1) = *(byte *)(param_1[0x1d] + 1) | 8;
      *(undefined1 *)param_1[1] = 1;
      *(undefined2 *)param_1[5] = *(undefined2 *)param_1[9];
    }
    *(byte *)(param_1[0x1d] + 1) = *(byte *)(param_1[0x1d] + 1) & 0xef;
  }
  if (*(char *)param_1[1] == '\x01') {
    uVar5 = (uint)*(char *)(param_1[0x1d] + 1);
    if (((uVar5 & 0x80) == 0) && (uVar5 = (uint)*(char *)(param_1[0x1d] + 1), (uVar5 & 8) == 0)) {
LAB_0014de96:
      *(undefined1 *)param_1[1] = 0;
      uVar5 = (int)*(char *)(param_1[0x1d] + 1) & 0xfb;
      *(char *)(param_1[0x1d] + 1) = (char)uVar5;
      return uVar5;
    }
    if (*(short *)param_1[5] == 0) {
      *(undefined1 *)param_1[1] = 2;
      if (bVar3 == 0) {
        *(undefined1 *)param_1[0x19] = 0;
      }
      else {
        *(undefined1 *)param_1[0x19] = *(undefined1 *)param_1[0x1a];
      }
      uVar5 = (int)*(char *)param_1[0x1d] | 1;
      *(char *)param_1[0x1d] = (char)uVar5;
      return uVar5;
    }
  }
  else {
    if (*(char *)param_1[1] == '\x02') {
      if ((((int)*(char *)(param_1[0x1d] + 1) & 0x80U) == 0) &&
         ((*(byte *)(param_1[0x1d] + 1) & 8) == 0)) {
        *(undefined1 *)param_1[0x19] = 0;
      }
      if (((int)*(char *)param_1[0x1d] & 2U) == 0) {
        return (int)*(char *)param_1[0x1d];
      }
      *(byte *)param_1[0x1d] = *(byte *)param_1[0x1d] & 0xfd;
      *(byte *)param_1[0x1d] = *(byte *)param_1[0x1d] & 0xfe;
      if ((DAT_ffff208c & 8) != 0) {
        *(byte *)(param_1[0x1d] + 1) = *(byte *)(param_1[0x1d] + 1) | 1;
      }
      cVar2 = *(char *)(param_1[0x1d] + 1);
      if (((int)cVar2 & 8U) == 0) {
        *(undefined1 *)param_1[1] = 3;
        return (int)cVar2;
      }
      uVar5 = (int)*(char *)(param_1[0x1d] + 1) & 0xf7;
      *(char *)(param_1[0x1d] + 1) = (char)uVar5;
    }
    else if (*(char *)param_1[1] == '\x03') {
      if (((int)*(char *)(param_1[0x1d] + 1) & 0x80U) == 0) goto LAB_0014de96;
      if (*(ushort *)param_1[5] != (*(ushort *)param_1[8] & 0xfffe)) {
        return (int)*(char *)(param_1[0x1d] + 1);
      }
      *(byte *)(param_1[0x1d] + 1) = *(byte *)(param_1[0x1d] + 1) & 0xfb;
      uVar5 = (uint)*(char *)*param_1;
      if ((uVar5 & 2) == 0) {
        *(undefined1 *)param_1[1] = 4;
        return uVar5;
      }
    }
    else {
      if ((int)*(char *)param_1[1] != 4) {
        return (int)*(char *)param_1[1];
      }
      uVar5 = (uint)*(char *)(param_1[0x1d] + 1);
      if ((uVar5 & 0x80) != 0) {
        return uVar5;
      }
    }
    *(undefined1 *)param_1[1] = 0;
  }
  return uVar5;
}

