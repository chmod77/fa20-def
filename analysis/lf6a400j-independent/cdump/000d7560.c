
void FUN_000d7560(ushort param_1,char param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_2 == '\0') {
    uVar1 = DAT_fffecefc;
  }
  if (4 < param_1) {
    uVar1 = 1;
  }
  *param_3 = uVar1;
  DAT_fffecefc = uVar1;
  return;
}

