
void FUN_000cb99c(uint param_1,short *param_2)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0xffff) >> 3;
  if (1999 < uVar1) {
    *param_2 = (short)uVar1 + -2000;
    return;
  }
  *param_2 = 0;
  return;
}

