
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0003fb4c(void)

{
  uint uVar1;
  
  if ((((DAT_ffff0006 & 2) == 0) || (DAT_fffeef88 < 0x1a)) || (DAT_ffff08c7 != '\0')) {
    DAT_fffef833 = 0;
    DAT_fffef832 = 0;
  }
  else if (_DAT_fffef242 < 0xf529) {
    DAT_fffef72c = DAT_fffef72c & 0xdf;
    DAT_fffef74e = DAT_fffef74e | 0x80;
    DAT_fffef948 = 1;
    DAT_fffef832 = FUN_0000152c(DAT_fffef832 + 1);
    DAT_fffef833 = 0;
  }
  else {
    if (0xc < DAT_fffef833) {
      DAT_fffef72c = DAT_fffef72c | 0x20;
      DAT_fffef948 = 1;
      DAT_fffef74e = DAT_fffef74e | 0x80;
    }
    DAT_fffef832 = 0;
    DAT_fffef833 = FUN_0000152c(DAT_fffef833 + 1);
  }
  uVar1 = (uint)(char)DAT_ffff0006;
  if ((uVar1 & 2) == 0) {
    DAT_fffeef88 = 0;
  }
  else {
    uVar1 = FUN_0000152c(DAT_fffeef88 + 1);
    DAT_fffeef88 = (byte)uVar1;
  }
  return uVar1;
}

