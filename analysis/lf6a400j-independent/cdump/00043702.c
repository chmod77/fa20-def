
/* WARNING: Removing unreachable block (ram,0x00043720) */
/* WARNING: Removing unreachable block (ram,0x0004372c) */
/* WARNING: Removing unreachable block (ram,0x00043734) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00043702(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffef371;
  if (((uVar1 & 0x80) == 0) || (DAT_ffff08e5 != '\0')) {
    _DAT_fffef924 = 0;
  }
  else {
    if (0x18 < _DAT_fffef924) {
      DAT_ffff3160 = DAT_ffff3160 | 2;
    }
    uVar1 = FUN_00001540(_DAT_fffef924 + 1);
    _DAT_fffef924 = (ushort)uVar1;
  }
  _DAT_fffef926 = 0;
  return uVar1;
}

