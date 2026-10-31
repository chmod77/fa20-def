
void FUN_000a4374(char param_1,ushort param_2,int param_3,undefined1 *param_4)

{
  if (param_1 == '\x03') {
    DAT_fffec320 = -1 < (short)((param_2 & 0xff) - (ushort)*(byte *)(param_3 + 2));
  }
  *param_4 = DAT_fffec320;
  return;
}

