
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001483c6(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  param_1 = param_1 & 0xff;
  if ((param_1 != 0) && (param_1 != 4)) {
    return param_1;
  }
  uVar1 = FUN_00001550(0xf0);
  _DAT_ffff66d0 = 0xa4;
  _DAT_ffff66dc = 0x3000;
  _DAT_ffff66ec = 0x3000;
  _DAT_ffff66d4 = 0x94;
  _DAT_ffff66e0 = 0x3400;
  _DAT_ffff66f0 = 0x3800;
  _DAT_ffff66d8 = _DAT_ffff66cc;
  _DAT_ffff66e4 = 0x3800;
  _DAT_ffff66e8 = 0x8f02;
  DAT_ffff66ca = DAT_ffff66ca | 0x20;
  if (((int)DAT_ffff3649 & 0x80U) == 0) {
    _DAT_ffff66f4 = 0xc000;
  }
  uVar2 = FUN_00001550(uVar1);
  return uVar2;
}

