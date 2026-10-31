
uint FUN_001243dc(uint param_1,uint param_2,char param_3,byte param_4,undefined2 *param_5)

{
  uint uVar1;
  
  if ((param_3 == '\0') && (param_4 < 4)) {
    uVar1 = LK_1390DC((uint)&T_030254,param_1 & 0xffff,param_2 & 0xffff);
    *param_5 = (short)uVar1;
  }
  else {
    uVar1 = LK_1390DC((uint)&T_030240,param_1 & 0xffff,param_2 & 0xffff);
    *param_5 = (short)uVar1;
  }
  return uVar1;
}

