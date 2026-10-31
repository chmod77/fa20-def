
void FUN_000953e0(char param_1,char param_2,char param_3,uint param_4,uint param_5,char param_6,
                 char param_7,char param_8,char param_9,undefined1 *param_10)

{
  uint uVar1;
  
  if ((((param_1 == '\0') && (param_2 == '\0')) && (param_3 == '\0')) &&
     (((param_7 == '\0' && (param_8 == '\0')) && ((param_9 == '\0' && (param_6 != '\0')))))) {
    uVar1 = LK_135A74((uint)&T_02D414,param_4,param_5 & 0xffff);
    *param_10 = (char)uVar1;
  }
  else {
    *param_10 = 0xd;
  }
  return;
}

