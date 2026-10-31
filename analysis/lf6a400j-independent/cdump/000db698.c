
uint FUN_000db698(char param_1,uint param_2,uint param_3,char param_4,undefined1 *param_5)

{
  uint uVar1;
  
  param_2 = param_2 & 0xffff;
  if (param_1 == '\0') {
    if (param_4 == '\0') {
      uVar1 = LK_13869C((uint)&T_02EFF4,param_2,param_3 & 0xff);
      *param_5 = (char)uVar1;
    }
    else {
      uVar1 = LK_13869C((uint)&T_02F008,param_2,param_3 & 0xff);
      *param_5 = (char)uVar1;
    }
  }
  else if (param_4 == '\0') {
    uVar1 = LK_13503C((uint)&T_02EFDC,param_2);
    *param_5 = (char)uVar1;
  }
  else {
    uVar1 = LK_13503C((uint)&T_02EFE8,param_2);
    *param_5 = (char)uVar1;
  }
  return uVar1;
}

