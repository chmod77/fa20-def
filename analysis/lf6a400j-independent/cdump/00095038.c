
void FUN_00095038(char param_1,char param_2,uint param_3,undefined1 *param_4)

{
  uint uVar1;
  
  if (param_1 == '\0') {
    *param_4 = 8;
  }
  else if (param_2 == '\0') {
    uVar1 = LK_133BCC((uint)&T_02D3B4,param_3 & 0xffff);
    *param_4 = (char)uVar1;
  }
  else {
    uVar1 = LK_133BCC((uint)&T_02D3A8,param_3 & 0xffff);
    *param_4 = (char)uVar1;
  }
  return;
}

