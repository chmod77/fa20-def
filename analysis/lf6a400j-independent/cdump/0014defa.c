
void FUN_0014defa(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  uint uVar3;
  
  if (*(char *)param_1[1] == '\0') {
    uVar3 = (uint)*(ushort *)param_1[4];
    if (((uint)*(ushort *)param_1[7] & (uint)&DAT_0000fffe) < uVar3) {
      uVar3 = (uint)*(ushort *)param_1[7] & (uint)&DAT_0000fffe;
    }
    if ((((*(byte *)*param_1 & 0x20) != 0) && (uVar3 < *(ushort *)param_1[5])) &&
       (*(ushort *)param_1[5] < 0x11)) {
      uVar3 = uVar3 & (uint)&DAT_0000fffe;
    }
    if ((*(byte *)param_1[0x1d] & 4) != 0) {
      uVar3 = uVar3 & (uint)&DAT_0000fffe;
    }
  }
  else {
    uVar3 = 0;
    if ('\x02' < *(char *)param_1[1]) {
      uVar3 = (uint)*(ushort *)param_1[8] & (uint)&DAT_0000fffe;
    }
  }
  uVar1 = FUN_0016bd6c(uVar3 - *(ushort *)param_1[5],0xff);
  uVar2 = FUN_0016b624(uVar1,0xffffff01);
  if (*(char *)param_1[1] == '\x04') {
    *(undefined2 *)param_1[0x1b] = 0;
  }
  else {
    *(undefined2 *)param_1[0x1b] = uVar2;
  }
  return;
}

