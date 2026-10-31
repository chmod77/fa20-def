
void FUN_000934cc(char param_1,char param_2,byte param_3,char param_4,ushort param_5,
                 undefined1 param_6,undefined1 *param_7)

{
  if (param_5 < 0x5001) {
    if ((param_4 == '\0') && ((param_3 <= DAT_fffebe79 || ((param_1 != '\0' && (param_2 != '\0')))))
       ) {
      if (param_3 <= DAT_fffebe79) {
        DAT_fffebe78 = param_6;
        DAT_fffebe79 = param_3;
      }
      else {
        DAT_fffebe78 = 1;
        DAT_fffebe79 = param_3;
      }
    }
    else {
      DAT_fffebe78 = 0;
      DAT_fffebe79 = param_3;
    }
  }
  *param_7 = DAT_fffebe78;
  return;
}

