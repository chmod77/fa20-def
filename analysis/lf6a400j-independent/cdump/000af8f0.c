
void FUN_000af8f0(char param_1,byte param_2,byte param_3,ushort param_4,char param_5,char param_6,
                 undefined1 *param_7)

{
  bool bVar1;
  
  bVar1 = false;
  if (((param_1 == '\x03') && (param_2 < 0x50)) && (param_5 == '\x04')) {
    bVar1 = true;
  }
  if (bVar1) {
    if ((param_3 < 0x81) || (DAT_fffec5d8 = 1, param_4 < 0x87d1)) {
      DAT_fffec5d8 = DAT_fffec5d9;
    }
    if (param_6 != DAT_fffec5da) {
      DAT_fffec5d8 = 0;
    }
    DAT_fffec5da = param_6;
    DAT_fffec5d9 = DAT_fffec5d8;
  }
  if (bVar1) {
    *param_7 = DAT_fffec5d8;
  }
  else {
    *param_7 = 0;
  }
  return;
}

