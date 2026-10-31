
void FUN_000972c0(char param_1,uint param_2,undefined1 *param_3)

{
  uint uVar1;
  
  if ((param_1 == '\x01') || (param_1 == '\x02')) {
    uVar1 = LK_134FA8((uint)&T_02D4D4,param_2 & 0xff);
    *param_3 = (char)uVar1;
  }
  else {
    uVar1 = LK_134FA8((uint)&T_02D4E0,param_2 & 0xff);
    *param_3 = (char)uVar1;
  }
  return;
}

