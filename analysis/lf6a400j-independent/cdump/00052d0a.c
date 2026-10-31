
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00052d0a(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  
  if (DAT_ffff0592 < 0x71) {
    DAT_fffef3e0 = '\x01';
  }
  else {
    bVar2 = false;
    if (DAT_fffef3e0 == '\0') goto LAB_00052d40;
    if (0x76 < DAT_ffff0592) {
      bVar2 = false;
      DAT_fffef3e0 = '\0';
      goto LAB_00052d40;
    }
  }
  bVar2 = true;
LAB_00052d40:
  if ((((((int)DAT_ffffab35 & 0x80U) == 0) || ((DAT_ffff0006 & 2) == 0)) || (DAT_ffff0592 < 0x71))
     || (bVar2)) {
    DAT_fffef2d3 = 1;
    bVar2 = true;
  }
  else {
    DAT_fffef2d3 = 0;
    bVar2 = false;
  }
  if (((DAT_fffef2d0 & 4) == 0) && (((int)DAT_fffef3e1 & 0x80U) == 0)) {
    DAT_fffef2d7 = 0;
    bVar5 = false;
  }
  else {
    DAT_fffef2d7 = 1;
    bVar5 = true;
  }
  if ((((DAT_fffef2d0 & 1) == 0) && ((DAT_fffef2d0 & 2) == 0)) && (((int)DAT_fffef3e1 & 0x80U) == 0)
     ) {
    DAT_fffef2d8 = 0;
    bVar4 = false;
  }
  else {
    DAT_fffef2d8 = 1;
    bVar4 = true;
  }
  if ((((DAT_fffef0eb & 0x40) == 0) && (((int)(char)DAT_fffef0eb & 0x80U) == 0)) &&
     (((int)DAT_fffef3e1 & 0x80U) == 0)) {
    DAT_fffef2d9 = 0;
    bVar1 = false;
  }
  else {
    DAT_fffef2d9 = 1;
    bVar1 = true;
  }
  if (((((int)(char)DAT_ffff0570 & 0x80U) == 0) && ((DAT_ffff0570 & 0x40) == 0)) &&
     (((int)DAT_fffef3e1 & 0x80U) == 0)) {
    DAT_fffef31e = 0;
    bVar3 = false;
  }
  else {
    DAT_fffef31e = 1;
    bVar3 = true;
  }
  if ((((DAT_fffef3ff & 1) == 0) && ((DAT_fffef3ff & 2) == 0)) && (((int)DAT_fffef3e1 & 0x80U) == 0)
     ) {
    DAT_fffef3fd = 0;
    bVar7 = false;
  }
  else {
    DAT_fffef3fd = 1;
    bVar7 = true;
  }
  if ((((DAT_fffef2d0 & 0x10) == 0) && ((DAT_fffef2d0 & 0x20) == 0)) &&
     (((int)DAT_fffef3e1 & 0x80U) == 0)) {
    DAT_fffefefc = 0;
    bVar6 = false;
  }
  else {
    DAT_fffefefc = 1;
    bVar6 = true;
  }
  if ((DAT_fffef2d2 == '\x01') || (bVar2)) {
    DAT_fffef058 = DAT_fffef058 & 8;
    _DAT_fffef05c = 0;
    DAT_fffef059 = DAT_fffef059 & 0xf | 1;
    DAT_fffeed45 = 0;
    DAT_ffff2683 = 0;
    DAT_ffff2684 = DAT_ffff2684 & 8;
    DAT_ffff2686 = 0;
    DAT_ffff2685 = 0;
    DAT_ffff2687 = 0x55;
    DAT_ffff2688 = 0;
    DAT_ffff2689 = DAT_ffff2689 & 0xf | 1;
    DAT_ffff268a = DAT_ffff268a & 0xf1;
  }
  else if (DAT_fffef2d5 == '\0') {
    bVar9 = DAT_fffef058 | 0x80;
    if (((int)(char)DAT_ffff2684 & 0x80U) == 0) {
      bVar9 = DAT_fffef058 & 0x7f;
    }
    bVar10 = bVar9 | 0x40;
    if ((DAT_ffff2684 & 0x40) == 0) {
      bVar10 = bVar9 & 0xbf;
    }
    bVar9 = bVar10 | 0x20;
    if ((DAT_ffff2684 & 0x20) == 0) {
      bVar9 = bVar10 & 0xdf;
    }
    bVar10 = bVar9 | 0x10;
    if ((DAT_ffff2684 & 0x10) == 0) {
      bVar10 = bVar9 & 0xef;
    }
    bVar9 = bVar10 | 4;
    if ((DAT_ffff2684 & 4) == 0) {
      bVar9 = bVar10 & 0xfb;
    }
    bVar10 = bVar9 | 2;
    if ((DAT_ffff2684 & 2) == 0) {
      bVar10 = bVar9 & 0xfd;
    }
    DAT_fffef058 = bVar10 | 1;
    if ((DAT_ffff2684 & 1) == 0) {
      DAT_fffef058 = bVar10 & 0xfe;
    }
    _DAT_fffef05c = (ushort)DAT_ffff2686 * 0x100 + (ushort)DAT_ffff2685;
    bVar9 = DAT_fffef059 | 0x80;
    if (((int)(char)DAT_ffff2689 & 0x80U) == 0) {
      bVar9 = DAT_fffef059 & 0x7f;
    }
    bVar10 = bVar9 | 0x40;
    if ((DAT_ffff2689 & 0x40) == 0) {
      bVar10 = bVar9 & 0xbf;
    }
    bVar9 = bVar10 | 0x20;
    if ((DAT_ffff2689 & 0x20) == 0) {
      bVar9 = bVar10 & 0xdf;
    }
    bVar10 = bVar9 | 0x10;
    if ((DAT_ffff2689 & 0x10) == 0) {
      bVar10 = bVar9 & 0xef;
    }
    DAT_fffef059 = bVar10 | 1;
    if ((DAT_ffff2689 & 1) == 0) {
      DAT_fffef059 = bVar10 & 0xfe;
    }
    DAT_fffeed45 = DAT_ffff268a >> 1 & 7;
  }
  else {
    DAT_fffef058 = DAT_fffef058 & 8;
    _DAT_fffef05c = 0;
    DAT_fffef059 = DAT_fffef059 & 0xf | 1;
    DAT_fffeed45 = 0;
    DAT_ffff2683 = 0;
    DAT_ffff2684 = DAT_ffff2684 & 8;
    DAT_ffff2686 = 0;
    DAT_ffff2685 = 0;
    DAT_ffff2687 = 0x55;
    DAT_ffff2688 = 0;
    DAT_ffff2689 = DAT_ffff2689 & 0xf | 1;
    DAT_ffff268a = DAT_ffff268a & 0xf1;
  }
  if ((DAT_fffef2d2 == '\x01') || (bVar2)) {
    _DAT_fffeed40 = 0;
    DAT_fffef05e = DAT_fffef05e & 0xc0;
    DAT_fffef05f = 0x80;
    DAT_fffef060 = DAT_fffef060 & 0xc;
    DAT_fffef061 = DAT_fffef061 & 0xc4;
    DAT_ffff2690 = 0;
    DAT_ffff268f = 0;
    DAT_ffff2691 = DAT_ffff2691 & 0xc0;
    DAT_ffff2692 = 0x80;
    DAT_ffff2693 = DAT_ffff2693 & 0xc;
    DAT_ffff2694 = 0;
    DAT_ffff2695 = 0;
    DAT_ffff2696 = DAT_ffff2696 & 0x40;
    DAT_fffef31a = DAT_fffef31a & 0xfb;
    DAT_fffef3fe = DAT_fffef3fe & 0x7f;
  }
  else if (DAT_fffef2d5 == '\0') {
    _DAT_fffeed40 = (ushort)DAT_ffff2690 * 0x100 + (ushort)DAT_ffff268f;
    bVar9 = DAT_fffef05e | 0x20;
    if ((DAT_ffff2691 & 0x20) == 0) {
      bVar9 = DAT_fffef05e & 0xdf;
    }
    bVar10 = bVar9 | 0x10;
    if ((DAT_ffff2691 & 0x10) == 0) {
      bVar10 = bVar9 & 0xef;
    }
    bVar9 = bVar10 | 8;
    if ((DAT_ffff2691 & 8) == 0) {
      bVar9 = bVar10 & 0xf7;
    }
    bVar10 = bVar9 | 4;
    if ((DAT_ffff2691 & 4) == 0) {
      bVar10 = bVar9 & 0xfb;
    }
    bVar9 = bVar10 | 2;
    if ((DAT_ffff2691 & 2) == 0) {
      bVar9 = bVar10 & 0xfd;
    }
    DAT_fffef05e = bVar9 | 1;
    if ((DAT_ffff2691 & 1) == 0) {
      DAT_fffef05e = bVar9 & 0xfe;
    }
    bVar9 = DAT_fffef05f | 0x80;
    if (((int)(char)DAT_ffff2692 & 0x80U) == 0) {
      bVar9 = DAT_fffef05f & 0x7f;
    }
    bVar10 = bVar9 | 0x40;
    if ((DAT_ffff2692 & 0x40) == 0) {
      bVar10 = bVar9 & 0xbf;
    }
    bVar9 = bVar10 | 0x20;
    if ((DAT_ffff2692 & 0x20) == 0) {
      bVar9 = bVar10 & 0xdf;
    }
    bVar10 = bVar9 | 0x10;
    if ((DAT_ffff2692 & 0x10) == 0) {
      bVar10 = bVar9 & 0xef;
    }
    bVar9 = bVar10 | 8;
    if ((DAT_ffff2692 & 8) == 0) {
      bVar9 = bVar10 & 0xf7;
    }
    bVar10 = bVar9 | 4;
    if ((DAT_ffff2692 & 4) == 0) {
      bVar10 = bVar9 & 0xfb;
    }
    bVar9 = bVar10 | 2;
    if ((DAT_ffff2692 & 2) == 0) {
      bVar9 = bVar10 & 0xfd;
    }
    DAT_fffef05f = bVar9 | 1;
    if ((DAT_ffff2692 & 1) == 0) {
      DAT_fffef05f = bVar9 & 0xfe;
    }
    bVar9 = DAT_fffef060 | 0x80;
    if (((int)(char)DAT_ffff2693 & 0x80U) == 0) {
      bVar9 = DAT_fffef060 & 0x7f;
    }
    bVar10 = bVar9 | 0x40;
    if ((DAT_ffff2693 & 0x40) == 0) {
      bVar10 = bVar9 & 0xbf;
    }
    bVar9 = bVar10 | 0x20;
    if ((DAT_ffff2693 & 0x20) == 0) {
      bVar9 = bVar10 & 0xdf;
    }
    bVar10 = bVar9 | 0x10;
    if ((DAT_ffff2693 & 0x10) == 0) {
      bVar10 = bVar9 & 0xef;
    }
    bVar9 = bVar10 | 2;
    if ((DAT_ffff2693 & 2) == 0) {
      bVar9 = bVar10 & 0xfd;
    }
    DAT_fffef060 = bVar9 | 1;
    if ((DAT_ffff2693 & 1) == 0) {
      DAT_fffef060 = bVar9 & 0xfe;
    }
    bVar9 = DAT_fffef3fe | 0x80;
    if (((int)(char)DAT_ffff2696 & 0x80U) == 0) {
      bVar9 = DAT_fffef3fe & 0x7f;
    }
    bVar10 = DAT_fffef061 | 0x20;
    if ((DAT_ffff2696 & 0x20) == 0) {
      bVar10 = DAT_fffef061 & 0xdf;
    }
    bVar11 = bVar10 | 0x10;
    if ((DAT_ffff2696 & 0x10) == 0) {
      bVar11 = bVar10 & 0xef;
    }
    bVar10 = bVar11 | 8;
    if ((DAT_ffff2696 & 8) == 0) {
      bVar10 = bVar11 & 0xf7;
    }
    bVar11 = DAT_fffef31a | 4;
    if ((DAT_ffff2696 & 4) == 0) {
      bVar11 = DAT_fffef31a & 0xfb;
    }
    bVar8 = bVar10 | 2;
    if ((DAT_ffff2696 & 2) == 0) {
      bVar8 = bVar10 & 0xfd;
    }
    DAT_fffef061 = bVar8 | 1;
    DAT_fffef31a = bVar11;
    DAT_fffef3fe = bVar9;
    if ((DAT_ffff2696 & 1) == 0) {
      DAT_fffef061 = bVar8 & 0xfe;
    }
  }
  else {
    _DAT_fffeed40 = 0;
    DAT_fffef05e = DAT_fffef05e & 0xc0;
    DAT_fffef05f = 0x80;
    DAT_fffef060 = DAT_fffef060 & 0xc;
    DAT_fffef061 = DAT_fffef061 & 0xc4;
    DAT_ffff2690 = 0;
    DAT_ffff268f = 0;
    DAT_ffff2691 = DAT_ffff2691 & 0xc0;
    DAT_ffff2692 = 0x80;
    DAT_ffff2693 = DAT_ffff2693 & 0xc;
    DAT_ffff2694 = 0;
    DAT_ffff2695 = 0;
    DAT_ffff2696 = DAT_ffff2696 & 0x40;
    DAT_fffef31a = DAT_fffef31a & 0xfb;
    DAT_fffef3fe = DAT_fffef3fe & 0x7f;
  }
  if ((DAT_fffef2d2 == '\x01') || (bVar2)) {
    DAT_fffef063 = DAT_fffef063 & 0xf1;
    DAT_fffef065 = DAT_fffef065 & 0x1f;
    DAT_fffef068 = 0;
    DAT_fffef06a = 0;
    DAT_ffff269b = DAT_ffff269b & 0xf0;
    DAT_ffff269c = DAT_ffff269c & 0xdf;
    DAT_ffff269d = 0;
    DAT_ffff269e = 0;
    DAT_ffff269f = 0;
    DAT_ffff26a0 = DAT_ffff26a0 & 0xfe;
    DAT_ffff26a1 = DAT_ffff26a1 & 0xf1;
    DAT_fffef064 = DAT_fffef064 & 0xdf;
    DAT_fffef066 = DAT_fffef066 & 0xfe;
    DAT_fffef31b = DAT_fffef31b & 0xfe;
  }
  else if (bVar1) {
    DAT_fffef063 = DAT_fffef063 & 0xf1;
    DAT_fffef065 = DAT_fffef065 & 0x1f;
    DAT_fffef068 = 0;
    DAT_fffef06a = 0;
    DAT_ffff269b = DAT_ffff269b & 0xf0;
    DAT_ffff269c = DAT_ffff269c & 0xdf;
    DAT_ffff269d = 0;
    DAT_ffff269e = 0;
    DAT_ffff269f = 0;
    DAT_ffff26a0 = DAT_ffff26a0 | 1;
    DAT_ffff26a1 = DAT_ffff26a1 & 0xf1;
    DAT_fffef064 = DAT_fffef064 & 0xdf;
    DAT_fffef066 = DAT_fffef066 | 1;
    DAT_fffef31b = DAT_fffef31b & 0xfe;
  }
  else {
    bVar9 = DAT_fffef063 | 8;
    if ((DAT_ffff269b & 8) == 0) {
      bVar9 = DAT_fffef063 & 0xf7;
    }
    bVar10 = bVar9 | 4;
    if ((DAT_ffff269b & 4) == 0) {
      bVar10 = bVar9 & 0xfb;
    }
    DAT_fffef063 = bVar10 | 2;
    if ((DAT_ffff269b & 2) == 0) {
      DAT_fffef063 = bVar10 & 0xfd;
    }
    bVar9 = DAT_fffef31b | 1;
    if ((DAT_ffff269b & 1) == 0) {
      bVar9 = DAT_fffef31b & 0xfe;
    }
    bVar10 = DAT_fffef064 | 0x20;
    if ((DAT_ffff269c & 0x20) == 0) {
      bVar10 = DAT_fffef064 & 0xdf;
    }
    bVar11 = DAT_fffef065 | 0x80;
    if (((int)(char)DAT_ffff269e & 0x80U) == 0) {
      bVar11 = DAT_fffef065 & 0x7f;
    }
    bVar8 = bVar11 | 0x40;
    if ((DAT_ffff269e & 0x40) == 0) {
      bVar8 = bVar11 & 0xbf;
    }
    DAT_fffef065 = bVar8 | 0x20;
    if ((DAT_ffff269e & 0x20) == 0) {
      DAT_fffef065 = bVar8 & 0xdf;
    }
    DAT_fffef068 = DAT_ffff269e & 0x1f;
    bVar11 = DAT_fffef066 | 1;
    if ((DAT_ffff26a0 & 1) == 0) {
      bVar11 = DAT_fffef066 & 0xfe;
    }
    DAT_fffef06a = DAT_ffff26a1 >> 1 & 7;
    DAT_fffef064 = bVar10;
    DAT_fffef066 = bVar11;
    DAT_fffef31b = bVar9;
  }
  if (((DAT_fffef2d2 == '\x01') || (bVar2)) || (DAT_fffef2d4 != '\0')) {
    _DAT_fffeed4c = 0x3700;
    _DAT_fffeed4a = 10000;
    DAT_fffef06b = DAT_fffef06b & 0xf9;
    DAT_ffff26a8 = 0x27;
    DAT_ffff26a7 = 0x10;
    DAT_ffff26aa = 0x37;
    DAT_ffff26a9 = 0;
    DAT_ffff26ab = DAT_ffff26ab & 0xf8;
    bVar9 = DAT_fffef06c & 0xfe;
  }
  else {
    _DAT_fffeed4a = (ushort)DAT_ffff26a8 * 0x100 + (ushort)DAT_ffff26a7;
    _DAT_fffeed4c = (ushort)DAT_ffff26aa * 0x100 + (ushort)DAT_ffff26a9;
    bVar9 = DAT_fffef06b | 4;
    if ((DAT_ffff26ab & 4) == 0) {
      bVar9 = DAT_fffef06b & 0xfb;
    }
    DAT_fffef06b = bVar9 | 2;
    if ((DAT_ffff26ab & 2) == 0) {
      DAT_fffef06b = bVar9 & 0xfd;
    }
    bVar9 = DAT_fffef06c | 1;
    if ((DAT_ffff26ab & 1) == 0) {
      bVar9 = DAT_fffef06c & 0xfe;
    }
  }
  DAT_fffef06c = bVar9;
  bVar9 = DAT_ffff8864;
  if ((DAT_fffef2d2 == '\x01') || (bVar2)) {
    DAT_fffef06c = DAT_fffef06c & 0x7f | 4;
    _DAT_fffef31c = 0;
    DAT_fffeed51 = 0;
    DAT_fffef06d = DAT_fffef06d & 0xf8;
    DAT_fffef06e = DAT_fffef06e & 0xf0;
    DAT_fffef06f = DAT_fffef06f & 0x7f | 8;
    DAT_ffff26b4 = 0;
    DAT_ffff26b3 = 0;
    DAT_ffff26b5 = 0;
    DAT_ffff26b7 = DAT_ffff26b7 & 0xf1;
    DAT_ffff26b8 = DAT_ffff26b8 & 0xfc;
    DAT_ffff26b9 = DAT_ffff26b9 & 0xf0;
    DAT_ffff26ba = DAT_ffff26ba & 0x7d | 0xc;
  }
  else if (DAT_fffef2d4 == '\0') {
    _DAT_fffef31c = (ushort)DAT_ffff26b4 * 0x100 + (ushort)DAT_ffff26b3;
    DAT_fffeed51 = DAT_ffff26b7 >> 1 & 7;
    bVar9 = DAT_fffef06d | 4;
    if ((DAT_ffff26b8 & 4) == 0) {
      bVar9 = DAT_fffef06d & 0xfb;
    }
    bVar10 = bVar9 | 2;
    if ((DAT_ffff26b8 & 2) == 0) {
      bVar10 = bVar9 & 0xfd;
    }
    DAT_fffef06d = bVar10 | 1;
    if ((DAT_ffff26b8 & 1) == 0) {
      DAT_fffef06d = bVar10 & 0xfe;
    }
    bVar9 = DAT_fffef06e | 8;
    if ((DAT_ffff26b9 & 8) == 0) {
      bVar9 = DAT_fffef06e & 0xf7;
    }
    bVar10 = bVar9 | 4;
    if ((DAT_ffff26b9 & 4) == 0) {
      bVar10 = bVar9 & 0xfb;
    }
    bVar9 = bVar10 | 2;
    if ((DAT_ffff26b9 & 2) == 0) {
      bVar9 = bVar10 & 0xfd;
    }
    DAT_fffef06e = bVar9 | 1;
    if ((DAT_ffff26b9 & 1) == 0) {
      DAT_fffef06e = bVar9 & 0xfe;
    }
    bVar1 = ((int)(char)DAT_ffff26ba & 0x80U) == 0;
    bVar9 = DAT_fffef06f | 0x80;
    if (bVar1) {
      bVar9 = DAT_fffef06f & 0x7f;
    }
    DAT_fffef06f = bVar9 | 8;
    if ((DAT_ffff26ba & 8) == 0) {
      DAT_fffef06f = bVar9 & 0xf7;
    }
    bVar9 = DAT_fffef06c | 4;
    if ((DAT_ffff26ba & 4) == 0) {
      bVar9 = DAT_fffef06c & 0xfb;
    }
    DAT_fffef06c = bVar9 | 0x80;
    if ((DAT_ffff26ba & 2) == 0) {
      DAT_fffef06c = bVar9 & 0x7f;
    }
    bVar10 = DAT_ffff8866 | 1;
    if ((DAT_ffff8865 & 1) == 0) {
      bVar10 = DAT_ffff8866 & 0xfe;
    }
    bVar11 = DAT_ffff8865 | 1;
    if ((DAT_ffff8864 & 1) == 0) {
      bVar11 = DAT_ffff8865 & 0xfe;
    }
    bVar9 = DAT_ffff8864 | 1;
    DAT_ffff8865 = bVar11;
    DAT_ffff8866 = bVar10;
    if (bVar1) {
      bVar9 = DAT_ffff8864 & 0xfe;
    }
  }
  else {
    DAT_fffef06c = DAT_fffef06c & 0x7b;
    _DAT_fffef31c = 0;
    DAT_fffeed51 = 0;
    DAT_fffef06d = DAT_fffef06d & 0xf8;
    DAT_fffef06e = DAT_fffef06e & 0xf0;
    DAT_fffef06f = DAT_fffef06f & 0x77;
    DAT_ffff26b4 = 0;
    DAT_ffff26b3 = 0;
    DAT_ffff26b5 = 0;
    DAT_ffff26b7 = DAT_ffff26b7 & 0xf1;
    DAT_ffff26b8 = DAT_ffff26b8 & 0xfc;
    DAT_ffff26b9 = DAT_ffff26b9 & 0xf0;
    DAT_ffff26ba = DAT_ffff26ba & 0x71;
  }
  DAT_ffff8864 = bVar9;
  if ((DAT_fffef2d2 == '\x01') || (bVar2)) {
    _DAT_fffef070 = 0;
    _DAT_fffef072 = 0;
    _DAT_fffef074 = 0;
    _DAT_fffef076 = 0;
    DAT_ffff26c0 = 0;
    DAT_ffff26bf = 0;
    DAT_ffff26c2 = 0;
    DAT_ffff26c1 = 0;
    DAT_ffff26c4 = 0;
    DAT_ffff26c3 = 0;
    DAT_ffff26c6 = 0;
    DAT_ffff26c5 = 0;
  }
  else if (DAT_fffef2d4 == '\0') {
    _DAT_fffef070 = (ushort)DAT_ffff26c0 * 0x100 + (ushort)DAT_ffff26bf;
    _DAT_fffef072 = (ushort)DAT_ffff26c2 * 0x100 + (ushort)DAT_ffff26c1;
    _DAT_fffef074 = (ushort)DAT_ffff26c4 * 0x100 + (ushort)DAT_ffff26c3;
    _DAT_fffef076 = (ushort)DAT_ffff26c6 * 0x100 + (ushort)DAT_ffff26c5;
  }
  else {
    _DAT_fffef070 = 0;
    _DAT_fffef072 = 0;
    _DAT_fffef074 = 0;
    _DAT_fffef076 = 0;
    DAT_ffff26c0 = 0;
    DAT_ffff26bf = 0;
    DAT_ffff26c2 = 0;
    DAT_ffff26c1 = 0;
    DAT_ffff26c4 = 0;
    DAT_ffff26c3 = 0;
    DAT_ffff26c6 = 0;
    DAT_ffff26c5 = 0;
  }
  if (((DAT_fffef2d2 == '\x01') || (bVar2)) || (DAT_fffef2d6 != '\0')) {
    DAT_fffef079 = DAT_fffef079 & 0xde;
    DAT_fffef319 = DAT_fffef319 & 100;
    DAT_fffef07a = DAT_fffef07a & 0xef;
    DAT_fffeed5d = 0;
    DAT_ffff26cf = DAT_ffff26cf & 0xf7;
    DAT_ffff26d0 = DAT_ffff26d0 & 0x54;
    DAT_ffff26d1 = DAT_ffff26d1 & 0x61;
  }
  else {
    bVar9 = DAT_fffef319 | 8;
    if ((DAT_ffff26cf & 8) == 0) {
      bVar9 = DAT_fffef319 & 0xf7;
    }
    bVar10 = bVar9 | 0x80;
    if (((int)(char)DAT_ffff26d0 & 0x80U) == 0) {
      bVar10 = bVar9 & 0x7f;
    }
    bVar9 = DAT_fffef079 | 0x20;
    if ((DAT_ffff26d0 & 0x20) == 0) {
      bVar9 = DAT_fffef079 & 0xdf;
    }
    bVar11 = bVar10 | 0x10;
    if ((DAT_ffff26d0 & 8) == 0) {
      bVar11 = bVar10 & 0xef;
    }
    bVar10 = bVar11 | 2;
    if ((DAT_ffff26d0 & 2) == 0) {
      bVar10 = bVar11 & 0xfd;
    }
    DAT_fffef079 = bVar9 | 1;
    if ((DAT_ffff26d0 & 1) == 0) {
      DAT_fffef079 = bVar9 & 0xfe;
    }
    DAT_fffef319 = bVar10 | 1;
    if (((int)(char)DAT_ffff26d1 & 0x80U) == 0) {
      DAT_fffef319 = bVar10 & 0xfe;
    }
    bVar9 = DAT_fffef07a | 0x10;
    if ((DAT_ffff26d1 & 0x10) == 0) {
      bVar9 = DAT_fffef07a & 0xef;
    }
    DAT_fffeed5d = DAT_ffff26d1 >> 1 & 7;
    DAT_fffef07a = bVar9;
  }
  if ((DAT_fffef2d2 == '\x01') || (bVar2)) {
    DAT_fffef319 = DAT_fffef319 & 0xfb;
    DAT_ffff2fdb = DAT_ffff2fdb & 0xfc;
    DAT_fffef30d = DAT_fffef30d & 0xdf;
    DAT_fffef2ff = 0;
    DAT_ffff26db = DAT_ffff26db & 0x18;
  }
  else if (DAT_fffef2d6 == '\0') {
    bVar9 = DAT_fffef319 | 4;
    if ((DAT_ffff26db & 4) == 0) {
      bVar9 = DAT_fffef319 & 0xfb;
    }
    bVar10 = DAT_ffff2fdb | 2;
    if ((DAT_ffff26db & 2) == 0) {
      bVar10 = DAT_ffff2fdb & 0xfd;
    }
    DAT_ffff2fdb = bVar10 | 1;
    if ((DAT_ffff26db & 1) == 0) {
      DAT_ffff2fdb = bVar10 & 0xfe;
    }
    bVar10 = DAT_fffef30d | 0x20;
    if ((DAT_ffff26db & 0x20) == 0) {
      bVar10 = DAT_fffef30d & 0xdf;
    }
    DAT_fffef2ff = DAT_ffff26db >> 6;
    DAT_fffef30d = bVar10;
    DAT_fffef319 = bVar9;
  }
  else {
    DAT_ffff2fdb = DAT_ffff2fdb & 0xfc;
    DAT_fffef2ff = 0;
    DAT_ffff26db = DAT_ffff26db & 0x18;
    DAT_fffef30d = DAT_fffef30d & 0xdf;
    DAT_fffef319 = DAT_fffef319 & 0xfb;
  }
  if ((DAT_fffef2d2 == '\x01') || (bVar2)) {
    _DAT_fffef2f0 = 0;
    DAT_ffff26e9 = DAT_ffff26e9 & 0xfc;
    DAT_ffff26e8 = 0;
  }
  else if (DAT_fffef2d6 == '\0') {
    _DAT_fffef2f0 = ((short)(char)DAT_ffff26e9 & 3U) * 0x100 + (ushort)DAT_ffff26e8;
  }
  else {
    _DAT_fffef2f0 = 0;
    DAT_ffff26e9 = DAT_ffff26e9 & 0xfc;
    DAT_ffff26e8 = 0;
  }
  if ((DAT_fffef2d2 == '\x01') || (bVar2)) {
    DAT_fffef083 = DAT_fffef083 & 0xf8;
    DAT_fffef084 = 0;
    DAT_ffff26ef = DAT_ffff26ef & 0xf8;
    DAT_ffff26f1 = DAT_ffff26f1 & 0xf8;
  }
  else if (bVar3) {
    DAT_fffef083 = DAT_fffef083 & 0xf8;
    DAT_fffef084 = 0;
    DAT_ffff26ef = DAT_ffff26ef & 0xf8;
    DAT_ffff26f1 = DAT_ffff26f1 & 0xf8;
  }
  else {
    bVar9 = DAT_fffef083 | 4;
    if ((DAT_ffff26ef & 4) == 0) {
      bVar9 = DAT_fffef083 & 0xfb;
    }
    bVar10 = bVar9 | 2;
    if ((DAT_ffff26ef & 2) == 0) {
      bVar10 = bVar9 & 0xfd;
    }
    DAT_fffef083 = bVar10 | 1;
    if ((DAT_ffff26ef & 1) == 0) {
      DAT_fffef083 = bVar10 & 0xfe;
    }
    DAT_fffef084 = DAT_ffff26f1 & 7;
  }
  if ((DAT_fffef2d2 == '\x01') || (bVar2)) {
    _DAT_fffef07c = 0;
    DAT_fffef07b = DAT_fffef07b & 0xf8;
    DAT_fffeed62 = 0;
    DAT_ffff26fb = 0;
    DAT_ffff26fc = 0;
    DAT_ffff26fd = 0;
    DAT_ffff26ff = DAT_ffff26ff & 0xf8;
    DAT_ffff2700 = DAT_ffff2700 & 0xf1;
  }
  else if (bVar4) {
    _DAT_fffef07c = 0;
    DAT_fffef07b = DAT_fffef07b & 0xf8;
    DAT_fffeed62 = 0;
    DAT_ffff26fb = 0;
    DAT_ffff26fc = 0;
    DAT_ffff26fd = 0;
    DAT_ffff26ff = DAT_ffff26ff & 0xf8;
    DAT_ffff2700 = DAT_ffff2700 & 0xf1;
  }
  else {
    _DAT_fffef07c = (ushort)DAT_ffff26fb * 0x100 + (ushort)DAT_ffff26fc;
    bVar9 = DAT_fffef07b | 4;
    if ((DAT_ffff26ff & 4) == 0) {
      bVar9 = DAT_fffef07b & 0xfb;
    }
    bVar10 = bVar9 | 2;
    if ((DAT_ffff26ff & 2) == 0) {
      bVar10 = bVar9 & 0xfd;
    }
    DAT_fffef07b = bVar10 | 1;
    if ((DAT_ffff26ff & 1) == 0) {
      DAT_fffef07b = bVar10 & 0xfe;
    }
    DAT_fffeed62 = DAT_ffff2700 >> 1 & 7;
  }
  if (((DAT_fffef2d2 == '\x01') || (bVar2)) || (bVar5)) {
    DAT_fffef081 = DAT_fffef081 & 0xf;
    DAT_fffef07f = DAT_fffef07f & 0x8c;
    DAT_ffff2707 = 0x50;
    DAT_ffff2709 = DAT_ffff2709 & 0xf;
    DAT_ffff270a = DAT_ffff270a & 0x8c;
    DAT_ffff270b = DAT_ffff270b & 0xfe;
    bVar9 = DAT_fffef080 & 0xfe;
  }
  else {
    bVar9 = DAT_fffef081 | 0x80;
    if (((int)(char)DAT_ffff2709 & 0x80U) == 0) {
      bVar9 = DAT_fffef081 & 0x7f;
    }
    bVar10 = bVar9 | 0x40;
    if ((DAT_ffff2709 & 0x40) == 0) {
      bVar10 = bVar9 & 0xbf;
    }
    bVar9 = bVar10 | 0x20;
    if ((DAT_ffff2709 & 0x20) == 0) {
      bVar9 = bVar10 & 0xdf;
    }
    DAT_fffef081 = bVar9 | 0x10;
    if ((DAT_ffff2709 & 0x10) == 0) {
      DAT_fffef081 = bVar9 & 0xef;
    }
    bVar9 = DAT_fffef07f | 0x40;
    if ((DAT_ffff270a & 0x40) == 0) {
      bVar9 = DAT_fffef07f & 0xbf;
    }
    bVar10 = bVar9 | 0x20;
    if ((DAT_ffff270a & 0x20) == 0) {
      bVar10 = bVar9 & 0xdf;
    }
    bVar9 = bVar10 | 0x10;
    if ((DAT_ffff270a & 0x10) == 0) {
      bVar9 = bVar10 & 0xef;
    }
    bVar10 = bVar9 | 2;
    if ((DAT_ffff270a & 2) == 0) {
      bVar10 = bVar9 & 0xfd;
    }
    DAT_fffef07f = bVar10 | 1;
    if ((DAT_ffff270a & 1) == 0) {
      DAT_fffef07f = bVar10 & 0xfe;
    }
    bVar9 = DAT_fffef080 | 1;
    if ((DAT_ffff270b & 1) == 0) {
      bVar9 = DAT_fffef080 & 0xfe;
    }
  }
  DAT_fffef080 = bVar9;
  if ((DAT_fffef2d2 == '\x01') || (bVar2)) {
    _DAT_fffef086 = 10000;
    DAT_fffef08a = DAT_fffef08a & 0xf9;
    DAT_fffef085 = DAT_fffef085 & 0x84;
    DAT_ffff2714 = 0x27;
    DAT_ffff2713 = 0x10;
    DAT_ffff2715 = 0;
    DAT_ffff2717 = 0xff;
    DAT_ffff271a = 0;
    DAT_fffef41a = DAT_fffef41a & 0xfd;
  }
  else if (bVar6) {
    _DAT_fffef086 = 10000;
    DAT_fffef08a = DAT_fffef08a & 0xf9;
    DAT_fffef085 = DAT_fffef085 & 0x84;
    DAT_ffff2714 = 0x27;
    DAT_ffff2713 = 0x10;
    DAT_ffff2715 = 0;
    DAT_ffff2717 = 0xff;
    DAT_ffff271a = 0;
    DAT_fffef41a = DAT_fffef41a & 0xfd;
  }
  else {
    _DAT_fffef086 = (ushort)DAT_ffff2714 * 0x100 + (ushort)DAT_ffff2713;
    bVar9 = DAT_fffef08a | 2;
    if (((int)(char)DAT_ffff2715 & 0x80U) == 0) {
      bVar9 = DAT_fffef08a & 0xfd;
    }
    bVar10 = DAT_fffef085 | 0x40;
    if ((DAT_ffff2715 & 0x40) == 0) {
      bVar10 = DAT_fffef085 & 0xbf;
    }
    bVar11 = bVar10 | 0x20;
    if ((DAT_ffff2715 & 0x20) == 0) {
      bVar11 = bVar10 & 0xdf;
    }
    bVar10 = bVar11 | 0x10;
    if ((DAT_ffff2715 & 0x10) == 0) {
      bVar10 = bVar11 & 0xef;
    }
    bVar11 = bVar10 | 8;
    if ((DAT_ffff2715 & 8) == 0) {
      bVar11 = bVar10 & 0xf7;
    }
    DAT_fffef08a = bVar9 | 4;
    if ((DAT_ffff2715 & 4) == 0) {
      DAT_fffef08a = bVar9 & 0xfb;
    }
    bVar9 = bVar11 | 2;
    if ((DAT_ffff2715 & 2) == 0) {
      bVar9 = bVar11 & 0xfd;
    }
    DAT_fffef085 = bVar9 | 1;
    if ((DAT_ffff2715 & 1) == 0) {
      DAT_fffef085 = bVar9 & 0xfe;
    }
  }
  if ((DAT_fffef2d2 == '\x01') || (bVar2)) {
    DAT_fffef08a = DAT_fffef08a & 0xfe;
    DAT_fffef08b = 0;
    DAT_ffff2723 = DAT_ffff2723 & 0xef;
    DAT_ffff2724 = DAT_ffff2724 & 0xf1;
  }
  else if (bVar6) {
    DAT_fffef08b = 0;
    DAT_ffff2723 = DAT_ffff2723 & 0xef;
    DAT_ffff2724 = DAT_ffff2724 & 0xf1;
    DAT_fffef08a = DAT_fffef08a & 0xfe;
  }
  else {
    bVar9 = DAT_fffef08a | 1;
    if ((DAT_ffff2723 & 0x10) == 0) {
      bVar9 = DAT_fffef08a & 0xfe;
    }
    DAT_fffef08b = DAT_ffff2724 >> 1 & 7;
    DAT_fffef08a = bVar9;
  }
  if ((DAT_fffef2d2 == '\x01') || (bVar2)) {
    DAT_fffef30a = 0;
    DAT_fffef30b = 0;
    DAT_ffff272c = DAT_ffff272c & 0xf;
    DAT_ffff272d = DAT_ffff272d & 0x1f;
  }
  else if (bVar7) {
    DAT_fffef30a = 0;
    DAT_fffef30b = 0;
    DAT_ffff272c = DAT_ffff272c & 0xf;
    DAT_ffff272d = DAT_ffff272d & 0x1f;
  }
  else {
    DAT_fffef30a = DAT_ffff272c >> 4;
    DAT_fffef30b = DAT_ffff272d >> 5;
  }
  DAT_fffeed43 = DAT_ffff2688;
  DAT_fffeed47 = DAT_ffff2695;
  DAT_fffef05a = DAT_ffff2683;
  DAT_fffef062 = DAT_ffff2694;
  DAT_fffef067 = DAT_ffff269d;
  DAT_fffef069 = DAT_ffff269f;
  DAT_fffef07e = DAT_ffff26fd;
  DAT_fffef082 = DAT_ffff2707;
  DAT_fffef088 = DAT_ffff2717;
  DAT_fffef089 = DAT_ffff271a;
  DAT_fffef2f2 = DAT_ffff2687;
  DAT_fffef2fe = DAT_ffff26b5;
  return;
}

