
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ac7c0(undefined2 param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  
  if (DAT_fffec4ed == '\0') {
    DAT_fffec4ec = '\0';
    DAT_fffec4ed = '\x01';
  }
  uVar1 = param_1;
  if (DAT_fffec4ec != '\0') {
    FUN_0016b4d8(&DAT_ffff19c4,param_1,0xffffffff);
    uVar1 = _DAT_ffff19c4;
  }
  _DAT_ffff19c4 = uVar1;
  DAT_fffec4ec = 1;
  *param_2 = _DAT_ffff19c4;
  return;
}

