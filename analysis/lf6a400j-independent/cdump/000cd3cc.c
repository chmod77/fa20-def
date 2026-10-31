
void FUN_000cd3cc(char param_1,char param_2,char param_3,char param_4,undefined1 *param_5)

{
  undefined1 uVar1;
  
  if ((param_2 != '\0') || (uVar1 = 0, param_4 != '\0')) {
    uVar1 = DAT_fffecc6c;
  }
  if (((param_2 != '\0') && (param_3 == '\x03')) || ((param_4 != '\0' && (param_1 != '\0')))) {
    uVar1 = 0;
  }
  *param_5 = uVar1;
  DAT_fffecc6c = uVar1;
  return;
}

