
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004cb00(void)

{
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  
  if ((DAT_fffeeec2 & 1) == 0) {
    _DAT_fffef360 = 0;
  }
  else {
    _DAT_fffef360 = FUN_00001540(_DAT_fffef360 + 1);
  }
  if ((DAT_ffff2fe1 & 2) == 0) {
    if ((((((DAT_fffeeec2 & 1) == 0) || ((DAT_fffef32e & 0x20) != 0)) ||
         ((DAT_fffef32e & 0x40) != 0)) ||
        ((((int)(char)DAT_fffef32e & 0x80U) != 0 || ((DAT_fffef32f & 2) != 0)))) ||
       ((DAT_ffff2fe4 & 1) == 0)) {
      DAT_ffff2fe4 = DAT_ffff2fe4 | 1;
    }
  }
  else {
    DAT_ffff2fe4 = DAT_ffff2fe4 & 0xfe;
  }
  uVar1 = FUN_0016b390((int)_DAT_ffff0b18,0x1fd,0xffffffff);
  uVar2 = FUN_0016b428(uVar1,(int)_DAT_fffeeed4,0x40,DAT_fffef35a & 1);
  bVar3 = DAT_fffef35a | 1;
  if ((uVar2 & 1) == 0) {
    bVar3 = DAT_fffef35a & 0xfe;
  }
  if ((bVar3 & 1) != 0) {
    DAT_fffeeebb = DAT_fffeeebb | 2;
  }
  DAT_fffef35a = bVar3;
  if ((DAT_fffeeebe & 1) == 0) {
    uVar1 = FUN_00001550(0x70);
    DAT_fffeeebe = DAT_fffeeebe | 2;
    FUN_00001550(uVar1);
  }
  if (((DAT_ffff2fe4 & 1) == 0) || (((DAT_fffeeebb & 2) == 0 && ((DAT_fffeeebe & 2) == 0)))) {
    if ((DAT_ffff2fe4 & 1) == 0) {
      DAT_fffeeebb = DAT_fffeeebb | 1;
    }
  }
  else {
    DAT_fffeeebb = DAT_fffeeebb & 0xfe;
  }
  return;
}

