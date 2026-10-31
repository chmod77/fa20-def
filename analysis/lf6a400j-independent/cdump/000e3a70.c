
void FUN_000e3a70(ushort param_1,ushort param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_2 < 300) {
    uVar1 = DAT_fffed298;
  }
  if (30999 < param_1) {
    uVar1 = 1;
  }
  *param_3 = uVar1;
  DAT_fffed298 = uVar1;
  return;
}

