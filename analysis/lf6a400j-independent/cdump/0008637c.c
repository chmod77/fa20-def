
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008637c(char param_1,uint param_2,char param_3,ushort param_4,uint param_5,ushort param_6,
                 uint param_7,uint param_8,char param_9,uint param_10,ushort *param_11,
                 undefined2 *param_12,undefined2 *param_13,ushort *param_14)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  undefined *puVar6;
  char cVar7;
  undefined *b;
  ushort uVar8;
  bool bVar9;
  
  b = (undefined *)((param_5 & 0xffff) + 0xd4d);
  puVar4 = (undefined *)__udiv32_r1_by_r0((param_8 & 0xffff) << 0xe,(int)b);
  if (&DAT_0000ffff < puVar4) {
    puVar4 = &DAT_0000ffff;
  }
  *param_13 = (short)puVar4;
  uVar5 = (uint)(short)((short)param_1 - (short)param_9);
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  uVar5 = LK_133E10((uint)&T_02C978,uVar5);
  uVar5 = uVar5 & 0xffff;
  bVar1 = param_3 == '\x02';
  bVar2 = false;
  if (bVar1) {
    _DAT_fffebbb6 = 0;
  }
  else {
    bVar2 = 999 < _DAT_fffebbb6;
    _DAT_fffebbb6 = _DAT_fffebbb6 + 1;
    if (_DAT_fffebbb6 == 0) {
      _DAT_fffebbb6 = -1;
    }
  }
  if (uVar5 < 0x81) {
    uVar5 = 0x80;
  }
  puVar6 = (undefined *)0xffffffff;
  if ((uVar5 != 0) &&
     (b = (undefined *)__udiv32_r1_by_r0((param_2 & 0xffff) << 0xd,uVar5), puVar6 = b,
     &DAT_0000ffff < b)) {
    puVar6 = &DAT_0000ffff;
  }
  if (((uint)puVar4 & 0xffff) < ((uint)puVar6 & 0xffff)) {
    puVar6 = puVar4;
  }
  *param_12 = (short)uVar5;
  uVar8 = 0x2000;
  if (0x2000 < ((uint)puVar6 & 0xffff)) {
    uVar8 = (ushort)puVar6;
  }
  *param_14 = uVar8;
  uVar5 = (uint)_DAT_fffebbb2 - (uint)uVar8;
  if ((int)uVar5 < 0) {
    uVar5 = -uVar5;
    if ((int)uVar5 < 0) {
      uVar5 = 0;
    }
  }
  else if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  cVar7 = '\x01';
  if (DAT_fffebbba <= bVar1) {
    cVar7 = DAT_fffebbbb;
  }
  if (((uVar5 & 0xffff) < 0x11) || (bVar2)) {
    cVar7 = '\0';
  }
  bVar2 = true;
  if ((!bVar1) && (cVar7 == '\0')) {
    bVar2 = false;
  }
  bVar9 = 0x1f < uVar8 >> 8;
  bVar3 = 0x3665 < param_6;
  if ((!bVar9) || (!bVar3)) {
    b = (undefined *)((param_10 & 0xffff) * (param_7 & 0xffff));
  }
  DAT_fffebbbb = cVar7;
  if (bVar2) {
    if (DAT_fffebbb8 == '\0') {
      DAT_fffebbbd = '\0';
      DAT_fffebbb8 = '\x01';
    }
    if ((bVar9) && (bVar3)) {
      puVar4 = (undefined *)LK_1351FC((uint)&T_02C96C,(uint)param_4);
    }
    else {
      puVar4 = &DAT_0000ffff;
      if (b < (undefined *)0x1fffe01) {
        puVar4 = (undefined *)((uint)b >> 9);
      }
    }
    if (DAT_fffebbbd == '\0') {
      _DAT_ffff19a8 = _DAT_fffebbb4;
    }
    else {
      _DAT_ffff19a8 = _DAT_fffebbb2;
      FUN_0016b4d8(&DAT_ffff19a8,(uint)uVar8,puVar4);
    }
    _DAT_fffebbb0 = _DAT_ffff19a8;
    DAT_fffebbbd = '\x01';
  }
  else {
    DAT_fffebbb8 = '\0';
  }
  _DAT_fffebbb2 = uVar8;
  if (bVar2) {
    _DAT_fffebbb2 = _DAT_fffebbb0;
  }
  *param_11 = _DAT_fffebbb2;
  _DAT_fffebbb4 = uVar8;
  DAT_fffebbba = bVar1;
  DAT_fffebbbc = bVar9;
  DAT_fffebbb9 = bVar3;
  return;
}

