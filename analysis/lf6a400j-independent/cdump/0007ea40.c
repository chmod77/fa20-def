
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007ea40(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_20 [4];
  byte abStack_1c [4];
  byte abStack_18 [8];
  
  FUN_0007ebac((int)DAT_ffff66b0,((int)(char)DAT_fffee715 & 0x80U) != 0,(DAT_fffee715 & 0x40) != 0,1
               ,1,local_20);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff03a3 | 1;
  if ((local_20[0] & 1) == 0) {
    bVar2 = DAT_ffff03a3 & 0xfe;
  }
  DAT_ffff03a3 = bVar2;
  FUN_00001550(uVar1);
  FUN_0007eb7c(DAT_ffff03a3 & 1,1,abStack_1c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff03a3 | 2;
  if ((abStack_1c[0] & 1) == 0) {
    bVar2 = DAT_ffff03a3 & 0xfd;
  }
  DAT_ffff03a3 = bVar2;
  FUN_00001550();
  FUN_0007e7f8((DAT_ffff03a3 & 2) != 0,(int)DAT_ffff66b0,(int)_DAT_ffff2988,(int)_DAT_ffff298a,
               DAT_ffff29a7,v_Coolant_Temperature_29A5,&DAT_ffff03a2);
  FUN_0007eb90(DAT_ffff03a3 & 1,(int)DAT_ffff03a2,(int)DAT_ffff66b0,abStack_18);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff03a3 | 4;
  if ((abStack_18[0] & 1) == 0) {
    bVar2 = DAT_ffff03a3 & 0xfb;
  }
  DAT_ffff03a3 = bVar2;
  FUN_00001550(uVar1);
  return;
}

