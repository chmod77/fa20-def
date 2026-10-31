
void FUN_000b5e34(uint param_1,uint param_2,char param_3,undefined2 *param_4)

{
  uint uVar1;
  
  if (param_3 == '\0') {
    uVar1 = LK_138C74((uint)&T_02E3A4,param_1 & 0xffff,param_2 & 0xff);
    *param_4 = (short)uVar1;
  }
  else {
    uVar1 = LK_138C74((uint)&T_02E390,param_1 & 0xffff,param_2 & 0xff);
    *param_4 = (short)uVar1;
  }
  return;
}

