
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000eaf4c(undefined2 param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  
  if (DAT_fffed4c3 == '\0') {
    DAT_fffed4c2 = '\0';
    DAT_fffed4c3 = '\x01';
  }
  uVar1 = param_1;
  if (DAT_fffed4c2 != '\0') {
    FUN_0016b4d8(&DAT_ffff19d8,param_1,0xffffffff);
    uVar1 = _DAT_ffff19d8;
  }
  _DAT_ffff19d8 = uVar1;
  DAT_fffed4c2 = 1;
  *param_2 = _DAT_ffff19d8;
  _DAT_fffed4c0 = _DAT_ffff19d8;
  return;
}

