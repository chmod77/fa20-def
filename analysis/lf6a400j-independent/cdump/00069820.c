
uint FUN_00069820(void)

{
  if (((((int)(char)DAT_fffef18a & 0x80U) == 0) || (((int)(char)DAT_fffef910 & 0x80U) == 0)) &&
     (((DAT_fffef18a & 4) == 0 || ((DAT_fffef910 & 4) == 0)))) {
    if ((((((int)(char)DAT_fffef18a & 0x80U) == 0) || (((int)(char)DAT_fffef910 & 0x80U) != 0)) ||
        ((DAT_fffef18a & 4) == 0)) || ((DAT_fffef910 & 4) != 0)) goto LAB_00069878;
    DAT_fffef737 = DAT_fffef737 & 0xfb;
  }
  else {
    DAT_fffef737 = DAT_fffef737 | 4;
  }
  DAT_fffef7a3 = DAT_fffef7a3 | 0x80;
LAB_00069878:
  if (((int)(char)DAT_fffef18a & 0x80U) != 0) {
    DAT_fffef182 = 1;
  }
  return (int)(char)DAT_fffef18a;
}

