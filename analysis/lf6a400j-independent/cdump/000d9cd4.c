
void FUN_000d9cd4(char param_1,undefined4 param_2,char param_3,char param_4,uint param_5,
                 char param_6,char *param_7)

{
  char cVar1;
  
  if ((param_1 == '\0') && (DAT_fffecfc0 != '\0')) {
    param_3 = (char)((uint)param_2 >> 8);
  }
  if (((param_4 == '\0') || (DAT_fffecfc1 != '\0')) || (param_6 != '\0')) {
    *param_7 = param_3;
  }
  else {
    cVar1 = (char)((int)(param_5 & 0xff) >> 2) + -3;
    if (cVar1 < '\0') {
      cVar1 = '\0';
    }
    *param_7 = cVar1;
  }
  DAT_fffecfc1 = param_4;
  DAT_fffecfc0 = param_1;
  return;
}

