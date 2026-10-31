
/* WARNING: Removing unreachable block (ram,0x000c950e) */
/* WARNING: Removing unreachable block (ram,0x000c9504) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c92e4(char param_1,char param_2,char param_3,ushort param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,char param_10,char param_11,char param_12,
                 char param_13,char param_14,char param_15,undefined1 *param_16)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  char cVar22;
  char cVar23;
  byte bVar25;
  byte bVar26;
  ushort uVar24;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  
  bVar1 = param_1 == '\x02';
  bVar5 = 199 < _DAT_fffecb4a;
  if (bVar1) {
    _DAT_fffecb4a = _DAT_fffecb4a + 1;
    if (_DAT_fffecb4a == 0) {
      _DAT_fffecb4a = -1;
    }
  }
  else {
    _DAT_fffecb4a = 0;
  }
  bVar2 = param_3 == '\x02';
  bVar3 = param_3 == '\x04';
  bVar4 = false;
  if (param_15 == '\0') {
    bVar4 = 0x45 < _DAT_fffecb48;
    _DAT_fffecb48 = _DAT_fffecb48 + 1;
    if (_DAT_fffecb48 == 0) {
      _DAT_fffecb48 = -1;
    }
  }
  else {
    _DAT_fffecb48 = 0;
  }
  bVar15 = true;
  if (((param_10 != '\0') &&
      ((((param_11 != '\0' || (param_12 != '\0')) || (param_13 != '\0')) || (!bVar4)))) &&
     (param_14 != '\0')) {
    bVar15 = false;
  }
  bVar25 = 0;
  if ((bVar3) && (bVar15)) {
    bVar25 = 1;
  }
  bVar4 = param_1 == '\x04';
  bVar19 = false;
  if (((!bVar3) && (bVar4)) && (bVar15)) {
    bVar19 = true;
  }
  bVar6 = false;
  if (bVar4) {
    bVar6 = 199 < _DAT_fffecb44;
    _DAT_fffecb44 = _DAT_fffecb44 + 1;
    if (_DAT_fffecb44 == 0) {
      _DAT_fffecb44 = -1;
    }
  }
  else {
    _DAT_fffecb44 = 0;
  }
  bVar26 = 0;
  if ((bVar6) && (bVar15)) {
    bVar26 = 1;
  }
  bVar15 = 199 < _DAT_fffecb46;
  if (param_2 == '\0') {
    _DAT_fffecb46 = 0;
  }
  else {
    _DAT_fffecb46 = _DAT_fffecb46 + 1;
    if (_DAT_fffecb46 == 0) {
      _DAT_fffecb46 = -1;
    }
  }
  bVar18 = false;
  if ((param_6 == '\0') && (param_7 == '\x06')) {
    bVar18 = true;
  }
  bVar16 = !bVar18;
  if (DAT_fffecb5b == '\0') {
    uVar24 = 0xffff;
  }
  else {
    uVar24 = 0xfccc;
  }
  DAT_fffecb5b = uVar24 < param_4;
  bVar14 = true;
  if ((!(bool)DAT_fffecb5b) && (param_5 == '\0')) {
    bVar14 = false;
  }
  bVar27 = 0;
  if ((bVar2) && (bVar14)) {
    bVar27 = 1;
  }
  bVar28 = 0;
  if ((bVar3) && (bVar14)) {
    bVar28 = 1;
  }
  bVar29 = 0;
  if ((bVar14) && (bVar1 && bVar5)) {
    bVar29 = 1;
  }
  bVar30 = 0;
  if ((bVar14) && (bVar6)) {
    bVar30 = 1;
  }
  bVar5 = false;
  if (((!bVar2) && (bVar14)) && (bVar1)) {
    bVar5 = true;
  }
  bVar1 = false;
  if (((!bVar3) && (bVar14)) && (bVar4)) {
    bVar1 = true;
  }
  bVar6 = DAT_fffecb5a < bVar27;
  bVar14 = DAT_fffecb63 < bVar29;
  cVar34 = '\x01';
  if (DAT_fffecb58 == '\0') {
    cVar34 = DAT_fffecb66;
  }
  if (bVar14) {
    cVar34 = '\0';
  }
  bVar7 = false;
  if (cVar34 == '\0') {
    _DAT_fffecb42 = 0;
  }
  else {
    bVar7 = _DAT_fffecb42 < 300;
    _DAT_fffecb42 = _DAT_fffecb42 + 1;
    if (_DAT_fffecb42 == 0) {
      _DAT_fffecb42 = -1;
    }
  }
  bVar20 = false;
  if ((!bVar2) && (bVar7)) {
    bVar20 = true;
  }
  bVar2 = DAT_fffecb56 < bVar30;
  cVar22 = '\x01';
  if (DAT_fffecb54 == '\0') {
    cVar22 = DAT_fffecb59;
  }
  if (bVar2) {
    cVar22 = '\0';
  }
  bVar7 = false;
  if (cVar22 == '\0') {
    _DAT_fffecb52 = 0;
  }
  else {
    bVar7 = _DAT_fffecb52 < 300;
    _DAT_fffecb52 = _DAT_fffecb52 + 1;
    if (_DAT_fffecb52 == 0) {
      _DAT_fffecb52 = -1;
    }
  }
  bVar21 = false;
  if ((!bVar3) && (bVar7)) {
    bVar21 = true;
  }
  cVar33 = '\x01';
  if (DAT_fffecb5f == '\0') {
    cVar33 = DAT_fffecb55;
  }
  if (bVar6) {
    cVar33 = '\0';
  }
  bVar7 = _DAT_fffecb4c < 300;
  if (cVar33 == '\0') {
    _DAT_fffecb4c = 0;
  }
  else {
    _DAT_fffecb4c = _DAT_fffecb4c + 1;
    if (_DAT_fffecb4c == 0) {
      _DAT_fffecb4c = -1;
    }
  }
  bVar11 = DAT_fffecb5e < bVar28;
  cVar31 = '\x01';
  if (DAT_fffecb62 == '\0') {
    cVar31 = DAT_fffecb64;
  }
  if (bVar11) {
    cVar31 = '\0';
  }
  bVar8 = _DAT_fffecb40 < 300;
  if (cVar31 == '\0') {
    _DAT_fffecb40 = 0;
  }
  else {
    _DAT_fffecb40 = _DAT_fffecb40 + 1;
    if (_DAT_fffecb40 == 0) {
      _DAT_fffecb40 = -1;
    }
  }
  bVar12 = DAT_fffecb5d < bVar26;
  bVar13 = DAT_fffecb5c < bVar25;
  cVar23 = '\x01';
  if (DAT_fffecb61 == '\0') {
    cVar23 = DAT_fffecb65;
  }
  if (bVar13) {
    cVar23 = '\0';
  }
  bVar9 = _DAT_fffecb4e < 300;
  if (cVar23 == '\0') {
    _DAT_fffecb4e = 0;
  }
  else {
    _DAT_fffecb4e = _DAT_fffecb4e + 1;
    if (_DAT_fffecb4e == 0) {
      _DAT_fffecb4e = -1;
    }
  }
  cVar32 = '\x01';
  if (DAT_fffecb60 == '\0') {
    cVar32 = DAT_fffecb57;
  }
  if (bVar12) {
    cVar32 = '\0';
  }
  bVar10 = _DAT_fffecb50 < 300;
  if (cVar32 == '\0') {
    _DAT_fffecb50 = 0;
  }
  else {
    _DAT_fffecb50 = _DAT_fffecb50 + 1;
    if (_DAT_fffecb50 == 0) {
      _DAT_fffecb50 = -1;
    }
  }
  bVar17 = false;
  if ((!bVar3) && (cVar32 != '\0' && bVar10)) {
    bVar17 = true;
  }
  DAT_fffecb55 = cVar33;
  DAT_fffecb57 = cVar32;
  DAT_fffecb59 = cVar22;
  DAT_fffecb64 = cVar31;
  DAT_fffecb65 = cVar23;
  DAT_fffecb66 = cVar34;
  if (param_1 == '\0') {
    *param_16 = 1;
    DAT_fffecb54 = bVar2;
    DAT_fffecb56 = bVar30;
    DAT_fffecb58 = bVar14;
    DAT_fffecb5a = bVar27;
    DAT_fffecb5c = bVar25;
    DAT_fffecb5d = bVar26;
    DAT_fffecb5e = bVar28;
    DAT_fffecb5f = bVar6;
    DAT_fffecb60 = bVar12;
    DAT_fffecb61 = bVar13;
    DAT_fffecb62 = bVar11;
    DAT_fffecb63 = bVar29;
    return;
  }
  if ((param_2 != '\0' && bVar15) || (cVar23 != '\0' && bVar9)) {
    *param_16 = 2;
    DAT_fffecb54 = bVar2;
    DAT_fffecb56 = bVar30;
    DAT_fffecb58 = bVar14;
    DAT_fffecb5a = bVar27;
    DAT_fffecb5c = bVar25;
    DAT_fffecb5d = bVar26;
    DAT_fffecb5e = bVar28;
    DAT_fffecb5f = bVar6;
    DAT_fffecb60 = bVar12;
    DAT_fffecb61 = bVar13;
    DAT_fffecb62 = bVar11;
    DAT_fffecb63 = bVar29;
    return;
  }
  if ((cVar33 != '\0' && bVar7) || (cVar31 != '\0' && bVar8)) {
    *param_16 = 3;
    DAT_fffecb54 = bVar2;
    DAT_fffecb56 = bVar30;
    DAT_fffecb58 = bVar14;
    DAT_fffecb5a = bVar27;
    DAT_fffecb5c = bVar25;
    DAT_fffecb5d = bVar26;
    DAT_fffecb5e = bVar28;
    DAT_fffecb5f = bVar6;
    DAT_fffecb60 = bVar12;
    DAT_fffecb61 = bVar13;
    DAT_fffecb62 = bVar11;
    DAT_fffecb63 = bVar29;
    return;
  }
  if ((bVar17) && (bVar18)) {
LAB_000c98ce:
    *param_16 = 5;
  }
  else {
    if ((bVar17) && (!bVar18)) {
LAB_000c98f0:
      *param_16 = 4;
      DAT_fffecb54 = bVar2;
      DAT_fffecb56 = bVar30;
      DAT_fffecb58 = bVar14;
      DAT_fffecb5a = bVar27;
      DAT_fffecb5c = bVar25;
      DAT_fffecb5d = bVar26;
      DAT_fffecb5e = bVar28;
      DAT_fffecb5f = bVar6;
      DAT_fffecb60 = bVar12;
      DAT_fffecb61 = bVar13;
      DAT_fffecb62 = bVar11;
      DAT_fffecb63 = bVar29;
      return;
    }
    if ((bVar19) && (bVar18)) {
LAB_000c991a:
      *param_16 = 7;
      DAT_fffecb54 = bVar2;
      DAT_fffecb56 = bVar30;
      DAT_fffecb58 = bVar14;
      DAT_fffecb5a = bVar27;
      DAT_fffecb5c = bVar25;
      DAT_fffecb5d = bVar26;
      DAT_fffecb5e = bVar28;
      DAT_fffecb5f = bVar6;
      DAT_fffecb60 = bVar12;
      DAT_fffecb61 = bVar13;
      DAT_fffecb62 = bVar11;
      DAT_fffecb63 = bVar29;
      return;
    }
    if ((!bVar19) || (bVar18)) {
      if (((bVar20) && (bVar18)) || ((bVar21 && (bVar18)))) goto LAB_000c98ce;
      if (((bVar20) && (bVar16)) || ((bVar21 && (bVar16)))) goto LAB_000c98f0;
      if (((bVar5) && (bVar18)) || ((bVar1 && (bVar18)))) goto LAB_000c991a;
      if (((!bVar5) || (!bVar16)) && ((!bVar1 || (!bVar16)))) {
        if ((param_1 == '\x03') && ((param_8 == '\0' || (param_9 != '\0')))) {
          *param_16 = 8;
          DAT_fffecb54 = bVar2;
          DAT_fffecb56 = bVar30;
          DAT_fffecb58 = bVar14;
          DAT_fffecb5a = bVar27;
          DAT_fffecb5c = bVar25;
          DAT_fffecb5d = bVar26;
          DAT_fffecb5e = bVar28;
          DAT_fffecb5f = bVar6;
          DAT_fffecb60 = bVar12;
          DAT_fffecb61 = bVar13;
          DAT_fffecb62 = bVar11;
          DAT_fffecb63 = bVar29;
          return;
        }
        if ((!bVar4) && (bVar18)) {
          *param_16 = 0x10;
          DAT_fffecb54 = bVar2;
          DAT_fffecb56 = bVar30;
          DAT_fffecb58 = bVar14;
          DAT_fffecb5a = bVar27;
          DAT_fffecb5c = bVar25;
          DAT_fffecb5d = bVar26;
          DAT_fffecb5e = bVar28;
          DAT_fffecb5f = bVar6;
          DAT_fffecb60 = bVar12;
          DAT_fffecb61 = bVar13;
          DAT_fffecb62 = bVar11;
          DAT_fffecb63 = bVar29;
          return;
        }
        *param_16 = 9;
        DAT_fffecb54 = bVar2;
        DAT_fffecb56 = bVar30;
        DAT_fffecb58 = bVar14;
        DAT_fffecb5a = bVar27;
        DAT_fffecb5c = bVar25;
        DAT_fffecb5d = bVar26;
        DAT_fffecb5e = bVar28;
        DAT_fffecb5f = bVar6;
        DAT_fffecb60 = bVar12;
        DAT_fffecb61 = bVar13;
        DAT_fffecb62 = bVar11;
        DAT_fffecb63 = bVar29;
        return;
      }
    }
    *param_16 = 6;
  }
  DAT_fffecb5a = bVar27;
  DAT_fffecb63 = bVar29;
  DAT_fffecb58 = bVar14;
  DAT_fffecb56 = bVar30;
  DAT_fffecb54 = bVar2;
  DAT_fffecb5f = bVar6;
  DAT_fffecb5e = bVar28;
  DAT_fffecb62 = bVar11;
  DAT_fffecb5d = bVar26;
  DAT_fffecb5c = bVar25;
  DAT_fffecb61 = bVar13;
  DAT_fffecb60 = bVar12;
  return;
}

