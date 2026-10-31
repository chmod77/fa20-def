
void FUN_000d7b60(char param_1,char param_2,char param_3,char param_4,undefined2 *param_5)

{
  if (((param_1 == '\0') && (param_4 == '\0')) && ((param_2 != '\0' || (param_3 != '\0')))) {
    if ((param_2 != '\0') && (param_3 != '\0')) {
      *param_5 = 0x37a;
      return;
    }
    if ((param_2 == '\0') && (param_3 != '\0')) {
      *param_5 = 0x316;
      return;
    }
    if ((param_2 != '\0') && (param_3 == '\0')) {
      *param_5 = 0x2d0;
      return;
    }
  }
  *param_5 = 0;
  return;
}

