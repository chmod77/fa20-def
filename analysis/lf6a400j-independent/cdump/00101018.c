
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00101018(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_28 [4];
  byte abStack_24 [4];
  byte local_20 [4];
  byte abStack_1c [8];
  
  FUN_0010561c(&DAT_ffff36ce);
  FUN_00105624(&DAT_ffff36cf);
  FUN_0010562c(&DAT_ffff36d0);
  FUN_0010566c(&DAT_ffff36d2);
  local_28[0] = 1 - (((int)(char)DAT_ffff36cd & 0x80U) == 0);
  FUN_001074cc(DAT_ffff057a & 1,(int)_DAT_ffff2fc8,((int)DAT_ffff078d & 0x80U) != 0,
               (int)(char)local_28[0],local_28);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff36cd | 0x80;
  if ((local_28[0] & 1) == 0) {
    bVar2 = DAT_ffff36cd & 0x7f;
  }
  DAT_ffff36cd = bVar2;
  FUN_00001550(uVar1);
  abStack_24[0] = 1 - ((DAT_ffff36cd & 4) == 0);
  FUN_0010750c(DAT_ffff057a & 1,(int)_DAT_ffff2fc8,(DAT_ffff078c & 4) != 0,(int)(char)abStack_24[0],
               abStack_24);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff36cd | 4;
  if ((abStack_24[0] & 1) == 0) {
    bVar2 = DAT_ffff36cd & 0xfb;
  }
  DAT_ffff36cd = bVar2;
  FUN_00001550(uVar1);
  local_20[0] = 1 - ((DAT_ffff36cd & 8) == 0);
  FUN_00107a98(DAT_ffff057a & 1,(int)_DAT_ffff2fc8,DAT_fffef050 & 1,(int)DAT_fffefa45,0xffff370b,
               ((int)(char)DAT_ffff078c & 0x80U) != 0,local_20[0],local_20);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff36cd | 8;
  if ((local_20[0] & 1) == 0) {
    bVar2 = DAT_ffff36cd & 0xf7;
  }
  DAT_ffff36cd = bVar2;
  FUN_00001550(uVar1);
  abStack_1c[0] = 1 - ((DAT_ffff36cd & 0x10) == 0);
  FUN_00107b30(DAT_ffff057a & 1,(int)_DAT_ffff2fc8,(DAT_ffff078c & 0x10) != 0,
               (int)(char)abStack_1c[0],abStack_1c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff36cd | 0x10;
  if ((abStack_1c[0] & 1) == 0) {
    bVar2 = DAT_ffff36cd & 0xef;
  }
  DAT_ffff36cd = bVar2;
  FUN_00001550(uVar1);
  FUN_00105634(((int)(char)DAT_ffff36cd & 0x80U) != 0,(DAT_ffff36cd & 0x10) != 0,
               (DAT_ffff36cd & 8) != 0,(DAT_ffff36cd & 4) != 0,&DAT_ffff36d1);
  return;
}

