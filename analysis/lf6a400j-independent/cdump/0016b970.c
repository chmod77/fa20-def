
int FUN_0016b970(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = param_1 - param_2;
  if (((param_1 ^ param_2) & 0x80000000) != 0) {
    if (((int)param_1 < 0) && (-1 < iVar1)) {
      iVar1 = -0x80000000;
    }
    else if ((-1 < (int)param_1) && (iVar1 < 0)) {
      iVar1 = 0x7fffffff;
    }
  }
  return iVar1;
}

