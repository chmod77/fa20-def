
void FUN_00096938(char param_1,char param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_2 == '\0') {
    uVar1 = DAT_fffebf48;
  }
  if (param_1 != '\0') {
    uVar1 = 1;
  }
  *param_3 = uVar1;
  DAT_fffebf48 = uVar1;
  return;
}

