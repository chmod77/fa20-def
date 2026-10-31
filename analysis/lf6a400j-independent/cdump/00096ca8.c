
void FUN_00096ca8(char param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if ((param_1 == '\x04') && (DAT_fffebf5c != '\x04')) {
    uVar1 = 1;
  }
  *param_2 = uVar1;
  DAT_fffebf5c = param_1;
  return;
}

