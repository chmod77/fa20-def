
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ebb3c(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_1c [4];
  undefined1 *local_18;
  
  local_18 = &DAT_ffff0f82;
  FUN_000eaf4c((int)_DAT_fffeeef4,&DAT_ffff1130);
  FUN_000ebe04((DAT_fffef371 & 4) != 0,(int)DAT_ffff08ca,(int)_DAT_fffeeed0,
               ((int)DAT_ffff050e & 0x80U) != 0,_DAT_fffeef10,_DAT_fffeeede,
               _v_Engine_Speed_OBD_copy_2ADA,_DAT_ffff1130,_DAT_ffff1154,(DAT_ffff03d8 & 2) != 0,
               DAT_ffff050c & 1,_DAT_fffef0da,(DAT_fffef152 & 0x20) != 0,(int)_DAT_ffff0f82,
               _DAT_fffef342,local_1c,&DAT_ffff0714,&DAT_ffff0716,&DAT_ffff0715,&DAT_ffff0717);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0711 | 1;
  if ((local_1c[0] & 1) == 0) {
    bVar2 = DAT_ffff0711 & 0xfe;
  }
  DAT_ffff0711 = bVar2;
  FUN_00001550(uVar1);
  FUN_000eb4f0(DAT_ffff0711 & 1,DAT_fffef050 & 1,&DAT_ffff1150);
  FUN_000eb6ac((int)_DAT_ffff1150,(int)_DAT_ffff113a,(int)_DAT_ffff3962,DAT_fffef050 & 1,
               &DAT_ffff3962);
  FUN_000eb5e8((int)_DAT_ffff1150,(int)_DAT_ffff114e,(int)_DAT_ffff3960,(int)_DAT_ffff113a,
               _DAT_ffff1132,DAT_fffef050 & 1,&DAT_ffff3960);
  FUN_000eb684((int)_DAT_ffff1150,(int)DAT_ffff36b6,DAT_fffef050 & 1);
  return;
}

