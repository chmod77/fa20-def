
void FUN_000e0594(char param_1,undefined1 param_2,char param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = DAT_fffed1d1;
  uVar1 = DAT_fffed1d0;
  DAT_fffed1d1 = DAT_fffed1d2;
  DAT_fffed1d0 = uVar2;
  if ((param_3 == '\0') && (param_1 == '\x04')) {
    *param_4 = uVar1;
  }
  else {
    *param_4 = 0;
  }
  DAT_fffed1d2 = param_2;
  return;
}

