
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0010d260(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_8 [8];
  
  FUN_0010ad40((int)_DAT_fffeeed0,(int)_v_Coolant_Temperature_OBD_F322,0,0,DAT_fffef210 & 1,
               (DAT_fffef937 & 2) != 0,DAT_ffff36d3,&DAT_ffff36d3,local_8);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff07d3 | 1;
  if ((local_8[0] & 1) == 0) {
    bVar2 = DAT_ffff07d3 & 0xfe;
  }
  DAT_ffff07d3 = bVar2;
  uVar1 = FUN_00001550(uVar1);
  return uVar1;
}

