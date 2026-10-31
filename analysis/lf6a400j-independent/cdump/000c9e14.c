
void FUN_000c9e14(ushort param_1,ushort param_2,short *param_3)

{
  if ((ushort)((param_2 & 0xff) * 0x80) <= param_1) {
    *param_3 = param_1 + (param_2 & 0xff) * -0x80;
    return;
  }
  *param_3 = 0;
  return;
}

