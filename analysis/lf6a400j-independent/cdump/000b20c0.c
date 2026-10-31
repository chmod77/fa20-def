
void FUN_000b20c0(char param_1,char param_2,uint param_3,byte param_4,uint param_5,
                 undefined1 *param_6)

{
  uint uVar1;
  
  param_3 = param_3 & 0xffff;
  if ((param_1 != '\0') || (param_2 != '\0')) {
    if ((param_1 != '\0') || (param_2 == '\0')) {
      if ((param_2 != '\0') || (param_1 == '\0')) {
        uVar1 = LK_135904((uint)&T_02E16C,param_3,param_5 & 0xff);
        *param_6 = (char)uVar1;
      }
      else {
        uVar1 = LK_135904((uint)&T_02E158,param_3,param_5 & 0xff);
        *param_6 = (char)uVar1;
      }
    }
    else {
      uVar1 = LK_135904((uint)&T_02E144,param_3,(uint)param_4);
      *param_6 = (char)uVar1;
    }
  }
  else {
    uVar1 = LK_135904((uint)&T_02E130,param_3,(uint)param_4);
    *param_6 = (char)uVar1;
  }
  return;
}

