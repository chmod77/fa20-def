
void FUN_000e02e8(char param_1,char param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  if (param_2 == '\0') {
    uVar1 = 1;
    if ((((param_1 == '\0') && (DAT_fffed1ab == '\0')) && (DAT_fffed1aa == '\0')) &&
       ((DAT_fffed1a9 == '\0' && (DAT_fffed1a8 == '\0')))) {
      uVar1 = 0;
    }
    *param_3 = uVar1;
  }
  else {
    *param_3 = 0;
  }
  DAT_fffed1a8 = DAT_fffed1a9;
  DAT_fffed1a9 = DAT_fffed1aa;
  DAT_fffed1aa = DAT_fffed1ab;
  DAT_fffed1ab = param_1;
  return;
}

