
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009c94c(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  byte local_20 [4];
  byte abStack_1c [4];
  byte abStack_18 [4];
  byte abStack_14 [4];
  undefined1 *local_10;
  
  local_10 = &DAT_ffff03a0;
  FUN_0009b27c((int)DAT_fffee6af,(int)DAT_ffff03d1,(int)DAT_ffff0497,(int)DAT_ffff03d7,_DAT_fffeeede
               ,&DAT_ffff0489);
  FUN_0009b308((int)DAT_fffee6af,(int)DAT_ffff03d1,(int)DAT_ffff0497,(int)DAT_ffff03d7,&DAT_ffff048a
              );
  FUN_0009b520((int)_DAT_fffeeede,(DAT_ffff03d8 & 4) != 0,(int)_DAT_fffeecae,(int)DAT_ffff03a0,
               _v_Engine_Speed_2994,DAT_ffff0541,&DAT_ffff048c,abStack_18,abStack_1c,local_20);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0493 | 0x40;
  if ((abStack_18[0] & 1) == 0) {
    bVar2 = DAT_ffff0493 & 0xbf;
  }
  bVar3 = bVar2 | 0x20;
  if ((abStack_1c[0] & 1) == 0) {
    bVar3 = bVar2 & 0xdf;
  }
  DAT_ffff0493 = bVar3 | 0x80;
  if ((local_20[0] & 1) == 0) {
    DAT_ffff0493 = bVar3 & 0x7f;
  }
  FUN_00001550(uVar1);
  FUN_0009e660((int)DAT_ffff03c5,(DAT_ffff0492 & 2) != 0,abStack_14);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0491 | 8;
  if ((abStack_14[0] & 1) == 0) {
    bVar2 = DAT_ffff0491 & 0xf7;
  }
  DAT_ffff0491 = bVar2;
  FUN_00001550(uVar1);
  return;
}

