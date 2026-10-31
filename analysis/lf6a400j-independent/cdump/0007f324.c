
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007f324(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_14 [8];
  
  FUN_0007f424((int)v_Vehicle_Speed_byte_65A1,(int)_v_Engine_Speed_2994,&DAT_ffff09d0);
  FUN_0007f71c((int)_DAT_ffff09d0,((int)(char)DAT_fffee710 & 0x80U) != 0,(int)DAT_fffef51a,
               &DAT_ffff03ae);
  FUN_0007f490((int)DAT_ffff03ae,(DAT_fffee710 & 0x20) != 0,((int)(char)DAT_fffee710 & 0x80U) != 0,
               &DAT_ffff03ac);
  FUN_0007f5e8((int)v_Vehicle_Speed_byte_65A1,(int)DAT_ffff66b0,(int)DAT_ffff03ae,&DAT_ffff03ad);
  FUN_0007f874((int)DAT_ffff03ac,((int)(char)DAT_fffee710 & 0x80U) != 0,0,DAT_ffff0002 & 1,
               (DAT_fffeef76 & 0x40) != 0,1,(DAT_ffff0004 & 0x20) != 0,local_14);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff03ab | 1;
  if ((local_14[0] & 1) == 0) {
    bVar2 = DAT_ffff03ab & 0xfe;
  }
  DAT_ffff03ab = bVar2;
  FUN_00001550(uVar1);
  return;
}

