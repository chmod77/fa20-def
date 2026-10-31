
void FUN_000f6730(char param_1,char param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if (param_1 != '\x02') {
    uVar1 = DAT_fffed7bc;
  }
  if (param_2 != '\0') {
    uVar1 = 0;
  }
  *param_3 = uVar1;
  DAT_fffed7bc = uVar1;
  return;
}

