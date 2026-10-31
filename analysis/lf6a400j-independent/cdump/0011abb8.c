
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011abb8(void)

{
  byte bVar2;
  undefined4 uVar1;
  undefined1 *puVar3;
  undefined1 *puVar4;
  byte local_54 [4];
  byte bStack_50;
  byte abStack_4c [4];
  byte abStack_48 [4];
  byte abStack_44 [4];
  byte abStack_40 [4];
  byte abStack_3c [4];
  byte abStack_38 [4];
  byte abStack_34 [4];
  byte bStack_30;
  byte abStack_2c [4];
  undefined1 *puStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_ffff0906;
  puStack_28 = &DAT_ffff1330;
  FUN_0011a7cc(0,(DAT_ffff03d8 & 4) != 0,DAT_fffef050 & 1,&DAT_ffff1334);
  FUN_0011bb2c(0,(DAT_fffefef2 & 8) != 0,(int)DAT_ffff0906,DAT_ffff050c & 1,(DAT_fffef371 & 4) != 0,
               (DAT_ffff03d8 & 4) != 0,_DAT_fffeecae,DAT_ffff091d,_v_Engine_Speed_OBD_copy_2ADA,
               _DAT_ffff1314,_DAT_fffeeede,DAT_ffff0400,_DAT_ffff0b42,DAT_fffef050 & 1,local_54,
               &DAT_ffff1350,&DAT_ffff1352,&DAT_ffff1354,&DAT_ffff1356);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0924 | 8;
  if ((local_54[0] & 1) == 0) {
    bVar2 = DAT_ffff0924 & 0xf7;
  }
  DAT_ffff0924 = bVar2;
  FUN_00001550();
  FUN_0011bce4(0);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0924 | 0x10;
  if ((bStack_50 & 1) == 0) {
    bVar2 = DAT_ffff0924 & 0xef;
  }
  DAT_ffff0924 = bVar2;
  FUN_00001550(uVar1);
  FUN_0011b98c(0,0,(DAT_fffefef2 & 4) != 0,(DAT_ffff03d8 & 2) != 0,(DAT_fffef371 & 4) != 0,
               DAT_ffff0906,DAT_ffff050c & 1,_v_Engine_Speed_OBD_copy_2ADA,_DAT_ffff1314,
               _DAT_fffeeede,DAT_ffff091d,(DAT_ffff03d8 & 4) != 0,_DAT_ffff1334,_DAT_fffeecae,
               DAT_fffef050 & 1,abStack_4c,puStack_28 + 0x16,puStack_28 + 0x18,puStack_28 + 0x1a,
               puStack_28 + 0x1c,puStack_28 + 0x1e);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0925 | 1;
  if ((abStack_4c[0] & 1) == 0) {
    bVar2 = DAT_ffff0925 & 0xfe;
  }
  DAT_ffff0925 = bVar2;
  FUN_00001550();
  FUN_0011a760(0,(DAT_ffff0924 & 8) != 0,(DAT_ffff0924 & 0x10) != 0,(int)DAT_ffff03cf,
               DAT_fffef050 & 1,puStack_28 + 2);
  FUN_0011a820();
  FUN_0011b94c(0,(DAT_ffff0924 & 0x10) != 0,(DAT_ffff0924 & 8) != 0,DAT_fffef050 & 1,abStack_48);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0924 | 0x20;
  if ((abStack_48[0] & 1) == 0) {
    bVar2 = DAT_ffff0924 & 0xdf;
  }
  DAT_ffff0924 = bVar2;
  FUN_00001550(uVar1);
  FUN_0011a6d8(0,0,DAT_ffff0925 & 1,(int)_DAT_fffeecae,DAT_ffff091d,DAT_fffef050 & 1,puStack_28);
  FUN_0011b580(0,(DAT_ffff0924 & 8) != 0,(DAT_ffff03d8 & 4) != 0,(int)_DAT_ffff1334,DAT_ffff091d,
               _DAT_ffff1332,DAT_fffef050 & 1,abStack_44);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0926 | 2;
  if ((abStack_44[0] & 1) == 0) {
    bVar2 = DAT_ffff0926 & 0xfd;
  }
  DAT_ffff0926 = bVar2;
  FUN_00001550();
  FUN_0011b8c4(0,(DAT_ffff0924 & 8) != 0,(int)DAT_ffff091d,(int)_DAT_fffeecae,_DAT_ffff1336,
               (DAT_ffff0924 & 0x20) != 0,DAT_fffef050 & 1,abStack_40,puStack_28 + 0x14);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0924 | 0x40;
  if ((abStack_40[0] & 1) == 0) {
    bVar2 = DAT_ffff0924 & 0xbf;
  }
  DAT_ffff0924 = bVar2;
  FUN_00001550(uVar1);
  FUN_00119ea8(0,0,DAT_ffff0925 & 1,(int)_DAT_ffff1330,DAT_ffff091d,_DAT_fffeecae,DAT_fffef050 & 1,
               &DAT_ffff0922);
  FUN_0011a1ac(0,0,DAT_ffff0925 & 1,(int)_DAT_ffff1330,DAT_ffff091d,_DAT_fffeecae,_DAT_ffff39f0,
               DAT_fffef050 & 1,&DAT_ffff39f0);
  FUN_0011a258(0,0,DAT_ffff0925 & 1,(int)_DAT_ffff1330,DAT_ffff091d,_DAT_fffeecae,DAT_ffff3840,
               DAT_fffef050 & 1,&DAT_ffff3840);
  FUN_0011b614(0,0,DAT_ffff0925 & 1,(int)_DAT_ffff1330,DAT_ffff091d,DAT_fffef050 & 1,abStack_3c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0926 | 4;
  if ((abStack_3c[0] & 1) == 0) {
    bVar2 = DAT_ffff0926 & 0xfb;
  }
  DAT_ffff0926 = bVar2;
  FUN_00001550(uVar1);
  FUN_0011b66c(0,0,DAT_ffff0925 & 1,(int)_DAT_ffff1330,DAT_ffff091d,_DAT_fffeecae,DAT_fffef050 & 1,
               abStack_38);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0926 | 8;
  if ((abStack_38[0] & 1) == 0) {
    bVar2 = DAT_ffff0926 & 0xf7;
  }
  DAT_ffff0926 = bVar2;
  FUN_00001550(uVar1);
  FUN_0011b6ec(0,0,DAT_ffff0925 & 1,(int)_DAT_ffff1330,DAT_ffff091d,_DAT_fffeecae,DAT_fffef050 & 1,
               abStack_34,puStack_28 + 10,puStack_28 + 0xc);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0925 | 2;
  if ((abStack_34[0] & 1) == 0) {
    bVar2 = DAT_ffff0925 & 0xfd;
  }
  DAT_ffff0925 = bVar2;
  FUN_00001550(uVar1);
  FUN_00119f48(0,(DAT_ffff0924 & 8) != 0,(DAT_ffff03d8 & 4) != 0,(int)_DAT_ffff1334,DAT_ffff091d,
               _DAT_fffeecae,(DAT_ffff0924 & 0x40) != 0,_DAT_ffff1332,DAT_fffef050 & 1,&DAT_ffff0923
              );
  FUN_0011a2fc(0,(DAT_ffff0924 & 8) != 0,(DAT_ffff03d8 & 4) != 0,(int)_DAT_ffff1334,DAT_ffff091d,
               _DAT_fffeecae,(DAT_ffff0924 & 0x40) != 0,_DAT_ffff1332,_DAT_ffff39f2,DAT_fffef050 & 1
               ,&DAT_ffff39f2);
  FUN_0011a484(0,(DAT_ffff0924 & 8) != 0,(DAT_ffff03d8 & 4) != 0,(int)_DAT_ffff1334,DAT_ffff091d,
               _DAT_fffeecae,(DAT_ffff0924 & 0x40) != 0,_DAT_ffff1332,DAT_ffff3841,DAT_fffef050 & 1,
               &DAT_ffff3841);
  FUN_0011b494(0);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0926 | 1;
  if ((bStack_30 & 1) == 0) {
    bVar2 = DAT_ffff0926 & 0xfe;
  }
  DAT_ffff0926 = bVar2;
  FUN_00001550();
  puVar3 = puStack_28 + 0x12;
  puVar4 = puStack_28 + 0x10;
  puStack_28 = puStack_28 + 0xe;
  FUN_0011b794(0,(DAT_ffff0924 & 8) != 0,(DAT_ffff03d8 & 4) != 0,(int)_DAT_ffff1334,DAT_ffff091d,
               _DAT_fffeecae,(DAT_ffff0924 & 0x40) != 0,_DAT_ffff1332,DAT_fffef050 & 1,abStack_2c,
               puStack_28,puVar4,puVar3);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0924 | 0x80;
  if ((abStack_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff0924 & 0x7f;
  }
  DAT_ffff0924 = bVar2;
  FUN_00001550(uVar1);
  return;
}

