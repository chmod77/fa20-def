
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00058c58(void)

{
  if (((DAT_fffef371 & 4) != 0) && (0x4b0e < _DAT_fffeeed0)) {
    DAT_fffef371 = DAT_fffef371 | 8;
    return;
  }
  DAT_fffef371 = DAT_fffef371 & 0xf7;
  return;
}

