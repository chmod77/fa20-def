
void FUN_000e470c(ushort param_1,ushort *param_2)

{
  if (0x7fff < param_1) {
    *param_2 = 0x8000;
    return;
  }
  *param_2 = param_1;
  return;
}

