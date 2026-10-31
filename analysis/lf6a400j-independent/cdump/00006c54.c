
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00006c54(void)

{
  FUN_000072c8();
  if ((_DAT_fffff75e & 0x10) != 0) {
    if (DAT_ffffab1f == '\0') {
      if (_DAT_ffffa30c != 0) {
        if (_DAT_ffffa30c == DAT_ffffab21) {
          FUN_000071d8();
          FUN_00007198(7);
          return;
        }
      }
      FUN_00007220();
      FUN_00007198(8);
      return;
    }
    DAT_ffffab22 = 0xff;
    DAT_ffff885f = DAT_ffff885f | 0x10;
  }
  FUN_00007478();
  return;
}

