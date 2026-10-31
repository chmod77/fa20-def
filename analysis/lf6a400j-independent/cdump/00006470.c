
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00006470(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = FUN_0000718c();
  uVar2 = uVar2 & 0xff;
  if (uVar2 == 0xc) {
    uVar2 = (int)DAT_ffffa300 & 0xf;
    _DAT_ffff8ed0 = (ushort)uVar2;
    for (uVar4 = 0; (uVar4 & 0xff) < 0x1e; uVar4 = (uVar4 & 0xff) + 1) {
      uVar2 = (uint)DAT_ffffa301;
      if ((int)(char)(&DAT_00007634)[(uVar4 & 0xff) * 8] == uVar2) {
        DAT_ffff857c = 0;
        break;
      }
    }
    uVar4 = 0;
    while ((uVar4 & 0xffff) < (uint)_DAT_ffff8ed0) {
      uVar4 = uVar4 & 0xffff;
      *(undefined1 *)(uVar4 - 0x712e) = (&DAT_ffffa301)[uVar4];
      uVar2 = uVar4 + 1;
      uVar4 = uVar2;
    }
    _DAT_ffff8ece = _DAT_ffffa2fa;
    DAT_ffff8ecd = 0;
    DAT_ffff92d1 = 2;
  }
  else if (uVar2 == 0xd) {
    _DAT_ffffa312 = _DAT_ffffa2fa;
    _DAT_ffffa314 = _DAT_ffffa300 & 0xfff;
    for (uVar4 = 0; (uVar4 & 0xff) < 0x1e; uVar4 = (uVar4 & 0xff) + 1) {
      uVar2 = (uint)(char)DAT_ffffa302;
      if ((int)(char)(&DAT_00007634)[(uVar4 & 0xff) * 8] == uVar2) {
        DAT_ffff857c = 0;
        break;
      }
    }
    _DAT_ffffab16 = DAT_ffffa2fc - 2;
    for (uVar4 = 0; (uVar4 & 0xffff) < (uint)_DAT_ffffab16; uVar4 = uVar4 + 1) {
      uVar4 = uVar4 & 0xffff;
      uVar2 = uVar4 * 2;
      *(ushort *)(uVar2 - 0x5ce8) = (ushort)(byte)(&DAT_ffffa302)[uVar4];
    }
    DAT_ffffab18 = 0;
    DAT_ffffa310 = 0;
  }
  else if (uVar2 == 0x12) {
    if ((ushort)((DAT_ffffa2fc - 1) + _DAT_ffffab16) < _DAT_ffffa314) {
      uVar1 = (ushort)DAT_ffffa2fc;
      for (uVar4 = 0; (uVar4 & 0xffff) < (uint)(ushort)(uVar1 - 1); uVar4 = uVar4 + 1) {
        uVar4 = uVar4 & 0xffff;
        uVar2 = (uVar4 + _DAT_ffffab16) * 2;
        *(ushort *)(uVar2 - 0x5ce8) = (ushort)(byte)(&DAT_ffffa301)[uVar4];
      }
      _DAT_ffffab16 = _DAT_ffffab16 + (uVar1 - 1);
      DAT_ffffab19 = DAT_ffffab19 + '\x01';
    }
    else {
      iVar3 = (int)(short)_DAT_ffffa314;
      iVar5 = (int)(short)_DAT_ffffab16;
      for (uVar4 = 0; (uVar4 & 0xffff) < (iVar3 - iVar5 & 0xffffU); uVar4 = uVar4 + 1) {
        uVar4 = uVar4 & 0xffff;
        uVar2 = (uVar4 + _DAT_ffffab16) * 2;
        *(ushort *)(uVar2 - 0x5ce8) = (ushort)(byte)(&DAT_ffffa301)[uVar4];
      }
      _DAT_ffff8ed0 = _DAT_ffffa314;
      uVar4 = 0;
      while ((uVar4 & 0xffff) < (uint)_DAT_ffff8ed0) {
        uVar2 = uVar4 & 0xffff;
        *(char *)(uVar2 - 0x712e) = (char)*(undefined2 *)(uVar2 * 2 + -0x5ce8);
        uVar4 = uVar2 + 1;
      }
      _DAT_ffff8ece = _DAT_ffffa312;
      DAT_ffff8ecd = 0;
      DAT_ffff92d1 = 2;
      DAT_ffffab18 = 1;
    }
  }
  else if (uVar2 == 7) {
    _DAT_ffffa30e = (short)DAT_ffffa300 & 0xf;
    _DAT_ffffa30c = _DAT_ffffa300 & 0xff;
    if (0x7f < DAT_ffffa302) {
      if ((DAT_ffffa302 < 0xf1) || (0xf9 < DAT_ffffa302)) {
        DAT_ffffa302 = 0x7f;
      }
      else {
        DAT_ffffa302 = 1;
      }
    }
    uVar2 = (uint)(char)DAT_ffffa302;
    _DAT_ffffa30a = (ushort)DAT_ffffa302;
    DAT_ffffab21 = 0;
  }
  return uVar2;
}

