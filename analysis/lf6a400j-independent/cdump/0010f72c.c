
void FUN_0010f72c(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,byte param_8,byte param_9,byte param_10,byte param_11,char param_12,
                 undefined2 param_13,char param_14,undefined2 param_15,char param_16,byte param_17,
                 undefined2 *param_18)

{
  if (((param_16 == '\0') &&
      ((((param_1 != '\0' || (param_2 == '\0')) || (param_3 != '\x01')) ||
       (((param_4 == '\0' || (param_5 != '\0')) || ((param_6 != '\0' || (param_7 != '\0')))))))) &&
     ((param_6 != '\x01' ||
      ((param_17 < 0x50 &&
       (((param_8 < 3 || (param_9 < 3)) ||
        ((param_10 < 3 || ((param_11 < 0x28 || (param_12 != '\0')))))))))))) {
    if ((((param_12 != '\0') || (param_2 == '\0')) || (param_14 == '\0')) || (param_7 != '\x01')) {
      *param_18 = param_15;
    }
    else {
      *param_18 = param_13;
    }
  }
  else {
    *param_18 = 0;
  }
  return;
}

