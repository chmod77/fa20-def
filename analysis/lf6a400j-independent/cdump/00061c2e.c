
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00061c2e(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_ffff0006;
  if ((uVar1 & 2) == 0) {
    _DAT_fffef5b0 = 0;
  }
  else if (_DAT_fffef5b0 < 0x14) {
    uVar1 = FUN_00001540(_DAT_fffef5b0 + 1);
    _DAT_fffef5b0 = (ushort)uVar1;
  }
  else {
    _DAT_ffff2f70 = 0xaa55;
  }
  return uVar1;
}

