
void FUN_001210e0(byte param_1,char param_2,ushort param_3,ushort param_4,ushort param_5,
                 ushort param_6,ushort param_7,ushort param_8,char param_9,char param_10,
                 char param_11,char param_12,undefined1 *param_13)

{
  if ((param_1 != 0) &&
     ((((param_2 == '\0' && (param_11 == '\0')) && (param_12 == '\0')) || (param_4 <= param_3)))) {
    DAT_fffee1d4 = 1;
  }
  if (((((param_6 <= param_5) || (param_8 <= param_7)) ||
       ((param_8 < 0x42 || ((0xfd70 < param_7 || (param_9 != '\0')))))) || (param_10 != '\0')) ||
     (DAT_fffee1d5 < param_1)) {
    DAT_fffee1d4 = 0;
  }
  *param_13 = DAT_fffee1d4;
  DAT_fffee1d5 = param_1;
  return;
}

