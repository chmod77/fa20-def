
void FUN_000c9c7c(char param_1,char param_2,char param_3,char param_4,undefined1 param_5,
                 byte param_6,byte param_7,undefined1 *param_8)

{
  bool bVar1;
  
  bVar1 = true;
  if (((param_1 == '\0') || (param_3 != '\x01')) && ((param_2 == '\0' || (param_4 != '\x01')))) {
    bVar1 = false;
  }
  if (bVar1) {
    DAT_fffecb7c = DAT_fffecb7f;
    if ((DAT_fffecb81 <= param_6) && (param_7 <= DAT_fffecb80)) {
      DAT_fffecb7c = DAT_fffecb7e;
    }
    DAT_fffecb7f = param_5;
    DAT_fffecb81 = param_6;
    DAT_fffecb80 = param_7;
    DAT_fffecb7e = DAT_fffecb7c;
  }
  if (bVar1) {
    DAT_fffecb7d = DAT_fffecb7c;
  }
  *param_8 = DAT_fffecb7d;
  return;
}

