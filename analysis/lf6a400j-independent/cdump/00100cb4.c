
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00100cb4(void)

{
  byte bVar2;
  undefined4 uVar1;
  byte local_3c [4];
  byte abStack_38 [4];
  byte abStack_34 [4];
  byte abStack_30 [4];
  byte abStack_2c [4];
  byte abStack_28 [4];
  undefined1 *local_24;
  
  local_24 = &DAT_fffef310;
  FUN_001046e4(((int)DAT_fffeef76 & 0x80U) != 0,(DAT_fffef310 & 0x10) != 0,(int)DAT_ffff0560,
               (int)DAT_ffff03ad,&DAT_ffff07a3);
  FUN_0010641c((DAT_fffef3ea & 0x40) != 0,(int)_DAT_ffff0ea2,(DAT_ffff0789 & 0x20) != 0,
               (DAT_ffff056f & 0x10) != 0,(DAT_fffef08a & 4) != 0,(int)_DAT_ffff12ac,_DAT_ffff12b6,
               _DAT_ffff0a1e,DAT_ffff299c,&DAT_ffff12b0);
  FUN_001087e4((DAT_fffef3ea & 0x40) != 0,DAT_fffef39a & 1,(DAT_fffef39a & 2) != 0,
               (DAT_fffef39a & 8) != 0,(DAT_fffef39a & 4) != 0,(DAT_fffef3ea & 4) != 0,
               DAT_fffef3ea & 1,(DAT_fffef3ea & 8) != 0,(DAT_fffef3ea & 2) != 0,local_3c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0789 | 2;
  if ((local_3c[0] & 1) == 0) {
    bVar2 = DAT_ffff0789 & 0xfd;
  }
  DAT_ffff0789 = bVar2;
  FUN_00001550();
  FUN_00108c14((DAT_ffff056f & 0x10) != 0,(DAT_ffff056f & 0x20) != 0,DAT_fffef316 & 1,
               (DAT_fffef316 & 2) != 0,(DAT_fffef3ea & 0x20) != 0,(DAT_fffef3ea & 8) != 0,
               (DAT_ffff0571 & 0x20) != 0,abStack_38);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0571 | 0x40;
  if ((abStack_38[0] & 1) == 0) {
    bVar2 = DAT_ffff0571 & 0xbf;
  }
  DAT_ffff0571 = bVar2;
  FUN_00001550();
  FUN_00109034((DAT_fffef3ea & 0x40) != 0,(int)DAT_ffff07a0,(DAT_fffeeec2 & 2) != 0,DAT_fffef316 & 1
               ,abStack_34);
  FUN_00001550(0xf0);
  bVar2 = DAT_fffeed37 | 0x40;
  if ((abStack_34[0] & 1) == 0) {
    bVar2 = DAT_fffeed37 & 0xbf;
  }
  DAT_fffeed37 = bVar2;
  FUN_00001550();
  FUN_001098f4((DAT_fffef3ea & 0x40) != 0,(int)DAT_ffff07a0,(DAT_ffff0789 & 0x20) != 0,abStack_30);
  FUN_00001550(0xf0);
  bVar2 = DAT_fffeed37 | 0x80;
  if ((abStack_30[0] & 1) == 0) {
    bVar2 = DAT_fffeed37 & 0x7f;
  }
  DAT_fffeed37 = bVar2;
  FUN_00001550();
  FUN_00103cf4((DAT_fffef3ea & 0x40) != 0,(int)_DAT_ffff12b0,(int)_v_Engine_Speed_2994,
               (int)DAT_ffff0585,(DAT_ffff056f & 0x10) != 0,_DAT_ffff12c2,(DAT_ffff0569 & 0x40) != 0
               ,&DAT_ffff1282,&DAT_ffff1286,&DAT_ffff1284);
  FUN_00108ae4((DAT_ffff056f & 0x10) != 0,(DAT_ffff056f & 0x20) != 0,DAT_fffef316 & 1,
               (DAT_fffef316 & 2) != 0,(DAT_fffef3ea & 0x20) != 0,(DAT_fffef3ea & 8) != 0,
               (DAT_ffff0571 & 0x40) != 0,abStack_2c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0571 | 0x20;
  if ((abStack_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff0571 & 0xdf;
  }
  DAT_ffff0571 = bVar2;
  FUN_00001550();
  FUN_001084ac((DAT_ffff0571 & 0x20) != 0,(DAT_ffff0571 & 0x40) != 0,abStack_28);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0789 | 4;
  if ((abStack_28[0] & 1) == 0) {
    bVar2 = DAT_ffff0789 & 0xfb;
  }
  DAT_ffff0789 = bVar2;
  FUN_00001550(uVar1);
  return;
}

