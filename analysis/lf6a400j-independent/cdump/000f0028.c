
void FUN_000f0028(char param_1,char param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if (param_1 != '\x04') {
    uVar1 = DAT_fffed5e0;
  }
  if (((param_2 != '\0') || (param_1 == '\x01')) || (param_1 == '\x02')) {
    uVar1 = 0;
  }
  *param_3 = uVar1;
  DAT_fffed5e0 = uVar1;
  return;
}

