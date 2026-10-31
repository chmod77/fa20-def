
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00048cca(void)

{
  uint uVar1;
  uint uVar2;
  
  if ((DAT_fffef310 & 8) == 0) {
    if (((int)(char)DAT_fffef310 & 0x10U) == 0) {
      return (int)(char)DAT_fffef310;
    }
    if (DAT_fffee66f == '\x01') {
      DAT_fffef41a = DAT_fffef41a | 1;
    }
    if (((int)DAT_ffff056f & 0x10U) == 0) {
      _DAT_fffef418 = 0;
      return (int)DAT_ffff056f;
    }
    uVar1 = (uint)DAT_fffef3e1;
    if ((uVar1 & 0x20) == 0) {
      _DAT_fffef418 = 0;
      return uVar1;
    }
    if ((char)(DAT_ffff2731 +
               DAT_ffff2730 +
               DAT_ffff272f + DAT_ffff272e + DAT_ffff272d + DAT_ffff272c + DAT_ffff272b + '0') ==
        DAT_fffef089) {
      _DAT_fffef418 = 0;
      return uVar1;
    }
    uVar2 = (uint)(char)DAT_fffef41a;
    uVar1 = uVar2 & 1;
  }
  else {
    if (DAT_fffee675 == '\x01') {
      DAT_fffef41a = DAT_fffef41a | 2;
    }
    if (((int)DAT_ffff056f & 0x10U) == 0) {
      _DAT_fffef418 = 0;
      return (int)DAT_ffff056f;
    }
    uVar1 = (uint)DAT_fffef3e1;
    if ((uVar1 & 0x20) == 0) {
      _DAT_fffef418 = 0;
      return uVar1;
    }
    if ((char)(DAT_ffff2719 +
               DAT_ffff2718 +
               DAT_ffff2717 + DAT_ffff2716 + DAT_ffff2715 + DAT_ffff2714 + DAT_ffff2713 + '0') ==
        DAT_fffef089) {
      _DAT_fffef418 = 0;
      return uVar1;
    }
    uVar2 = (uint)(char)DAT_fffef41a;
    uVar1 = uVar2 & 2;
  }
  if (uVar1 == 0) {
    _DAT_fffef418 = 0;
    return uVar2;
  }
  if (0x31 < _DAT_fffef418) {
    DAT_fffef2d0 = DAT_fffef2d0 | 0x40;
  }
  uVar1 = FUN_00001540(_DAT_fffef418 + 1);
  _DAT_fffef418 = (short)uVar1;
  return uVar1;
}

