
uint FUN_00040c76(void)

{
  uint uVar1;
  
  if (((DAT_fffef886 & 0x40) == 0) && ((DAT_fffef886 & 0x10) == 0)) {
    if ((DAT_fffef98a != '\x01') || (DAT_fffef98c != '\x01')) goto LAB_00040cac;
    DAT_fffeff5f = DAT_fffeff5f & 0xfd;
  }
  else {
    DAT_fffeff5f = DAT_fffeff5f | 2;
  }
  DAT_fffeff68 = 1;
LAB_00040cac:
  if ((((int)(char)DAT_fffef886 & 0x80U) == 0) && ((DAT_fffef886 & 0x20) == 0)) {
    if ((int)DAT_fffef98b != 1) {
      return (int)DAT_fffef98b;
    }
    if ((int)DAT_fffef98d != 1) {
      return (int)DAT_fffef98d;
    }
    uVar1 = (int)(char)DAT_fffeff5f & 0xfe;
    DAT_fffeff5f = (byte)uVar1;
  }
  else {
    uVar1 = (int)(char)DAT_fffeff5f | 1;
    DAT_fffeff5f = (byte)uVar1;
  }
  DAT_fffeff6a = 1;
  return uVar1;
}

