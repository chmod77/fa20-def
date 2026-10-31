
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007fb7c(byte param_1,char param_2,char param_3,char param_4,short param_5,char param_6,
                 char param_7,uint param_8,ushort param_9,byte param_10,ushort param_11,
                 byte param_12,char param_13,char *param_14,undefined4 param_15,ushort *param_16,
                 ushort *param_17,ushort *param_18,ushort *param_19,ushort *param_20,
                 ushort *param_21,byte *param_22,undefined4 param_23,byte *param_24,
                 undefined1 *param_25)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  byte bVar10;
  char cVar11;
  undefined1 uVar12;
  ushort local_80;
  ushort uStack_7e;
  ushort uStack_7c;
  ushort uStack_7a;
  ushort uStack_78;
  ushort uStack_76;
  ushort uStack_74;
  ushort uStack_72;
  ushort uStack_70;
  ushort uStack_6e;
  ushort uStack_68;
  ushort uStack_66;
  byte bStack_38;
  ushort uStack_34;
  ushort uStack_30;
  ushort uStack_28;
  ushort extraout_r0;
  
  uVar4 = LK_133F40((uint)&T_02C20C,param_8 & 0xffff);
  extraout_r0 = (ushort)uVar4;
  if (param_10 < 7) {
    if (param_10 == 0) {
      param_10 = 1;
    }
  }
  else {
    param_10 = 6;
  }
  bVar1 = false;
  if ((((param_3 != '\0') && (param_4 == '\0')) && (param_5 < 0x140)) && (param_6 == '\0')) {
    bVar1 = true;
  }
  bVar3 = false;
  if ((bVar1) && (param_1 != 0)) {
    bVar3 = true;
  }
  *(bool *)param_23 = bVar1;
  if (param_10 == 1) {
    param_10 = 1;
  }
  else if (param_10 == 2) {
    param_10 = 2;
  }
  else if (param_10 == 3) {
    param_10 = 3;
  }
  else if (param_10 == 4) {
    param_10 = 4;
  }
  else if (param_10 == 5) {
    param_10 = 5;
  }
  else if (param_10 == 6) {
    param_10 = 6;
  }
  if (0x1e < param_11) {
    param_10 = 7;
  }
  *param_24 = param_10;
  uVar12 = 1;
  if (((0x27ff < param_9) && (uVar12 = 2, 0x3bff < param_9)) &&
     ((uVar12 = 3, 0x4fff < param_9 &&
      ((uVar12 = 4, 0x63ff < param_9 && (uVar12 = 6, param_9 < 0x7800)))))) {
    uVar12 = 5;
  }
  *param_25 = uVar12;
  uVar4 = (uint)uVar12;
  if (param_10 == 1) {
    uVar5 = LK_135ED8((uint)&T_02C218,uVar4,1);
    uVar6 = LK_135ED8((uint)&T_02C218,uVar4,2);
    uVar7 = LK_135ED8((uint)&T_02C218,uVar4,3);
    uVar8 = LK_135ED8((uint)&T_02C218,uVar4,4);
    local_80 = (ushort)uVar5;
    uStack_7e = (ushort)uVar6;
    uStack_7c = (ushort)uVar7;
    uStack_7a = (ushort)uVar8;
  }
  else if (param_10 == 2) {
    uVar5 = LK_135ED8((uint)&T_02C22C,uVar4,1);
    uVar6 = LK_135ED8((uint)&T_02C22C,uVar4,2);
    uVar7 = LK_135ED8((uint)&T_02C22C,uVar4,3);
    uVar8 = LK_135ED8((uint)&T_02C22C,uVar4,4);
    local_80 = (ushort)uVar5;
    uStack_7e = (ushort)uVar6;
    uStack_7c = (ushort)uVar7;
    uStack_7a = (ushort)uVar8;
  }
  else if (param_10 == 3) {
    uVar5 = LK_135ED8((uint)&T_02C290,uVar4,1);
    uVar6 = LK_135ED8((uint)&T_02C290,uVar4,2);
    uVar7 = LK_135ED8((uint)&T_02C290,uVar4,3);
    uVar8 = LK_135ED8((uint)&T_02C290,uVar4,4);
    local_80 = (ushort)uVar5;
    uStack_7e = (ushort)uVar6;
    uStack_7c = (ushort)uVar7;
    uStack_7a = (ushort)uVar8;
  }
  else if (param_10 == 4) {
    uVar5 = LK_135ED8((uint)&T_02C2A4,uVar4,1);
    uVar6 = LK_135ED8((uint)&T_02C2A4,uVar4,2);
    uVar7 = LK_135ED8((uint)&T_02C2A4,uVar4,3);
    uVar8 = LK_135ED8((uint)&T_02C2A4,uVar4,4);
    local_80 = (ushort)uVar5;
    uStack_7e = (ushort)uVar6;
    uStack_7c = (ushort)uVar7;
    uStack_7a = (ushort)uVar8;
  }
  else if (param_10 == 5) {
    uVar5 = LK_135ED8((uint)&T_02C2B8,uVar4,1);
    uVar6 = LK_135ED8((uint)&T_02C2B8,uVar4,2);
    uVar7 = LK_135ED8((uint)&T_02C2B8,uVar4,3);
    uVar8 = LK_135ED8((uint)&T_02C2B8,uVar4,4);
    local_80 = (ushort)uVar5;
    uStack_7e = (ushort)uVar6;
    uStack_7c = (ushort)uVar7;
    uStack_7a = (ushort)uVar8;
  }
  else if (param_10 == 6) {
    uVar5 = LK_135ED8((uint)&T_02C2CC,uVar4,1);
    uVar6 = LK_135ED8((uint)&T_02C2CC,uVar4,2);
    uVar7 = LK_135ED8((uint)&T_02C2CC,uVar4,3);
    uVar8 = LK_135ED8((uint)&T_02C2CC,uVar4,4);
    local_80 = (ushort)uVar5;
    uStack_7e = (ushort)uVar6;
    uStack_7c = (ushort)uVar7;
    uStack_7a = (ushort)uVar8;
  }
  else if (param_10 == 7) {
    uVar5 = LK_135ED8((uint)&T_02C2E0,uVar4,1);
    uVar6 = LK_135ED8((uint)&T_02C2E0,uVar4,2);
    uVar7 = LK_135ED8((uint)&T_02C2E0,uVar4,3);
    uVar8 = LK_135ED8((uint)&T_02C2E0,uVar4,4);
    local_80 = (ushort)uVar5;
    uStack_7e = (ushort)uVar6;
    uStack_7c = (ushort)uVar7;
    uStack_7a = (ushort)uVar8;
  }
  if (param_10 == 1) {
    uVar5 = LK_135ED8((uint)&T_02C2F4,uVar4,1);
    uVar6 = LK_135ED8((uint)&T_02C2F4,uVar4,2);
    uVar7 = LK_135ED8((uint)&T_02C2F4,uVar4,3);
    uVar4 = LK_135ED8((uint)&T_02C2F4,uVar4,4);
    uStack_78 = (ushort)uVar5;
    uStack_76 = (ushort)uVar6;
    uStack_74 = (ushort)uVar7;
    uStack_72 = (ushort)uVar4;
  }
  else if (param_10 == 2) {
    uVar5 = LK_135ED8((uint)&T_02C308,uVar4,1);
    uVar6 = LK_135ED8((uint)&T_02C308,uVar4,2);
    uVar7 = LK_135ED8((uint)&T_02C308,uVar4,3);
    uVar4 = LK_135ED8((uint)&T_02C308,uVar4,4);
    uStack_78 = (ushort)uVar5;
    uStack_76 = (ushort)uVar6;
    uStack_74 = (ushort)uVar7;
    uStack_72 = (ushort)uVar4;
  }
  else if (param_10 == 3) {
    uVar5 = LK_135ED8((uint)&T_02C31C,uVar4,1);
    uVar6 = LK_135ED8((uint)&T_02C31C,uVar4,2);
    uVar7 = LK_135ED8((uint)&T_02C31C,uVar4,3);
    uVar4 = LK_135ED8((uint)&T_02C31C,uVar4,4);
    uStack_78 = (ushort)uVar5;
    uStack_76 = (ushort)uVar6;
    uStack_74 = (ushort)uVar7;
    uStack_72 = (ushort)uVar4;
  }
  else if (param_10 == 4) {
    uVar5 = LK_135ED8((uint)&T_02C240,uVar4,1);
    uVar6 = LK_135ED8((uint)&T_02C240,uVar4,2);
    uVar7 = LK_135ED8((uint)&T_02C240,uVar4,3);
    uVar4 = LK_135ED8((uint)&T_02C240,uVar4,4);
    uStack_78 = (ushort)uVar5;
    uStack_76 = (ushort)uVar6;
    uStack_74 = (ushort)uVar7;
    uStack_72 = (ushort)uVar4;
  }
  else if (param_10 == 5) {
    uVar5 = LK_135ED8((uint)&T_02C254,uVar4,1);
    uVar6 = LK_135ED8((uint)&T_02C254,uVar4,2);
    uVar7 = LK_135ED8((uint)&T_02C254,uVar4,3);
    uVar4 = LK_135ED8((uint)&T_02C254,uVar4,4);
    uStack_78 = (ushort)uVar5;
    uStack_76 = (ushort)uVar6;
    uStack_74 = (ushort)uVar7;
    uStack_72 = (ushort)uVar4;
  }
  else if (param_10 == 6) {
    uVar5 = LK_135ED8((uint)&T_02C268,uVar4,1);
    uVar6 = LK_135ED8((uint)&T_02C268,uVar4,2);
    uVar7 = LK_135ED8((uint)&T_02C268,uVar4,3);
    uVar4 = LK_135ED8((uint)&T_02C268,uVar4,4);
    uStack_78 = (ushort)uVar5;
    uStack_76 = (ushort)uVar6;
    uStack_74 = (ushort)uVar7;
    uStack_72 = (ushort)uVar4;
  }
  else if (param_10 == 7) {
    uVar5 = LK_135ED8((uint)&T_02C27C,uVar4,1);
    uVar6 = LK_135ED8((uint)&T_02C27C,uVar4,2);
    uVar7 = LK_135ED8((uint)&T_02C27C,uVar4,3);
    uVar4 = LK_135ED8((uint)&T_02C27C,uVar4,4);
    uStack_78 = (ushort)uVar5;
    uStack_76 = (ushort)uVar6;
    uStack_74 = (ushort)uVar7;
    uStack_72 = (ushort)uVar4;
  }
  if (param_13 == '\0') {
    uStack_70 = uStack_78;
    uStack_6e = uStack_76;
    uStack_7c = uStack_74;
  }
  else {
    uStack_70 = local_80;
    uStack_6e = uStack_7e;
  }
  uVar9 = extraout_r0;
  uStack_68 = extraout_r0;
  uStack_66 = extraout_r0;
  if (param_7 == '\0') {
    uStack_68 = uStack_70;
    uStack_66 = uStack_6e;
    uVar9 = uStack_7c;
  }
  uStack_30 = 0;
  if (_DAT_fffeba9e != 0) {
    uStack_30 = _DAT_fffeba9e;
  }
  bVar2 = true;
  if ((DAT_fffebaa3 <= param_12) && (DAT_fffebaa6 != '\0')) {
    bVar2 = false;
  }
  if (bVar2) {
    _DAT_fffeba94 = uStack_68;
  }
  *param_17 = _DAT_fffeba94;
  if (_DAT_fffeba94 <= _DAT_fffeba9e) {
    uStack_30 = _DAT_fffeba94;
  }
  if (bVar2) {
    _DAT_fffeba98 = uStack_66;
  }
  *param_18 = _DAT_fffeba98;
  if (bVar2) {
    _DAT_fffeba9a = uVar9;
  }
  *param_19 = _DAT_fffeba9a;
  if (((bVar2) && (_DAT_fffeba96 = extraout_r0, param_7 == '\0')) &&
     (_DAT_fffeba96 = uStack_72, param_13 != '\0')) {
    _DAT_fffeba96 = uStack_7a;
  }
  *param_20 = _DAT_fffeba96;
  if ((param_2 == '\x04') || (!bVar3)) {
    DAT_fffebaa4 = 0;
  }
  bStack_38 = DAT_fffebaa4;
  if ((bVar3) && (param_2 == '\0')) {
    bStack_38 = 1;
  }
  uStack_34 = 0;
  if ((bStack_38 != 0) && (uStack_34 = 0xffff, _DAT_fffeba9c != -1)) {
    uStack_34 = _DAT_fffeba9c + 1;
  }
  if (DAT_fffebaa9 < bStack_38) {
    uStack_34 = 1;
  }
  *param_21 = uStack_34;
  if (0x707 < uStack_34) {
    uStack_30 = 0;
  }
  if ((bVar1 < DAT_fffebaa5) ||
     (((bVar1 == false && (DAT_fffebaa2 < param_1)) || (0x707 < uStack_34)))) {
    DAT_fffebaaa = 1;
  }
  if ((param_1 == 0) || (bVar10 = DAT_fffebaaa, DAT_fffebaa8 < bStack_38)) {
    bVar10 = 0;
  }
  if (bVar10 == 0) {
    uStack_28 = 0;
  }
  else if (_DAT_fffebaa0 == -1) {
    uStack_28 = 0xffff;
  }
  else {
    uStack_28 = _DAT_fffebaa0 + 1;
  }
  if ((DAT_fffebaa7 < bVar10) && (uStack_28 = 0xffff, uStack_30 != 0xffff)) {
    uStack_28 = uStack_30 + 1;
  }
  DAT_fffebaaa = bVar10;
  *param_16 = uStack_28;
  if (uStack_28 < _DAT_fffeba96) {
    if (uStack_28 < _DAT_fffeba9a) {
      if (uStack_28 < _DAT_fffeba98) {
        cVar11 = _DAT_fffeba94 <= uStack_28;
      }
      else {
        cVar11 = '\x02';
      }
    }
    else {
      cVar11 = '\x03';
    }
  }
  else {
    cVar11 = '\x04';
  }
  *param_14 = cVar11;
  *(bool *)param_15 = cVar11 != '\0';
  *param_22 = bStack_38;
  _DAT_fffeba9c = uStack_34;
  DAT_fffebaa9 = bStack_38;
  DAT_fffebaa8 = bStack_38;
  _DAT_fffebaa0 = uStack_28;
  DAT_fffebaa2 = param_1;
  DAT_fffebaa5 = bVar1;
  DAT_fffebaa7 = bVar10;
  _DAT_fffeba9e = uStack_34;
  DAT_fffebaa3 = param_12;
  DAT_fffebaa6 = 1;
  DAT_fffebaa4 = bStack_38;
  return;
}

