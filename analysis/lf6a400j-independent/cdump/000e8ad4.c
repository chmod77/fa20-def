
void FUN_000e8ad4(byte param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_1 != 1) {
    uVar1 = DAT_fffed3e9;
  }
  if (param_1 < DAT_fffed3e8) {
    uVar1 = 1;
  }
  *param_2 = uVar1;
  DAT_fffed3e9 = uVar1;
  DAT_fffed3e8 = param_1;
  return;
}

