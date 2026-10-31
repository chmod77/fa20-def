
void FUN_000a5338(char param_1,char param_2,ushort param_3,int param_4,int param_5,
                 undefined1 *param_6)

{
  if (param_1 == '\x04') {
    if (((short)((param_3 & 0xff) - (ushort)*(byte *)(param_4 + 3)) <=
         (short)(ushort)*(byte *)(param_5 + 3)) || (DAT_fffec35c = 1, param_2 == '\0')) {
      DAT_fffec35c = DAT_fffec35d;
    }
    DAT_fffec35d = DAT_fffec35c;
    if (param_2 == '\0') {
      DAT_fffec35c = 0;
      DAT_fffec35d = DAT_fffec35c;
    }
  }
  *param_6 = DAT_fffec35c;
  return;
}

