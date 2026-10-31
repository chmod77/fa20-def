
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ded88(uint param_1,char param_2,uint param_3,undefined2 *param_4,uint *param_5,
                 uint *param_6,uint *param_7,uint *param_8,uint *param_9,uint *param_10)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_fffed128;
  uVar5 = param_3 & 0xff;
  if ((param_2 == '\0') && (uVar5 == 0)) {
    DAT_fffed154 = '\0';
  }
  else {
    if (DAT_fffed154 == '\0') {
      _DAT_fffed144 = 0;
      _DAT_fffed148 = 0;
      _DAT_fffed14c = 0;
      _DAT_fffed150 = 0;
      DAT_fffed154 = '\x01';
    }
    uVar6 = param_1;
    if (uVar5 != 0) {
      uVar6 = 0;
    }
    uVar7 = 0;
    if (uVar5 == 0) {
      uVar7 = _DAT_fffed144;
    }
    uVar9 = 0;
    if (uVar5 == 0) {
      uVar9 = _DAT_fffed148;
    }
    uVar8 = 0;
    if (uVar5 == 0) {
      uVar8 = _DAT_fffed14c;
    }
    _DAT_fffed13c = 0;
    if (uVar5 == 0) {
      uVar2 = uVar8 * 2 + _DAT_fffed150;
      cVar3 = (uVar8 & 0x80000000) != 0;
      if (uVar2 < _DAT_fffed150) {
        cVar3 = cVar3 + '\x01';
      }
      param_3 = uVar2 + uVar9 * 2;
      cVar3 = cVar3 + ((uVar9 & 0x80000000) != 0);
      if (param_3 < uVar2) {
        cVar3 = cVar3 + '\x01';
      }
      uVar2 = param_3 + uVar7 * 2;
      cVar3 = cVar3 + ((uVar7 & 0x80000000) != 0);
      if (uVar2 < param_3) {
        cVar3 = cVar3 + '\x01';
      }
      uStack_30 = uVar2 + param_1;
      if (uStack_30 < uVar2) {
        cVar3 = cVar3 + '\x01';
      }
      if (cVar3 != '\0') {
        uStack_30 = 0xffffffff;
      }
      _DAT_fffed128 = uStack_30 >> 3;
      _DAT_fffed13c = _DAT_fffed150;
    }
    else {
      _DAT_fffed128 = 0;
    }
    _DAT_fffed12c = param_1;
    _DAT_fffed130 = uVar7;
    _DAT_fffed134 = uVar9;
    _DAT_fffed138 = uVar8;
    if (uVar5 == 0) {
      uVar5 = uVar9;
      if (uVar9 == 0) {
        uVar5 = 1;
      }
      if (uVar5 == 0) {
        uStack_30 = 0xffffffff;
      }
      else {
        uStack_28 = _DAT_fffed128 << 0x14;
        uStack_2c = _DAT_fffed128 >> 0xc;
        FUN_0016c364(&uStack_2c,uVar5,param_3,0,&uStack_2c);
        uStack_30 = uStack_28;
        if (uStack_2c != 0) {
          uStack_30 = 0xffffffff;
        }
      }
      uVar5 = uStack_30 - 0x100000;
      iVar1 = -(uint)(uStack_30 < uVar5);
      if ((iVar1 < 1) && ((uStack_30 < uVar5 != 0 || (uVar5 < 0x8000)))) {
        if ((iVar1 < -1) || ((iVar1 == -1 && (uVar5 < 0xffff8000)))) {
          uVar5 = 0xffff8000;
        }
      }
      else {
        uVar5 = 0x7fff;
      }
      _DAT_fffed140 = (undefined2)uVar5;
      _DAT_fffed144 = uVar6;
      _DAT_fffed148 = uVar7;
      _DAT_fffed14c = uVar9;
      _DAT_fffed150 = uVar8;
    }
    else {
      _DAT_fffed140 = 0;
      _DAT_fffed144 = uVar6;
      _DAT_fffed148 = uVar7;
      _DAT_fffed14c = uVar9;
      _DAT_fffed150 = uVar8;
    }
  }
  *param_5 = _DAT_fffed128;
  *param_6 = _DAT_fffed12c;
  *param_7 = _DAT_fffed130;
  *param_8 = _DAT_fffed134;
  *param_9 = _DAT_fffed138;
  *param_10 = _DAT_fffed13c;
  bVar4 = 0;
  if ((param_2 != '\0') && (bVar4 = 0xff, DAT_fffed155 != -1)) {
    bVar4 = DAT_fffed155 + 1;
  }
  if (bVar4 < 5) {
    *param_4 = 0;
  }
  else {
    *param_4 = _DAT_fffed140;
  }
  DAT_fffed155 = bVar4;
  return;
}

