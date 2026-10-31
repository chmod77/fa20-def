
void FUN_000e6d2c(byte param_1,char param_2,char param_3,char param_4,ushort param_5,ushort param_6,
                 ushort param_7,char param_8,char param_9,undefined4 param_10,ushort param_11,
                 undefined4 param_12,ushort param_13,char *param_14)

{
  char cVar1;
  
  cVar1 = DAT_fffed389;
  if ((((param_4 != '\0') && (0x7c < param_5)) && (param_5 == param_13)) &&
     (((0xb7ff < param_11 && (0x36ff < param_6)) &&
      ((0x1800 < param_7 && ((param_8 == '\0' && (cVar1 = -1, DAT_fffed389 != -1)))))))) {
    cVar1 = DAT_fffed389 + '\x01';
  }
  if ((((param_9 != '\0') || (DAT_fffed388 < param_1)) || (param_2 != '\0')) ||
     ((param_3 != '\0' || (param_4 == '\0')))) {
    cVar1 = '\0';
  }
  *param_14 = cVar1;
  DAT_fffed389 = cVar1;
  DAT_fffed388 = param_1;
  return;
}

