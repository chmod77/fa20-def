
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00126050(void)

{
  byte bVar2;
  undefined4 uVar1;
  byte local_10 [4];
  byte abStack_c [8];
  
  FUN_00126410((DAT_fffef3ea & 0x40) != 0,(int)_DAT_ffff0ea2,(DAT_ffff0789 & 0x20) != 0,
               (DAT_ffff056f & 0x10) != 0,(DAT_fffef08a & 4) != 0,(int)_DAT_ffff12ac,_DAT_ffff12b6,
               _DAT_ffff0a1e,DAT_ffff299c,&DAT_ffff147c);
  FUN_00126588((DAT_ffff0000 & 2) != 0,(DAT_ffff0003 & 4) != 0,local_10);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff095a | 1;
  if ((local_10[0] & 1) == 0) {
    bVar2 = DAT_ffff095a & 0xfe;
  }
  DAT_ffff095a = bVar2;
  FUN_00001550();
  FUN_001265fc((DAT_ffff0000 & 2) != 0,(DAT_ffff0003 & 8) != 0,abStack_c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff095a | 2;
  if ((abStack_c[0] & 1) == 0) {
    bVar2 = DAT_ffff095a & 0xfd;
  }
  DAT_ffff095a = bVar2;
  FUN_00001550(uVar1);
  return;
}

