
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ae518(char param_1,uint param_2,uint param_3,uint param_4,ushort *param_5)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort local_24;
  ushort uStack_22;
  ushort uStack_20;
  
  param_2 = param_2 & 0xffff;
  uVar5 = param_3 & 0xff;
  param_3 = param_3 & 1;
  uVar7 = uVar5;
  if ((param_3 != 0) && (uVar7 = 0, uVar5 != 0)) {
    uVar7 = uVar5 - 1;
  }
  uVar5 = uVar7 & 3;
  uVar6 = (uVar7 & 0xffff) >> 1;
  uVar7 = uVar6;
  if ((uVar5 != 0) && (uVar7 = 0, uVar6 != 0)) {
    uVar7 = uVar6 - 1;
  }
  uVar6 = uVar7 & 3;
  uVar7 = (uVar7 & 0xffff) >> 1;
  if ((uVar6 != 0) && (bVar1 = uVar7 == 0, uVar7 = uVar7 - 1, bVar1)) {
    uVar7 = 0;
  }
  if (param_1 == '\x03') {
    puVar4 = (undefined *)(_DAT_fffec5a4 + param_2);
    if (puVar4 < &DAT_00018000) {
      if (&DAT_00007fff < puVar4) {
        _DAT_fffec59c = (short)puVar4 + 0x8000;
      }
      else {
        _DAT_fffec59c = 0;
      }
    }
    else {
      _DAT_fffec59c = 0xffff;
    }
    puVar4 = (undefined *)(_DAT_fffec5a6 + param_2);
    if (puVar4 < &DAT_00018000) {
      if (&DAT_00007fff < puVar4) {
        _DAT_fffec59e = (short)puVar4 + 0x8000;
      }
      else {
        _DAT_fffec59e = 0;
      }
    }
    else {
      _DAT_fffec59e = 0xffff;
    }
    puVar4 = (undefined *)(_DAT_fffec5a8 + param_2);
    if (puVar4 < &DAT_00018000) {
      if (&DAT_00007fff < puVar4) {
        _DAT_fffec5a0 = (short)puVar4 + 0x8000;
      }
      else {
        _DAT_fffec5a0 = 0;
      }
    }
    else {
      _DAT_fffec5a0 = 0xffff;
    }
    puVar4 = (undefined *)(_DAT_fffec5aa + param_2);
    if (puVar4 < &DAT_00018000) {
      if (&DAT_00007fff < puVar4) {
        _DAT_fffec5a2 = (short)puVar4 + 0x8000;
      }
      else {
        _DAT_fffec5a2 = 0;
      }
    }
    else {
      _DAT_fffec5a2 = 0xffff;
    }
  }
  if (param_3 != 0) {
    if (_DAT_fffec59c < 0x8000) {
      uVar3 = -(uint)_DAT_fffec59c & 0xffff;
    }
    else {
      uVar3 = (uint)(short)_DAT_fffec59c;
    }
    sVar2 = (short)((param_4 & 0xffff) * (uVar3 - 0x8000 & 0xffff) >> 0x10);
    if (_DAT_fffec59c < 0x8000) {
      _DAT_fffec594 = 0x8000 - sVar2;
    }
    else {
      _DAT_fffec594 = sVar2 + 0x8000;
    }
  }
  if (uVar5 != 0) {
    if (_DAT_fffec59e < 0x8000) {
      uVar3 = -(uint)_DAT_fffec59e & 0xffff;
    }
    else {
      uVar3 = (uint)(short)_DAT_fffec59e;
    }
    sVar2 = (short)((param_4 & 0xffff) * (uVar3 - 0x8000 & 0xffff) >> 0x10);
    if (_DAT_fffec59e < 0x8000) {
      _DAT_fffec596 = 0x8000 - sVar2;
    }
    else {
      _DAT_fffec596 = sVar2 + 0x8000;
    }
  }
  if (uVar6 != 0) {
    if (_DAT_fffec5a0 < 0x8000) {
      uVar3 = -(uint)_DAT_fffec5a0 & 0xffff;
    }
    else {
      uVar3 = (uint)(short)_DAT_fffec5a0;
    }
    sVar2 = (short)((param_4 & 0xffff) * (uVar3 - 0x8000 & 0xffff) >> 0x10);
    if (_DAT_fffec5a0 < 0x8000) {
      _DAT_fffec598 = 0x8000 - sVar2;
    }
    else {
      _DAT_fffec598 = sVar2 + 0x8000;
    }
  }
  if ((uVar7 & 3) != 0) {
    if (_DAT_fffec5a2 < 0x8000) {
      uVar3 = -(uint)_DAT_fffec5a2 & 0xffff;
    }
    else {
      uVar3 = (uint)(short)_DAT_fffec5a2;
    }
    sVar2 = (short)((param_4 & 0xffff) * (uVar3 - 0x8000 & 0xffff) >> 0x10);
    if (_DAT_fffec5a2 < 0x8000) {
      _DAT_fffec59a = 0x8000 - sVar2;
    }
    else {
      _DAT_fffec59a = sVar2 + 0x8000;
    }
  }
  if (param_1 != '\x03') {
    _DAT_fffec5aa = 0x8000;
    local_24 = 0x8000;
    uStack_22 = 0x8000;
    uStack_20 = 0x8000;
  }
  else {
    if (param_3 == 0) {
      local_24 = _DAT_fffec59c;
    }
    else {
      local_24 = _DAT_fffec594;
    }
    uStack_22 = _DAT_fffec59e;
    if (uVar5 != 0) {
      uStack_22 = _DAT_fffec596;
    }
    uStack_20 = _DAT_fffec5a0;
    if (uVar6 != 0) {
      uStack_20 = _DAT_fffec598;
    }
    _DAT_fffec5aa = _DAT_fffec5a2;
    if ((uVar7 & 3) != 0) {
      _DAT_fffec5aa = _DAT_fffec59a;
    }
  }
  *param_5 = local_24;
  param_5[1] = uStack_22;
  param_5[2] = uStack_20;
  param_5[3] = _DAT_fffec5aa;
  _DAT_fffec5a4 = local_24;
  _DAT_fffec5a6 = uStack_22;
  _DAT_fffec5a8 = uStack_20;
  return;
}

