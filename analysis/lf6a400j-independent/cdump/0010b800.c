
void FUN_0010b800(char param_1,byte param_2,char *param_3)

{
  if (param_1 != '\0') {
    *param_3 = '(';
    return;
  }
  if (param_2 < 10) {
    *param_3 = '\0';
    return;
  }
  *param_3 = param_2 - 10;
  return;
}

