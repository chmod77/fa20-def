
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000be0e8(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_40;
  byte bStack_3c;
  byte bStack_38;
  
  FUN_000bf760((int)DAT_ffff66b0,(int)_DAT_ffff0f56,(int)DAT_ffff03d7,&DAT_ffff166c);
  FUN_000bf860((int)_DAT_ffff0a70,(int)_DAT_ffff0ada,&DAT_ffff0e66);
  FUN_000c0150(0,(int)DAT_ffff66b0,(int)_v_Fuel_Rail_Pressure_gauge_ED16);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0534 | 0x40;
  if ((local_40 & 1) == 0) {
    bVar2 = DAT_ffff0534 & 0xbf;
  }
  DAT_ffff0534 = bVar2;
  FUN_00001550(uVar1);
  FUN_000bf9b4(&DAT_ffff0544);
  FUN_000bdd0c((int)_v_Engine_Speed_2994,(int)DAT_ffff299c,(int)DAT_ffff03a0,0);
  FUN_000be0dc(&DAT_ffff0533);
  FUN_000bf9c0((int)DAT_ffff299c,(int)DAT_ffff03a0,0);
  FUN_000bfb7c((int)_v_Engine_Speed_2994,(int)DAT_ffff299c,(int)_DAT_fffeeede);
  FUN_000bfbec();
  FUN_000beea8((int)DAT_ffff66b0,(DAT_ffff0000 & 2) != 0,
               (int)(char)('\x01' - ((DAT_fffee710 & 0x20) == 0)),(int)v_Coolant_Temperature_29A5);
  FUN_000bf890((int)_DAT_ffff0e66,(int)_DAT_ffff0adc,&DAT_ffff0542);
  FUN_000bfa18((int)DAT_ffff66b0,(int)DAT_ffff29a7,(int)DAT_ffff299c,(int)_DAT_ffff0e66);
  FUN_000bdcb8((int)DAT_ffff0541,&DAT_ffff0530);
  FUN_000c02d4((int)DAT_ffff0541,(int)DAT_ffff66b0,(int)_v_Fuel_Rail_Pressure_gauge_ED16,
               (int)_DAT_fffeeede);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0534 | 0x80;
  if ((bStack_3c & 1) == 0) {
    bVar2 = DAT_ffff0534 & 0x7f;
  }
  DAT_ffff0534 = bVar2;
  FUN_00001550();
  FUN_000bdd60((int)DAT_ffff299c,(int)DAT_ffff0542,(int)DAT_ffff0458,(int)DAT_ffff0541);
  FUN_000bfc00((int)DAT_ffff0530,(int)_DAT_ffff0e6a,(int)_DAT_ffff0e6c,(int)_DAT_ffff0e6e);
  FUN_000c03a4(_DAT_ffff1530,(int)DAT_ffff299c,(int)DAT_ffff0530,(int)DAT_ffff0543);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0535 | 0x80;
  if ((bStack_38 & 1) == 0) {
    bVar2 = DAT_ffff0535 & 0x7f;
  }
  DAT_ffff0535 = bVar2;
  FUN_00001550();
  FUN_000bf8f8((int)_v_Engine_Speed_2994,(int)DAT_ffff299c,0,((int)DAT_ffff03e2 & 0x80U) != 0);
  return;
}

