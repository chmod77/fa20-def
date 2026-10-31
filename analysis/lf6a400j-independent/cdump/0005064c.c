
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005064c(void)

{
  bool bVar1;
  byte bVar2;
  
  if (_DAT_fffef0da < 0x379) {
    _DAT_fffef466 = 0;
  }
  else {
    _DAT_fffef466 = FUN_00001540(_DAT_fffef466 + 1);
  }
  if ((DAT_fffef46c & 1) == 0) {
    if (0x2ed < _DAT_fffef466) {
      DAT_fffef46d = DAT_fffef46d | 1;
    }
  }
  else {
    DAT_fffef46d = DAT_fffef46d & 0xfe;
  }
  if (((((DAT_fffeeec1 & 2) == 0) && ((DAT_fffeeec2 & 4) == 0)) ||
      (((DAT_fffef470 & 1) == 0 && ((DAT_fffeeec6 & 1) != 0)))) && ((DAT_fffef46d & 1) != 0)) {
    DAT_fffef46c = DAT_fffef46c | 1;
    bVar1 = true;
  }
  else {
    DAT_fffef46c = DAT_fffef46c & 0xfe;
    bVar1 = false;
  }
  if (bVar1) {
    _DAT_ffff2fca = _v_Ambient_Air_Temperature_F344;
  }
  bVar2 = DAT_fffef470 | 1;
  if ((DAT_fffeeec6 & 1) == 0) {
    bVar2 = DAT_fffef470 & 0xfe;
  }
  DAT_fffef470 = bVar2;
  return;
}

