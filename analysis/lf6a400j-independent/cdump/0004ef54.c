
void FUN_0004ef54(void)

{
  if (((DAT_fffef364 & 2) == 0) && (DAT_fffef3ba != '\0')) {
    DAT_fffef3b8 = DAT_fffef3b8 | 1;
  }
  if ((((int)DAT_fffeef76 & 0x80U) == 0) || ((DAT_fffef364 & 2) == 0)) {
    if ((2 < DAT_fffef3b9) || (((int)DAT_fffeef76 & 0x80U) == 0)) {
      DAT_fffef364 = DAT_fffef364 & 0xfe;
    }
  }
  else {
    DAT_fffef364 = DAT_fffef364 | 1;
  }
  if ((DAT_fffef3b8 & 1) != 0) {
    DAT_fffef3b9 = FUN_0000152c(DAT_fffef3b9 + 1);
  }
  DAT_fffef3ba = '\x01' - ((DAT_fffef364 & 2) == 0);
  return;
}

