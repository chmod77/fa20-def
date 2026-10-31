
void FUN_00151102(void)

{
  if (DAT_ffff66b8 == -0x5b) {
    DAT_ffff6780 = 1;
    return;
  }
  if ((DAT_ffffabc4 == '\x01') && ((DAT_ffff6569 & 0x20) == 0)) {
    DAT_ffff6780 = 2;
    DAT_ffffabc4 = 0;
    return;
  }
  DAT_ffff6780 = 0;
  return;
}

