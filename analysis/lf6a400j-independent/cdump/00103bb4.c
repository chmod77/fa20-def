
void FUN_00103bb4(char param_1,char param_2,byte param_3,undefined2 *param_4)

{
  uint uVar1;
  
  uVar1 = (uint)param_3;
  if (param_2 == '\0') {
    uVar1 = LK_133E10((uint)&T_02F9AC,uVar1);
    *param_4 = (short)uVar1;
  }
  else if (param_1 == '\0') {
    uVar1 = LK_133E10((uint)&T_02F9A0,uVar1);
    *param_4 = (short)uVar1;
  }
  else {
    uVar1 = LK_133E10((uint)&T_02F994,uVar1);
    *param_4 = (short)uVar1;
  }
  return;
}

