
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010aa84(byte param_1,ushort param_2,byte param_3,ushort param_4,char param_5,char param_6,
                 undefined1 *param_7)

{
  bool bVar1;
  ushort uVar2;
  undefined1 uVar3;
  
  bVar1 = false;
  if ((param_1 < 0xa5) && ((param_2 < 0x29b || (param_3 < 0x30)))) {
    bVar1 = true;
  }
  uVar2 = 0;
  if (bVar1) {
    uVar2 = _DAT_fffedc80;
    if (_DAT_fffedc80 == 0xffff) {
      _DAT_fffedc80 = -1;
    }
    else {
      _DAT_fffedc80 = _DAT_fffedc80 + 1;
    }
  }
  else {
    _DAT_fffedc80 = 0;
  }
  if ((!bVar1) || (uVar3 = 1, uVar2 < 0x7d)) {
    uVar3 = DAT_fffedc82;
  }
  if (((0x29a < param_4) && (param_4 < 1000)) || ((param_5 != '\0' && (param_6 != '\0')))) {
    uVar3 = 0;
  }
  *param_7 = uVar3;
  DAT_fffedc82 = uVar3;
  return;
}

