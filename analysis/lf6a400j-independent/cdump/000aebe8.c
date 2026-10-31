
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000aebe8(void)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  byte local_48 [4];
  undefined2 local_44 [4];
  undefined2 local_3c [4];
  undefined2 local_34 [4];
  undefined2 local_2c [4];
  undefined1 *local_24;
  
  local_24 = &DAT_ffff2986;
  FUN_000adf40((int)DAT_ffff66b0,&DAT_ffff0d2c);
  FUN_000adff0((int)DAT_ffff29d3,&DAT_ffff04df);
  FUN_000ae058((int)DAT_ffff66b0,(int)DAT_ffff299c,(int)_DAT_ffff2986,(int)DAT_ffff29c2,
               (DAT_fffeef76 & 0x40) != 0,_DAT_fffeeede,DAT_fffeed24,_DAT_ffff09ca,DAT_ffff0541,
               &DAT_ffff0d2e,&DAT_ffff04e1,&DAT_ffff04e2,&DAT_ffff04e3);
  FUN_000af8f0((int)DAT_ffff66b0,(int)DAT_ffff299c,(int)DAT_ffff29c2,(int)_DAT_ffff09ca,DAT_ffff0541
               ,DAT_fffeed24,local_48);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff03e1 | 0x80;
  if ((local_48[0] & 1) == 0) {
    bVar2 = DAT_ffff03e1 & 0x7f;
  }
  DAT_ffff03e1 = bVar2;
  FUN_00001550(uVar1);
  FUN_000ade98((int)DAT_ffff66b0,(int)DAT_ffff299c,(int)_DAT_ffff09c4,(int)_DAT_fffeeede,0xffff163c,
               &DAT_ffff0d2a);
  FUN_000adf90((int)DAT_ffff66b0,(int)_DAT_fffeeede,(int)_DAT_ffff09c4,&DAT_ffff04de);
  FUN_000adff4((int)DAT_ffff04df,&DAT_ffff04e0);
  FUN_000af3c8();
  FUN_000af64c((int)DAT_ffff66b0,(DAT_fffee710 & 0x20) != 0,(int)_DAT_ffff0d2c,(int)DAT_ffff03aa,
               v_Vehicle_Speed_byte_65A1,_DAT_ffff0d06,DAT_ffff29a2,_DAT_ffff09c8,_DAT_fffeeede,
               DAT_ffff03a3 & 1,((int)(char)DAT_fffee710 & 0x80U) != 0,0,DAT_ffff299c,&DAT_ffff0d3a)
  ;
  FUN_000ae480((int)DAT_ffff04df,(int)DAT_ffff04e0,&DAT_ffff04e5);
  FUN_000ae518((int)DAT_ffff66b0,(int)_DAT_ffff0d36,(int)DAT_ffff04e5,(int)_DAT_ffff0d2a,local_44);
  iVar3 = 0;
  for (bVar2 = 0; bVar2 < 4; bVar2 = bVar2 + 1) {
    *(undefined2 *)(iVar3 + -0xe9c4) = *(undefined2 *)((int)local_44 + iVar3);
    iVar3 = iVar3 + 2;
  }
  FUN_000aeff4((int)DAT_ffff66b0,(int)_DAT_ffff0d3a,(int)DAT_ffff2b5b,(int)DAT_fffee6ac,DAT_ffff04e4
               ,v_Coolant_Temperature_29A5,DAT_ffff04e5,DAT_ffff04de,local_3c);
  iVar3 = 0;
  for (bVar2 = 0; bVar2 < 4; bVar2 = bVar2 + 1) {
    *(undefined2 *)(iVar3 + -0xe9ac) = *(undefined2 *)((int)local_3c + iVar3);
    iVar3 = iVar3 + 2;
  }
  FUN_000ae9b4((int)DAT_ffff66b0,0xffff163c,(int)DAT_ffff2b5b,(int)DAT_ffff299c,_DAT_fffeeede,
               DAT_fffee6ac,local_34);
  iVar3 = 0;
  for (bVar2 = 0; bVar2 < 4; bVar2 = bVar2 + 1) {
    *(undefined2 *)(iVar3 + -0xe9b4) = *(undefined2 *)((int)local_34 + iVar3);
    iVar3 = iVar3 + 2;
  }
  FUN_000ae80c(0xffff1654,(int)DAT_ffff66b0,0xffff164c,local_2c);
  iVar3 = 0;
  for (bVar2 = 0; bVar2 < 4; bVar2 = bVar2 + 1) {
    *(undefined2 *)(iVar3 + -0xe9bc) = *(undefined2 *)((int)local_2c + iVar3);
    iVar3 = iVar3 + 2;
  }
  return;
}

