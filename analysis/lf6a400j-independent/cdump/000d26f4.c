
void FUN_000d26f4(uint param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  
  uVar1 = *param_2 + (param_1 & 0xffff);
  if (uVar1 < (param_1 & 0xffff)) {
    uVar1 = 0xffffffff;
  }
  if (3199999 < uVar1) {
    if (uVar1 < 3200000) {
      *param_3 = 0;
    }
    else {
      *param_3 = uVar1 - 3200000;
    }
    param_3[1] = 3200000;
    return;
  }
  *param_3 = uVar1;
  param_3[1] = 0;
  return;
}

