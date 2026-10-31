
void FUN_00090ebc(char param_1,undefined1 param_2,undefined1 param_3,char param_4,ushort param_5,
                 undefined1 *param_6)

{
  if (((0x5000 >= param_5) && (DAT_fffebda0 = DAT_fffebda1, param_4 != '\0')) &&
     ((param_1 == '\x01' ||
      ((DAT_fffebda0 = param_2, DAT_fffebda1 = param_2, param_1 != '\x02' &&
       (DAT_fffebda0 = param_3, DAT_fffebda1 = param_3, param_1 != '\x03')))))) {
    DAT_fffebda0 = 0;
    DAT_fffebda1 = DAT_fffebda0;
  }
  if (0x5000 < param_5) {
    *param_6 = 0;
  }
  else {
    *param_6 = DAT_fffebda0;
  }
  return;
}

