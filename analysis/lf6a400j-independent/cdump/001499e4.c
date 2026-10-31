
void FUN_001499e4(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uint)uVar2 < (uint)uVar1) {
    if ((int)(uint)param_2 < (int)((uint)uVar1 - (uint)uVar2)) {
      param_1[1] = uVar2 + param_2;
      return;
    }
  }
  else if ((int)(uint)param_2 < (int)((uint)uVar2 - (uint)uVar1)) {
    param_1[1] = uVar2 - param_2;
    return;
  }
  param_1[1] = uVar1;
  return;
}

