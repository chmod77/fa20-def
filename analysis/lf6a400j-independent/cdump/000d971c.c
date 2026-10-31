
void FUN_000d971c(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,short param_10,short param_11,char param_12,
                 char param_13,char *param_14)

{
  char cVar1;
  
  if ((param_12 != '\0') || (cVar1 = '\0', param_13 != '\0')) {
    cVar1 = DAT_fffecfa9;
  }
  if ((((param_10 == 0) && (param_11 == 0)) && (param_12 != '\0')) &&
     ((param_9 != '\0' && (DAT_fffecfa9 == '\0')))) {
    cVar1 = DAT_fffecfa9;
  }
  if ((((DAT_fffecfa8 != '\0') || (param_1 == '\0')) &&
      ((DAT_fffecfa8 == '\0' || (param_2 == '\0')))) &&
     ((param_3 == '\0' &&
      (((((param_4 != '\0' || (param_5 != '\0')) || (param_6 == '\0')) ||
        ((param_7 == '\0' && (param_8 != '\0')))) || (DAT_fffecfa9 = cVar1, param_9 == '\0')))))) {
    DAT_fffecfa9 = '\x01';
  }
  *param_14 = DAT_fffecfa9;
  DAT_fffecfa8 = 1;
  return;
}

