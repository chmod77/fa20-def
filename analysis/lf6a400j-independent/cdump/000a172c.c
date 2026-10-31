
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a172c(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4,ushort param_5,
                 byte param_6,byte param_7,short param_8,undefined2 *param_9,uint param_10,
                 ushort *param_11,char param_12,char param_13,char param_14,char param_15,
                 char param_16,char param_17,char param_18,char param_19,undefined4 param_20,
                 char param_21,undefined2 *param_22,undefined2 *param_23,ushort *param_24,
                 undefined4 param_25,undefined4 param_26,undefined4 param_27,undefined4 param_28,
                 undefined4 param_29,char *param_30,undefined4 param_31)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  short sVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  ushort local_118 [8];
  ushort auStack_108 [32];
  ushort auStack_c8 [33];
  undefined2 uStack_86;
  undefined2 uStack_84;
  undefined2 uStack_82;
  ushort auStack_80 [4];
  undefined4 uStack_78;
  uint local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  char cStack_64;
  char cStack_60;
  short sStack_5c;
  byte bStack_58;
  ushort uStack_54;
  bool bStack_50;
  undefined1 uStack_4c;
  char cStack_48;
  char cStack_44;
  bool bStack_40;
  byte bStack_3c;
  char cStack_38;
  char cStack_34;
  bool bStack_30;
  byte bStack_2c;
  undefined1 *local_28;
  
  local_28 = &DAT_fffec1e0;
  uStack_70 = param_3;
  local_74 = param_2;
  uStack_78 = param_1;
  uVar13 = param_4 & 0xff;
  uStack_6c = param_4;
  iVar7 = (int)param_8;
  uStack_68 = 1;
  if (param_6 < 0x80) {
    iVar12 = (int)(short)(0x80 - (ushort)param_6);
  }
  else {
    iVar12 = (int)(char)(param_6 + 0x80);
  }
  cStack_64 = (char)iVar12;
  if (iVar12 < 0) {
    cStack_64 = '\0';
  }
  if (param_7 < 0x80) {
    iVar12 = (int)(short)(0x80 - (ushort)param_7);
  }
  else {
    iVar12 = (int)(char)(param_7 + 0x80);
  }
  cStack_60 = (char)iVar12;
  if (iVar12 < 0) {
    cStack_60 = '\0';
  }
  if (iVar7 < 0) {
    iVar7 = -iVar7;
  }
  sStack_5c = (short)iVar7;
  if (iVar7 < 0) {
    sStack_5c = 0;
  }
  uVar6 = 1;
  if (1 < (param_2 & 0xff)) {
    uVar6 = param_2;
  }
  if ((uVar6 & 0xff) < 5) {
    bStack_58 = (byte)uVar6;
  }
  else {
    bStack_58 = 4;
  }
  uVar8 = param_2 + 1;
  uVar6 = uVar8 & 0xff;
  if ((uVar8 & 0xff) < (param_2 & 0xff)) {
    uVar8 = 0xff;
    uVar6 = uVar8;
  }
  if (5 < uVar6) {
    uVar8 = 5;
  }
  uVar8 = uVar8 & 0xff;
  uVar9 = (ushort)uVar8;
  if (uVar8 == 1) {
    uVar9 = 0;
    uStack_54 = 0;
  }
  else if (uVar8 == 2) {
    uVar6 = LK_135164((uint)&T_02DA50,param_10 & 0xff);
    uStack_54 = (ushort)uVar6;
    uVar9 = (ushort)uVar6;
  }
  else if (uVar8 == 3) {
    uVar6 = LK_135164((uint)&T_02DA5C,param_10 & 0xff);
    uStack_54 = (ushort)uVar6;
    uVar9 = (ushort)uVar6;
  }
  else if (uVar8 == 4) {
    uVar6 = LK_135164((uint)&T_02DA68,param_10 & 0xff);
    uStack_54 = (ushort)uVar6;
    uVar9 = (ushort)uVar6;
  }
  else if (uVar8 == 5) {
    uVar6 = LK_135164((uint)&T_02DA74,param_10 & 0xff);
    uStack_54 = (ushort)uVar6;
    uVar9 = (ushort)uVar6;
  }
  *param_24 = uVar9;
  bStack_50 = 0x8500 < param_5;
  uStack_4c = 0;
  cStack_44 = '\x01';
  if (!bStack_50) {
    cStack_44 = DAT_fffec26f;
  }
  if ((((param_15 != '\0') || (param_14 != '\0')) || (param_13 != '\0')) || (param_12 != '\0')) {
    DAT_fffec268 = '\x01';
  }
  bVar2 = false;
  if (((param_16 != '\0') && (param_17 != '\0')) && ((param_18 != '\0' && (param_19 != '\0')))) {
    bVar2 = true;
  }
  if (bVar2) {
    cStack_48 = DAT_fffec268;
  }
  else {
    cStack_48 = '\0';
  }
  *param_30 = cStack_48;
  if (DAT_fffec266 != '\0') {
    cStack_44 = '\0';
  }
  if (cStack_44 == '\0') {
    DAT_fffec26b = '\0';
  }
  else {
    if (DAT_fffec26b == '\0') {
      DAT_fffec273 = 0;
      DAT_fffec26b = '\x01';
    }
    DAT_fffec263 = DAT_fffec273;
    DAT_fffec262 = DAT_fffec273 < 0x32;
    DAT_fffec273 = DAT_fffec273 + 1;
    if (DAT_fffec273 == 0) {
      DAT_fffec273 = 0xff;
    }
  }
  cVar11 = '\0';
  if (cStack_44 != '\0') {
    cVar11 = DAT_fffec262;
  }
  bStack_40 = true;
  if ((!bStack_50) && (cVar11 == '\0')) {
    bStack_40 = false;
  }
  *(bool *)param_25 = bStack_40;
  bStack_3c = 0;
  if (cStack_44 != '\0') {
    bStack_3c = DAT_fffec263;
  }
  if ((bStack_50) || (DAT_fffec270 != '\0')) {
    DAT_fffec269 = '\0';
  }
  cStack_38 = DAT_fffec269;
  if (DAT_fffec269 == '\0') {
    DAT_fffec274 = '\0';
  }
  else {
    if (DAT_fffec274 == '\0') {
      DAT_fffec267 = '\0';
      DAT_fffec274 = '\x01';
    }
    DAT_fffec265 = DAT_fffec267;
    DAT_fffec264 = '\0';
    DAT_fffec267 = DAT_fffec267 + '\x01';
    if (DAT_fffec267 == '\0') {
      DAT_fffec267 = -1;
    }
  }
  cVar11 = '\0';
  if (DAT_fffec269 != '\0') {
    cVar11 = DAT_fffec264;
  }
  bVar2 = cVar11 != '\0';
  *(bool *)param_26 = bVar2;
  cStack_34 = '\0';
  if (DAT_fffec269 != '\0') {
    cStack_34 = DAT_fffec265;
  }
  bVar4 = true;
  if ((((param_12 == DAT_fffec272) && (param_13 == DAT_fffec26e)) && (param_14 == DAT_fffec271)) &&
     (param_15 == DAT_fffec26c)) {
    bVar4 = false;
  }
  *(bool *)param_31 = bVar4;
  bVar3 = uVar13 != 0;
  bVar1 = DAT_fffec26d < 0xa0;
  bStack_30 = false;
  if (((!bVar3 || !bVar1) && (uVar13 != 0)) &&
     ((cStack_64 != -1 && ((cStack_60 != -1 && (sStack_5c != -1)))))) {
    bStack_30 = true;
  }
  bVar5 = true;
  if ((((!bStack_40) && (!bVar2)) && (!bVar3 || !bVar1)) &&
     (((!bStack_30 && (!bVar4)) && (cStack_48 == '\0')))) {
    bVar5 = false;
  }
  *(bool *)param_29 = !bVar5;
  if (bVar3 && bVar1) {
    bStack_2c = 0xc0;
  }
  else if (bVar4) {
    bStack_2c = 0xff;
  }
  else if (bStack_40) {
    bStack_2c = 0xc0;
  }
  else if (bVar2) {
    bStack_2c = 0xc0;
  }
  else if (cStack_48 == '\0') {
    if (bStack_30) {
      bStack_2c = 0xc0;
    }
    else {
      bStack_2c = 0xc0;
    }
  }
  else {
    bStack_2c = 0xc0;
  }
  *(bool *)param_28 = bStack_30;
  *(bool *)param_27 = bVar3 && bVar1;
  if (uVar13 == 0) {
    DAT_fffec26d = '\0';
  }
  else {
    DAT_fffec26d = DAT_fffec26d + 1;
    if (DAT_fffec26d == '\0') {
      DAT_fffec26d = -1;
    }
  }
  auStack_c8[0] = 3000;
  auStack_c8[1] = 3000;
  auStack_c8[2] = 3000;
  auStack_c8[3] = 3000;
  auStack_c8[4] = 3000;
  auStack_c8[5] = 3000;
  auStack_c8[6] = 3000;
  auStack_c8[7] = 3000;
  auStack_c8[8] = 3000;
  auStack_c8[9] = 3000;
  auStack_c8[10] = 3000;
  auStack_c8[0xb] = 3000;
  auStack_c8[0xc] = 3000;
  auStack_c8[0xd] = 3000;
  auStack_c8[0xe] = 3000;
  auStack_c8[0xf] = 3000;
  auStack_c8[0x10] = 3000;
  auStack_c8[0x11] = 3000;
  auStack_c8[0x12] = 3000;
  auStack_c8[0x13] = 3000;
  auStack_c8[0x14] = 3000;
  auStack_c8[0x15] = 3000;
  auStack_c8[0x16] = 3000;
  auStack_c8[0x17] = 3000;
  auStack_c8[0x18] = 3000;
  auStack_c8[0x19] = 3000;
  auStack_c8[0x1a] = 3000;
  auStack_c8[0x1b] = 3000;
  auStack_c8[0x1c] = 3000;
  auStack_c8[0x1d] = 3000;
  auStack_c8[0x1e] = 3000;
  auStack_c8[0x1f] = 3000;
  auStack_c8[0x20] = *param_9;
  uStack_86 = param_9[1];
  uStack_84 = param_9[2];
  uStack_82 = param_9[3];
  auStack_80[0] = *param_11;
  auStack_80[1] = param_11[1];
  auStack_80[2] = param_11[2];
  auStack_80[3] = param_11[3];
  if (DAT_fffec26a == '\0') {
    for (DAT_fffec260 = 0; DAT_fffec260 < 4; DAT_fffec260 = DAT_fffec260 + 1) {
      for (DAT_fffec261 = 0; DAT_fffec261 < 8; DAT_fffec261 = DAT_fffec261 + 1) {
        *(ushort *)(&DAT_fffec220 + ((uint)DAT_fffec260 * 8 + (uint)DAT_fffec261) * 2) =
             auStack_c8[(uint)DAT_fffec260 * 8 + (uint)DAT_fffec261];
        *(ushort *)(&DAT_fffec1e0 + ((uint)DAT_fffec260 * 8 + (uint)DAT_fffec261) * 2) =
             auStack_c8[(uint)DAT_fffec260 * 8 + (uint)DAT_fffec261];
      }
    }
  }
  if (param_21 == '\0') {
    uStack_6c._3_1_ = (char)param_4;
    if (((char)uStack_6c != '\0') &&
       (((uint)auStack_c8[(short)(bStack_58 - 1) + 0x20] <
         (uint)auStack_80[(short)(bStack_58 - 1)] * 0xffff >> 0x10 || (bStack_40 != false)))) {
      sVar10 = (ushort)bStack_58 * 8 + -8;
      for (DAT_fffec261 = 0; DAT_fffec261 < 8; DAT_fffec261 = DAT_fffec261 + 1) {
        *(uint *)((short)(sVar10 + (ushort)DAT_fffec261) * 4 + -0x13ea0) =
             ((0x100 - bStack_2c & 0xffff) *
              (uint)auStack_108[(short)(sVar10 + (ushort)DAT_fffec261)] & 0xffffff) +
             (uint)bStack_2c * (uint)local_118[DAT_fffec261];
        *(short *)(&DAT_fffec220 + (short)(sVar10 + (ushort)DAT_fffec261) * 2) =
             (short)((uint)*(undefined4 *)((short)(sVar10 + (ushort)DAT_fffec261) * 4 + -0x13ea0) >>
                    8);
        if (*(ushort *)(&DAT_fffec220 + (short)(sVar10 + (ushort)DAT_fffec261) * 2) <= uStack_54) {
          *(ushort *)(&DAT_fffec220 + (short)(sVar10 + (ushort)DAT_fffec261) * 2) = uStack_54;
        }
        if (*(ushort *)(&DAT_fffec1e0 + (short)(sVar10 + (ushort)DAT_fffec261) * 2) <=
            *(ushort *)(&DAT_fffec220 + (short)(sVar10 + (ushort)DAT_fffec261) * 2)) {
          *(undefined2 *)(&DAT_fffec1e0 + (short)(sVar10 + (ushort)DAT_fffec261) * 2) =
               *(undefined2 *)(&DAT_fffec220 + (short)(sVar10 + (ushort)DAT_fffec261) * 2);
        }
        if (2999 < *(ushort *)(&DAT_fffec1e0 + (short)(sVar10 + (ushort)DAT_fffec261) * 2)) {
          *(undefined2 *)(&DAT_fffec1e0 + (short)(sVar10 + (ushort)DAT_fffec261) * 2) = 3000;
        }
      }
    }
  }
  else {
    for (DAT_fffec260 = 0; DAT_fffec260 < 4; DAT_fffec260 = DAT_fffec260 + 1) {
      for (DAT_fffec261 = 0; DAT_fffec261 < 8; DAT_fffec261 = DAT_fffec261 + 1) {
        *(undefined2 *)(&DAT_fffec220 + ((uint)DAT_fffec260 * 8 + (uint)DAT_fffec261) * 2) =
             *(undefined2 *)(&DAT_fffec1e0 + ((uint)DAT_fffec260 * 8 + (uint)DAT_fffec261) * 2);
      }
    }
  }
  *param_22 = _DAT_fffec220;
  param_22[1] = _DAT_fffec222;
  param_22[2] = _DAT_fffec224;
  param_22[3] = _DAT_fffec226;
  param_22[4] = _DAT_fffec228;
  param_22[5] = _DAT_fffec22a;
  param_22[6] = _DAT_fffec22c;
  param_22[7] = _DAT_fffec22e;
  param_22[8] = _DAT_fffec230;
  param_22[9] = _DAT_fffec232;
  param_22[10] = _DAT_fffec234;
  param_22[0xb] = _DAT_fffec236;
  param_22[0xc] = _DAT_fffec238;
  param_22[0xd] = _DAT_fffec23a;
  param_22[0xe] = _DAT_fffec23c;
  param_22[0xf] = _DAT_fffec23e;
  param_22[0x10] = _DAT_fffec240;
  param_22[0x11] = _DAT_fffec242;
  param_22[0x12] = _DAT_fffec244;
  param_22[0x13] = _DAT_fffec246;
  param_22[0x14] = _DAT_fffec248;
  param_22[0x15] = _DAT_fffec24a;
  param_22[0x16] = _DAT_fffec24c;
  param_22[0x17] = _DAT_fffec24e;
  param_22[0x18] = _DAT_fffec250;
  param_22[0x19] = _DAT_fffec252;
  param_22[0x1a] = _DAT_fffec254;
  param_22[0x1b] = _DAT_fffec256;
  param_22[0x1c] = _DAT_fffec258;
  param_22[0x1d] = _DAT_fffec25a;
  param_22[0x1e] = _DAT_fffec25c;
  param_22[0x1f] = _DAT_fffec25e;
  *param_23 = _DAT_fffec1e0;
  param_23[1] = _DAT_fffec1e2;
  param_23[2] = _DAT_fffec1e4;
  param_23[3] = _DAT_fffec1e6;
  param_23[4] = _DAT_fffec1e8;
  param_23[5] = _DAT_fffec1ea;
  param_23[6] = _DAT_fffec1ec;
  param_23[7] = _DAT_fffec1ee;
  param_23[8] = _DAT_fffec1f0;
  param_23[9] = _DAT_fffec1f2;
  param_23[10] = _DAT_fffec1f4;
  param_23[0xb] = _DAT_fffec1f6;
  param_23[0xc] = _DAT_fffec1f8;
  param_23[0xd] = _DAT_fffec1fa;
  param_23[0xe] = _DAT_fffec1fc;
  param_23[0xf] = _DAT_fffec1fe;
  param_23[0x10] = _DAT_fffec200;
  param_23[0x11] = _DAT_fffec202;
  param_23[0x12] = _DAT_fffec204;
  param_23[0x13] = _DAT_fffec206;
  param_23[0x14] = _DAT_fffec208;
  param_23[0x15] = _DAT_fffec20a;
  param_23[0x16] = _DAT_fffec20c;
  param_23[0x17] = _DAT_fffec20e;
  param_23[0x18] = _DAT_fffec210;
  param_23[0x19] = _DAT_fffec212;
  param_23[0x1a] = _DAT_fffec214;
  param_23[0x1b] = _DAT_fffec216;
  param_23[0x1c] = _DAT_fffec218;
  param_23[0x1d] = _DAT_fffec21a;
  param_23[0x1e] = _DAT_fffec21c;
  param_23[0x1f] = _DAT_fffec21e;
  DAT_fffec26a = 1;
  DAT_fffec26f = cStack_44;
  DAT_fffec268 = cStack_48;
  DAT_fffec266 = 0;
  if ((0x31 < bStack_3c) && (!bStack_50)) {
    DAT_fffec266 = 1;
  }
  DAT_fffec270 = 1;
  DAT_fffec272 = param_12;
  DAT_fffec26e = param_13;
  DAT_fffec271 = param_14;
  DAT_fffec26c = param_15;
  _DAT_fffec120 = _DAT_fffec1e0;
  _DAT_fffec122 = _DAT_fffec1e2;
  _DAT_fffec124 = _DAT_fffec1e4;
  _DAT_fffec126 = _DAT_fffec1e6;
  _DAT_fffec128 = _DAT_fffec1e8;
  _DAT_fffec12a = _DAT_fffec1ea;
  _DAT_fffec12c = _DAT_fffec1ec;
  _DAT_fffec12e = _DAT_fffec1ee;
  _DAT_fffec130 = _DAT_fffec1f0;
  _DAT_fffec132 = _DAT_fffec1f2;
  _DAT_fffec134 = _DAT_fffec1f4;
  _DAT_fffec136 = _DAT_fffec1f6;
  _DAT_fffec138 = _DAT_fffec1f8;
  _DAT_fffec13a = _DAT_fffec1fa;
  _DAT_fffec13c = _DAT_fffec1fc;
  _DAT_fffec13e = _DAT_fffec1fe;
  _DAT_fffec140 = _DAT_fffec200;
  _DAT_fffec142 = _DAT_fffec202;
  _DAT_fffec144 = _DAT_fffec204;
  _DAT_fffec146 = _DAT_fffec206;
  _DAT_fffec148 = _DAT_fffec208;
  _DAT_fffec14a = _DAT_fffec20a;
  _DAT_fffec14c = _DAT_fffec20c;
  _DAT_fffec14e = _DAT_fffec20e;
  _DAT_fffec150 = _DAT_fffec210;
  _DAT_fffec152 = _DAT_fffec212;
  _DAT_fffec154 = _DAT_fffec214;
  _DAT_fffec156 = _DAT_fffec216;
  _DAT_fffec158 = _DAT_fffec218;
  _DAT_fffec15a = _DAT_fffec21a;
  _DAT_fffec15c = _DAT_fffec21c;
  _DAT_fffec15e = _DAT_fffec21e;
  return;
}

