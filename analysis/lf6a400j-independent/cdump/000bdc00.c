
void FUN_000bdc00(char param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if (param_1 != '\x03') {
    uVar1 = DAT_fffec8ec;
  }
  if (((param_1 == '\x01') || (param_1 == '\x04')) || (param_1 == '\a')) {
    uVar1 = 0;
  }
  *param_2 = uVar1;
  DAT_fffec8ec = uVar1;
  return;
}

