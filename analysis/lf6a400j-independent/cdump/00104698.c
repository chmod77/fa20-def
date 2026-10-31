
void FUN_00104698(char param_1,char param_2,byte param_3,undefined2 *param_4)

{
  uint uVar1;
  
  uVar1 = (uint)param_3;
  if (param_2 == '\0') {
    uVar1 = LK_133E10((uint)&T_02FAD8,uVar1);
    *param_4 = (short)uVar1;
  }
  else if (param_1 == '\0') {
    uVar1 = LK_133E10((uint)&T_02FACC,uVar1);
    *param_4 = (short)uVar1;
  }
  else {
    uVar1 = LK_133E10((uint)&T_02FAC0,uVar1);
    *param_4 = (short)uVar1;
  }
  return;
}

