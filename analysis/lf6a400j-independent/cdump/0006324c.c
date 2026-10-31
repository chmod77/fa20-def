
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006324c(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  ushort uVar7;
  
  _DAT_ffff0132 = _DAT_ffff0100;
  uVar2 = (uint)_DAT_ffff0100 - (uint)_DAT_ffff0216;
  if ((int)uVar2 < 0) {
    uVar2 = -uVar2;
  }
  _DAT_ffff0216 = _DAT_ffff0100;
  uVar3 = (uint)_DAT_ffff0100 - (uint)_DAT_ffff002a;
  uVar4 = uVar3;
  if ((int)uVar3 < 0) {
    uVar4 = -uVar3;
  }
  if (DAT_ffff0219 == '\0') goto LAB_00063374;
  if (DAT_ffff0218 != 0xffffffff) {
    DAT_ffff0218 = DAT_ffff0218 + 1;
  }
  if (DAT_ffff0218 < 0x6c) {
    if (_DAT_ffff0214 < _DAT_ffff0100) {
      uVar5 = _DAT_ffff0100 - 5;
      if ((int)uVar5 < 0x4c2) {
        uVar5 = 0x4c2;
      }
      if (_DAT_ffff002a < uVar5) goto LAB_00063324;
    }
    else {
      puVar6 = (undefined *)(_DAT_ffff0100 + 5);
      if (&DAT_0000b428 < (undefined *)(_DAT_ffff0100 + 5)) {
        puVar6 = &DAT_0000b428;
      }
      if (((uint)puVar6 & 0xffff) < (uint)_DAT_ffff002a) {
LAB_00063324:
        DAT_ffff0219 = '\0';
      }
    }
    if (_DAT_ffff0214 < _DAT_ffff0100) {
      uVar5 = _DAT_ffff0214 - 0x36;
      if ((int)uVar5 < 0) {
        uVar5 = 0;
      }
      if (uVar5 <= _DAT_ffff002a) goto LAB_00063374;
    }
    else {
      puVar6 = (undefined *)(_DAT_ffff0214 + 0x36);
      if (&DAT_0000b428 < (undefined *)(_DAT_ffff0214 + 0x36)) {
        puVar6 = &DAT_0000b428;
      }
      if ((uint)_DAT_ffff002a <= ((uint)puVar6 & 0xffff)) goto LAB_00063374;
    }
  }
  DAT_ffff0219 = '\0';
LAB_00063374:
  if (((uVar2 & 0xffff) < 0xb42) && ((uVar2 & 0xffff) != 0)) {
    if (uVar4 < 0xb42) {
      if (uVar4 < 0x4ac) {
        iVar1 = FUN_00062b8e(uVar3,0xc0);
        if (iVar1 < 0) {
          iVar1 = iVar1 + 0x7f;
        }
        iVar1 = (int)((ulonglong)((longlong)iVar1 * 0x2000000) >> 0x20);
      }
      else {
        iVar1 = FUN_00062b8e(uVar3,0xa0);
        if (iVar1 < 0) {
          iVar1 = iVar1 + 0x7f;
        }
        iVar1 = (int)((ulonglong)((longlong)iVar1 * 0x2000000) >> 0x20);
      }
    }
    else {
      iVar1 = FUN_00062b8e(uVar3,0x80);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7f;
      }
      iVar1 = (int)((ulonglong)((longlong)iVar1 * 0x2000000) >> 0x20);
    }
    iVar1 = iVar1 + (uint)_DAT_ffff002a;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    _DAT_ffff0214 = (ushort)iVar1;
    DAT_ffff0219 = '\x01';
    DAT_ffff0218 = 0;
    _DAT_ffff021a = 0;
  }
  if (DAT_ffff0219 == '\0') {
    DAT_ffff0218 = 0;
    _DAT_ffff0214 = _DAT_ffff0132;
  }
  else {
    _DAT_ffff010c = (undefined *)((uint)_DAT_ffff0214 - (uint)_DAT_ffff002a);
    if ((int)&DAT_0000fc17 < (int)_DAT_ffff010c) {
      _DAT_ffff010c = &DAT_0000fc17;
    }
    if ((int)_DAT_ffff010c < -0xfc17) {
      _DAT_ffff010c = &DAT_ffff03e9;
    }
    puVar6 = _DAT_ffff010c;
    if ((int)_DAT_ffff010c < 0) {
      puVar6 = (undefined *)-(int)_DAT_ffff010c;
    }
    _DAT_ffff0102 = SUB42(puVar6,0);
  }
  uVar7 = _DAT_ffff0100;
  if (_DAT_ffff0100 < 0x4c2) {
    uVar7 = 0x4c2;
  }
  if (((uVar7 < _DAT_ffff0214) && ((DAT_ffff002c & 0x40) == 0)) && (_DAT_ffff007a == 0)) {
    _DAT_ffff021a = _DAT_ffff021a + 1;
    if (0x6c < _DAT_ffff021a) {
      DAT_ffff34bd = DAT_ffff34bd | 0x90;
    }
  }
  else {
    _DAT_ffff021a = 0;
  }
  return;
}

