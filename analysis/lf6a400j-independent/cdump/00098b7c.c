
void FUN_00098b7c(char param_1,char param_2,undefined1 param_3,undefined1 param_4,undefined1 param_5
                 ,undefined1 param_6,undefined1 *param_7)

{
  if (param_2 != '\0') {
    if (param_1 == '\x01') {
      *param_7 = param_3;
      return;
    }
    if (param_1 == '\x02') {
      *param_7 = param_4;
      return;
    }
    if (param_1 == '\x03') {
      *param_7 = param_5;
      return;
    }
    if (param_1 == '\x04') {
      *param_7 = param_6;
      return;
    }
  }
  *param_7 = 0;
  return;
}

