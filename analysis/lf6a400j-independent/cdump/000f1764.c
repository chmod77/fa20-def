
void FUN_000f1764(int param_1,char param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = param_3;
  if (param_2 == '\x02') {
    iVar1 = param_3 + param_4;
    if (((param_3 < 0) || (param_4 < 0)) || (-1 < iVar1)) {
      if (((param_3 < 0) && (param_4 < 0)) && (-1 < iVar1)) {
        iVar1 = -0x80000000;
      }
    }
    else {
      iVar1 = 0x7fffffff;
    }
  }
  if ((param_2 == '\x01') || (param_2 != '\x02')) {
    *param_5 = param_1;
  }
  else {
    *param_5 = iVar1 >> 1;
  }
  return;
}

