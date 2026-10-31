
void FUN_00064380(void)

{
  uint uVar1;
  byte bVar2;
  byte local_20;
  byte bStack_1f;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined4 uStack_18;
  
  local_20 = DAT_ffff035e & 1;
  bStack_1f = DAT_fffef739 & 1;
  uStack_1e = 4;
  uStack_1c = 1;
  uStack_1a = 0x28;
  uStack_18 = 0xffff0370;
  uVar1 = FUN_00062be0(&local_20);
  bVar2 = DAT_fffef739 | 1;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_fffef739 & 0xfe;
  }
  if ((bVar2 & 1) != 0) {
    DAT_fffef7b1 = DAT_fffef7b1 | 0x80;
  }
  local_20 = 1 - ((DAT_ffff035e & 4) == 0);
  bStack_1f = '\x01' - ((bVar2 & 4) == 0);
  uStack_1e = 4;
  uStack_1c = 1;
  uStack_1a = 0x28;
  uStack_18 = 0xffff0372;
  DAT_fffef739 = bVar2;
  uVar1 = FUN_00062be0(&local_20);
  bVar2 = DAT_fffef739 | 4;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_fffef739 & 0xfb;
  }
  if ((bVar2 & 4) != 0) {
    DAT_fffef7b3 = DAT_fffef7b3 | 0x80;
  }
  if (((bVar2 & 1) != 0) || ((bVar2 & 4) != 0)) {
    DAT_fffefff3 = DAT_fffefff3 | 0x20;
  }
  local_20 = 1 - ((DAT_ffff035e & 2) == 0);
  bStack_1f = '\x01' - ((bVar2 & 2) == 0);
  uStack_1e = 4;
  uStack_1c = 1;
  uStack_1a = 0x28;
  uStack_18 = 0xffff0374;
  DAT_fffef739 = bVar2;
  uVar1 = FUN_00062be0(&local_20);
  bVar2 = DAT_fffef739 | 2;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_fffef739 & 0xfd;
  }
  if ((bVar2 & 2) != 0) {
    DAT_fffef7b2 = DAT_fffef7b2 | 0x80;
  }
  local_20 = 1 - ((DAT_ffff035e & 8) == 0);
  bStack_1f = '\x01' - ((bVar2 & 8) == 0);
  uStack_1e = 4;
  uStack_1c = 1;
  uStack_1a = 0x28;
  uStack_18 = 0xffff0376;
  DAT_fffef739 = bVar2;
  uVar1 = FUN_00062be0(&local_20);
  bVar2 = DAT_fffef739 | 8;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_fffef739 & 0xf7;
  }
  if ((bVar2 & 8) != 0) {
    DAT_fffef7b4 = DAT_fffef7b4 | 0x80;
  }
  if (((bVar2 & 2) != 0) || ((bVar2 & 8) != 0)) {
    DAT_fffefff3 = DAT_fffefff3 | 0x10;
  }
  local_20 = DAT_fffeffec & 1;
  bStack_1f = '\x01' - ((DAT_fffeffec & 4) == 0);
  uStack_1e = 4;
  uStack_1c = 1;
  uStack_1a = 0x28;
  uStack_18 = 0xffff0378;
  DAT_fffef739 = bVar2;
  uVar1 = FUN_00062be0(&local_20);
  bVar2 = DAT_fffeffec | 4;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_fffeffec & 0xfb;
  }
  local_20 = 1 - ((bVar2 & 2) == 0);
  bStack_1f = '\x01' - ((bVar2 & 8) == 0);
  uStack_1e = 4;
  uStack_1c = 1;
  uStack_1a = 0x28;
  uStack_18 = 0xffff037a;
  DAT_fffeffec = bVar2;
  uVar1 = FUN_00062be0(&local_20);
  bVar2 = DAT_fffeffec | 8;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_fffeffec & 0xf7;
  }
  if (((bVar2 & 4) != 0) || ((bVar2 & 8) != 0)) {
    DAT_fffefff3 = DAT_fffefff3 | 8;
  }
  local_20 = 1 - ((DAT_fffefff4 & 4) == 0);
  bStack_1f = '\x01' - ((DAT_fffefff3 & 4) == 0);
  uStack_1e = 4;
  uStack_1c = 1;
  uStack_1a = 0x50;
  uStack_18 = 0xffff0068;
  DAT_fffeffec = bVar2;
  uVar1 = FUN_00062be0(&local_20);
  bVar2 = DAT_fffefff3 | 4;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_fffefff3 & 0xfb;
  }
  local_20 = 1 - ((DAT_fffefff4 & 2) == 0);
  bStack_1f = '\x01' - ((bVar2 & 2) == 0);
  uStack_1e = 4;
  uStack_1c = 1;
  uStack_1a = 0x50;
  uStack_18 = 0xffff006a;
  DAT_fffefff3 = bVar2;
  uVar1 = FUN_00062be0(&local_20);
  bVar2 = DAT_fffefff3 | 2;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_fffefff3 & 0xfd;
  }
  local_20 = DAT_fffefff4 & 1;
  bStack_1f = bVar2 & 1;
  uStack_1e = 4;
  uStack_1c = 1;
  uStack_1a = 0x50;
  uStack_18 = 0xffff006c;
  DAT_fffefff3 = bVar2;
  uVar1 = FUN_00062be0(&local_20);
  bVar2 = DAT_fffefff3 | 1;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_fffefff3 & 0xfe;
  }
  DAT_fffefff3 = bVar2;
  return;
}

