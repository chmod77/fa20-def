
void FUN_000e01e8(ushort param_1,char param_2,undefined4 param_3,byte param_4,char param_5,
                 char param_6,char param_7,char param_8,undefined1 *param_9,char *param_10)

{
  char cVar1;
  undefined1 uVar2;
  
  if ((param_2 == '\0') && (param_8 == '\0')) {
    cVar1 = DAT_fffed1a7;
    if (DAT_fffed1a6 != '\0') {
      DAT_fffed1a4 = '\0';
      DAT_fffed1a6 = '\0';
      DAT_fffed1a5 = '\0';
    }
  }
  else {
    if (DAT_fffed1a5 == '\0') {
      DAT_fffed1a7 = '\0';
      DAT_fffed1a5 = '\x01';
      DAT_fffed1a6 = '\x01';
    }
    DAT_fffed1a4 = '\0';
    cVar1 = DAT_fffed1a4;
    if ((param_8 == '\0') && (DAT_fffed1a4 = -1, cVar1 = DAT_fffed1a4, DAT_fffed1a7 != -1)) {
      DAT_fffed1a4 = DAT_fffed1a7 + '\x01';
      cVar1 = DAT_fffed1a4;
    }
  }
  DAT_fffed1a7 = cVar1;
  *param_10 = DAT_fffed1a4;
  uVar2 = 0;
  if ((((499 < param_1) && (DAT_fffed1a4 != '\0')) && (99 < param_4)) &&
     (((param_5 != '\0' && (param_6 == '\0')) && (param_7 == '\0')))) {
    uVar2 = 1;
  }
  *param_9 = uVar2;
  return;
}

