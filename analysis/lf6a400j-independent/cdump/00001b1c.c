
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001b1c(void)

{
  if (_DAT_00000400 != 0x305) {
    DAT_ffff6569 = DAT_ffff6569 | 2;
    return;
  }
  DAT_ffff6569 = DAT_ffff6569 & 0xfd;
  return;
}

