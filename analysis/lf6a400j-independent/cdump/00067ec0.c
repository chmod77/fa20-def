
void FUN_00067ec0(void)

{
  uint uVar1;
  byte bVar2;
  byte local_20;
  byte bStack_1f;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined1 *puStack_18;
  
  local_20 = DAT_ffff035c & 1;
  bStack_1f = DAT_ffff035d & 1;
  uStack_1e = 4;
  uStack_1c = 1;
  uStack_1a = 0x28;
  puStack_18 = &DAT_ffff0368;
  uVar1 = FUN_00062cd0(&local_20);
  bVar2 = DAT_ffff035d | 1;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_ffff035d & 0xfe;
  }
  local_20 = 1 - ((DAT_ffff035c & 4) == 0);
  bStack_1f = '\x01' - ((bVar2 & 4) == 0);
  uStack_1e = 4;
  uStack_1c = 1;
  uStack_1a = 0x28;
  puStack_18 = &DAT_ffff036a;
  DAT_ffff035d = bVar2;
  uVar1 = FUN_00062cd0(&local_20);
  bVar2 = DAT_ffff035d | 4;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_ffff035d & 0xfb;
  }
  if (((bVar2 & 1) != 0) || ((bVar2 & 4) != 0)) {
    DAT_fffeffee = DAT_fffeffee | 0x20;
  }
  local_20 = 1 - ((DAT_ffff035c & 2) == 0);
  bStack_1f = '\x01' - ((bVar2 & 2) == 0);
  uStack_1e = 4;
  uStack_1c = 1;
  uStack_1a = 0x28;
  puStack_18 = &DAT_ffff036c;
  DAT_ffff035d = bVar2;
  uVar1 = FUN_00062cd0(&local_20);
  bVar2 = DAT_ffff035d | 2;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_ffff035d & 0xfd;
  }
  local_20 = 1 - ((DAT_ffff035c & 8) == 0);
  bStack_1f = '\x01' - ((bVar2 & 8) == 0);
  uStack_1e = 4;
  uStack_1c = 1;
  uStack_1a = 0x28;
  puStack_18 = &DAT_ffff036e;
  DAT_ffff035d = bVar2;
  uVar1 = FUN_00062cd0(&local_20);
  bVar2 = DAT_ffff035d | 8;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_ffff035d & 0xf7;
  }
  if (((bVar2 & 2) != 0) || ((bVar2 & 8) != 0)) {
    DAT_fffeffee = DAT_fffeffee | 0x10;
  }
  local_20 = 1 - ((DAT_fffefff0 & 4) == 0);
  bStack_1f = '\x01' - ((DAT_fffeffee & 4) == 0);
  uStack_1e = 4;
  uStack_1c = 1;
  uStack_1a = 0x28;
  puStack_18 = &DAT_ffff0150;
  DAT_ffff035d = bVar2;
  uVar1 = FUN_00062cd0(&local_20);
  bVar2 = DAT_fffeffee | 4;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_fffeffee & 0xfb;
  }
  local_20 = 1 - ((DAT_fffefff0 & 2) == 0);
  bStack_1f = '\x01' - ((bVar2 & 2) == 0);
  uStack_1e = 4;
  uStack_1c = 1;
  uStack_1a = 0x28;
  puStack_18 = &DAT_ffff0152;
  DAT_fffeffee = bVar2;
  uVar1 = FUN_00062cd0(&local_20);
  bVar2 = DAT_fffeffee | 2;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_fffeffee & 0xfd;
  }
  DAT_fffeffee = bVar2;
  if (bVar2 != DAT_fffeffed) {
    DAT_ffff34bd = DAT_ffff34bd | 0x84;
  }
  return;
}

