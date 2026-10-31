
void FUN_000eab8c(char param_1,undefined4 param_2,char param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if (param_1 != '\x04') {
    uVar1 = DAT_fffed488;
  }
  if ((param_1 != '\x01') && ((param_1 == '\x02' || (DAT_fffed488 = uVar1, param_1 == '\x03')))) {
    DAT_fffed488 = 0;
  }
  if (param_3 != '\0') {
    DAT_fffed488 = 0;
  }
  *param_4 = DAT_fffed488;
  return;
}

