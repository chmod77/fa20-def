
uint FUN_001067b4(char param_1,char param_2,char param_3,byte param_4,undefined2 *param_5)

{
  uint uVar1;
  
  uVar1 = (uint)param_4;
  if (((param_1 == '\0') || (param_2 == '\0')) || (param_3 == '\0')) {
    if ((param_2 == '\0') || (param_1 == '\0')) {
      if (param_1 == '\0') {
        uVar1 = LK_133E10((uint)&T_02FC20,uVar1);
        *param_5 = (short)uVar1;
      }
      else {
        uVar1 = LK_133E10((uint)&T_02FC38,uVar1);
        *param_5 = (short)uVar1;
      }
    }
    else {
      uVar1 = LK_133E10((uint)&T_02FC2C,uVar1);
      *param_5 = (short)uVar1;
    }
  }
  else {
    uVar1 = LK_133E10((uint)&T_02FC44,uVar1);
    *param_5 = (short)uVar1;
  }
  return uVar1;
}

