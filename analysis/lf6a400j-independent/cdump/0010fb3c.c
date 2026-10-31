
void FUN_0010fb3c(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,char param_10,char param_11,byte param_12,
                 byte *param_13)

{
  byte bVar1;
  
  if (((((param_7 == '\x01') && (param_5 == '\0')) && (param_6 == '\0')) &&
      ((param_8 != '\0' && (param_3 == '\0')))) && (param_4 == '\0')) {
    bVar1 = 0xfe;
    if (param_12 != 0xff) {
      bVar1 = param_12;
    }
    param_12 = 0x50;
    if ((byte)(bVar1 + 1) < 0x50) {
      param_12 = bVar1 + 1;
    }
  }
  if (param_11 == '\0') {
    if (((param_7 == '\x01') &&
        (((param_1 != '\0' || (param_2 != '\0')) || ((param_9 != '\0' || (param_10 != '\0')))))) ||
       ((param_7 == '\0' && ((param_5 != '\0' || (param_6 != '\0')))))) {
      *param_13 = 0;
    }
    else {
      *param_13 = param_12;
    }
  }
  else {
    *param_13 = 0x50;
  }
  return;
}

