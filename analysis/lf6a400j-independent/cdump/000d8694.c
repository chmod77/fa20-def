
void FUN_000d8694(char param_1,uint param_2,undefined2 param_3,undefined2 *param_4)

{
  uint uVar1;
  
  if ((DAT_fffecf68 == '\0') && (param_1 != '\0')) {
    uVar1 = LK_133F40((uint)&T_02EE0C,param_2);
    *param_4 = (short)uVar1;
  }
  else {
    *param_4 = param_3;
  }
  DAT_fffecf68 = 1;
  return;
}

