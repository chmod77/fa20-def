
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ecec8(char param_1,undefined4 param_2,char param_3,undefined4 *param_4)

{
  if (param_1 != '\x03') {
    param_2 = _DAT_fffed578;
  }
  if (param_3 != '\0') {
    param_2 = 0;
  }
  *param_4 = param_2;
  _DAT_fffed578 = param_2;
  return;
}

