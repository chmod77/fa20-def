
void FUN_0005e27a(byte *param_1,byte *param_2,byte *param_3)

{
  *param_2 = *param_1 & 0xf0 | (byte)((int)(uint)param_1[1] >> 4);
  param_2[1] = (byte)((int)(uint)param_1[3] >> 4) | param_1[2] & 0xf0;
  param_2[2] = param_1[4] & 0xf0;
  *param_3 = *param_1 << 4 | param_1[1] & 0xf;
  param_3[1] = param_1[3] & 0xf | param_1[2] << 4;
  param_3[2] = param_1[4] << 4;
  return;
}

