
void FUN_000cb9e8(ushort param_1,undefined4 param_2,ushort *param_3)

{
  if (0x7fff8000 < (uint)param_1 * 0x8000) {
    param_1 = 0xffff;
  }
  *param_3 = param_1;
  return;
}

