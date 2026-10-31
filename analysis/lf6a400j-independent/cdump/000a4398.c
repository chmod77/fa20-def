
void FUN_000a4398(char param_1,ushort param_2,int param_3,undefined1 *param_4)

{
  if (param_1 == '\x04') {
    DAT_fffec324 = -1 < (short)((param_2 & 0xff) - (ushort)*(byte *)(param_3 + 3));
  }
  *param_4 = DAT_fffec324;
  return;
}

