
void FUN_000e03e4(char param_1,undefined1 param_2,char param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = DAT_fffed1b9;
  uVar1 = DAT_fffed1b8;
  DAT_fffed1b9 = DAT_fffed1ba;
  DAT_fffed1b8 = uVar2;
  if ((param_3 == '\0') && (param_1 == '\x01')) {
    *param_4 = uVar1;
  }
  else {
    *param_4 = 0;
  }
  DAT_fffed1ba = param_2;
  return;
}

