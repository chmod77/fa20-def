
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000eb370(undefined2 param_1,undefined2 *param_2)

{
  if (DAT_fffed4fc == '\0') {
    DAT_fffed4fd = '\0';
    DAT_fffed4fc = '\x01';
  }
  if (DAT_fffed4fd == '\0') {
    _DAT_ffff19de = 0x2000;
  }
  else {
    FUN_0016b4d8(&DAT_ffff19de,param_1,0xffff8000);
  }
  DAT_fffed4fd = 1;
  *param_2 = _DAT_ffff19de;
  return;
}

