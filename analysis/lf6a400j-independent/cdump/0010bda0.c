
void FUN_0010bda0(uint param_1,char param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  uint local_8;
  
  uVar1 = *param_3 + (param_1 & 0xffff);
  if (uVar1 < (param_1 & 0xffff)) {
    uVar1 = 0xffffffff;
  }
  local_8 = uVar1;
  if (799999 < uVar1) {
    if (uVar1 < 800000) {
      local_8 = 0;
    }
    else {
      local_8 = uVar1 - 800000;
    }
  }
  if (param_2 == '\0') {
    *param_4 = local_8;
    if (799999 < uVar1) {
      param_4[1] = 800000;
      return;
    }
  }
  else {
    *param_4 = 0;
  }
  param_4[1] = 0;
  return;
}

