
void FUN_000d33f0(char param_1,char param_2,short param_3,char param_4,short *param_5)

{
  short sVar1;
  
  sVar1 = param_3;
  if ((param_4 != '\0') && (sVar1 = -1, param_3 != -1)) {
    sVar1 = param_3 + 1;
  }
  if (((param_1 == '\0') || (param_2 == '\0')) || (DAT_fffecdd8 != '\0')) {
    *param_5 = sVar1;
  }
  else {
    *param_5 = 0;
  }
  DAT_fffecdd8 = param_2;
  return;
}

