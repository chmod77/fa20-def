
/* WARNING: Removing unreachable block (ram,0x0005a668) */
/* WARNING: Removing unreachable block (ram,0x0005a674) */
/* WARNING: Removing unreachable block (ram,0x0005a676) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0005a63a(void)

{
  byte bVar2;
  byte bVar3;
  uint uVar1;
  
  if (((int)DAT_ffff0000 & 2U) == 0) {
    _DAT_fffef39c = 0;
    _DAT_fffef39e = 0;
    _DAT_fffef3a0 = 0;
    _DAT_fffef3ec = 0;
    _DAT_fffef3ee = 0;
    _DAT_fffef3f0 = 0;
    _DAT_fffef3f2 = 0;
    _DAT_fffef3f4 = 0;
    _DAT_fffef3f6 = 0;
    _DAT_fffef3f8 = 0;
    _DAT_fffef3fa = 0;
    return (int)DAT_ffff0000;
  }
  bVar2 = DAT_fffef39a | 0x80;
  if ((DAT_ffff0002 & 8) == 0) {
    bVar2 = DAT_fffef39a & 0x7f;
  }
  DAT_fffef39a = bVar2;
  if (((int)(char)bVar2 & 0x80U) == 0) {
    _DAT_fffef3ec = 0;
    DAT_fffef314 = DAT_fffef314 & 0xfb;
  }
  else {
    if (2 < _DAT_fffef3ec) {
      DAT_fffef314 = DAT_fffef314 | 4;
    }
    _DAT_fffef3ec = FUN_00001540(_DAT_fffef3ec + 1);
  }
  if ((DAT_fffef314 & 4) != 0) {
    DAT_fffef3e9 = DAT_fffef3e9 | 0x10;
  }
  if (((_DAT_fffef38c < 0x199a) || (0x4ccc < _DAT_fffef38c)) || (DAT_ffffab41 < 0x7d)) {
    DAT_fffef531 = DAT_fffef531 & 0xfe;
  }
  else {
    DAT_fffef531 = DAT_fffef531 | 1;
  }
  if (((DAT_fffef532 & 1) == 0) || ((DAT_fffef531 & 1) == 0)) {
    if (((DAT_fffef532 & 1) == 0) && ((DAT_fffef531 & 1) == 0)) {
      DAT_fffef39a = DAT_fffef39a & 0xfe;
    }
  }
  else {
    DAT_fffef39a = DAT_fffef39a | 1;
  }
  bVar2 = DAT_fffef532 | 1;
  if ((DAT_fffef531 & 1) == 0) {
    bVar2 = DAT_fffef532 & 0xfe;
  }
  if (((_DAT_fffef38c < 0x8000) || (0xb332 < _DAT_fffef38c)) || (DAT_ffffab41 < 0x7d)) {
    DAT_fffef531 = DAT_fffef531 & 0xfd;
  }
  else {
    DAT_fffef531 = DAT_fffef531 | 2;
  }
  if (((bVar2 & 2) == 0) || ((DAT_fffef531 & 2) == 0)) {
    if (((bVar2 & 2) == 0) && ((DAT_fffef531 & 2) == 0)) {
      DAT_fffef39a = DAT_fffef39a & 0xfd;
    }
  }
  else {
    DAT_fffef39a = DAT_fffef39a | 2;
  }
  bVar3 = bVar2 | 2;
  if ((DAT_fffef531 & 2) == 0) {
    bVar3 = bVar2 & 0xfd;
  }
  if (((_DAT_fffef38c < 0x4ccd) || (0x7fff < _DAT_fffef38c)) || (DAT_ffffab41 < 0x7d)) {
    DAT_fffef531 = DAT_fffef531 & 0xf7;
  }
  else {
    DAT_fffef531 = DAT_fffef531 | 8;
  }
  if (((bVar3 & 8) == 0) || ((DAT_fffef531 & 8) == 0)) {
    if (((bVar3 & 8) == 0) && ((DAT_fffef531 & 8) == 0)) {
      DAT_fffef39a = DAT_fffef39a & 0xd7;
    }
  }
  else {
    DAT_fffef39a = DAT_fffef39a | 0x28;
  }
  bVar2 = bVar3 | 8;
  if ((DAT_fffef531 & 8) == 0) {
    bVar2 = bVar3 & 0xf7;
  }
  if ((_DAT_fffef38c < 0x199a) && (0x7c < DAT_ffffab41)) {
    DAT_fffef531 = DAT_fffef531 | 4;
  }
  else {
    DAT_fffef531 = DAT_fffef531 & 0xfb;
  }
  if (((bVar2 & 4) == 0) || ((DAT_fffef531 & 4) == 0)) {
    if (((bVar2 & 4) == 0) && ((DAT_fffef531 & 4) == 0)) {
      DAT_fffef39a = DAT_fffef39a & 0xfb;
    }
  }
  else {
    DAT_fffef39a = DAT_fffef39a | 4;
  }
  DAT_fffef532 = bVar2 | 4;
  if ((DAT_fffef531 & 4) == 0) {
    DAT_fffef532 = bVar2 & 0xfb;
  }
  if (DAT_ffffab41 < 0x7d) {
    DAT_fffef533 = 0;
    DAT_fffef534 = 0;
  }
  else {
    if (_DAT_fffef38c < 0xe666) {
      DAT_fffef533 = FUN_0000152c(DAT_fffef533 + 1);
      DAT_fffef534 = 0;
    }
    else {
      DAT_fffef534 = FUN_0000152c(DAT_fffef534 + 1);
      DAT_fffef533 = 0;
    }
    if (DAT_fffef533 < 2) {
      if (1 < DAT_fffef534) {
        DAT_fffef39a = DAT_fffef39a & 0xbf;
      }
    }
    else {
      DAT_fffef39a = DAT_fffef39a | 0x40;
    }
  }
  if ((DAT_fffef39a & 1) == 0) {
    _DAT_fffef39c = 0;
    DAT_fffef3ea = DAT_fffef3ea & 0xfe;
  }
  else {
    if ((4 < _DAT_fffef39c) && ((DAT_ffff0789 & 2) != 0)) {
      DAT_fffef3ea = DAT_fffef3ea | 1;
    }
    _DAT_fffef39c = FUN_00001540(_DAT_fffef39c + 1);
  }
  if ((DAT_fffef39a & 2) == 0) {
    _DAT_fffef39e = 0;
    DAT_fffef3ea = DAT_fffef3ea & 0xfd;
  }
  else {
    if ((4 < _DAT_fffef39e) && ((DAT_ffff0789 & 2) != 0)) {
      DAT_fffef3ea = DAT_fffef3ea | 2;
    }
    _DAT_fffef39e = FUN_00001540(_DAT_fffef39e + 1);
  }
  if ((DAT_fffef39a & 8) == 0) {
    _DAT_fffef3a0 = 0;
    DAT_fffef3ea = DAT_fffef3ea & 0xf7;
  }
  else {
    if ((4 < _DAT_fffef3a0) && ((DAT_ffff0789 & 2) != 0)) {
      DAT_fffef3ea = DAT_fffef3ea | 8;
    }
    _DAT_fffef3a0 = FUN_00001540(_DAT_fffef3a0 + 1);
  }
  if ((DAT_fffef39a & 4) == 0) {
    _DAT_fffef3f8 = 0;
    DAT_fffef3ea = DAT_fffef3ea & 0xfb;
  }
  else {
    if (_DAT_fffef3f8 != 0) {
      DAT_fffef3ea = DAT_fffef3ea | 4;
    }
    _DAT_fffef3f8 = FUN_00001540(_DAT_fffef3f8 + 1);
  }
  if ((DAT_ffff0003 & 4) == 0) {
    _DAT_fffef3ee = 0;
    DAT_fffef3e9 = DAT_fffef3e9 & 0xfe;
  }
  else {
    if (2 < _DAT_fffef3ee) {
      DAT_fffef3e9 = DAT_fffef3e9 | 1;
    }
    _DAT_fffef3ee = FUN_00001540(_DAT_fffef3ee + 1);
  }
  if ((DAT_ffff0003 & 8) == 0) {
    _DAT_fffef3f0 = 0;
    DAT_fffef3e9 = DAT_fffef3e9 & 0xfd;
  }
  else {
    if (2 < _DAT_fffef3f0) {
      DAT_fffef3e9 = DAT_fffef3e9 | 2;
    }
    _DAT_fffef3f0 = FUN_00001540(_DAT_fffef3f0 + 1);
  }
  if ((DAT_fffef39a & 0x20) == 0) {
    _DAT_fffef3f2 = 0;
    DAT_fffef3ea = DAT_fffef3ea & 0xdf;
  }
  else {
    if (199 < _DAT_fffef3f2) {
      DAT_fffef3ea = DAT_fffef3ea | 0x20;
    }
    _DAT_fffef3f2 = FUN_00001540(_DAT_fffef3f2 + 1);
  }
  if ((DAT_ffff0004 & 0x20) == 0) {
    _DAT_fffef3f4 = 0;
    DAT_fffef3e9 = DAT_fffef3e9 & 0xfb;
  }
  else {
    if (9 < _DAT_fffef3f4) {
      DAT_fffef3e9 = DAT_fffef3e9 | 4;
    }
    _DAT_fffef3f4 = FUN_00001540(_DAT_fffef3f4 + 1);
  }
  if (((int)DAT_fffeef76 & 0x80U) != 0) {
    if ((DAT_ffff0002 & 1) != 0) {
      if (2 < _DAT_fffef3f6) {
        DAT_fffef3e9 = DAT_fffef3e9 | 8;
      }
      _DAT_fffef3f6 = FUN_00001540(_DAT_fffef3f6 + 1);
      goto LAB_0005abaa;
    }
    _DAT_fffef3f6 = 0;
  }
  DAT_fffef3e9 = DAT_fffef3e9 & 0xf7;
LAB_0005abaa:
  if ((DAT_fffef39a & 0x40) == 0) {
    uVar1 = (uint)(char)DAT_fffef3ea;
    _DAT_fffef3fa = 0;
    DAT_fffef3ea = (char)(uVar1 & 0xbf);
    return uVar1 & 0xbf;
  }
  if (4 < _DAT_fffef3fa) {
    DAT_fffef3ea = DAT_fffef3ea | 0x40;
  }
  uVar1 = FUN_00001540(_DAT_fffef3fa + 1);
  _DAT_fffef3fa = (short)uVar1;
  return uVar1;
}

