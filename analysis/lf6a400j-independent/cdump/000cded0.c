
void FUN_000cded0(char param_1,char param_2,ushort param_3,undefined1 *param_4)

{
  if (param_1 != '\0') {
    if (param_2 == '\0') {
      DAT_fffeccb4 = 0;
    }
    else {
      DAT_fffeccb4 = 1;
      if ((param_2 != '\x01') &&
         ((((param_2 != '\x02' && (param_2 != '\x03')) && (param_2 != '\x04')) || (param_3 < 0x8ca))
         )) {
        DAT_fffeccb4 = 0;
      }
    }
  }
  *param_4 = DAT_fffeccb4;
  return;
}

