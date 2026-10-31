
void FUN_000a524c(char param_1,char param_2,ushort param_3,byte *param_4,byte *param_5,
                 undefined1 *param_6)

{
  if (param_1 == '\x01') {
    if (((short)((param_3 & 0xff) - (ushort)*param_4) <= (short)(ushort)*param_5) ||
       (DAT_fffec350 = 1, param_2 == '\0')) {
      DAT_fffec350 = DAT_fffec351;
    }
    DAT_fffec351 = DAT_fffec350;
    if (param_2 == '\0') {
      DAT_fffec350 = 0;
      DAT_fffec351 = DAT_fffec350;
    }
  }
  *param_6 = DAT_fffec350;
  return;
}

