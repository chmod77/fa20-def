
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0003fc16(void)

{
  uint uVar1;
  
  if ((((DAT_ffff0006 & 2) == 0) || (DAT_fffeef89 < 0x1a)) || (DAT_ffff08c7 != '\0')) {
    DAT_fffef835 = 0;
    DAT_fffef834 = 0;
  }
  else if (_DAT_fffef242 < 0x633) {
    if (0xc < DAT_fffef835) {
      DAT_fffef72c = DAT_fffef72c | 0x40;
      DAT_fffef949 = 1;
      DAT_fffef74f = DAT_fffef74f | 0x80;
    }
    DAT_fffef834 = 0;
    DAT_fffef835 = FUN_0000152c(DAT_fffef835 + 1);
  }
  else {
    DAT_fffef72c = DAT_fffef72c & 0xbf;
    DAT_fffef74f = DAT_fffef74f | 0x80;
    DAT_fffef949 = 1;
    DAT_fffef834 = FUN_0000152c(DAT_fffef834 + 1);
    DAT_fffef835 = 0;
  }
  uVar1 = (uint)(char)DAT_ffff0006;
  if ((uVar1 & 2) == 0) {
    DAT_fffeef89 = 0;
  }
  else {
    uVar1 = FUN_0000152c(DAT_fffeef89 + 1);
    DAT_fffeef89 = (byte)uVar1;
  }
  return uVar1;
}

