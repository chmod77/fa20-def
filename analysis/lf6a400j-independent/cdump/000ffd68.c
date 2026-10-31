
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ffd68(char param_1,char param_2,char param_3,char param_4,short param_5,char param_6,
                 undefined1 *param_7,ushort *param_8)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = false;
  if ((param_1 != '\0') && (param_2 != '\0')) {
    bVar1 = true;
  }
  if (!bVar1) {
    if (DAT_fffed9bf != '\0') {
      DAT_fffed9ba = 0;
      _DAT_fffed9b8 = 0;
      DAT_fffed9bf = '\0';
      DAT_fffed9c1 = '\0';
    }
    goto LAB_000ffe4a;
  }
  if (DAT_fffed9c1 == '\0') {
    DAT_fffed9be = 0;
    _DAT_fffed9bc = 0;
    DAT_fffed9c1 = '\x01';
    DAT_fffed9bf = '\x01';
  }
  if ((param_3 != '\0') || (param_4 != '\0')) {
    DAT_fffed9be = 1;
  }
  _DAT_fffed9b8 = 0;
  if ((DAT_fffed9c0 != '\0') && (_DAT_fffed9b8 = 0xffff, _DAT_fffed9bc != 0xffff)) {
    _DAT_fffed9b8 = _DAT_fffed9bc + 1;
  }
  bVar2 = true;
  if (((param_6 == '\0') || (_DAT_fffed9b8 < 0x3f)) &&
     ((_DAT_fffed9b8 < 0xbf6 || (param_6 != '\0')))) {
    bVar2 = false;
  }
  _DAT_fffed9bc = _DAT_fffed9b8;
  if ((!bVar2) || (param_6 == '\0')) {
    if (param_6 != '\0') {
      DAT_fffed9ba = 1;
      DAT_fffed9be = DAT_fffed9ba;
      goto LAB_000ffe4a;
    }
    if ((((param_3 != '\0') || (param_4 != '\0')) && ((param_3 == '\0' || (-0x3555 < param_5)))) &&
       (((-0x2dfe < param_5 || (param_4 == '\0')) && (DAT_fffed9ba = DAT_fffed9be, !bVar2))))
    goto LAB_000ffe4a;
  }
  DAT_fffed9ba = 0;
  DAT_fffed9be = DAT_fffed9ba;
LAB_000ffe4a:
  DAT_fffed9c0 = 0;
  if (bVar1) {
    DAT_fffed9c0 = DAT_fffed9ba;
  }
  *param_7 = DAT_fffed9c0;
  if (bVar1) {
    *param_8 = _DAT_fffed9b8;
  }
  else {
    *param_8 = 0;
  }
  return;
}

