
void FUN_0009a660(char param_1,uint param_2,undefined1 *param_3)

{
  uint uVar1;
  
  if (param_1 == '\0') {
    uVar1 = LK_133BCC((uint)&T_02D7D0,param_2 & 0xffff);
    *param_3 = (char)uVar1;
  }
  else {
    uVar1 = LK_133BCC((uint)&T_02D7DC,param_2 & 0xffff);
    *param_3 = (char)uVar1;
  }
  return;
}

