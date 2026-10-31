
void FUN_00080594(char param_1,char param_2,char param_3,char param_4,char param_5,uint param_6,
                 undefined1 *param_7)

{
  uint uVar1;
  
  if (((param_1 == '\0') && (param_2 == '\0')) && (param_3 == '\0')) {
    if (param_4 == '\0') {
      *param_7 = 0;
    }
    else if (param_5 == '\0') {
      *param_7 = 0;
    }
    else {
      uVar1 = LK_133B38((uint)&T_02C330,param_6 & 0xff);
      *param_7 = (char)uVar1;
    }
  }
  else {
    *param_7 = 0;
  }
  return;
}

