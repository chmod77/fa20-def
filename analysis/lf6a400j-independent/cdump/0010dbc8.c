
void FUN_0010dbc8(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,char param_10,char param_11,char param_12,
                 char param_13,byte param_14,byte *param_15)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar1 = true;
  if ((param_5 == '\0') && (param_6 == '\0')) {
    bVar1 = false;
  }
  bVar3 = param_14;
  if ((((param_7 == '\x01') && (!bVar1)) && (param_10 == '\0')) &&
     (((param_9 == '\0' && (param_8 != '\0')) && ((param_3 == '\0' && (param_4 == '\0')))))) {
    bVar2 = 0xfe;
    if (param_14 != 0xff) {
      bVar2 = param_14;
    }
    bVar3 = bVar2 + 1;
    if (0x4f < (byte)(bVar2 + 1)) {
      bVar3 = 0x50;
    }
  }
  if ((param_12 == '\0') || (param_13 != '\0')) {
    *param_15 = 0x50;
  }
  else if (param_11 == -0x5b) {
    *param_15 = param_14;
  }
  else if ((((((param_1 != '\0') || (param_2 != '\0')) || (param_9 != '\0')) || (param_10 != '\0'))
           && (param_7 == '\x01')) || ((param_7 == '\0' && (bVar1)))) {
    *param_15 = 0;
  }
  else {
    *param_15 = bVar3;
  }
  return;
}

