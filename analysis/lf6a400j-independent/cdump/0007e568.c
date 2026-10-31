
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007e568(char param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 *param_5)

{
  undefined2 uVar1;
  
  if (DAT_fffeba10 == '\0') {
    DAT_fffeba11 = '\0';
    DAT_fffeba10 = '\x01';
  }
  uVar1 = param_2;
  if (DAT_fffeba11 != '\0') {
    FUN_0016b4d8(&DAT_ffff199e,param_2,param_4);
    uVar1 = _DAT_ffff199e;
  }
  _DAT_ffff199e = uVar1;
  DAT_fffeba11 = 1;
  if (param_1 == '\0') {
    *param_5 = param_3;
  }
  else {
    *param_5 = _DAT_ffff199e;
  }
  return;
}

