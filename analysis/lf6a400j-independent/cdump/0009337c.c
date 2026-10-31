
void FUN_0009337c(char param_1,ushort param_2,int param_3,ushort param_4,int param_5,ushort param_6,
                 int param_7,ushort param_8,int param_9,ushort param_10,undefined1 param_11,
                 undefined1 *param_12)

{
  if (param_10 < 0x5001) {
    if (param_1 == '\0') {
      if (((((param_2 < 0x168) && (param_3 != 0)) || ((param_4 < 0x168 && (param_5 != 0)))) ||
          ((param_6 < 0x168 && (param_7 != 0)))) || ((param_8 < 0x168 && (param_9 != 0)))) {
        DAT_fffebe70 = 1;
      }
      else {
        DAT_fffebe70 = param_11;
      }
    }
    else {
      DAT_fffebe70 = 0;
    }
  }
  *param_12 = DAT_fffebe70;
  return;
}

