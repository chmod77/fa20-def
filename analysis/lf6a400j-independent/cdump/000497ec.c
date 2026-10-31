
void FUN_000497ec(void)

{
  if ((DAT_fffef9fa < 3) || ((DAT_fffef9f9 & 4) == 0)) {
    if (DAT_fffef9fe < 3) {
      return;
    }
    if ((DAT_fffef9f9 & 4) != 0) {
      return;
    }
    DAT_fffeff78 = DAT_fffeff78 & 0xfe;
  }
  else {
    DAT_fffeff78 = DAT_fffeff78 | 1;
  }
  DAT_fffeff74 = 1;
  DAT_fffef9fe = 0;
  DAT_fffef9fa = 0;
  return;
}

