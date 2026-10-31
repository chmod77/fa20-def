
void FUN_000d8fe4(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,char param_10,undefined1 param_11,
                 undefined1 param_12,short param_13,short param_14,char param_15,char param_16,
                 undefined1 *param_17)

{
  undefined1 uVar1;
  
  uVar1 = param_12;
  if (DAT_fffecf74 == '\0') {
    uVar1 = param_11;
  }
  if (((param_3 == '\0') &&
      (((DAT_fffecf78 == '\0' && (param_1 != '\0')) || ((DAT_fffecf75 != '\0' && (param_2 != '\0')))
       ))) || ((((((param_4 != '\0' || (param_5 != '\0')) || (param_6 != '\0')) || (param_7 == '\0')
                 ) || ((param_8 == '\0' && (param_9 != '\0')))) || (param_10 == '\0')))) {
    uVar1 = 0;
  }
  else if (((param_13 == 0) && (param_14 == 0)) &&
          ((param_10 != '\0' && ((param_15 != '\0' && (param_16 == '\0')))))) {
    uVar1 = 0xaa;
  }
  if (((param_3 == '\0') || (DAT_fffecf76 == '\0')) || (param_2 == '\0')) {
    param_12 = uVar1;
  }
  if (((param_3 == '\0') || (DAT_fffecf77 != '\0')) || (param_1 == '\0')) {
    *param_17 = param_12;
  }
  else {
    *param_17 = param_11;
  }
  DAT_fffecf78 = 1;
  DAT_fffecf77 = 1;
  DAT_fffecf76 = 1;
  DAT_fffecf75 = 1;
  DAT_fffecf74 = 1;
  return;
}

