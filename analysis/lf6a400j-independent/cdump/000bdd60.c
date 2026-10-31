
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000bdd60(uint param_1,uint param_2,undefined1 param_3,byte param_4,char param_5,
                 char param_6,char param_7,ushort param_8,uint param_9,uint param_10,uint param_11,
                 uint param_12,uint param_13,char param_14,undefined1 *param_15,ushort *param_16,
                 ushort *param_17)

{
  bool bVar1;
  ushort uVar6;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar7;
  char cVar8;
  int iVar9;
  undefined1 *p1;
  undefined1 uVar10;
  short sVar12;
  undefined *puVar11;
  ushort uStack_30;
  
  p1 = (undefined1 *)(param_11 & 0xffff);
  if (p1 <= &LAB_00005000) {
    param_9 = param_9 & 0xffff;
    uVar6 = 0;
    if (((param_8 & 0xff) == 3) && (uVar6 = _DAT_fffec906 + 1, uVar6 < _DAT_fffec906)) {
      uVar6 = 0xffff;
    }
    bVar1 = false;
    if ((DAT_fffec90c == 4) && (param_4 == 1)) {
      bVar1 = true;
    }
    cVar7 = '\x01';
    if (!bVar1) {
      cVar7 = DAT_fffec90a;
    }
    if (param_4 != 1) {
      cVar7 = '\0';
    }
    uStack_30 = param_8;
    if ((!bVar1) && (uStack_30 = _DAT_fffec908 + 1, (ushort)(_DAT_fffec908 + 1) < _DAT_fffec908)) {
      uStack_30 = 0xffff;
    }
    cVar8 = '\x01';
    if (!bVar1) {
      cVar8 = DAT_fffec90b;
    }
    if (cVar8 == '\0') {
      uStack_30 = _DAT_fffec908;
    }
    else if ((cVar7 == '\0') || (bVar1)) {
      uStack_30 = 0;
    }
    _DAT_fffec902 = uStack_30;
    _DAT_fffec900 = uVar6;
    DAT_fffec90a = cVar7;
    if (((param_6 == '\0') || (param_7 == -1)) || (param_14 == '\0')) {
      uVar2 = LK_135BE8((uint)&T_02E6AC,(uint)p1,param_12 & 0xffff);
      uVar3 = LK_135BE8((uint)&T_02E698,param_10 & 0xffff,param_9);
      uVar4 = LK_135BE8((uint)&T_02E698,param_10 & 0xffff,param_9);
      iVar9 = (uVar3 & 0xff) * (uVar2 & 0xff) + (uVar4 & 0xff) * -0x20;
      uVar2 = 0xffffffff;
      if (iVar9 < (int)&DAT_0000e000) {
        uVar2 = iVar9 + 0x2000;
      }
      puVar11 = (undefined *)((param_13 & 0xff) * 0x100 + (uVar2 & 0xffff));
      uVar10 = 0x7f;
      if (puVar11 < &DAT_0000c000) {
        uVar10 = (undefined1)((ushort)((short)puVar11 + -0x4000) >> 8);
      }
    }
    else {
      uVar2 = LK_1397EC((uint)&T_02E648,param_1,param_9);
      uVar3 = LK_137474((uint)&T_02E670,param_2,param_9);
      uVar4 = LK_137688((uint)&T_02E6C0,(int)(short)uVar6,param_9);
      uVar5 = LK_137688((uint)&T_02E6E8,(int)(short)uStack_30,param_9);
      sVar12 = (short)(char)uVar5 + (short)(char)uVar2 + (short)(char)uVar3 + (short)(char)uVar4;
      uVar10 = 0x7f;
      if ((sVar12 < 0x80) && (uVar10 = (undefined1)sVar12, sVar12 < -0x80)) {
        uVar10 = 0x80;
      }
    }
    if (((param_6 != '\0') && (param_7 != -1)) && (param_14 == '\0')) {
      uVar2 = LK_1397EC((uint)&T_02E65C,param_1,param_9);
      uVar3 = LK_137474((uint)&T_02E684,param_2,param_9);
      uVar4 = LK_137688((uint)&T_02E6D4,(int)(short)uVar6,param_9);
      uVar5 = LK_137688((uint)&T_02E6FC,(int)(short)uStack_30,param_9);
      sVar12 = (short)(char)uVar5 + (short)(char)uVar2 + (short)(char)uVar3 + (short)(char)uVar4;
      uVar10 = 0x7f;
      if ((sVar12 < 0x80) && (uVar10 = (undefined1)sVar12, sVar12 < -0x80)) {
        uVar10 = 0x80;
      }
    }
    _DAT_fffec906 = uVar6;
    DAT_fffec90b = cVar8;
    DAT_fffec90c = param_4;
    if (param_5 == '\0') {
      DAT_fffec904 = param_3;
      if (param_4 < 2) {
        DAT_fffec904 = uVar10;
      }
    }
    else {
      DAT_fffec904 = 0;
    }
  }
  *param_15 = DAT_fffec904;
  *param_16 = _DAT_fffec900;
  if (p1 <= &LAB_00005000) {
    _DAT_fffec908 = _DAT_fffec902;
  }
  if (DAT_fffec90d == '\0') {
    _DAT_fffec908 = 0xffff;
  }
  *param_17 = _DAT_fffec908;
  DAT_fffec90d = 1;
  return;
}

