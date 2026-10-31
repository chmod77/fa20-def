
void FUN_00052c80(void)

{
  DAT_fffef2d2 = DAT_ffff8db1 != '\0';
  if ((((DAT_fffef0eb & 1) == 0) && ((DAT_fffef0eb & 2) == 0)) && (((int)DAT_fffef3e1 & 0x80U) == 0)
     ) {
    DAT_fffef2d4 = 0;
  }
  else {
    DAT_fffef2d4 = 1;
  }
  if (((((int)(char)DAT_fffeffe7 & 0x80U) == 0) && ((DAT_fffeffe7 & 0x40) == 0)) &&
     ((((int)DAT_fffee710 & 0x80U) == 0 && (((int)DAT_fffef3e1 & 0x80U) == 0)))) {
    DAT_fffef2d5 = 0;
  }
  else {
    DAT_fffef2d5 = 1;
  }
  if ((((DAT_fffef0eb & 0x10) == 0) && ((DAT_fffef0eb & 0x20) == 0)) &&
     (((int)DAT_fffef3e1 & 0x80U) == 0)) {
    DAT_fffef2d6 = 0;
    return;
  }
  DAT_fffef2d6 = 1;
  return;
}

