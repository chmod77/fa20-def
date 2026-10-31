
void FUN_000f670c(char param_1,char param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if (param_1 != '\x02') {
    uVar1 = DAT_fffed7b8;
  }
  if (param_2 != '\0') {
    uVar1 = 0;
  }
  *param_3 = uVar1;
  DAT_fffed7b8 = uVar1;
  return;
}

