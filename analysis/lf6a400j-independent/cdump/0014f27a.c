
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014f27a(void)

{
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar1;
  uint uVar4;
  
  _DAT_ffff2c98 = FUN_00143b0a((int)_DAT_ffff2c9a);
  _DAT_ffff2c9c = FUN_0016bd34(0x168 - (uint)_DAT_ffff2c98);
  uVar2 = FUN_0016bd34(0x8c - DAT_ffff1b04);
  uVar4 = (uint)uVar2;
  uVar3 = FUN_0016bd34(uVar4 - _DAT_ffff2c98);
  _DAT_ffff2ca0 = FUN_00143b62(uVar4);
  uVar1 = FUN_0016bd34(uVar4 - 0x14);
  DAT_ffff2c93 = FUN_001439dc(uVar1);
  uVar4 = FUN_00143a6a((int)DAT_ffff2c93);
  DAT_ffff2c94 = FUN_0016bd28((int)(short)uVar2 + (uVar4 & 0xff) * -0x14);
  uVar1 = FUN_0016bd34(uVar3 - 0x14);
  DAT_ffff2c92 = FUN_001439dc(uVar1);
  uVar4 = FUN_00143a6a((int)DAT_ffff2c92);
  DAT_ffff2cac = FUN_0016bd28((int)(short)uVar3 + (uVar4 & 0xff) * -0x14);
  DAT_ffff2c88 = DAT_ffff2c88 | 0x20;
  return;
}

