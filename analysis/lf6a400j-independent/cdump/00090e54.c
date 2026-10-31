
void FUN_00090e54(char param_1,undefined1 param_2,undefined1 param_3,char param_4,ushort param_5,
                 undefined1 *param_6)

{
  if (((0x5000 >= param_5) && (DAT_fffebd9c = DAT_fffebd9d, param_4 != '\0')) &&
     ((param_1 == '\x01' ||
      ((DAT_fffebd9c = param_2, DAT_fffebd9d = param_2, param_1 != '\x02' &&
       (DAT_fffebd9c = param_3, DAT_fffebd9d = param_3, param_1 != '\x03')))))) {
    DAT_fffebd9c = 0;
    DAT_fffebd9d = DAT_fffebd9c;
  }
  if (0x5000 < param_5) {
    *param_6 = 0;
  }
  else {
    *param_6 = DAT_fffebd9c;
  }
  return;
}

