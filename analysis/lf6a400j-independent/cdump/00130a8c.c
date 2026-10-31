
void FUN_00130a8c(ushort param_1,ushort param_2,ushort param_3,ushort param_4,ushort *param_5)

{
  ushort uVar1;
  
  uVar1 = param_3;
  if ((param_4 != param_3) && (param_3 < param_4)) {
    uVar1 = param_4;
  }
  if (param_1 < param_2) {
    *param_5 = param_3;
  }
  else if (param_2 < param_1) {
    *param_5 = param_4;
  }
  else {
    *param_5 = uVar1;
  }
  return;
}

