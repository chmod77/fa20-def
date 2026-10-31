
void FUN_000a5298(char param_1,char param_2,ushort param_3,int param_4,int param_5,
                 undefined1 *param_6)

{
  if (param_1 == '\x02') {
    if (((short)((param_3 & 0xff) - (ushort)*(byte *)(param_4 + 1)) <=
         (short)(ushort)*(byte *)(param_5 + 1)) || (DAT_fffec354 = 1, param_2 == '\0')) {
      DAT_fffec354 = DAT_fffec355;
    }
    DAT_fffec355 = DAT_fffec354;
    if (param_2 == '\0') {
      DAT_fffec354 = 0;
      DAT_fffec355 = DAT_fffec354;
    }
  }
  *param_6 = DAT_fffec354;
  return;
}

