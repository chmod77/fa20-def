
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013bc10(void)

{
  byte bVar1;
  uint uVar2;
  
  if (((int)DAT_ffffabc5 & 0x80U) == 0) goto LAB_0013bcca;
  uVar2 = 0;
  if (((int)(char)DAT_ffffabc6 & 0x80U) == 0) {
    for (; (uVar2 & 0xff) < 0x18; uVar2 = (uVar2 & 0xff) + 1) {
      *(undefined1 *)((uVar2 & 0xff) - 0x4c5a) = 0;
    }
    _DAT_ffffb3a4 = 0xff;
  }
  else {
    if ((DAT_ffff0009 & 0x20) == 0) {
      if ((DAT_fffee690 & 0x20) == 0) {
        _DAT_fffef6e8 = 0xff;
      }
      else {
        _DAT_fffef6e8 = 0;
      }
    }
    else {
      _DAT_fffef6e8 = 0x80;
    }
    if (-(uint)((DAT_ffffabc6 & 0x10) == 0) == -(uint)((DAT_fffee68d & 4) == 0)) goto LAB_0013bcca;
    if (_DAT_ffffb3a4 == 0xff) {
      _DAT_ffffb3a4 = 0x100;
    }
    else {
      *(undefined1 *)(_DAT_ffffb3a4 - 0x4c5a) = 0;
      _DAT_ffffb3a4 = _DAT_ffffb3a4 + 1;
      if (0x17 < _DAT_ffffb3a4) {
        _DAT_ffffb3a4 = 0;
      }
    }
    *(undefined1 *)(_DAT_ffffb3a4 - 0x4c5a) = 1;
    DAT_ffffb3e4 = DAT_ffffb3e4 + 1;
    if (DAT_ffffb3e4 < 8) goto LAB_0013bcca;
  }
  DAT_ffffb3e4 = 0;
LAB_0013bcca:
  bVar1 = DAT_ffffabc6 | 0x80;
  if (((int)DAT_ffffabc5 & 0x80U) == 0) {
    bVar1 = DAT_ffffabc6 & 0x7f;
  }
  DAT_ffffabc6 = bVar1 | 0x10;
  if ((DAT_fffee68d & 4) == 0) {
    DAT_ffffabc6 = bVar1 & 0xef;
  }
  return;
}

