
void FUN_00120b54(byte param_1,char param_2,byte param_3,char param_4,ushort param_5,char param_6,
                 char param_7,char param_8,undefined1 *param_9)

{
  if (((((param_8 == '\0') && (param_2 != '\0')) && (param_3 != 0)) && (param_4 != '\0')) ||
     (((param_4 == '\0' && (DAT_fffee1a8 < param_3)) && ((param_2 != '\0' && (param_5 < 500)))))) {
    DAT_fffee1aa = 1;
  }
  if (((DAT_fffee1a9 < param_1) || (param_3 == 0)) ||
     ((param_2 == '\0' || ((param_6 != '\0' || (param_7 != '\0')))))) {
    DAT_fffee1aa = 0;
  }
  *param_9 = DAT_fffee1aa;
  DAT_fffee1a9 = param_1;
  DAT_fffee1a8 = param_3;
  return;
}

