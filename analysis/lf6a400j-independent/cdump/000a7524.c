
void FUN_000a7524(char param_1,uint param_2,char param_3,undefined2 *param_4)

{
  uint uVar1;
  
  if (param_1 != '\0') {
    if (param_3 == 'Z') {
      uVar1 = LK_133E10((uint)&T_02DC78,param_2);
      *param_4 = (short)uVar1;
      return;
    }
    if (param_3 == -0x5b) {
      *param_4 = 0xcd;
      return;
    }
  }
  *param_4 = 0;
  return;
}

