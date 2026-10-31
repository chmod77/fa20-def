
void FUN_0005e2d6(byte *param_1,byte *param_2,byte *param_3)

{
  *param_3 = *param_1 & 0xf0 | (byte)((int)(uint)*param_2 >> 4);
  param_3[1] = *param_1 << 4 | *param_2 & 0xf;
  param_3[2] = (byte)((int)(uint)param_2[1] >> 4) | param_1[1] & 0xf0;
  param_3[3] = param_2[1] & 0xf | param_1[1] << 4;
  param_3[4] = (byte)((int)(uint)param_2[2] >> 4) | param_1[2] & 0xf0;
  return;
}

