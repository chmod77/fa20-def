
void FUN_000e5ebc(char param_1,char param_2,byte param_3,char param_4,char *param_5)

{
  char cVar1;
  
  if ((param_1 == '\0') && ((param_2 != '\0' || (DAT_fffed344 <= param_3)))) {
    cVar1 = -1;
    if (DAT_fffed345 != -1) {
      cVar1 = DAT_fffed345 + '\x01';
    }
  }
  else {
    cVar1 = '\0';
  }
  if (param_4 == '\0') {
    if ((param_1 == '\0') && (param_2 != '\0')) {
      cVar1 = -1;
    }
  }
  else {
    cVar1 = '\0';
  }
  *param_5 = cVar1;
  DAT_fffed345 = cVar1;
  DAT_fffed344 = param_3;
  return;
}

