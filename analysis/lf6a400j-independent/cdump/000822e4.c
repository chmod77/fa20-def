
/* WARNING: Removing unreachable block (ram,0x000823c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000822e4(char param_1,uint param_2,ushort param_3,ushort param_4,uint param_5,
                 ushort param_6,byte param_7,char param_8,char param_9,uint param_10,uint param_11,
                 byte param_12,char param_13,char param_14,undefined1 *param_15)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ushort uVar11;
  char cVar12;
  bool bVar13;
  
  bVar1 = param_1 != '\x03';
  param_2 = param_2 & 0xff;
  if (bVar1) {
    DAT_fffebb15 = '\0';
  }
  else {
    if (DAT_fffebb15 == '\0') {
      _DAT_fffebb0e = 0;
      DAT_fffebb15 = '\x01';
    }
    DAT_fffebb06 = '\0';
    _DAT_fffebb0e = _DAT_fffebb0e + 1;
    if (_DAT_fffebb0e == 0) {
      _DAT_fffebb0e = -1;
    }
  }
  cVar6 = '\0';
  if (!bVar1) {
    cVar6 = DAT_fffebb06;
  }
  uVar11 = param_6 + 0xa00;
  if (uVar11 < param_6) {
    uVar11 = 0xffff;
  }
  bVar13 = param_2 < 0x100;
  if (param_2 < 0x19) {
    uVar8 = 1;
  }
  else if (param_2 < 0x37) {
    uVar8 = 2;
  }
  else {
    uVar8 = 4;
    if (param_2 < 0x55) {
      uVar8 = 3;
    }
  }
  if (param_12 < 0x1e) {
    iVar10 = 0;
  }
  else {
    iVar10 = 8;
    if (param_12 < 0x28) {
      iVar10 = 4;
    }
  }
  uVar9 = uVar8 + iVar10;
  if (uVar9 < uVar8) {
    uVar9 = 0xff;
  }
  if (0xc < uVar9) {
    uVar9 = 0xc;
  }
  if (uVar9 == 1) {
    uVar9 = 0;
  }
  else if (uVar9 == 2) {
    uVar9 = 5;
  }
  else if (uVar9 == 3) {
    uVar9 = 10;
  }
  else if (uVar9 == 4) {
    uVar9 = 10;
  }
  else if (uVar9 == 5) {
    uVar9 = 0;
  }
  else if (uVar9 == 6) {
    uVar9 = 10;
  }
  else if (uVar9 == 7) {
    uVar9 = 0xc;
  }
  else if (uVar9 == 8) {
    uVar9 = 0xc;
  }
  else if (uVar9 == 9) {
    uVar9 = 0;
  }
  else if (uVar9 == 10) {
    uVar9 = 0xc;
  }
  else if (uVar9 == 0xb) {
    uVar9 = 0xf;
  }
  else if (uVar9 == 0xc) {
    uVar9 = 0xf;
  }
  DAT_fffebb13 = bVar13;
  if (DAT_fffebb10 < param_7) {
    uVar8 = 0;
    if (param_13 != '\0') {
      uVar8 = uVar9;
    }
    uVar9 = LK_13A3DC((uint)&T_02C7D4,param_10 & 0xff,param_11 & 0xff);
    uVar8 = (uVar9 & 0xff) + uVar8;
  }
  else {
    uVar8 = (uint)_DAT_fffebb08;
  }
  if (param_14 != '\0') {
    uVar8 = 0;
  }
  if (param_7 == 0) {
    DAT_fffebb16 = '\0';
  }
  else {
    if (DAT_fffebb16 == '\0') {
      _DAT_fffebb0c = 0;
      DAT_fffebb16 = '\x01';
    }
    DAT_fffebb05 = (uVar8 & 0xffff) <= (uint)_DAT_fffebb0c;
    _DAT_fffebb0c = _DAT_fffebb0c + 1;
    if (_DAT_fffebb0c == 0) {
      _DAT_fffebb0c = 0xffff;
    }
  }
  cVar12 = '\0';
  if (param_7 != 0) {
    cVar12 = DAT_fffebb05;
  }
  bVar3 = false;
  if ((cVar12 == '\0') && (DAT_fffebb12 == '\b')) {
    bVar3 = true;
  }
  bVar2 = DAT_fffebb12 == '\t';
  if (DAT_fffebb14 < bVar2) {
    _DAT_fffebb0a = param_4;
  }
  bVar4 = true;
  if ((DAT_fffebb11 <= (DAT_fffebb12 == '\t')) && ((!bVar2 || (param_3 < _DAT_fffebb0a)))) {
    bVar4 = false;
  }
  if (((!bVar3) || (cVar5 = !bVar4, bVar4)) &&
     (((!bVar3 && (bVar4)) || ((cVar5 = DAT_fffebb04, bVar3 && (bVar4)))))) {
    cVar5 = !bVar4;
  }
  DAT_fffebb04 = cVar5;
  if ((!bVar1) && (cVar6 == '\0')) {
    if (((param_8 == '\0') &&
        (((0xc < (uint)((int)(param_5 & 0xff) >> 1) &&
          ((param_5 & 0xff) <= (uint)((int)(uint)uVar11 >> 6))) && (param_9 == '\0')))) &&
       (uVar7 = 2, bVar13)) goto LAB_00082624;
    if (DAT_fffebb04 != '\0') {
      uVar7 = 9;
      goto LAB_00082624;
    }
    if (cVar12 != '\0') {
      uVar7 = 8;
      goto LAB_00082624;
    }
  }
  uVar7 = 1;
LAB_00082624:
  *param_15 = uVar7;
  DAT_fffebb14 = bVar2;
  DAT_fffebb11 = DAT_fffebb12 == '\t';
  DAT_fffebb10 = param_7;
  _DAT_fffebb08 = (short)uVar8;
  DAT_fffebb12 = uVar7;
  return;
}

