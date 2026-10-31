
void FUN_000b8750(uint param_1,undefined1 *param_2)

{
  uint uVar1;
  
  uVar1 = LK_133B38((uint)&T_02E478,param_1 & 0xff);
  *param_2 = (char)uVar1;
  uVar1 = LK_133B38((uint)&T_02E484,param_1 & 0xff);
  param_2[1] = (char)uVar1;
  return;
}

