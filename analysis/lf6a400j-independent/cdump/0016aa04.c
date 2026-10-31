
uint FUN_0016aa04(short param_1,short param_2,uint param_3,uint param_4,short param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)param_2 - (int)param_1;
  if (iVar2 != 0) {
    param_3 = param_3 & 0xffff;
    iVar1 = param_3 - (param_4 & 0xffff);
    iVar3 = (int)param_5 - (int)param_1;
    if ((param_4 & 0xffff) < param_3) {
      iVar2 = __udiv32_r1_by_r0(iVar3 * iVar1,iVar2);
      iVar2 = -iVar2;
    }
    else {
      iVar2 = __udiv32_r1_by_r0(iVar3 * -iVar1,iVar2);
    }
    param_3 = param_3 + iVar2;
  }
  return param_3;
}

