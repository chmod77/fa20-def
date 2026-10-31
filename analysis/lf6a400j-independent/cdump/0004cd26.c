
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004cd26(void)

{
  undefined4 uVar1;
  byte bVar2;
  
  uVar1 = FUN_00001550(0x70);
  bVar2 = DAT_fffeeebd | 1;
  if ((DAT_fffeeebc & 1) == 0) {
    bVar2 = DAT_fffeeebd & 0xfe;
  }
  DAT_fffeeebd = bVar2;
  FUN_00001550(uVar1);
  if (((DAT_fffeeebb & 1) == 0) &&
     (((DAT_fffeeebe & 1) == 0 || (_DAT_ffff0b18 + 0x1fd <= (uint)_DAT_fffeeed4)))) {
    if ((DAT_fffeeebe & 1) != 0) {
      return;
    }
    if ((uint)_DAT_fffeeed4 < _DAT_ffff0b18 + 0x23d) {
      return;
    }
    uVar1 = FUN_00001550(0x70);
    DAT_fffeeebc = DAT_fffeeebc & 0xfe;
  }
  else {
    uVar1 = FUN_00001550(0x70);
    DAT_fffeeebc = DAT_fffeeebc | 1;
  }
  FUN_00001550(uVar1);
  return;
}

