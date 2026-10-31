
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d4220(void)

{
  byte bVar2;
  undefined4 uVar1;
  byte local_28 [4];
  byte abStack_24 [4];
  undefined1 *local_20;
  
  local_20 = &DAT_ffff0dc2;
  FUN_000d40dc((DAT_ffffab40 & 0x20) != 0,(int)DAT_ffff2996,(int)_DAT_fffeecae,&DAT_ffff0f7e);
  FUN_000d44ec((DAT_ffffab40 & 0x20) != 0,DAT_fffeeec1 & 1,&DAT_ffff0f8a);
  FUN_000d4518((DAT_ffffab40 & 0x20) != 0);
  FUN_000d45b0((int)_DAT_fffeecae,(DAT_ffffab40 & 0x20) != 0,(int)_DAT_ffff0f82,local_28,
               &DAT_ffff0f8c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff064e | 0x40;
  if ((local_28[0] & 1) == 0) {
    bVar2 = DAT_ffff064e & 0xbf;
  }
  DAT_ffff064e = bVar2;
  FUN_00001550();
  FUN_000d43ac((int)_DAT_ffff0f8a,(int)_DAT_ffff0f7e,(int)_DAT_fffeecae,(DAT_ffffab40 & 0x20) != 0,
               DAT_fffeeec1 & 1,(DAT_ffff064e & 0x40) != 0,DAT_ffff064f,(DAT_fffef152 & 0x20) != 0,
               &DAT_ffff0f82,&DAT_ffff0f84,&DAT_ffff0f86,&DAT_ffff0f88);
  FUN_000d4554((DAT_ffffab40 & 0x20) != 0,(int)_DAT_ffff0f8a,(int)_DAT_ffff0f7e,(int)_DAT_ffff0f82,
               abStack_24);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff064e | 0x80;
  if ((abStack_24[0] & 1) == 0) {
    bVar2 = DAT_ffff064e & 0x7f;
  }
  DAT_ffff064e = bVar2;
  FUN_00001550(uVar1);
  FUN_000d41a0((int)_DAT_ffff0d80,(int)_DAT_ffff0dc2,((int)(char)DAT_ffff064e & 0x80U) != 0,
               &DAT_ffff0f80);
  return;
}

