
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e35e0(undefined2 param_1,char param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  
  uVar1 = 0x3200;
  if (param_2 == '\0') {
    uVar1 = _DAT_fffed280;
  }
  if (DAT_fffed282 == '\0') {
    uVar1 = param_1;
  }
  *param_3 = uVar1;
  _DAT_fffed280 = uVar1;
  DAT_fffed282 = 1;
  return;
}

