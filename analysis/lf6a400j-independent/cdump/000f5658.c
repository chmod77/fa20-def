
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f5658(char param_1,char param_2,ushort param_3,char param_4,undefined1 *param_5,
                 ushort *param_6,ushort *param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  ushort uVar5;
  ushort uVar6;
  
  bVar1 = true;
  if ((0x30b < param_3) && (param_3 < 0x55b)) {
    bVar1 = false;
  }
  bVar2 = false;
  if ((param_2 != '\0') && (!bVar1)) {
    bVar2 = true;
  }
  bVar3 = false;
  if ((param_2 != '\0') && (bVar1)) {
    bVar3 = true;
  }
  uVar5 = 0;
  if (bVar2) {
    uVar5 = _DAT_fffed77e;
  }
  *param_7 = uVar5;
  if (bVar2) {
    if (uVar5 == 0xffff) {
      _DAT_fffed77e = -1;
    }
    else {
      _DAT_fffed77e = uVar5 + 1;
    }
  }
  else {
    _DAT_fffed77e = 0;
  }
  uVar6 = 0;
  if (bVar3) {
    uVar6 = _DAT_fffed77c;
  }
  if ((DAT_fffed780 == '\0') && (param_1 != '\0')) {
    uVar4 = 1;
  }
  else if ((bVar3) && (499 < uVar6)) {
    uVar4 = 2;
  }
  else if ((bVar2) && (499 < uVar5)) {
    uVar4 = 3;
  }
  else {
    uVar4 = 0;
  }
  if (param_4 == '\0') {
    *param_5 = uVar4;
  }
  else {
    *param_5 = 0;
  }
  *param_6 = uVar6;
  if (bVar3) {
    if (uVar6 == 0xffff) {
      _DAT_fffed77c = -1;
    }
    else {
      _DAT_fffed77c = uVar6 + 1;
    }
  }
  else {
    _DAT_fffed77c = 0;
  }
  DAT_fffed780 = param_1;
  return;
}

