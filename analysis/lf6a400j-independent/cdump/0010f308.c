
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010f308(undefined2 param_1,char param_2,ushort param_3,char param_4,undefined2 *param_5)

{
  if ((param_2 != '\0') || (param_3 <= _DAT_fffedd00)) {
    param_1 = _DAT_fffedd02;
  }
  if (param_4 != '\0') {
    param_1 = 0;
  }
  *param_5 = param_1;
  _DAT_fffedd02 = param_1;
  _DAT_fffedd00 = param_3;
  return;
}

