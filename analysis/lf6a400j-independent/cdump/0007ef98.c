
void FUN_0007ef98(ushort param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((uint)param_1 * 0x186d >> 8);
  if (0xffff00 < (uint)param_1 * 0x186d) {
    uVar1 = 0xffff;
  }
  *param_2 = uVar1;
  return;
}

