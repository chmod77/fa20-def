
void FUN_0006bf74(void)

{
  if ((DAT_ffff20e2 & 1) != 0) {
    if (DAT_fffef226 == DAT_fffeed14) {
      DAT_fffef935 = '\0';
    }
    else {
      DAT_fffef935 = FUN_0016b37c((int)DAT_fffef935,1,0xc);
    }
    if (DAT_fffef935 == '\f') {
      DAT_fffef911 = DAT_fffef911 | 8;
    }
    else {
      if (DAT_fffef935 != '\0') goto LAB_0006bfce;
      DAT_fffef911 = DAT_fffef911 & 0xf7;
    }
    DAT_fffef936 = DAT_fffef936 | 8;
  }
LAB_0006bfce:
  DAT_ffff20e2 = DAT_ffff20e2 & 0xfe;
  return;
}

