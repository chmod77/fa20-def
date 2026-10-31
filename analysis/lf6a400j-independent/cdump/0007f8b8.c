
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007f8b8(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_10 [4];
  byte abStack_c [8];
  
  FUN_0007f968((DAT_fffef152 & 0x20) != 0,local_10);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_fffee710 | 0x20;
  if ((local_10[0] & 1) == 0) {
    bVar2 = DAT_fffee710 & 0xdf;
  }
  DAT_fffee710 = bVar2;
  FUN_00001550(uVar1);
  FUN_0007f96c((int)_DAT_ffff29b4,(int)_v_Engine_Speed_2994,(int)_DAT_fffeeede,
               (int)_v_Atmospheric_Pressure_E6AA,DAT_ffff0541,DAT_ffff29bb,abStack_c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_fffee710 | 0x10;
  if ((abStack_c[0] & 1) == 0) {
    bVar2 = DAT_fffee710 & 0xef;
  }
  DAT_fffee710 = bVar2;
  FUN_00001550(uVar1);
  return;
}

