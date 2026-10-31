
void FUN_000d3d90(ushort param_1,ushort param_2,char param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (((param_1 < 0x2ef) && (0x27ff < param_2)) && (param_3 != '\0')) {
    uVar1 = 1;
  }
  *param_4 = uVar1;
  DAT_fffece28 = 0x27ff < param_2;
  return;
}

