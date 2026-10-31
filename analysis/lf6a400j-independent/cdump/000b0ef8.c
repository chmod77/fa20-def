
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b0ef8(char param_1,uint param_2,byte param_3,char param_4,undefined2 *param_5,
                 ushort *param_6,ushort *param_7,ushort *param_8,ushort *param_9,
                 undefined2 *param_10)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  byte bVar6;
  int iVar5;
  bool bVar7;
  ushort local_2c;
  ushort uStack_2a;
  ushort uStack_24;
  ushort uStack_22;
  ushort uStack_20;
  
  if (param_1 == '\0') {
    if (DAT_fffec654 != '\0') {
      _DAT_fffec644 = 0;
      _DAT_fffec646 = 0x4000;
      _DAT_fffec648 = 0x4000;
      _DAT_fffec64a = 0x4000;
      _DAT_fffec64c = 0x4000;
      _DAT_fffec64e = 0;
      DAT_fffec654 = '\0';
      DAT_fffec653 = '\0';
    }
  }
  else {
    param_2 = param_2 & 0xffff;
    if (DAT_fffec653 == '\0') {
      DAT_fffec650 = '\0';
      DAT_fffec652 = '\0';
      DAT_fffec651 = '\0';
      DAT_fffec653 = '\x01';
      DAT_fffec654 = '\x01';
    }
    bVar3 = param_4 != '\0';
    if (bVar3) {
      local_2c = 0xe000;
      uStack_2a = 0x4333;
      uStack_20 = 0xe4cd;
    }
    else {
      local_2c = 0xde66;
      uStack_2a = 0x44cd;
      uStack_20 = 0xe333;
    }
    if (DAT_fffec651 == '\0') {
      bVar6 = 0x94;
    }
    else {
      bVar6 = 0x92;
    }
    bVar7 = bVar6 <= param_3;
    if (bVar7) {
      uStack_24 = 0xde66;
      uStack_22 = 0x44cd;
      uStack_20 = 0xe333;
      _DAT_fffec64c = 0x4666;
    }
    else {
      uStack_24 = local_2c;
      uStack_22 = uStack_2a;
      if (bVar3) {
        _DAT_fffec64c = 0x419a;
      }
      else {
        _DAT_fffec64c = 0x4666;
      }
    }
    uVar4 = (uint)(short)uStack_24;
    _DAT_fffec646 = uStack_24;
    _DAT_fffec648 = uStack_22;
    _DAT_fffec64a = uStack_20;
    if (DAT_fffec650 != '\0') {
      iVar5 = (uint)uStack_24 - (uint)uStack_22;
      uVar4 = 0xffffffff;
      if ((iVar5 < (int)&DAT_0000c000) && (uVar4 = 0, -0x4001 < iVar5)) {
        uVar4 = iVar5 + 0x4000;
      }
    }
    bVar1 = (uVar4 & 0xffff) <= param_2;
    if (DAT_fffec652 == '\0') {
      uVar4 = (uint)uStack_20;
    }
    else {
      iVar5 = (uint)uStack_20 - (uint)_DAT_fffec64c;
      uVar4 = 0xffffffff;
      if ((iVar5 < (int)&DAT_0000c000) && (uVar4 = 0, -0x4001 < iVar5)) {
        uVar4 = iVar5 + 0x4000;
      }
      uVar4 = uVar4 & 0xffff;
    }
    bVar2 = uVar4 <= param_2;
    if (bVar7) {
      uVar4 = LK_133F40((uint)&T_02E0E4,param_2);
      _DAT_fffec64e = (undefined2)uVar4;
    }
    else if (bVar3) {
      uVar4 = LK_133F40((uint)&T_02E0D8,param_2);
      _DAT_fffec64e = (undefined2)uVar4;
    }
    else {
      uVar4 = LK_133F40((uint)&T_02E0CC,param_2);
      _DAT_fffec64e = (undefined2)uVar4;
    }
    DAT_fffec650 = bVar1;
    DAT_fffec651 = bVar7;
    DAT_fffec652 = bVar2;
    if (bVar1) {
      _DAT_fffec644 = _DAT_fffec64e;
      if (bVar2) {
        _DAT_fffec644 = 0xffff;
      }
    }
    else {
      _DAT_fffec644 = 0;
    }
  }
  *param_5 = _DAT_fffec644;
  *param_6 = _DAT_fffec646;
  *param_7 = _DAT_fffec648;
  *param_8 = _DAT_fffec64a;
  *param_9 = _DAT_fffec64c;
  *param_10 = _DAT_fffec64e;
  return;
}

