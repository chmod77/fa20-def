
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0004b658(void)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  char *pcVar6;
  
  bVar3 = 5;
  if (DAT_fffeed87 == '\x17') {
    uVar2 = 0x17;
  }
  else {
    uVar2 = (uint)DAT_fffeed8a;
    if (DAT_fffeed8a == -0x60) {
      if ((DAT_fffeed8b & 1) == 0) {
        DAT_fffeeea8 = DAT_fffeeea8 & 0xfe | 0x20;
      }
      else {
        DAT_fffeeea8 = DAT_fffeeea8 & 0xdf | 1;
      }
      DAT_fffeee16 = 0x80;
      DAT_fffeee17 = 0xf0;
      DAT_fffeee18 = 0x10;
      DAT_fffeee1a = 0xe0;
      DAT_fffeee19 = DAT_fffeed8f + 2;
      cVar4 = DAT_fffeed8f + 0x62;
      _DAT_fffeed80 = (char *)0x0;
      if (0xfd < DAT_fffeed8c) {
        _DAT_fffeed80 = (char *)0xff000000;
      }
      _DAT_fffeed80 =
           (char *)((int)_DAT_fffeed80 + (uint)DAT_fffeed8c * 0x10000 + (uint)DAT_fffeed8d * 0x100 +
                   (uint)DAT_fffeed8e);
      for (bVar5 = 0; bVar5 <= DAT_fffeed8f; bVar5 = bVar5 + 1) {
        if ((_DAT_fffeed80 < (char *)0x180000) || ((char *)0xfffe7fff < _DAT_fffeed80)) {
          pcVar6 = _DAT_fffeed80;
          if (("" <= _DAT_fffeed80) && (_DAT_fffeed80 <= &DAT_0017ffff)) {
            pcVar6 = (char *)0x0;
          }
          (&DAT_fffeee16)[bVar3] = *pcVar6;
          cVar1 = *pcVar6;
        }
        else {
          (&DAT_fffeee16)[bVar3] = 0xff;
          cVar1 = -1;
        }
        cVar4 = cVar4 + cVar1;
        _DAT_fffeed80 = _DAT_fffeed80 + 1;
        bVar3 = bVar3 + 1;
      }
      (&DAT_fffeee16)[bVar3] = cVar4;
      uVar2 = (int)(char)DAT_fffeeea8 | 2;
      DAT_fffeeea8 = (byte)uVar2;
    }
  }
  return uVar2;
}

