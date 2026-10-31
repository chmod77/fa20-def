
uint FUN_00160dfc(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = DAT_fffff00d;
  uVar3 = (uint)DAT_fffff00d;
  DAT_fffeb9ec = DAT_fffff00d;
  DAT_fffff00c = DAT_fffff00c & 0xbf;
  uVar2 = (uint)(char)DAT_fffeb8c6;
  if ((uVar2 & 0xf) == 0) {
    if (uVar3 == 0x41) {
      DAT_fffeb8c6 = DAT_fffeb8c6 | 1;
    }
    else if (uVar3 == 0x42) {
      DAT_fffeb8c6 = DAT_fffeb8c6 | 2;
    }
    else if (uVar3 == 0x43) {
      DAT_fffeb8c6 = DAT_fffeb8c6 | 4;
    }
    else {
      if (uVar3 != 0x52) {
        return uVar3;
      }
      DAT_fffeb8c6 = DAT_fffeb8c6 & 0x7f | 8;
    }
    uVar2 = (int)(char)DAT_fffeb8c4 & 0x7f;
    DAT_fffeb8c4 = (byte)uVar2;
  }
  else {
    if (DAT_fffeb8c7 < 0x16) {
      uVar2 = (uint)DAT_fffeb8c7;
      (&DAT_fffeb8c8)[uVar2] = DAT_fffff00d;
      DAT_fffeb8c7 = DAT_fffeb8c7 + 1;
      DAT_fffeb9e9 = DAT_fffeb9e9 + bVar1;
      return uVar2;
    }
    DAT_fffeb8c6 = DAT_fffeb8c6 & 0xf0;
    DAT_fffeb8c4 = DAT_fffeb8c4 & 0x7f;
  }
  DAT_fffeb8c7 = 0;
  DAT_fffeb9e9 = 0;
  return uVar2;
}

