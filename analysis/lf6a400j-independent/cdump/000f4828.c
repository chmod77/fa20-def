
void FUN_000f4828(char param_1,char param_2,char param_3,char param_4,char param_5,
                 undefined1 param_6,undefined1 *param_7)

{
  if (((param_1 == '\x01') || (param_1 == '\x02')) ||
     (((param_2 == '\0' || (param_3 == '\0')) && ((param_4 == '\0' || (param_5 == '\0')))))) {
    *param_7 = param_6;
  }
  else {
    *param_7 = 1;
  }
  return;
}

