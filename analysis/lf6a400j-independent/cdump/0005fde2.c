
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005fde2(void)

{
  byte bVar1;
  
  if (((DAT_fffef050 & 1) == 0) && (_DAT_ffff0fec == 2000)) {
    if (((int)DAT_fffef939 & 0x80U) == 0) {
      if ((((DAT_fffefa34 == '\0') || (DAT_fffefd5d != '\0')) || (((int)DAT_fffef939 & 0x80U) != 0))
         && ((((int)DAT_fffef939 & 0x80U) != 0 || (((int)(char)DAT_fffefd60 & 0x80U) == 0))))
      goto LAB_0005fe4e;
      DAT_fffefd51 = 4;
    }
    else {
      DAT_fffefd51 = 2;
    }
    DAT_fffefd52 = 0x14;
    DAT_fffefd53 = 1;
  }
LAB_0005fe4e:
  DAT_fffefd5d = DAT_fffefa34;
  bVar1 = DAT_fffefd60 | 0x80;
  if (((int)DAT_fffef939 & 0x80U) == 0) {
    bVar1 = DAT_fffefd60 & 0x7f;
  }
  DAT_fffefd60 = bVar1;
  return;
}

