
void FUN_000defb0(uint param_1,char param_2,undefined1 *param_3)

{
  uint uVar1;
  
  if (param_2 == '\0') {
    uVar1 = LK_133BCC((uint)&T_02F068,param_1 & 0xffff);
    *param_3 = (char)uVar1;
  }
  else {
    uVar1 = LK_133BCC((uint)&T_02F074,param_1 & 0xffff);
    *param_3 = (char)uVar1;
  }
  return;
}

