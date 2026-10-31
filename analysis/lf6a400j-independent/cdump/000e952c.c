
void FUN_000e952c(char param_1,char param_2,ushort param_3,char param_4,char param_5,short param_6,
                 char param_7,undefined1 *param_8)

{
  if (((param_1 != '\0') && (param_2 == '\0')) &&
     (((200 < param_3 && ((param_4 != '\0' && (param_5 != '\0')))) || (param_6 != 0)))) {
    DAT_fffed428 = 1;
  }
  if (param_7 != '\0') {
    DAT_fffed428 = 0;
  }
  *param_8 = DAT_fffed428;
  return;
}

