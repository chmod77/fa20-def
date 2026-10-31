
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c2a3c(char param_1,char param_2,char param_3,char param_4,uint param_5,char param_6,
                 ushort *param_7)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  
  bVar1 = true;
  if (((param_1 == '\0') || (param_3 != '\x01')) && ((param_2 == '\0' || (param_4 != '\x01')))) {
    bVar1 = false;
  }
  uVar2 = _DAT_fffeca28;
  if (bVar1) {
    if (param_6 == '\0' || 0xf9 < _DAT_fffeca28) {
      _DAT_fffeca24 = 0;
      if (4 < _DAT_fffeca2a) {
        _DAT_fffeca24 = _DAT_fffeca2a - 5;
      }
    }
    else {
      uVar3 = LK_133E10((uint)&T_02E8F4,param_5 & 0xff);
      _DAT_fffeca24 = (ushort)uVar3;
    }
    if (param_6 == '\0') {
      _DAT_fffeca24 = 0;
      _DAT_fffeca28 = 0;
      uVar2 = _DAT_fffeca28;
      _DAT_fffeca2a = _DAT_fffeca24;
    }
    else {
      uVar2 = 0xffff;
      _DAT_fffeca2a = _DAT_fffeca24;
      if (_DAT_fffeca28 != 0xffff) {
        uVar2 = _DAT_fffeca28 + 1;
      }
    }
  }
  _DAT_fffeca28 = uVar2;
  if (bVar1) {
    _DAT_fffeca26 = _DAT_fffeca24;
  }
  *param_7 = _DAT_fffeca26;
  return;
}

