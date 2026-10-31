
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0004bc00(void)

{
  uint uVar1;
  
  if (((DAT_ffff299c == '\0') && (_DAT_ffff29ce < 0x1900)) && ((DAT_fffee68d & 4) != 0)) {
    DAT_ffffabc5 = DAT_ffffabc5 | 8;
  }
  else {
    DAT_ffffabc5 = DAT_ffffabc5 & 0xf7;
  }
  if (((DAT_ffff299c == '\0') && (800 < _DAT_fffeef56)) && ((DAT_fffee68d & 4) != 0)) {
    DAT_ffffabc5 = DAT_ffffabc5 | 4;
  }
  else {
    DAT_ffffabc5 = DAT_ffffabc5 & 0xfb;
  }
  uVar1 = (uint)DAT_fffeed87;
  if ((uVar1 == 0x17) && (uVar1 = (uint)DAT_fffeed8a, DAT_fffeed8a == -0x60)) {
    DAT_fffeeeac = DAT_fffeed8a;
    _DAT_fffeeeaa = (ushort)DAT_fffeed8b * 0x100 + (ushort)DAT_fffeed8c;
    uVar1 = (uint)DAT_fffeed8d;
    DAT_fffeeead = DAT_fffeed8d;
    if ((_DAT_fffeeeaa == 0) &&
       ((DAT_fffeed8d == '\0' && (uVar1 = (uint)(char)DAT_ffffabc5, (uVar1 & 8) != 0)))) {
      uVar1 = (int)(char)DAT_ffffabc5 | 0x80;
      DAT_ffffabc5 = (byte)uVar1;
      DAT_ffffabc7 = 1;
      DAT_fffef713 = 0xff;
      DAT_ffffabc8 = 0;
    }
    if ((_DAT_fffeeeaa == -1) && (DAT_fffeed8d == -1)) {
      _DAT_ffff7ba6 = 0;
      uVar1 = (int)(char)DAT_ffffabc5 & 0x7f;
      DAT_ffffabc5 = (byte)uVar1;
      DAT_ffffabc7 = 0;
      DAT_fffef713 = 0;
    }
    if (((_DAT_fffeeeaa == 0x5050) && (uVar1 = (uint)DAT_fffeed8d, uVar1 == 0x50)) &&
       (uVar1 = (uint)(char)DAT_ffffabc5, (uVar1 & 4) != 0)) {
      uVar1 = (int)DAT_ffffab42 | 0x80;
      DAT_ffffab42 = (char)uVar1;
    }
  }
  return uVar1;
}

