
int FUN_0005e33a(short *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 <= (short *)(param_2 + 2); param_1 = param_1 + 1) {
    iVar1 = iVar1 + *param_1;
  }
  return iVar1;
}

