
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00150234(undefined4 param_1,uint param_2,char param_3,short param_4)

{
  ushort uVar1;
  short sVar5;
  uint uVar2;
  undefined2 uVar6;
  uint uVar3;
  undefined4 uVar4;
  undefined *puStack_2c;
  
  param_2 = param_2 & 0xff;
  sVar5 = FUN_00001550(0xf0);
  uVar2 = FUN_0016bd60(param_1,&LAB_001312d0);
  if (*(short *)(&DAT_00168ce8)[param_2 * 4] == 0) {
    *(undefined1 *)(param_2 - 0xd334) = 0;
  }
  if ((*(byte *)(param_2 - 0xd334) & 1) == 0) {
    _DAT_ffff2d6a = _DAT_fffff440;
    _DAT_ffff2d6e = _DAT_fffff440 - _DAT_ffff2d6c;
    _DAT_ffff2d70 = (uint)_DAT_ffff1a3a * (uint)_DAT_ffff2d6e;
    _DAT_ffff2d6c = _DAT_fffff440;
    if ((param_3 == '\x02') || (**(ushort **)(&DAT_00168cf0 + param_2 * 0x10) == 0)) {
      uVar4 = FUN_00001540(uVar2);
      FUN_0014f83e(param_2,uVar4);
    }
    else if (uVar2 < _DAT_fffeeeb8) {
      uVar3 = FUN_0016b5d4((uint)_DAT_fffeeeb8 - (uint)**(ushort **)(&DAT_00168cf0 + param_2 * 0x10)
                          );
      uVar6 = FUN_0016b5d4(uVar2 - (uVar3 & 0xffff));
      FUN_0014f8c6(param_2,uVar6);
    }
    else {
      *(undefined1 *)(param_2 - 0xd334) = 1;
    }
  }
  if (param_3 != '\x02') {
    FUN_001501bc(param_2);
  }
  uVar1 = *(ushort *)(&DAT_00168ce8)[param_2 * 4];
  if (((*(byte *)(param_2 - 0xd330) & 1) == 0) || (uVar1 < 4)) {
    uVar3 = FUN_0016b5d4(uVar2);
    FUN_0014f7f2(param_2,uVar3 & 0xffff);
    *(uint *)(param_2 * 4 + -0xd2f4) = uVar2 - (uVar3 & 0xffff);
    *(byte *)(param_2 - 0xd330) = *(byte *)(param_2 - 0xd330) | 1;
  }
  else {
    if (param_3 == '\0') {
      uVar3 = FUN_00001540(*(undefined4 *)(param_2 * 4 + -0xd2a8));
      uVar3 = FUN_0016b5d4((uVar3 & 0xffff) - (uint)uVar1);
      puStack_2c = (undefined *)(uVar2 - (uVar3 & 0xffff));
      uVar4 = FUN_0016b5d4(puStack_2c);
      if ((int)puStack_2c < 0) {
        puStack_2c = (undefined *)0x0;
      }
      FUN_0014f7ae(param_2,uVar4);
    }
    else {
      puStack_2c = (undefined *)(uVar2 - (int)param_4);
      uVar4 = FUN_0016b5d4(puStack_2c);
      if ((int)puStack_2c < 0) {
        puStack_2c = (undefined *)0x0;
      }
      FUN_0014f754(param_2,uVar4);
      puStack_2c = (undefined *)((uint)uVar1 + (int)puStack_2c);
    }
    if (&DAT_0000ffff < puStack_2c) {
      *(undefined **)(param_2 * 4 + -0xd2f4) =
           puStack_2c + *(int *)(param_2 * 4 + -0xd2f4) + -0xffff;
    }
  }
  FUN_00001550((int)sVar5);
  return;
}

