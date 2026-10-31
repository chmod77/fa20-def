
uint FUN_00092eb4(uint param_1,char param_2,short *param_3)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  
  uVar1 = LK_134C84((uint)&T_02D324,param_1 & 0xffff);
  sVar2 = (short)uVar1;
  if (param_2 == '\0') {
    *param_3 = sVar2;
  }
  else {
    uVar1 = LK_134C84((uint)&T_02D330,param_1 & 0xffff);
    sVar3 = (short)uVar1;
    sVar4 = sVar3 + sVar2;
    if (((sVar3 < 0) || (sVar2 < 0)) || (-1 < sVar4)) {
      if (((sVar3 < 0) && (sVar2 < 0)) && (-1 < sVar4)) {
        sVar4 = -0x8000;
      }
    }
    else {
      sVar4 = 0x7fff;
    }
    *param_3 = sVar4;
  }
  return uVar1;
}

