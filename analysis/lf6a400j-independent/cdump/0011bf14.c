
uint FUN_0011bf14(short param_1,short *param_2)

{
  uint uVar1;
  short sVar2;
  uint p1;
  
  p1 = (uint)param_1;
  uVar1 = LK_134E2C((uint)&T_02FD58,p1);
  sVar2 = (short)uVar1;
  param_1 = param_1 + sVar2;
  if ((((int)p1 < 0) || (sVar2 < 0)) || (-1 < param_1)) {
    if ((((int)p1 < 0) && (sVar2 < 0)) && (-1 < param_1)) {
      param_1 = -0x8000;
    }
  }
  else {
    param_1 = 0x7fff;
  }
  *param_2 = param_1;
  return uVar1;
}

