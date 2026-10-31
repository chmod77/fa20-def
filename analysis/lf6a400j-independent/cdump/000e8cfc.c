
void FUN_000e8cfc(char param_1,char param_2,char param_3,undefined1 param_4,char param_5,
                 byte param_6,char param_7,undefined1 *param_8)

{
  char cVar1;
  undefined1 uVar2;
  
  if ((param_7 != '\x05') || (cVar1 = '\x01', DAT_fffed3f6 != '\x01')) {
    cVar1 = DAT_fffed3f5;
  }
  if (param_7 == '\x01') {
    cVar1 = '\0';
  }
  if ((((param_3 != '\0') && (param_6 < DAT_fffed3f4)) && (param_7 == '\x05')) ||
     ((uVar2 = param_4, param_3 != '\0' && (cVar1 != '\0')))) {
    uVar2 = 1;
  }
  if ((param_5 == '\0') && (param_1 == '\0')) {
    if (param_2 == '\0') {
      *param_8 = uVar2;
    }
    else {
      *param_8 = param_4;
    }
  }
  else {
    *param_8 = 0;
  }
  DAT_fffed3f5 = cVar1;
  DAT_fffed3f6 = param_7;
  DAT_fffed3f4 = param_6;
  return;
}

