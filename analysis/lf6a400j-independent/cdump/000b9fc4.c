
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b9fc4(void)

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
  
  FUN_000b85f0(&DAT_fffeecbe,&DAT_fffeecc2,&DAT_fffeecc6,&DAT_fffeecca,local_40);
  iVar3 = 0;
  for (bVar4 = 0; bVar4 < 2; bVar4 = bVar4 + 1) {
    *(undefined2 *)(&DAT_ffff1664 + iVar3) = *(undefined2 *)((int)local_40 + iVar3);
    iVar3 = iVar3 + 2;
  }
  FUN_000b8714((int)_DAT_ffff11be,&DAT_ffff0518);
  FUN_000b86d8((int)_DAT_ffff11c0,&DAT_ffff0517);
  FUN_000b98c0((int)_DAT_ffff11e8,(int)_DAT_ffff11f6,local_3c);
  for (uVar5 = 0; (uVar5 & 0xff) < 2; uVar5 = uVar5 + 1) {
    uVar5 = uVar5 & 0xff;
    (&DAT_ffff0e06)[uVar5] = local_3c[uVar5];
  }
  FUN_000ba424(((int)(char)DAT_ffff36cc & 0x80U) != 0,(DAT_ffff36cc & 0x40) != 0,local_38);
  uVar1 = FUN_00001550(0xf0);
  for (uVar5 = 0; (uVar5 & 0xff) < 2; uVar5 = uVar5 + 1) {
    uVar5 = uVar5 & 0xff;
    bVar4 = *(byte *)(uVar5 - 0xc6fe);
    bVar2 = bVar4 | 0x10;
    if ((local_38[uVar5] & 1) == 0) {
      bVar2 = bVar4 & 0xef;
    }
    *(byte *)(uVar5 - 0xc6fe) = bVar2;
  }
  FUN_00001550(uVar1);
  for (uVar5 = 0; (uVar5 & 0xff) < 2; uVar5 = uVar5 + 1) {
    uVar5 = uVar5 & 0xff;
    local_34[uVar5] = '\x01' - ((*(byte *)(uVar5 - 0xc6fe) & 0x10) == 0);
  }
  FUN_000b8390((int)_DAT_ffff39b8,(int)_DAT_ffff39ba,1,(int)DAT_ffff0773,local_34,0xffff0dfe,
               0xffff38fa,local_2c,local_30);
  for (uVar5 = 0; (uVar5 & 0xff) < 2; uVar5 = uVar5 + 1) {
    uVar5 = uVar5 & 0xff;
    *(undefined1 *)(uVar5 - 0xc706) = local_2c[uVar5];
  }
  for (uVar5 = 0; (uVar5 & 0xff) < 2; uVar5 = uVar5 + 1) {
    uVar5 = uVar5 & 0xff;
    *(undefined1 *)(uVar5 - 0xf208) = local_30[uVar5];
  }
  FUN_000b8bc8(&DAT_ffff1664,0xffff38fa,local_28);
  for (uVar5 = 0; (uVar5 & 0xff) < 2; uVar5 = uVar5 + 1) {
    uVar5 = uVar5 & 0xff;
    *(undefined1 *)(uVar5 - 0xf202) = local_28[uVar5];
  }
  for (uVar5 = 0; (uVar5 & 0xff) < 2; uVar5 = uVar5 + 1) {
    uVar5 = uVar5 & 0xff;
    local_24[uVar5] = '\x01' - ((*(byte *)(uVar5 - 0xc6fe) & 0x10) == 0);
  }
  FUN_000b8b50(((int)DAT_ffff2985 & 0x80U) != 0,local_24,0xffff0dfe,local_20);
  for (uVar5 = 0; (uVar5 & 0xff) < 2; uVar5 = uVar5 + 1) {
    uVar5 = uVar5 & 0xff;
    (&DAT_ffff0dfc)[uVar5] = local_20[uVar5];
  }
  FUN_000b8ca4((int)DAT_ffff29d3,&DAT_fffeecc6,0,&DAT_ffff0dfc,local_1c);
  for (uVar5 = 0; (uVar5 & 0xff) < 2; uVar5 = uVar5 + 1) {
    uVar5 = uVar5 & 0xff;
    *(undefined1 *)(uVar5 - 0xf200) = local_1c[uVar5];
  }
  return;
}

