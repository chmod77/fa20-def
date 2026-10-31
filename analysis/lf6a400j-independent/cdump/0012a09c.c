
void FUN_0012a09c(ushort param_1,char param_2,ushort param_3,ushort param_4,ushort param_5,
                 ushort *param_6)

{
  ushort uVar1;
  
  if ((param_4 == param_5) || (uVar1 = param_5, param_5 < param_4)) {
    uVar1 = param_4;
  }
  if ((param_2 != '\0') && (param_3 <= param_1)) {
    if (param_3 < param_1) {
      *param_6 = param_5;
      return;
    }
    *param_6 = uVar1;
    return;
  }
  *param_6 = param_4;
  return;
}

