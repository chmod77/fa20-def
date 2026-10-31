
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001091c8(char param_1,byte param_2,char param_3,char param_4,ushort param_5,uint param_6,
                 uint param_7,ushort param_8,char param_9,undefined2 param_10,ushort param_11,
                 ushort param_12,char param_13,undefined1 *param_14)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  char cVar8;
  int iVar9;
  short sVar10;
  
  bVar2 = false;
  if ((param_1 != '\0') && (DAT_fffedbd0 != '\0')) {
    bVar2 = true;
  }
  if (bVar2) {
    if (DAT_fffedbd4 == '\0') {
      DAT_fffedbd5 = '\0';
      _DAT_fffedbcc = 0;
      _DAT_fffedbca = 0;
      DAT_fffedbd4 = '\x01';
    }
    bVar3 = true;
    if ((((param_3 == '\0') && (DAT_fffedbd2 == '\0')) && (param_4 == '\0')) &&
       (DAT_fffedbd1 == '\0')) {
      bVar3 = false;
    }
    iVar9 = (uint)param_5 - (param_6 & 0xffff);
    sVar10 = 0x7fff;
    if ((iVar9 < 0x8000) && (sVar10 = (short)iVar9, iVar9 < -0x8000)) {
      sVar10 = -0x8000;
    }
    iVar9 = (int)sVar10;
    if (iVar9 < 0) {
      iVar9 = -iVar9;
    }
    uVar5 = (ushort)iVar9;
    if (iVar9 < 0) {
      uVar5 = 0;
    }
    iVar9 = (uint)param_5 - (param_7 & 0xffff);
    sVar10 = 0x7fff;
    if ((iVar9 < 0x8000) && (sVar10 = (short)iVar9, iVar9 < -0x8000)) {
      sVar10 = -0x8000;
    }
    iVar9 = (int)sVar10;
    if (iVar9 < 0) {
      iVar9 = -iVar9;
    }
    uVar6 = (ushort)iVar9;
    if (iVar9 < 0) {
      uVar6 = 0;
    }
    iVar9 = (param_7 & 0xffff) - 0x80;
    uVar7 = 0xffff;
    if (iVar9 < (int)&DAT_00010000) {
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      uVar7 = (ushort)iVar9;
    }
    if ((1 < param_12) || (cVar8 = '\x01', _DAT_fffedbca < 2)) {
      cVar8 = DAT_fffedbd5;
    }
    if (1 < param_12) {
      cVar8 = '\0';
    }
    bVar1 = false;
    if (cVar8 == '\0') {
      _DAT_fffedbcc = 0;
      uVar4 = _DAT_fffedbcc;
    }
    else {
      bVar1 = _DAT_fffedbcc < 0x32;
      uVar4 = 0xffff;
      if (_DAT_fffedbcc != 0xffff) {
        uVar4 = _DAT_fffedbcc + 1;
      }
    }
    _DAT_fffedbcc = uVar4;
    DAT_fffedbc8 = 0;
    if (((((param_9 != '\0') && (param_2 < DAT_fffedbd3)) && (_DAT_fffedbce < param_11)) ||
        ((param_9 == '\0' && (DAT_fffedbd3 < param_2)))) &&
       ((((!bVar3 && (param_8 < uVar5)) || ((param_8 < uVar6 && (bVar3)))) ||
        (((1 < param_12 || ((cVar8 != '\0' && (bVar1)))) &&
         ((uVar7 < param_5 && (param_13 != '\0')))))))) {
      DAT_fffedbc8 = 1;
    }
    _DAT_fffedbca = param_12;
    DAT_fffedbd5 = cVar8;
  }
  else {
    DAT_fffedbd4 = '\0';
  }
  if (bVar2) {
    *param_14 = DAT_fffedbc8;
  }
  else {
    *param_14 = 0;
  }
  DAT_fffedbd3 = param_2;
  DAT_fffedbd2 = param_3;
  DAT_fffedbd1 = param_4;
  DAT_fffedbd0 = param_1;
  _DAT_fffedbce = param_10;
  return;
}

