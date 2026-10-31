
void FUN_000e94c4(char param_1,char param_2,char param_3,char param_4,undefined1 *param_5)

{
  undefined1 uVar1;
  
  if ((param_3 != '\0') || (param_4 != '\0')) {
    DAT_fffed420 = '\0';
  }
  if (param_2 != '\0') {
    DAT_fffed420 = '\x01';
  }
  uVar1 = 0;
  if ((param_1 != '\0') && (DAT_fffed420 != '\0')) {
    uVar1 = 1;
  }
  *param_5 = uVar1;
  return;
}

