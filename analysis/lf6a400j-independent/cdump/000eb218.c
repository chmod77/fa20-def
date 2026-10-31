
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000eb218(undefined2 param_1,undefined2 *param_2)

{
  if (DAT_fffed4e5 == '\0') {
    DAT_fffed4e4 = '\0';
    DAT_fffed4e5 = '\x01';
  }
  if (DAT_fffed4e4 == '\0') {
    _DAT_ffff19da = 0x2000;
  }
  else {
    FUN_0016b4d8(&DAT_ffff19da,param_1,0x199a);
  }
  DAT_fffed4e4 = 1;
  *param_2 = _DAT_ffff19da;
  return;
}

