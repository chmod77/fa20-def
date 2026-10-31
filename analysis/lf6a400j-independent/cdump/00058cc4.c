
void FUN_00058cc4(char param_1)

{
  if (((DAT_fffef371 & 2) != 0) && (param_1 == '\0')) {
    DAT_fffef371 = DAT_fffef371 | 0x40;
    return;
  }
  DAT_fffef371 = DAT_fffef371 & 0xbf;
  return;
}

