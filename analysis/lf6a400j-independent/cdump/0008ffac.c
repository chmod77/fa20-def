
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008ffac(char param_1,char param_2,short param_3,char param_4,ushort param_5,char param_6,
                 ushort param_7,undefined1 *param_8)

{
  char cVar1;
  
  if (param_6 != '\0') {
    DAT_fffebd64 = '\0';
  }
  else {
    if (DAT_fffebd64 == '\0') {
      _DAT_fffebd62 = 0;
      DAT_fffebd64 = '\x01';
    }
    DAT_fffebd60 = (uint)((int)(uint)_DAT_fffebd62 >> 1) < 0x28;
    _DAT_fffebd62 = _DAT_fffebd62 + 1;
    if (_DAT_fffebd62 == 0) {
      _DAT_fffebd62 = 0xffff;
    }
  }
  cVar1 = '\0';
  if (param_6 == '\0') {
    cVar1 = DAT_fffebd60;
  }
  if (((((param_1 == '\x03') && (param_2 == -1)) &&
       ((param_3 == 0 || ((1999 < param_7 && (param_7 < 0x7d1)))))) && (param_4 == '\0')) &&
     ((param_5 < 0x321 && ((param_6 != '\0' || (cVar1 != '\0')))))) {
    *param_8 = 0xff;
  }
  else {
    *param_8 = 0xff;
  }
  return;
}

