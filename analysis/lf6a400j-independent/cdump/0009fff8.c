
void FUN_0009fff8(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,undefined1 *param_8)

{
  if (((DAT_fffec11c == '\0') || (param_2 != '\0')) && ((param_2 == '\0' || (param_3 != '\0')))) {
    if ((param_1 == '\0') || (param_5 != '\0')) {
      if ((param_6 == '\0') || ((param_4 == '\0' || (param_7 != '\0')))) {
        *param_8 = 0;
      }
      else {
        *param_8 = 3;
      }
    }
    else {
      *param_8 = 2;
    }
  }
  else {
    *param_8 = 1;
  }
  DAT_fffec11c = param_2;
  return;
}

