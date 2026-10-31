
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00002dc6(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  DAT_ffffab2a = '\0';
  uVar2 = (int)DAT_ffffa2e4 & 0xf0;
  if (uVar2 == 0) {
    uVar2 = (int)DAT_ffffa2e4 & 0xf;
    _DAT_ffff8ed0 = (ushort)uVar2;
    if ((_DAT_ffff8ed0 != 0) && (_DAT_ffff8ed0 < 8)) {
      uVar3 = 0;
      while ((uVar3 & 0xffff) < (uint)_DAT_ffff8ed0) {
        uVar3 = uVar3 & 0xffff;
        (&DAT_ffff6792)[uVar3] = (&DAT_ffffa2e5)[uVar3];
        uVar2 = uVar3 + 1;
        uVar3 = uVar2;
      }
      _DAT_ffff8ece = _DAT_ffffa2de;
      DAT_ffffab25 = 1;
      return uVar2;
    }
  }
  else if (uVar2 == 0x10) {
    _DAT_ffffa312 = _DAT_ffffa2de;
    _DAT_ffffa314 = _DAT_ffffa2e4 & 0xfff;
    if (_DAT_ffffa314 < 8) {
      DAT_ffffab2a = -1;
    }
    else if (0x3ff < _DAT_ffffa314) {
      DAT_ffffa316 = -1;
    }
    _DAT_ffffab16 = DAT_ffffa2e0 - 2;
    uVar2 = 0x10;
    uVar3 = 0;
    while ((uVar3 & 0xffff) < (uint)_DAT_ffffab16) {
      uVar3 = uVar3 & 0xffff;
      (&DAT_ffff6792)[uVar3] = (&DAT_ffffa2e6)[uVar3];
      uVar2 = uVar3 + 1;
      uVar3 = uVar2;
    }
    DAT_ffffa310 = 0;
    if (DAT_ffffab2a != '\0') {
      DAT_ffffa310 = 0;
      return uVar2;
    }
    FUN_00003690();
    do {
      while ((_DAT_ffffd008 & 0x100) != 0) {
        _DAT_ffffd008 = 0x100;
        if ((_DAT_ffffd030 & 0x100) != 0) {
          _DAT_ffffd030 = 0x100;
          _DAT_ffffd038 = 0x100;
          _DAT_fffff666 = _DAT_fffff666 & 0xfeff;
          _DAT_fffff650 = 0;
          _DAT_fffff66a = _DAT_fffff66a & 0xfeff;
          if (DAT_ffffa316 == -1) {
            DAT_ffffa316 = 0;
            DAT_ffffab2a = 0xff;
            _DAT_ffffd008 = 0x100;
            _DAT_ffffd030 = 0x100;
            _DAT_ffffd038 = 0x100;
            _DAT_fffff650 = 0;
            return (int)(short)_DAT_fffff66a;
          }
          DAT_ffffab2d = 0xff;
          FUN_00003784(0x96);
          DAT_ffffab2c = 0xff;
          return 0xffffffff;
        }
      }
      if ((_DAT_fffff66a & 0x100) != 0) {
        _DAT_fffff66a = _DAT_fffff66a & 0xfeff;
        DAT_ffffab2a = 0xff;
        _DAT_fffff650 = 0;
        _DAT_fffff666 = _DAT_fffff666 & 0xfeff;
        return (int)(short)_DAT_fffff66a;
      }
    } while ((_DAT_ffffd038 & 0x100) == 0);
    _DAT_fffff666 = _DAT_fffff666 & 0xfeff;
    _DAT_fffff650 = 0;
    _DAT_fffff66a = _DAT_fffff66a & 0xfeff;
    uVar2 = 0x38;
    _DAT_ffffd038 = 0x100;
  }
  else {
    if (uVar2 != 0x20) {
      DAT_ffffab2a = 0;
      return uVar2;
    }
    if (DAT_ffffab2d != -1) {
      DAT_ffffab2a = 0;
      return 0x20;
    }
    _DAT_fffff666 = _DAT_fffff666 & 0xfeff;
    _DAT_fffff650 = 0;
    _DAT_fffff66a = _DAT_fffff66a & 0xfeff;
    uVar3 = (int)DAT_ffffa2e4 & 0xf;
    uVar2 = (uint)(char)DAT_ffffa310;
    if (((uVar2 == 0xf) && (uVar3 == 0)) || ((DAT_ffffa310 < 0xf && (uVar3 == DAT_ffffa310 + 1)))) {
      if ((int)((uint)DAT_ffffa2e0 + (uint)_DAT_ffffab16 + -1) < (int)(uint)_DAT_ffffa314) {
        uVar1 = (ushort)DAT_ffffa2e0;
        for (uVar2 = 0; (uVar2 & 0xffff) < (uint)(ushort)(uVar1 - 1); uVar2 = uVar2 + 1) {
          uVar2 = uVar2 & 0xffff;
          (&DAT_ffff6792)[uVar2 + _DAT_ffffab16] = (&DAT_ffffa2e5)[uVar2];
        }
        _DAT_ffffab16 = _DAT_ffffab16 + (uVar1 - 1);
        DAT_ffffab19 = DAT_ffffab19 + '\x01';
        DAT_ffffa310 = (byte)uVar3;
        DAT_ffffab2c = 0xff;
        uVar2 = FUN_00003784(0x96);
        return uVar2;
      }
      iVar4 = (int)(short)_DAT_ffffa314;
      iVar5 = (int)(short)_DAT_ffffab16;
      for (uVar3 = 0; (uVar3 & 0xffff) < (iVar4 - iVar5 & 0xffffU); uVar3 = uVar3 + 1) {
        uVar3 = uVar3 & 0xffff;
        uVar2 = uVar3 + _DAT_ffffab16;
        (&DAT_ffff6792)[uVar2] = (&DAT_ffffa2e5)[uVar3];
      }
      _DAT_ffff8ece = _DAT_ffffa312;
      _DAT_ffff8ed0 = _DAT_ffffa314;
      DAT_ffffab25 = 1;
      DAT_ffffab2c = 0;
      DAT_ffffab2d = 0;
      return uVar2;
    }
  }
  DAT_ffffab2a = 0xff;
  return uVar2;
}

