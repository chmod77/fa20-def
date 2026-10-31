
void FUN_00119bc0(ushort param_1,ushort param_2,ushort param_3,ushort param_4,undefined2 *param_5)

{
  if (param_2 <= param_1) {
    *param_5 = 0x11a;
    return;
  }
  if ((0x1999 < param_3) && (param_4 < 0x140)) {
    *param_5 = 0x42;
    return;
  }
  *param_5 = 0xa4;
  return;
}

