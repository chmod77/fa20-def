
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000072f8(void)

{
  if (_DAT_ffff92d4 != 0) {
    if (7 >= _DAT_ffff92d4) {
      DAT_ffffa308 = 7 < _DAT_ffff92d4;
      return;
    }
    if (_DAT_ffff92d4 < 0x1000) {
      DAT_ffffa308 = 1;
      return;
    }
  }
  DAT_ffffa308 = 0xff;
  return;
}

