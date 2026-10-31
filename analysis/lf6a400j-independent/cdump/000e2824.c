
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e2824(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_c [8];
  
  FUN_000e37c4(_DAT_ffff3b18,&DAT_ffff10e2);
  FUN_000e3764((DAT_ffff06d5 & 2) != 0,(int)_DAT_ffff10e2,(int)_v_Alternator_Duty_10D6,
               (int)_DAT_fffef0a4,_DAT_fffeef12,_DAT_ffff3b18,&DAT_ffff3b18);
  FUN_000e3a5c(_DAT_ffff3b18,local_c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff06d5 | 2;
  if ((local_c[0] & 1) == 0) {
    bVar2 = DAT_ffff06d5 & 0xfd;
  }
  DAT_ffff06d5 = bVar2;
  FUN_00001550(uVar1);
  return;
}

