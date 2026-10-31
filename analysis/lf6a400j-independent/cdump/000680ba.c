
uint FUN_000680ba(void)

{
  uint in_r0;
  uint uVar1;
  
  if (0x87 < DAT_ffffab41) {
    if (DAT_ffff0355 == '\0') {
      DAT_fffef82b = 0;
      DAT_fffef82c = 0;
      uVar1 = (uint)DAT_fffeecfa;
      if ((uVar1 & 2) == 0) {
        DAT_fffef82a = 0;
        if (DAT_fffef829 < 0x33) {
          DAT_fffef829 = DAT_fffef829 + 1;
          return uVar1;
        }
        uVar1 = (int)DAT_fffef744 | 1;
        DAT_fffef744 = (char)uVar1;
      }
      else {
        DAT_fffef829 = 0;
        if (DAT_fffef82a < 0x33) {
          DAT_fffef82a = DAT_fffef82a + 1;
          return uVar1;
        }
        uVar1 = (int)DAT_fffef744 & 0xfe;
        DAT_fffef744 = (char)uVar1;
      }
      DAT_fffef3cc = 1;
      return uVar1;
    }
    in_r0 = (uint)DAT_ffff0006;
    if ((in_r0 & 2) != 0) {
      DAT_fffef829 = 0;
      DAT_fffef82a = 0;
      uVar1 = (uint)DAT_fffeecfa;
      if ((uVar1 & 2) == 0) {
        DAT_fffef82b = 0;
        if (DAT_fffef82c < 0x33) {
          DAT_fffef82c = DAT_fffef82c + 1;
          return uVar1;
        }
        uVar1 = (int)DAT_fffef744 & 0xfd;
        DAT_fffef744 = (char)uVar1;
      }
      else {
        DAT_fffef82c = 0;
        if (DAT_fffef82b < 0x33) {
          DAT_fffef82b = DAT_fffef82b + 1;
          return uVar1;
        }
        uVar1 = (int)DAT_fffef744 | 2;
        DAT_fffef744 = (char)uVar1;
      }
      DAT_fffef3cd = 1;
      return uVar1;
    }
  }
  DAT_fffef829 = 0;
  DAT_fffef82a = 0;
  DAT_fffef82b = 0;
  DAT_fffef82c = 0;
  return in_r0;
}

