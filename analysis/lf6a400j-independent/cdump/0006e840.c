
/* WARNING: Removing unreachable block (ram,0x0006ea04) */
/* WARNING: Removing unreachable block (ram,0x0006e8d4) */
/* WARNING: Removing unreachable block (ram,0x0006e96a) */
/* WARNING: Removing unreachable block (ram,0x0006eac4) */
/* WARNING: Removing unreachable block (ram,0x0006eb80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006e840(void)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  byte bVar11;
  
  bVar9 = 0;
  bVar1 = false;
  bVar11 = _DAT_ffff2fb2 == 0;
  bVar8 = 0;
  bVar2 = false;
  if (_DAT_ffff2fb4 == 0) {
    bVar11 = bVar11 | 2;
  }
  if (_DAT_ffff2fb6 == 0) {
    bVar11 = bVar11 | 4;
  }
  if (_DAT_ffff2fb8 == 0) {
    bVar11 = bVar11 | 8;
  }
  if (_DAT_ffff3520 == _DAT_ffff2fb2) {
    bVar11 = bVar11 | 0x10;
  }
  if (_DAT_ffff3524 == _DAT_ffff2fb4) {
    bVar11 = bVar11 | 0x20;
  }
  if (_DAT_ffff3528 == _DAT_ffff2fb6) {
    bVar11 = bVar11 | 0x40;
  }
  if (_DAT_ffff352c == _DAT_ffff2fb8) {
    bVar11 = bVar11 | 0x80;
  }
  if (_DAT_ffff3520 != 0) {
    uVar10 = (int)(uint)_DAT_ffff3522 >> 3 & 0xff;
    uVar5 = (uint)_DAT_ffff3522;
    cVar6 = (&DAT_0002b8f9)[uVar10];
    if ((int)uVar5 < 0) {
      uVar5 = ~(~uVar5 + 1 & 7) + 1;
    }
    else {
      uVar5 = uVar5 & 7;
    }
    uVar3 = __shl_r0_by_r1(1,uVar5 & 0xff);
    bVar1 = ((int)cVar6 & uVar3 & 0xff) != 0;
    bVar9 = 0x10;
    if (bVar1) {
      bVar9 = 1;
    }
    if ((uVar10 == 0x13) && ((uVar5 & 0xff) < 4)) {
      if (((DAT_ffff0803 & 1) == 0) && ((DAT_ffff0803 & 2) == 0)) {
LAB_0006e944:
        bVar8 = 1;
        bVar2 = true;
      }
    }
    else if ((uVar3 & *(byte *)(uVar10 - 0xf811)) == 0) goto LAB_0006e944;
    if ((uVar3 & *(byte *)(uVar10 - 0xf7a9)) == 0) {
      bVar8 = bVar8 | 0x10;
    }
  }
  if (_DAT_ffff3524 != 0) {
    uVar10 = (int)(uint)_DAT_ffff3526 >> 3 & 0xff;
    uVar5 = (uint)_DAT_ffff3526;
    cVar6 = (&DAT_0002b8f9)[uVar10];
    if ((int)uVar5 < 0) {
      uVar5 = ~(~uVar5 + 1 & 7) + 1;
    }
    else {
      uVar5 = uVar5 & 7;
    }
    uVar3 = __shl_r0_by_r1(1,uVar5 & 0xff);
    if (((int)cVar6 & uVar3 & 0xff) == 0) {
      bVar9 = bVar9 | 0x20;
    }
    else {
      bVar9 = bVar9 | 2;
    }
    if ((uVar10 == 0x13) && ((uVar5 & 0xff) < 4)) {
      if (((DAT_ffff0803 & 1) == 0) && ((DAT_ffff0803 & 2) == 0)) {
LAB_0006e9dc:
        bVar8 = bVar8 | 2;
      }
    }
    else if ((uVar3 & *(byte *)(uVar10 - 0xf811)) == 0) goto LAB_0006e9dc;
    if ((uVar3 & *(byte *)(uVar10 - 0xf7a9)) == 0) {
      bVar8 = bVar8 | 0x20;
    }
  }
  if (_DAT_ffff3528 != 0) {
    uVar10 = (int)(uint)_DAT_ffff352a >> 3 & 0xff;
    uVar5 = (uint)_DAT_ffff352a;
    cVar6 = (&DAT_0002b8f9)[uVar10];
    if ((int)uVar5 < 0) {
      uVar5 = ~(~uVar5 + 1 & 7) + 1;
    }
    else {
      uVar5 = uVar5 & 7;
    }
    uVar3 = __shl_r0_by_r1(1,uVar5 & 0xff);
    if (((int)cVar6 & uVar3 & 0xff) == 0) {
      bVar9 = bVar9 | 0x40;
    }
    else {
      bVar9 = bVar9 | 4;
    }
    if ((uVar10 == 0x13) && ((uVar5 & 0xff) < 4)) {
      if (((DAT_ffff0803 & 1) == 0) && ((DAT_ffff0803 & 2) == 0)) {
LAB_0006ea9c:
        bVar8 = bVar8 | 4;
      }
    }
    else if ((uVar3 & *(byte *)(uVar10 - 0xf811)) == 0) goto LAB_0006ea9c;
    if ((uVar3 & *(byte *)(uVar10 - 0xf7a9)) == 0) {
      bVar8 = bVar8 | 0x40;
    }
  }
  if (_DAT_ffff352c == 0) goto LAB_0006eb4c;
  uVar10 = (int)(uint)_DAT_ffff352e >> 3 & 0xff;
  uVar5 = (uint)_DAT_ffff352e;
  cVar6 = (&DAT_0002b8f9)[uVar10];
  if ((int)uVar5 < 0) {
    uVar5 = ~(~uVar5 + 1 & 7) + 1;
  }
  else {
    uVar5 = uVar5 & 7;
  }
  uVar3 = __shl_r0_by_r1(1,uVar5 & 0xff);
  if (((int)cVar6 & uVar3 & 0xff) == 0) {
    bVar9 = bVar9 | 0x80;
  }
  else {
    bVar9 = bVar9 | 8;
  }
  if ((uVar10 == 0x13) && ((uVar5 & 0xff) < 4)) {
    if (((DAT_ffff0803 & 1) == 0) && ((DAT_ffff0803 & 2) == 0)) {
LAB_0006eb36:
      bVar8 = bVar8 | 8;
    }
  }
  else if ((uVar3 & *(byte *)(uVar10 - 0xf811)) == 0) goto LAB_0006eb36;
  if ((uVar3 & *(byte *)(uVar10 - 0xf7a9)) == 0) {
    bVar8 = bVar8 | 0x80;
  }
LAB_0006eb4c:
  DAT_fffef3ce = _DAT_ffff2fc8 != 0x4055;
  bVar7 = DAT_fffef3ce;
  if (((2 < DAT_ffff3707) && (2 < DAT_ffff3702)) && (2 < DAT_ffff3701)) {
    bVar7 = 2;
  }
  if ((DAT_fffef3c0 & 1) != 0) {
    bVar7 = bVar7 | 4;
  }
  DAT_fffef3cf = bVar11;
  DAT_fffef3d0 = bVar9;
  DAT_fffef3d1 = bVar8;
  bVar4 = bVar11 & 1;
  if (((((bVar4 != 0) && ((bVar11 & 0x10) == 0)) &&
       (((bool)DAT_fffef3ce && (((bVar9 & 0x10) != 0 && (bVar2)))))) &&
      (((bVar8 & 0x10) != 0 && ((bVar7 & 4) != 0)))) ||
     ((((((bVar4 != 0 && ((bVar11 & 0x10) == 0)) && ((bool)DAT_fffef3ce)) && ((bVar1 && (bVar2))))
       && ((bVar8 & 0x10) != 0)) ||
      (((bVar4 == 0 && ((bVar11 & 0x10) != 0)) && (((bool)DAT_fffef3ce && ((bVar7 & 2) != 0))))))))
  {
    cVar6 = '\x01';
  }
  else {
    cVar6 = '\0';
    if ((bVar11 & 0x11) == 0) {
      cVar6 = '\x02';
    }
  }
  if (cVar6 == '\x01') {
    _DAT_ffff3520 = 0;
    _DAT_ffff3522 = 0;
  }
  else if (cVar6 == '\x02') {
    _DAT_ffff3520 = _DAT_ffff2fb2;
    _DAT_ffff3522 = _DAT_ffff2fba;
  }
  bVar4 = bVar11 & 2;
  if ((((((bVar4 != 0) && ((bVar11 & 0x20) == 0)) && ((bool)DAT_fffef3ce)) &&
       ((((bVar9 & 0x20) != 0 && ((bVar8 & 2) != 0)) &&
        (((bVar8 & 0x20) != 0 && ((bVar7 & 4) != 0)))))) ||
      (((bVar4 != 0 && ((bVar11 & 0x20) == 0)) &&
       (((bool)DAT_fffef3ce && ((((bVar9 & 2) != 0 && ((bVar8 & 2) != 0)) && ((bVar8 & 0x20) != 0)))
        ))))) ||
     (((bVar4 == 0 && ((bVar11 & 0x20) != 0)) && (((bool)DAT_fffef3ce && ((bVar7 & 2) != 0)))))) {
    cVar6 = '\x01';
  }
  else {
    cVar6 = '\0';
    if ((bVar11 & 0x22) == 0) {
      cVar6 = '\x02';
    }
  }
  if (cVar6 == '\x01') {
    _DAT_ffff3524 = 0;
    _DAT_ffff3526 = 0;
  }
  else if (cVar6 == '\x02') {
    _DAT_ffff3524 = _DAT_ffff2fb4;
    _DAT_ffff3526 = _DAT_ffff2fbc;
  }
  bVar4 = bVar11 & 4;
  if (((((bVar4 != 0) && ((bVar11 & 0x40) == 0)) &&
       (((bool)DAT_fffef3ce &&
        (((((bVar9 & 0x40) != 0 && ((bVar8 & 4) != 0)) && ((bVar8 & 0x40) != 0)) &&
         ((bVar7 & 4) != 0)))))) ||
      (((((bVar4 != 0 && ((bVar11 & 0x40) == 0)) && ((bool)DAT_fffef3ce)) &&
        (((bVar9 & 4) != 0 && ((bVar8 & 4) != 0)))) && ((bVar8 & 0x40) != 0)))) ||
     ((((bVar4 == 0 && ((bVar11 & 0x40) != 0)) && ((bool)DAT_fffef3ce)) && ((bVar7 & 2) != 0)))) {
    cVar6 = '\x01';
  }
  else {
    cVar6 = '\0';
    if ((bVar11 & 0x44) == 0) {
      cVar6 = '\x02';
    }
  }
  if (cVar6 == '\x01') {
    _DAT_ffff3528 = 0;
    _DAT_ffff352a = 0;
  }
  else if (cVar6 == '\x02') {
    _DAT_ffff3528 = _DAT_ffff2fb6;
    _DAT_ffff352a = _DAT_ffff2fbe;
  }
  bVar4 = bVar11 & 8;
  if ((((bVar4 != 0) && ((bVar11 & 0x80) == 0)) &&
      (((((bool)DAT_fffef3ce && (((bVar9 & 0x80) != 0 && ((bVar8 & 8) != 0)))) &&
        ((bVar8 & 0x80) != 0)) && ((bVar7 & 4) != 0)))) ||
     (((((bVar4 != 0 && ((bVar11 & 0x80) == 0)) && ((bool)DAT_fffef3ce)) &&
       ((((bVar9 & 8) != 0 && ((bVar8 & 8) != 0)) && ((bVar8 & 0x80) != 0)))) ||
      (((bVar4 == 0 && ((bVar11 & 0x80) != 0)) && (((bool)DAT_fffef3ce && ((bVar7 & 2) != 0))))))))
  {
    cVar6 = '\x01';
  }
  else {
    cVar6 = '\0';
    if ((bVar11 & 0x88) == 0) {
      cVar6 = '\x02';
    }
  }
  if (cVar6 == '\x01') {
    _DAT_ffff352c = 0;
    _DAT_ffff352e = 0;
  }
  else if (cVar6 == '\x02') {
    _DAT_ffff352c = _DAT_ffff2fb8;
    _DAT_ffff352e = _DAT_ffff2fc0;
  }
  return;
}

