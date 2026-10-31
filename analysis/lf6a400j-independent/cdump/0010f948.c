
void FUN_0010f948(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,char param_10,char param_11,byte param_12,
                 byte *param_13)

{
  byte bVar1;
  byte bVar2;
  
  bVar2 = param_12;
  if (((((param_8 != '\0') && (param_7 == '\x01')) && (param_1 != '\0')) &&
      ((param_2 != '\0' && (param_6 == '\0')))) &&
     ((param_5 == '\0' && ((param_3 != '\0' || (param_4 != '\0')))))) {
    bVar1 = 0xfe;
    if (param_12 != 0xff) {
      bVar1 = param_12;
    }
    bVar2 = bVar1 + 1;
    if (2 < (byte)(bVar1 + 1)) {
      bVar2 = 3;
    }
  }
  if ((param_10 == '\0') || (param_11 != '\0')) {
    *param_13 = 3;
  }
  else if (param_9 == -0x5b) {
    *param_13 = param_12;
  }
  else if ((((param_5 == '\0') || (param_3 == '\0')) && ((param_6 == '\0' || (param_4 == '\0')))) ||
          (param_7 != '\0')) {
    *param_13 = bVar2;
  }
  else {
    *param_13 = 0;
  }
  return;
}

