
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0013b976(void)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar1 = FUN_00001550(0x70);
  for (uVar2 = 0; (uVar2 & 0xff) < 4; uVar2 = uVar2 + 1) {
    uVar2 = uVar2 & 0xff;
    *(undefined4 *)(&DAT_00168eac)[uVar2 * 2] = (&DAT_00168e84)[uVar2];
    *(undefined4 *)(&DAT_00168eb0)[uVar2 * 2] = (&DAT_00168e94)[uVar2];
    *(ushort *)(&DAT_00168ed0)[uVar2 * 2] = (ushort)(byte)(&DAT_00168ea8)[uVar2] << 1;
  }
  _DAT_fffeeeb8 = 0x2ee;
  FUN_00001550(uVar1);
  uVar2 = __udiv32_r1_by_r0((uint)_DAT_ffff2986 * 0x30,0xb4);
  _DAT_ffff29dc = FUN_00001540(uVar2 >> 1);
  DAT_ffffb3c6 = 0x28;
  _DAT_ffffb3be = 0x186a;
  if ((DAT_ffff0012 & 1) == 0) {
    _DAT_ffffb3c8 = 0x4e2;
  }
  else {
    _DAT_ffffb3c8 = 0x9c4;
  }
  _DAT_ffffb3ca = 1000;
  DAT_ffffb3c0 = 0x7d;
  _DAT_ffffb3cc = 0x3200;
  DAT_ffffb3c1 = 0x7d;
  if ((DAT_ffff0003 & 8) == 0) {
    if ((DAT_ffff0000 & 4) != 0) {
      DAT_ffffb3c3 = 0xfa;
      DAT_ffffb3c2 = 0;
      goto LAB_0013ba94;
    }
    if ((DAT_ffff0000 & 0x20) == 0) {
      DAT_ffffb3c2 = 0;
    }
    else {
      if ((DAT_fffee690 & 0x20) != 0) {
        DAT_ffffb3c2 = 0;
        DAT_ffffb3c3 = 0x4b;
        goto LAB_0013ba94;
      }
      DAT_ffffb3c2 = 0x4b;
    }
  }
  else {
    DAT_ffffb3c2 = 0xfa;
  }
  DAT_ffffb3c3 = 0;
LAB_0013ba94:
  uVar2 = (uint)(char)DAT_ffff0003;
  if ((uVar2 & 8) == 0) {
    if (((int)(char)DAT_ffff0000 & 4U) != 0) {
      _DAT_ffffb3be = 0x186a;
      DAT_ffffb3c0 = 0x7d;
      DAT_ffffb3c1 = 0x7d;
      DAT_ffffb3c4 = 0xfa;
      DAT_ffffb3c5 = 0;
      DAT_ffffb3c6 = 0x28;
      _DAT_ffffb3ca = 1000;
      _DAT_ffffb3cc = 0x3200;
      _DAT_ffffb3ce = 0x5dc;
      _DAT_ffffb3d0 = 3000;
      DAT_ffffb3d2 = 3;
      _DAT_ffffb3d4 = 500;
      return (int)(char)DAT_ffff0000;
    }
    uVar2 = (uint)DAT_ffff0004;
    if ((uVar2 & 0x20) == 0) {
      DAT_ffffb3c5 = 0;
    }
    else {
      uVar2 = (uint)(char)DAT_fffee690;
      DAT_ffffb3c5 = (uVar2 & 0x20) == 0;
      if (!(bool)DAT_ffffb3c5) {
        _DAT_ffffb3be = 0x186a;
        DAT_ffffb3c0 = 0x7d;
        DAT_ffffb3c1 = 0x7d;
        DAT_ffffb3c4 = 0x4b;
        DAT_ffffb3c6 = 0x28;
        _DAT_ffffb3ca = 1000;
        _DAT_ffffb3cc = 0x3200;
        _DAT_ffffb3ce = 0x5dc;
        _DAT_ffffb3d0 = 3000;
        DAT_ffffb3d2 = 3;
        _DAT_ffffb3d4 = 500;
        return uVar2;
      }
      DAT_ffffb3c5 = 0x4b;
    }
  }
  else {
    DAT_ffffb3c5 = 0xfa;
  }
  DAT_ffffb3c4 = 0;
  _DAT_ffffb3ce = 0x5dc;
  _DAT_ffffb3d0 = 3000;
  DAT_ffffb3d2 = 3;
  _DAT_ffffb3d4 = 500;
  return uVar2;
}

