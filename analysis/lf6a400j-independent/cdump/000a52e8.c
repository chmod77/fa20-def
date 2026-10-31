
void FUN_000a52e8(char param_1,char param_2,ushort param_3,int param_4,int param_5,
                 undefined1 *param_6)

{
  if (param_1 == '\x03') {
    if (((short)((param_3 & 0xff) - (ushort)*(byte *)(param_4 + 2)) <=
         (short)(ushort)*(byte *)(param_5 + 2)) || (DAT_fffec358 = 1, param_2 == '\0')) {
      DAT_fffec358 = DAT_fffec359;
    }
    DAT_fffec359 = DAT_fffec358;
    if (param_2 == '\0') {
      DAT_fffec358 = 0;
      DAT_fffec359 = DAT_fffec358;
    }
  }
  *param_6 = DAT_fffec358;
  return;
}

