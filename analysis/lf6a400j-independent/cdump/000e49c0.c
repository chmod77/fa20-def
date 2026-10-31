
void FUN_000e49c0(char param_1,char param_2,ushort param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_3 < 0x828f) {
    uVar1 = DAT_fffed2e0;
  }
  if ((param_1 != '\0') && (param_2 != '\0')) {
    uVar1 = 1;
  }
  *param_4 = uVar1;
  DAT_fffed2e0 = uVar1;
  return;
}

