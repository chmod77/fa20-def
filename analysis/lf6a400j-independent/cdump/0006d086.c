
int FUN_0006d086(uint param_1)

{
  int iVar1;
  
  if ((param_1 & 0x20) == 0) {
    param_1 = param_1 & 0xfffffffd | 0x20;
  }
  else {
    if ((param_1 & 2) != 0) {
      param_1 = param_1 & 0xdd;
      iVar1 = 1;
      goto LAB_0006d0a8;
    }
    param_1 = param_1 | 2;
  }
  iVar1 = 0;
LAB_0006d0a8:
  return iVar1 * 0x100 + (param_1 & 0xff);
}

