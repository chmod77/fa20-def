
void FUN_00103c74(char param_1,char param_2,uint param_3,undefined1 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  
  param_3 = param_3 & 0xff;
  uVar1 = LK_133B38((uint)&T_02F9DC,param_3);
  uVar2 = LK_133B38((uint)&T_02F9E8,param_3);
  uVar3 = LK_133B38((uint)&T_02F9F4,param_3);
  uVar4 = 1;
  if (((((uVar3 & 0xff) != 1) || (param_2 != '\0')) &&
      (((uVar2 & 0xff) != 1 || ((param_2 == '\0' || (param_1 != '\0')))))) &&
     (((uVar1 & 0xff) != 1 || ((param_2 == '\0' || (param_1 == '\0')))))) {
    uVar4 = 0;
  }
  *param_4 = uVar4;
  return;
}

