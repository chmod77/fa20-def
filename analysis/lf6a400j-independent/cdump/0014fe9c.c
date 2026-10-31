
void FUN_0014fe9c(uint param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  param_1 = param_1 & 0xff;
  *(byte *)(param_1 - 0xd330) = *(byte *)(param_1 - 0xd330) & 0xfd;
  if ((DAT_ffff1e16 & 2) != 0) {
    if (*(char *)(param_1 - 0xd300) == '\0') {
      uVar1 = FUN_00143bc0((int)*(short *)(param_1 * 2 + -0xd314));
      if ((*(byte *)(param_1 - 0xd330) & 0x10) != 0) {
        *(char *)(param_1 - 0xd2d3) =
             (*(char *)(param_1 - 0xd30c) - *(char *)(param_1 - 0xd318)) + DAT_ffff2d2c;
        *(byte *)(param_1 - 0xd330) = *(byte *)(param_1 - 0xd330) | 2;
      }
    }
    else {
      uVar1 = FUN_00143bc0((int)*(short *)(param_1 * 2 + -0xd308));
    }
    uVar2 = FUN_00143948();
    uVar1 = FUN_0016b960(uVar1,uVar2);
    FUN_00150478(param_1,uVar1);
    return;
  }
  return;
}

