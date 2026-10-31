
uint FUN_0016be94(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  
  param_1 = param_1 & 0xff;
  param_3 = param_3 & 0xff;
  if ((param_2 & 0xff) != param_1) {
    iVar1 = (param_2 & 0xff) - param_1;
    iVar2 = (param_5 & 0xff) - param_1;
    if (param_3 < (param_4 & 0xff)) {
      iVar1 = __sdiv32_r1_by_r0(iVar2 * ((param_4 & 0xff) - param_3),iVar1);
      param_3 = iVar1 + param_3;
    }
    else {
      iVar1 = __sdiv32_r1_by_r0(iVar2 * (param_3 - (param_4 & 0xff)),iVar1);
      param_3 = param_3 - iVar1;
    }
  }
  return param_3;
}

