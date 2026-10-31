
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004b974(void)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  
  bVar2 = 5;
  uVar5 = 8;
  if (DAT_fffeed8a == -0x50) {
    DAT_fffeee16 = 0x80;
    DAT_fffeee17 = 0xf0;
    DAT_fffeee18 = 0x10;
    DAT_fffeee1a = 0xf0;
    DAT_fffeee19 = DAT_fffeed89 - 3;
    cVar3 = DAT_fffeed89 + 0x6d;
    _DAT_fffeed80 = (undefined1 *)0x0;
    if (0xfd < DAT_fffeed8b) {
      _DAT_fffeed80 = (undefined1 *)0xff000000;
    }
    _DAT_fffeed80 =
         (undefined1 *)
         ((int)_DAT_fffeed80 + (uint)DAT_fffeed8b * 0x10000 + (uint)DAT_fffeed8c * 0x100 +
         (uint)DAT_fffeed8d);
    for (uVar4 = 0; (int)(uVar4 & 0xff) < (int)(DAT_fffeed89 - 4); uVar4 = uVar4 + 1) {
      if ((_DAT_fffeed80 < &DAT_fffe8000) || ((undefined1 *)0xffffbfff < _DAT_fffeed80)) {
        (&DAT_fffeee16)[bVar2] = 0xff;
        cVar1 = -1;
      }
      else {
        uVar5 = uVar5 & 0xff;
        *_DAT_fffeed80 = (&DAT_fffeed86)[uVar5];
        (&DAT_fffeee16)[bVar2] = (&DAT_fffeed86)[uVar5];
        cVar1 = (&DAT_fffeee16)[bVar2];
      }
      cVar3 = cVar3 + cVar1;
      _DAT_fffeed80 = _DAT_fffeed80 + 1;
      bVar2 = bVar2 + 1;
      uVar5 = uVar5 + 1;
    }
    (&DAT_fffeee16)[bVar2] = cVar3;
    DAT_fffeeea8 = DAT_fffeeea8 & 0xfe | 0x22;
  }
  return;
}

