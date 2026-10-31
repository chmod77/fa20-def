
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c0150(char param_1,char param_2,uint param_3,char param_4,uint param_5,
                 undefined1 *param_6,ushort *param_7)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  ushort uVar4;
  
  uVar2 = DAT_fffec96e;
  if (param_1 == '\0') {
    if (((param_2 == '\x02') || (uVar4 = _DAT_fffec970, param_2 == '\x03')) &&
       (uVar4 = _DAT_fffec970 + 1, (ushort)(_DAT_fffec970 + 1) == 0)) {
      uVar4 = 0xffff;
    }
    _DAT_fffec96c = _DAT_fffec970;
    bVar1 = false;
    if (param_2 == '\x02') {
      bVar1 = 299 < _DAT_fffec972;
      _DAT_fffec972 = _DAT_fffec972 + 1;
      if (_DAT_fffec972 == 0) {
        _DAT_fffec972 = 0xffff;
      }
    }
    else {
      _DAT_fffec972 = 0;
    }
    if ((((299 < _DAT_fffec970) && (_DAT_fffec970 = uVar4, (param_3 & 0xffff) < 0xcd0)) ||
        ((param_4 == '\0' && ((bVar1 && (_DAT_fffec970 = uVar4, (param_3 & 0xffff) < 0xccf)))))) ||
       ((uVar2 = DAT_fffec974, _DAT_fffec970 = uVar4, param_4 == '\x01' &&
        (uVar3 = LK_133E10((uint)&T_02E7BC,param_5 & 0xff), uVar2 = DAT_fffec974,
        (param_3 & 0xffff) < (uVar3 & 0xffff))))) {
      DAT_fffec974 = 1;
      uVar2 = DAT_fffec974;
    }
  }
  DAT_fffec96e = uVar2;
  *param_6 = DAT_fffec96e;
  *param_7 = _DAT_fffec96c;
  return;
}

