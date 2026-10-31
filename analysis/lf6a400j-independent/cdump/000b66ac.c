
void FUN_000b66ac(int param_1,char param_2,undefined1 param_3,undefined1 *param_4)

{
  if ((((param_2 != '\0') && (DAT_fffec778 = 0, 5 < *(byte *)(param_1 + 1))) &&
      (2 < *(byte *)(param_1 + 2))) && (4 < *(byte *)(param_1 + 10))) {
    DAT_fffec778 = 1;
  }
  if (param_2 == '\0') {
    *param_4 = param_3;
  }
  else {
    *param_4 = DAT_fffec778;
  }
  return;
}

