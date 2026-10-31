
void FUN_00090d84(char param_1,undefined1 param_2,undefined1 param_3,char param_4,ushort param_5,
                 undefined1 *param_6)

{
  if (((0x5000 >= param_5) && (DAT_fffebd94 = DAT_fffebd95, param_4 != '\0')) &&
     ((param_1 == '\x01' ||
      ((DAT_fffebd94 = param_2, DAT_fffebd95 = param_2, param_1 != '\x02' &&
       (DAT_fffebd94 = param_3, DAT_fffebd95 = param_3, param_1 != '\x03')))))) {
    DAT_fffebd94 = 0;
    DAT_fffebd95 = DAT_fffebd94;
  }
  if (0x5000 < param_5) {
    *param_6 = 0;
  }
  else {
    *param_6 = DAT_fffebd94;
  }
  return;
}

