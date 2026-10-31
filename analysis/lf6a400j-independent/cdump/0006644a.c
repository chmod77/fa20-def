
/* WARNING: Removing unreachable block (ram,0x00066524) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0006644a(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  for (uVar2 = 0x10; (uVar2 & 0xffff) != 0; uVar2 = uVar2 - 1) {
    uVar2 = uVar2 & 0xffff;
    *(undefined2 *)(&DAT_ffff01e6 + uVar2 * 2) = *(undefined2 *)(&DAT_ffff01e6 + (uVar2 - 1) * 2);
  }
  _DAT_ffff01e6 = _DAT_ffff0100;
  iVar5 = (int)(short)_DAT_ffff00b6;
  iVar6 = (int)(short)_DAT_ffff0206;
  uVar2 = (uint)_DAT_ffff0206;
  uVar4 = (uint)_DAT_ffff00b6;
  if (uVar2 != uVar4) {
    if (uVar2 < uVar4) {
      _DAT_ffff020a = _DAT_ffff020e;
    }
    else {
      _DAT_ffff020a = _DAT_ffff020c;
    }
  }
  _DAT_ffff00b6 = _DAT_ffff0206;
  _DAT_ffff0208 = FUN_0006628e(iVar6,(int)(short)_DAT_ffff0208);
  uVar1 = (uint)(char)DAT_ffff0084;
  if ((byte)(((DAT_ffff0084 & 0x40) != 0) + ((DAT_ffff0084 & 0x20) != 0) + (DAT_ffff0084 & 1) +
             ((DAT_ffff0084 & 4) != 0) + ((DAT_ffff0084 & 2) != 0) + ((DAT_ffff0084 & 0x10) != 0) +
            ((uVar1 & 8) != 0)) != '\0') {
    return uVar1;
  }
  if (_DAT_ffff008e < 0x3c) {
    return uVar1;
  }
  if ((uVar4 < uVar2 + 0x87) && ((int)(uVar2 - 0x87) < (int)uVar4)) {
    if (_DAT_ffff003e < 10000) {
      _DAT_ffff003e = _DAT_ffff003e + 1;
    }
  }
  else {
    _DAT_ffff003e = 0;
    uVar7 = iVar6 - iVar5;
    uVar1 = -uVar7;
    if (uVar4 <= uVar2) {
      uVar1 = uVar7;
    }
    if ((uVar1 & 0xffff) < 0xa9f) {
      DAT_ffff0086 = DAT_ffff0086 & 0xbf;
    }
    else {
      DAT_ffff0086 = DAT_ffff0086 | 0x40;
    }
    if ((uVar1 & 0xffff) < 0x440) {
      uVar1 = (int)(char)DAT_ffff0086 & 0x7f;
      DAT_ffff0086 = (byte)uVar1;
    }
    else {
      uVar1 = (int)(char)DAT_ffff0086 | 0x80;
      DAT_ffff0086 = (byte)uVar1;
    }
  }
  puVar3 = (undefined *)(_DAT_ffff0208 + 0xa9e);
  if (&DAT_0000ffff < puVar3) {
    puVar3 = &DAT_0000ffff;
  }
  if ((uint)_DAT_ffff002a < ((uint)puVar3 & 0xffff)) {
    _DAT_ffff006e = 0;
    uVar2 = _DAT_ffff0208 - 0xa9e;
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
    if ((uVar2 & 0xffff) < (uint)_DAT_ffff002a) {
      _DAT_ffff0070 = 0;
    }
    else {
      uVar1 = 1000;
      if (_DAT_ffff0070 < 1000) {
        _DAT_ffff0070 = _DAT_ffff0070 + 1;
      }
      else {
        uVar1 = (int)(char)DAT_ffff0084 | 0x20;
        DAT_ffff0084 = (byte)uVar1;
      }
    }
  }
  else {
    _DAT_ffff0070 = 0;
    uVar1 = 1000;
    if (_DAT_ffff006e < 1000) {
      _DAT_ffff006e = _DAT_ffff006e + 1;
    }
    else {
      uVar1 = (int)(char)DAT_ffff0084 | 0x40;
      DAT_ffff0084 = (byte)uVar1;
    }
  }
  if (_DAT_ffff003e == 0) {
    _DAT_ffff0072 = 0;
    _DAT_ffff0074 = 0;
    _DAT_ffff0076 = 0;
    _DAT_ffff0078 = 0;
    _DAT_ffff01ce = 0;
    return uVar1;
  }
  if (((int)(char)DAT_ffff0086 & 0x80U) == 0) {
LAB_00066734:
    _DAT_ffff0076 = 0;
    _DAT_ffff0078 = 0;
  }
  else {
    puVar3 = (undefined *)(_DAT_ffff0208 + 0x43f);
    if (&DAT_0000ffff < puVar3) {
      puVar3 = &DAT_0000ffff;
    }
    if ((uint)_DAT_ffff002a < ((uint)puVar3 & 0xffff)) {
      _DAT_ffff0076 = 0;
      uVar2 = _DAT_ffff0208 - 0x43f;
      if ((int)uVar2 < 0) {
        uVar2 = 0;
      }
      if ((uVar2 & 0xffff) < (uint)_DAT_ffff002a) goto LAB_00066734;
      if (_DAT_ffff0078 < 500) {
        _DAT_ffff0078 = _DAT_ffff0078 + 1;
      }
      else {
        DAT_ffff0084 = DAT_ffff0084 | 8;
      }
    }
    else {
      _DAT_ffff0078 = 0;
      if (_DAT_ffff0076 < 500) {
        _DAT_ffff0076 = _DAT_ffff0076 + 1;
      }
      else {
        DAT_ffff0084 = DAT_ffff0084 | 0x10;
      }
    }
  }
  uVar2 = (uint)(char)DAT_ffff0086;
  if ((uVar2 & 0x40) != 0) {
    puVar3 = (undefined *)(_DAT_ffff0208 + 0xa9e);
    if (&DAT_0000ffff < puVar3) {
      puVar3 = &DAT_0000ffff;
    }
    if (((uint)puVar3 & 0xffff) <= (uint)_DAT_ffff002a) {
      _DAT_ffff0074 = 0;
      uVar2 = 0xfa;
      if (_DAT_ffff0072 < 0xfa) {
        _DAT_ffff0072 = _DAT_ffff0072 + 1;
      }
      else {
        uVar2 = (int)(char)DAT_ffff0084 | 4;
        DAT_ffff0084 = (byte)uVar2;
      }
      goto LAB_000667cc;
    }
    _DAT_ffff0072 = 0;
    uVar4 = _DAT_ffff0208 - 0xa9e;
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    if ((uint)_DAT_ffff002a <= (uVar4 & 0xffff)) {
      uVar2 = 0xfa;
      if (_DAT_ffff0074 < 0xfa) {
        _DAT_ffff0074 = _DAT_ffff0074 + 1;
      }
      else {
        uVar2 = (int)(char)DAT_ffff0084 | 2;
        DAT_ffff0084 = (byte)uVar2;
      }
      goto LAB_000667cc;
    }
  }
  _DAT_ffff0072 = 0;
  _DAT_ffff0074 = 0;
LAB_000667cc:
  if (0x9c4 < _DAT_ffff003e) {
    puVar3 = (undefined *)(_DAT_ffff0208 + 0x43f);
    if (&DAT_0000ffff < puVar3) {
      puVar3 = &DAT_0000ffff;
    }
    uVar2 = _DAT_ffff0208 - 0x43f;
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
    if (((uint)_DAT_ffff002a < ((uint)puVar3 & 0xffff)) && ((uVar2 & 0xffff) < (uint)_DAT_ffff002a))
    {
      uVar2 = 1;
      if (_DAT_ffff01ce != 0) {
        uVar2 = 1;
        _DAT_ffff01ce = _DAT_ffff01ce - 1;
      }
    }
    else if (_DAT_ffff01ce < 500) {
      uVar2 = 2;
      _DAT_ffff01ce = _DAT_ffff01ce + 2;
    }
    else {
      uVar2 = (int)(char)DAT_ffff0084 | 1;
      DAT_ffff0084 = (byte)uVar2;
    }
  }
  return uVar2;
}

