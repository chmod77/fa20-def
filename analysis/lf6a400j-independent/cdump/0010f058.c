
void FUN_0010f058(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 ushort param_7,byte param_8,ushort param_9,byte param_10,byte param_11,
                 char param_12,byte *param_13)

{
  byte bVar1;
  
  if (((((param_4 == '\0') && (param_3 == '\0')) && (param_5 != '\0')) && (param_6 == '\x01')) &&
     (((((param_1 != '\0' && (1999 < param_7)) &&
        ((param_8 < 100 && ((param_2 != '\0' && (399 < param_9)))))) && (param_10 < 0x14)) ||
      (((((param_1 != '\0' && (1999 < param_7)) && (param_8 < 100)) && (param_2 == '\0')) ||
       (((param_1 == '\0' && (399 < param_9)) && ((param_10 < 0x14 && (param_2 != '\0')))))))))) {
    bVar1 = 0xff;
    if (param_11 != 0xff) {
      bVar1 = param_11 + 1;
    }
    param_11 = bVar1;
    if (3 < param_11) {
      param_11 = 3;
    }
  }
  if ((param_12 == '\0') && (((param_1 != '\0' || (param_2 != '\0')) || (param_6 != '\0')))) {
    if (((param_6 != '\0') || ((param_2 == '\0' && (param_1 == '\0')))) ||
       ((param_3 == '\0' && (param_4 == '\0')))) {
      *param_13 = param_11;
    }
    else {
      *param_13 = 0;
    }
  }
  else {
    *param_13 = 3;
  }
  return;
}

