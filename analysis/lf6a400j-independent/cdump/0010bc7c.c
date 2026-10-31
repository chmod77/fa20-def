
void FUN_0010bc7c(int param_1,byte param_2,byte param_3,char param_4,short param_5,short *param_6)

{
  short sVar1;
  
  sVar1 = param_5;
  if ((*(int *)(param_1 + 4) != 0) && (sVar1 = -1, param_5 != -1)) {
    sVar1 = param_5 + 1;
  }
  if (((DAT_fffedca8 < param_3) || (param_4 != '\0')) || (0x27 < param_2)) {
    *param_6 = 0;
  }
  else if (param_3 == 0) {
    *param_6 = param_5;
  }
  else {
    *param_6 = sVar1;
  }
  DAT_fffedca8 = param_3;
  return;
}

