
void FUN_000f5860(char param_1,char param_2,char param_3,undefined1 *param_4)

{
  if (param_3 == '\0') {
    if (param_1 != '\0') {
      *param_4 = 2;
      return;
    }
    if (param_2 != '\0') {
      *param_4 = 3;
      return;
    }
  }
  *param_4 = 0;
  return;
}

