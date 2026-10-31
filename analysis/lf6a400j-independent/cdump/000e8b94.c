
void FUN_000e8b94(char param_1,char param_2,char param_3,ushort param_4,ushort param_5,
                 ushort param_6,char param_7,char param_8,char param_9,undefined4 param_10,
                 ushort param_11,undefined4 param_12,ushort param_13,char *param_14)

{
  if ((((param_9 == '\0') && (param_1 == '\0')) && (param_2 == '\0')) &&
     ((param_3 != '\0' && ((param_7 != '\0' || (param_8 == '\0')))))) {
    if ((((param_3 == '\0') || (param_4 < 0x7d)) ||
        ((param_4 != param_13 || (((param_11 < 0xb800 || (param_5 < 0x3700)) || (param_6 < 0x1801)))
         ))) || (param_8 != '\0')) {
      *param_14 = param_8;
    }
    else {
      *param_14 = '\x01';
    }
  }
  else {
    *param_14 = '\0';
  }
  return;
}

