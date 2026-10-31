
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000516d8(void)

{
  ushort uVar1;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  short sVar6;
  byte bVar7;
  code *pcVar8;
  uint uVar9;
  int iVar10;
  ushort uVar2;
  
  if ((DAT_fffeef9b & 3) != 2) {
    _DAT_fffef006 = 0;
    DAT_fffef5ae = 0;
    goto LAB_00051914;
  }
  if ((bool)(DAT_fffef5ad & 1) != ((DAT_fffeef99 & 0x10) != 0)) {
    DAT_fffef5ae = 2;
  }
  if (DAT_fffef5ae == 0) {
    if ((DAT_fffeef99 & 0x10) == 0) {
      _DAT_fffef008 = _DAT_fffeeff8;
      bVar7 = 2;
    }
    else {
      _DAT_fffef008 = _DAT_fffeeffa;
      bVar7 = 9;
    }
    DAT_fffef00a = FUN_0000152c((uint)bVar7 << 3);
    uVar1 = _DAT_fffef008;
    uVar2 = _DAT_fffef57a;
    if (_DAT_fffef008 <= _DAT_fffef57a) {
      uVar1 = _DAT_fffef57a;
      uVar2 = _DAT_fffef008;
    }
    uVar9 = (uint)DAT_fffef00a;
    if (uVar9 * 0x9600 == 0) {
LAB_00051864:
      sVar6 = -0x8000;
    }
    else {
      uVar3 = FUN_0016bd34(_DAT_fffeefee + 0x280,uVar9,FUN_0016bd34);
      pcVar8 = __udiv32_r1_by_r0;
      puVar4 = (undefined *)
               __udiv32_r1_by_r0((uint)(ushort)(uVar1 - uVar2) * (uVar3 & 0xffff),uVar9 * 0x12c00);
      if (&DAT_00007fff < puVar4) goto LAB_00051864;
      iVar10 = 500;
      iVar5 = (*pcVar8)();
      sVar6 = FUN_0016bd60(iVar5 + iVar10 * (int)puVar4,&DAT_00008000);
    }
    if (_DAT_fffef57a < _DAT_fffef008) {
      _DAT_fffef006 = -sVar6;
    }
    else {
      _DAT_fffef006 = FUN_0016b914();
    }
    uVar9 = FUN_0016a914((int)_DAT_fffef006,0xfffffce0,0x14d);
    bVar7 = DAT_fffef005 | 0x80;
    if ((uVar9 & 1) == 0) {
      bVar7 = DAT_fffef005 & 0x7f;
    }
    DAT_fffef005 = bVar7;
    uVar9 = FUN_0016a914(1000,(int)_DAT_fffef006,0x14d,(bVar7 & 0x40) != 0);
    bVar7 = DAT_fffef005 | 0x40;
    if ((uVar9 & 1) == 0) {
      bVar7 = DAT_fffef005 & 0xbf;
    }
    DAT_fffef005 = bVar7;
    if ((((int)(char)bVar7 & 0x80U) == 0) || ((bVar7 & 0x40) == 0)) {
      DAT_fffeef9a = DAT_fffeef9a & 0xef;
    }
    else {
      DAT_fffeef9a = DAT_fffeef9a | 0x10;
    }
  }
  DAT_fffef5ae = FUN_0016bd28(DAT_fffef5ae - 1);
LAB_00051914:
  bVar7 = DAT_fffef5ad | 1;
  if ((DAT_fffeef99 & 0x10) == 0) {
    bVar7 = DAT_fffef5ad & 0xfe;
  }
  DAT_fffef5ad = bVar7;
  return;
}

