
int FUN_0016b5bc(short param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (iVar1 < -0x80) {
    iVar1 = -0x80;
  }
  else if (0x7f < iVar1) {
    iVar1 = 0x7f;
  }
  return iVar1;
}

