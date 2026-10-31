
void FUN_000e392c(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,undefined1 *param_10)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = true;
  if ((((((param_2 == '\0') && (param_3 == '\0')) && (param_4 == '\0')) &&
       ((param_5 == '\0' && (param_1 == '\0')))) &&
      ((param_8 == '\0' && ((param_9 == '\0' && (param_6 == '\0')))))) && (param_7 == '\0')) {
    bVar1 = false;
  }
  if (bVar1) {
    *param_10 = 0;
    DAT_fffed290 = '\0';
  }
  else {
    *param_10 = 9 < DAT_fffed290;
    bVar2 = 0xfb;
    if (DAT_fffed290 < 0xfc) {
      bVar2 = DAT_fffed290;
    }
    DAT_fffed290 = bVar2 + 4;
  }
  return;
}

