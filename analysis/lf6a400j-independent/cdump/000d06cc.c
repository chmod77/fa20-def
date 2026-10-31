
void FUN_000d06cc(ushort param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)((uint)param_1 * 5 >> 2);
  if (0x3fc < (uint)param_1 * 5) {
    uVar1 = 0xff;
  }
  *param_2 = uVar1;
  return;
}

