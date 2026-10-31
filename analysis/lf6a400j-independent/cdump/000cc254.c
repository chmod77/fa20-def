
void FUN_000cc254(char param_1,char param_2,char param_3,char param_4,undefined1 param_5,
                 undefined1 param_6,undefined1 *param_7)

{
  bool bVar1;
  
  bVar1 = true;
  if (((param_1 == '\0') || (param_3 != '\x01')) && ((param_2 == '\0' || (param_4 != '\x01')))) {
    bVar1 = false;
  }
  if (bVar1) {
    if ((param_1 == '\0') && (param_2 == '\0')) {
      DAT_fffecbfc = param_6;
    }
    else {
      DAT_fffecbfc = param_5;
    }
  }
  if (bVar1) {
    DAT_fffecbfd = DAT_fffecbfc;
  }
  *param_7 = DAT_fffecbfd;
  return;
}

