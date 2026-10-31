
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b7320(undefined2 param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  
  if (DAT_fffec7dc == '\0') {
    DAT_fffec7dd = '\0';
    DAT_fffec7dc = '\x01';
  }
  uVar1 = param_1;
  if (DAT_fffec7dd != '\0') {
    FUN_0016b4d8(&DAT_ffff19ca,param_1,0xffffffff);
    uVar1 = _DAT_ffff19ca;
  }
  _DAT_ffff19ca = uVar1;
  DAT_fffec7dd = 1;
  *param_2 = _DAT_ffff19ca;
  return;
}

