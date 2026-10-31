
void FUN_0010bd74(int param_1,char param_2,short param_3,short *param_4)

{
  short sVar1;
  
  sVar1 = param_3;
  if ((*(int *)(param_1 + 4) != 0) && (sVar1 = -1, param_3 != -1)) {
    sVar1 = param_3 + 1;
  }
  if (param_2 == '\0') {
    *param_4 = sVar1;
    return;
  }
  *param_4 = 0;
  return;
}

