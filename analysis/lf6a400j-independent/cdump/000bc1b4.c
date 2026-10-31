
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000bc1b4(void)

{
  undefined2 uVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  undefined2 local_40 [2];
  undefined1 local_3c [4];
  byte local_38 [4];
  char local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  char local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [8];
  
  FUN_000ba9c0(&DAT_fffeecd6,&DAT_fffeecda,&DAT_fffeecde,&DAT_fffeece2,local_40);
  iVar3 = 0;
  for (bVar4 = 0; bVar4 < 2; bVar4 = bVar4 + 1) {
    *(undefined2 *)(&DAT_ffff1668 + iVar3) = *(undefined2 *)((int)local_40 + iVar3);
    iVar3 = iVar3 + 2;
  }
  FUN_000baae4((int)_DAT_ffff120e,&DAT_ffff051b);
  FUN_000baaa8((int)_DAT_ffff1210,&DAT_ffff051a);
  FUN_000bbbac((int)_DAT_ffff1238,(int)_DAT_ffff1246,local_3c);
  for (uVar5 = 0; (uVar5 & 0xff) < 2; uVar5 = uVar5 + 1) {
    uVar5 = uVar5 & 0xff;
    (&DAT_ffff0e20)[uVar5] = local_3c[uVar5];
  }
  FUN_000bc694((DAT_ffff36cc & 0x20) != 0,(DAT_ffff36cc & 0x10) != 0,local_38);
  uVar1 = FUN_00001550(0xf0);
  for (uVar5 = 0; (uVar5 & 0xff) < 2; uVar5 = uVar5 + 1) {
    uVar5 = uVar5 & 0xff;
    bVar4 = *(byte *)(uVar5 - 0xc6f4);
    bVar2 = bVar4 | 0x10;
    if ((local_38[uVar5] & 1) == 0) {
      bVar2 = bVar4 & 0xef;
    }
    *(byte *)(uVar5 - 0xc6f4) = bVar2;
  }
  FUN_00001550(uVar1);
  for (uVar5 = 0; (uVar5 & 0xff) < 2; uVar5 = uVar5 + 1) {
    uVar5 = uVar5 & 0xff;
    local_34[uVar5] = '\x01' - ((*(byte *)(uVar5 - 0xc6f4) & 0x10) == 0);
  }
  FUN_000ba788((int)_DAT_ffff39bc,(int)_DAT_ffff39be,1,(int)DAT_ffff0778,local_34,0xffff0e1a,
               0xffff3904,local_2c,local_30);
  for (uVar5 = 0; (uVar5 & 0xff) < 2; uVar5 = uVar5 + 1) {
    uVar5 = uVar5 & 0xff;
    *(undefined1 *)(uVar5 - 0xc6fc) = local_2c[uVar5];
  }
  for (uVar5 = 0; (uVar5 & 0xff) < 2; uVar5 = uVar5 + 1) {
    uVar5 = uVar5 & 0xff;
    *(undefined1 *)(uVar5 - 0xf1ec) = local_30[uVar5];
  }
  FUN_000baf30(&DAT_ffff1668,0xffff3904,local_28);
  for (uVar5 = 0; (uVar5 & 0xff) < 2; uVar5 = uVar5 + 1) {
    uVar5 = uVar5 & 0xff;
    *(undefined1 *)(uVar5 - 0xf1e6) = local_28[uVar5];
  }
  for (uVar5 = 0; (uVar5 & 0xff) < 2; uVar5 = uVar5 + 1) {
    uVar5 = uVar5 & 0xff;
    local_24[uVar5] = '\x01' - ((*(byte *)(uVar5 - 0xc6f4) & 0x10) == 0);
  }
  FUN_000baeb8(((int)DAT_ffff2985 & 0x80U) != 0,local_24,0xffff0e1a,local_20);
  for (uVar5 = 0; (uVar5 & 0xff) < 2; uVar5 = uVar5 + 1) {
    uVar5 = uVar5 & 0xff;
    (&DAT_ffff0e18)[uVar5] = local_20[uVar5];
  }
  FUN_000bb00c((int)DAT_ffff29d3,&DAT_fffeecde,0,&DAT_ffff0e18,local_1c);
  for (uVar5 = 0; (uVar5 & 0xff) < 2; uVar5 = uVar5 + 1) {
    uVar5 = uVar5 & 0xff;
    *(undefined1 *)(uVar5 - 0xf1e4) = local_1c[uVar5];
  }
  return;
}

