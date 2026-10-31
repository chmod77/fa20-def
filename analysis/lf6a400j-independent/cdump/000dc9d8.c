
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000dc9d8(undefined4 param_1,char param_2,undefined4 *param_3)

{
  if (param_2 == '\0') {
    *param_3 = _DAT_fffed11c;
  }
  else {
    *param_3 = 0xffffffff;
  }
  _DAT_fffed11c = param_1;
  return;
}

