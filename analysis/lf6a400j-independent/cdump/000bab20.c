
void FUN_000bab20(uint param_1,undefined1 *param_2)

{
  uint uVar1;
  
  uVar1 = LK_133B38((uint)&T_02E500,param_1 & 0xff);
  *param_2 = (char)uVar1;
  uVar1 = LK_133B38((uint)&T_02E50C,param_1 & 0xff);
  param_2[1] = (char)uVar1;
  return;
}

