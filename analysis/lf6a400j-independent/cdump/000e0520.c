
void FUN_000e0520(char param_1,undefined1 param_2,char param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = DAT_fffed1c9;
  uVar1 = DAT_fffed1c8;
  DAT_fffed1c9 = DAT_fffed1ca;
  DAT_fffed1c8 = uVar2;
  if ((param_3 == '\0') && (param_1 == '\x03')) {
    *param_4 = uVar1;
  }
  else {
    *param_4 = 0;
  }
  DAT_fffed1ca = param_2;
  return;
}

