
uint FUN_000db4c8(char param_1,uint param_2,uint param_3,char param_4,undefined1 *param_5)

{
  uint uVar1;
  
  param_2 = param_2 & 0xffff;
  if (param_1 == '\0') {
    if (param_4 == '\0') {
      uVar1 = LK_13869C((uint)&T_02EEF4,param_2,param_3 & 0xff);
      *param_5 = (char)uVar1;
    }
    else {
      uVar1 = LK_13869C((uint)&T_02EF08,param_2,param_3 & 0xff);
      *param_5 = (char)uVar1;
    }
  }
  else if (param_4 == '\0') {
    uVar1 = LK_13503C((uint)&T_02EEDC,param_2);
    *param_5 = (char)uVar1;
  }
  else {
    uVar1 = LK_13503C((uint)&T_02EEE8,param_2);
    *param_5 = (char)uVar1;
  }
  return uVar1;
}

