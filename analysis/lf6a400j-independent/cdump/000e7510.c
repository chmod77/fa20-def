
void FUN_000e7510(ushort param_1,short *param_2)

{
  if (param_1 < 0x199a) {
    *param_2 = param_1 * 10;
    return;
  }
  *param_2 = -1;
  return;
}

