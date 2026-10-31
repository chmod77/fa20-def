
void FUN_000f1dc4(short param_1,char param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if (param_1 == 0) {
    uVar1 = DAT_fffed6a0;
  }
  if (param_2 != '\0') {
    uVar1 = 0;
  }
  *param_3 = uVar1;
  DAT_fffed6a0 = uVar1;
  return;
}

