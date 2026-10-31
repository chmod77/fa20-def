
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001128d0(void)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 local_250 [104];
  byte bStack_1e8;
  byte bStack_1e4;
  byte bStack_1e0;
  byte bStack_1dc;
  undefined1 local_1d8 [104];
  undefined1 local_170 [104];
  undefined1 local_108 [104];
  undefined1 local_a0 [104];
  byte bStack_38;
  byte bStack_34;
  byte bStack_30;
  byte bStack_2c;
  uint uStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_fffefa36;
  FUN_0011038c((int)DAT_fffefa46,(int)DAT_fffefa47,(int)DAT_fffefa48,(DAT_fffeeec2 & 4) != 0);
  FUN_001103dc(DAT_fffef050 & 1,(DAT_fffeeec2 & 4) != 0,(int)DAT_fffefa46,(int)DAT_fffefa47);
  FUN_00110428(0xffff07ef,(int)DAT_fffefa46,(int)DAT_fffefa47);
  for (uVar3 = 0; (uVar3 & 0xff) < 0x67; uVar3 = uVar3 + 1) {
    uVar3 = uVar3 & 0xff;
    *(undefined1 *)(uVar3 - 0xf811) = local_250[uVar3];
  }
  FUN_00110f30((int)DAT_fffefa46,(int)DAT_fffefa47,(int)DAT_fffefa48,(DAT_fffefa37 & 2) != 0);
  FUN_00114fb4((int)DAT_fffefa46,(int)DAT_fffefa47,(int)DAT_fffefa48,&DAT_ffff37d9);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff08be | 1;
  if ((bStack_1e8 & 1) == 0) {
    bVar2 = DAT_ffff08be & 0xfe;
  }
  DAT_ffff08be = bVar2;
  FUN_00001550(uVar1);
  FUN_00114ffc((int)DAT_fffefa46,(int)DAT_fffefa47,(int)DAT_fffefa48,&DAT_ffff37d9);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff08bf | 1;
  if ((bStack_1e4 & 1) == 0) {
    bVar2 = DAT_ffff08bf & 0xfe;
  }
  DAT_ffff08bf = bVar2;
  FUN_00001550(uVar1);
  FUN_0011504c((int)DAT_fffefa46,(int)DAT_fffefa47,(int)DAT_fffefa48,&DAT_ffff37d9);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff08c0 | 1;
  if ((bStack_1e0 & 1) == 0) {
    bVar2 = DAT_ffff08c0 & 0xfe;
  }
  DAT_ffff08c0 = bVar2;
  FUN_00001550(uVar1);
  FUN_00115094((int)DAT_fffefa46,(int)DAT_fffefa47,(int)DAT_fffefa48,&DAT_ffff37d9);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff08c1 | 1;
  if ((bStack_1dc & 1) == 0) {
    bVar2 = DAT_ffff08c1 & 0xfe;
  }
  DAT_ffff08c1 = bVar2;
  FUN_00001550(uVar1);
  FUN_00112ee8(&DAT_ffff3772,(int)DAT_fffefa46,(int)DAT_fffefa47,(int)DAT_fffefa48);
  for (uVar3 = 0; (uVar3 & 0xff) < 0x67; uVar3 = uVar3 + 1) {
    uVar3 = uVar3 & 0xff;
    (&DAT_ffff3772)[uVar3] = local_1d8[uVar3];
  }
  bStack_38 = DAT_ffff07e7 & 1;
  bStack_34 = DAT_ffff07db & 1;
  bStack_30 = DAT_ffff07e6 & 1;
  bStack_2c = DAT_ffff06c4 & 1;
  uStack_28 = (int)(char)DAT_ffff08bf & 1;
  FUN_00113a38(&DAT_ffff37d9,0xffff0857,(int)DAT_fffefa46,(int)DAT_fffefa47);
  for (uVar3 = 0; (uVar3 & 0xff) < 0x67; uVar3 = uVar3 + 1) {
    uVar3 = uVar3 & 0xff;
    (&DAT_ffff37d9)[uVar3] = local_170[uVar3];
  }
  FUN_00111d06(0xffff0857,(int)DAT_fffefa46,(int)DAT_fffefa47,(int)DAT_fffefa48);
  for (uVar3 = 0; (uVar3 & 0xff) < 0x67; uVar3 = uVar3 + 1) {
    uVar3 = uVar3 & 0xff;
    *(undefined1 *)(uVar3 - 0xf7a9) = local_108[uVar3];
  }
  FUN_00111b02(0xffff0857,&DAT_ffff37d9,(int)DAT_fffefa46,(int)DAT_fffefa47);
  FUN_00110ff0(0xffff370b,(int)DAT_fffefa46,(int)DAT_fffefa47,(int)DAT_fffefa48);
  for (uVar3 = 0; (uVar3 & 0xff) < 0x67; uVar3 = uVar3 + 1) {
    uVar3 = uVar3 & 0xff;
    *(undefined1 *)(uVar3 - 0xc8f5) = local_a0[uVar3];
  }
  return;
}

