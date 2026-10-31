
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00102e24(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  undefined1 local_c8;
  undefined1 uStack_c4;
  undefined1 uStack_c0;
  undefined1 uStack_bc;
  undefined1 uStack_b8;
  undefined1 uStack_b4;
  undefined1 uStack_b0;
  undefined1 uStack_ac;
  undefined1 uStack_a8;
  undefined1 uStack_a4;
  undefined1 uStack_a0;
  undefined1 uStack_9c;
  undefined1 uStack_98;
  undefined1 uStack_94;
  undefined1 uStack_90;
  undefined1 uStack_8c;
  undefined1 uStack_88;
  undefined1 uStack_84;
  undefined1 uStack_80;
  undefined1 uStack_7c;
  undefined1 uStack_78;
  undefined1 uStack_74;
  undefined1 uStack_70;
  undefined1 uStack_6c;
  undefined1 uStack_68;
  
  FUN_00107d48(DAT_fffef316 & 1,(DAT_fffef316 & 2) != 0,(DAT_fffef3ea & 2) != 0);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff078e | 0x40;
  if ((local_c8 & 1) == 0) {
    bVar2 = DAT_ffff078e & 0xbf;
  }
  DAT_ffff078e = bVar2;
  FUN_00001550(uVar1);
  FUN_00107e7c(DAT_fffef316 & 1,(DAT_fffef316 & 2) != 0,DAT_fffef3ea & 1);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff078e | 0x80;
  if ((uStack_c4 & 1) == 0) {
    bVar2 = DAT_ffff078e & 0x7f;
  }
  DAT_ffff078e = bVar2;
  FUN_00001550(uVar1);
  FUN_00107b70(DAT_ffff057a & 1,(DAT_fffeeec2 & 4) != 0,DAT_fffef316 & 1,(DAT_ffff078c & 0x40) != 0)
  ;
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff078e | 0x20;
  if ((uStack_c0 & 1) == 0) {
    bVar2 = DAT_ffff078e & 0xdf;
  }
  DAT_ffff078e = bVar2;
  FUN_00001550();
  FUN_00104ab4(((int)(char)DAT_ffff078e & 0x80U) != 0,(DAT_ffff078e & 0x40) != 0,
               (DAT_ffff0789 & 0x20) != 0);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0793 | 0x80;
  if ((uStack_a4 & 1) == 0) {
    bVar2 = DAT_ffff0793 & 0x7f;
  }
  bVar3 = bVar2 | 0x40;
  if ((uStack_a8 & 1) == 0) {
    bVar3 = bVar2 & 0xbf;
  }
  bVar2 = bVar3 | 0x20;
  if ((uStack_ac & 1) == 0) {
    bVar2 = bVar3 & 0xdf;
  }
  bVar3 = bVar2 | 0x10;
  if ((uStack_b0 & 1) == 0) {
    bVar3 = bVar2 & 0xef;
  }
  bVar2 = bVar3 | 8;
  if ((uStack_b4 & 1) == 0) {
    bVar2 = bVar3 & 0xf7;
  }
  bVar3 = bVar2 | 4;
  if ((uStack_b8 & 1) == 0) {
    bVar3 = bVar2 & 0xfb;
  }
  DAT_ffff0793 = bVar3 | 1;
  if ((uStack_bc & 1) == 0) {
    DAT_ffff0793 = bVar3 & 0xfe;
  }
  FUN_00001550();
  FUN_00104df8((DAT_ffff0789 & 0x20) != 0,(DAT_fffef3ea & 0x40) != 0,(DAT_ffff078e & 0x20) != 0);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0794 | 0x40;
  if ((uStack_94 & 1) == 0) {
    bVar2 = DAT_ffff0794 & 0xbf;
  }
  bVar3 = bVar2 | 0x10;
  if ((uStack_98 & 1) == 0) {
    bVar3 = bVar2 & 0xef;
  }
  bVar2 = bVar3 | 8;
  if ((uStack_9c & 1) == 0) {
    bVar2 = bVar3 & 0xf7;
  }
  DAT_ffff0794 = bVar2 | 2;
  if ((uStack_a0 & 1) == 0) {
    DAT_ffff0794 = bVar2 & 0xfd;
  }
  FUN_00001550(uVar1);
  FUN_001050c8((int)(char)('\x01' - (((int)(char)DAT_ffff078e & 0x80U) == 0)),
               (DAT_ffff078e & 0x40) != 0,(int)(char)('\x01' - ((DAT_ffff0789 & 0x20) == 0)));
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0795 | 0x80;
  if ((uStack_88 & 1) == 0) {
    bVar2 = DAT_ffff0795 & 0x7f;
  }
  bVar3 = bVar2 | 0x20;
  if ((uStack_8c & 1) == 0) {
    bVar3 = bVar2 & 0xdf;
  }
  DAT_ffff0795 = bVar3 | 8;
  if ((uStack_90 & 1) == 0) {
    DAT_ffff0795 = bVar3 & 0xf7;
  }
  FUN_00001550(uVar1);
  FUN_001052e0(DAT_ffff057a & 1,((int)DAT_ffff078d & 0x80U) != 0,(DAT_ffff078e & 0x20) != 0);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0796 | 0x80;
  if ((uStack_78 & 1) == 0) {
    bVar2 = DAT_ffff0796 & 0x7f;
  }
  bVar3 = bVar2 | 0x10;
  if ((uStack_7c & 1) == 0) {
    bVar3 = bVar2 & 0xef;
  }
  bVar2 = bVar3 | 8;
  if ((uStack_80 & 1) == 0) {
    bVar2 = bVar3 & 0xf7;
  }
  DAT_ffff0796 = bVar2 | 4;
  if ((uStack_84 & 1) == 0) {
    DAT_ffff0796 = bVar2 & 0xfb;
  }
  FUN_00001550();
  FUN_001053e0((DAT_ffff078e & 0x20) != 0,
               (int)(char)('\x01' - (((int)(char)DAT_ffff078e & 0x80U) == 0)),
               (int)(char)('\x01' - ((DAT_ffff078e & 0x40) == 0)),(DAT_ffff0789 & 0x20) != 0);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0797 | 0x80;
  if ((uStack_68 & 1) == 0) {
    bVar2 = DAT_ffff0797 & 0x7f;
  }
  bVar3 = bVar2 | 0x20;
  if ((uStack_6c & 1) == 0) {
    bVar3 = bVar2 & 0xdf;
  }
  bVar2 = bVar3 | 0x10;
  if ((uStack_70 & 1) == 0) {
    bVar2 = bVar3 & 0xef;
  }
  DAT_ffff0797 = bVar2 | 2;
  if ((uStack_74 & 1) == 0) {
    DAT_ffff0797 = bVar2 & 0xfd;
  }
  FUN_00001550(uVar1);
  return;
}

