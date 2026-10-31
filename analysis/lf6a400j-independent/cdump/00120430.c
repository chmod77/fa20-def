
void FUN_00120430(char param_1,uint param_2,uint param_3,ushort param_4,undefined2 *param_5)

{
  uint uVar1;
  
  if ((param_1 == '\0') ||
     ((param_2 = param_2 & 0xffff, param_2 <= (param_3 & 0xffff) && (param_4 <= param_2)))) {
    *param_5 = 0xffff;
  }
  else {
    uVar1 = LK_133F40((uint)&T_02FEB8,param_2);
    *param_5 = (short)uVar1;
  }
  return;
}

