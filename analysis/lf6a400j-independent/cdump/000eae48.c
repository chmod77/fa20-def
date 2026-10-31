
void FUN_000eae48(char param_1,undefined4 param_2,char param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if (param_1 != '\x02') {
    uVar1 = DAT_fffed4b8;
  }
  if (param_3 == '\0') {
    if (param_1 == '\x01') {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  *param_4 = uVar1;
  DAT_fffed4b8 = uVar1;
  return;
}

