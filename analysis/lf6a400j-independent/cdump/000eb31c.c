
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000eb31c(undefined2 param_1,undefined2 *param_2)

{
  if (DAT_fffed4f9 == '\0') {
    DAT_fffed4f8 = '\0';
    DAT_fffed4f9 = '\x01';
  }
  if (DAT_fffed4f8 == '\0') {
    _DAT_ffff19dc = 0x2000;
  }
  else {
    FUN_0016b4d8(&DAT_ffff19dc,param_1,0xffffffff);
  }
  DAT_fffed4f8 = 1;
  *param_2 = _DAT_ffff19dc;
  return;
}

