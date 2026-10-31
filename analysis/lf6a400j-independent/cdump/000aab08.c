
/* WARNING: Removing unreachable block (ram,0x000aab7e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000aab08(char param_1,ushort param_2,ushort param_3,ushort param_4,uint param_5,
                 uint param_6,uint param_7,char param_8,uint param_9,ushort param_10,
                 ushort *param_11,char *param_12,ushort *param_13,ushort *param_14,ushort *param_15,
                 char *param_16,undefined1 *param_17)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  char cVar5;
  uint uVar6;
  uint p2;
  undefined *puVar7;
  byte bVar8;
  ushort uVar9;
  uint uVar10;
  ushort uStack_30;
  undefined *puStack_2c;
  
  bVar1 = DAT_fffec491 <= DAT_fffec492;
  if (bVar1) {
    if ((199 < param_4) || (DAT_fffec486 = '\x01', param_2 < param_3)) {
      DAT_fffec486 = DAT_fffec490;
    }
    DAT_fffec490 = DAT_fffec486;
    if (param_1 != '\0') {
      DAT_fffec486 = '\0';
      DAT_fffec490 = DAT_fffec486;
    }
  }
  uVar9 = 0;
  if (DAT_fffec486 == '\0') {
    _DAT_fffec48e = 0;
  }
  else {
    uVar9 = _DAT_fffec48e;
    if (_DAT_fffec48e == 0xffff) {
      _DAT_fffec48e = -1;
    }
    else {
      _DAT_fffec48e = _DAT_fffec48e + 1;
    }
  }
  if (bVar1) {
    uVar6 = param_5 & 0xff;
    p2 = param_6 & 0xffff;
    uVar2 = LK_1361C8((uint)&T_02DD00,uVar6,p2);
    uVar4 = _DAT_fffec48a;
    uVar10 = (uint)uVar9;
    if ((uVar2 & 0xffff) <= uVar10) {
      uVar3 = LK_1361C8((uint)&T_02DD50,uVar6,p2);
      uVar4 = (ushort)((uint)uVar4 * (uVar3 & 0xffff) >> 0x10);
    }
    uVar3 = LK_1361C8((uint)&T_02DD3C,uVar6,p2);
    if (((uVar3 & 0xffff) <= uVar10) && (uVar10 < (uVar2 & 0xffff))) {
      uVar2 = LK_1361C8((uint)&T_02DD28,uVar6,p2);
      puStack_2c = (undefined *)(uVar2 & 0xffff) + (short)_DAT_fffec48a;
      uStack_30 = (ushort)puStack_2c;
      puStack_2c = (undefined *)((uint)puStack_2c & 0xffff);
      if (puStack_2c < (undefined *)(uVar2 & 0xffff)) {
        uStack_30 = 0xffff;
        puStack_2c = &DAT_0000ffff;
      }
      uVar2 = LK_1361C8((uint)&T_02DD14,uVar6,p2);
      uVar6 = LK_133F40((uint)&T_02DD64,param_7 & 0xffff);
      puVar7 = (undefined *)((uVar6 & 0xffff) + (uVar2 & 0xffff));
      if (&DAT_0000ffff < puVar7) {
        puVar7 = &DAT_0000ffff;
      }
      uVar4 = (ushort)puVar7;
      if (puStack_2c <= (undefined *)((uint)puVar7 & 0xffff)) {
        uVar4 = uStack_30;
      }
    }
    _DAT_fffec480 = uVar4;
    _DAT_fffec48a = uVar4;
    if (param_1 != '\0') {
      _DAT_fffec480 = 0;
      _DAT_fffec48a = _DAT_fffec480;
    }
  }
  *param_14 = _DAT_fffec480;
  if (bVar1) {
    DAT_fffec488 = param_1 == '\0';
    param_6 = param_6 & 0xffff;
    if (DAT_fffec493 == '\0') {
      uVar4 = 0x22b9;
    }
    else {
      uVar4 = 0x2207;
    }
    DAT_fffec493 = uVar4 <= param_10;
    if ((!(bool)DAT_fffec488) || (cVar5 = '\x01', param_2 < param_3)) {
      cVar5 = DAT_fffec494;
    }
    if (param_1 != '\0') {
      cVar5 = '\0';
    }
    DAT_fffec487 = cVar5;
    if ((bool)DAT_fffec493) {
      uVar2 = FUN_0016bc68(&DAT_00014542,param_6);
    }
    else if (param_8 == '\0') {
      uVar2 = LK_1361C8((uint)&T_02DD84,param_5 & 0xff,param_6);
    }
    else {
      uVar2 = LK_1361C8((uint)&T_02DD70,param_5 & 0xff,param_6);
    }
    uVar2 = (uint)_DAT_fffec48c * (uVar2 & 0xffff) >> 0x10;
    if ((cVar5 == '\0') ||
       (uVar6 = LK_1361C8((uint)&T_02DDC0,param_5 & 0xff,param_9 & 0xffff),
       (uint)param_4 < (uVar6 & 0xffff))) {
      uVar2 = (uint)(short)_DAT_fffec48c;
    }
    if (param_1 != '\0') {
      if (param_8 == '\0') {
        uVar2 = LK_1361C8((uint)&T_02DDAC,param_5 & 0xff,param_6);
      }
      else {
        uVar2 = LK_1361C8((uint)&T_02DD98,param_5 & 0xff,param_6);
      }
    }
    _DAT_fffec482 = (ushort)uVar2;
    _DAT_fffec484 = _DAT_fffec482;
    _DAT_fffec48c = _DAT_fffec482;
    DAT_fffec494 = cVar5;
    if ((uVar2 & 0xffff) <= (uint)_DAT_fffec480) {
      _DAT_fffec484 = _DAT_fffec480;
    }
  }
  *param_15 = _DAT_fffec482;
  *param_16 = DAT_fffec487;
  *param_17 = DAT_fffec488;
  *param_11 = _DAT_fffec484;
  *param_13 = uVar9;
  *param_12 = DAT_fffec486;
  bVar8 = 0;
  if (!bVar1) {
    bVar8 = DAT_fffec492;
  }
  if (bVar8 == 0xff) {
    DAT_fffec492 = -1;
  }
  else {
    DAT_fffec492 = bVar8 + 1;
  }
  DAT_fffec491 = 4;
  return;
}

