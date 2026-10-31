
void FUN_00099bd0(char param_1,char param_2,char param_3,char param_4,char param_5,char *param_6)

{
  if (((param_2 == '\0') || (param_4 == '\0')) &&
     ((param_2 == '\0' || ((param_4 != '\0' || (param_3 == '\0')))))) {
    *param_6 = param_5;
    return;
  }
  if ('\x05' < param_1) {
    param_1 = '\x06';
  }
  if (param_1 < '\0') {
    *param_6 = '\0';
    return;
  }
  *param_6 = param_1;
  return;
}

