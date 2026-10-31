
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00084330(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  byte local_20 [4];
  byte abStack_1c [4];
  byte abStack_18 [4];
  byte abStack_14 [4];
  undefined1 *local_10;
  
  local_10 = &DAT_ffff03a0;
  FUN_00084cf4((int)DAT_ffff03a0,(int)_v_Engine_Speed_OBD_copy_2ADA,(DAT_fffeef76 & 0x40) != 0,
               (int)v_Vehicle_Speed_byte_65A1,0,DAT_fffef32a & 1,_DAT_fffeeede,
               (DAT_fffef152 & 0x20) != 0,DAT_fffef3fc & 1,(DAT_fffef3fc & 8) != 0,DAT_ffff091d,
               abStack_14,abStack_18,&DAT_ffff0a2c,&DAT_ffff03cd,&DAT_ffff0a8a,abStack_1c,
               &DAT_ffff09f0,&DAT_ffff09f2,&DAT_ffff09f4,&DAT_ffff09f6,local_20);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff03cc | 1;
  if ((abStack_14[0] & 1) == 0) {
    bVar2 = DAT_ffff03cc & 0xfe;
  }
  bVar3 = bVar2 | 8;
  if ((abStack_18[0] & 1) == 0) {
    bVar3 = bVar2 & 0xf7;
  }
  bVar2 = bVar3 | 4;
  if ((abStack_1c[0] & 1) == 0) {
    bVar2 = bVar3 & 0xfb;
  }
  DAT_ffff03cc = bVar2 | 2;
  if ((local_20[0] & 1) == 0) {
    DAT_ffff03cc = bVar2 & 0xfd;
  }
  FUN_00001550(uVar1);
  return;
}

