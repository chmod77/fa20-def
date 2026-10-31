
void FUN_0010ec84(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,byte param_10,byte *param_11)

{
  byte bVar1;
  
  if (((((param_8 != '\0') && (param_7 == '\x01')) && (param_1 != '\0')) &&
      ((param_2 != '\0' && (param_5 == '\0')))) &&
     ((param_6 == '\0' && ((param_3 != '\0' || (param_4 != '\0')))))) {
    bVar1 = 0xff;
    if (param_10 != 0xff) {
      bVar1 = param_10 + 1;
    }
    param_10 = bVar1;
    if (2 < param_10) {
      param_10 = 3;
    }
  }
  if (param_9 == '\0') {
    if ((((param_5 == '\0') || (param_3 == '\0')) && ((param_6 == '\0' || (param_4 == '\0')))) ||
       (param_7 != '\0')) {
      *param_11 = param_10;
    }
    else {
      *param_11 = 0;
    }
  }
  else {
    *param_11 = 3;
  }
  return;
}

