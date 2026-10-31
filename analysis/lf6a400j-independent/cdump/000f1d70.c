
void FUN_000f1d70(short param_1,char param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if (param_1 == 0) {
    uVar1 = DAT_fffed698;
  }
  if (param_2 != '\0') {
    uVar1 = 0;
  }
  *param_3 = uVar1;
  DAT_fffed698 = uVar1;
  return;
}

