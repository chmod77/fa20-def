
void FUN_000497a0(void)

{
  if ((DAT_fffef9fb < 3) || ((DAT_fffef9f9 & 8) == 0)) {
    if (DAT_fffef9ff < 3) {
      return;
    }
    if ((DAT_fffef9f9 & 8) != 0) {
      return;
    }
    DAT_fffeff78 = DAT_fffeff78 & 0xfd;
  }
  else {
    DAT_fffeff78 = DAT_fffeff78 | 2;
  }
  DAT_fffeff72 = 1;
  DAT_fffef9ff = 0;
  DAT_fffef9fb = 0;
  return;
}

