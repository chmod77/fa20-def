
uint FUN_00040f68(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffef371;
  if (((uVar1 & 2) != 0) && (DAT_ffff08df == '\0')) {
    uVar1 = (uint)DAT_ffff000e;
    if (((uVar1 & 1) != 0) &&
       ((uVar1 = (uint)DAT_fffef897, (uVar1 & 1) == 0 && (99 < DAT_ffff0592)))) {
      if (0x4a < DAT_fffef89e) {
        DAT_fffef898 = DAT_fffef898 | 1;
        DAT_fffef958 = 1;
      }
      uVar1 = FUN_0000152c(DAT_fffef89e + 1);
      DAT_fffef89e = (char)uVar1;
      return uVar1;
    }
    if ((99 < DAT_ffff0592) && (uVar1 = (uint)DAT_fffef897, (uVar1 & 1) != 0)) {
      DAT_fffef898 = DAT_fffef898 & 0xfe;
      DAT_fffef958 = 1;
      uVar1 = (int)DAT_fffef897 & 0xfe;
      DAT_fffef897 = (char)uVar1;
    }
  }
  DAT_fffef89e = 0;
  return uVar1;
}

