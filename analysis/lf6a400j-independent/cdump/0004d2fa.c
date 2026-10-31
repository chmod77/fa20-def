
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004d2fa(void)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = (DAT_fffeef76 & 8) != 0;
  if (((DAT_fffef332 & 8) == 0) && (bVar1)) {
    if ((DAT_fffef32a & 2) == 0) {
      _DAT_fffeeee0 = _v_Coolant_Temperature_OBD_F322;
    }
    else {
      _DAT_fffeeee0 = 0xb000;
    }
  }
  bVar2 = DAT_fffef332 | 8;
  if (!bVar1) {
    bVar2 = DAT_fffef332 & 0xf7;
  }
  DAT_fffef332 = bVar2;
  return;
}

