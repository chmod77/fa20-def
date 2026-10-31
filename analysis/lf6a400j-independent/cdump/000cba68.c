
void FUN_000cba68(undefined4 param_1,ushort param_2,ushort *param_3)

{
  if (0x7fff8000 < (uint)param_2 * 0x8000) {
    param_2 = 0xffff;
  }
  *param_3 = param_2;
  return;
}

