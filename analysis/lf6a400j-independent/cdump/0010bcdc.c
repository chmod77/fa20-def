
void FUN_0010bcdc(uint param_1,byte param_2,byte param_3,char param_4,uint *param_5,uint *param_6)

{
  uint uVar1;
  uint local_18;
  
  uVar1 = *param_5 + (param_1 & 0xffff);
  if (uVar1 < (param_1 & 0xffff)) {
    uVar1 = 0xffffffff;
  }
  local_18 = uVar1;
  if (799999 < uVar1) {
    if (uVar1 < 800000) {
      local_18 = 0;
    }
    else {
      local_18 = uVar1 - 800000;
    }
  }
  if (param_2 == 0) {
    local_18 = *param_5;
  }
  if (((DAT_fffedcac < param_2) || (param_4 != '\0')) || (0x27 < param_3)) {
    *param_6 = 0;
  }
  else {
    *param_6 = local_18;
    if (param_2 == 0) {
      param_6[1] = param_5[1];
      DAT_fffedcac = param_2;
      return;
    }
    if (799999 < uVar1) {
      param_6[1] = 800000;
      DAT_fffedcac = param_2;
      return;
    }
  }
  param_6[1] = 0;
  DAT_fffedcac = param_2;
  return;
}

