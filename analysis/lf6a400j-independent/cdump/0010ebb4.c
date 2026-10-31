
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010ebb4(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_1c [8];
  
  FUN_0010f058(DAT_fffefa3d & 1,(DAT_fffefa3d & 2) != 0,DAT_fffefa3e & 1,(DAT_fffefa3e & 2) != 0,
               DAT_ffff07db & 1,DAT_fffefa45,_DAT_ffff1300,DAT_ffff07e9,_DAT_ffff1302,DAT_ffff07ea,
               DAT_ffff3702,DAT_fffef050 & 1,&DAT_ffff3702);
  FUN_0011034c((int)DAT_fffefa45,(int)DAT_ffff3709,DAT_fffef050 & 1,local_1c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff07e8 | 1;
  if ((local_1c[0] & 1) == 0) {
    bVar2 = DAT_ffff07e8 & 0xfe;
  }
  DAT_ffff07e8 = bVar2;
  FUN_00001550(uVar1);
  return;
}

