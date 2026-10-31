
void FUN_00058c7c(void)

{
  if (((DAT_fffef371 & 8) != 0) && (0x1f < DAT_fffef0b5)) {
    DAT_fffef371 = DAT_fffef371 | 0x10;
    return;
  }
  DAT_fffef371 = DAT_fffef371 & 0xef;
  return;
}

