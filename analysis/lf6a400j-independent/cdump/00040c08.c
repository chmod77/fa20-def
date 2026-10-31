
uint FUN_00040c08(void)

{
  uint uVar1;
  
  if (((DAT_fffef886 & 4) == 0) && ((DAT_fffef886 & 1) == 0)) {
    if ((DAT_fffef986 != '\x01') || (DAT_fffef988 != '\x01')) goto LAB_00040c3e;
    DAT_fffeff5f = DAT_fffeff5f & 0xf7;
  }
  else {
    DAT_fffeff5f = DAT_fffeff5f | 8;
  }
  DAT_fffeff64 = 1;
LAB_00040c3e:
  if (((DAT_fffef886 & 8) == 0) && ((DAT_fffef886 & 2) == 0)) {
    if ((int)DAT_fffef987 != 1) {
      return (int)DAT_fffef987;
    }
    if ((int)DAT_fffef989 != 1) {
      return (int)DAT_fffef989;
    }
    uVar1 = (int)(char)DAT_fffeff5f & 0xfb;
    DAT_fffeff5f = (byte)uVar1;
  }
  else {
    uVar1 = (int)(char)DAT_fffeff5f | 4;
    DAT_fffeff5f = (byte)uVar1;
  }
  DAT_fffeff66 = 1;
  return uVar1;
}

