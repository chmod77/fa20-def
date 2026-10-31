
void FUN_000b2048(uint param_1,char param_2,int param_3,undefined2 *param_4)

{
  uint uVar1;
  
  if (param_2 == '\0') {
    *param_4 = 0;
  }
  else {
    uVar1 = LK_1361C8((uint)&T_02E110,param_1,(int)*(short *)(param_3 + 2));
    *param_4 = (short)uVar1;
  }
  return;
}

