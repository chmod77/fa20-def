
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cf6d4(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_20 [4];
  undefined1 *local_1c;
  
  local_1c = &DAT_ffff04fa;
  FUN_000d038c((int)DAT_ffff66b0,(int)_v_Engine_Speed_2994,local_20);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff05b9 | 1;
  if ((local_20[0] & 1) == 0) {
    bVar2 = DAT_ffff05b9 & 0xfe;
  }
  DAT_ffff05b9 = bVar2;
  FUN_00001550(uVar1);
  FUN_000ced18(_DAT_ffff1688,(int)_v_Engine_Speed_2994,(DAT_fffee710 & 0x20) != 0,(int)_DAT_ffff0d08
               ,(int)v_Vehicle_Speed_byte_65A1,DAT_ffff05b4,DAT_fffeed65,_DAT_ffff0d06,
               DAT_ffff05b9 & 1,&DAT_ffff0f4e,&DAT_ffff05b3);
  FUN_000cfaf0(_DAT_ffff1694,_DAT_ffff168c,_DAT_ffff167c,_DAT_fffeecb0,(int)_DAT_fffee6f8,
               DAT_ffff05b9 & 1,(int)DAT_ffff05bb,&DAT_ffff168c,&DAT_ffff1690);
  FUN_000cf97c(_DAT_ffff1684,(int)_DAT_ffff0f4e,(int)_DAT_ffff0d66,_DAT_ffff16a0,(int)DAT_ffff04fa,
               DAT_ffff05b9 & 1,&DAT_ffff1684);
  FUN_000cfc88(_DAT_ffff168c,_DAT_ffff1688,(int)DAT_ffff05bb,(int)_DAT_ffff09c2,DAT_ffff05b9 & 1);
  FUN_000cf8c8(_DAT_ffff1694,_DAT_ffff169c,_DAT_ffff1680,_DAT_ffff167c,DAT_ffff05b9 & 1,
               (int)_DAT_fffee6f8,(int)_DAT_ffff0f4e,(DAT_fffef32c & 2) != 0,
               (DAT_fffef32e & 0x20) != 0,(DAT_fffef32e & 0x40) != 0,_DAT_ffff09b8,&DAT_ffff1680);
  FUN_000cff64(_DAT_ffff1684,_DAT_ffff16a4,(int)_v_Engine_Speed_2994,(int)DAT_fffeed65,
               DAT_ffff05b9 & 1,&DAT_ffff16a0);
  FUN_000cfa7c(_DAT_ffff1680,&DAT_ffff0f54);
  FUN_000cfac8(_DAT_ffff1680,_DAT_ffff1684,&DAT_ffff1688);
  FUN_000cfedc(_DAT_ffff1680,_DAT_ffff16a4,(int)_v_Engine_Speed_2994,(int)DAT_fffeed65,
               DAT_ffff05b9 & 1,&DAT_ffff169c);
  FUN_000cfe80(_DAT_ffff169c,&DAT_ffff1698);
  FUN_000cfe6c(_DAT_ffff1698,&DAT_ffff0f56);
  return;
}

