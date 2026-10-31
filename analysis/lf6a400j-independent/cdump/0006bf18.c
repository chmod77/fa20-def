
void FUN_0006bf18(void)

{
  if ((((DAT_ffff0000 & 2) == 0) || (((int)DAT_fffef205 & 0x80U) != 0)) &&
     (((DAT_ffff0000 & 2) != 0 || (((int)DAT_fffef205 & 0x80U) == 0)))) {
    DAT_fffef934 = 0;
    DAT_fffef82d = DAT_fffef82d & 0x7f;
    DAT_fffef911 = DAT_fffef911 & 0x7f;
    return;
  }
  if (0xf9 < DAT_fffef934) {
    DAT_fffef82d = DAT_fffef82d | 0x80;
    DAT_fffef911 = DAT_fffef911 | 0x80;
    return;
  }
  DAT_fffef934 = DAT_fffef934 + 1;
  return;
}

