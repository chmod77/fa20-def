
/* WARNING: Removing unreachable block (ram,0x0003ca7a) */
/* WARNING: Removing unreachable block (ram,0x0003ca36) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003c90e(void)

{
  short sVar1;
  ushort uVar5;
  undefined4 uVar2;
  ushort uVar6;
  uint uVar3;
  int iVar4;
  
  sVar1 = _DAT_fffeef38;
  if (((int)(char)DAT_fffeef81 & 0x80U) == 0) {
    _DAT_fffeef82 = _DAT_fffeef38;
    DAT_fffeef81 = DAT_fffeef81 | 0x80;
  }
  else {
    _DAT_fffeef82 = FUN_0016b4d8(&DAT_fffeef82,(int)_DAT_fffeef38,0xffffffff);
  }
  uVar5 = FUN_0016bc08(&PTR_DAT_001638d4,(int)_DAT_fffeef82);
  DAT_fffeef32 = (byte)((ushort)_DAT_fffeef82 >> 8);
  DAT_fffeef92 = (undefined1)((ushort)sVar1 >> 8);
  uVar6 = uVar5;
  if ((DAT_fffef32d & 0x20) != 0) {
    iVar4 = __udiv32_r1_by_r0((uint)_DAT_fffeef2c * 0x100,7);
    uVar2 = FUN_00001540(iVar4 + 0x5f00);
    uVar6 = FUN_0016bd78(uVar2,0xffffaa00);
  }
  _DAT_fffeef84 = uVar6;
  if (DAT_ffff66b0 == '\x03') {
    _DAT_fffeef2c = FUN_00001540(_DAT_fffeef2c + 1);
  }
  uVar3 = FUN_0016bd34(uVar5 - 0xa00);
  iVar4 = __udiv32_r1_by_r0((uVar3 & 0xffff) << 8,0xcd);
  _v_Engine_Oil_Temperature_F326 = FUN_00001540(iVar4);
  DAT_fffeef33 = (char)(_DAT_fffeef84 >> 8);
  if ((DAT_fffeef81 & 0x10) == 0) {
    DAT_fffeef81 = DAT_fffeef81 | 0x10;
    if (((int)DAT_fffef732 & 0x80U) == 0) {
      DAT_fffeef34 = DAT_ffff2fd8;
    }
    else {
      DAT_ffff2fd8 = '2';
      DAT_fffeef34 = '2';
    }
  }
  else if (DAT_ffff66b0 == '\x03') {
    DAT_ffff2fd8 = DAT_fffeef33;
  }
  if (DAT_ffff66b0 == '\x03') {
    DAT_fffeef81 = DAT_fffeef81 | 0x40;
  }
  _DAT_fffef328 = _v_Engine_Oil_Temperature_F326;
  _DAT_fffef6ee = uVar5;
  if ((DAT_fffeef81 & 0x40) != 0) {
    if ((DAT_fffeef81 & 0x20) == 0) {
      DAT_fffeef81 = DAT_fffeef81 | 0x20;
      DAT_fffeef35 = DAT_fffeef33;
      DAT_fffeef36 = DAT_fffeef33;
    }
    else {
      DAT_fffeef35 = FUN_0016b608((int)DAT_fffeef33,(int)DAT_fffeef35);
      DAT_fffeef36 = FUN_0016bd40((int)DAT_fffeef33,(int)DAT_fffeef36);
    }
  }
  if (DAT_ffff66b0 == '\x03') {
    uVar3 = (uint)DAT_fffeef32;
    _DAT_fffeef2e = FUN_0016b630(uVar3 << 2,(int)_DAT_fffeef2e);
    _DAT_fffeef30 = FUN_0016bd78(uVar3 << 2,(int)_DAT_fffeef30);
  }
  else {
    _DAT_fffeef2e = 0;
    _DAT_fffeef30 = 0x3ff;
  }
  return;
}

