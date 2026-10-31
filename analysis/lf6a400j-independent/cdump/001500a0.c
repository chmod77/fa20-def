
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001500a0(uint param_1)

{
  bool bVar1;
  undefined2 uVar3;
  undefined4 uVar2;
  int iVar4;
  undefined4 uVar5;
  
  param_1 = param_1 & 0xff;
  uVar3 = FUN_00001550(0xf0);
  _DAT_fffff66a = _DAT_fffff66a & ~*(ushort *)(&PTR_LAB_00168c6c + param_1 * 4);
  _DAT_fffff462 = _DAT_fffff462 & ~*(ushort *)(&PTR_LAB_00168c6c + param_1 * 4);
  FUN_0014f978(param_1);
  *(byte *)(param_1 - 0xd330) = *(byte *)(param_1 - 0xd330) & 0xfb;
  FUN_00001550(uVar3);
  if ((DAT_ffff1e16 & 2) != 0) {
    iVar4 = param_1 * 4;
    if (*(char *)(param_1 - 0xd300) == '\0') {
      if ((*(byte *)(param_1 - 0xd32c) & 0x10) == 0) {
        uVar5 = *(undefined4 *)(iVar4 + -0xd2bc);
      }
      else {
        uVar5 = *(undefined4 *)(iVar4 + -0xd2cc);
      }
      if (((*(byte *)(param_1 - 0xd32c) & 0xf) != 0) &&
         (*(char *)(param_1 - 0xd300) = *(char *)(param_1 - 0xd300) + '\x01',
         (*(byte *)(param_1 - 0xd330) & 0x10) == 0)) {
        uVar2 = FUN_00143bc0((int)*(short *)(param_1 * 2 + -0xd308));
        uVar3 = FUN_0014f9c4(param_1);
        uVar2 = FUN_0016b960(uVar2,uVar3);
        FUN_00150478(param_1,uVar2);
      }
    }
    else {
      if ((*(byte *)(param_1 - 0xd32c) & 1) == 0) {
        uVar5 = *(undefined4 *)(iVar4 + -0xd2bc);
      }
      else {
        uVar5 = *(undefined4 *)(iVar4 + -0xd2cc);
      }
      *(undefined1 *)(param_1 - 0xd300) = 0;
    }
    bVar1 = (*(byte *)(param_1 - 0xd330) & 1) == 0;
    if (bVar1) {
      iVar4 = 0;
      uVar2 = FUN_00001550(0xf0);
      *(byte *)(param_1 - 0xd330) = *(byte *)(param_1 - 0xd330) | 1;
      FUN_00001550(uVar2);
    }
    else {
      iVar4 = (int)_DAT_ffff2d54;
    }
    FUN_00150234(uVar5,param_1,!bVar1,iVar4);
  }
  return;
}

