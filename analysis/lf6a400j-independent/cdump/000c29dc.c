
void FUN_000c29dc(char param_1,char param_2,char param_3,char param_4,undefined1 param_5,
                 byte param_6,undefined1 *param_7)

{
  bool bVar1;
  
  bVar1 = true;
  if (((param_1 == '\0') || (param_3 != '\x01')) && ((param_2 == '\0' || (param_4 != '\x01')))) {
    bVar1 = false;
  }
  if (bVar1) {
    if (param_6 <= DAT_fffeca22) {
      param_5 = DAT_fffeca21;
    }
    DAT_fffeca22 = param_6;
    DAT_fffeca20 = param_5;
    DAT_fffeca21 = param_5;
  }
  if (bVar1) {
    DAT_fffeca23 = DAT_fffeca20;
  }
  *param_7 = DAT_fffeca23;
  return;
}

