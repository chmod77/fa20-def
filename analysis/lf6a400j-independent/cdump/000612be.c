
uint FUN_000612be(void)

{
  uint uVar1;
  
  if ((DAT_ffff34bb & 1) != 0) {
    DAT_fffef590 = '\x01';
  }
  if ((((((DAT_fffeeec2 & 4) != 0) && ((DAT_ffff34bb & 1) != 0)) && ((DAT_ffff3160 & 4) == 0)) &&
      (((DAT_ffff3161 & 4) == 0 && ((DAT_fffeffc8 & 1) == 0)))) &&
     (((DAT_fffeffc8 & 2) == 0 && (((DAT_fffeffc8 & 4) == 0 && ((DAT_fffeffc8 & 8) == 0)))))) {
    DAT_ffff34bb = DAT_ffff34bb & 0xfe;
  }
  uVar1 = (uint)(char)DAT_ffff34bb;
  if (((uVar1 & 1) == 0) && (99 < DAT_fffef58f)) {
    DAT_fffef590 = '\0';
    DAT_fffef58f = 0;
  }
  if ((DAT_fffef590 != '\0') && (uVar1 = (uint)(char)DAT_ffff34bb, (uVar1 & 1) == 0)) {
    uVar1 = FUN_0000152c(DAT_fffef58f + 1);
    DAT_fffef58f = (byte)uVar1;
  }
  return uVar1;
}

