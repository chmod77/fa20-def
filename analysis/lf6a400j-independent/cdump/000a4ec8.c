
void FUN_000a4ec8(char param_1,char param_2,char param_3,char param_4,undefined1 param_5,
                 undefined1 *param_6)

{
  if (param_4 == '\0') {
    if (param_1 == '\0') {
      if (param_2 == '\x02') {
        *param_6 = 1;
        return;
      }
      if (param_3 != '\n') goto LAB_000a4eea;
    }
    *param_6 = 0;
    return;
  }
LAB_000a4eea:
  *param_6 = param_5;
  return;
}

