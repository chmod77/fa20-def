
void FUN_001334b0(char param_1,char param_2,char param_3,ushort param_4,ushort param_5,char param_6,
                 char param_7,char param_8,undefined1 *param_9)

{
  if (((((param_1 != '\0') && (DAT_fffee624 = 0, param_2 != '@')) && (param_3 != '\0')) &&
      ((0x8b84 < param_4 && (0x95 < param_5)))) &&
     ((param_6 == '\0' && ((param_7 == '\0' && (param_8 == '\0')))))) {
    DAT_fffee624 = 1;
  }
  if (param_1 == '\0') {
    *param_9 = 0;
  }
  else {
    *param_9 = DAT_fffee624;
  }
  return;
}

