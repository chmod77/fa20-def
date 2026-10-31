
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a12dc(void)

{
  undefined4 uVar1;
  byte bVar3;
  undefined2 uVar2;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined1 local_108 [4];
  undefined2 local_104 [8];
  undefined2 local_f4 [4];
  undefined2 local_ec [4];
  undefined2 local_e4 [4];
  byte abStack_dc [4];
  byte bStack_d8;
  byte bStack_d4;
  byte bStack_d0;
  byte bStack_cc;
  byte bStack_c8;
  byte bStack_c4;
  byte bStack_c0;
  byte bStack_bc;
  char cStack_b8;
  undefined2 local_b4 [32];
  undefined2 local_74 [32];
  char cStack_34;
  char cStack_30;
  char cStack_2c;
  uint uStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_ffff29a0;
  FUN_000a2430((int)DAT_ffff2a02,(int)DAT_ffff2b2b,0xffff29f2);
  iVar6 = 0;
  for (bVar3 = 0; bVar3 < 4; bVar3 = bVar3 + 1) {
    *(undefined2 *)(iVar6 + -0xe9e0) = *(undefined2 *)((int)local_f4 + iVar6);
    iVar6 = iVar6 + 2;
  }
  iVar6 = 0;
  for (bVar3 = 0; bVar3 < 8; bVar3 = bVar3 + 1) {
    *(undefined2 *)(iVar6 + -0xea30) = *(undefined2 *)((int)local_104 + iVar6);
    iVar6 = iVar6 + 2;
  }
  for (uVar5 = 0; (uVar5 & 0xff) < 4; uVar5 = uVar5 + 1) {
    uVar5 = uVar5 & 0xff;
    *(undefined1 *)(uVar5 - 0xea34) = local_108[uVar5];
  }
  FUN_000a33f0((int)DAT_ffff2a04,local_ec);
  iVar6 = 0;
  for (bVar3 = 0; bVar3 < 4; bVar3 = bVar3 + 1) {
    *(undefined2 *)(iVar6 + -0xe9cc) = *(undefined2 *)((int)local_ec + iVar6);
    iVar6 = iVar6 + 2;
  }
  FUN_000a33a4((int)DAT_ffff2a04,local_e4);
  iVar6 = 0;
  for (bVar3 = 0; bVar3 < 4; bVar3 = bVar3 + 1) {
    *(undefined2 *)(iVar6 + -0xe9d4) = *(undefined2 *)((int)local_e4 + iVar6);
    iVar6 = iVar6 + 2;
  }
  FUN_000a3fb8((DAT_ffff04b2 & 0x20) != 0,abStack_dc);
  uVar1 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff04b2 | 0x10;
  if ((abStack_dc[0] & 1) == 0) {
    bVar3 = DAT_ffff04b2 & 0xef;
  }
  DAT_ffff04b2 = bVar3;
  FUN_00001550(uVar1);
  FUN_000a3ac8(0xffff1620,(int)DAT_ffff2a02,0xffff1634,((int)(char)DAT_ffff04b3 & 0x80U) != 0);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff04b3 | 0x40;
  if ((bStack_d8 & 1) == 0) {
    bVar3 = DAT_ffff04b3 & 0xbf;
  }
  DAT_ffff04b3 = bVar3;
  FUN_00001550();
  FUN_000a4000(((int)(char)DAT_ffff04b3 & 0x80U) != 0,0xffff1620);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff2a03 | 0x80;
  if ((bStack_d4 & 1) == 0) {
    bVar3 = DAT_ffff2a03 & 0x7f;
  }
  DAT_ffff2a03 = bVar3;
  FUN_00001550();
  cStack_34 = '\x01' - (((int)(char)DAT_ffff04b3 & 0x80U) == 0);
  cStack_30 = '\x01' - ((DAT_ffff04b8 & 0x10) == 0);
  cStack_2c = '\x01' - ((DAT_ffff04b8 & 0x20) == 0);
  uStack_28 = (uint)DAT_ffff2a02;
  FUN_000a172c(((int)(char)DAT_ffff2a03 & 0x80U) != 0,uStack_28,0xffff29f2,(int)cStack_34);
  uVar2 = FUN_00001550(0xf0);
  uStack_28 = (int)cStack_b8;
  bVar3 = DAT_ffff04b9 | 0x10;
  if (((int)cStack_b8 & 1U) == 0) {
    bVar3 = DAT_ffff04b9 & 0xef;
  }
  bVar4 = bVar3 | 8;
  if ((bStack_bc & 1) == 0) {
    bVar4 = bVar3 & 0xf7;
  }
  bVar3 = bVar4 | 0x80;
  if ((bStack_c0 & 1) == 0) {
    bVar3 = bVar4 & 0x7f;
  }
  bVar4 = bVar3 | 0x20;
  if ((bStack_c4 & 1) == 0) {
    bVar4 = bVar3 & 0xdf;
  }
  bVar3 = bVar4 | 0x40;
  if ((bStack_c8 & 1) == 0) {
    bVar3 = bVar4 & 0xbf;
  }
  bVar4 = bVar3 | 4;
  if ((bStack_cc & 1) == 0) {
    bVar4 = bVar3 & 0xfb;
  }
  DAT_ffff04b9 = bVar4 | 2;
  if ((bStack_d0 & 1) == 0) {
    DAT_ffff04b9 = bVar4 & 0xfd;
  }
  iVar6 = 0;
  for (bVar3 = 0; bVar3 < 0x20; bVar3 = bVar3 + 1) {
    *(undefined2 *)(iVar6 + -0xea20) = *(undefined2 *)((int)local_74 + iVar6);
    iVar6 = iVar6 + 2;
  }
  iVar6 = 0;
  for (bVar3 = 0; bVar3 < 0x20; bVar3 = bVar3 + 1) {
    *(undefined2 *)(iVar6 + -0xea74) = *(undefined2 *)((int)local_b4 + iVar6);
    iVar6 = iVar6 + 2;
  }
  FUN_00001550(uVar2);
  return;
}

