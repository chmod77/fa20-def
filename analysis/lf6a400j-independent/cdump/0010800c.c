
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010800c(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,char param_10,undefined1 *param_11)

{
  bool bVar1;
  ushort uVar2;
  
  if (param_1 != '\0') {
    if ((((param_7 == '\0') || (param_8 != '\0')) || (param_9 == '\x02')) ||
       ((param_10 != '\0' && (param_5 != '\0')))) {
      bVar1 = 0x18 < _DAT_fffedb3a;
    }
    else {
      bVar1 = false;
    }
    if (((param_7 == '\0') || (param_8 != '\0')) ||
       ((param_9 == '\x02' || ((param_10 != '\0' && (param_5 != '\0')))))) {
      uVar2 = 0xffff;
      if (_DAT_fffedb3a != 0xffff) {
        uVar2 = _DAT_fffedb3a + 1;
      }
    }
    else {
      _DAT_fffedb3a = 0;
      uVar2 = _DAT_fffedb3a;
    }
    _DAT_fffedb3a = uVar2;
    DAT_fffedb38 = 0;
    if ((param_2 != '\0') &&
       (((param_3 != '\0' || (((param_4 != '\0' && (param_5 != '\0')) || (param_6 != '\0')))) ||
        (bVar1)))) {
      DAT_fffedb38 = 1;
    }
  }
  *param_11 = DAT_fffedb38;
  return;
}

