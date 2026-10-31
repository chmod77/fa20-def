
void FUN_000bfd10(byte param_1,char param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if ((((param_2 != '\0') && (param_1 < 5)) && (4 < DAT_fffec950)) && (1 < param_1)) {
    uVar1 = 1;
  }
  *param_3 = uVar1;
  DAT_fffec950 = param_1;
  return;
}

