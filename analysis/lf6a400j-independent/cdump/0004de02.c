
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004de02(void)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = FUN_0016b428((int)_v_Engine_Speed_OBD_copy_2ADA,0x1f00,0x200);
  bVar3 = DAT_ffff2aff | 1;
  if ((uVar2 & 1) == 0) {
    bVar3 = DAT_ffff2aff & 0xfe;
  }
  DAT_ffff2aff = bVar3;
  uVar2 = FUN_0016b428(0x5800,_v_Engine_Speed_OBD_copy_2ADA,0x200);
  bVar3 = DAT_ffff2aff | 2;
  if ((uVar2 & 1) == 0) {
    bVar3 = DAT_ffff2aff & 0xfd;
  }
  DAT_ffff2aff = bVar3;
  uVar2 = FUN_0016b404((int)DAT_ffff03a0,0x4d,4);
  bVar3 = DAT_ffff2aff | 4;
  if ((uVar2 & 1) == 0) {
    bVar3 = DAT_ffff2aff & 0xfb;
  }
  DAT_ffff2aff = bVar3;
  uVar2 = FUN_0016b404(0xffffffe4,DAT_ffff03a0,4,(bVar3 & 8) != 0);
  bVar1 = (uVar2 & 1) == 0;
  bVar3 = DAT_ffff2aff | 8;
  if (bVar1) {
    bVar3 = DAT_ffff2aff & 0xf7;
  }
  if (_DAT_fffef19a < 0x2d91) {
    DAT_ffff2aff = bVar3 | 0x10;
  }
  else {
    DAT_ffff2aff = bVar3;
    if (0x52b0 < _DAT_fffef19a) {
      DAT_ffff2aff = bVar3 & 0xef;
    }
  }
  if ((((((DAT_ffff04b4 & 4) != 0) || ((DAT_ffff056a & 0x40) != 0)) ||
       (_DAT_ffff0a58 < _DAT_ffff0a5c)) ||
      (((((DAT_ffff2aff & 1) == 0 || ((DAT_ffff2aff & 2) == 0)) ||
        (((DAT_ffff2aff & 4) == 0 || ((bVar1 || (v_Vehicle_Speed_byte_65A1 < 0x14)))))) ||
       (DAT_ffff03ac < 2)))) ||
     ((5 < DAT_ffff03ac ||
      (((((int)DAT_fffee710 & 0x80U) == 0 && (DAT_ffff0557 == '\0')) || ((DAT_ffff2aff & 0x10) == 0)
       ))))) {
    DAT_ffff06da = DAT_ffff06da & 0xfd;
  }
  else {
    DAT_ffff06da = DAT_ffff06da | 2;
  }
  return;
}

