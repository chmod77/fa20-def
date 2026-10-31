
void FUN_00123ee8(ushort param_1,undefined4 param_2,ushort *param_3)

{
  ushort uVar1;
  
  uVar1 = param_1 + 2;
  if (uVar1 < param_1) {
    uVar1 = 0xffff;
  }
  *param_3 = uVar1;
  return;
}

