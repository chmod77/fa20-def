
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000602a4(void)

{
  byte bVar1;
  
  if (((DAT_fffef050 & 1) == 0) && (_DAT_ffff0fee == 400)) {
    if (((int)DAT_fffef93a & 0x80U) == 0) {
      if ((((DAT_fffefa35 == '\0') || (DAT_fffefd5e != '\0')) || (((int)DAT_fffef93a & 0x80U) != 0))
         && ((((int)DAT_fffef93a & 0x80U) != 0 || (((int)(char)DAT_fffefd5f & 0x80U) == 0))))
      goto LAB_00060304;
      DAT_fffefd54 = 4;
    }
    else {
      DAT_fffefd54 = 2;
    }
    DAT_fffefd55 = 0x14;
    DAT_fffefd56 = 2;
  }
LAB_00060304:
  DAT_fffefd5e = DAT_fffefa35;
  bVar1 = DAT_fffefd5f | 0x80;
  if (((int)DAT_fffef93a & 0x80U) == 0) {
    bVar1 = DAT_fffefd5f & 0x7f;
  }
  DAT_fffefd5f = bVar1;
  return;
}

