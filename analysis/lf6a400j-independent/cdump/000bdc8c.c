
void FUN_000bdc8c(char param_1,short param_2,short param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if (param_1 != '\x02') {
    uVar1 = DAT_fffec8f8;
  }
  if (param_2 == param_3) {
    uVar1 = 0;
  }
  *param_4 = uVar1;
  DAT_fffec8f8 = uVar1;
  return;
}

