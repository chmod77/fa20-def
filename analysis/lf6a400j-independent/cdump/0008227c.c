
void FUN_0008227c(char param_1,char param_2,char param_3,undefined1 *param_4)

{
  if (param_1 != '\0') {
    *param_4 = 3;
    return;
  }
  if (param_2 != '\0') {
    *param_4 = 1;
    return;
  }
  if (param_3 != '\0') {
    *param_4 = 2;
    return;
  }
  *param_4 = 0;
  return;
}

