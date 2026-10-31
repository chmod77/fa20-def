
void FUN_000eade0(char param_1,undefined4 param_2,char param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if (param_1 != '\x04') {
    uVar1 = DAT_fffed4b0;
  }
  if (((param_1 != '\x01') && (DAT_fffed4b0 = 0, param_1 != '\x02')) &&
     (DAT_fffed4b0 = uVar1, param_1 == '\x03')) {
    DAT_fffed4b0 = 1;
  }
  if (param_3 != '\0') {
    DAT_fffed4b0 = 0;
  }
  *param_4 = DAT_fffed4b0;
  return;
}

