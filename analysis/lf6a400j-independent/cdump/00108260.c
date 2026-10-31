
void FUN_00108260(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,byte param_8,char param_9,char param_10,ushort param_11,short param_12
                 ,char param_13,char param_14,char param_15,ushort param_16,ushort param_17,
                 ushort param_18,char param_19,char param_20,ushort param_21,char param_22,
                 char param_23,char param_24,char param_25,char param_26,char param_27,char param_28
                 ,undefined1 *param_29)

{
  bool bVar1;
  
  if ((((param_1 != '\0') &&
       ((DAT_fffedb48 = 0, param_2 == '\0' || ((param_3 != '\0' && (param_4 != '\0')))))) &&
      ((param_5 == '\0' || (param_4 != '\0')))) &&
     (((param_6 == '\0' && (param_7 == '\0')) &&
      ((((param_8 < 7 && (1 < param_8)) ||
        (((param_9 != '\0' && (param_10 != '\0')) && (param_8 == 1)))) && (param_11 < 32000)))))) {
    bVar1 = false;
    if ((0x400 < param_12) && (param_13 != '\0')) {
      bVar1 = true;
    }
    if ((!bVar1) && (param_14 == '\0')) {
      bVar1 = false;
      if ((param_9 != '\0') && (param_15 != '\0')) {
        bVar1 = true;
      }
      if (((!bVar1) && (param_16 < param_17)) && (param_18 <= param_16)) {
        bVar1 = false;
        if ((((param_19 != '\0') && (param_20 != '\0')) && (param_16 < param_21)) &&
           (((param_9 == '\0' || (param_10 == '\0')) || (param_22 == '\0')))) {
          bVar1 = true;
        }
        if (((((!bVar1) && (param_23 == '\0')) && (param_24 == '\0')) &&
            ((param_25 == '\0' && (param_26 == '\0')))) &&
           ((param_9 == DAT_fffedb49 && ((param_27 == '\0' && (param_28 != '\x04')))))) {
          DAT_fffedb48 = 1;
        }
      }
    }
  }
  if (param_1 == '\0') {
    *param_29 = 0;
  }
  else {
    *param_29 = DAT_fffedb48;
  }
  DAT_fffedb49 = param_9;
  return;
}

