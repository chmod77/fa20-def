
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011e32c(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_34 [4];
  byte abStack_30 [4];
  byte abStack_2c [4];
  byte local_28 [4];
  undefined1 *local_24;
  
  local_24 = &DAT_ffff1884;
  FUN_0011d408((int)v_Vehicle_Speed_byte_65A1,(int)_DAT_ffff13a0,(int)_DAT_ffff138a,&DAT_ffff137c,
               &DAT_ffff137e,&DAT_ffff1380,&DAT_ffff18ac,&DAT_ffff18d4,&DAT_ffff1386,&DAT_ffff1384,
               &DAT_ffff18fc,&DAT_ffff18a8,&DAT_ffff18b0,&DAT_ffff18d8,&DAT_ffff18c8,&DAT_ffff13a4,
               &DAT_ffff18d0,&DAT_ffff1390);
  FUN_0011dc30((int)_DAT_ffff138a,(int)DAT_ffff66b0,(int)_DAT_ffff39fa);
  FUN_0011e850((int)_DAT_ffff09b4,(DAT_fffef32c & 2) != 0,&DAT_ffff1396);
  FUN_0011eb78((int)DAT_fffee6a5,(DAT_fffefef9 & 2) != 0,DAT_fffefef9 & 1,(DAT_fffefef9 & 4) != 0,
               &DAT_ffff0930);
  FUN_0011ebb4((int)v_Coolant_Temperature_29A5,DAT_fffefef7 & 1,(DAT_fffefef7 & 2) != 0,
               (DAT_fffefef7 & 8) != 0,(DAT_fffefef8 & 0x40) != 0,&DAT_ffff0932);
  FUN_0011ebe4((DAT_fffee772 & 0x10) != 0,(int)v_Vehicle_Speed_byte_65A1,(int)DAT_ffff66b0,
               (int)DAT_ffff299c,local_34);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff092d | 4;
  if ((local_34[0] & 1) == 0) {
    bVar2 = DAT_ffff092d & 0xfb;
  }
  DAT_ffff092d = bVar2;
  FUN_00001550(uVar1);
  FUN_0011e868((int)_v_Engine_Speed_2994,(int)_DAT_ffff1396,&DAT_ffff18f4);
  FUN_0011e8f8((int)DAT_ffff049f,(int)DAT_ffff04ba,(int)v_Ignition_Total_Timing_046C,
               (int)_v_Engine_Speed_2994,_DAT_ffff1396,DAT_ffff66b0,DAT_ffff03cf,
               v_Coolant_Temperature_29A5,&DAT_ffff139a,&DAT_ffff092b,&DAT_ffff092f,&DAT_ffff1374,
               &DAT_ffff137a,&DAT_ffff139e,&DAT_ffff139c);
  FUN_0011eb64((int)DAT_ffff0930,&DAT_ffff13a0);
  FUN_0011eba0((int)DAT_ffff0932,&DAT_ffff13a2);
  FUN_0011d8f4((int)_DAT_ffff139a,_DAT_ffff18f4,(int)_DAT_ffff138a,&DAT_ffff1382,&DAT_ffff18dc,
               &DAT_ffff18f8,&DAT_ffff18e0,&DAT_ffff18b4);
  FUN_0011e30c(_DAT_ffff18f4,&DAT_ffff1392);
  FUN_0011e8dc((int)_DAT_ffff139a,&DAT_ffff1398);
  FUN_0011d2e0((int)_DAT_ffff1382,(int)_DAT_ffff139a,(int)_DAT_ffff138a,&DAT_ffff18a0);
  FUN_0011d374(_DAT_ffff18cc,(int)_DAT_ffff1382,(int)_DAT_ffff139a,(int)_DAT_ffff138e,&DAT_ffff18a4,
               &DAT_ffff138c);
  FUN_0011d0a4(_DAT_ffff18a4,(int)_DAT_ffff138e,&DAT_ffff188c,&DAT_ffff18c4);
  FUN_0011d28c(_DAT_ffff18a4,(int)_DAT_ffff138e,&DAT_ffff1898);
  FUN_0011dc50((int)_DAT_ffff137c,_DAT_ffff18a0,(int)DAT_ffff66b0,(int)_DAT_ffff13a0,_DAT_ffff13a2,
               DAT_fffee69c,DAT_ffff29a7,DAT_fffee6a2,_DAT_ffff39fa,&DAT_ffff138a,&DAT_ffff1378,
               &DAT_ffff189c,&DAT_ffff1394,&DAT_ffff0931,&DAT_ffff092c,&DAT_ffff092e,&DAT_ffff1388);
  FUN_0011cf48((int)_DAT_ffff09b8,(int)_v_Atmospheric_Pressure_E6AA,(int)_DAT_ffff138a,_DAT_ffff18f4
               ,_DAT_ffff1392,&DAT_ffff1888,&DAT_ffff18ec,&DAT_ffff18f0,&DAT_ffff18e8);
  FUN_0011cf08(_DAT_ffff1888,_DAT_ffff188c,&DAT_ffff1884);
  FUN_0011d1a8((int)_DAT_ffff138a,_DAT_ffff1888,_DAT_ffff18a4,(int)_DAT_ffff138e,&DAT_ffff1894);
  FUN_0011d168(_DAT_ffff1894,_DAT_ffff1898,&DAT_ffff1890);
  FUN_0011e104(_DAT_ffff1890,_DAT_ffff1884,_DAT_ffff18cc,(int)DAT_ffff66b0,_DAT_ffff138a,
               &DAT_ffff138e,&DAT_ffff1376,abStack_30);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff3844 | 0x10;
  if ((abStack_30[0] & 1) == 0) {
    bVar2 = DAT_ffff3844 & 0xef;
  }
  DAT_ffff3844 = bVar2;
  FUN_00001550(uVar1);
  FUN_0011dfb0(_DAT_ffff3b48,_DAT_ffff1884,(int)DAT_ffff66b0,&DAT_ffff18cc);
  FUN_0011db04((int)DAT_ffff66b0,_DAT_ffff18cc,_DAT_ffff3b48,DAT_fffef09f & 1,&DAT_ffff3b48,
               &DAT_ffff3b4c);
  FUN_0011db40((DAT_ffff0000 & 2) != 0,(int)DAT_ffff66b0,_DAT_ffff3b48,(int)DAT_ffff0930,
               DAT_ffff0932,&DAT_ffff18b8,&DAT_ffff18c0);
  FUN_0011dbac(_DAT_ffff18cc,_DAT_ffff18b8,(int)DAT_ffff66b0,&DAT_ffff18bc,abStack_2c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff3844 | 0x80;
  if ((abStack_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff3844 & 0x7f;
  }
  DAT_ffff3844 = bVar2;
  FUN_00001550(uVar1);
  local_28[0] = DAT_ffff3844 & 1;
  FUN_0011ec70((int)DAT_ffff66b0,(DAT_ffff092d & 4) != 0,_DAT_ffff18bc,(int)_DAT_ffff138a,
               _DAT_ffff138e,local_28[0],local_28,&DAT_ffff18e4);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff3844 | 1;
  if ((local_28[0] & 1) == 0) {
    bVar2 = DAT_ffff3844 & 0xfe;
  }
  DAT_ffff3844 = bVar2;
  FUN_00001550(uVar1);
  return;
}

