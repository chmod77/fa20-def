
void FUN_000ab784(char param_1,uint param_2,short param_3,short *param_4)

{
  uint uVar1;
  
  if (param_1 == '\0') {
    *param_4 = param_3;
  }
  else {
    uVar1 = LK_133BCC((uint)&T_02DF00,param_2);
    *param_4 = (ushort)(byte)uVar1 << 6;
  }
  return;
}

