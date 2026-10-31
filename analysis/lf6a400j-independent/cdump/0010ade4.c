
void FUN_0010ade4(char param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (param_1 == '\0') {
    iVar1 = FUN_0016caac();
    if (iVar1 == 0) {
      *param_3 = param_2 + 1;
    }
    else {
      *param_3 = -1;
    }
  }
  else {
    *param_3 = 0;
  }
  return;
}

