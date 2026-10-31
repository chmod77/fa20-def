
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00157750(void)

{
  bool bVar1;
  byte bVar2;
  
  FUN_00149406(_v_Atmospheric_Pressure_E6AA);
  bVar1 = true;
  if (((DAT_fffef72d & 0x40) == 0) && ((DAT_fffef72d & 0x20) == 0)) {
    bVar1 = false;
  }
  bVar2 = DAT_ffff1fbc | 0x80;
  if (!bVar1) {
    bVar2 = DAT_ffff1fbc & 0x7f;
  }
  DAT_ffff1fbc = bVar2;
  return;
}

