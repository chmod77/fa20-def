
void FUN_0010f1f0(char param_1,char param_2,char param_3,char param_4,short param_5,short param_6,
                 char param_7,byte param_8,short *param_9)

{
  if (((param_7 == '\0') && (param_8 < 0x50)) &&
     ((param_1 != '\0' || (((param_3 != '\0' || (param_2 != '\0')) || (param_4 != '\0')))))) {
    if (((param_1 == '\0') && (param_2 == '\0')) || (param_6 != 0)) {
      *param_9 = param_6;
    }
    else {
      *param_9 = param_5;
    }
  }
  else {
    *param_9 = 0;
  }
  return;
}

