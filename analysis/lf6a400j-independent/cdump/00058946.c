
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00058946(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffeef9c;
  if (((uVar1 == 6) && (uVar1 = (uint)DAT_fffeef9a, (uVar1 & 0x80) != 0)) && (DAT_ffff08c4 == '\0'))
  {
    if ((-0x2e < _DAT_fffef006) && (_DAT_fffef006 < 0x2e)) {
      uVar1 = (uint)DAT_fffef8f0;
      DAT_fffef8f0 = (char)(uVar1 | 0x20);
      return uVar1 | 0x20;
    }
    uVar1 = (int)DAT_fffef8f0 | 2;
    DAT_fffef8f0 = (char)uVar1;
  }
  return uVar1;
}

