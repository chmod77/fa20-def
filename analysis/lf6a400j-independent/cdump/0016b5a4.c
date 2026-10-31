
int FUN_0016b5a4(short param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  return iVar1;
}

