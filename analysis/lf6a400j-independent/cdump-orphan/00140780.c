
/* WARNING: Removing unreachable block (ram,0x00141392) */
/* WARNING: Removing unreachable block (ram,0x00141272) */
/* WARNING: Removing unreachable block (ram,0x0014127a) */
/* WARNING: Removing unreachable block (ram,0x00141280) */
/* WARNING: Removing unreachable block (ram,0x00141286) */
/* WARNING: Removing unreachable block (ram,0x00141292) */
/* WARNING: Removing unreachable block (ram,0x00141298) */
/* WARNING: Removing unreachable block (ram,0x001412a0) */
/* WARNING: Removing unreachable block (ram,0x001411fe) */
/* WARNING: Removing unreachable block (ram,0x001412a6) */
/* WARNING: Removing unreachable block (ram,0x001412bc) */
/* WARNING: Removing unreachable block (ram,0x0014135c) */
/* WARNING: Removing unreachable block (ram,0x00141362) */
/* WARNING: Removing unreachable block (ram,0x00141368) */
/* WARNING: Removing unreachable block (ram,0x00141372) */
/* WARNING: Removing unreachable block (ram,0x0014136c) */
/* WARNING: Removing unreachable block (ram,0x00141376) */
/* WARNING: Removing unreachable block (ram,0x0014137e) */
/* WARNING: Removing unreachable block (ram,0x00141384) */
/* WARNING: Removing unreachable block (ram,0x0014138c) */
/* WARNING: Removing unreachable block (ram,0x001412c2) */
/* WARNING: Removing unreachable block (ram,0x001412f0) */
/* WARNING: Removing unreachable block (ram,0x001412ea) */
/* WARNING: Removing unreachable block (ram,0x001412f4) */
/* WARNING: Removing unreachable block (ram,0x00141300) */
/* WARNING: Removing unreachable block (ram,0x0014130e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00140780(void)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  
  if (((int)(char)DAT_ffffab74 & 8U) != 0) {
    return (int)(char)DAT_ffffab74;
  }
  if (DAT_ffff1ce1 == '\0') {
    uVar1 = 0xaaaa;
  }
  else {
    if (DAT_ffff1ce1 != '\x01') {
      if (DAT_ffff1ce1 != '\x02') {
        if ((DAT_ffff1cd3 & 1) == 0) {
          DAT_ffffab74 = DAT_ffffab74 & 0xfd | 4;
        }
        else {
          DAT_ffffab74 = DAT_ffffab74 & 0xfb | 2;
        }
        uVar2 = (int)(char)(DAT_ffff1cd2 & 0xbf) & 0xfb;
        DAT_ffff1cd2 = (char)uVar2;
        DAT_ffff1cd8 = 0;
        DAT_ffff1ce8 = 0;
        DAT_ffffab74 = DAT_ffffab74 | 8;
        return uVar2;
      }
      if ((DAT_ffff1cd3 & 0x10) == 0) {
        uVar2 = FUN_001413ba(_DAT_ffff1ce2,0xffff,0x20);
        if (_DAT_ffff1ce2 < 0xfff) {
          _DAT_ffff1ce2 = _DAT_ffff1ce2 + 0x20;
        }
        if (0xffe < _DAT_ffff1ce2) {
          _DAT_ffff1ce2 = 0;
          uVar2 = (int)(char)DAT_ffff1cd3 | 0x10;
          DAT_ffff1cd3 = (byte)uVar2;
        }
      }
      else {
        DAT_ffff1cd3 = DAT_ffff1cd3 & 0xef;
        FUN_00001592(0xffffffff,&DAT_ffffab74,0xffffffff);
        for (; _DAT_ffff1ce2 < 0x10e; _DAT_ffff1ce2 = FUN_00001540(_DAT_ffff1ce2 + 1)) {
          FUN_00140bc4((int)(short)_DAT_ffff1ce2,&DAT_ffff1cdc);
          if (_DAT_ffff1cdc != -1) {
            DAT_ffff1cd3 = DAT_ffff1cd3 | 1;
          }
          if (_DAT_ffff1ce2 == 0x87) {
            FUN_00001592();
          }
        }
        uVar2 = FUN_00001592();
        _DAT_ffff1ce2 = 0;
        DAT_ffff1ce1 = DAT_ffff1ce1 + '\x01';
      }
      return uVar2;
    }
    uVar1 = 0x5555;
  }
  if ((DAT_ffff1cd3 & 0x10) == 0) {
    DAT_ffff1cd3 = DAT_ffff1cd3 | 0x10;
    _DAT_ffff1cda = uVar1;
    FUN_00140670();
    FUN_00140480();
    uVar3 = FUN_00001550(0xf0);
    _DAT_ffff675e = _DAT_ffff675e & 0x7fff;
    _DAT_fffff76c = _DAT_fffff76c & 0x7fff;
    FUN_00001550(uVar3);
    do {
    } while (((int)(char)DAT_fffff01c & 0x80U) == 0);
    if (((int)(char)DAT_fffff01c & 0x80U) != 0) {
      DAT_fffff01c = DAT_fffff01c & 0x7f;
    }
    do {
      if ((DAT_fffff01c & 0x20) != 0) {
        DAT_fffff01c = DAT_fffff01c & 0xdf;
      }
    } while ((DAT_fffff01c & 0x40) == 0);
    bVar4 = DAT_fffff01c & 0xbf;
    do {
    } while (((int)(char)bVar4 & 0x80U) == 0);
    if (((int)(char)bVar4 & 0x80U) != 0) {
      bVar4 = DAT_fffff01c & 0x3f;
    }
    do {
      do {
        DAT_fffff01c = bVar4;
        bVar4 = DAT_fffff01c;
      } while ((DAT_fffff01c & 0x20) == 0);
      bVar4 = 0;
    } while( true );
  }
  DAT_ffff1cd3 = DAT_ffff1cd3 & 0xef;
  FUN_00140bc4((int)(short)_DAT_ffff1ce2,&DAT_ffff1cdc);
  if (_DAT_ffff1cda == _DAT_ffff1cdc) {
    DAT_ffff1cd8 = 0;
    if (_DAT_ffff1ce2 + 1 < 0x10e) {
      uVar2 = FUN_00001540(_DAT_ffff1ce2 + 1);
      _DAT_ffff1ce2 = (ushort)uVar2;
    }
    else {
      _DAT_ffff1ce2 = 0;
      DAT_ffff1ce1 = DAT_ffff1ce1 + '\x01';
      uVar2 = 0;
    }
  }
  else if (DAT_ffff1cd8 < 8) {
    DAT_ffff1cd3 = DAT_ffff1cd3 | 0x10;
    FUN_001411a0((int)(short)_DAT_ffff1ce2,uVar1);
    uVar2 = FUN_0000152c(DAT_ffff1cd8 + 1);
    DAT_ffff1cd8 = (byte)uVar2;
  }
  else {
    uVar2 = (int)(char)DAT_ffff1cd3 | 1;
    DAT_ffff1cd3 = (byte)uVar2;
    DAT_ffff1ce1 = '\x03';
  }
  return uVar2;
}

