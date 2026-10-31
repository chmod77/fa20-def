
void FUN_0010db6c(char param_1,char param_2,char param_3,char param_4,short param_5,char param_6,
                 char param_7,short param_8,short *param_9)

{
  if (((param_6 == '\0') || (param_7 != '\0')) ||
     ((param_1 == '\0' && (((param_3 == '\0' && (param_2 == '\0')) && (param_4 == '\0')))))) {
    *param_9 = 0;
  }
  else if (((param_1 == '\0') && (param_2 == '\0')) || (param_8 != 0)) {
    *param_9 = param_8;
  }
  else {
    *param_9 = param_5;
  }
  return;
}

