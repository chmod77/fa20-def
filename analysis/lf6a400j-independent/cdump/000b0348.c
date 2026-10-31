
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b0348(char param_1,uint param_2,char param_3,undefined1 *param_4,ushort *param_5,
                 ushort *param_6,ushort *param_7,ushort *param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ushort local_14;
  ushort uStack_12;
  ushort uStack_10;
  
  if (param_1 == '\0') {
    if (DAT_fffec611 == '\0') {
      DAT_fffec612 = '\0';
      DAT_fffec613 = '\0';
      DAT_fffec611 = '\x01';
      DAT_fffec614 = '\x01';
    }
    if (param_3 == '\0') {
      local_14 = 0xe333;
      uStack_12 = 0x4666;
      uStack_10 = 0xde66;
      _DAT_fffec60a = 0x44cd;
    }
    else {
      local_14 = 0xe4cd;
      uStack_12 = 0x419a;
      uStack_10 = 0xe000;
      _DAT_fffec60a = 0x4333;
    }
    uVar1 = (uint)(short)uStack_10;
    _DAT_fffec608 = uStack_10;
    uVar3 = (uint)(short)local_14;
    _DAT_fffec60c = local_14;
    _DAT_fffec60e = uStack_12;
    if (DAT_fffec612 != '\0') {
      iVar2 = (uint)uStack_10 - (uint)_DAT_fffec60a;
      uVar1 = 0xffffffff;
      if ((iVar2 < (int)&DAT_0000c000) && (uVar1 = 0, -0x4001 < iVar2)) {
        uVar1 = iVar2 + 0x4000;
      }
    }
    DAT_fffec612 = (uVar1 & 0xffff) <= (param_2 & 0xffff);
    if (DAT_fffec613 != '\0') {
      iVar2 = (uint)local_14 - (uint)uStack_12;
      uVar3 = 0xffffffff;
      if ((iVar2 < (int)&DAT_0000c000) && (uVar3 = 0, -0x4001 < iVar2)) {
        uVar3 = iVar2 + 0x4000;
      }
    }
    DAT_fffec613 = (uVar3 & 0xffff) <= (param_2 & 0xffff);
    if ((bool)DAT_fffec613) {
      DAT_fffec610 = 3;
    }
    else if ((bool)DAT_fffec612) {
      DAT_fffec610 = 2;
    }
    else {
      DAT_fffec610 = 1;
    }
  }
  else if (DAT_fffec614 != '\0') {
    DAT_fffec610 = 1;
    _DAT_fffec608 = 0x4000;
    _DAT_fffec60a = 0x4000;
    _DAT_fffec60c = 0x4000;
    _DAT_fffec60e = 0x4000;
    DAT_fffec614 = '\0';
    DAT_fffec611 = '\0';
  }
  *param_4 = DAT_fffec610;
  *param_5 = _DAT_fffec608;
  *param_6 = _DAT_fffec60a;
  *param_7 = _DAT_fffec60c;
  *param_8 = _DAT_fffec60e;
  return;
}

