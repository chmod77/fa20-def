
void FUN_00119e00(char param_1,undefined2 param_2,uint param_3,uint param_4,undefined2 *param_5)

{
  uint uVar1;
  undefined2 uVar2;
  
  if (param_1 == '\0') {
    *param_5 = param_2;
  }
  else {
    uVar1 = LK_136050((uint)&T_02FD08,param_3 & 0xffff,param_4);
    uVar2 = (undefined2)(param_3 + uVar1);
    if ((param_3 + uVar1 & 0xffff) < (param_3 & 0xffff)) {
      uVar2 = 0xffff;
    }
    *param_5 = uVar2;
  }
  return;
}

