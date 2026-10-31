
uint FUN_000b5a24(char param_1,byte param_2,char param_3,uint param_4,undefined2 *param_5)

{
  uint uVar1;
  
  if (((param_1 != '\0') && (0x14 < param_2)) && (param_3 == '\0')) {
    *param_5 = 0x3333;
    return 0x14;
  }
  uVar1 = LK_133F40((uint)&T_02E30C,param_4);
  *param_5 = (short)uVar1;
  return uVar1;
}

