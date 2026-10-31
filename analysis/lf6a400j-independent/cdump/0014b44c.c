
/* WARNING: Removing unreachable block (ram,0x0014b574) */
/* WARNING: Removing unreachable block (ram,0x0014b5e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014b44c(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  short sVar7;
  short sVar8;
  int iVar6;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  
  _DAT_ffff1f46 = _DAT_ffff1f46 >> 6;
  _DAT_ffff1f42 = _DAT_ffff1f42 >> 6;
  _DAT_ffff1f44 = _DAT_ffff1f42;
  _DAT_ffff1f48 = _DAT_ffff1f46;
  uVar5 = FUN_00001550(0xf0,FUN_00001550);
  bVar10 = DAT_ffff201c;
  bVar9 = DAT_ffff201b;
  FUN_00001550(uVar5,FUN_00001550);
  _DAT_ffff2016 = _DAT_ffff1f48;
  _DAT_ffff2018 = _DAT_ffff1f44;
  if (((int)(char)DAT_ffff201a & 0x80U) == 0) {
    _DAT_ffff1ff8 = 0;
    _DAT_ffff1ffa = 0;
  }
  else if (((int)(char)DAT_ffff2014 & 0x80U) == 0) {
    _DAT_ffff1ff8 = _DAT_ffff1f48;
    _DAT_ffff1ffa = _DAT_ffff1f44;
    DAT_ffff2014 = DAT_ffff2014 | 0x80;
  }
  else {
    _DAT_ffff1ff8 = FUN_0016b4d8(&DAT_ffff1ff8,(int)(short)_DAT_ffff1f48,0x4000);
    _DAT_ffff1ffa = FUN_0016b4d8(&DAT_ffff1ffa,(int)(short)_DAT_ffff2018,0x4000);
  }
  if ((((int)(char)DAT_ffff201a & 0x80U) == 0) || ((DAT_ffff201a & 0x40) == 0)) {
    _DAT_ffff1ffc = 0;
    _DAT_ffff1ffe = 0;
    _DAT_ffff2000 = 0;
    _DAT_ffff2002 = 0;
  }
  else {
    uVar11 = (uint)_DAT_ffff1ff8 * -0x53aa;
    if ((int)uVar11 < 0) {
      uVar11 = uVar11 + 0x3fff;
    }
    iVar6 = (((uint)((uVar11 & 0x80000000) != 0) * -2 | (uint)((uVar11 & 0x40000000) != 0)) << 0x10
            | (uVar11 & 0x3fffffff) >> 0xe) + 0x3b5;
    uVar5 = FUN_0016b5ec(iVar6,&DAT_00014d10,iVar6,FUN_0016b5ec);
    _DAT_ffff1ffc = FUN_0016b640(uVar5,0);
    iVar6 = ((uint)(((uint)_DAT_ffff1ffa * 0x53aa & 0x40000000) != 0) << 0x10 |
            ((uint)_DAT_ffff1ffa * 0x53aa & 0x3fffffff) >> 0xe) - 0x59;
    uVar5 = FUN_0016b5ec(iVar6,&DAT_00014d12,iVar6,FUN_0016b5ec);
    _DAT_ffff1ffe = FUN_0016b640(uVar5,0);
    uVar11 = (uint)_DAT_ffff2016 * -0x53aa;
    if ((int)uVar11 < 0) {
      uVar11 = uVar11 + 0x3fff;
    }
    iVar6 = (((uint)((uVar11 & 0x80000000) != 0) * -2 | (uint)((uVar11 & 0x40000000) != 0)) << 0x10
            | (uVar11 & 0x3fffffff) >> 0xe) + 0x3b5;
    uVar5 = FUN_0016b5ec(iVar6,&DAT_00014d10,iVar6,FUN_0016b5ec);
    _DAT_ffff2000 = FUN_0016b640(uVar5,0);
    iVar6 = ((uint)(((uint)_DAT_ffff2018 * 0x53aa & 0x40000000) != 0) << 0x10 |
            ((uint)_DAT_ffff2018 * 0x53aa & 0x3fffffff) >> 0xe) - 0x59;
    uVar5 = FUN_0016b5ec(iVar6,&DAT_00014d12,iVar6,FUN_0016b5ec);
    _DAT_ffff2002 = FUN_0016b640(uVar5,0);
  }
  bVar2 = (bVar10 & 0x38) == 0;
  bVar1 = 0x7c < DAT_ffff2c5c;
  if ((bVar2 && bVar1) && ((bVar9 & 0x40) != 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  bVar3 = (bVar9 & 0x40) == 0;
  if (bVar4) {
    _DAT_ffff200a = FUN_00001540(_DAT_ffff200a + 1);
  }
  else if ((((_DAT_ffff3640 < _DAT_ffff1ffc) && (2 < _DAT_ffff200a)) && ((DAT_ffff2015 & 0x40) != 0)
           ) && ((DAT_ffff2015 & 1) == 0)) {
    _DAT_ffff200a = 0;
  }
  if (bVar4) {
    _DAT_ffff200c = FUN_00001540(_DAT_ffff200c + 1);
  }
  else if (((_DAT_ffff3642 < _DAT_ffff1ffe) && (2 < _DAT_ffff200c)) &&
          (((DAT_ffff2015 & 0x40) != 0 && ((DAT_ffff2015 & 1) == 0)))) {
    _DAT_ffff200c = 0;
  }
  if ((bVar2 && bVar1) && bVar3) {
    _DAT_ffff2010 = FUN_00001540(_DAT_ffff2010 + 1);
  }
  else if (((_DAT_ffff1ffc < _DAT_ffff3644) && (0x50 < _DAT_ffff2010)) &&
          ((((int)(char)DAT_ffff2015 & 0x80U) != 0 && ((DAT_ffff2015 & 2) == 0)))) {
    _DAT_ffff2010 = 0;
  }
  if ((bVar2 && bVar1) && bVar3) {
    _DAT_ffff2012 = FUN_00001540(_DAT_ffff2012 + 1);
  }
  else if ((((_DAT_ffff1ffc < _DAT_ffff3644) && (0x50 < _DAT_ffff2012)) &&
           (((int)(char)DAT_ffff2015 & 0x80U) != 0)) && ((DAT_ffff2015 & 2) == 0)) {
    _DAT_ffff2012 = 0;
  }
  if ((((int)(char)DAT_ffff201a & 0x80U) == 0) || ((DAT_ffff201a & 0x40) == 0)) {
    _DAT_ffff3640 = 0;
    _DAT_ffff3642 = 0;
    _DAT_ffff3644 = 0;
    _DAT_ffff3646 = 0;
  }
  else {
    sVar7 = FUN_0016bc08(&DAT_001627f4,(int)_DAT_ffff1a3a);
    sVar8 = FUN_0016bc08(&PTR_PTR_00162800,(int)_DAT_ffff1a3a);
    if (((bVar2 && bVar1) && ((bVar9 & 0x40) != 0)) && (_DAT_ffff1ffc <= _DAT_ffff3640)) {
      _DAT_ffff3640 =
           FUN_0016b944((int)(short)_DAT_ffff3640,(int)sVar7,(int)(short)_DAT_ffff1ffc,FUN_0016b944)
      ;
    }
    else if (((2 < _DAT_ffff200a) && ((DAT_ffff2015 & 1) == 0)) && ((DAT_ffff2015 & 0x40) != 0)) {
      _DAT_ffff3640 = FUN_0016b390((int)(short)_DAT_ffff3640,5,0x146,FUN_0016b390);
    }
    if (((bVar2 && bVar1) && ((bVar9 & 0x40) != 0)) && (_DAT_ffff1ffe <= _DAT_ffff3642)) {
      _DAT_ffff3642 =
           FUN_0016b944((int)(short)_DAT_ffff3642,(int)sVar7,(int)(short)_DAT_ffff1ffe,FUN_0016b944)
      ;
    }
    else if (((2 < _DAT_ffff200c) && ((DAT_ffff2015 & 1) == 0)) && ((DAT_ffff2015 & 0x40) != 0)) {
      _DAT_ffff3642 = FUN_0016b390((int)(short)_DAT_ffff3642,5,0x146);
    }
    if (((bVar2 && bVar1) && ((bVar9 & 0x40) == 0)) && (_DAT_ffff3644 <= _DAT_ffff1ffc)) {
      _DAT_ffff3644 = FUN_0016b390((int)(short)_DAT_ffff3644,(int)sVar8,(int)(short)_DAT_ffff1ffc);
    }
    else if (((0x50 < _DAT_ffff2010) && ((DAT_ffff2015 & 2) == 0)) &&
            (((int)(char)DAT_ffff2015 & 0x80U) != 0)) {
      _DAT_ffff3644 = FUN_0016b944((int)(short)_DAT_ffff3644,5,0x216);
    }
    if (((bVar2 && bVar1) && ((bVar9 & 0x40) == 0)) && (_DAT_ffff3646 <= _DAT_ffff1ffe)) {
      _DAT_ffff3646 = FUN_0016b390((int)(short)_DAT_ffff3646,(int)sVar8,(int)(short)_DAT_ffff1ffe);
    }
    else if (((0x50 < _DAT_ffff2012) && ((DAT_ffff2015 & 2) == 0)) &&
            (((int)(char)DAT_ffff2015 & 0x80U) != 0)) {
      _DAT_ffff3646 = FUN_0016b944((int)(short)_DAT_ffff3646,5,0x216);
    }
  }
  if (0x2f < _DAT_ffff2008) {
    DAT_ffff3648 = DAT_ffff3648 | 0x40;
  }
  if (bVar4) {
    if (0xa9 < _DAT_ffff2008) {
      DAT_ffff3648 = DAT_ffff3648 | 0x20;
    }
    _DAT_ffff2008 = FUN_00001540(_DAT_ffff2008 + 1);
  }
  if (0x7d < _DAT_ffff200e) {
    DAT_ffff3648 = DAT_ffff3648 | 0x80;
  }
  if ((bVar2 && bVar1) && bVar3) {
    _DAT_ffff200e = FUN_00001540(_DAT_ffff200e + 1);
  }
  if ((((int)(char)DAT_ffff201a & 0x80U) == 0) ||
     ((((DAT_ffff201a & 0x40) == 0 || ((bVar10 & 0x20) != 0)) && (((int)(char)bVar9 & 0x80U) == 0)))
     ) {
    _DAT_ffff2004 = 0;
    _DAT_ffff2006 = 0;
  }
  else if ((((DAT_ffff201a & 0x40) == 0) || ((bVar10 & 0x20) != 0)) &&
          (((int)(char)bVar9 & 0x80U) != 0)) {
    _DAT_ffff2004 = 0x1000;
    _DAT_ffff2006 = 0x1000;
  }
  else if (((DAT_ffff201a & 0x40) != 0) && ((bVar10 & 0x20) == 0)) {
    if ((uint)_DAT_ffff3644 - (uint)_DAT_ffff3640 != 0) {
      iVar6 = __sdiv32_r1_by_r0(((uint)_DAT_ffff1ffc - (uint)_DAT_ffff3640) * 0x1000,
                                (uint)_DAT_ffff3644 - (uint)_DAT_ffff3640);
      _DAT_ffff2004 = FUN_0016b5d4(iVar6);
    }
    if ((uint)_DAT_ffff3646 - (uint)_DAT_ffff3642 != 0) {
      iVar6 = __sdiv32_r1_by_r0(((uint)_DAT_ffff1ffe - (uint)_DAT_ffff3642) * 0x1000,
                                (uint)_DAT_ffff3646 - (uint)_DAT_ffff3642);
      _DAT_ffff2006 = FUN_0016b5d4(iVar6);
    }
  }
  bVar9 = DAT_ffff2015 | 1;
  if ((DAT_ffff2015 & 0x40) == 0) {
    bVar9 = DAT_ffff2015 & 0xfe;
  }
  bVar10 = bVar9 | 2;
  if (((int)(char)bVar9 & 0x80U) == 0) {
    bVar10 = bVar9 & 0xfd;
  }
  if (((int)(char)DAT_ffff201a & 0x80U) == 0) {
    DAT_ffff2015 = bVar10 & 7;
  }
  else {
    if ((_DAT_ffff2004 < 0x333) && (_DAT_ffff2006 < 0x333)) {
      DAT_ffff2015 = bVar10 | 0x80;
    }
    else {
      DAT_ffff2015 = bVar10 & 0x7f;
    }
    if ((_DAT_ffff2004 < 0xccc) || (_DAT_ffff2006 < 0xccc)) {
      DAT_ffff2015 = DAT_ffff2015 & 0xbf;
    }
    else {
      DAT_ffff2015 = DAT_ffff2015 | 0x40;
    }
    if (_DAT_ffff2004 < 0x333) {
      DAT_ffff2015 = DAT_ffff2015 | 0x20;
    }
    else {
      DAT_ffff2015 = DAT_ffff2015 & 0xdf;
    }
    if (_DAT_ffff2004 < 0xccc) {
      DAT_ffff2015 = DAT_ffff2015 & 0xef;
    }
    else {
      DAT_ffff2015 = DAT_ffff2015 | 0x10;
    }
    if (_DAT_ffff2006 < 0x333) {
      DAT_ffff2015 = DAT_ffff2015 | 8;
    }
    else {
      DAT_ffff2015 = DAT_ffff2015 & 0xf7;
    }
    if (0xccb < _DAT_ffff2006) {
      DAT_ffff2015 = DAT_ffff2015 | 4;
      return;
    }
  }
  DAT_ffff2015 = DAT_ffff2015 & 0xfb;
  return;
}

