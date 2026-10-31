
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ed228(char param_1,undefined2 param_2,undefined2 param_3,char param_4,
                 undefined2 *param_5)

{
  if (param_1 == '\x03') {
    param_3 = (undefined2)((uint)(_DAT_fffed580 * 0x168) >> 0x10);
  }
  if (param_4 == '\0') {
    *param_5 = param_3;
  }
  else {
    *param_5 = 0;
  }
  _DAT_fffed580 = param_2;
  return;
}

