
void FUN_0009e660(char param_1,char param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  if (param_1 == '\t') {
    uVar1 = 1;
    if (DAT_fffec08c == '\b') goto LAB_0009e678;
  }
  uVar1 = DAT_fffec08d;
LAB_0009e678:
  if (param_2 != '\0') {
    uVar1 = 0;
  }
  *param_3 = uVar1;
  DAT_fffec08d = uVar1;
  DAT_fffec08c = param_1;
  return;
}

