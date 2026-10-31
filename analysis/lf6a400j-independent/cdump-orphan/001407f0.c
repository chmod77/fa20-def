
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

void FUN_001407f0(undefined2 param_1)

{
  undefined4 uVar1;
  byte bVar2;
  
  if ((DAT_ffff1cd3 & 0x10) != 0) {
    DAT_ffff1cd3 = DAT_ffff1cd3 & 0xef;
    FUN_00140bc4((int)(short)_DAT_ffff1ce2,&DAT_ffff1cdc);
    if (_DAT_ffff1cda == _DAT_ffff1cdc) {
      DAT_ffff1cd8 = 0;
      if (_DAT_ffff1ce2 + 1 < 0x10e) {
        _DAT_ffff1ce2 = FUN_00001540(_DAT_ffff1ce2 + 1);
      }
      else {
        _DAT_ffff1ce2 = 0;
        DAT_ffff1ce1 = DAT_ffff1ce1 + '\x01';
      }
    }
    else if (DAT_ffff1cd8 < 8) {
      DAT_ffff1cd3 = DAT_ffff1cd3 | 0x10;
      FUN_001411a0((int)(short)_DAT_ffff1ce2,param_1);
      DAT_ffff1cd8 = FUN_0000152c(DAT_ffff1cd8 + 1);
    }
    else {
      DAT_ffff1cd3 = DAT_ffff1cd3 | 1;
      DAT_ffff1ce1 = '\x03';
    }
    return;
  }
  DAT_ffff1cd3 = DAT_ffff1cd3 | 0x10;
  _DAT_ffff1cda = param_1;
  FUN_00140670();
  FUN_00140480();
  uVar1 = FUN_00001550(0xf0);
  _DAT_ffff675e = _DAT_ffff675e & 0x7fff;
  _DAT_fffff76c = _DAT_fffff76c & 0x7fff;
  FUN_00001550(uVar1);
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
  bVar2 = DAT_fffff01c & 0xbf;
  do {
  } while (((int)(char)bVar2 & 0x80U) == 0);
  if (((int)(char)bVar2 & 0x80U) != 0) {
    bVar2 = DAT_fffff01c & 0x3f;
  }
  do {
    do {
      DAT_fffff01c = bVar2;
      bVar2 = DAT_fffff01c;
    } while ((DAT_fffff01c & 0x20) == 0);
    bVar2 = 0;
  } while( true );
}

