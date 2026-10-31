
uint FUN_0016bf7c(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  param_1 = param_1 & 0xffff;
  param_3 = param_3 & 0xffff;
  if ((param_2 & 0xffff) != param_1) {
    iVar3 = (param_5 & 0xffff) - param_1;
    iVar2 = param_3 - (param_4 & 0xffff);
    iVar1 = (param_2 & 0xffff) - param_1;
    if (param_3 < (param_4 & 0xffff)) {
      iVar1 = __udiv32_r1_by_r0(iVar3 * -iVar2,iVar1);
      param_3 = iVar1 + param_3;
    }
    else {
      iVar1 = __udiv32_r1_by_r0(iVar2 * iVar3,iVar1);
      param_3 = param_3 - iVar1;
    }
  }
  return param_3;
}

