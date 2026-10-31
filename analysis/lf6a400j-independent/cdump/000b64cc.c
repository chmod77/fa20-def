
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b64cc(char param_1,short param_2,char param_3,char param_4,ushort param_5,
                 undefined1 *param_6)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  ushort uVar4;
  byte bVar5;
  undefined1 uVar6;
  
  cVar3 = DAT_fffec76a;
  bVar1 = false;
  if (((param_1 != '\0') && (DAT_fffec76d == param_3)) && (param_3 != '\0')) {
    bVar1 = true;
  }
  bVar2 = false;
  if (((bVar1) && (param_4 != '\0')) && ((-2 < param_2 && (param_2 < 2)))) {
    bVar2 = true;
  }
  bVar5 = 0;
  if ((bVar1) && (1 < param_5)) {
    bVar5 = 1;
  }
  if ((bVar5 <= DAT_fffec76c) && (DAT_fffec76b == '\0')) {
    param_5 = _DAT_fffec766;
  }
  uVar4 = 0;
  if ((bVar5 != 0) && (uVar4 = 0xffff, _DAT_fffec764 != -1)) {
    uVar4 = _DAT_fffec764 + 1;
  }
  if (DAT_fffec76a != '\0') {
    uVar4 = 1;
  }
  DAT_fffec76a = bVar5 != 0 && param_5 <= uVar4;
  uVar6 = 0;
  if ((bVar1) && ((cVar3 != '\0' || (bVar2 && 0xfffe < _DAT_fffec768)))) {
    uVar6 = 1;
  }
  _DAT_fffec764 = uVar4;
  *param_6 = uVar6;
  if (bVar2) {
    _DAT_fffec768 = _DAT_fffec768 + 1;
    if (_DAT_fffec768 == 0) {
      _DAT_fffec768 = -1;
    }
  }
  else {
    _DAT_fffec768 = 0;
  }
  DAT_fffec76c = bVar5;
  DAT_fffec76d = param_3;
  DAT_fffec76b = cVar3;
  _DAT_fffec766 = param_5;
  return;
}

