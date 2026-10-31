
uint FUN_000522ac(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffeef9c;
  if (uVar1 == 7) {
    if (((((DAT_fffef02a & 0x40) != 0) || ((DAT_fffef02a & 0x20) != 0)) && (DAT_fffef168 != 0)) ||
       ((DAT_fffeef99 & 0x40) == 0)) {
      DAT_fffeef9c = '\b';
    }
    if (((DAT_fffef02a & 0x40) != 0) || (uVar1 = (uint)(char)DAT_fffef02a, (uVar1 & 0x20) != 0)) {
      uVar1 = FUN_0000152c(DAT_fffef168 + 1);
      DAT_fffef168 = (char)uVar1;
      return uVar1;
    }
  }
  DAT_fffef168 = 0;
  return uVar1;
}

