
void FUN_00098ad4(char param_1,char param_2,char param_3,undefined1 param_4,undefined1 param_5,
                 undefined1 param_6,undefined1 param_7,undefined1 *param_8)

{
  if (param_1 != '\0') {
    if ((param_2 != '\0') && (param_3 != '\0')) {
      *param_8 = param_4;
      return;
    }
    if ((param_2 != '\0') && (param_3 == '\0')) {
      *param_8 = param_5;
      return;
    }
    if ((param_2 == '\0') && (param_3 != '\0')) {
      *param_8 = param_6;
      return;
    }
    if ((param_2 == '\0') && (param_3 == '\0')) {
      *param_8 = param_7;
      return;
    }
  }
  *param_8 = 0;
  return;
}

