
void FUN_000e0550(char param_1,undefined1 param_2,char param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  uVar1 = DAT_fffed1cc;
  DAT_fffed1cc = DAT_fffed1cd;
  if ((param_3 == '\0') && (param_1 == '\x04')) {
    *param_4 = uVar1;
  }
  else {
    *param_4 = 0;
  }
  DAT_fffed1cd = param_2;
  return;
}

