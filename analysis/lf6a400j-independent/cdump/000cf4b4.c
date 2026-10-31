
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cf4b4(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_2c [4];
  byte abStack_28 [4];
  undefined1 *local_24;
  
  local_24 = &v_Engine_Speed_2994;
  FUN_000ceaa8((int)DAT_ffff29a7,(int)_v_Engine_Speed_2994,(DAT_fffeef76 & 8) != 0,&DAT_ffff0f4a);
  FUN_000ceb84((int)_DAT_ffff09b8,(int)_v_Engine_Speed_2994);
  FUN_000d0048(_DAT_ffff169c,_DAT_ffff168c,(int)v_Vehicle_Speed_byte_65A1,
               (int)_v_Atmospheric_Pressure_E6AA,(int)DAT_fffee6a5,(int)DAT_ffff29a6,0,DAT_fffeed65,
               &DAT_ffff05bb,&DAT_ffff0f58);
  FUN_000d0214((int)_v_Engine_Speed_2994,(int)_DAT_ffff09b8,&DAT_ffff0f5a);
  FUN_000d0238((int)_v_Engine_Speed_2994,(int)_DAT_ffff09b8,&DAT_ffff0f5c);
  FUN_000ce8cc(_DAT_ffff169c,(int)_DAT_ffff0f4a,DAT_ffff05b9 & 1,(DAT_fffee710 & 0x20) != 0,
               _DAT_fffeecb0,DAT_ffff29a7,&DAT_ffff167c,local_2c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff05ba | 0x40;
  if ((local_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff05ba & 0xbf;
  }
  DAT_ffff05ba = bVar2;
  FUN_00001550(uVar1);
  FUN_000d0324((int)_DAT_ffff0f4c,(int)_v_Engine_Speed_2994,abStack_28);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff05ba | 0x80;
  if ((abStack_28[0] & 1) == 0) {
    bVar2 = DAT_ffff05ba & 0x7f;
  }
  DAT_ffff05ba = bVar2;
  FUN_00001550();
  FUN_000d025c(((int)DAT_ffff0519 & 0x80U) != 0,0,(int)_DAT_ffff0f5a,(int)_DAT_ffff0f5c,
               &DAT_ffff16a4);
  FUN_000cef4c((int)DAT_ffff29b7,(int)DAT_ffff29ba,(int)DAT_ffff2a04,
               ((int)(char)DAT_ffff05ba & 0x80U) != 0,(int)_DAT_ffff0f4c,_DAT_ffff09b8,_DAT_fffee6f8
               ,_v_Engine_Speed_2994,(DAT_fffeef76 & 0x40) != 0,&DAT_ffff05b4,&DAT_ffff05b5,
               &DAT_ffff05b6,&DAT_ffff05b7,&DAT_ffff05b8,&DAT_ffff0f50,&DAT_ffff0f52);
  return;
}

