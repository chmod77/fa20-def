
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000edea8(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_90 [4];
  byte abStack_8c [4];
  byte abStack_88 [4];
  byte abStack_84 [4];
  byte abStack_80 [4];
  byte abStack_7c [4];
  byte abStack_78 [4];
  byte abStack_74 [4];
  byte abStack_70 [4];
  byte abStack_6c [4];
  byte abStack_68 [4];
  byte abStack_64 [4];
  byte abStack_60 [4];
  byte abStack_5c [4];
  byte abStack_58 [4];
  byte abStack_54 [4];
  byte abStack_50 [4];
  byte abStack_4c [4];
  byte abStack_48 [4];
  byte abStack_44 [4];
  byte abStack_40 [4];
  byte abStack_3c [4];
  byte abStack_38 [4];
  byte abStack_34 [4];
  byte abStack_30 [4];
  byte bStack_2c;
  undefined2 uStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_ffff16fc;
  FUN_000ec24c((int)_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_fffef28e,&DAT_ffff16fc);
  FUN_000ec280((int)_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_fffef284,&DAT_ffff1700);
  FUN_000ec2b4((int)_v_Engine_Speed_2994,_DAT_ffff1810,&DAT_ffff1704);
  FUN_000ec310((int)_v_Engine_Speed_2994,_DAT_ffff180c,&DAT_ffff1708);
  FUN_000ef74c(DAT_fffeeec6 & 1,((int)(char)DAT_ffff0724 & 0x80U) != 0,_DAT_ffff1810,
               (DAT_ffff076d & 8) != 0,&DAT_ffff173c);
  FUN_000ef7c4(DAT_fffeeec6 & 1,((int)(char)DAT_ffff0724 & 0x80U) != 0,_DAT_ffff180c,
               (DAT_ffff076d & 8) != 0,&DAT_ffff1740);
  FUN_000efc94((DAT_fffef371 & 4) != 0,(int)DAT_ffff08fd,local_90);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0726 | 2;
  if ((local_90[0] & 1) == 0) {
    bVar2 = DAT_ffff0726 & 0xfd;
  }
  DAT_ffff0726 = bVar2;
  FUN_00001550(uVar1);
  FUN_000efe84(_DAT_ffff180c,_DAT_ffff1810,(int)_DAT_fffef2b4,(int)_DAT_fffef2b6,abStack_8c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0726 | 1;
  if ((abStack_8c[0] & 1) == 0) {
    bVar2 = DAT_ffff0726 & 0xfe;
  }
  DAT_ffff0726 = bVar2;
  FUN_00001550(uVar1);
  FUN_000ec230((int)DAT_ffff091d,&DAT_ffff115e);
  FUN_000ef9d0((int)DAT_ffff091d,&DAT_ffff1744);
  FUN_000efb8c((int)DAT_ffff091d,&DAT_ffff1750);
  FUN_000efc2c((int)DAT_ffff091d,&DAT_ffff175c);
  FUN_000efc48((int)DAT_ffff091d,&DAT_ffff1760);
  FUN_000efe54(DAT_fffeeec6 & 1,_DAT_ffff1740,_DAT_ffff173c,abStack_88);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0724 | 0x80;
  if ((abStack_88[0] & 1) == 0) {
    bVar2 = DAT_ffff0724 & 0x7f;
  }
  DAT_ffff0724 = bVar2;
  FUN_00001550();
  FUN_000ed798((DAT_ffff0726 & 2) != 0,(int)_v_Engine_Speed_OBD_copy_2ADA,(int)DAT_ffff0773,
               (int)_DAT_ffff11b6,_DAT_fffeef10,_DAT_ffff116c,_DAT_ffff1168,
               (DAT_ffff0726 & 0x40) != 0,(int)_DAT_fffef2b6,DAT_fffef050 & 1,&DAT_ffff071f);
  FUN_000eda88((DAT_ffff0726 & 2) != 0,(int)_v_Engine_Speed_OBD_copy_2ADA,(int)DAT_ffff0773,
               (int)_DAT_ffff11b6,_DAT_fffeef10,_DAT_ffff116e,_DAT_ffff116a,
               ((int)(char)DAT_ffff0726 & 0x80U) != 0,(int)_DAT_fffef2b4,DAT_fffef050 & 1,
               &DAT_ffff0721);
  FUN_000efca8((int)_DAT_ffff11b6,(int)_v_Engine_Speed_OBD_copy_2ADA,(DAT_ffff076d & 8) != 0,
               _DAT_ffff1708,_DAT_ffff1704,((int)(char)DAT_ffff0724 & 0x80U) != 0,
               (DAT_fffef371 & 4) != 0,DAT_ffff08fd,abStack_84,&DAT_ffff0730);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0724 | 0x40;
  if ((abStack_84[0] & 1) == 0) {
    bVar2 = DAT_ffff0724 & 0xbf;
  }
  DAT_ffff0724 = bVar2;
  FUN_00001550(uVar1);
  FUN_000ed044((int)DAT_ffff071f,(int)_DAT_fffef2b6,(int)_DAT_ffff3980,DAT_fffef050 & 1,
               &DAT_ffff3980);
  FUN_000ed228((int)DAT_ffff0721,(int)_DAT_fffef2b4,(int)_DAT_ffff398e,DAT_fffef050 & 1,
               &DAT_ffff398e);
  FUN_000ed640((DAT_ffff0726 & 2) != 0,(int)_v_Engine_Speed_OBD_copy_2ADA,(DAT_ffff076d & 8) != 0,
               (int)_DAT_ffff11b6,((int)(char)DAT_ffff0724 & 0x80U) != 0,(int)_DAT_fffef2b6,
               DAT_ffff0727 & 1,DAT_fffef050 & 1,&DAT_ffff071e);
  FUN_000ed930((DAT_ffff0726 & 2) != 0,(int)_v_Engine_Speed_OBD_copy_2ADA,(DAT_ffff076d & 8) != 0,
               (int)_DAT_ffff11b6,((int)(char)DAT_ffff0724 & 0x80U) != 0,(int)_DAT_fffef2b4,
               (DAT_ffff0727 & 2) != 0,DAT_fffef050 & 1,&DAT_ffff0720);
  FUN_000ef83c((DAT_ffff0726 & 2) != 0,(int)_v_Engine_Speed_OBD_copy_2ADA,(int)DAT_ffff0773,
               (int)_DAT_ffff11b6,_DAT_fffeef10,&DAT_ffff1168);
  FUN_000ef8dc((DAT_ffff0726 & 2) != 0,(int)_v_Engine_Speed_OBD_copy_2ADA,(int)DAT_ffff0773,
               (int)_DAT_ffff11b6,_DAT_fffeef10,&DAT_ffff116a);
  FUN_000ef9ec((int)DAT_ffff071f,(DAT_ffff0726 & 2) != 0,(int)_v_Engine_Speed_OBD_copy_2ADA,
               (int)DAT_ffff0773,_DAT_ffff11b6,_DAT_fffeef10,_DAT_ffff16fc,&DAT_ffff1748);
  FUN_000efabc((int)DAT_ffff0721,(DAT_ffff0726 & 2) != 0,(int)_v_Engine_Speed_OBD_copy_2ADA,
               (int)DAT_ffff0773,_DAT_ffff11b6,_DAT_fffeef10,_DAT_ffff1700,&DAT_ffff174c);
  FUN_000eceec((int)DAT_ffff071e,(int)DAT_ffff071f,(int)_DAT_ffff3976,DAT_fffef050 & 1,&DAT_ffff3976
              );
  FUN_000ecf2c((int)DAT_ffff071e,(int)_DAT_ffff3974,DAT_fffef050 & 1,&DAT_ffff3974);
  FUN_000ecf60((int)DAT_ffff071e,(int)DAT_ffff071f,(int)_DAT_ffff397a,DAT_fffef050 & 1,&DAT_ffff397a
              );
  FUN_000ecfa0((int)DAT_ffff071e,(int)_DAT_ffff3978,DAT_fffef050 & 1,&DAT_ffff3978);
  FUN_000ecfd4((int)DAT_ffff071e,(int)_DAT_ffff3980,(int)DAT_ffff071f,(int)_DAT_fffef2b6,
               (int)_DAT_ffff397e,DAT_fffef050 & 1,&DAT_ffff397e);
  FUN_000ed018((int)DAT_ffff071e,(int)DAT_ffff071f,(int)DAT_ffff36be,DAT_fffef050 & 1,&DAT_ffff36be)
  ;
  FUN_000ed07c((int)DAT_ffff071e,(int)_DAT_fffef2b6,(int)_DAT_ffff397c,DAT_fffef050 & 1,
               &DAT_ffff397c);
  FUN_000ed0b0((int)DAT_ffff071e,(int)DAT_ffff36bf,DAT_fffef050 & 1,&DAT_ffff36bf);
  FUN_000ed0d0((int)DAT_ffff0720,(int)DAT_ffff0721,(int)_DAT_ffff3984,DAT_fffef050 & 1,&DAT_ffff3984
              );
  FUN_000ed110((int)DAT_ffff0720,(int)_DAT_ffff3982,DAT_fffef050 & 1,&DAT_ffff3982);
  FUN_000ed144((int)DAT_ffff0720,(int)DAT_ffff0721,(int)_DAT_ffff3988,DAT_fffef050 & 1,&DAT_ffff3988
              );
  FUN_000ed184((int)DAT_ffff0720,(int)_DAT_ffff3986,DAT_fffef050 & 1,&DAT_ffff3986);
  FUN_000ed1b8((int)DAT_ffff0720,(int)_DAT_ffff398e,(int)DAT_ffff0721,(int)_DAT_fffef2b4,
               (int)_DAT_ffff398c,DAT_fffef050 & 1,&DAT_ffff398c);
  FUN_000ed1fc((int)DAT_ffff0720,(int)DAT_ffff0721,(int)DAT_ffff36c0,DAT_fffef050 & 1,&DAT_ffff36c0)
  ;
  FUN_000ed260((int)DAT_ffff0720,(int)_DAT_fffef2b4,(int)_DAT_ffff398a,DAT_fffef050 & 1,
               &DAT_ffff398a);
  FUN_000ed294((int)DAT_ffff0720,(int)DAT_ffff36c1,DAT_fffef050 & 1,&DAT_ffff36c1);
  FUN_000ed2b4((int)DAT_ffff071e,(int)DAT_ffff071f,(int)_DAT_ffff3990,DAT_fffef050 & 1,&DAT_ffff3990
              );
  FUN_000ed338((int)DAT_ffff071e,(int)DAT_ffff071f,(int)DAT_ffff36c2,DAT_fffef050 & 1,&DAT_ffff36c2)
  ;
  FUN_000ed394((int)DAT_ffff0720,(int)DAT_ffff0721,(int)_DAT_ffff3996,DAT_fffef050 & 1,&DAT_ffff3996
              );
  FUN_000ed418((int)DAT_ffff0720,(int)DAT_ffff0721,(int)DAT_ffff36c3,DAT_fffef050 & 1,&DAT_ffff36c3)
  ;
  FUN_000ed4d8((DAT_ffff0724 & 0x40) != 0,DAT_ffff0726 & 1,_DAT_ffff1810,(int)_DAT_ffff1158,
               _DAT_ffff115e,(int)_DAT_fffef2b6,_DAT_ffff1156,DAT_fffef050 & 1,&DAT_ffff071c);
  FUN_000ed58c((DAT_ffff0724 & 0x40) != 0,DAT_ffff0726 & 1,_DAT_ffff180c,(int)_DAT_ffff115c,
               _DAT_ffff115e,(int)_DAT_fffef2b4,_DAT_ffff115a,DAT_fffef050 & 1,&DAT_ffff071d);
  FUN_000ef6f4((int)DAT_ffff071e,(int)DAT_ffff071f,(DAT_ffff0726 & 0x40) != 0,&DAT_ffff072c);
  FUN_000ef710((int)DAT_ffff0720,(int)DAT_ffff0721,((int)(char)DAT_ffff0726 & 0x80U) != 0,
               &DAT_ffff072d);
  FUN_000ef72c((int)DAT_ffff071e,(DAT_ffff0726 & 0x10) != 0,&DAT_ffff072e);
  FUN_000ef73c((int)DAT_ffff0720,(DAT_ffff0726 & 0x20) != 0,&DAT_ffff072f);
  FUN_000ef97c((DAT_ffff0726 & 2) != 0,(int)DAT_ffff0773,_DAT_ffff1748,(int)_DAT_ffff1168,
               &DAT_ffff116c);
  FUN_000efbd8((DAT_ffff0726 & 2) != 0,(int)DAT_ffff0773,_DAT_ffff174c,(int)_DAT_ffff116a,
               &DAT_ffff116e);
  FUN_000f0140((int)DAT_ffff071f,DAT_fffef050 & 1,abStack_80);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0727 | 1;
  if ((abStack_80[0] & 1) == 0) {
    bVar2 = DAT_ffff0727 & 0xfe;
  }
  DAT_ffff0727 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f0164((int)DAT_ffff0721,DAT_fffef050 & 1,abStack_7c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0727 | 2;
  if ((abStack_7c[0] & 1) == 0) {
    bVar2 = DAT_ffff0727 & 0xfd;
  }
  DAT_ffff0727 = bVar2;
  FUN_00001550();
  FUN_000edc24((DAT_ffff0724 & 0x40) != 0,DAT_ffff0726 & 1,(int)_DAT_ffff1158,(int)_DAT_ffff115e,
               _DAT_ffff1758,_DAT_ffff1744,_DAT_ffff1754,_DAT_ffff1750,_DAT_ffff1156,
               DAT_fffef050 & 1,&DAT_ffff0722);
  FUN_000edcc8((DAT_ffff0724 & 0x40) != 0,DAT_ffff0726 & 1,(int)_DAT_ffff115c,(int)_DAT_ffff115e,
               _DAT_ffff1768,_DAT_ffff175c,_DAT_ffff1764,_DAT_ffff1760,_DAT_ffff115a,
               DAT_fffef050 & 1,&DAT_ffff0723);
  FUN_000ed364((int)DAT_ffff071f,(int)_DAT_ffff116c,(int)_DAT_ffff3994,DAT_fffef050 & 1,
               &DAT_ffff3994);
  FUN_000ed444((int)DAT_ffff0721,(int)_DAT_ffff116e,(int)_DAT_ffff399a,DAT_fffef050 & 1,
               &DAT_ffff399a);
  FUN_000ef484((int)DAT_ffff071c,(int)_DAT_ffff1156,&DAT_ffff1160);
  FUN_000ef4b0((int)DAT_ffff071c,(int)_DAT_ffff1158,&DAT_ffff1162);
  FUN_000ef4dc((int)DAT_ffff071d,(int)_DAT_ffff115a,&DAT_ffff1164);
  FUN_000ef508((int)DAT_ffff071d,(int)_DAT_ffff115c,&DAT_ffff1166);
  FUN_000ef534((int)DAT_ffff071c,_DAT_ffff1754,(int)_DAT_fffef2b6,&DAT_ffff172c);
  FUN_000ef580((int)DAT_ffff071c,_DAT_ffff1758,(int)_DAT_fffef2b6,&DAT_ffff1730);
  FUN_000ef5c8((int)DAT_ffff071d,_DAT_ffff1764,(int)_DAT_fffef2b4,&DAT_ffff1734);
  FUN_000ef614((int)DAT_ffff071d,_DAT_ffff1768,(int)_DAT_fffef2b4,&DAT_ffff1738);
  FUN_000ef65c((int)DAT_ffff0722,(DAT_ffff0724 & 0x20) != 0,&DAT_ffff0728);
  FUN_000ef670();
  FUN_000ef684((int)DAT_ffff0722);
  FUN_000ef6bc((int)DAT_ffff0723,(DAT_ffff0725 & 8) != 0,(DAT_ffff0725 & 0x20) != 0,
               (DAT_ffff0725 & 2) != 0,((int)(char)DAT_ffff0725 & 0x80U) != 0,
               (DAT_ffff0724 & 4) != 0,&DAT_ffff072b);
  FUN_000ec36c((int)DAT_ffff072c,(int)DAT_ffff072e,DAT_fffef050 & 1,&DAT_ffff0718);
  FUN_000ec398((int)DAT_ffff072d,(int)DAT_ffff072f,DAT_fffef050 & 1,&DAT_ffff0719);
  FUN_000efda4((int)DAT_ffff072c,(int)DAT_ffff072e,DAT_fffef050 & 1,abStack_78);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0726 | 4;
  if ((abStack_78[0] & 1) == 0) {
    bVar2 = DAT_ffff0726 & 0xfb;
  }
  DAT_ffff0726 = bVar2;
  FUN_00001550(uVar1);
  FUN_000efdd0((int)DAT_ffff072d,(int)DAT_ffff072f,DAT_fffef050 & 1,abStack_74);
  uStack_28 = 0xf0;
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0726 | 8;
  if ((abStack_74[0] & 1) == 0) {
    bVar2 = DAT_ffff0726 & 0xf7;
  }
  DAT_ffff0726 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f0188((int)DAT_ffff072c,(int)DAT_ffff072e,DAT_fffef050 & 1,abStack_70);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0726 | 0x40;
  if ((abStack_70[0] & 1) == 0) {
    bVar2 = DAT_ffff0726 & 0xbf;
  }
  DAT_ffff0726 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f01a4((int)DAT_ffff072d,(int)DAT_ffff072f,DAT_fffef050 & 1,abStack_6c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0726 | 0x80;
  if ((abStack_6c[0] & 1) == 0) {
    bVar2 = DAT_ffff0726 & 0x7f;
  }
  DAT_ffff0726 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f01c0((int)DAT_ffff072c,(int)DAT_ffff072e,DAT_fffef050 & 1,abStack_68);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0726 | 0x10;
  if ((abStack_68[0] & 1) == 0) {
    bVar2 = DAT_ffff0726 & 0xef;
  }
  DAT_ffff0726 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f01dc((int)DAT_ffff072d,(int)DAT_ffff072f,DAT_fffef050 & 1,abStack_64);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0726 | 0x20;
  if ((abStack_64[0] & 1) == 0) {
    bVar2 = DAT_ffff0726 & 0xdf;
  }
  DAT_ffff0726 = bVar2;
  FUN_00001550(uVar1);
  FUN_000ec52c((int)DAT_ffff0722,_DAT_ffff1744,DAT_fffef050 & 1,&DAT_ffff170c);
  FUN_000ec660((int)DAT_ffff0722,_DAT_ffff1750,DAT_fffef050 & 1,&DAT_ffff1710);
  FUN_000ec7e0((int)DAT_ffff0722,_DAT_ffff1754,DAT_fffef050 & 1,&DAT_ffff1714);
  FUN_000ec960((int)DAT_ffff0722,_DAT_ffff1758,DAT_fffef050 & 1,&DAT_ffff1718);
  FUN_000eca94((int)DAT_ffff0723,_DAT_ffff175c,DAT_fffef050 & 1,&DAT_ffff171c);
  FUN_000ecbc8((int)DAT_ffff0723,_DAT_ffff1760,DAT_fffef050 & 1,&DAT_ffff1720);
  FUN_000ecd48((int)DAT_ffff0723,_DAT_ffff1764,DAT_fffef050 & 1,&DAT_ffff1724);
  FUN_000ecec8((int)DAT_ffff0723,_DAT_ffff1768,DAT_fffef050 & 1,&DAT_ffff1728);
  FUN_000ed2f4((int)DAT_ffff071e,(int)_DAT_ffff3994,(int)DAT_ffff071f,(int)_DAT_ffff116c,
               (int)_DAT_ffff3992,DAT_fffef050 & 1,&DAT_ffff3992);
  FUN_000ed3d4((int)DAT_ffff0720,(int)_DAT_ffff399a,(int)DAT_ffff0721,(int)_DAT_ffff116e,
               (int)_DAT_ffff3998,DAT_fffef050 & 1,&DAT_ffff3998);
  FUN_000ec3c4((int)DAT_ffff0728,(int)DAT_ffff072a,DAT_fffef050 & 1,&DAT_ffff071a);
  FUN_000ec3f0((int)DAT_ffff0729,(int)DAT_ffff072b,DAT_fffef050 & 1,&DAT_ffff071b);
  FUN_000efdfc((int)DAT_ffff0728,(int)DAT_ffff072a,DAT_fffef050 & 1,abStack_60);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0724 | 2;
  if ((abStack_60[0] & 1) == 0) {
    bVar2 = DAT_ffff0724 & 0xfd;
  }
  DAT_ffff0724 = bVar2;
  FUN_00001550(uVar1);
  FUN_000efe28((int)DAT_ffff0729,(int)DAT_ffff072b,DAT_fffef050 & 1,abStack_5c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0724 | 1;
  if ((abStack_5c[0] & 1) == 0) {
    bVar2 = DAT_ffff0724 & 0xfe;
  }
  DAT_ffff0724 = bVar2;
  FUN_00001550(uVar1);
  FUN_000eff80((int)DAT_ffff0728,(int)DAT_ffff072a,DAT_fffef050 & 1,abStack_58);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0724 | 0x20;
  if ((abStack_58[0] & 1) == 0) {
    bVar2 = DAT_ffff0724 & 0xdf;
  }
  DAT_ffff0724 = bVar2;
  FUN_00001550(uVar1);
  FUN_000eff9c((int)DAT_ffff0729,(int)DAT_ffff072b,DAT_fffef050 & 1,abStack_54);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0724 | 0x10;
  if ((abStack_54[0] & 1) == 0) {
    bVar2 = DAT_ffff0724 & 0xef;
  }
  DAT_ffff0724 = bVar2;
  FUN_00001550(uVar1);
  FUN_000effb8((int)DAT_ffff0728,(int)DAT_ffff072a,DAT_fffef050 & 1,abStack_50);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0724 | 8;
  if ((abStack_50[0] & 1) == 0) {
    bVar2 = DAT_ffff0724 & 0xf7;
  }
  DAT_ffff0724 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f0004((int)DAT_ffff0722,DAT_fffef050 & 1,abStack_4c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0725 | 0x40;
  if ((abStack_4c[0] & 1) == 0) {
    bVar2 = DAT_ffff0725 & 0xbf;
  }
  DAT_ffff0725 = bVar2;
  FUN_00001550(uVar1);
  FUN_000effd4((int)DAT_ffff0722,DAT_fffef050 & 1,abStack_48);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0725 | 4;
  if ((abStack_48[0] & 1) == 0) {
    bVar2 = DAT_ffff0725 & 0xfb;
  }
  DAT_ffff0725 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f0058((int)DAT_ffff0723,DAT_fffef050 & 1,abStack_44);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0725 | 0x80;
  if ((abStack_44[0] & 1) == 0) {
    bVar2 = DAT_ffff0725 & 0x7f;
  }
  DAT_ffff0725 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f0028((int)DAT_ffff0723,DAT_fffef050 & 1,abStack_40);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0725 | 8;
  if ((abStack_40[0] & 1) == 0) {
    bVar2 = DAT_ffff0725 & 0xf7;
  }
  DAT_ffff0725 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f00ac((int)DAT_ffff0722,DAT_fffef050 & 1,abStack_3c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0725 | 0x10;
  if ((abStack_3c[0] & 1) == 0) {
    bVar2 = DAT_ffff0725 & 0xef;
  }
  DAT_ffff0725 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f007c((int)DAT_ffff0722,DAT_fffef050 & 1,abStack_38);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0725 | 1;
  if ((abStack_38[0] & 1) == 0) {
    bVar2 = DAT_ffff0725 & 0xfe;
  }
  DAT_ffff0725 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f0100((int)DAT_ffff0723,DAT_fffef050 & 1,abStack_34);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0725 | 0x20;
  if ((abStack_34[0] & 1) == 0) {
    bVar2 = DAT_ffff0725 & 0xdf;
  }
  DAT_ffff0725 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f00d0((int)DAT_ffff0723,DAT_fffef050 & 1,abStack_30);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0725 | 2;
  if ((abStack_30[0] & 1) == 0) {
    bVar2 = DAT_ffff0725 & 0xfd;
  }
  DAT_ffff0725 = bVar2;
  FUN_00001550(uVar1);
  FUN_000f0124((int)DAT_ffff0729,(int)DAT_ffff072b,DAT_fffef050 & 1);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0724 | 4;
  if ((bStack_2c & 1) == 0) {
    bVar2 = DAT_ffff0724 & 0xfb;
  }
  DAT_ffff0724 = bVar2;
  FUN_00001550(uVar1);
  FUN_000ec1d0((int)DAT_ffff0722,(int)_DAT_ffff1160,&DAT_ffff1156);
  FUN_000ec1e8((int)DAT_ffff0722,(int)_DAT_ffff1162,&DAT_ffff1158);
  FUN_000ec200((int)DAT_ffff0723,(int)_DAT_ffff1164,&DAT_ffff115a);
  FUN_000ec218((int)DAT_ffff0723);
  FUN_000ec41c((int)DAT_ffff0722);
  FUN_000ec550((int)DAT_ffff0722,_DAT_ffff1750,(DAT_ffff0725 & 4) != 0,(DAT_ffff0725 & 0x10) != 0,
               DAT_ffff0725 & 1,(DAT_ffff0725 & 0x40) != 0,_DAT_ffff1710,(int)_DAT_ffff3966,
               DAT_fffef050 & 1,&DAT_ffff3966);
  FUN_000ec684(_DAT_ffff1754,(int)DAT_ffff0722,(DAT_ffff0725 & 4) != 0,(DAT_ffff0725 & 0x10) != 0,
               DAT_ffff0725 & 1,(DAT_ffff0725 & 0x40) != 0,_DAT_ffff1714,(int)_DAT_ffff3968,
               DAT_fffef050 & 1,&DAT_ffff3968);
  FUN_000ec794((int)DAT_ffff0722,(DAT_ffff0725 & 4) != 0,(DAT_ffff0725 & 0x10) != 0,DAT_ffff0725 & 1
               ,(DAT_ffff0725 & 0x40) != 0,DAT_ffff36ba,DAT_fffef050 & 1,&DAT_ffff36ba);
  FUN_000ec804(_DAT_ffff1758,(int)DAT_ffff0722,(DAT_ffff0725 & 4) != 0,(DAT_ffff0725 & 0x10) != 0,
               DAT_ffff0725 & 1,(DAT_ffff0725 & 0x40) != 0,_DAT_ffff1718,(int)_DAT_ffff396a,
               DAT_fffef050 & 1,&DAT_ffff396a);
  FUN_000ec914();
  FUN_000ec984();
  FUN_000ecab8();
  FUN_000ecbec(_DAT_ffff1764);
  FUN_000eccfc();
  FUN_000ecd6c(_DAT_ffff1768);
  FUN_000ece7c((int)DAT_ffff0723,(DAT_ffff0725 & 8) != 0,(DAT_ffff0725 & 0x20) != 0,
               (DAT_ffff0725 & 2) != 0,((int)(char)DAT_ffff0725 & 0x80U) != 0,DAT_ffff36bd,
               DAT_fffef050 & 1,&DAT_ffff36bd);
  FUN_000efba8((int)DAT_ffff0722,_DAT_ffff172c,&DAT_ffff1754);
  FUN_000efbc0((int)DAT_ffff0722,_DAT_ffff1730,&DAT_ffff1758);
  FUN_000efc64((int)DAT_ffff0723,_DAT_ffff1734,&DAT_ffff1764);
  FUN_000efc7c((int)DAT_ffff0723,_DAT_ffff1738,&DAT_ffff1768);
  return;
}

