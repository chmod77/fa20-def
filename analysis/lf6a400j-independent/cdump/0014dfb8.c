
void FUN_0014dfb8(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (uint)*(ushort *)param_1[4];
  uVar3 = (uint)*(ushort *)param_1[5];
  iVar2 = uVar1 - uVar3;
  if ((*(byte *)param_1[0x1d] & 0x40) == 0) {
    *(undefined2 *)param_1[0x1c] = 0;
  }
  if ((*(byte *)param_1[0x11] <= *(byte *)param_1[0x14]) || ((*(byte *)param_1[0x1d] & 4) != 0)) {
    *(byte *)param_1[0x1d] = *(byte *)param_1[0x1d] & 0xdf;
    goto LAB_0014e07a;
  }
  if ((*(byte *)param_1[0x1d] & 0x20) != 0) goto LAB_0014e07a;
  if ((*(short *)param_1[0x1c] < 0) && (0 < iVar2)) {
LAB_0014e02e:
    *(byte *)param_1[0x1d] = *(byte *)param_1[0x1d] | 0x20;
    *(byte *)param_1[0x1d] = *(byte *)param_1[0x1d] | 0x10;
  }
  else {
    if ((*(short *)param_1[0x1c] < 1) || (-1 < iVar2)) {
      if ((((*(byte *)*param_1 & 0x10) != 0) && (*(short *)param_1[0x1c] < 0)) && (uVar1 == uVar3))
      goto LAB_0014e02e;
      if ((((*(byte *)*param_1 & 0x10) == 0) || (*(short *)param_1[0x1c] < 1)) || (uVar1 != uVar3))
      goto LAB_0014e07a;
    }
    *(byte *)param_1[0x1d] = *(byte *)param_1[0x1d] | 0x20;
    *(byte *)param_1[0x1d] = *(byte *)param_1[0x1d] | 8;
  }
LAB_0014e07a:
  if (iVar2 < 0) {
    *(undefined2 *)param_1[0x1c] = 0xffff;
    return;
  }
  if (0 < iVar2) {
    *(undefined2 *)param_1[0x1c] = 1;
    return;
  }
  *(undefined2 *)param_1[0x1c] = 0;
  return;
}

