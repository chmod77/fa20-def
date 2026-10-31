
void FUN_000c9d14(char param_1,char param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = 4;
  if (param_1 == '\0') {
    uVar1 = DAT_fffecb84;
    if (param_2 != '\0') {
      uVar1 = 0;
      goto LAB_000c9d34;
    }
  }
  if (param_2 == '\0') {
    uVar1 = 1;
  }
LAB_000c9d34:
  *param_3 = uVar1;
  DAT_fffecb84 = uVar1;
  return;
}

