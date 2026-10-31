
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001234d4(void)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  undefined2 local_2c [10];
  byte abStack_18 [4];
  byte abStack_14 [4];
  byte abStack_10 [4];
  undefined1 *local_c;
  
  local_c = &DAT_ffff0954;
  FUN_00122c68((int)DAT_ffff66b0,&DAT_ffff0952);
  FUN_00122c94((int)_DAT_ffff0afc,(int)_DAT_ffff0aaa,local_2c);
  iVar3 = 0;
  for (bVar2 = 0; bVar2 < 10; bVar2 = bVar2 + 1) {
    *(undefined2 *)(iVar3 + -0xe700) = *(undefined2 *)((int)local_2c + iVar3);
    iVar3 = iVar3 + 2;
  }
  FUN_00122f1c((int)_DAT_ffff0abc,&DAT_ffff13fa);
  FUN_001231b0((int)_DAT_ffff0ae4,&DAT_ffff1404);
  FUN_00123290((int)_DAT_ffff0aea,&DAT_ffff1410);
  FUN_0012398c((int)_DAT_ffff0b14,&DAT_ffff1418);
  FUN_00123c1c((int)_DAT_ffff0ab0,abStack_18);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0954 | 1;
  if ((abStack_18[0] & 1) == 0) {
    bVar2 = DAT_ffff0954 & 0xfe;
  }
  DAT_ffff0954 = bVar2;
  FUN_00001550(uVar1);
  FUN_00123c44((int)_DAT_ffff0b12,(int)_DAT_ffff0abc,(int)_DAT_ffff0aaa,abStack_14);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0954 | 2;
  if ((abStack_14[0] & 1) == 0) {
    bVar2 = DAT_ffff0954 & 0xfd;
  }
  DAT_ffff0954 = bVar2;
  FUN_00001550(uVar1);
  FUN_00123c70((int)_v_Engine_Speed_2994,abStack_10);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0954 | 4;
  if ((abStack_10[0] & 1) == 0) {
    bVar2 = DAT_ffff0954 & 0xfb;
  }
  DAT_ffff0954 = bVar2;
  FUN_00001550(uVar1);
  return;
}

