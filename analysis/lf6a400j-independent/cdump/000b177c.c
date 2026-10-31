
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b177c(void)

{
  undefined1 *puVar1;
  byte bVar3;
  byte bVar4;
  undefined4 uVar2;
  int iVar5;
  byte local_54 [4];
  byte abStack_50 [4];
  byte abStack_4c [4];
  undefined2 local_48 [2];
  byte abStack_44 [4];
  undefined1 *puStack_40;
  char cStack_3c;
  undefined1 uStack_38;
  byte bStack_34;
  undefined1 uStack_30;
  char cStack_2c;
  uint uStack_28;
  undefined1 *local_24;
  
  local_24 = &v_Engine_Speed_2994;
  FUN_000b16cc((DAT_fffeef76 & 8) != 0,&DAT_ffff04f0);
  FUN_000b2078((int)_DAT_ffff0b1a,(int)_DAT_ffff002a,&DAT_ffff04f7,&DAT_ffff0d5c);
  FUN_000b20c0(0,(DAT_ffff054a & 0x10) != 0,(int)_v_Engine_Speed_2994,(int)DAT_ffff03a0,DAT_ffff29b7
               ,&DAT_ffff04f8);
  puStack_40 = &DAT_ffff0d60;
  FUN_000b2460((int)_DAT_fffeeeb4,&DAT_ffff0d6c);
  FUN_000b2584((int)_v_Engine_Speed_2994,(int)DAT_ffff03a0);
  FUN_000b25a8((int)_DAT_ffff0f56,(int)_DAT_ffff0d66);
  cStack_3c = '\x01' - ((DAT_fffee710 & 0x20) == 0);
  uStack_38 = 1;
  bStack_34 = DAT_ffff03df & 1;
  uStack_30 = 0;
  cStack_2c = '\x01' - ((DAT_fffef32a & 8) == 0);
  uStack_28 = (int)(char)DAT_fffef3fc & 1;
  FUN_000b2668((int)v_Coolant_Temperature_29A5,(int)DAT_ffff299c,1,(int)DAT_ffff03a0,cStack_3c,
               _DAT_fffeef14,DAT_ffffab41,1,DAT_ffff66b0,bStack_34,DAT_ffff29bc,DAT_ffff29b7,
               DAT_ffff04fc,DAT_ffff0541,_DAT_ffff09b8,0,cStack_2c,(DAT_fffef32b & 0x10) != 0,
               (DAT_fffef32a & 2) != 0,uStack_28,(DAT_fffef32a & 4) != 0,
               ((int)(char)DAT_fffef32a & 0x80U) != 0,(DAT_fffef3fc & 8) != 0,
               (DAT_fffef32a & 0x40) != 0,(DAT_fffef32b & 0x20) != 0,(DAT_fffef32c & 2) != 0,
               (DAT_ffff66b2 & 2) != 0,v_Vehicle_Speed_byte_65A1,abStack_50,local_54);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff04f2 | 1;
  if ((abStack_50[0] & 1) == 0) {
    bVar3 = DAT_ffff04f2 & 0xfe;
  }
  bVar4 = DAT_ffff04f3 | 0x80;
  if ((local_54[0] & 1) == 0) {
    bVar4 = DAT_ffff04f3 & 0x7f;
  }
  DAT_ffff04f2 = bVar3;
  DAT_ffff04f3 = bVar4;
  FUN_00001550();
  FUN_000b2c20((DAT_ffff03d8 & 2) != 0,DAT_ffff06e7 & 1,abStack_4c);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04f2 | 2;
  if ((abStack_4c[0] & 1) == 0) {
    bVar3 = DAT_ffff04f2 & 0xfd;
  }
  DAT_ffff04f2 = bVar3;
  FUN_00001550(uVar2);
  FUN_000b16f8((int)_DAT_ffff09b8,(int)DAT_ffff04fc,&DAT_ffff04f1);
  FUN_000b24f4((int)_DAT_ffff0d6c,(int)_DAT_ffff0d6a,local_48);
  puVar1 = puStack_40;
  iVar5 = 0;
  for (bVar3 = 0; bVar3 < 2; bVar3 = bVar3 + 1) {
    *(undefined2 *)(iVar5 + -0xe9a4) = *(undefined2 *)((int)local_48 + iVar5);
    iVar5 = iVar5 + 2;
  }
  FUN_000b2048((int)DAT_ffff04f1,DAT_ffff04f2 & 1,0xffff165c,puStack_40 + 6);
  FUN_000b2638((int)DAT_ffff04f1,(int)DAT_ffff66b0);
  FUN_000b246c((int)DAT_ffff03a0,(int)_v_Engine_Speed_OBD_copy_2ADA,(DAT_ffff06da & 0x40) != 0,
               (DAT_ffff06da & 0x20) != 0,_DAT_ffff0d70,&DAT_ffff04fb);
  FUN_000b25e8((int)_DAT_ffff0d6e,(int)_DAT_ffff0d70,&DAT_ffff04fd);
  FUN_000b1d38((int)DAT_ffff04fd,DAT_ffff04f2 & 1,(int)DAT_ffff04f7,(int)DAT_ffff04f8,DAT_ffff04fb,
               &DAT_ffff0d5e,&DAT_ffff04fe);
  FUN_000b214c(DAT_ffff04f2 & 1,(DAT_ffff054a & 0x10) != 0,(DAT_ffff04f2 & 2) != 0,
               (int)_DAT_fffeeede,DAT_ffff04f8,DAT_ffff04f7,DAT_ffff04fb,&DAT_ffff04f9,&DAT_ffff04f6
              );
  FUN_000b1fd8((int)_DAT_ffff0d6e,(int)DAT_ffff04f9,DAT_ffff04f2 & 1,puVar1 + 4);
  FUN_000b2b74(DAT_ffff04f2 & 1,(int)DAT_ffff04f9,abStack_44);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04f4 | 0x80;
  if ((abStack_44[0] & 1) == 0) {
    bVar3 = DAT_ffff04f4 & 0x7f;
  }
  DAT_ffff04f4 = bVar3;
  FUN_00001550(uVar2);
  puVar1 = puStack_40;
  FUN_000b1f0c((int)_DAT_ffff0d64,DAT_ffff04f2 & 1,(int)_DAT_fffeeede,(int)DAT_ffff03a0,
               puStack_40 + 2);
  FUN_000b1dfc((int)DAT_ffff04f9,(int)_DAT_ffff0d62,(int)_DAT_ffff0d66,(int)_DAT_ffff0d6a,
               DAT_ffff04f2 & 1,puVar1,&DAT_ffff0d5a);
  FUN_000b2394((int)_DAT_ffff0d62,DAT_ffff04f2 & 1,puVar1 + 8);
  puStack_40 = puVar1 + 10;
  FUN_000b23c0((int)_DAT_ffff0d60,(int)_DAT_ffff0d68,DAT_ffff04f2 & 1,(DAT_ffff04f2 & 2) != 0,
               (DAT_ffff06e6 & 0x10) != 0,(DAT_ffff06e6 & 4) != 0,puStack_40);
  FUN_000b22ac((int)_DAT_ffff0d6a,(DAT_fffef499 & 0x40) != 0,(DAT_ffff66b2 & 2) != 0,
               (DAT_fffee710 & 0x20) != 0,DAT_fffef517,&DAT_ffff04fa);
  return;
}

