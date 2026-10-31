
void FUN_0009124c(ushort param_1,ushort param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((uint)param_2 * (uint)param_1 >> 8);
  if (0xffff00 < (uint)param_2 * (uint)param_1) {
    uVar1 = 0xffff;
  }
  *param_3 = uVar1;
  return;
}

