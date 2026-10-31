
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0004218c(void)

{
  ushort uVar2;
  uint uVar1;
  
  if ((((int)DAT_fffef371 & 4U) == 0) || (DAT_ffff08e1 != '\0')) {
    DAT_fffef8c5 = 0;
    DAT_fffef8c6 = 0;
    DAT_fffef8c7 = 0;
    DAT_fffef8c8 = 0;
    DAT_fffef8c9 = 0;
    DAT_fffef8ca = 0;
    DAT_fffef8cb = 0;
    DAT_fffef8cc = 0;
    DAT_fffef8cd = 0;
    DAT_fffef8ce = 0;
    DAT_fffef8cf = 0;
    DAT_fffef8d0 = 0;
    DAT_fffef8d1 = 0;
    DAT_fffef8d2 = 0;
    _DAT_fffef8d4 = 0;
    _DAT_fffef8d6 = 0xff;
    return (int)DAT_fffef371;
  }
  uVar2 = _DAT_fffef0e8 & 0xc00;
  if (uVar2 == 0xc00) {
    DAT_fffef8c5 = FUN_0000152c(DAT_fffef8c5 + 1);
    if (7 < DAT_fffef8c5) {
      DAT_fffef8c3 = DAT_fffef8c3 | 0x80;
      DAT_fffef96f = '\x01';
    }
  }
  else if (uVar2 == 0x800) {
    DAT_fffef8c6 = FUN_0000152c(DAT_fffef8c6 + 1);
    if (7 < DAT_fffef8c6) {
      DAT_fffef8c3 = DAT_fffef8c3 | 0x40;
      DAT_fffef96d = '\x01';
    }
  }
  else if ((uVar2 == 0x400) && (DAT_fffef8c7 = FUN_0000152c(DAT_fffef8c7 + 1), 7 < DAT_fffef8c7)) {
    DAT_fffef8c3 = DAT_fffef8c3 | 0x20;
    DAT_fffef96e = '\x01';
  }
  uVar2 = _DAT_fffef0e8 & 0x300;
  if (uVar2 == 0x300) {
    DAT_fffef8c8 = FUN_0000152c(DAT_fffef8c8 + 1);
    if (7 < DAT_fffef8c8) {
      DAT_fffef8c3 = DAT_fffef8c3 | 8;
      DAT_fffef972 = '\x01';
    }
  }
  else if (uVar2 == 0x200) {
    DAT_fffef8c9 = FUN_0000152c(DAT_fffef8c9 + 1);
    if (7 < DAT_fffef8c9) {
      DAT_fffef8c3 = DAT_fffef8c3 | 4;
      DAT_fffef970 = '\x01';
    }
  }
  else if ((uVar2 == 0x100) && (DAT_fffef8ca = FUN_0000152c(DAT_fffef8ca + 1), 7 < DAT_fffef8ca)) {
    DAT_fffef8c3 = DAT_fffef8c3 | 2;
    DAT_fffef971 = '\x01';
  }
  uVar2 = _DAT_fffef0e8 & 0xc0;
  if (uVar2 == 0xc0) {
    DAT_fffef8cb = FUN_0000152c(DAT_fffef8cb + 1);
    if (7 < DAT_fffef8cb) {
      DAT_fffef8c4 = DAT_fffef8c4 | 0x80;
      DAT_fffef975 = '\x01';
    }
  }
  else if (uVar2 == 0x80) {
    DAT_fffef8cc = FUN_0000152c(DAT_fffef8cc + 1);
    if (7 < DAT_fffef8cc) {
      DAT_fffef8c4 = DAT_fffef8c4 | 0x40;
      DAT_fffef973 = '\x01';
    }
  }
  else if ((uVar2 == 0x40) && (DAT_fffef8cd = FUN_0000152c(DAT_fffef8cd + 1), 7 < DAT_fffef8cd)) {
    DAT_fffef8c4 = DAT_fffef8c4 | 0x20;
    DAT_fffef974 = '\x01';
  }
  uVar2 = _DAT_fffef0e8 & 0x30;
  if (uVar2 == 0x30) {
    DAT_fffef8ce = FUN_0000152c(DAT_fffef8ce + 1);
    if (7 < DAT_fffef8ce) {
      DAT_fffef8c4 = DAT_fffef8c4 | 8;
      DAT_fffef978 = '\x01';
    }
  }
  else if (uVar2 == 0x20) {
    DAT_fffef8cf = FUN_0000152c(DAT_fffef8cf + 1);
    if (7 < DAT_fffef8cf) {
      DAT_fffef8c4 = DAT_fffef8c4 | 4;
      DAT_fffef976 = '\x01';
    }
  }
  else if ((uVar2 == 0x10) && (DAT_fffef8d0 = FUN_0000152c(DAT_fffef8d0 + 1), 7 < DAT_fffef8d0)) {
    DAT_fffef8c4 = DAT_fffef8c4 | 2;
    DAT_fffef977 = '\x01';
  }
  uVar2 = _DAT_fffef0e8 & 0xff0;
  if (uVar2 == 0) {
    DAT_fffef8d1 = FUN_0000152c(DAT_fffef8d1 + 1);
    DAT_fffef8d2 = FUN_0000152c(DAT_fffef8d2 + 1);
  }
  else {
    DAT_fffef8d1 = 0;
    DAT_fffef8d2 = 0;
  }
  if (((uVar2 == 0) && (3 < DAT_fffef8d1)) && (3 < (int)((uint)_DAT_fffef8d4 - (uint)_DAT_fffef8d6))
     ) {
    DAT_fffef8c5 = 0;
    DAT_fffef8c8 = 0;
    DAT_fffef8cb = 0;
    DAT_fffef8ce = 0;
    DAT_fffef8c3 = DAT_fffef8c3 & 0x77;
    DAT_fffef8c4 = DAT_fffef8c4 & 0x77;
    DAT_fffef96f = '\x01';
    DAT_fffef972 = '\x01';
    DAT_fffef975 = '\x01';
    DAT_fffef978 = '\x01';
  }
  if (((uVar2 == 0) && (3 < DAT_fffef8d2)) && (3 < (int)((uint)_DAT_fffef8d4 - (uint)_DAT_fffef8d6))
     ) {
    DAT_fffef8c6 = 0;
    DAT_fffef8c7 = 0;
    DAT_fffef8c9 = 0;
    DAT_fffef8ca = 0;
    DAT_fffef8cc = 0;
    DAT_fffef8cd = 0;
    DAT_fffef8cf = 0;
    DAT_fffef8d0 = 0;
    DAT_fffef8c3 = DAT_fffef8c3 & 0x99;
    DAT_fffef8c4 = DAT_fffef8c4 & 0x99;
    DAT_fffef96d = '\x01';
    DAT_fffef96e = '\x01';
    DAT_fffef970 = '\x01';
    DAT_fffef971 = '\x01';
    DAT_fffef973 = '\x01';
    DAT_fffef974 = '\x01';
    DAT_fffef976 = '\x01';
    DAT_fffef977 = '\x01';
  }
  if (uVar2 == 0) {
    if (_DAT_fffef8d4 < _DAT_fffeeeb4) {
      _DAT_fffef8d4 = _DAT_fffeeeb4;
    }
    if (_DAT_fffeeeb4 < _DAT_fffef8d6) {
      _DAT_fffef8d6 = _DAT_fffeeeb4;
    }
  }
  else {
    _DAT_fffef8d4 = 0;
    _DAT_fffef8d6 = 0xff;
  }
  if (((DAT_fffef8c3 & 0x40) == 0) && ((DAT_fffef8c3 & 0x20) == 0)) {
    if ((DAT_fffef96d == '\x01') && (DAT_fffef96e == '\x01')) {
      DAT_fffef9b5 = DAT_fffef9b5 & 0xfe;
      goto LAB_00042606;
    }
  }
  else {
    DAT_fffef9b5 = DAT_fffef9b5 | 1;
LAB_00042606:
    DAT_fffef979 = 1;
  }
  if (((int)(char)DAT_fffef8c3 & 0x80U) == 0) {
    if (DAT_fffef96f == '\x01') {
      DAT_fffef9b5 = DAT_fffef9b5 & 0xfd;
      goto LAB_0004262a;
    }
  }
  else {
    DAT_fffef9b5 = DAT_fffef9b5 | 2;
LAB_0004262a:
    DAT_fffef97a = 1;
  }
  if (((DAT_fffef8c3 & 4) == 0) && ((DAT_fffef8c3 & 2) == 0)) {
    if ((DAT_fffef970 == '\x01') && (DAT_fffef971 == '\x01')) {
      DAT_fffef9b5 = DAT_fffef9b5 & 0xfb;
      goto LAB_0004265a;
    }
  }
  else {
    DAT_fffef9b5 = DAT_fffef9b5 | 4;
LAB_0004265a:
    DAT_fffef97b = 1;
  }
  if ((DAT_fffef8c3 & 8) == 0) {
    if (DAT_fffef972 == '\x01') {
      DAT_fffef9b5 = DAT_fffef9b5 & 0xf7;
      goto LAB_0004271e;
    }
  }
  else {
    DAT_fffef9b5 = DAT_fffef9b5 | 8;
LAB_0004271e:
    DAT_fffef97c = 1;
  }
  if (((DAT_fffef8c4 & 0x40) == 0) && ((DAT_fffef8c4 & 0x20) == 0)) {
    if ((DAT_fffef973 == '\x01') && (DAT_fffef974 == '\x01')) {
      DAT_fffef9b5 = DAT_fffef9b5 & 0xef;
      goto LAB_00042750;
    }
  }
  else {
    DAT_fffef9b5 = DAT_fffef9b5 | 0x10;
LAB_00042750:
    DAT_fffef97d = 1;
  }
  if (((int)(char)DAT_fffef8c4 & 0x80U) == 0) {
    if (DAT_fffef975 == '\x01') {
      DAT_fffef9b5 = DAT_fffef9b5 & 0xdf;
      goto LAB_00042772;
    }
  }
  else {
    DAT_fffef9b5 = DAT_fffef9b5 | 0x20;
LAB_00042772:
    DAT_fffef97e = 1;
  }
  if (((DAT_fffef8c4 & 4) == 0) && ((DAT_fffef8c4 & 2) == 0)) {
    if ((DAT_fffef976 == '\x01') && (DAT_fffef977 == '\x01')) {
      DAT_fffef9b5 = DAT_fffef9b5 & 0xbf;
      goto LAB_000427a2;
    }
  }
  else {
    DAT_fffef9b5 = DAT_fffef9b5 | 0x40;
LAB_000427a2:
    DAT_fffef97f = 1;
  }
  if ((DAT_fffef8c4 & 8) == 0) {
    if (DAT_fffef978 != '\x01') goto LAB_000427ca;
    DAT_fffef9b5 = DAT_fffef9b5 & 0x7f;
  }
  else {
    DAT_fffef9b5 = DAT_fffef9b5 | 0x80;
  }
  DAT_fffef980 = 1;
LAB_000427ca:
  if ((((((DAT_fffef9b5 & 1) == 0) && ((DAT_fffef9b5 & 2) == 0)) && ((DAT_fffef9b5 & 4) == 0)) &&
      (((DAT_fffef9b5 & 8) == 0 && ((DAT_fffef9b5 & 0x10) == 0)))) &&
     (((DAT_fffef9b5 & 0x20) == 0 &&
      (((DAT_fffef9b5 & 0x40) == 0 && (((int)(char)DAT_fffef9b5 & 0x80U) == 0)))))) {
    uVar1 = (int)DAT_fffeff5f & 0xdf;
    DAT_fffeff5f = (char)uVar1;
  }
  else {
    uVar1 = (int)DAT_fffeff5f | 0x20;
    DAT_fffeff5f = (char)uVar1;
  }
  DAT_fffeff62 = 1;
  return uVar1;
}

