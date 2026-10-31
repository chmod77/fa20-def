
uint FUN_0005a424(void)

{
  uint uVar1;
  
  if (((int)(char)DAT_fffef3aa & 0x80U) != 0) {
    DAT_ffff2fe9 = DAT_ffff2fe9 | 0x80;
  }
  if ((DAT_fffef3aa & 0x40) != 0) {
    DAT_ffff2fe9 = DAT_ffff2fe9 | 0x40;
  }
  if ((DAT_fffef3aa & 0x20) != 0) {
    DAT_ffff2fe9 = DAT_ffff2fe9 | 0x20;
  }
  if ((DAT_fffef3aa & 0x10) != 0) {
    DAT_ffff2fe9 = DAT_ffff2fe9 | 0x10;
  }
  uVar1 = (uint)(char)DAT_fffef3aa;
  if ((uVar1 & 8) != 0) {
    uVar1 = (int)(char)DAT_ffff2fe9 | 8;
    DAT_ffff2fe9 = (byte)uVar1;
  }
  return uVar1;
}

