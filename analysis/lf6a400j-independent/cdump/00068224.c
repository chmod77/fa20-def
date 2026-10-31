
uint FUN_00068224(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_ffff66b0;
  if (uVar1 != 4) {
    if (((int)DAT_ffff002c & 0x80U) != 0) {
      uVar1 = (uint)DAT_fffeecf9;
      DAT_fffeecf9 = (char)(uVar1 | 1);
      return uVar1 | 1;
    }
    uVar1 = (int)DAT_fffeecf9 & 0xfe;
    DAT_fffeecf9 = (char)uVar1;
  }
  return uVar1;
}

