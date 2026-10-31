
void FUN_0006bd22(void)

{
  if ((DAT_ffff66b8 != -0x5b) && ((DAT_fffeeec2 & 4) != 0)) {
    if ((DAT_fffef22e & 1) == 0) {
      DAT_fffef22e = DAT_fffef22e | 1;
      DAT_fffef22c = DAT_fffef22c & 0xfd;
    }
    else if (DAT_ffff66b0 == '\x03') {
      DAT_fffef22c = DAT_fffef22c | 2;
    }
    if ((DAT_fffef22c & 2) != 0) {
      DAT_fffef22c = DAT_fffef22c | 1;
      return;
    }
    DAT_fffef22c = DAT_fffef22c & 0xfe;
  }
  return;
}

