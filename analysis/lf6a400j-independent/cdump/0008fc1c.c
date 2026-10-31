
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008fc1c(char param_1,char param_2,char param_3,undefined2 param_4,undefined2 param_5,
                 undefined2 param_6,undefined2 param_7,undefined2 *param_8)

{
  if ((param_2 != '\0') || (param_3 != '\0')) {
    param_7 = _DAT_fffebd40;
  }
  if (param_1 == '\0') {
    param_4 = 0x8000;
  }
  else if ((((param_2 == '\0') || (param_3 == '\0')) &&
           ((param_2 == '\0' || (param_4 = param_5, param_3 != '\0')))) &&
          ((param_4 = param_7, param_2 == '\0' && (param_3 != '\0')))) {
    param_4 = param_6;
  }
  *param_8 = param_4;
  _DAT_fffebd40 = param_4;
  return;
}

