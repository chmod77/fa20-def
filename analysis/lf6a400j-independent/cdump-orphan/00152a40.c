
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00152a40(void)

{
  uint uVar1;
  byte bVar3;
  undefined4 uVar2;
  ushort uVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  FUN_0006a834();
  FUN_0005fbfe(0x2ba);
  FUN_00046792();
  FUN_0013fff4();
  FUN_00140058();
  FUN_00140088();
  FUN_0005f7e4();
  uVar1 = FUN_0016b428((int)_v_Engine_Speed_2994,0xffff8800,0);
  bVar3 = DAT_fffef381 | 0x80;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_fffef381 & 0x7f;
  }
  DAT_fffef381 = bVar3;
  uVar1 = FUN_0016b428((int)_v_Engine_Speed_2994,0x6800,0);
  bVar3 = DAT_fffef3af | 0x80;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_fffef3af & 0x7f;
  }
  DAT_fffef3af = bVar3;
  uVar1 = FUN_0016b428((int)_v_Engine_Speed_2994,0x3c00,0x400,((int)(char)DAT_fffef545 & 0x80U) != 0
                      );
  bVar3 = DAT_fffef545 | 0x80;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_fffef545 & 0x7f;
  }
  DAT_fffef545 = bVar3;
  FUN_00062510();
  FUN_00069958();
  FUN_0005fbfe(0x16d);
  FUN_0005fbfe(0x16c);
  FUN_0005fbfe(0x16b);
  FUN_0005fbfe(0x16a);
  FUN_0005fbfe(0x169);
  FUN_0005fbfe(0x15);
  FUN_0005fbfe(0x14);
  FUN_0005fbfe(0x161);
  FUN_0005fbfe(0x160);
  FUN_0005fbfe(0x158);
  FUN_0005fbfe(0x16e);
  FUN_0005fbfe(0x163);
  FUN_0005fbfe(0x164);
  FUN_0005fbfe(0x165);
  FUN_0005fbfe(0x2bf);
  FUN_0005fbfe(0x162);
  FUN_0005fbfe(0x2be);
  FUN_0005fbfe(699);
  FUN_0005fbfe(700);
  FUN_0005fbfe(0x175);
  FUN_0005fbfe(6);
  FUN_0003933c();
  FUN_00058844();
  FUN_000c49e0();
  if (DAT_fffef405 == 0) {
    FUN_000c7bcc();
    DAT_fffef405 = 5;
  }
  DAT_fffef405 = FUN_0016bd28(DAT_fffef405 - 1);
  FUN_0003ccf6();
  FUN_0003ddc8();
  FUN_000e40b0();
  FUN_0011f134();
  FUN_0003ab5a();
  FUN_00049e70();
  FUN_0004a1c8();
  FUN_0003d1b2();
  FUN_0003d022();
  FUN_0004c10a();
  FUN_0003d2b4();
  if (((int)(char)DAT_fffef545 & 0x80U) == 0) {
    FUN_000d87bc();
  }
  FUN_000e28b8();
  FUN_000d2b9c();
  FUN_000dca60();
  FUN_00048eba();
  FUN_000e7708();
  FUN_000f09e0();
  FUN_0005fbfe(0x1ce);
  FUN_0005fbfe(0x1cf);
  FUN_000f59a8();
  FUN_0005fbfe(0x1e6);
  FUN_0005fbfe(0x1e7);
  FUN_000eb7cc();
  FUN_0005fbfe(0x263);
  FUN_0005fbfe(0x262);
  FUN_0005fbfe(0x267);
  FUN_0005fbfe(0x266);
  FUN_00128f00();
  FUN_0003c55c();
  FUN_00050ff0();
  FUN_0005101c();
  FUN_0005109c();
  FUN_0005134e();
  FUN_00050d88();
  FUN_0003dbfe();
  FUN_0006ab10();
  FUN_0006bbe8();
  FUN_0006c04c();
  if (DAT_fffeff83 != '\0') {
    FUN_000608b4();
  }
  if (((DAT_fffef050 & 1) != 0) && ((DAT_fffef051 & 1) == 0)) {
    for (uVar1 = 0; (uVar1 & 0xffff) < 0x100; uVar1 = (uVar1 & 0xffff) + 1) {
      for (uVar6 = 0; (uVar6 & 0xff) < 3; uVar6 = (uVar6 & 0xff) + 1) {
        *(undefined1 *)((uVar1 & 0xffff) * 3 + -0x105b5 + (uVar6 & 0xff)) = 0;
      }
    }
    puVar5 = &DAT_fffefd4b;
    for (uVar4 = 0; uVar1 = (uint)(5 < uVar4), 5 >= uVar4; uVar4 = uVar4 + 1) {
      for (; (uVar1 & 0xff) < 3; uVar1 = (uVar1 & 0xff) + 1) {
        puVar5[uVar1 & 0xff] = 0;
      }
      puVar5 = puVar5 + 3;
    }
    DAT_fffefa46 = 0x40;
    FUN_0010cd5c();
    FUN_0010d144();
    FUN_00112854();
    FUN_001128d0();
    DAT_fffefa46 = 0;
  }
  bVar3 = DAT_fffef051 | 1;
  if ((DAT_fffef050 & 1) == 0) {
    bVar3 = DAT_fffef051 & 0xfe;
  }
  DAT_fffef051 = bVar3;
  FUN_000612be();
  if (DAT_fffeff83 != '\0') {
    FUN_0005febe();
    FUN_0006012c();
  }
  FUN_0005ea88();
  if ((DAT_fffefa43 == '\0') && (DAT_fffef3c9 == 0)) {
    DAT_fffefa45 = 0;
    DAT_fffefa44 = 0;
    FUN_0012daf0();
    FUN_0012cf98();
    FUN_00127da4();
    DAT_fffef3c9 = 100;
    FUN_0006ee52();
  }
  DAT_fffef3c9 = FUN_0016bd28(DAT_fffef3c9 - 1);
  FUN_0005e8a8();
  FUN_0005e6a0();
  FUN_000c5934();
  if (DAT_fffef30f == 0) {
    FUN_000c7fa8();
    DAT_fffef30f = 5;
  }
  DAT_fffef30f = FUN_0016bd28(DAT_fffef30f - 1);
  if (DAT_fffef30e == 0) {
    FUN_000c7828();
    DAT_fffef30e = 4;
  }
  DAT_fffef30e = FUN_0016bd28(DAT_fffef30e - 1);
  if (DAT_fffef37f == 0) {
    FUN_000c4974();
    DAT_fffef37f = 100;
  }
  DAT_fffef37f = FUN_0016bd28(DAT_fffef37f - 1);
  FUN_00039388();
  FUN_00121360();
  FUN_00061b5e();
  FUN_001216b0();
  FUN_00121c54();
  FUN_0003ab9e();
  FUN_00121f64();
  FUN_00122248();
  FUN_00122514();
  FUN_001227a0();
  if ((DAT_fffef050 & 1) != 0) {
    FUN_000dce34();
    FUN_0010ebb4();
    FUN_0010e7d0();
    FUN_0010e858();
  }
  FUN_00077736();
  FUN_00077442();
  FUN_00061384();
  DAT_fffef311 = 1;
  uVar2 = FUN_00001550(0xf0);
  DAT_ffff1cb1 = DAT_ffff1cb1 & 0xfe;
  DAT_ffff1cb4 = 0;
  FUN_00001550(uVar2);
  DAT_fffefdbf = DAT_ffff07db & 1;
  return;
}

