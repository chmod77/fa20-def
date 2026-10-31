
void FUN_0006a3c0(void)

{
  if ((((DAT_fffef371 & 4) != 0) && (DAT_ffff08cd == '\0')) && (DAT_ffff66b0 == '\x03')) {
    if (DAT_fffee6d1 < 0x26) {
      if (DAT_fffef72b != '\0') {
        DAT_fffef72b = DAT_fffef72b + -1;
        return;
      }
      DAT_fffef733 = DAT_fffef733 | 0x20;
    }
    else {
      DAT_fffef72b = ' ';
      DAT_fffef733 = DAT_fffef733 & 0xdf;
    }
    DAT_fffef786 = DAT_fffef786 | 0x80;
    DAT_fffef947 = 1;
    return;
  }
  DAT_fffef72b = 0x20;
  return;
}

