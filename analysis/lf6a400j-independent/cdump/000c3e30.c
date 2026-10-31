
void FUN_000c3e30(char param_1,char param_2,char param_3,char param_4,char *param_5)

{
  bool bVar1;
  
  bVar1 = false;
  if ((DAT_fffecab4 == '\0') && (param_1 != '\0')) {
    bVar1 = true;
  }
  if ((((!bVar1) || (param_2 != '\0')) || (param_3 != '\0')) || (param_4 == -1)) {
    if (((!bVar1) || (param_2 != '\0')) || ((param_3 != '\0' || (param_4 != -1)))) {
      *param_5 = param_4;
    }
    else {
      *param_5 = '\0';
    }
  }
  else if (param_4 == -1) {
    *param_5 = -1;
  }
  else {
    *param_5 = param_4 + '\x01';
  }
  DAT_fffecab4 = param_1;
  return;
}

