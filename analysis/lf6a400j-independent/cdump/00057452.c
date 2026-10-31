
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00057452(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  byte bVar8;
  undefined1 uVar9;
  
  uVar7 = (undefined1)_DAT_ffff0eda;
  bVar2 = (byte)((ushort)_DAT_ffff0eda >> 8);
  bVar1 = (byte)((ushort)_DAT_ffff0f36 >> 8);
  bVar8 = (byte)((ushort)_DAT_ffff0f00 >> 8);
  bVar3 = (byte)((ushort)_DAT_ffff0eae >> 8);
  uVar6 = (undefined1)_DAT_ffff0edc;
  uVar9 = (undefined1)((ushort)_DAT_ffff0edc >> 8);
  if ((DAT_fffef310 & 8) != 0) {
    DAT_ffff2737 = uVar7;
    DAT_ffff2738 = bVar2;
    DAT_ffff2739 = DAT_ffff059b;
    DAT_ffff273a = DAT_ffff055d;
    DAT_ffff273b = DAT_ffff05ac;
    DAT_ffff273c = (char)_DAT_ffff0f36;
    DAT_ffff273d = bVar1;
    bVar1 = DAT_ffff273e | 0x80;
    if ((DAT_ffff064b & 2) == 0) {
      bVar1 = DAT_ffff273e & 0x7f;
    }
    bVar2 = bVar1 | 0x40;
    if ((DAT_ffff0571 & 0x40) == 0) {
      bVar2 = bVar1 & 0xbf;
    }
    bVar1 = bVar2 | 0x20;
    if ((DAT_ffff0571 & 0x20) == 0) {
      bVar1 = bVar2 & 0xdf;
    }
    bVar2 = bVar1 | 0x10;
    if (((int)(char)DAT_fffeed37 & 0x80U) == 0) {
      bVar2 = bVar1 & 0xef;
    }
    bVar1 = bVar2 | 8;
    if ((DAT_fffeed37 & 0x40) == 0) {
      bVar1 = bVar2 & 0xf7;
    }
    bVar2 = bVar1 | 4;
    if ((DAT_ffff6788 & 0x20) == 0) {
      bVar2 = bVar1 & 0xfb;
    }
    bVar1 = bVar2 | 2;
    if ((DAT_ffff0571 & 2) == 0) {
      bVar1 = bVar2 & 0xfd;
    }
    DAT_ffff273e = bVar1 | 1;
    if (((int)(char)DAT_ffff064a & 0x80U) == 0) {
      DAT_ffff273e = bVar1 & 0xfe;
    }
    DAT_ffff2743 = (char)_DAT_ffff0f00;
    DAT_ffff2744 = bVar8;
    DAT_ffff2745 = (char)_DAT_ffff0eae;
    DAT_ffff2746 = bVar3;
    DAT_ffff2747 = DAT_ffff05a3;
    DAT_ffff2748 = DAT_ffff05a8;
    bVar3 = DAT_ffff2749 | 0x80;
    if (((int)DAT_fffef313 & 0x80U) == 0) {
      bVar3 = DAT_ffff2749 & 0x7f;
    }
    bVar1 = bVar3 | 0x40;
    if ((DAT_ffff03ca & 1) == 0) {
      bVar1 = bVar3 & 0xbf;
    }
    bVar3 = bVar1 | 0x20;
    if ((DAT_fffeed38 & 4) == 0) {
      bVar3 = bVar1 & 0xdf;
    }
    bVar1 = bVar3 | 0x10;
    if ((DAT_fffeed35 & 4) == 0) {
      bVar1 = bVar3 & 0xef;
    }
    bVar3 = bVar1 | 8;
    if ((DAT_fffef312 & 1) == 0) {
      bVar3 = bVar1 & 0xf7;
    }
    bVar1 = bVar3 | 4;
    if ((DAT_ffff0572 & 4) == 0) {
      bVar1 = bVar3 & 0xfb;
    }
    bVar3 = bVar1 | 2;
    if ((DAT_ffff0572 & 2) == 0) {
      bVar3 = bVar1 & 0xfd;
    }
    DAT_ffff2749 = bVar3 | 1;
    if ((DAT_ffff0572 & 1) == 0) {
      DAT_ffff2749 = bVar3 & 0xfe;
    }
    bVar3 = DAT_ffff274a | 0x20;
    if ((DAT_fffef314 & 0x40) == 0) {
      bVar3 = DAT_ffff274a & 0xdf;
    }
    bVar1 = bVar3 | 0x10;
    if (((int)(char)DAT_fffef314 & 0x80U) == 0) {
      bVar1 = bVar3 & 0xef;
    }
    bVar3 = bVar1 | 8;
    if ((DAT_fffeed3c & 0x40) == 0) {
      bVar3 = bVar1 & 0xf7;
    }
    bVar1 = bVar3 | 4;
    if (((int)(char)DAT_fffef312 & 0x80U) == 0) {
      bVar1 = bVar3 & 0xfb;
    }
    bVar3 = bVar1 | 2;
    if ((DAT_ffff0573 & 2) == 0) {
      bVar3 = bVar1 & 0xfd;
    }
    DAT_ffff274a = bVar3 | 1;
    if ((DAT_ffff0573 & 1) == 0) {
      DAT_ffff274a = bVar3 & 0xfe;
    }
    bVar3 = DAT_ffff274f | 0xc0;
    if ((DAT_ffff056f & 1) == 0) {
      bVar3 = DAT_ffff274f & 0xbf | 0x80;
    }
    bVar1 = bVar3 | 0x20;
    if ((DAT_ffff0574 & 0x20) == 0) {
      bVar1 = bVar3 & 0xdf;
    }
    bVar3 = bVar1 | 0x10;
    if ((DAT_ffff0574 & 0x10) == 0) {
      bVar3 = bVar1 & 0xef;
    }
    bVar1 = bVar3 | 8;
    if ((DAT_ffff0574 & 8) == 0) {
      bVar1 = bVar3 & 0xf7;
    }
    DAT_ffff274f = bVar1 | 4;
    if ((DAT_fffef314 & 4) == 0) {
      DAT_ffff274f = bVar1 & 0xfb;
    }
    bVar3 = DAT_ffff2750 | 0x80;
    if (((int)(char)DAT_fffef315 & 0x80U) == 0) {
      bVar3 = DAT_ffff2750 & 0x7f;
    }
    bVar1 = bVar3 | 0x40;
    if ((DAT_fffef315 & 0x40) == 0) {
      bVar1 = bVar3 & 0xbf;
    }
    bVar3 = bVar1 | 0x20;
    if ((DAT_fffef315 & 0x20) == 0) {
      bVar3 = bVar1 & 0xdf;
    }
    bVar1 = bVar3 | 0x10;
    if ((DAT_fffef315 & 0x10) == 0) {
      bVar1 = bVar3 & 0xef;
    }
    bVar3 = (DAT_ffff055b & 7) << 1;
    DAT_ffff2750 = bVar1 & 0xf1 | bVar3 | 1;
    if ((DAT_fffef3e1 & 0x20) == 0) {
      DAT_ffff2750 = bVar1 & 0xf0 | bVar3;
    }
    DAT_ffff2751 = DAT_ffff0563;
    DAT_ffff2752 = DAT_ffff3695;
    DAT_ffff2753 = DAT_ffff3696;
    bVar3 = DAT_ffff2754 | 0x80;
    if (((int)(char)DAT_ffff0575 & 0x80U) == 0) {
      bVar3 = DAT_ffff2754 & 0x7f;
    }
    bVar1 = bVar3 | 0x40;
    if ((DAT_ffff0575 & 0x40) == 0) {
      bVar1 = bVar3 & 0xbf;
    }
    bVar3 = bVar1 | 0x20;
    if ((DAT_ffff0575 & 0x20) == 0) {
      bVar3 = bVar1 & 0xdf;
    }
    bVar1 = bVar3 | 0x10;
    if ((DAT_ffff0575 & 0x10) == 0) {
      bVar1 = bVar3 & 0xef;
    }
    bVar3 = bVar1 | 8;
    if ((DAT_ffff0575 & 8) == 0) {
      bVar3 = bVar1 & 0xf7;
    }
    bVar1 = bVar3 | 4;
    if ((DAT_ffff0575 & 4) == 0) {
      bVar1 = bVar3 & 0xfb;
    }
    bVar3 = bVar1 | 2;
    if ((DAT_ffff0575 & 2) == 0) {
      bVar3 = bVar1 & 0xfd;
    }
    DAT_ffff2754 = bVar3 | 1;
    if ((DAT_ffff0575 & 1) == 0) {
      DAT_ffff2754 = bVar3 & 0xfe;
    }
    bVar3 = DAT_ffff2755 | 0x80;
    if (((int)DAT_ffff0576 & 0x80U) == 0) {
      bVar3 = DAT_ffff2755 & 0x7f;
    }
    bVar1 = bVar3 | 0x20;
    if ((DAT_ffff057a & 0x10) == 0) {
      bVar1 = bVar3 & 0xdf;
    }
    bVar3 = bVar1 | 0x10;
    if ((DAT_fffef317 & 0x10) == 0) {
      bVar3 = bVar1 & 0xef;
    }
    bVar1 = bVar3 | 8;
    if ((DAT_fffef316 & 0x10) == 0) {
      bVar1 = bVar3 & 0xf7;
    }
    bVar3 = bVar1 | 4;
    if ((DAT_fffef316 & 0x20) == 0) {
      bVar3 = bVar1 & 0xfb;
    }
    bVar1 = bVar3 | 2;
    if ((DAT_fffef316 & 2) == 0) {
      bVar1 = bVar3 & 0xfd;
    }
    DAT_ffff2755 = bVar1 | 1;
    if ((DAT_fffef316 & 1) == 0) {
      DAT_ffff2755 = bVar1 & 0xfe;
    }
    bVar3 = DAT_ffff2756 | 0x20;
    if ((DAT_fffef317 & 8) != 0) {
      bVar3 = DAT_ffff2756 & 0xdf;
    }
    bVar1 = bVar3 | 8;
    if ((DAT_fffef364 & 1) == 0) {
      bVar1 = bVar3 & 0xf7;
    }
    bVar3 = bVar1 | 4;
    if ((DAT_fffef317 & 1) == 0) {
      bVar3 = bVar1 & 0xfb;
    }
    bVar1 = bVar3 | 2;
    if ((DAT_fffef3fc & 0x10) == 0) {
      bVar1 = bVar3 & 0xfd;
    }
    DAT_ffff2756 = bVar1 | 1;
    if ((DAT_fffef330 & 0x40) == 0) {
      DAT_ffff2756 = bVar1 & 0xfe;
    }
    DAT_ffff275b = uVar6;
    DAT_ffff275c = uVar9;
    DAT_ffff275d = DAT_ffff05a4;
    DAT_ffff275e = DAT_ffff05b1;
    DAT_ffff275f = DAT_ffff0599;
    bVar3 = DAT_ffff2760 | 0x40;
    if ((DAT_ffff0577 & 0x40) == 0) {
      bVar3 = DAT_ffff2760 & 0xbf;
    }
    bVar1 = bVar3 | 0x20;
    if ((DAT_ffff0577 & 0x20) == 0) {
      bVar1 = bVar3 & 0xdf;
    }
    bVar3 = bVar1 | 0x10;
    if ((DAT_ffff3698 & 1) == 0) {
      bVar3 = bVar1 & 0xef;
    }
    bVar1 = bVar3 | 8;
    if ((DAT_ffff0577 & 8) == 0) {
      bVar1 = bVar3 & 0xf7;
    }
    bVar3 = bVar1 | 4;
    if ((DAT_ffff0577 & 4) == 0) {
      bVar3 = bVar1 & 0xfb;
    }
    bVar1 = bVar3 | 2;
    if ((DAT_ffff0577 & 2) == 0) {
      bVar1 = bVar3 & 0xfd;
    }
    DAT_ffff2760 = bVar1 | 1;
    if ((DAT_fffeed3c & 2) == 0) {
      DAT_ffff2760 = bVar1 & 0xfe;
    }
    bVar3 = DAT_ffff2761 | 0x20;
    if ((DAT_ffff0001 & 0x10) == 0) {
      bVar3 = DAT_ffff2761 & 0xdf;
    }
    bVar1 = bVar3 | 0x10;
    if (((int)(char)DAT_fffef318 & 0x80U) == 0) {
      bVar1 = bVar3 & 0xef;
    }
    bVar3 = bVar1 | 8;
    if ((DAT_fffeed34 & 0x20) == 0) {
      bVar3 = bVar1 & 0xf7;
    }
    bVar1 = bVar3 | 4;
    if ((DAT_fffef318 & 0x10) == 0) {
      bVar1 = bVar3 & 0xfb;
    }
    bVar3 = bVar1 | 2;
    if ((DAT_ffff0578 & 2) == 0) {
      bVar3 = bVar1 & 0xfd;
    }
    DAT_ffff2761 = bVar3 | 1;
    if ((DAT_fffef318 & 1) == 0) {
      DAT_ffff2761 = bVar3 & 0xfe;
    }
    DAT_ffff2762 = DAT_ffff07ac;
    bVar3 = DAT_ffff2767 | 8;
    if ((DAT_ffff0579 & 8) == 0) {
      bVar3 = DAT_ffff2767 & 0xf7;
    }
    bVar1 = bVar3 | 4;
    if ((DAT_ffff0579 & 4) == 0) {
      bVar1 = bVar3 & 0xfb;
    }
    bVar3 = bVar1 | 2;
    if ((DAT_ffff0579 & 2) == 0) {
      bVar3 = bVar1 & 0xfd;
    }
    bVar1 = bVar3 | 1;
    if ((DAT_ffff0579 & 1) == 0) {
      bVar1 = bVar3 & 0xfe;
    }
    DAT_ffff2767 = (byte)((int)(char)bVar1 & 0x8fU) | (DAT_ffff058c & 7) << 4;
    return (int)(char)bVar1 & 0x8fU;
  }
  if ((DAT_fffef310 & 0x10) == 0) {
    if (((int)(char)DAT_fffef310 & 4U) == 0) {
      return (int)(char)DAT_fffef310;
    }
    DAT_ffff26ef = DAT_ffff0562;
    DAT_ffff26f0 = DAT_ffff058d;
    DAT_ffff26f1 = DAT_ffff058e;
    DAT_ffff26f2 = DAT_ffff058f;
    DAT_ffff26f3 = DAT_ffff059b;
    DAT_ffff26f4 = uVar7;
    DAT_ffff26f5 = bVar2;
    bVar3 = DAT_ffff26f6 | 0x80;
    if (((int)(char)DAT_fffef318 & 0x80U) == 0) {
      bVar3 = DAT_ffff26f6 & 0x7f;
    }
    bVar1 = bVar3 | 0x40;
    if ((DAT_fffeed34 & 0x40) == 0) {
      bVar1 = bVar3 & 0xbf;
    }
    bVar3 = bVar1 | 0x20;
    if ((DAT_fffeed34 & 0x20) == 0) {
      bVar3 = bVar1 & 0xdf;
    }
    bVar1 = bVar3 | 0x10;
    if ((DAT_fffef318 & 0x10) == 0) {
      bVar1 = bVar3 & 0xef;
    }
    bVar3 = bVar1 | 8;
    if ((DAT_fffef09e & 2) == 0) {
      bVar3 = bVar1 & 0xf7;
    }
    bVar1 = bVar3 | 4;
    if ((DAT_fffeed34 & 4) == 0) {
      bVar1 = bVar3 & 0xfb;
    }
    bVar3 = bVar1 | 2;
    if ((DAT_fffef3fc & 0x10) == 0) {
      bVar3 = bVar1 & 0xfd;
    }
    DAT_ffff26f6 = bVar3 | 1;
    if ((DAT_fffef318 & 1) == 0) {
      DAT_ffff26f6 = bVar3 & 0xfe;
    }
    bVar3 = DAT_ffff26fb | 0x80;
    if (((int)(char)DAT_fffef314 & 0x80U) == 0) {
      bVar3 = DAT_ffff26fb & 0x7f;
    }
    bVar1 = bVar3 | 0x40;
    if ((DAT_fffef314 & 0x40) == 0) {
      bVar1 = bVar3 & 0xbf;
    }
    bVar3 = bVar1 | 0x20;
    if ((DAT_fffef3fc & 1) == 0) {
      bVar3 = bVar1 & 0xdf;
    }
    bVar1 = bVar3 | 8;
    if ((DAT_fffef317 & 8) != 0) {
      bVar1 = bVar3 & 0xf7;
    }
    bVar3 = bVar1 | 4;
    if ((DAT_fffeed35 & 4) == 0) {
      bVar3 = bVar1 & 0xfb;
    }
    DAT_ffff26fb = bVar3 | 1;
    if ((DAT_fffef312 & 1) == 0) {
      DAT_ffff26fb = bVar3 & 0xfe;
    }
    DAT_ffff26fe = DAT_ffff05a6;
    DAT_ffff26ff = DAT_fffeed36;
    DAT_ffff2700 = DAT_ffff07ac;
    bVar3 = DAT_ffff2701 | 0x80;
    if (((int)(char)DAT_fffeed37 & 0x80U) == 0) {
      bVar3 = DAT_ffff2701 & 0x7f;
    }
    bVar1 = bVar3 | 0x40;
    if ((DAT_fffeed37 & 0x40) == 0) {
      bVar1 = bVar3 & 0xbf;
    }
    bVar3 = bVar1 | 0x20;
    if ((DAT_fffef316 & 0x20) == 0) {
      bVar3 = bVar1 & 0xdf;
    }
    bVar1 = bVar3 | 0x10;
    if ((DAT_fffef316 & 0x10) == 0) {
      bVar1 = bVar3 & 0xef;
    }
    bVar3 = bVar1 | 2;
    if ((DAT_fffef316 & 2) == 0) {
      bVar3 = bVar1 & 0xfd;
    }
    DAT_ffff2701 = bVar3 | 1;
    if ((DAT_fffef316 & 1) == 0) {
      DAT_ffff2701 = bVar3 & 0xfe;
    }
    bVar3 = DAT_ffff2702 | 4;
    if ((DAT_fffeed38 & 4) == 0) {
      bVar3 = DAT_ffff2702 & 0xfb;
    }
    DAT_ffff2702 = bVar3 | 1;
    if ((DAT_fffef317 & 1) == 0) {
      DAT_ffff2702 = bVar3 & 0xfe;
    }
    DAT_ffff2707 = DAT_ffff0553;
    DAT_ffff2708 = (char)_DAT_ffff0f3a;
    DAT_ffff2709 = (char)((ushort)_DAT_ffff0f3a >> 8);
    DAT_ffff270b = DAT_ffff0563;
    DAT_ffff270c = DAT_ffff05a8;
    DAT_ffff2713 = 0;
    DAT_ffff2714 = uVar6;
    DAT_ffff2715 = uVar9;
    DAT_ffff2716 = DAT_ffff05b2;
    DAT_ffff2717 = DAT_ffff0566;
    DAT_ffff2718 = (DAT_ffff0575 & 1) * '@' + ('\x01' - ((DAT_ffff0575 & 0x10) == 0)) * ' ' +
                   ('\x01' - ((DAT_ffff0575 & 8) == 0)) * '\x10' +
                   ('\x01' - ((DAT_ffff0575 & 4) == 0)) * '\b' +
                   ('\x01' - (((int)(char)DAT_ffff0575 & 0x80U) == 0)) * '\x04' +
                   ('\x01' - ((DAT_ffff0575 & 0x20) == 0)) * '\x02' +
                   ('\x01' - ((DAT_ffff0575 & 0x40) == 0));
    bVar3 = DAT_ffff2719 | 4;
    if ((DAT_fffeed3c & 4) == 0) {
      bVar3 = DAT_ffff2719 & 0xfb;
    }
    DAT_ffff2719 = bVar3 | 1;
    if ((DAT_fffef330 & 0x40) == 0) {
      DAT_ffff2719 = bVar3 & 0xfe;
    }
    DAT_ffff271a = 0xff;
    bVar3 = DAT_ffff271f | 0x10;
    if ((DAT_ffff03ca & 1) == 0) {
      bVar3 = DAT_ffff271f & 0xef;
    }
    DAT_ffff271f = bVar3;
    DAT_ffff2725 = (char)_DAT_ffff0f38;
    DAT_ffff2726 = (char)((ushort)_DAT_ffff0f38 >> 8);
    return 0xa6;
  }
  DAT_ffff2743 = DAT_ffff059b;
  bVar4 = DAT_ffff2744 | 0x80;
  if ((DAT_fffef364 & 1) == 0) {
    bVar4 = DAT_ffff2744 & 0x7f;
  }
  bVar5 = bVar4 | 0x40;
  if (((int)(char)DAT_ffff064a & 0x80U) == 0) {
    bVar5 = bVar4 & 0xbf;
  }
  bVar4 = bVar5 | 0x20;
  if ((DAT_fffef3fc & 0x10) == 0) {
    bVar4 = bVar5 & 0xdf;
  }
  bVar5 = bVar4 | 0x10;
  if ((DAT_fffef317 & 1) == 0) {
    bVar5 = bVar4 & 0xef;
  }
  DAT_ffff2744 = bVar5 & 0xf0 | DAT_ffff055b & 0xf;
  DAT_ffff2745 = uVar7;
  bVar4 = DAT_ffff2746 | 0x80;
  if ((DAT_ffff6788 & 0x20) == 0) {
    bVar4 = DAT_ffff2746 & 0x7f;
  }
  bVar5 = bVar4 | 0x40;
  if ((DAT_fffef152 & 0x20) == 0) {
    bVar5 = bVar4 & 0xbf;
  }
  DAT_ffff2746 = bVar5 & 0xc0 | bVar2 & 0x3f;
  DAT_ffff2747 = DAT_ffff055d;
  DAT_ffff2748 = DAT_ffff05ac;
  DAT_ffff2749 = DAT_ffff05a8;
  bVar2 = DAT_ffff274a | 0x40;
  if ((DAT_ffff057a & 0x40) == 0) {
    bVar2 = DAT_ffff274a & 0xbf;
  }
  bVar4 = bVar2 | 0x20;
  if ((DAT_fffef330 & 0x40) == 0) {
    bVar4 = bVar2 & 0xdf;
  }
  bVar2 = bVar4 | 4;
  if ((DAT_ffff0001 & 0x10) == 0) {
    bVar2 = bVar4 & 0xfb;
  }
  bVar4 = bVar2 | 2;
  if ((DAT_fffeed3c & 0x40) == 0) {
    bVar4 = bVar2 & 0xfd;
  }
  DAT_ffff274a = bVar4 | 1;
  if (((int)(char)DAT_fffef318 & 0x80U) == 0) {
    DAT_ffff274a = bVar4 & 0xfe;
  }
  DAT_ffff274f = (char)_DAT_ffff0f00;
  bVar2 = DAT_ffff2750 | 0x80;
  if ((DAT_ffff064b & 2) == 0) {
    bVar2 = 0;
  }
  DAT_ffff2750 = bVar2 & 0x80 | bVar8 & 0x7f;
  DAT_ffff2751 = (char)_DAT_ffff0eae;
  bVar2 = DAT_ffff2752 | 0x80;
  if ((DAT_ffff057a & 0x20) == 0) {
    bVar2 = 0;
  }
  DAT_ffff2752 = bVar2 & 0x80 | bVar3 & 0x7f;
  DAT_ffff2753 = (char)_DAT_ffff10ec;
  bVar2 = (byte)((ushort)_DAT_ffff10ec >> 8) & 0x3f;
  bVar3 = DAT_ffff2754 & 0xc0 | bVar2 | 0x80;
  if ((DAT_ffff0571 & 2) == 0) {
    bVar3 = DAT_ffff2754 & 0x40 | bVar2;
  }
  DAT_ffff2754 = bVar3;
  bVar3 = DAT_ffff2755 | 0x80;
  if (((int)DAT_fffef313 & 0x80U) == 0) {
    bVar3 = DAT_ffff2755 & 0x7f;
  }
  bVar2 = bVar3 | 0x40;
  if ((DAT_ffff03ca & 1) == 0) {
    bVar2 = bVar3 & 0xbf;
  }
  bVar3 = bVar2 | 0x20;
  if ((DAT_fffeed38 & 4) == 0) {
    bVar3 = bVar2 & 0xdf;
  }
  bVar2 = bVar3 | 0x10;
  if ((DAT_fffeed35 & 4) == 0) {
    bVar2 = bVar3 & 0xef;
  }
  bVar3 = bVar2 | 8;
  if ((DAT_fffef312 & 1) == 0) {
    bVar3 = bVar2 & 0xf7;
  }
  bVar2 = bVar3 | 4;
  if ((DAT_ffff0572 & 4) == 0) {
    bVar2 = bVar3 & 0xfb;
  }
  bVar3 = bVar2 | 2;
  if ((DAT_ffff0572 & 2) == 0) {
    bVar3 = bVar2 & 0xfd;
  }
  DAT_ffff2755 = bVar3 | 1;
  if ((DAT_ffff0572 & 1) == 0) {
    DAT_ffff2755 = bVar3 & 0xfe;
  }
  bVar3 = DAT_ffff2756 | 0x10;
  if ((DAT_fffef314 & 0x40) == 0) {
    bVar3 = DAT_ffff2756 & 0xef;
  }
  bVar2 = bVar3 | 8;
  if (((int)(char)DAT_fffef314 & 0x80U) == 0) {
    bVar2 = bVar3 & 0xf7;
  }
  bVar3 = bVar2 | 2;
  if ((DAT_ffff0573 & 2) == 0) {
    bVar3 = bVar2 & 0xfd;
  }
  bVar2 = bVar3 | 1;
  if ((DAT_ffff0573 & 1) == 0) {
    bVar2 = bVar3 & 0xfe;
  }
  bVar3 = bVar2 | 4;
  if ((DAT_ffff0573 & 4) == 0) {
    bVar3 = bVar2 & 0xfb;
  }
  bVar2 = bVar3 | 0x20;
  if ((DAT_ffff0577 & 1) == 0) {
    bVar2 = bVar3 & 0xdf;
  }
  DAT_ffff2756 = bVar2 | 0x80;
  if ((DAT_fffef32d & 0x40) == 0) {
    DAT_ffff2756 = bVar2 & 0x7f;
  }
  DAT_ffff275b = (char)_DAT_ffff0f36;
  bVar3 = DAT_ffff275c | 0x80;
  if ((DAT_ffff064a & 0x40) == 0) {
    bVar3 = 0;
  }
  DAT_ffff275c = bVar3 & 0x80 | bVar1 & 0x7f;
  DAT_ffff275d = DAT_ffff05a7;
  bVar3 = DAT_ffff2767 | 0x80;
  if ((DAT_ffff0571 & 0x40) == 0) {
    bVar3 = DAT_ffff2767 & 0x7f;
  }
  bVar1 = bVar3 | 0x40;
  if ((DAT_ffff0571 & 0x20) == 0) {
    bVar1 = bVar3 & 0xbf;
  }
  bVar3 = bVar1 | 0x20;
  if ((DAT_ffff0574 & 0x20) == 0) {
    bVar3 = bVar1 & 0xdf;
  }
  bVar1 = bVar3 | 0x10;
  if ((DAT_ffff0574 & 0x10) == 0) {
    bVar1 = bVar3 & 0xef;
  }
  bVar3 = bVar1 | 8;
  if ((DAT_ffff0574 & 8) == 0) {
    bVar3 = bVar1 & 0xf7;
  }
  DAT_ffff2767 = bVar3 | 4;
  if ((DAT_fffef314 & 4) == 0) {
    DAT_ffff2767 = bVar3 & 0xfb;
  }
  bVar3 = DAT_ffff2768 | 0x80;
  if (((int)(char)DAT_fffef315 & 0x80U) == 0) {
    bVar3 = DAT_ffff2768 & 0x7f;
  }
  bVar1 = bVar3 | 0x40;
  if ((DAT_fffef315 & 0x40) == 0) {
    bVar1 = bVar3 & 0xbf;
  }
  bVar3 = bVar1 | 0x20;
  if ((DAT_fffef315 & 0x20) == 0) {
    bVar3 = bVar1 & 0xdf;
  }
  bVar1 = bVar3 | 0x10;
  if ((DAT_fffef315 & 0x10) == 0) {
    bVar1 = bVar3 & 0xef;
  }
  DAT_ffff2768 = bVar1 | 8;
  if ((DAT_ffff091c & 1) == 0) {
    DAT_ffff2768 = bVar1 & 0xf7;
  }
  DAT_ffff2769 = DAT_ffff0563;
  DAT_ffff276a = DAT_ffff3695;
  DAT_ffff276b = DAT_ffff3696;
  bVar3 = DAT_ffff276c | 0x80;
  if (((int)(char)DAT_ffff0575 & 0x80U) == 0) {
    bVar3 = DAT_ffff276c & 0x7f;
  }
  bVar1 = bVar3 | 0x40;
  if ((DAT_ffff0575 & 0x40) == 0) {
    bVar1 = bVar3 & 0xbf;
  }
  bVar3 = bVar1 | 0x20;
  if ((DAT_ffff0575 & 0x20) == 0) {
    bVar3 = bVar1 & 0xdf;
  }
  bVar1 = bVar3 | 0x10;
  if ((DAT_ffff0575 & 0x10) == 0) {
    bVar1 = bVar3 & 0xef;
  }
  bVar3 = bVar1 | 8;
  if ((DAT_ffff0575 & 8) == 0) {
    bVar3 = bVar1 & 0xf7;
  }
  bVar1 = bVar3 | 4;
  if ((DAT_ffff0575 & 4) == 0) {
    bVar1 = bVar3 & 0xfb;
  }
  bVar3 = bVar1 | 2;
  if ((DAT_ffff0575 & 2) == 0) {
    bVar3 = bVar1 & 0xfd;
  }
  DAT_ffff276c = bVar3 | 1;
  if ((DAT_ffff0575 & 1) == 0) {
    DAT_ffff276c = bVar3 & 0xfe;
  }
  bVar3 = DAT_ffff276d | 0x80;
  if (((int)DAT_ffff0576 & 0x80U) == 0) {
    bVar3 = DAT_ffff276d & 0x7f;
  }
  bVar1 = bVar3 | 0x40;
  if ((DAT_fffef317 & 8) != 0) {
    bVar1 = bVar3 & 0xbf;
  }
  bVar3 = bVar1 | 0x20;
  if ((DAT_ffff057a & 0x10) == 0) {
    bVar3 = bVar1 & 0xdf;
  }
  bVar1 = bVar3 | 0x10;
  if ((DAT_fffef317 & 0x10) == 0) {
    bVar1 = bVar3 & 0xef;
  }
  bVar3 = bVar1 | 8;
  if ((DAT_fffef316 & 0x10) == 0) {
    bVar3 = bVar1 & 0xf7;
  }
  bVar1 = bVar3 | 4;
  if ((DAT_fffef316 & 0x20) == 0) {
    bVar1 = bVar3 & 0xfb;
  }
  bVar3 = bVar1 | 2;
  if ((DAT_fffef316 & 2) == 0) {
    bVar3 = bVar1 & 0xfd;
  }
  DAT_ffff276d = bVar3 | 1;
  if ((DAT_fffef316 & 1) == 0) {
    DAT_ffff276d = bVar3 & 0xfe;
  }
  DAT_ffff2773 = uVar6;
  DAT_ffff2774 = uVar9;
  DAT_ffff2775 = DAT_ffff05a4;
  DAT_ffff2776 = DAT_ffff05b1;
  DAT_ffff2777 = DAT_ffff059a;
  bVar3 = DAT_ffff2778 | 0x80;
  if ((DAT_ffff0990 & 0x10) == 0) {
    bVar3 = DAT_ffff2778 & 0x7f;
  }
  bVar1 = bVar3 | 0x40;
  if ((DAT_ffff0577 & 0x40) == 0) {
    bVar1 = bVar3 & 0xbf;
  }
  bVar3 = bVar1 | 0x20;
  if (((int)(char)DAT_fffeed37 & 0x80U) == 0) {
    bVar3 = bVar1 & 0xdf;
  }
  bVar1 = bVar3 | 0x10;
  if ((DAT_fffeed37 & 0x40) == 0) {
    bVar1 = bVar3 & 0xef;
  }
  bVar3 = bVar1 | 8;
  if ((DAT_ffff0577 & 8) == 0) {
    bVar3 = bVar1 & 0xf7;
  }
  bVar1 = bVar3 | 4;
  if ((DAT_ffff0577 & 4) == 0) {
    bVar1 = bVar3 & 0xfb;
  }
  bVar3 = bVar1 | 2;
  if ((DAT_ffff0577 & 2) == 0) {
    bVar3 = bVar1 & 0xfd;
  }
  DAT_ffff2778 = bVar3 | 1;
  if ((DAT_fffeed3c & 2) == 0) {
    DAT_ffff2778 = bVar3 & 0xfe;
  }
  bVar3 = DAT_ffff2779 | 0x80;
  if ((DAT_fffef09e & 1) == 0) {
    bVar3 = DAT_ffff2779 & 0x7f;
  }
  bVar1 = bVar3 | 0x40;
  if ((DAT_ffff000b & 0x20) == 0) {
    bVar1 = bVar3 & 0xbf;
  }
  bVar3 = bVar1 | 0x20;
  if ((DAT_ffff057b & 2) == 0) {
    bVar3 = bVar1 & 0xdf;
  }
  bVar1 = bVar3 | 0x10;
  if ((DAT_ffff057b & 1) == 0) {
    bVar1 = bVar3 & 0xef;
  }
  bVar3 = bVar1 | 8;
  if ((DAT_fffeed34 & 0x20) == 0) {
    bVar3 = bVar1 & 0xf7;
  }
  bVar1 = bVar3 | 4;
  if ((DAT_fffef318 & 0x10) == 0) {
    bVar1 = bVar3 & 0xfb;
  }
  bVar3 = bVar1 | 2;
  if ((DAT_ffff0578 & 2) == 0) {
    bVar3 = bVar1 & 0xfd;
  }
  DAT_ffff2779 = bVar3 | 1;
  if ((DAT_fffef318 & 1) == 0) {
    DAT_ffff2779 = bVar3 & 0xfe;
  }
  DAT_ffff277a = DAT_ffff07ac;
  bVar3 = DAT_ffff277f | 0x10;
  if ((DAT_ffff3698 & 1) == 0) {
    bVar3 = DAT_ffff277f & 0xef;
  }
  bVar1 = bVar3 | 0x20;
  if ((DAT_fffef317 & 4) == 0) {
    bVar1 = bVar3 & 0xdf;
  }
  bVar3 = bVar1 | 8;
  if ((DAT_fffef317 & 2) == 0) {
    bVar3 = bVar1 & 0xf7;
  }
  bVar1 = bVar3 | 4;
  if ((DAT_ffff0579 & 4) == 0) {
    bVar1 = bVar3 & 0xfb;
  }
  bVar3 = bVar1 | 2;
  if ((DAT_ffff0579 & 2) == 0) {
    bVar3 = bVar1 & 0xfd;
  }
  DAT_ffff277f = bVar3 | 1;
  if ((DAT_ffff0579 & 1) == 0) {
    DAT_ffff277f = bVar3 & 0xfe;
  }
  bVar3 = DAT_ffff2780 & 0x1f | DAT_ffff058c << 5 | 8;
  if (((int)(char)DAT_ffff0575 & 0x80U) == 0) {
    bVar3 = DAT_ffff2780 & 0x17 | DAT_ffff058c << 5;
  }
  bVar1 = bVar3 | 4;
  if ((DAT_ffff0575 & 0x10) == 0) {
    bVar1 = bVar3 & 0xfb;
  }
  bVar3 = bVar1 | 2;
  if ((DAT_ffff0575 & 8) == 0) {
    bVar3 = bVar1 & 0xfd;
  }
  DAT_ffff2780 = bVar3 | 1;
  if ((DAT_ffff0575 & 4) == 0) {
    DAT_ffff2780 = bVar3 & 0xfe;
  }
  DAT_ffff2781 = DAT_ffff058b;
  DAT_ffff2782 = DAT_ffff0595;
  bVar3 = DAT_ffff2783 | 0x80;
  if ((DAT_ffff057a & 1) == 0) {
    bVar3 = DAT_ffff2783 & 0x7f;
  }
  bVar1 = bVar3 | 0x40;
  if ((DAT_ffff057a & 2) == 0) {
    bVar1 = bVar3 & 0xbf;
  }
  bVar3 = bVar1 | 0x20;
  if ((DAT_fffeeec6 & 1) == 0) {
    bVar3 = bVar1 & 0xdf;
  }
  bVar1 = bVar3 | 0x10;
  if ((DAT_ffff057a & 4) == 0) {
    bVar1 = bVar3 & 0xef;
  }
  DAT_ffff2783 = bVar1 & 0xf0 | DAT_ffff055c & 0xf;
  DAT_ffff2784 = (char)_DAT_ffff0ef8;
  DAT_ffff2785 = (char)((ushort)_DAT_ffff0ef8 >> 8);
  DAT_ffff2786 = DAT_ffff05a2;
  return 0x106;
}

