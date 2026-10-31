
uint FUN_000fff04(undefined4 param_1,uint param_2,uint param_3,char param_4,undefined2 *param_5)

{
  uint uVar1;
  
  if (param_4 == '\x01') {
    *param_5 = 0;
    uVar1 = 1;
  }
  else {
    uVar1 = LK_136050((uint)&T_02F894,param_2,param_3);
    *param_5 = (short)uVar1;
  }
  return uVar1;
}

