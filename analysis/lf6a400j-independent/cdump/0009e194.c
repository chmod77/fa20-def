
/* WARNING: Removing unreachable block (ram,0x0009e1fa) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009e194(short param_1,char param_2,char param_3,char param_4,ushort param_5,ushort param_6
                 ,ushort param_7,short param_8,undefined1 *param_9,short *param_10)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  short sVar5;
  ushort uVar6;
  
  bVar3 = param_2 != '\0';
  uVar6 = 0x47;
  if (DAT_fffec07f != '\0') {
    uVar6 = 0x23;
  }
  DAT_fffec07f = uVar6 <= param_6;
  if (param_3 == '\0') {
    uVar6 = 0x50;
  }
  else {
    uVar6 = 100;
  }
  if (bVar3) {
    bVar2 = false;
    _DAT_fffec078 = 0;
    sVar5 = _DAT_fffec078;
  }
  else {
    bVar2 = _DAT_fffec078 < uVar6;
    sVar5 = -1;
    if (_DAT_fffec078 != 0xffff) {
      sVar5 = _DAT_fffec078 + 1;
    }
  }
  _DAT_fffec078 = sVar5;
  if (param_3 == '\0') {
    uVar6 = 0xa00;
  }
  else {
    uVar6 = 0xe00;
  }
  if (bVar3) {
    _DAT_fffec07c = 0;
    sVar5 = _DAT_fffec07c;
  }
  else {
    sVar5 = -1;
    if (_DAT_fffec07c != -1) {
      sVar5 = _DAT_fffec07c + 1;
    }
  }
  _DAT_fffec07c = sVar5;
  bVar1 = _DAT_fffec07a < 0x65;
  uVar4 = 0;
  if (((((!bVar3) && (bVar2)) && (param_4 == '\0')) &&
      (((uVar6 <= param_5 && (param_5 < 0x8c00)) &&
       (((bool)DAT_fffec07f && ((param_6 < 0xde5 && (0x3fff < param_7)))))))) &&
     ((param_3 != '\0' || (param_8 == 0)))) {
    uVar4 = 1;
  }
  *param_9 = uVar4;
  if ((((0x51e < param_1) <= DAT_fffec07e) || (sVar5 = 0, bVar1)) &&
     (sVar5 = -1, _DAT_fffec07a != 0xffff)) {
    sVar5 = _DAT_fffec07a + 1;
  }
  *param_10 = sVar5;
  _DAT_fffec07a = sVar5;
  DAT_fffec07e = 0x51e < param_1;
  return;
}

