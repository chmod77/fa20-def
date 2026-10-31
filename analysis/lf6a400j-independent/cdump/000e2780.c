
void FUN_000e2780(char param_1,char param_2,ushort param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if (0xfffe < param_3) {
    uVar1 = DAT_fffed264;
  }
  if ((param_1 != '\0') || (param_2 != '\0')) {
    uVar1 = 0;
  }
  *param_4 = uVar1;
  DAT_fffed264 = uVar1;
  return;
}

