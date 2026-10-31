
/* WARNING: Removing unreachable block (ram,0x000aaeee) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000aae98(char param_1,char param_2,char param_3,byte param_4,short param_5,ushort param_6,
                 char param_7,ushort *param_8,ushort *param_9,short *param_10,ushort *param_11)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  short sVar4;
  char cVar5;
  byte bVar6;
  ushort uVar7;
  
  cVar5 = '\x06';
  if (param_7 != '\0') {
    cVar5 = '\r';
  }
  bVar1 = cVar5 == param_3;
  if (DAT_fffec4a1 == '\0') {
    sVar4 = -0x100;
  }
  else {
    sVar4 = 0x100;
  }
  if (DAT_fffec4a2 == '\0') {
    bVar6 = 0x11;
  }
  else {
    bVar6 = 0xf;
  }
  if (DAT_fffec4a0 == '\0') {
    uVar7 = 0xb000;
  }
  else {
    uVar7 = 0xaccc;
  }
  bVar2 = false;
  if (((bVar6 <= param_4) && (param_5 <= sVar4)) && (uVar7 <= param_6)) {
    bVar2 = true;
  }
  if (bVar2) {
    _DAT_fffec498 = 0x4a3;
  }
  if (bVar1) {
    _DAT_fffec498 = 0x3b6;
  }
  *param_9 = _DAT_fffec498;
  if (bVar2) {
    _DAT_fffec49a = 7;
  }
  if (bVar1) {
    _DAT_fffec49a = 4;
  }
  *param_10 = _DAT_fffec49a;
  if (bVar2) {
    _DAT_fffec49c = 0x947;
  }
  if (bVar1) {
    _DAT_fffec49c = 0x947;
  }
  *param_11 = _DAT_fffec49c;
  if (((param_1 != '\0') || (param_2 != '\0')) || (_DAT_fffec49e < _DAT_fffec49c)) {
    uVar3 = 0;
  }
  else {
    uVar3 = _DAT_fffec49e - _DAT_fffec49c;
  }
  if (((param_1 == '\0') && (param_2 == '\0')) && ((bVar1 || (bVar2)))) {
    uVar3 = _DAT_fffec49e + _DAT_fffec49a;
    if (uVar3 < _DAT_fffec49e) {
      uVar3 = 0xffff;
    }
    if (_DAT_fffec498 <= uVar3) {
      uVar3 = _DAT_fffec498;
    }
  }
  *param_8 = uVar3;
  _DAT_fffec49e = uVar3;
  DAT_fffec4a1 = param_5 <= sVar4;
  DAT_fffec4a2 = bVar6 <= param_4;
  DAT_fffec4a0 = uVar7 <= param_6;
  return;
}

