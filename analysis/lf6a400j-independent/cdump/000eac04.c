
void FUN_000eac04(undefined4 param_1,char param_2,ushort param_3,char param_4,char param_5,
                 char param_6,undefined1 *param_7)

{
  if ((((param_4 != '\0') && (0xf00 < param_3)) && (param_5 != '\0')) && (param_2 == '\0')) {
    DAT_fffed490 = 1;
  }
  if (param_6 != '\0') {
    DAT_fffed490 = 0;
  }
  *param_7 = DAT_fffed490;
  return;
}

