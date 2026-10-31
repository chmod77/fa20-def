
void FUN_000d965c(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 undefined1 *param_7)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = false;
  if ((((param_2 == '\0') && (param_3 != '\0')) && (param_4 == '\0')) &&
     ((param_5 == '\0' && (param_6 == '\0')))) {
    bVar1 = true;
  }
  if (param_1 == '\0') {
    *param_7 = 0;
  }
  else {
    *param_7 = bVar1 && 0x31 < DAT_fffecfa0;
  }
  if (bVar1) {
    bVar2 = 0xfe;
    if (DAT_fffecfa0 != 0xff) {
      bVar2 = DAT_fffecfa0;
    }
    DAT_fffecfa0 = bVar2 + 1;
  }
  else {
    DAT_fffecfa0 = '\0';
  }
  return;
}

