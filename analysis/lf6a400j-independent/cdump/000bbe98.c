
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000bbe98(void)

{
  byte bVar1;
  undefined2 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  char local_40 [4];
  undefined1 local_3c [4];
  byte local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [8];
  
  FUN_000bab20((int)DAT_fffeef33,local_50);
  for (uVar4 = 0; (uVar4 & 0xff) < 2; uVar4 = uVar4 + 1) {
    uVar4 = uVar4 & 0xff;
    *(undefined1 *)(uVar4 - 0xf1ea) = local_50[uVar4];
  }
  FUN_000bbd68((int)DAT_fffeef33,(int)_v_Engine_Speed_OBD_copy_2ADA,(int)DAT_ffff66b0,
               (int)_DAT_ffff121e,(int)_DAT_ffff1224,local_4c);
  for (uVar4 = 0; (uVar4 & 0xff) < 2; uVar4 = uVar4 + 1) {
    uVar4 = uVar4 & 0xff;
    *(undefined1 *)(uVar4 - 0xf1d8) = local_4c[uVar4];
  }
  FUN_000ba718(0xffff3906,0xffff3908,local_48);
  for (uVar4 = 0; (uVar4 & 0xff) < 2; uVar4 = uVar4 + 1) {
    uVar4 = uVar4 & 0xff;
    *(undefined1 *)(uVar4 - 0xf1ee) = local_48[uVar4];
  }
  FUN_000bb2b8(((int)DAT_ffff0519 & 0x80U) != 0,0xffff0e28,0xffff0e16,0xffff0e1c,(int)_DAT_ffff1210,
               (int)_DAT_ffff1214,(int)_DAT_fffef2b8,(int)_DAT_fffef2ba,_DAT_ffff1238,_DAT_ffff1246,
               (DAT_ffff0769 & 8) != 0,0xffff3906,0xffff3908,local_44);
  for (uVar4 = 0; uVar5 = 0, (uVar4 & 0xff) < 2; uVar4 = uVar4 + 1) {
    uVar4 = uVar4 & 0xff;
    *(undefined1 *)(uVar4 - 0xf1e2) = local_44[uVar4];
  }
  for (; (uVar5 & 0xff) < 2; uVar5 = uVar5 + 1) {
    uVar5 = uVar5 & 0xff;
    local_40[uVar5] = '\x01' - (((int)*(char *)(uVar5 - 0xf1d6) & 0x80U) == 0);
  }
  FUN_000bbbf4(local_40,0xffff0e12,0xffff390a,local_3c);
  for (uVar4 = 0; (uVar4 & 0xff) < 2; uVar4 = uVar4 + 1) {
    uVar4 = uVar4 & 0xff;
    *(undefined1 *)(uVar4 - 0xc6f6) = local_3c[uVar4];
  }
  FUN_000bc69c(0xffff390a,(int)_DAT_fffef2b8,(int)_DAT_fffef2ba,(int)_DAT_ffff1210,
               (int)_DAT_ffff1214,local_38);
  uVar2 = FUN_00001550(0xf0);
  for (uVar4 = 0; (uVar4 & 0xff) < 2; uVar4 = uVar4 + 1) {
    uVar4 = uVar4 & 0xff;
    bVar1 = *(byte *)(uVar4 - 0xf1d6);
    bVar3 = bVar1 | 0x80;
    if ((local_38[uVar4] & 1) == 0) {
      bVar3 = bVar1 & 0x7f;
    }
    *(byte *)(uVar4 - 0xf1d6) = bVar3;
  }
  FUN_00001550(uVar2);
  FUN_000bab54(0xffff3906,0xffff0e1e,0xffff0e12,0xffff3908,local_34);
  for (uVar4 = 0; (uVar4 & 0xff) < 2; uVar4 = uVar4 + 1) {
    uVar4 = uVar4 & 0xff;
    *(undefined1 *)(uVar4 - 0xc6fa) = local_34[uVar4];
  }
  FUN_000bad08(0xffff0e1e,0xffff0e12,0xffff3908,0xffff3906,local_30);
  for (uVar4 = 0; (uVar4 & 0xff) < 2; uVar4 = uVar4 + 1) {
    uVar4 = uVar4 & 0xff;
    *(undefined1 *)(uVar4 - 0xc6f8) = local_30[uVar4];
  }
  FUN_000bba04((int)_v_Engine_Speed_2994,(int)DAT_fffeef33,0xffff3906,0xffff3908,0xffff390a,
               0xffff0e28,(int)_DAT_ffff121e,(int)_DAT_ffff1224,local_24,local_28,local_2c);
  for (uVar4 = 0; (uVar4 & 0xff) < 2; uVar4 = uVar4 + 1) {
    uVar4 = uVar4 & 0xff;
    *(undefined1 *)(uVar4 - 0xf1de) = local_24[uVar4];
  }
  for (uVar4 = 0; (uVar4 & 0xff) < 2; uVar4 = uVar4 + 1) {
    uVar4 = uVar4 & 0xff;
    *(undefined1 *)(uVar4 - 0xf1dc) = local_28[uVar4];
  }
  for (uVar4 = 0; (uVar4 & 0xff) < 2; uVar4 = uVar4 + 1) {
    uVar4 = uVar4 & 0xff;
    *(undefined1 *)(uVar4 - 0xf1da) = local_2c[uVar4];
  }
  return;
}

