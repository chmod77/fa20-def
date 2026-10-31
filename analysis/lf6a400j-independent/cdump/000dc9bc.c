
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000dc9bc(undefined4 param_1,char param_2,undefined4 *param_3)

{
  if (param_2 == '\0') {
    *param_3 = _DAT_fffed118;
  }
  else {
    *param_3 = 0xffffffff;
  }
  _DAT_fffed118 = param_1;
  return;
}

