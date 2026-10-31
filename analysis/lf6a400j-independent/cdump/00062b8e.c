
uint FUN_00062b8e(int param_1,uint param_2)

{
  uint uVar1;
  
  param_2 = param_2 & 0xffff;
  if (param_1 < 1) {
    if ((param_1 == 0) || (param_2 == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = -(param_2 * -param_1);
      if (0x7fffffff < param_2 * -param_1) {
        uVar1 = 0x80000000;
      }
    }
  }
  else {
    uVar1 = param_2 * param_1;
    if (0x7fffffff < uVar1) {
      uVar1 = 0x7fffffff;
    }
  }
  return uVar1;
}

