
void FUN_000f649c(char param_1,char param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_1 != '\x03') {
    uVar1 = DAT_fffed790;
  }
  if (param_2 == '\0') {
    if (param_1 == '\x02') {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  *param_3 = uVar1;
  DAT_fffed790 = uVar1;
  return;
}

