
void FUN_000efe28(char param_1,char param_2,char param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_2 == '\0') {
    uVar1 = DAT_fffed5cc;
  }
  if (param_3 == '\0') {
    if (param_1 != '\0') {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  *param_4 = uVar1;
  DAT_fffed5cc = uVar1;
  return;
}

