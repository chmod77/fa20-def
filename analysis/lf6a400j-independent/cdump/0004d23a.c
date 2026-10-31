
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004d23a(void)

{
  int iVar1;
  byte bVar2;
  
  if ((_DAT_fffeef10 < 200) && (_DAT_fffeeede < 0x8000)) {
    iVar1 = FUN_0016caec((uint)_DAT_fffeeede - (uint)_DAT_fffeeee2);
    if (0x800 < iVar1) goto LAB_0004d276;
  }
  else {
LAB_0004d276:
    if (((DAT_fffeeec5 & 1) == 0) || ((DAT_fffeeec2 & 2) != 0)) goto LAB_0004d290;
  }
  _DAT_ffff2f9a = _DAT_fffeef16;
LAB_0004d290:
  bVar2 = DAT_fffeeec5 | 1;
  if ((DAT_fffeeec2 & 2) == 0) {
    bVar2 = DAT_fffeeec5 & 0xfe;
  }
  DAT_fffeeec5 = bVar2;
  return;
}

