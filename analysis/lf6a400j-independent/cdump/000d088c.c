
void FUN_000d088c(ushort param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  if (param_1 < 0x1ff) {
    uVar1 = (undefined1)((int)(uint)param_1 >> 1);
  }
  else {
    uVar1 = 0xff;
  }
  *param_2 = uVar1;
  return;
}

