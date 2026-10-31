
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00006dbc(void)

{
  FUN_000072c8();
  if ((_DAT_fffff75e & 0x10) != 0) {
    if (DAT_ffffab20 == '\0') {
      FUN_000071d8();
      FUN_00007198(0x11);
      return;
    }
    if (DAT_ffffab20 == '\x01') {
      FUN_00007220();
      FUN_00007198(0x10);
      return;
    }
    if (DAT_ffffab20 == '\x02') {
      DAT_ffff8ecd = 5;
      DAT_ffff92d1 = 0x80;
    }
  }
  FUN_00007478();
  return;
}

