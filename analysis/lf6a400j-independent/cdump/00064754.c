
void FUN_00064754(ushort param_1,ushort *param_2,ushort param_3)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  if (*param_2 < uVar1) {
    if ((int)(uint)param_3 < (int)(uVar1 - *param_2)) {
      *param_2 = *param_2 + param_3;
      return;
    }
  }
  else if ((int)(uint)param_3 < (int)(*param_2 - uVar1)) {
    *param_2 = *param_2 - param_3;
    return;
  }
  *param_2 = param_1;
  return;
}

