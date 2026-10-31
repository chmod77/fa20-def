
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a343c(uint param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 uint param_7,ushort param_8,ushort *param_9,short *param_10)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  ushort uVar4;
  byte bVar5;
  
  if (param_6 == '\b') {
    uVar1 = LK_133E10((uint)&T_02DAE4,param_7 & 0xff);
    _DAT_fffec2c4 = (short)((uVar1 & 0xffff) * (int)param_3 * 0x5a >> 0x10);
  }
  *param_10 = _DAT_fffec2c4;
  uVar4 = _DAT_fffec2c6;
  if (param_6 == '\b') {
    uVar1 = (int)_DAT_fffec2c4 + (uint)_DAT_fffec2c6;
    if (0x7fff < (int)uVar1) {
      uVar1 = 0x7fff;
    }
    uVar4 = (ushort)uVar1;
    if (((short)uVar4 < 1) || ((uVar1 & 0xffff) < 0x101)) {
      if ((short)uVar4 < 0) {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0x100;
    }
  }
  if ((param_6 == '\x06') || (param_6 == '\a')) {
    iVar2 = (uint)_DAT_fffec2c6 + (param_1 & 0xff) * -0x10;
    uVar4 = (ushort)iVar2;
    if (0x7fff < iVar2) {
      uVar4 = 0x7fff;
    }
    if ((short)uVar4 < 0) {
      uVar4 = 0;
    }
    else if ((short)uVar4 < 0) {
      uVar4 = 0;
    }
  }
  if ((param_6 == '\x03') || (param_6 == '\x04')) {
    uVar1 = (param_1 & 0xff) * 0x10 + (int)(short)_DAT_fffec2c6;
    uVar4 = (ushort)uVar1;
    puVar3 = (undefined *)(uVar1 & 0xffff);
    if (puVar3 < (undefined *)(uint)_DAT_fffec2c6) {
      uVar4 = 0xffff;
      puVar3 = &DAT_0000ffff;
    }
    if (&UNK_00000100 < puVar3) {
      uVar4 = 0x100;
    }
  }
  if (param_2 == '\0') {
    if (((param_4 == '\x01') || (param_4 == '\x02')) || (param_4 == '\x03')) {
      bVar5 = 0xb;
    }
    else {
      _DAT_fffec2c6 = uVar4;
      if (param_5 != '\n') goto LAB_000a355c;
      bVar5 = 0;
    }
    _DAT_fffec2c6 = (ushort)bVar5 << 4;
  }
LAB_000a355c:
  if (DAT_fffec2c8 == '\0') {
    _DAT_fffec2c6 = (param_8 & 0xff) << 4;
  }
  *param_9 = _DAT_fffec2c6;
  DAT_fffec2c8 = 1;
  return;
}

