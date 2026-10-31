
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e1a20(undefined2 param_1,char param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  
  if (DAT_fffed204 == '\0') {
    DAT_fffed205 = '\0';
    DAT_fffed204 = '\x01';
  }
  uVar1 = param_1;
  if (DAT_fffed205 != '\0') {
    FUN_0016b4d8(&DAT_ffff19d4,param_1,&DAT_0000e666);
    uVar1 = _DAT_ffff19d4;
  }
  _DAT_ffff19d4 = uVar1;
  DAT_fffed205 = 1;
  if (param_2 == '\0') {
    *param_3 = _DAT_ffff19d4;
  }
  else {
    *param_3 = 0;
  }
  return;
}

