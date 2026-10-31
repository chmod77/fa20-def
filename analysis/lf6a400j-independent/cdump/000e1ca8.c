
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e1ca8(undefined2 param_1,char param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  
  if (DAT_fffed225 == '\0') {
    DAT_fffed224 = '\0';
    DAT_fffed225 = '\x01';
  }
  uVar1 = param_1;
  if (DAT_fffed224 != '\0') {
    FUN_0016b4d8(&DAT_ffff19d6,param_1,0x4000);
    uVar1 = _DAT_ffff19d6;
  }
  _DAT_ffff19d6 = uVar1;
  DAT_fffed224 = 1;
  if (param_2 == '\0') {
    *param_3 = _DAT_ffff19d6;
  }
  else {
    *param_3 = 0;
  }
  return;
}

