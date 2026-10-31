
void FUN_000f2b58(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 undefined1 param_7,undefined1 *param_8)

{
  if (param_6 == '\0') {
    if ((param_1 == '\x02') ||
       (((param_1 != '\x01' && (param_1 != '\x02')) &&
        (((param_2 != '\0' && (param_3 != '\0')) || ((param_4 != '\0' && (param_5 != '\0')))))))) {
      *param_8 = 1;
    }
    else {
      *param_8 = param_7;
    }
  }
  else {
    *param_8 = 0;
  }
  return;
}

