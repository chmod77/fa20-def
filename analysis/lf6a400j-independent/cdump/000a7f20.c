
void FUN_000a7f20(uint param_1,char param_2,undefined2 *param_3)

{
  uint uVar1;
  
  if (param_2 == '\0') {
    *param_3 = 0;
  }
  else {
    uVar1 = LK_133B38((uint)&T_02DCD4,param_1);
    *param_3 = (short)((uVar1 & 0xff) << 8);
  }
  return;
}

