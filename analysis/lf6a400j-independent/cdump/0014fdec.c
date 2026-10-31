
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014fdec(uint param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  param_1 = param_1 & 0xff;
  if (*(char *)(param_1 - 0xd318) == '\0') {
    uVar1 = FUN_00143bc0((int)*(short *)(param_1 * 2 + -0xd314));
    uVar2 = FUN_00001540((uint)(_DAT_fffff430 - _DAT_ffff2b80) >> 3);
    uVar1 = FUN_0016b960(uVar1,uVar2);
    FUN_00150478(param_1,uVar1);
    return;
  }
  *(byte *)(param_1 - 0xd330) = *(byte *)(param_1 - 0xd330) | 2;
  *(char *)(param_1 - 0xd2d3) = *(char *)(param_1 - 0xd318) + DAT_ffff2d74;
  return;
}

