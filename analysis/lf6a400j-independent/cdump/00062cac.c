
bool FUN_00062cac(ushort param_1,ushort param_2,ushort param_3)

{
  ushort uVar1;
  
  uVar1 = -(param_1 - param_2);
  if (param_2 < param_1) {
    uVar1 = param_1 - param_2;
  }
  return param_3 < uVar1;
}

