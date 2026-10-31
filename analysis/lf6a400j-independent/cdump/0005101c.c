
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0005101c(void)

{
  uint uVar1;
  
  for (uVar1 = 4; (uVar1 & 0xff) != 0; uVar1 = uVar1 - 1) {
    uVar1 = uVar1 & 0xff;
    *(undefined2 *)(&DAT_fffeef9e + uVar1 * 2) = *(undefined2 *)(&DAT_fffeef9e + (uVar1 - 1) * 2);
  }
  _DAT_fffeef9e = _DAT_fffeefdc;
  if (((int)(char)DAT_fffeef98 & 0x1cU) == 0) {
    _DAT_fffeeffc = _DAT_fffeefde;
    return (int)(char)DAT_fffeef98;
  }
  if ((DAT_fffeef98 >> 2 & 7) == 1) {
    _DAT_fffeefaa = _DAT_fffeefde;
    return 1;
  }
  if ((DAT_fffeef98 >> 2 & 7) == 2) {
    _DAT_fffeefac = _DAT_fffeefde;
    return 2;
  }
  if ((DAT_fffeef98 >> 2 & 7) == 3) {
    _DAT_fffeefae = _DAT_fffeefde;
    return 3;
  }
  uVar1 = DAT_fffeef98 >> 2 & 7;
  if (uVar1 == 4) {
    _DAT_fffeefb0 = _DAT_fffeefde;
  }
  return uVar1;
}

