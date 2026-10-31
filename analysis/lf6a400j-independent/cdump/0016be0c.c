
int FUN_0016be0c(short *param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  param_2 = param_2 & 0xff;
  if (param_2 == 0) {
    iVar1 = (int)*param_1;
  }
  else if (param_2 == (param_4 & 0xff)) {
    iVar1 = (int)param_1[(param_4 & 0xff) - 1];
  }
  else {
    iVar1 = (int)param_1[param_2 - 1];
    iVar3 = param_1[param_2] - iVar1;
    if ((iVar3 != 0) && (param_3 = param_3 & 0xff, param_3 != 0)) {
      if (iVar1 < param_1[param_2]) {
        param_3 = iVar3 * param_3;
        if ((int)param_3 < 0) {
          param_3 = param_3 + 0xff;
        }
        uVar2 = (int)(char)(param_3 >> 0x18) << 0x10 | param_3 >> 8 & 0xffff;
      }
      else {
        param_3 = param_3 * -iVar3;
        if ((int)param_3 < 0) {
          param_3 = param_3 + 0xff;
        }
        uVar2 = -((int)(char)(param_3 >> 0x18) << 0x10 | param_3 >> 8 & 0xffff);
      }
      iVar1 = uVar2 + iVar1;
    }
  }
  return iVar1;
}

