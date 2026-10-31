
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0010e33c(void)

{
  undefined4 uVar1;
  byte bVar2;
  undefined1 *puVar3;
  byte local_2c [4];
  undefined1 *puStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_ffff07db;
  puStack_28 = &DAT_ffff3701;
  FUN_0010f33c(DAT_fffefa3d & 1,DAT_ffff07db & 1,(int)DAT_fffef3de,DAT_ffff07e7 & 1,DAT_fffefa3e & 1
               ,DAT_fffefa45,DAT_fffefa44,DAT_ffff3707,DAT_ffff3702,DAT_ffff3701,DAT_ffff370a,
               DAT_fffefa3f & 1,DAT_ffff07eb,((int)DAT_fffef939 & 0x80U) != 0,DAT_ffff3704,
               DAT_fffef050 & 1,DAT_ffff3709,&DAT_ffff3704);
  FUN_0010f438(DAT_fffefa3d & 1,DAT_ffff07db & 1,(int)DAT_fffef3de,DAT_ffff07e7 & 1,DAT_fffefa3e & 1
               ,DAT_fffefa45,DAT_fffefa44,DAT_ffff3707,DAT_ffff3702,DAT_ffff3701,DAT_ffff370a,
               DAT_fffefa3f & 1,_DAT_ffff1304,((int)DAT_fffef939 & 0x80U) != 0,_DAT_ffff39e8,
               DAT_fffef050 & 1,DAT_ffff3709,&DAT_ffff39e8);
  FUN_0010f534(DAT_fffefa3d & 1,DAT_ffff07db & 1,(int)DAT_fffef3de,DAT_ffff07e7 & 1,DAT_fffefa3e & 1
               ,DAT_fffefa45,DAT_fffefa44,DAT_ffff3707,DAT_ffff3702,DAT_ffff3701,DAT_ffff370a,
               DAT_fffefa3f & 1,_DAT_ffff1306,((int)DAT_fffef939 & 0x80U) != 0,_DAT_ffff39ea,
               DAT_fffef050 & 1,DAT_ffff3709,&DAT_ffff39ea);
  puVar3 = puStack_28 + 4;
  puStack_28 = (undefined1 *)(int)DAT_ffff3709;
  FUN_0010f630((DAT_fffefa3d & 2) != 0,DAT_ffff07db & 1,(int)DAT_fffef3de,DAT_ffff07e6 & 1,
               (DAT_fffefa3e & 2) != 0,DAT_fffefa45,DAT_fffefa44,DAT_ffff3707,DAT_ffff3702,
               DAT_ffff3701,DAT_ffff370a,(DAT_fffefa3f & 2) != 0,DAT_ffff07eb,
               ((int)DAT_fffef93a & 0x80U) != 0,DAT_ffff3705,DAT_fffef050 & 1,DAT_ffff3709,puVar3);
  puStack_28 = (undefined1 *)(int)DAT_ffff3709;
  FUN_0010f72c((DAT_fffefa3d & 2) != 0,DAT_ffff07db & 1,(int)DAT_fffef3de,DAT_ffff07e6 & 1,
               (DAT_fffefa3e & 2) != 0,DAT_fffefa45,DAT_fffefa44,DAT_ffff3707,DAT_ffff3702,
               DAT_ffff3701,DAT_ffff370a,(DAT_fffefa3f & 2) != 0,_DAT_ffff1304,
               ((int)DAT_fffef93a & 0x80U) != 0,_DAT_ffff39ec,DAT_fffef050 & 1,DAT_ffff3709,
               &DAT_ffff39ec);
  FUN_0010f828((DAT_fffefa3d & 2) != 0,DAT_ffff07db & 1,(int)DAT_fffef3de,DAT_ffff07e6 & 1,
               (DAT_fffefa3e & 2) != 0,DAT_fffefa45,DAT_fffefa44,DAT_ffff3707,DAT_ffff3702,
               DAT_ffff3701,DAT_ffff370a,(DAT_fffefa3f & 2) != 0,_DAT_ffff1306,
               ((int)DAT_fffef93a & 0x80U) != 0,_DAT_ffff39ee,DAT_fffef050 & 1,DAT_ffff3709,
               &DAT_ffff39ee);
  FUN_0011000c((int)_DAT_ffff0fee,(int)DAT_ffff66b0,(int)_DAT_ffff1304,(int)DAT_ffff07eb,
               _DAT_ffff1306,DAT_fffef050 & 1,DAT_fffefa44,local_2c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff07e3 | 1;
  if ((local_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff07e3 & 0xfe;
  }
  DAT_ffff07e3 = bVar2;
  uVar1 = FUN_00001550(uVar1);
  return uVar1;
}

