
void FUN_000b3758(short param_1,undefined1 *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  if ((int)uVar1 < 0) {
    uVar1 = -uVar1;
  }
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  uVar1 = LK_133BCC((uint)&T_02E21C,uVar1);
  *param_2 = (char)uVar1;
  return;
}

