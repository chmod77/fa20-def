
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004eb32(void)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = (DAT_fffeeec2 & 2) == 0;
  if (((DAT_fffef359 & 2) != 0) && (bVar1)) {
    if ((DAT_fffef32a & 2) == 0) {
      _DAT_ffff2faa = _v_Coolant_Temperature_OBD_F322;
    }
    else {
      _DAT_ffff2faa = 0xb000;
    }
  }
  bVar2 = DAT_fffef359 | 2;
  if (bVar1) {
    bVar2 = DAT_fffef359 & 0xfd;
  }
  DAT_fffef359 = bVar2;
  return;
}

