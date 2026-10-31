
/* WARNING: Removing unreachable block (ram,0x0005ac34) */
/* WARNING: Removing unreachable block (ram,0x0005ac4a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0005ac24(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 1;
  _DAT_fffef64c = _DAT_fffef64c | 0x300;
  _DAT_fffef6d0 = 0;
  _DAT_fffef6d2 = 0;
  _DAT_fffef6d4 = 0;
  _DAT_fffef6d6 = 0;
  _DAT_fffef6d8 = 0;
  _DAT_fffef6da = 0;
  _DAT_fffef6dc = 0;
  _DAT_fffef6de = 0;
  if ((_DAT_fffef64c & 0x200) != 0) {
    bVar1 = (_DAT_ffff3b50 & 0x80) == 0;
    if (bVar1) {
      DAT_ffff313b = 0;
    }
    uVar2 = (uint)bVar1;
    uVar3 = _DAT_ffff3b50 | 0x80;
    DAT_ffff2fe8 = DAT_ffff2fe8 | 4;
    DAT_fffef455 = (_DAT_ffff3b50 & 0x100) != 0;
    _DAT_fffef65c = _DAT_fffef65c | 4;
    if ((_DAT_fffef64c & 0x100) == 0) {
      DAT_fffff020 = 0x21;
    }
    else {
      DAT_fffff020 = 1;
      DAT_fffef660 = 1;
    }
    DAT_fffff026 = 0xf0;
    DAT_fffff021 = 0x81;
    _DAT_ffff3b50 = uVar3;
    if (uVar2 == 1) {
      _DAT_fffff732 = _DAT_fffff732 | 0x50;
      FUN_0005d944();
      FUN_0005adca();
      DAT_fffef674 = 0;
      FUN_0005cae6();
      uVar2 = FUN_0005d83a();
      return uVar2;
    }
  }
  return uVar2;
}

