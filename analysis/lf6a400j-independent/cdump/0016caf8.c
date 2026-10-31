
void FUN_0016caf8(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  param_1[1] = -uVar1;
  *param_1 = ~uVar2;
  if (-uVar1 == 0) {
    *param_1 = ~uVar2 + 1;
    return;
  }
  return;
}

