
uint FUN_00067578(void)

{
  uint uVar1;
  
  if ((DAT_fffeffed & 0x20) != 0) {
    DAT_ffff0082 = DAT_ffff0082 | 4;
  }
  uVar1 = (uint)(char)DAT_fffeffed;
  if ((uVar1 & 0x10) != 0) {
    uVar1 = (int)(char)DAT_ffff0082 | 2;
    DAT_ffff0082 = (byte)uVar1;
  }
  return uVar1;
}

