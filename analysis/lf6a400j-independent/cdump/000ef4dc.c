
void FUN_000ef4dc(char param_1,short param_2,short *param_3)

{
  short sVar1;
  
  sVar1 = param_2;
  if ((param_1 == '\x03') && (sVar1 = -1, param_2 != -1)) {
    sVar1 = param_2 + 1;
  }
  if (param_1 != '\x01') {
    *param_3 = sVar1;
    return;
  }
  *param_3 = param_2;
  return;
}

