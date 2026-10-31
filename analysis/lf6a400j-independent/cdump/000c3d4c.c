
void FUN_000c3d4c(short param_1,int param_2,char param_3,short param_4,short *param_5)

{
  short sVar1;
  
  if (param_4 == -2) {
    sVar1 = 0;
  }
  else {
    sVar1 = -1;
    if (param_4 != -1) {
      sVar1 = param_4 + 1;
    }
  }
  if (DAT_fffecaac != '\0') {
    sVar1 = param_4;
  }
  if (((param_1 == -1) || (param_2 == 0xffffff)) || (param_3 != '\x01')) {
    *param_5 = sVar1;
  }
  else {
    *param_5 = param_1;
  }
  DAT_fffecaac = 1;
  return;
}

