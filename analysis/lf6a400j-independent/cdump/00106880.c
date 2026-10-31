
void FUN_00106880(char param_1,char param_2,byte param_3,undefined2 *param_4)

{
  uint uVar1;
  
  uVar1 = (uint)param_3;
  if ((param_1 == '\0') || (param_2 == '\0')) {
    if (param_1 == '\0') {
      uVar1 = LK_133E10((uint)&T_02FC74,uVar1);
      *param_4 = (short)uVar1;
    }
    else {
      uVar1 = LK_133E10((uint)&T_02FC8C,uVar1);
      *param_4 = (short)uVar1;
    }
  }
  else {
    uVar1 = LK_133E10((uint)&T_02FC80,uVar1);
    *param_4 = (short)uVar1;
  }
  return;
}

