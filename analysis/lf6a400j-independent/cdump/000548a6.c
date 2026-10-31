
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000548a6(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  
  if (((DAT_fffef2d0 & 4) == 0) && ((DAT_fffef2d0 & 8) == 0)) {
    DAT_fffef2d7 = 0;
    bVar4 = false;
  }
  else {
    DAT_fffef2d7 = 1;
    bVar4 = true;
  }
  if (((DAT_fffef2d0 & 1) == 0) && ((DAT_fffef2d0 & 2) == 0)) {
    DAT_fffef2d8 = 0;
    bVar5 = false;
  }
  else {
    DAT_fffef2d8 = 1;
    bVar5 = true;
  }
  if ((((DAT_fffef0eb & 0x40) == 0) && (((int)(char)DAT_fffef0eb & 0x80U) == 0)) &&
     (((int)DAT_fffef1d4 & 0x80U) == 0)) {
    DAT_fffef2d9 = 0;
    bVar3 = false;
  }
  else {
    DAT_fffef2d9 = 1;
    bVar3 = true;
  }
  if (((DAT_fffef3ff & 1) == 0) && ((DAT_fffef3ff & 2) == 0)) {
    DAT_fffef31e = 0;
    bVar6 = false;
  }
  else {
    DAT_fffef31e = 1;
    bVar6 = true;
  }
  if (((DAT_fffef2d0 & 0x10) == 0) && ((DAT_fffef2d0 & 0x20) == 0)) {
    DAT_fffef3fd = 0;
    bVar2 = false;
  }
  else {
    DAT_fffef3fd = 1;
    bVar2 = true;
  }
  if (((DAT_fffef2d2 == '\x01') || (DAT_fffef2d3 != '\0')) || (DAT_fffef2d4 != '\0')) {
    DAT_ffff27fd = 0;
    DAT_ffff27fe = 0;
  }
  if (((DAT_fffef2d2 == '\x01') || (DAT_fffef2d3 != '\0')) || (DAT_fffef2d4 != '\0')) {
    _DAT_fffef31c = 0;
    DAT_ffff26c0 = 0;
    DAT_ffff26bf = 0;
    DAT_ffff26c1 = 0;
  }
  else {
    _DAT_fffef31c = (ushort)DAT_ffff26c0 * 0x100 + (ushort)DAT_ffff26bf;
  }
  if ((DAT_fffef2d2 == '\x01') || (DAT_fffef2d3 != '\0')) {
    _DAT_fffeed4a = 10000;
    _DAT_fffeed4c = 0x3700;
    DAT_fffef06b = DAT_fffef06b & 0xf9 | 8;
    DAT_ffff26cc = 0x27;
    DAT_ffff26cb = 0x10;
    DAT_ffff26ce = 0x37;
    DAT_ffff26cd = 0;
    DAT_ffff26cf = DAT_ffff26cf & 0xf8;
    DAT_ffff26d0 = DAT_ffff26d0 | 1;
    DAT_fffef06c = DAT_fffef06c & 0xfe;
  }
  else if (DAT_fffef2d4 == '\0') {
    _DAT_fffeed4a = (ushort)DAT_ffff26cc * 0x100 + (ushort)DAT_ffff26cb;
    _DAT_fffeed4c = (ushort)DAT_ffff26ce * 0x100 + (ushort)DAT_ffff26cd;
    bVar11 = DAT_fffef06b | 4;
    if ((DAT_ffff26cf & 4) == 0) {
      bVar11 = DAT_fffef06b & 0xfb;
    }
    bVar8 = bVar11 | 2;
    if ((DAT_ffff26cf & 2) == 0) {
      bVar8 = bVar11 & 0xfd;
    }
    bVar11 = DAT_fffef06c | 1;
    if ((DAT_ffff26cf & 1) == 0) {
      bVar11 = DAT_fffef06c & 0xfe;
    }
    DAT_fffef06b = bVar8 | 8;
    DAT_fffef06c = bVar11;
    if ((DAT_ffff26d0 & 1) == 0) {
      DAT_fffef06b = bVar8 & 0xf7;
    }
  }
  else {
    _DAT_fffeed4a = 10000;
    _DAT_fffeed4c = 0x3700;
    DAT_fffef06b = DAT_fffef06b & 0xf1;
    DAT_ffff26cc = 0x27;
    DAT_ffff26cb = 0x10;
    DAT_ffff26ce = 0x37;
    DAT_ffff26cd = 0;
    DAT_ffff26cf = DAT_ffff26cf & 0xf8;
    DAT_ffff26d0 = DAT_ffff26d0 & 0xfe;
    DAT_fffef06c = DAT_fffef06c & 0xfe;
  }
  bVar11 = DAT_ffff8864;
  if ((DAT_fffef2d2 == '\x01') || (DAT_fffef2d3 != '\0')) {
    DAT_fffef06d = DAT_fffef06d & 0xf8;
    DAT_fffef06e = DAT_fffef06e & 0xf0;
    DAT_fffef06f = DAT_fffef06f & 0x3f | 8;
    DAT_fffef06c = DAT_fffef06c & 0x7f | 4;
    DAT_ffff26d8 = DAT_ffff26d8 & 0xf8;
    DAT_ffff26d9 = DAT_ffff26d9 & 0x70;
    DAT_ffff26da = DAT_ffff26da & 0x7d | 0xc;
    DAT_ffff26dd = 0;
  }
  else if (DAT_fffef2d4 == '\0') {
    bVar11 = DAT_fffef06d | 4;
    if ((DAT_ffff26d8 & 4) == 0) {
      bVar11 = DAT_fffef06d & 0xfb;
    }
    bVar8 = bVar11 | 2;
    if ((DAT_ffff26d8 & 2) == 0) {
      bVar8 = bVar11 & 0xfd;
    }
    DAT_fffef06d = bVar8 | 1;
    if ((DAT_ffff26d8 & 1) == 0) {
      DAT_fffef06d = bVar8 & 0xfe;
    }
    bVar11 = DAT_fffef06f | 0x40;
    if (((int)(char)DAT_ffff26d9 & 0x80U) == 0) {
      bVar11 = DAT_fffef06f & 0xbf;
    }
    bVar8 = DAT_fffef06e | 8;
    if ((DAT_ffff26d9 & 8) == 0) {
      bVar8 = DAT_fffef06e & 0xf7;
    }
    bVar9 = bVar8 | 4;
    if ((DAT_ffff26d9 & 4) == 0) {
      bVar9 = bVar8 & 0xfb;
    }
    bVar8 = bVar9 | 2;
    if ((DAT_ffff26d9 & 2) == 0) {
      bVar8 = bVar9 & 0xfd;
    }
    DAT_fffef06e = bVar8 | 1;
    if ((DAT_ffff26d9 & 1) == 0) {
      DAT_fffef06e = bVar8 & 0xfe;
    }
    bVar1 = ((int)(char)DAT_ffff26da & 0x80U) == 0;
    bVar8 = bVar11 | 0x80;
    if (bVar1) {
      bVar8 = bVar11 & 0x7f;
    }
    DAT_fffef06f = bVar8 | 8;
    if ((DAT_ffff26da & 8) == 0) {
      DAT_fffef06f = bVar8 & 0xf7;
    }
    bVar11 = DAT_fffef06c | 4;
    if ((DAT_ffff26da & 4) == 0) {
      bVar11 = DAT_fffef06c & 0xfb;
    }
    DAT_fffef06c = bVar11 | 0x80;
    if ((DAT_ffff26da & 2) == 0) {
      DAT_fffef06c = bVar11 & 0x7f;
    }
    bVar8 = DAT_ffff8866 | 1;
    if ((DAT_ffff8865 & 1) == 0) {
      bVar8 = DAT_ffff8866 & 0xfe;
    }
    bVar9 = DAT_ffff8865 | 1;
    if ((DAT_ffff8864 & 1) == 0) {
      bVar9 = DAT_ffff8865 & 0xfe;
    }
    bVar11 = DAT_ffff8864 | 1;
    DAT_ffff8865 = bVar9;
    DAT_ffff8866 = bVar8;
    if (bVar1) {
      bVar11 = DAT_ffff8864 & 0xfe;
    }
  }
  else {
    DAT_fffef06d = DAT_fffef06d & 0xf8;
    DAT_fffef06e = DAT_fffef06e & 0xf0;
    DAT_fffef06f = DAT_fffef06f & 0x37;
    DAT_fffef06c = DAT_fffef06c & 0x7b;
    DAT_ffff26d8 = DAT_ffff26d8 & 0xf8;
    DAT_ffff26d9 = DAT_ffff26d9 & 0x70;
    DAT_ffff26da = DAT_ffff26da & 0x71;
    DAT_ffff26dd = 0;
  }
  DAT_ffff8864 = bVar11;
  if ((DAT_fffef2d2 == '\x01') || (DAT_fffef2d3 != '\0')) {
    _DAT_fffef070 = 0;
    _DAT_fffef072 = 0;
    _DAT_fffef074 = 0;
    _DAT_fffef076 = 0;
    DAT_ffff26e4 = 0;
    DAT_ffff26e3 = 0;
    DAT_ffff26e6 = 0;
    DAT_ffff26e5 = 0;
    DAT_ffff26e8 = 0;
    DAT_ffff26e7 = 0;
    DAT_ffff26ea = 0;
    DAT_ffff26e9 = 0;
  }
  else if (DAT_fffef2d4 == '\0') {
    _DAT_fffef070 = (ushort)DAT_ffff26e4 * 0x100 + (ushort)DAT_ffff26e3;
    _DAT_fffef072 = (ushort)DAT_ffff26e6 * 0x100 + (ushort)DAT_ffff26e5;
    _DAT_fffef074 = (ushort)DAT_ffff26e8 * 0x100 + (ushort)DAT_ffff26e7;
    _DAT_fffef076 = (ushort)DAT_ffff26ea * 0x100 + (ushort)DAT_ffff26e9;
  }
  else {
    _DAT_fffef070 = 0;
    _DAT_fffef072 = 0;
    _DAT_fffef074 = 0;
    _DAT_fffef076 = 0;
    DAT_ffff26e4 = 0;
    DAT_ffff26e3 = 0;
    DAT_ffff26e6 = 0;
    DAT_ffff26e5 = 0;
    DAT_ffff26e8 = 0;
    DAT_ffff26e7 = 0;
    DAT_ffff26ea = 0;
    DAT_ffff26e9 = 0;
  }
  if ((DAT_fffef2d2 == '\x01') || (DAT_fffef2d3 != '\0')) {
    DAT_fffef05f = 0;
    DAT_fffef05e = DAT_fffef05e & 0xf8;
    DAT_fffeed45 = 0;
    _DAT_fffeed40 = 0;
    DAT_fffef058 = DAT_fffef058 & 0xf;
    DAT_fffef059 = DAT_fffef059 & 3 | 1;
    DAT_ffff2683 = 0;
    DAT_ffff2684 = DAT_ffff2684 & 0x80;
    DAT_ffff2686 = DAT_ffff2686 & 0xc0;
    DAT_ffff2685 = 0;
    DAT_ffff2689 = 0;
    DAT_ffff268a = DAT_ffff268a & 0xcd | 1;
    DAT_fffef061 = DAT_fffef061 & 0xf7;
  }
  else if (DAT_fffef2d5 == '\0') {
    bVar11 = DAT_fffef05f | 8;
    if (((int)(char)DAT_ffff2683 & 0x80U) == 0) {
      bVar11 = DAT_fffef05f & 0xf7;
    }
    bVar8 = bVar11 | 4;
    if ((DAT_ffff2683 & 0x40) == 0) {
      bVar8 = bVar11 & 0xfb;
    }
    bVar11 = bVar8 | 2;
    if ((DAT_ffff2683 & 0x20) == 0) {
      bVar11 = bVar8 & 0xfd;
    }
    bVar8 = bVar11 | 1;
    if ((DAT_ffff2683 & 0x10) == 0) {
      bVar8 = bVar11 & 0xfe;
    }
    bVar11 = bVar8 | 0x80;
    if ((DAT_ffff2683 & 8) == 0) {
      bVar11 = bVar8 & 0x7f;
    }
    bVar8 = bVar11 | 0x40;
    if ((DAT_ffff2683 & 4) == 0) {
      bVar8 = bVar11 & 0xbf;
    }
    bVar11 = bVar8 | 0x20;
    if ((DAT_ffff2683 & 2) == 0) {
      bVar11 = bVar8 & 0xdf;
    }
    DAT_fffef05f = bVar11 | 0x10;
    if ((DAT_ffff2683 & 1) == 0) {
      DAT_fffef05f = bVar11 & 0xef;
    }
    bVar11 = DAT_fffef05e | 4;
    if ((DAT_ffff2684 & 0x40) == 0) {
      bVar11 = DAT_fffef05e & 0xfb;
    }
    bVar8 = bVar11 | 2;
    if ((DAT_ffff2684 & 0x20) == 0) {
      bVar8 = bVar11 & 0xfd;
    }
    DAT_fffef05e = bVar8 | 1;
    if ((DAT_ffff2684 & 0x10) == 0) {
      DAT_fffef05e = bVar8 & 0xfe;
    }
    DAT_fffeed45 = DAT_ffff2684 & 0xf;
    _DAT_fffeed40 = ((short)(char)DAT_ffff2686 & 0x3fU) * 0x100 + (ushort)DAT_ffff2685;
    bVar11 = DAT_fffef058 | 0x80;
    if (((int)(char)DAT_ffff2689 & 0x80U) == 0) {
      bVar11 = DAT_fffef058 & 0x7f;
    }
    bVar8 = bVar11 | 0x40;
    if ((DAT_ffff2689 & 0x40) == 0) {
      bVar8 = bVar11 & 0xbf;
    }
    bVar11 = bVar8 | 0x20;
    if ((DAT_ffff2689 & 0x20) == 0) {
      bVar11 = bVar8 & 0xdf;
    }
    DAT_fffef058 = bVar11 | 0x10;
    if ((DAT_ffff2689 & 0x10) == 0) {
      DAT_fffef058 = bVar11 & 0xef;
    }
    bVar11 = DAT_fffef059 | 0x80;
    if ((DAT_ffff2689 & 8) == 0) {
      bVar11 = DAT_fffef059 & 0x7f;
    }
    bVar8 = bVar11 | 0x40;
    if ((DAT_ffff2689 & 4) == 0) {
      bVar8 = bVar11 & 0xbf;
    }
    bVar11 = bVar8 | 0x20;
    if ((DAT_ffff2689 & 2) == 0) {
      bVar11 = bVar8 & 0xdf;
    }
    bVar8 = bVar11 | 0x10;
    if ((DAT_ffff2689 & 1) == 0) {
      bVar8 = bVar11 & 0xef;
    }
    bVar11 = bVar8 | 4;
    if ((DAT_ffff268a & 0x10) == 0) {
      bVar11 = bVar8 & 0xfb;
    }
    bVar8 = bVar11 | 8;
    if ((DAT_ffff268a & 0x20) == 0) {
      bVar8 = bVar11 & 0xf7;
    }
    bVar11 = DAT_fffef061 | 8;
    if ((DAT_ffff268a & 2) == 0) {
      bVar11 = DAT_fffef061 & 0xf7;
    }
    DAT_fffef059 = bVar8 | 1;
    DAT_fffef061 = bVar11;
    if ((DAT_ffff268a & 1) == 0) {
      DAT_fffef059 = bVar8 & 0xfe;
    }
  }
  else {
    DAT_fffef05f = 0;
    DAT_fffef05e = DAT_fffef05e & 0xf8;
    DAT_fffeed45 = 0;
    _DAT_fffeed40 = 0;
    DAT_fffef058 = DAT_fffef058 & 0xf;
    DAT_fffef059 = DAT_fffef059 & 3 | 1;
    DAT_ffff2683 = 0;
    DAT_ffff2684 = DAT_ffff2684 & 0x80;
    DAT_ffff2686 = DAT_ffff2686 & 0xc0;
    DAT_ffff2685 = 0;
    DAT_ffff2689 = 0;
    DAT_ffff268a = DAT_ffff268a & 0xcd | 1;
    DAT_fffef061 = DAT_fffef061 & 0xf7;
  }
  if ((DAT_fffef2d2 == '\x01') || (DAT_fffef2d3 != '\0')) {
    DAT_fffef05e = DAT_fffef05e & 0xcf;
    DAT_fffef060 = DAT_fffef060 & 0xf;
    DAT_fffef061 = DAT_fffef061 & 0xcf;
    DAT_fffef30c = DAT_fffef30c & 7;
    DAT_ffff268f = 0;
    DAT_ffff2690 = 0;
    DAT_ffff2691 = 0;
    DAT_ffff2692 = 0;
    DAT_ffff2693 = 0x55;
    DAT_ffff2694 = DAT_ffff2694 & 0xcf;
    DAT_ffff2695 = DAT_ffff2695 & 7;
    DAT_ffff2696 = DAT_ffff2696 & 0x7f;
    bVar11 = DAT_fffef058 & 0xfb;
    DAT_fffef31a = DAT_fffef31a & 0xfb;
    DAT_fffef3fe = DAT_fffef3fe & 0x7f;
  }
  else if (DAT_fffef2d5 == '\0') {
    bVar8 = DAT_fffef31a | 4;
    if (((int)(char)DAT_ffff2690 & 0x80U) == 0) {
      bVar8 = DAT_fffef31a & 0xfb;
    }
    bVar11 = DAT_fffef30c | 0x80;
    if ((DAT_ffff2690 & 0x40) == 0) {
      bVar11 = DAT_fffef30c & 0x7f;
    }
    bVar9 = DAT_fffef05e | 0x10;
    if ((DAT_ffff2690 & 0x20) == 0) {
      bVar9 = DAT_fffef05e & 0xef;
    }
    DAT_fffef05e = bVar9 | 0x20;
    if ((DAT_ffff2690 & 0x10) == 0) {
      DAT_fffef05e = bVar9 & 0xdf;
    }
    bVar9 = DAT_fffef060 | 0x80;
    if ((DAT_ffff2690 & 8) == 0) {
      bVar9 = DAT_fffef060 & 0x7f;
    }
    bVar10 = bVar9 | 0x40;
    if ((DAT_ffff2690 & 4) == 0) {
      bVar10 = bVar9 & 0xbf;
    }
    bVar9 = bVar10 | 0x20;
    if ((DAT_ffff2690 & 2) == 0) {
      bVar9 = bVar10 & 0xdf;
    }
    DAT_fffef060 = bVar9 | 0x10;
    if ((DAT_ffff2690 & 1) == 0) {
      DAT_fffef060 = bVar9 & 0xef;
    }
    bVar9 = DAT_fffef061 | 0x20;
    if ((DAT_ffff2694 & 0x20) == 0) {
      bVar9 = DAT_fffef061 & 0xdf;
    }
    DAT_fffef061 = bVar9 | 0x10;
    if ((DAT_ffff2694 & 0x10) == 0) {
      DAT_fffef061 = bVar9 & 0xef;
    }
    bVar9 = bVar11 | 8;
    if (((int)(char)DAT_ffff2695 & 0x80U) == 0) {
      bVar9 = bVar11 & 0xf7;
    }
    bVar11 = bVar9 | 0x10;
    if ((DAT_ffff2695 & 0x40) == 0) {
      bVar11 = bVar9 & 0xef;
    }
    bVar9 = bVar11 | 0x20;
    if ((DAT_ffff2695 & 0x20) == 0) {
      bVar9 = bVar11 & 0xdf;
    }
    DAT_fffef30c = bVar9 | 0x40;
    if ((DAT_ffff2695 & 0x10) == 0) {
      DAT_fffef30c = bVar9 & 0xbf;
    }
    bVar9 = DAT_fffef3fe | 0x80;
    if ((DAT_ffff2695 & 8) == 0) {
      bVar9 = DAT_fffef3fe & 0x7f;
    }
    bVar11 = DAT_fffef058 | 4;
    DAT_fffef31a = bVar8;
    DAT_fffef3fe = bVar9;
    if (((int)(char)DAT_ffff2696 & 0x80U) == 0) {
      bVar11 = DAT_fffef058 & 0xfb;
    }
  }
  else {
    DAT_fffef05e = DAT_fffef05e & 0xcf;
    DAT_fffef060 = DAT_fffef060 & 0xf;
    DAT_fffef061 = DAT_fffef061 & 0xcf;
    DAT_fffef30c = DAT_fffef30c & 7;
    DAT_ffff268f = 0;
    DAT_ffff2690 = 0;
    DAT_ffff2691 = 0;
    DAT_ffff2692 = 0;
    DAT_ffff2693 = 0x55;
    DAT_ffff2694 = DAT_ffff2694 & 0xcf;
    DAT_ffff2695 = DAT_ffff2695 & 7;
    DAT_ffff2696 = DAT_ffff2696 & 0x7f;
    bVar11 = DAT_fffef058 & 0xfb;
    DAT_fffef31a = DAT_fffef31a & 0xfb;
    DAT_fffef3fe = DAT_fffef3fe & 0x7f;
  }
  DAT_fffef058 = bVar11;
  if ((DAT_fffef2d2 == '\x01') || (DAT_fffef2d3 != '\0')) {
    _DAT_fffef2f4 = 0x3ff;
    _DAT_fffef2f6 = 0x7fff;
    _DAT_fffef2f8 = 0;
    _DAT_fffef2fa = 0;
    DAT_fffef30c = DAT_fffef30c & 0xf8;
    DAT_ffff269c = DAT_ffff269c & 0xfc | 3;
    DAT_ffff269b = 0xff;
    DAT_ffff269d = 0xff;
    DAT_ffff269e = '\x7f';
    DAT_ffff26a0 = DAT_ffff26a0 & 0x80;
    DAT_ffff269f = 0;
    DAT_ffff26a1 = 0;
    DAT_ffff26a2 = 0;
  }
  else if (DAT_fffef2d5 == '\0') {
    _DAT_fffef2f4 = ((short)(char)DAT_ffff269c & 3U) * 0x100 + (ushort)DAT_ffff269b;
    _DAT_fffef2f6 = ((short)DAT_ffff269e & 0x7fU) * 0x100 + (ushort)DAT_ffff269d;
    bVar11 = DAT_fffef30c | 4;
    if (((int)DAT_ffff269e & 0x80U) == 0) {
      bVar11 = DAT_fffef30c & 0xfb;
    }
    _DAT_fffef2f8 = ((short)(char)DAT_ffff26a0 & 0x7fU) * 0x100 + (ushort)DAT_ffff269f;
    _DAT_fffef2fa = ((short)(char)DAT_ffff26a2 & 0x3fU) * 0x100 + (ushort)DAT_ffff26a1;
    bVar8 = bVar11 | 1;
    if (((int)(char)DAT_ffff26a2 & 0x80U) == 0) {
      bVar8 = bVar11 & 0xfe;
    }
    DAT_fffef30c = bVar8 | 2;
    if ((DAT_ffff26a2 & 0x40) == 0) {
      DAT_fffef30c = bVar8 & 0xfd;
    }
  }
  else {
    _DAT_fffef2f4 = 0x3ff;
    _DAT_fffef2f6 = 0x7fff;
    _DAT_fffef2f8 = 0;
    _DAT_fffef2fa = 0;
    DAT_fffef30c = DAT_fffef30c & 0xf8;
    DAT_ffff269c = DAT_ffff269c & 0xfc | 3;
    DAT_ffff269b = 0xff;
    DAT_ffff269d = 0xff;
    DAT_ffff269e = '\x7f';
    DAT_ffff26a0 = DAT_ffff26a0 & 0x80;
    DAT_ffff269f = 0;
    DAT_ffff26a1 = 0;
    DAT_ffff26a2 = 0;
  }
  if ((DAT_fffef2d2 == '\x01') || (DAT_fffef2d3 != '\0')) {
    DAT_fffeed5d = 0;
    DAT_ffff2fdb = DAT_ffff2fdb & 0xfc;
    DAT_fffef2ff = 0;
    DAT_fffef319 = DAT_fffef319 & 0x60;
    DAT_fffef079 = DAT_fffef079 & 0x8e;
    DAT_fffef30d = DAT_fffef30d & 0x87;
    DAT_ffff26f0 = 0;
    DAT_ffff26f5 = DAT_ffff26f5 & 2;
    DAT_ffff26f6 = 0;
    DAT_fffef07a = DAT_fffef07a & 0xfb;
  }
  else if (DAT_fffef2d6 == '\0') {
    DAT_fffeed5d = DAT_ffff26f0 >> 4;
    bVar11 = DAT_ffff2fdb | 2;
    if ((DAT_ffff26f0 & 8) == 0) {
      bVar11 = DAT_ffff2fdb & 0xfd;
    }
    DAT_ffff2fdb = bVar11 | 1;
    if ((DAT_ffff26f0 & 4) == 0) {
      DAT_ffff2fdb = bVar11 & 0xfe;
    }
    bVar11 = DAT_fffef319 | 8;
    if ((DAT_ffff26f0 & 2) == 0) {
      bVar11 = DAT_fffef319 & 0xf7;
    }
    bVar8 = bVar11 | 4;
    if ((DAT_ffff26f0 & 1) == 0) {
      bVar8 = bVar11 & 0xfb;
    }
    DAT_fffef2ff = DAT_ffff26f5 >> 6;
    bVar11 = DAT_fffef30d | 0x20;
    if ((DAT_ffff26f5 & 0x20) == 0) {
      bVar11 = DAT_fffef30d & 0xdf;
    }
    bVar9 = DAT_fffef079 | 1;
    if ((DAT_ffff26f5 & 0x10) == 0) {
      bVar9 = DAT_fffef079 & 0xfe;
    }
    bVar10 = bVar11 | 0x40;
    if ((DAT_ffff26f5 & 8) == 0) {
      bVar10 = bVar11 & 0xbf;
    }
    bVar11 = DAT_fffef07a | 4;
    if ((DAT_ffff26f5 & 4) == 0) {
      bVar11 = DAT_fffef07a & 0xfb;
    }
    bVar7 = bVar8 | 2;
    if ((DAT_ffff26f5 & 1) == 0) {
      bVar7 = bVar8 & 0xfd;
    }
    bVar8 = bVar10 | 8;
    if (((int)(char)DAT_ffff26f6 & 0x80U) == 0) {
      bVar8 = bVar10 & 0xf7;
    }
    bVar10 = bVar7 | 0x80;
    if ((DAT_ffff26f6 & 0x40) == 0) {
      bVar10 = bVar7 & 0x7f;
    }
    bVar7 = bVar10 | 1;
    if ((DAT_ffff26f6 & 0x20) == 0) {
      bVar7 = bVar10 & 0xfe;
    }
    bVar10 = bVar9 | 0x10;
    if ((DAT_ffff26f6 & 0x10) == 0) {
      bVar10 = bVar9 & 0xef;
    }
    bVar9 = bVar10 | 0x20;
    if ((DAT_ffff26f6 & 8) == 0) {
      bVar9 = bVar10 & 0xdf;
    }
    DAT_fffef319 = bVar7 | 0x10;
    if ((DAT_ffff26f6 & 4) == 0) {
      DAT_fffef319 = bVar7 & 0xef;
    }
    DAT_fffef079 = bVar9 | 0x40;
    if ((DAT_ffff26f6 & 2) == 0) {
      DAT_fffef079 = bVar9 & 0xbf;
    }
    DAT_fffef30d = bVar8 | 0x10;
    DAT_fffef07a = bVar11;
    if ((DAT_ffff26f6 & 1) == 0) {
      DAT_fffef30d = bVar8 & 0xef;
    }
  }
  else {
    DAT_fffeed5d = 0;
    DAT_ffff2fdb = DAT_ffff2fdb & 0xfc;
    DAT_fffef2ff = 0;
    DAT_fffef319 = DAT_fffef319 & 0x60;
    DAT_fffef079 = DAT_fffef079 & 0x8e;
    DAT_fffef30d = DAT_fffef30d & 0x87;
    DAT_ffff26f0 = 0;
    DAT_ffff26f5 = DAT_ffff26f5 & 2;
    DAT_ffff26f6 = 0;
    DAT_fffef07a = DAT_fffef07a & 0xfb;
  }
  if (((DAT_fffef2d2 == '\x01') || (DAT_fffef2d3 != '\0')) || (bVar2)) {
    DAT_ffff2730 = DAT_ffff2730 & 0xfb;
    DAT_fffef08a = DAT_fffef08a & 0xf8;
    DAT_fffef085 = DAT_fffef085 & 0x84;
    DAT_ffff2732 = 0;
    DAT_ffff272e = 0xff;
    DAT_ffff272d = 0;
    DAT_ffff272c = 0x27;
    DAT_ffff272b = 0x10;
    _DAT_fffef086 = 10000;
    DAT_fffef41a = DAT_fffef41a & 0xfe;
  }
  else {
    _DAT_fffef086 = (ushort)DAT_ffff272c * 0x100 + (ushort)DAT_ffff272b;
    bVar11 = DAT_fffef085 | 1;
    if ((DAT_ffff272d & 1) == 0) {
      bVar11 = DAT_fffef085 & 0xfe;
    }
    bVar8 = bVar11 | 2;
    if ((DAT_ffff272d & 2) == 0) {
      bVar8 = bVar11 & 0xfd;
    }
    bVar11 = bVar8 | 8;
    if ((DAT_ffff272d & 4) == 0) {
      bVar11 = bVar8 & 0xf7;
    }
    bVar8 = bVar11 | 0x10;
    if ((DAT_ffff272d & 8) == 0) {
      bVar8 = bVar11 & 0xef;
    }
    bVar11 = bVar8 | 0x20;
    if ((DAT_ffff272d & 0x10) == 0) {
      bVar11 = bVar8 & 0xdf;
    }
    DAT_fffef085 = bVar11 | 0x40;
    if ((DAT_ffff272d & 0x20) == 0) {
      DAT_fffef085 = bVar11 & 0xbf;
    }
    bVar11 = DAT_fffef08a | 2;
    if ((DAT_ffff272d & 0x40) == 0) {
      bVar11 = DAT_fffef08a & 0xfd;
    }
    bVar8 = bVar11 | 4;
    if (((int)(char)DAT_ffff272d & 0x80U) == 0) {
      bVar8 = bVar11 & 0xfb;
    }
    DAT_fffef08a = bVar8 | 1;
    if ((DAT_ffff2730 & 4) == 0) {
      DAT_fffef08a = bVar8 & 0xfe;
    }
  }
  if ((DAT_fffef2d2 == '\x01') || (DAT_fffef2d3 != '\0')) {
    DAT_fffef08b = 0;
    DAT_ffff273d = DAT_ffff273d & 0xf8;
  }
  else if (bVar2) {
    DAT_fffef08b = 0;
    DAT_ffff273d = DAT_ffff273d & 0xf8;
  }
  else {
    DAT_fffef08b = DAT_ffff273d & 7;
  }
  if ((DAT_fffef2d2 == '\x01') || (DAT_fffef2d3 != '\0')) {
    DAT_fffef063 = DAT_fffef063 & 0xf1;
    DAT_fffef065 = DAT_fffef065 & 0x1f;
    DAT_fffef068 = 0;
    DAT_fffef066 = DAT_fffef066 & 0xfc;
    DAT_ffff26b3 = DAT_ffff26b3 & 0xf0;
    DAT_ffff26b5 = DAT_ffff26b5 & 0x7f;
    DAT_ffff26b6 = 0;
    DAT_ffff26b7 = 0;
    DAT_ffff26b8 = 0;
    DAT_ffff26b9 = DAT_ffff26b9 & 0xfe;
    DAT_fffef31b = DAT_fffef31b & 0xfe;
  }
  else if (bVar3) {
    DAT_fffef063 = DAT_fffef063 & 0xf1;
    DAT_fffef065 = DAT_fffef065 & 0x1f;
    DAT_fffef068 = 0;
    DAT_fffef066 = DAT_fffef066 & 0xfd | 1;
    DAT_ffff26b3 = DAT_ffff26b3 & 0xf0;
    DAT_ffff26b5 = DAT_ffff26b5 & 0x7f;
    DAT_ffff26b6 = 0;
    DAT_ffff26b7 = 0;
    DAT_ffff26b8 = 0;
    DAT_ffff26b9 = DAT_ffff26b9 | 1;
    DAT_fffef31b = DAT_fffef31b & 0xfe;
  }
  else {
    bVar11 = DAT_fffef063 | 8;
    if ((DAT_ffff26b3 & 8) == 0) {
      bVar11 = DAT_fffef063 & 0xf7;
    }
    bVar8 = bVar11 | 4;
    if ((DAT_ffff26b3 & 4) == 0) {
      bVar8 = bVar11 & 0xfb;
    }
    DAT_fffef063 = bVar8 | 2;
    if ((DAT_ffff26b3 & 2) == 0) {
      DAT_fffef063 = bVar8 & 0xfd;
    }
    bVar11 = DAT_fffef31b | 1;
    if ((DAT_ffff26b3 & 1) == 0) {
      bVar11 = DAT_fffef31b & 0xfe;
    }
    bVar8 = DAT_fffef066 | 2;
    if (((int)(char)DAT_ffff26b5 & 0x80U) == 0) {
      bVar8 = DAT_fffef066 & 0xfd;
    }
    bVar9 = DAT_fffef065 | 0x80;
    if (((int)(char)DAT_ffff26b7 & 0x80U) == 0) {
      bVar9 = DAT_fffef065 & 0x7f;
    }
    bVar10 = bVar9 | 0x40;
    if ((DAT_ffff26b7 & 0x40) == 0) {
      bVar10 = bVar9 & 0xbf;
    }
    DAT_fffef065 = bVar10 | 0x20;
    if ((DAT_ffff26b7 & 0x20) == 0) {
      DAT_fffef065 = bVar10 & 0xdf;
    }
    DAT_fffef068 = DAT_ffff26b7 & 0x1f;
    DAT_fffef066 = bVar8 | 1;
    DAT_fffef31b = bVar11;
    if ((DAT_ffff26b9 & 1) == 0) {
      DAT_fffef066 = bVar8 & 0xfe;
    }
  }
  DAT_fffef06a = DAT_ffff26b4 & 0xf;
  if (((DAT_fffef2d2 == '\x01') || (DAT_fffef2d3 != '\0')) || (bVar4)) {
    _DAT_fffef308 = 0;
    DAT_fffef2e4 = 0;
    DAT_fffef081 = DAT_fffef081 & 0xf;
    DAT_fffef07f = DAT_fffef07f & 4;
    DAT_ffff271f = 0;
    DAT_ffff2720 = DAT_ffff2720 & 4;
    DAT_ffff2722 = 0;
    DAT_ffff2724 = DAT_ffff2724 & 0x37;
    DAT_ffff2725 = DAT_ffff2725 & 0xf;
    DAT_ffff2726 = DAT_ffff2726 & 0x6c;
    DAT_fffef080 = DAT_fffef080 & 0xfe;
  }
  else {
    _DAT_fffef308 = ((short)(char)DAT_ffff2720 & 3U) * 0x100 + (ushort)DAT_ffff271f;
    DAT_fffef2e4 = DAT_ffff2720 >> 4;
    bVar11 = DAT_fffef080 | 1;
    if ((DAT_ffff2720 & 8) == 0) {
      bVar11 = DAT_fffef080 & 0xfe;
    }
    bVar8 = DAT_fffef07f | 0x40;
    if (((int)(char)DAT_ffff2724 & 0x80U) == 0) {
      bVar8 = DAT_fffef07f & 0xbf;
    }
    bVar9 = bVar8 | 0x20;
    if ((DAT_ffff2724 & 0x40) == 0) {
      bVar9 = bVar8 & 0xdf;
    }
    bVar8 = bVar9 | 0x80;
    if ((DAT_ffff2724 & 8) == 0) {
      bVar8 = bVar9 & 0x7f;
    }
    bVar9 = DAT_fffef081 | 0x80;
    if (((int)(char)DAT_ffff2725 & 0x80U) == 0) {
      bVar9 = DAT_fffef081 & 0x7f;
    }
    bVar10 = bVar9 | 0x40;
    if ((DAT_ffff2725 & 0x40) == 0) {
      bVar10 = bVar9 & 0xbf;
    }
    bVar9 = bVar10 | 0x20;
    if ((DAT_ffff2725 & 0x20) == 0) {
      bVar9 = bVar10 & 0xdf;
    }
    DAT_fffef081 = bVar9 | 0x10;
    if ((DAT_ffff2725 & 0x10) == 0) {
      DAT_fffef081 = bVar9 & 0xef;
    }
    bVar9 = bVar8 | 0x10;
    if (((int)(char)DAT_ffff2726 & 0x80U) == 0) {
      bVar9 = bVar8 & 0xef;
    }
    bVar8 = bVar9 | 8;
    if ((DAT_ffff2726 & 0x10) == 0) {
      bVar8 = bVar9 & 0xf7;
    }
    bVar9 = bVar8 | 2;
    if ((DAT_ffff2726 & 2) == 0) {
      bVar9 = bVar8 & 0xfd;
    }
    DAT_fffef07f = bVar9 | 1;
    DAT_fffef080 = bVar11;
    if ((DAT_ffff2726 & 1) == 0) {
      DAT_fffef07f = bVar9 & 0xfe;
    }
  }
  if (((DAT_fffef2d2 == '\x01') || (DAT_fffef2d3 != '\0')) || (DAT_fffef2d5 != '\0')) {
    DAT_fffef061 = DAT_fffef061 & 0xfc;
    DAT_fffef060 = DAT_fffef060 & 0xfc;
    DAT_ffff26a8 = DAT_ffff26a8 & 0xf;
    DAT_ffff26aa = 0;
  }
  else {
    bVar11 = DAT_fffef061 | 2;
    if (((int)(char)DAT_ffff26a8 & 0x80U) == 0) {
      bVar11 = DAT_fffef061 & 0xfd;
    }
    DAT_fffef061 = bVar11 | 1;
    if ((DAT_ffff26a8 & 0x40) == 0) {
      DAT_fffef061 = bVar11 & 0xfe;
    }
    bVar11 = DAT_fffef060 | 2;
    if ((DAT_ffff26a8 & 0x20) == 0) {
      bVar11 = DAT_fffef060 & 0xfd;
    }
    DAT_fffef060 = bVar11 | 1;
    if ((DAT_ffff26a8 & 0x10) == 0) {
      DAT_fffef060 = bVar11 & 0xfe;
    }
  }
  if ((DAT_fffef2d2 == '\x01') || (DAT_fffef2d3 != '\0')) {
    _DAT_fffef07c = 0;
    DAT_fffef07b = DAT_fffef07b & 0xfc;
    DAT_fffeed62 = 0;
    DAT_ffff2714 = 0;
    DAT_ffff2713 = 0;
    DAT_ffff2716 = DAT_ffff2716 & 0xfc;
    DAT_ffff2718 = DAT_ffff2718 & 0xf0;
  }
  else if (bVar5) {
    _DAT_fffef07c = 0;
    DAT_fffef07b = DAT_fffef07b & 0xfc;
    DAT_fffeed62 = 0;
    DAT_ffff2714 = 0;
    DAT_ffff2713 = 0;
    DAT_ffff2716 = DAT_ffff2716 & 0xfc;
    DAT_ffff2718 = DAT_ffff2718 & 0xf0;
  }
  else {
    _DAT_fffef07c = (ushort)DAT_ffff2714 * 0x100 + (ushort)DAT_ffff2713;
    bVar11 = DAT_fffef07b | 2;
    if ((DAT_ffff2716 & 2) == 0) {
      bVar11 = DAT_fffef07b & 0xfd;
    }
    DAT_fffef07b = bVar11 | 1;
    if ((DAT_ffff2716 & 1) == 0) {
      DAT_fffef07b = bVar11 & 0xfe;
    }
    DAT_fffeed62 = DAT_ffff2718 & 0xf;
  }
  if ((DAT_fffef2d2 == '\x01') || (DAT_fffef2d3 != '\0')) {
    DAT_ffff2709 = DAT_ffff2709 & 0x1f;
  }
  if (bVar6) {
    DAT_fffef30b = 0;
    DAT_ffff2709 = DAT_ffff2709 & 0x1f;
  }
  else {
    DAT_fffef30b = DAT_ffff2709 >> 5;
  }
  DAT_fffef30a = DAT_ffff2708 >> 4;
  if ((DAT_fffef2d2 == '\x01') || (DAT_fffef2d3 != '\0')) {
    _DAT_fffef300 = 0;
    _DAT_fffef302 = 0;
    _DAT_fffef304 = 0;
    DAT_ffff26fb = 0;
    DAT_ffff26fc = 0;
    DAT_ffff26fd = 0;
    DAT_ffff26fe = 0;
    DAT_ffff2700 = 0;
    DAT_ffff2701 = 0;
    DAT_ffff2702 = 0;
  }
  else if (DAT_fffef2d6 == '\0') {
    _DAT_fffef300 = (ushort)DAT_ffff26fb * 0x100 + (ushort)DAT_ffff26fc;
    _DAT_fffef302 = (ushort)DAT_ffff26fd * 0x100 + (ushort)DAT_ffff26fe;
    _DAT_fffef304 = (uint)DAT_ffff2701 * 0x100 + (uint)DAT_ffff2700 * 0x10000 + (uint)DAT_ffff2702;
  }
  else {
    _DAT_fffef300 = 0;
    _DAT_fffef302 = -1;
    _DAT_fffef304 = 0xffffff;
    DAT_ffff26fb = 0;
    DAT_ffff26fc = 0;
    DAT_ffff26fd = 0xff;
    DAT_ffff26fe = 0xff;
    DAT_ffff2700 = 0xff;
    DAT_ffff2701 = 0xff;
    DAT_ffff2702 = 0xff;
  }
  if (_DAT_fffef304 != 0xffffff) {
    _DAT_fffef55c = _DAT_fffef304;
  }
  DAT_fffeed43 = DAT_ffff2692;
  DAT_fffeed47 = DAT_ffff2691;
  DAT_fffeed51 = DAT_ffff26dd;
  DAT_fffef05a = DAT_ffff268f;
  DAT_fffef062 = DAT_ffff26aa;
  DAT_fffef067 = DAT_ffff26b6;
  DAT_fffef069 = DAT_ffff26b8;
  DAT_fffef082 = DAT_ffff2722;
  DAT_fffef088 = DAT_ffff272e;
  DAT_fffef089 = DAT_ffff2732;
  DAT_fffef2f2 = DAT_ffff2693;
  DAT_fffef2fc = DAT_ffff27fd;
  DAT_fffef2fd = DAT_ffff27fe;
  DAT_fffef2fe = DAT_ffff26c1;
  return;
}

