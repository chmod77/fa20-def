
void FUN_00058a46(void)

{
  byte bVar1;
  
  DAT_fffef16c = FUN_0000152c(DAT_fffef16c + 1);
  if (DAT_ffff08c4 != '\0') goto LAB_00058aba;
  if (DAT_fffef8f2 < 8) {
    if ((((2 < DAT_fffef16c) && ((DAT_fffef02a & 2) != 0)) && ((DAT_fffef16b & 1) == 0)) &&
       ((DAT_fffef02a & 1) == 0)) {
      DAT_fffef8f2 = FUN_0000152c(DAT_fffef8f2 + 1);
      goto LAB_00058aba;
    }
    if ((DAT_fffeeca8 & 0x10) == 0) goto LAB_00058aba;
    DAT_fffef8f0 = DAT_fffef8f0 & 0xf7;
  }
  else {
    DAT_fffef8f0 = DAT_fffef8f0 | 8;
  }
  DAT_fffeff76 = 1;
LAB_00058aba:
  bVar1 = DAT_fffef16b | 1;
  if ((DAT_fffef02a & 1) == 0) {
    bVar1 = DAT_fffef16b & 0xfe;
  }
  DAT_fffef16b = bVar1;
  return;
}

