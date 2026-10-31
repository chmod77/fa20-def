
void FUN_00119b90(ushort param_1,ushort param_2,short param_3,ushort *param_4)

{
  ushort uVar1;
  
  if (param_1 < 0xf0) {
    *param_4 = param_2;
  }
  else {
    uVar1 = param_2 + param_3;
    if (uVar1 < param_2) {
      uVar1 = 0xffff;
    }
    *param_4 = uVar1;
  }
  return;
}

