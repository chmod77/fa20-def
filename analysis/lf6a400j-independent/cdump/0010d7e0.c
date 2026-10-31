
void FUN_0010d7e0(byte param_1,byte param_2,uint param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_0016caac();
    iVar2 = param_4 + 1;
    if (iVar1 != 0) {
      iVar2 = -1;
    }
    iVar1 = FUN_0016cacc();
    param_4 = -1;
    if (iVar1 != 0) {
      param_4 = iVar2;
    }
  }
  if (((DAT_fffedcd8 < param_1) || ((param_3 & 0xff) != 0)) || (0x27 < param_2)) {
    *param_5 = 0;
  }
  else {
    *param_5 = param_4;
  }
  DAT_fffedcd8 = param_1;
  return;
}

