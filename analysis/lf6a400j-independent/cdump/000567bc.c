
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000567bc(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  
  if (DAT_ffff0592 < 0x71) {
    DAT_fffef3e0 = '\x01';
  }
  else {
    bVar2 = false;
    if (DAT_fffef3e0 == '\0') goto LAB_00056852;
    if (0x76 < DAT_ffff0592) {
      bVar2 = false;
      DAT_fffef3e0 = '\0';
      goto LAB_00056852;
    }
  }
  bVar2 = true;
LAB_00056852:
  if ((((((int)DAT_ffffab35 & 0x80U) == 0) || ((DAT_ffff0006 & 2) == 0)) || (DAT_ffff0592 < 0x71))
     || (bVar2)) {
    DAT_fffef2d3 = 1;
    bVar2 = true;
  }
  else {
    DAT_fffef2d3 = 0;
    bVar2 = false;
  }
  if ((((DAT_fffef401 & 1) == 0) && ((DAT_fffef2d0 & 1) != 0)) ||
     (((DAT_fffef401 & 2) == 0 && ((DAT_fffef2d0 & 2) != 0)))) {
    DAT_fffef2d8 = 1;
    bVar3 = true;
  }
  else {
    DAT_fffef2d8 = 0;
    bVar3 = false;
  }
  bVar4 = DAT_fffef401 | 1;
  if ((DAT_fffef2d0 & 1) == 0) {
    bVar4 = DAT_fffef401 & 0xfe;
  }
  DAT_fffef401 = bVar4 | 2;
  if ((DAT_fffef2d0 & 2) == 0) {
    DAT_fffef401 = bVar4 & 0xfd;
  }
  if (((DAT_fffef2d2 == '\x01') || (bVar2)) || (DAT_fffef2d5 != '\0')) {
    DAT_fffef059 = DAT_fffef059 & 0xf;
    DAT_fffef058 = DAT_fffef058 & 0xf;
    DAT_fffef060 = DAT_fffef060 & 0xf;
    _DAT_fffeed40 = 0;
    DAT_ffff2683 = DAT_ffff2683 & 0x4f;
    DAT_ffff2684 = 0;
    DAT_ffff2685 = DAT_ffff2685 & 0x78;
    DAT_ffff2687 = 0;
    DAT_ffff2686 = 0;
    DAT_fffef061 = DAT_fffef061 & 0xf7;
    DAT_fffef31a = DAT_fffef31a & 0x7f;
    DAT_fffef3fe = DAT_fffef3fe & 0x7f;
  }
  else {
    bVar4 = DAT_fffef3fe | 0x80;
    if (((int)(char)DAT_ffff2683 & 0x80U) == 0) {
      bVar4 = DAT_fffef3fe & 0x7f;
    }
    bVar5 = DAT_fffef061 | 8;
    if ((DAT_ffff2683 & 0x20) == 0) {
      bVar5 = DAT_fffef061 & 0xf7;
    }
    bVar10 = DAT_fffef060 | 0x80;
    if ((DAT_ffff2683 & 0x10) == 0) {
      bVar10 = DAT_fffef060 & 0x7f;
    }
    bVar6 = DAT_fffef059 | 0x80;
    if (((int)(char)DAT_ffff2684 & 0x80U) == 0) {
      bVar6 = DAT_fffef059 & 0x7f;
    }
    bVar7 = bVar6 | 0x40;
    if ((DAT_ffff2684 & 0x40) == 0) {
      bVar7 = bVar6 & 0xbf;
    }
    bVar6 = bVar7 | 0x20;
    if ((DAT_ffff2684 & 0x20) == 0) {
      bVar6 = bVar7 & 0xdf;
    }
    DAT_fffef059 = bVar6 | 0x10;
    if ((DAT_ffff2684 & 0x10) == 0) {
      DAT_fffef059 = bVar6 & 0xef;
    }
    bVar6 = DAT_fffef058 | 0x80;
    if ((DAT_ffff2684 & 8) == 0) {
      bVar6 = DAT_fffef058 & 0x7f;
    }
    bVar7 = bVar6 | 0x40;
    if ((DAT_ffff2684 & 4) == 0) {
      bVar7 = bVar6 & 0xbf;
    }
    bVar6 = bVar7 | 0x20;
    if ((DAT_ffff2684 & 2) == 0) {
      bVar6 = bVar7 & 0xdf;
    }
    DAT_fffef058 = bVar6 | 0x10;
    if ((DAT_ffff2684 & 1) == 0) {
      DAT_fffef058 = bVar6 & 0xef;
    }
    bVar6 = DAT_fffef31a | 0x80;
    if (((int)(char)DAT_ffff2685 & 0x80U) == 0) {
      bVar6 = DAT_fffef31a & 0x7f;
    }
    bVar7 = bVar10 | 0x40;
    if ((DAT_ffff2685 & 4) == 0) {
      bVar7 = bVar10 & 0xbf;
    }
    bVar10 = bVar7 | 0x20;
    if ((DAT_ffff2685 & 2) == 0) {
      bVar10 = bVar7 & 0xdf;
    }
    DAT_fffef060 = bVar10 | 0x10;
    if ((DAT_ffff2685 & 1) == 0) {
      DAT_fffef060 = bVar10 & 0xef;
    }
    _DAT_fffeed40 = (ushort)DAT_ffff2687 * 0x100 + (ushort)DAT_ffff2686;
    DAT_fffef061 = bVar5;
    DAT_fffef31a = bVar6;
    DAT_fffef3fe = bVar4;
  }
  if (((DAT_fffef2d2 == '\x01') || (bVar2)) || (DAT_fffef2d5 != '\0')) {
    DAT_ffff268f = 0xff;
    DAT_ffff2690 = 0;
    DAT_ffff2692 = 0;
  }
  if (((DAT_fffef2d2 == '\x01') || (bVar2)) || (DAT_fffef2d5 != '\0')) {
    DAT_fffef061 = DAT_fffef061 & 0xcf;
    DAT_fffef05f = DAT_fffef05f & 0x8f | 0x80;
    DAT_ffff269d = DAT_ffff269d & 200 | 8;
    DAT_ffff26a2 = 0;
  }
  else {
    bVar4 = DAT_fffef061 | 0x20;
    if ((DAT_ffff269d & 0x20) == 0) {
      bVar4 = DAT_fffef061 & 0xdf;
    }
    DAT_fffef061 = bVar4 | 0x10;
    if ((DAT_ffff269d & 0x10) == 0) {
      DAT_fffef061 = bVar4 & 0xef;
    }
    bVar4 = DAT_fffef05f | 0x80;
    if ((DAT_ffff269d & 8) == 0) {
      bVar4 = DAT_fffef05f & 0x7f;
    }
    bVar5 = bVar4 | 0x40;
    if ((DAT_ffff269d & 4) == 0) {
      bVar5 = bVar4 & 0xbf;
    }
    bVar4 = bVar5 | 0x20;
    if ((DAT_ffff269d & 2) == 0) {
      bVar4 = bVar5 & 0xdf;
    }
    DAT_fffef05f = bVar4 | 0x10;
    if ((DAT_ffff269d & 1) == 0) {
      DAT_fffef05f = bVar4 & 0xef;
    }
  }
  if (((DAT_fffef2d2 == '\x01') || (bVar2)) || (DAT_fffef2d4 != '\0')) {
    DAT_fffef06b = DAT_fffef06b & 0xf9;
    DAT_ffff26a9 = 0;
    DAT_ffff26aa = 0xff;
    DAT_ffff26ab = DAT_ffff26ab & 0xf8;
    bVar4 = DAT_fffef06c & 0xfe;
  }
  else {
    bVar4 = DAT_fffef06b | 4;
    if ((DAT_ffff26ab & 4) == 0) {
      bVar4 = DAT_fffef06b & 0xfb;
    }
    DAT_fffef06b = bVar4 | 2;
    if ((DAT_ffff26ab & 2) == 0) {
      DAT_fffef06b = bVar4 & 0xfd;
    }
    bVar4 = DAT_fffef06c | 1;
    if ((DAT_ffff26ab & 1) == 0) {
      bVar4 = DAT_fffef06c & 0xfe;
    }
  }
  DAT_fffef06c = bVar4;
  if (((DAT_fffef2d2 == '\x01') || (bVar2)) || (DAT_fffef2d4 != '\0')) {
    DAT_fffef06e = DAT_fffef06e & 0xf0;
    _DAT_fffef31c = 0;
    DAT_fffef06f = DAT_fffef06f & 0x7f | 8;
    DAT_ffff26b4 = DAT_ffff26b4 & 0xf0 | 0xc0;
    DAT_ffff26b6 = 0;
    DAT_ffff26b5 = 0;
    DAT_ffff26b7 = DAT_ffff26b7 & 0x3f;
    DAT_ffff26b8 = 0;
    DAT_fffef06c = DAT_fffef06c | 4;
    DAT_fffef06d = DAT_fffef06d & 0xfb;
    bVar5 = DAT_ffff8864;
  }
  else {
    bVar4 = DAT_fffef06f | 8;
    if (((int)(char)DAT_ffff26b4 & 0x80U) == 0) {
      bVar4 = DAT_fffef06f & 0xf7;
    }
    bVar5 = DAT_fffef06c | 4;
    if ((DAT_ffff26b4 & 0x40) == 0) {
      bVar5 = DAT_fffef06c & 0xfb;
    }
    bVar10 = DAT_fffef06e | 8;
    if ((DAT_ffff26b4 & 8) == 0) {
      bVar10 = DAT_fffef06e & 0xf7;
    }
    bVar6 = bVar10 | 4;
    if ((DAT_ffff26b4 & 4) == 0) {
      bVar6 = bVar10 & 0xfb;
    }
    bVar10 = bVar6 | 2;
    if ((DAT_ffff26b4 & 2) == 0) {
      bVar10 = bVar6 & 0xfd;
    }
    DAT_fffef06e = bVar10 | 1;
    if ((DAT_ffff26b4 & 1) == 0) {
      DAT_fffef06e = bVar10 & 0xfe;
    }
    _DAT_fffef31c = (ushort)DAT_ffff26b6 * 0x100 + (ushort)DAT_ffff26b5;
    bVar10 = DAT_fffef06d | 4;
    if (((int)(char)DAT_ffff26b7 & 0x80U) == 0) {
      bVar10 = DAT_fffef06d & 0xfb;
    }
    bVar1 = (DAT_ffff26b7 & 0x40) == 0;
    DAT_fffef06f = bVar4 | 0x80;
    if (bVar1) {
      DAT_fffef06f = bVar4 & 0x7f;
    }
    bVar4 = DAT_ffff8866 | 1;
    if ((DAT_ffff8865 & 1) == 0) {
      bVar4 = DAT_ffff8866 & 0xfe;
    }
    bVar6 = DAT_ffff8865 | 1;
    if ((DAT_ffff8864 & 1) == 0) {
      bVar6 = DAT_ffff8865 & 0xfe;
    }
    DAT_fffef06c = bVar5;
    DAT_fffef06d = bVar10;
    bVar5 = DAT_ffff8864 | 1;
    DAT_ffff8865 = bVar6;
    DAT_ffff8866 = bVar4;
    if (bVar1) {
      bVar5 = DAT_ffff8864 & 0xfe;
    }
  }
  DAT_ffff8864 = bVar5;
  if (((DAT_fffef2d2 == '\x01') || (bVar2)) || (DAT_fffef2d4 != '\0')) {
    _DAT_fffef070 = 0;
    _DAT_fffef072 = 0;
    DAT_ffff26c0 = 0;
    DAT_ffff26bf = 0;
    DAT_ffff26c2 = 0;
    DAT_ffff26c1 = 0;
  }
  else {
    _DAT_fffef070 = (ushort)DAT_ffff26c0 * 0x100 + (ushort)DAT_ffff26bf;
    _DAT_fffef072 = (ushort)DAT_ffff26c2 * 0x100 + (ushort)DAT_ffff26c1;
  }
  if (((DAT_fffef2d2 == '\x01') || (bVar2)) || (DAT_fffef2d6 != '\0')) {
    DAT_fffefefe = DAT_fffefefe & 0x1f;
    DAT_fffef403 = DAT_fffef403 & 0xd0;
    DAT_fffeed5a = DAT_fffeed5a & 0xfc;
    DAT_fffef404 = 0;
    DAT_fffef319 = DAT_fffef319 & 0xe8 | 0x80;
    DAT_fffeed5d = 0;
    DAT_ffff26cb = DAT_ffff26cb & 0x75;
    DAT_ffff26cc = DAT_ffff26cc & 0x94;
    DAT_ffff26cd = 0x50;
    DAT_ffff26ce = DAT_ffff26ce & 0xfc | 0x40;
    DAT_ffff26cf = DAT_ffff26cf & 0x10;
    DAT_ffff26d0 = 0;
    DAT_ffff26d1 = DAT_ffff26d1 & 0xd0;
    DAT_fffef064 = DAT_fffef064 & 0xdf;
    DAT_fffef079 = DAT_fffef079 & 0xfe;
    DAT_fffef07a = DAT_fffef07a & 0xef;
    DAT_fffef080 = DAT_fffef080 & 0xfe;
  }
  else {
    bVar4 = DAT_fffefefe | 0x80;
    if (((int)(char)DAT_ffff26cb & 0x80U) == 0) {
      bVar4 = DAT_fffefefe & 0x7f;
    }
    bVar5 = DAT_fffef079 | 1;
    if ((DAT_ffff26cb & 8) == 0) {
      bVar5 = DAT_fffef079 & 0xfe;
    }
    bVar10 = DAT_fffef319 | 2;
    if ((DAT_ffff26cb & 2) == 0) {
      bVar10 = DAT_fffef319 & 0xfd;
    }
    bVar6 = bVar4 | 0x40;
    if ((DAT_ffff26cc & 0x40) == 0) {
      bVar6 = bVar4 & 0xbf;
    }
    DAT_fffefefe = bVar6 | 0x20;
    if ((DAT_ffff26cc & 0x20) == 0) {
      DAT_fffefefe = bVar6 & 0xdf;
    }
    bVar4 = DAT_fffef064 | 0x20;
    if ((DAT_ffff26cc & 8) == 0) {
      bVar4 = DAT_fffef064 & 0xdf;
    }
    bVar6 = DAT_fffef080 | 1;
    if ((DAT_ffff26cc & 2) == 0) {
      bVar6 = DAT_fffef080 & 0xfe;
    }
    bVar7 = DAT_fffef07a | 0x10;
    if ((DAT_ffff26cc & 1) == 0) {
      bVar7 = DAT_fffef07a & 0xef;
    }
    bVar8 = bVar10 | 0x80;
    if ((DAT_ffff26ce & 0x40) == 0) {
      bVar8 = bVar10 & 0x7f;
    }
    bVar10 = bVar8 | 0x10;
    if ((DAT_ffff26ce & 2) == 0) {
      bVar10 = bVar8 & 0xef;
    }
    bVar8 = bVar10 | 1;
    if ((DAT_ffff26ce & 1) == 0) {
      bVar8 = bVar10 & 0xfe;
    }
    bVar10 = DAT_fffef403 | 2;
    if (((int)(char)DAT_ffff26cf & 0x80U) == 0) {
      bVar10 = DAT_fffef403 & 0xfd;
    }
    bVar9 = bVar10 | 1;
    if ((DAT_ffff26cf & 0x40) == 0) {
      bVar9 = bVar10 & 0xfe;
    }
    bVar10 = bVar9 | 0x20;
    if ((DAT_ffff26cf & 0x20) == 0) {
      bVar10 = bVar9 & 0xdf;
    }
    bVar9 = bVar10 | 8;
    if ((DAT_ffff26cf & 8) == 0) {
      bVar9 = bVar10 & 0xf7;
    }
    DAT_fffef403 = bVar9 | 4;
    if ((DAT_ffff26cf & 4) == 0) {
      DAT_fffef403 = bVar9 & 0xfb;
    }
    bVar10 = DAT_fffeed5a | 2;
    if ((DAT_ffff26cf & 2) == 0) {
      bVar10 = DAT_fffeed5a & 0xfd;
    }
    DAT_fffeed5a = bVar10 | 1;
    if ((DAT_ffff26cf & 1) == 0) {
      DAT_fffeed5a = bVar10 & 0xfe;
    }
    bVar10 = DAT_fffef404 | 0x80;
    if (((int)(char)DAT_ffff26d0 & 0x80U) == 0) {
      bVar10 = DAT_fffef404 & 0x7f;
    }
    bVar9 = bVar10 | 0x40;
    if ((DAT_ffff26d0 & 0x40) == 0) {
      bVar9 = bVar10 & 0xbf;
    }
    bVar10 = bVar9 | 0x20;
    if ((DAT_ffff26d0 & 0x20) == 0) {
      bVar10 = bVar9 & 0xdf;
    }
    bVar9 = bVar10 | 0x10;
    if ((DAT_ffff26d0 & 0x10) == 0) {
      bVar9 = bVar10 & 0xef;
    }
    bVar10 = bVar9 | 8;
    if ((DAT_ffff26d0 & 8) == 0) {
      bVar10 = bVar9 & 0xf7;
    }
    bVar9 = bVar10 | 4;
    if ((DAT_ffff26d0 & 4) == 0) {
      bVar9 = bVar10 & 0xfb;
    }
    bVar10 = bVar9 | 2;
    if ((DAT_ffff26d0 & 2) == 0) {
      bVar10 = bVar9 & 0xfd;
    }
    DAT_fffef404 = bVar10 | 1;
    if ((DAT_ffff26d0 & 1) == 0) {
      DAT_fffef404 = bVar10 & 0xfe;
    }
    DAT_fffef319 = bVar8 | 4;
    if ((DAT_ffff26d1 & 0x20) == 0) {
      DAT_fffef319 = bVar8 & 0xfb;
    }
    DAT_fffeed5d = DAT_ffff26d1 & 0xf;
    DAT_fffef064 = bVar4;
    DAT_fffef079 = bVar5;
    DAT_fffef07a = bVar7;
    DAT_fffef080 = bVar6;
  }
  if (((DAT_fffef2d2 == '\x01') || (bVar2)) || (DAT_fffef2d6 != '\0')) {
    DAT_fffef063 = DAT_fffef063 & 0xf1;
    DAT_ffff26d7 = DAT_ffff26d7 & 0xe0;
    bVar4 = DAT_fffef319 & 0xf7;
    DAT_fffefefe = DAT_fffefefe & 0xfd;
  }
  else {
    bVar5 = DAT_fffefefe | 2;
    if ((DAT_ffff26d7 & 0x10) == 0) {
      bVar5 = DAT_fffefefe & 0xfd;
    }
    bVar4 = DAT_fffef063 | 8;
    if ((DAT_ffff26d7 & 8) == 0) {
      bVar4 = DAT_fffef063 & 0xf7;
    }
    bVar10 = bVar4 | 4;
    if ((DAT_ffff26d7 & 4) == 0) {
      bVar10 = bVar4 & 0xfb;
    }
    DAT_fffef063 = bVar10 | 2;
    if ((DAT_ffff26d7 & 2) == 0) {
      DAT_fffef063 = bVar10 & 0xfd;
    }
    bVar4 = DAT_fffef319 | 8;
    DAT_fffefefe = bVar5;
    if ((DAT_ffff26d7 & 1) == 0) {
      bVar4 = DAT_fffef319 & 0xf7;
    }
  }
  DAT_fffef319 = bVar4;
  if (((DAT_fffef2d2 == '\x01') || (bVar2)) || (bVar3)) {
    DAT_fffef07b = DAT_fffef07b & 0xfc;
    _DAT_fffef07c = 0;
    DAT_ffff26e3 = DAT_ffff26e3 & 0xfc;
    DAT_ffff26e4 = 0;
    DAT_ffff26e5 = 0;
    DAT_ffff26ea = 0;
  }
  else {
    bVar4 = DAT_fffef07b | 2;
    if ((DAT_ffff26e3 & 2) == 0) {
      bVar4 = DAT_fffef07b & 0xfd;
    }
    DAT_fffef07b = bVar4 | 1;
    if ((DAT_ffff26e3 & 1) == 0) {
      DAT_fffef07b = bVar4 & 0xfe;
    }
    _DAT_fffef07c = (ushort)DAT_ffff26e4 * 0x100 + (ushort)DAT_ffff26e5;
  }
  DAT_fffeed43 = DAT_ffff2690;
  DAT_fffeed45 = DAT_ffff2692;
  DAT_fffeed47 = DAT_ffff26a2;
  DAT_fffeed51 = DAT_ffff26b8;
  DAT_fffeed62 = DAT_ffff26ea;
  DAT_fffef082 = DAT_ffff26cd;
  DAT_fffef2e8 = DAT_ffff26a9;
  DAT_fffef2e9 = DAT_ffff26aa;
  DAT_fffef2f2 = DAT_ffff268f;
  return;
}

