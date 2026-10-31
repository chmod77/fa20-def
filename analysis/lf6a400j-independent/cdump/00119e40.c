
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00119e40(undefined2 param_1,undefined2 param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  
  if (DAT_fffedff8 == '\0') {
    DAT_fffedff9 = '\0';
    DAT_fffedff8 = '\x01';
  }
  uVar1 = param_1;
  if (DAT_fffedff9 != '\0') {
    FUN_0016b4d8(&DAT_ffff19ee,param_1,param_2);
    uVar1 = _DAT_ffff19ee;
  }
  _DAT_ffff19ee = uVar1;
  DAT_fffedff9 = 1;
  *param_3 = _DAT_ffff19ee;
  return;
}

