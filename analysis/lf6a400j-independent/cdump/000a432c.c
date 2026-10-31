
void FUN_000a432c(char param_1,ushort param_2,byte *param_3,undefined1 *param_4)

{
  if (param_1 == '\x01') {
    DAT_fffec318 = -1 < (short)((param_2 & 0xff) - (ushort)*param_3);
  }
  *param_4 = DAT_fffec318;
  return;
}

