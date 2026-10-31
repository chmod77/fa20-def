
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e89c4(undefined2 param_1,byte param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = _DAT_fffed3dc;
  }
  if (param_2 <= DAT_fffed3de) {
    param_1 = uVar1;
  }
  *param_3 = param_1;
  _DAT_fffed3dc = param_1;
  DAT_fffed3de = param_2;
  return;
}

