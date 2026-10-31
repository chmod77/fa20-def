
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00150478(uint param_1,undefined *param_2)

{
  undefined2 uVar2;
  undefined4 uVar1;
  short sVar3;
  undefined *puVar4;
  
  param_1 = param_1 & 0xff;
  if (&UNK_00000001 < param_2) {
    puVar4 = param_2;
    if (&DAT_0000ffff < param_2) {
      puVar4 = &DAT_0000ffff;
      *(undefined **)(param_1 * 4 + -0xd2e4) = param_2 + -0xffff;
    }
  }
  else {
    puVar4 = &UNK_00000002;
  }
  uVar2 = FUN_00001550(0xf0);
  if (((*(byte *)(param_1 - 0xd330) & 1) == 0) && (*(char *)(param_1 - 0xd300) == '\0')) {
    uVar1 = FUN_0015054a(param_1);
    *(undefined4 *)(param_1 * 4 + -0xd2a8) = uVar1;
    sVar3 = FUN_00001540(*(undefined4 *)(param_1 * 4 + -0xd2a8));
    *(short *)(&DAT_00168ce8)[param_1 * 4] = sVar3;
    if (((*(byte *)(param_1 - 0xd334) & 1) == 0) && (sVar3 != 0)) {
      **(undefined2 **)(&DAT_00168cf0 + param_1 * 0x10) = _DAT_fffeeeb8;
    }
    _DAT_fffff66c = _DAT_fffff66c | *(ushort *)(&PTR_LAB_00168cec + param_1 * 4);
  }
  FUN_0014f9f6(param_1,(uint)puVar4 & 0xffff);
  FUN_0014f928(param_1,(uint)puVar4 & 0xffff);
  *(byte *)(param_1 - 0xd330) = *(byte *)(param_1 - 0xd330) | 4;
  FUN_00001550(uVar2);
  return;
}

