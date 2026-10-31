
void FUN_00050cd2(void)

{
  if (DAT_ffff091d != -1) {
    DAT_fffef054 = DAT_fffef054 & 0x7f;
    return;
  }
  DAT_fffef054 = DAT_fffef054 | 0x80;
  return;
}

