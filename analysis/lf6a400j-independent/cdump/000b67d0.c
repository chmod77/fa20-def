
void FUN_000b67d0(ushort param_1,ushort *param_2)

{
  if (param_1 == 0) {
    param_1 = 0;
  }
  if (0x63ff < param_1) {
    *param_2 = 0x6400;
    return;
  }
  *param_2 = param_1;
  return;
}

