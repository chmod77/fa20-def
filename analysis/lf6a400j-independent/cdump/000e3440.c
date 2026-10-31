
void FUN_000e3440(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 < 0x40000) {
    if (-0x40000 < param_1) {
      *param_2 = param_1;
      return;
    }
    iVar1 = 0x40000;
  }
  else {
    iVar1 = -0x40000;
  }
  *param_2 = param_1 + iVar1;
  return;
}

