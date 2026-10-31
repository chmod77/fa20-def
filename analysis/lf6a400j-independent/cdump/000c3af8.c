
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c3af8(char param_1,char param_2,char param_3,byte param_4,char param_5,char param_6,
                 short param_7,short *param_8)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  
  if (param_1 == '\0') goto LAB_000c3bcc;
  bVar2 = param_6 != '\0';
  if ((param_5 != '\x02') || (bVar2)) {
    bVar1 = false;
  }
  else {
    bVar1 = 0x7c < _DAT_fffeca8e;
  }
  if ((param_5 != '\x02') || (bVar2)) {
    _DAT_fffeca8e = 0;
    uVar3 = _DAT_fffeca8e;
  }
  else {
    uVar3 = 0xffff;
    if (_DAT_fffeca8e != 0xffff) {
      uVar3 = _DAT_fffeca8e + 1;
    }
  }
  _DAT_fffeca8e = uVar3;
  _DAT_fffeca8c = param_7;
  if ((!bVar2) &&
     (((param_5 == '\x03' || (param_5 == '\x04')) && (_DAT_fffeca8c = -1, param_7 != -1)))) {
    _DAT_fffeca8c = param_7 + 1;
  }
  bVar2 = param_5 == '\x01';
  if (((param_2 == '\0') && ((param_3 == '\0' || (DAT_fffeca90 <= param_4)))) || (bVar2)) {
    if (param_5 == '\0') {
      _DAT_fffeca8c = param_7;
      DAT_fffeca90 = param_4;
      goto LAB_000c3bcc;
    }
    if ((!bVar2) || (param_6 == '\0')) {
      if (((bVar2) && (param_6 == '\0')) || (DAT_fffeca90 = param_4, bVar1)) {
        _DAT_fffeca8c = -1;
        DAT_fffeca90 = param_4;
      }
      goto LAB_000c3bcc;
    }
  }
  _DAT_fffeca8c = 0;
  DAT_fffeca90 = param_4;
LAB_000c3bcc:
  *param_8 = _DAT_fffeca8c;
  return;
}

