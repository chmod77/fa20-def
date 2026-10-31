
void FUN_000d26cc(int param_1,ushort param_2,ushort *param_3)

{
  if (*(int *)(param_1 + 4) == 0) {
    *param_3 = param_2;
    return;
  }
  if (0xfffe < param_2) {
    *param_3 = 0xffff;
    return;
  }
  *param_3 = param_2 + 1;
  return;
}

