
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c2b0c(char param_1,char param_2,char param_3,char param_4,undefined *param_5,
                 char param_6,char param_7,char param_8,uint param_9,ushort *param_10,
                 ushort *param_11,ushort *param_12,ushort *param_13)

{
  bool bVar1;
  bool bVar2;
  undefined *p1;
  ushort uVar4;
  ushort uVar5;
  uint uVar3;
  undefined *puVar6;
  undefined *puVar7;
  ushort uVar8;
  
  bVar2 = true;
  if (((param_1 == '\0') || (param_3 != '\x01')) && ((param_2 == '\0' || (param_4 != '\x01')))) {
    bVar2 = false;
  }
  uVar4 = _DAT_fffeca3a;
  if (bVar2) {
    p1 = (undefined *)__udiv32_r1_by_r0((param_9 & 0xff) * 0x3200,0x79);
    if (&DAT_0000ffff < p1) {
      p1 = &DAT_0000ffff;
    }
    if (param_6 != '\0') {
      p1 = (undefined *)0x0;
    }
    uVar4 = (ushort)p1;
    puVar6 = (undefined *)((short)_DAT_fffeca3e + 5);
    puVar7 = (undefined *)((uint)puVar6 & 0xffff);
    if (puVar7 < &UNK_00000005) {
      puVar6 = (undefined *)0xffffffff;
      puVar7 = &DAT_0000ffff;
    }
    if (0x1e00 < ((uint)p1 & 0xffff)) {
      p1 = &DAT_00001e00;
    }
    if (puVar7 < (undefined *)((uint)p1 & 0xffff)) {
      p1 = puVar6;
    }
    bVar1 = (short)((ulonglong)((longlong)(int)((uint)_DAT_fffeca42 * 0x19 + -0x3200) * 0x2000000)
                   >> 0x20) <= (short)((uint)_DAT_fffeca3c * 0x32 >> 8);
    if (!bVar1 && _DAT_fffeca3a < 10) {
      if (_DAT_fffeca3e < 0x1e00) {
        p1 = (undefined *)(int)(short)_DAT_fffeca3e;
      }
      else {
        p1 = &DAT_00001e00;
      }
    }
    uVar5 = (ushort)p1;
    if (param_6 == '\0') {
      if (((uint)p1 & 0xffff) < ((uint)param_5 & 0xffff)) {
        p1 = param_5;
      }
    }
    else {
      uVar5 = 0;
      p1 = (undefined *)0x0;
    }
    _DAT_fffeca2e = (ushort)p1;
    _DAT_fffeca30 = uVar5;
    _DAT_fffeca32 = uVar4;
    if (param_6 == '\0') {
      if ((param_7 == '\0') || (param_8 == '\0')) {
        uVar8 = _DAT_fffeca2e;
        if (param_8 != '\0') {
          uVar3 = LK_133F40((uint)&T_02E900,(uint)p1);
          uVar8 = (ushort)uVar3;
        }
      }
      else {
        uVar3 = LK_133F40((uint)&T_02E90C,(uint)p1);
        uVar8 = (ushort)uVar3;
      }
    }
    else {
      uVar8 = 0;
    }
    _DAT_fffeca2c = uVar8;
    _DAT_fffeca3c = uVar4;
    _DAT_fffeca3e = uVar5;
    _DAT_fffeca42 = uVar8;
    if (bVar1) {
      _DAT_fffeca3a = 0;
      uVar4 = _DAT_fffeca3a;
    }
    else {
      uVar4 = 0xffff;
      if (_DAT_fffeca3a != 0xffff) {
        uVar4 = _DAT_fffeca3a + 1;
      }
    }
  }
  _DAT_fffeca3a = uVar4;
  if (bVar2) {
    _DAT_fffeca40 = _DAT_fffeca2c;
  }
  *param_10 = _DAT_fffeca40;
  if (bVar2) {
    _DAT_fffeca38 = _DAT_fffeca2e;
  }
  *param_11 = _DAT_fffeca38;
  if (bVar2) {
    _DAT_fffeca36 = _DAT_fffeca30;
  }
  *param_12 = _DAT_fffeca36;
  if (bVar2) {
    _DAT_fffeca34 = _DAT_fffeca32;
  }
  *param_13 = _DAT_fffeca34;
  return;
}

