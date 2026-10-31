
void FUN_001231e4(undefined4 param_1,ushort param_2,ushort *param_3)

{
  ushort uVar1;
  
  uVar1 = param_2 + 1;
  if (uVar1 < param_2) {
    uVar1 = 0xffff;
  }
  *param_3 = uVar1;
  return;
}

