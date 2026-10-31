
/* WARNING: Removing unreachable block (ram,0x0006f088) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006efe8(void)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = _DAT_ffff2fb2 != 0;
  DAT_fffef3d3 = bVar1;
  if (_DAT_ffff2fb4 != 0) {
    DAT_fffef3d3 = bVar1 | 2;
  }
  if (_DAT_ffff2fb6 != 0) {
    DAT_fffef3d3 = DAT_fffef3d3 | 4;
  }
  if (_DAT_ffff2fb8 != 0) {
    DAT_fffef3d3 = DAT_fffef3d3 | 8;
  }
  if (_DAT_ffff3520 == _DAT_ffff2fb2) {
    DAT_fffef3d3 = DAT_fffef3d3 | 0x10;
  }
  if (_DAT_ffff3524 == _DAT_ffff2fb4) {
    DAT_fffef3d3 = DAT_fffef3d3 | 0x20;
  }
  if (_DAT_ffff3528 == _DAT_ffff2fb6) {
    DAT_fffef3d3 = DAT_fffef3d3 | 0x40;
  }
  if (_DAT_ffff352c == _DAT_ffff2fb8) {
    DAT_fffef3d3 = DAT_fffef3d3 | 0x80;
  }
  DAT_fffef3d2 = _DAT_ffff2fc8 != 0x4055;
  bVar2 = DAT_fffef3d2;
  if (((2 < DAT_ffff3707) && (2 < DAT_ffff3702)) && (2 < DAT_ffff3701)) {
    bVar2 = 2;
  }
  if (((bVar1) && ((DAT_fffef3d3 & 0x10) != 0)) && ((DAT_fffef3d2 && ((bVar2 & 2) != 0)))) {
    _DAT_ffff2fb2 = 0;
    _DAT_ffff2fba = 0;
  }
  if ((((DAT_fffef3d3 & 2) != 0) && ((DAT_fffef3d3 & 0x20) != 0)) &&
     ((DAT_fffef3d2 && ((bVar2 & 2) != 0)))) {
    _DAT_ffff2fb4 = 0;
    _DAT_ffff2fbc = 0;
  }
  if (((((DAT_fffef3d3 & 4) != 0) && ((DAT_fffef3d3 & 0x40) != 0)) && (DAT_fffef3d2)) &&
     ((bVar2 & 2) != 0)) {
    _DAT_ffff2fb6 = 0;
    _DAT_ffff2fbe = 0;
  }
  if ((((DAT_fffef3d3 & 8) != 0) && ((DAT_fffef3d3 & 0x80) != 0)) &&
     ((DAT_fffef3d2 && ((bVar2 & 2) != 0)))) {
    _DAT_ffff2fb8 = 0;
    _DAT_ffff2fc0 = 0;
  }
  return;
}

