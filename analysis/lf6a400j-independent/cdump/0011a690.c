
void FUN_0011a690(ushort param_1,uint param_2,uint param_3,undefined2 *param_4)

{
  uint uVar1;
  
  if (param_1 < 0xf0) {
    uVar1 = LK_1364B8((uint)&T_02FD44,param_2 & 0xffff,param_3 & 0xffff);
    *param_4 = (short)uVar1;
  }
  else {
    uVar1 = LK_1364B8((uint)&T_02FD30,param_2 & 0xffff,param_3 & 0xffff);
    *param_4 = (short)uVar1;
  }
  return;
}

