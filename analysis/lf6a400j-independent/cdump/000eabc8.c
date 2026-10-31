
void FUN_000eabc8(char param_1,undefined4 param_2,char param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if (param_1 != '\x04') {
    uVar1 = DAT_fffed48c;
  }
  if ((param_1 != '\x01') && ((param_1 == '\x02' || (DAT_fffed48c = uVar1, param_1 == '\x03')))) {
    DAT_fffed48c = 0;
  }
  if (param_3 != '\0') {
    DAT_fffed48c = 0;
  }
  *param_4 = DAT_fffed48c;
  return;
}

