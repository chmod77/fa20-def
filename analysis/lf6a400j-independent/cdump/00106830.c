
void FUN_00106830(char param_1,char param_2,byte param_3,undefined2 *param_4)

{
  uint uVar1;
  
  uVar1 = (uint)param_3;
  if ((param_1 == '\0') || (param_2 == '\0')) {
    if (param_1 == '\0') {
      uVar1 = LK_133E10((uint)&T_02FC50,uVar1);
      *param_4 = (short)uVar1;
    }
    else {
      uVar1 = LK_133E10((uint)&T_02FC68,uVar1);
      *param_4 = (short)uVar1;
    }
  }
  else {
    uVar1 = LK_133E10((uint)&T_02FC5C,uVar1);
    *param_4 = (short)uVar1;
  }
  return;
}

