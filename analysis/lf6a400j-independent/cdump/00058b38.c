
uint FUN_00058b38(void)

{
  uint uVar1;
  
  if ((((DAT_fffef8f0 & 1) == 0) && (((int)(char)DAT_fffef8f0 & 0x80U) == 0)) &&
     ((DAT_fffef8f0 & 0x20) == 0)) {
    if ((DAT_fffeeca8 & 0x10) == 0) goto LAB_00058b6c;
    DAT_fffef9da = DAT_fffef9da & 0xfe;
  }
  else {
    DAT_fffef9da = DAT_fffef9da | 1;
  }
  DAT_fffef9db = 1;
LAB_00058b6c:
  if ((DAT_fffef8f0 & 2) == 0) {
    if (((int)(char)DAT_fffeeca8 & 0x10U) == 0) {
      return (int)(char)DAT_fffeeca8;
    }
    uVar1 = (int)(char)DAT_fffef9da & 0xfd;
    DAT_fffef9da = (byte)uVar1;
  }
  else {
    uVar1 = (int)(char)DAT_fffef9da | 2;
    DAT_fffef9da = (byte)uVar1;
  }
  DAT_fffef9dc = 1;
  return uVar1;
}

