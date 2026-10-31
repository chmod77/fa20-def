
void FUN_0010bf30(char param_1,char param_2,byte param_3,undefined1 *param_4)

{
  char cVar1;
  
  cVar1 = '\x01';
  if (param_1 == '\0') {
    cVar1 = DAT_fffedcb2;
  }
  if (DAT_fffedcb1 < param_3) {
    cVar1 = '\0';
  }
  if ((param_2 != '\0') && (param_3 == 0)) {
    DAT_fffedcb0 = 8;
  }
  if (cVar1 == '\0') {
    if (param_3 == 0) {
      if (param_2 == '\0') {
        DAT_fffedcb0 = 4;
      }
    }
    else {
      DAT_fffedcb0 = 2;
    }
  }
  else {
    DAT_fffedcb0 = 1;
  }
  *param_4 = DAT_fffedcb0;
  DAT_fffedcb2 = cVar1;
  DAT_fffedcb1 = param_3;
  return;
}

