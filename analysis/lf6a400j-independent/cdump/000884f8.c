
void FUN_000884f8(short param_1,ushort param_2,char param_3,char param_4,char param_5,short *param_6
                 )

{
  short sVar1;
  
  sVar1 = param_1;
  if (((param_2 < 0x2801) && (param_4 != '\0')) && (sVar1 = -1, param_1 != -1)) {
    sVar1 = param_1 + 1;
  }
  if (param_5 != '\0') {
    *param_6 = 0;
    return;
  }
  if (param_3 == '\0') {
    *param_6 = sVar1;
    return;
  }
  *param_6 = param_1;
  return;
}

