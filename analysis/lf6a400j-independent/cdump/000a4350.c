
void FUN_000a4350(char param_1,ushort param_2,int param_3,undefined1 *param_4)

{
  if (param_1 == '\x02') {
    DAT_fffec31c = -1 < (short)((param_2 & 0xff) - (ushort)*(byte *)(param_3 + 1));
  }
  *param_4 = DAT_fffec31c;
  return;
}

