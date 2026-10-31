
void FUN_000ef534(char param_1,int param_2,short param_3,int *param_4)

{
  int in_r2;
  int iVar1;
  
  iVar1 = (int)param_3;
  if (param_1 == '\x03') {
    in_r2 = param_2 + iVar1;
    if (((param_2 < 0) || (iVar1 < 0)) || (-1 < in_r2)) {
      if (((param_2 < 0) && (iVar1 < 0)) && (-1 < in_r2)) {
        in_r2 = -0x80000000;
      }
    }
    else {
      in_r2 = 0x7fffffff;
    }
  }
  if (((param_1 != '\x01') && (param_1 != '\x02')) && (param_1 == '\x03')) {
    *param_4 = in_r2;
    return;
  }
  *param_4 = param_2;
  return;
}

