
int FUN_0016b3a8(short param_1,short param_2,short param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_3;
  iVar1 = (int)param_1 + (int)param_2;
  if ((iVar1 <= iVar2) && (iVar2 = iVar1, iVar1 < -0x8000)) {
    iVar2 = -0x8000;
  }
  return iVar2;
}

