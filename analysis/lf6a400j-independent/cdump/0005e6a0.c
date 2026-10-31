
/* WARNING: Removing unreachable block (ram,0x0005e7b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005e6a0(void)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = false;
  for (uVar2 = 0; (uVar2 & 0xff) < 0x67; uVar2 = (uVar2 & 0xff) + 1) {
    if (*(char *)((uVar2 & 0xff) - 0xf7a9) != '\0') {
      bVar1 = true;
      break;
    }
  }
  if ((DAT_fffeeec2 & 4) != 0) {
    if (DAT_ffff091d == -0x5b) {
      if (_DAT_fffef3bc == 0) {
        _DAT_fffef3bc = 0x20;
      }
      _DAT_fffef3bc = _DAT_fffef3bc - 1;
      if (_DAT_fffef3bc < 0xd) {
        DAT_fffef37e = DAT_fffef37e & 0xfb;
      }
      else {
        DAT_fffef37e = DAT_fffef37e | 4;
      }
      DAT_ffff6559 = DAT_ffff6559 & 0xf7;
      return;
    }
    if (DAT_ffff091d == -1) {
      if (bVar1) {
        DAT_fffef37e = DAT_fffef37e | 4;
        _DAT_fffef3bc = 0;
        DAT_ffff6559 = DAT_ffff6559 | 8;
        return;
      }
      if ((DAT_fffeeec6 & 1) != 0) {
        DAT_fffef37e = DAT_fffef37e | 4;
        _DAT_fffef3bc = 0;
        return;
      }
      if (_DAT_fffef3bc == 0) {
        _DAT_fffef3bc = 0x20;
      }
      _DAT_fffef3bc = _DAT_fffef3bc - 1;
      if (_DAT_fffef3bc < 0xd) {
LAB_0005e7da:
        DAT_fffef37e = DAT_fffef37e & 0xfb;
        return;
      }
LAB_0005e7e2:
      DAT_fffef37e = DAT_fffef37e | 4;
      return;
    }
    if (DAT_ffff091d != '\0') {
      _DAT_fffef3bc = 0;
      return;
    }
    if (((DAT_ffff3707 < 3) || (DAT_ffff3702 < 3)) || (DAT_ffff3701 < 3)) {
      if ((DAT_fffef37e & 2) == 0) {
        DAT_fffef37e = DAT_fffef37e | 4;
        _DAT_fffef3bc = 0;
      }
      else {
        if (_DAT_fffef3bc == 0) {
          _DAT_fffef3bc = 100;
        }
        _DAT_fffef3bc = _DAT_fffef3bc - 1;
        if (_DAT_fffef3bc < 0x32) {
          DAT_fffef37e = DAT_fffef37e & 0xfb;
        }
        else {
          DAT_fffef37e = DAT_fffef37e | 4;
        }
      }
      DAT_ffff6559 = DAT_ffff6559 | 8;
      return;
    }
    if ((DAT_fffef37e & 2) != 0) {
      if (_DAT_fffef3bc == 0) {
        _DAT_fffef3bc = 100;
      }
      _DAT_fffef3bc = _DAT_fffef3bc - 1;
      if (_DAT_fffef3bc < 0x32) goto LAB_0005e7da;
      goto LAB_0005e7e2;
    }
    if ((DAT_fffeeec6 & 1) != 0) {
      DAT_fffef37e = DAT_fffef37e | 4;
      goto LAB_0005e84a;
    }
  }
  DAT_fffef37e = DAT_fffef37e & 0xfb;
LAB_0005e84a:
  DAT_ffff6559 = DAT_ffff6559 & 0xf7;
  _DAT_fffef3bc = 0;
  return;
}

