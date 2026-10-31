
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d9d40(char param_1,uint param_2,uint param_3,char param_4,uint param_5,ushort param_6,
                 byte param_7,char param_8,uint param_9,char param_10,uint param_11,short *param_12,
                 undefined2 *param_13,byte *param_14,undefined1 *param_15,undefined1 *param_16,
                 undefined1 *param_17,undefined1 *param_18,undefined1 *param_19,undefined1 *param_20
                 ,undefined2 *param_21,undefined1 *param_22,short *param_23)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  short sVar7;
  undefined *puVar5;
  undefined1 *puVar6;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  uVar1 = LK_133BCC((uint)&T_02EE74,param_5 & 0xffff);
  *param_18 = (char)uVar1;
  uVar2 = LK_133BCC((uint)&T_02EE80,(uint)param_6);
  *param_19 = (char)uVar2;
  if (param_8 == '\0') {
    uVar3 = LK_135A74((uint)&T_02EE60,param_2 & 0xff,param_3 & 0xffff);
  }
  else {
    uVar3 = LK_133B38((uint)&T_02EE54,param_2 & 0xff);
  }
  iVar10 = (uVar3 & 0xff) * 0x100;
  *param_13 = (short)iVar10;
  if (param_8 == '\0') {
    uVar3 = LK_133BCC((uint)&T_02EE8C,param_9 & 0xffff);
  }
  else {
    uVar3 = LK_133BCC((uint)&T_02EE98,param_9 & 0xffff);
  }
  *param_22 = (char)uVar3;
  iVar8 = (uint)param_6 - (uint)_DAT_fffecfc6;
  sVar7 = 0x7fff;
  if ((iVar8 < 0x8000) && (sVar7 = (short)iVar8, iVar8 < -0x8000)) {
    sVar7 = -0x8000;
  }
  uVar9 = (uint)sVar7;
  if ((int)uVar9 < 0) {
    uVar9 = -uVar9;
    if ((int)uVar9 < 0) {
      uVar9 = 0;
    }
  }
  else if ((int)uVar9 < 0) {
    uVar9 = 0;
  }
  *param_21 = (short)uVar9;
  uVar9 = LK_133BCC((uint)&T_02EEA4,uVar9);
  *param_20 = (char)uVar9;
  uVar1 = (uVar3 & 0xff) * ((uVar9 & 0xff) * (uVar2 & 0xff) * ((uVar1 & 0xff) * 0x1a >> 8) >> 8) >>
          8;
  if ((DAT_fffecfcb <= param_7) && ((DAT_fffecfca != '\0' || (param_4 == '\0')))) {
    param_7 = DAT_fffecfcb;
  }
  uVar2 = LK_135798((uint)&T_02EEB0,param_11 & 0xff,(int)(char)param_7);
  uVar3 = LK_133B38((uint)&T_02EEC4,uVar2 & 0xff);
  *param_16 = (char)uVar3;
  *param_15 = (char)uVar2;
  *param_14 = param_7;
  uVar9 = 0;
  if (param_1 == '\0') {
    uVar9 = (uint)_DAT_fffecfc8;
  }
  uVar4 = LK_133BCC((uint)&T_02EED0,uVar9);
  *param_17 = (char)uVar4;
  iVar8 = (uVar4 & 0xff) * (uVar3 & 0xff);
  uVar3 = (((uint)(iVar10 * iVar8) >> 0x10) - ((uint)(iVar8 * 5) >> 7)) + 0xa00 & 0xffff;
  sVar7 = (short)((int)uVar3 >> 1) - (short)((int)(uint)_DAT_fffecfc4 >> 1);
  if (sVar7 < 0x7b00) {
    sVar7 = sVar7 + 0x500;
  }
  else {
    sVar7 = 0x7fff;
  }
  iVar10 = (int)sVar7;
  if (iVar10 < 0x500) {
    puVar6 = &LAB_00001400 + iVar10 * -2;
    if ((int)puVar6 < (int)&DAT_00010000) {
      puVar5 = (undefined *)((uint)puVar6 & 0xffff);
      if ((int)puVar6 < 0) {
        puVar5 = (undefined *)0x0;
      }
    }
    else {
      puVar5 = &DAT_0000ffff;
    }
  }
  else {
    puVar5 = (undefined *)(iVar10 * 2 & 0xffff);
    if (iVar10 * 2 < 0) {
      puVar5 = (undefined *)0x0;
    }
  }
  iVar10 = (uVar1 * (int)puVar5 >> 0xd) - (uVar1 * 5 >> 4);
  uVar1 = 0xffffffff;
  if ((iVar10 < (int)&UNK_0000f600) && (uVar1 = 0, -0xa01 < iVar10)) {
    uVar1 = iVar10 + 0xa00;
  }
  if (_DAT_fffecfc4 < uVar3) {
    puVar5 = (undefined *)((uint)_DAT_fffecfc4 + (uVar1 & 0xffff));
    if (&DAT_000109ff < puVar5) {
LAB_000da038:
      _DAT_fffecfc4 = -1;
      goto LAB_000da03a;
    }
    if ((undefined *)((int)&DAT_000009fe + 1) < puVar5) {
      _DAT_fffecfc4 = (short)puVar5 + -0xa00;
      goto LAB_000da03a;
    }
  }
  else {
    iVar10 = (uint)_DAT_fffecfc4 - (uVar1 & 0xffff);
    if ((int)&DAT_0000f5ff < iVar10) goto LAB_000da038;
    if (-0xa01 < iVar10) {
      _DAT_fffecfc4 = (short)iVar10 + 0xa00;
      goto LAB_000da03a;
    }
  }
  _DAT_fffecfc4 = 0;
LAB_000da03a:
  if (((DAT_fffecfcd == '\0') && (param_4 != '\0')) ||
     ((param_4 != '\0' && ((DAT_fffecfcc == '\x03' && (param_10 == '\x01')))))) {
    _DAT_fffecfc4 = (ushort)((uVar2 & 0xff) << 8);
  }
  *param_12 = _DAT_fffecfc4;
  *param_23 = (short)uVar9;
  if (param_1 == '\0') {
    if ((undefined *)(uVar9 & 0xffff) < &DAT_0000ffff) {
      _DAT_fffecfc8 = (short)uVar9 + 1;
    }
    else {
      _DAT_fffecfc8 = -1;
    }
  }
  else {
    _DAT_fffecfc8 = 0;
  }
  DAT_fffecfcd = param_4;
  DAT_fffecfcc = param_10;
  _DAT_fffecfc6 = param_6;
  DAT_fffecfcb = param_7;
  DAT_fffecfca = param_4;
  return;
}

