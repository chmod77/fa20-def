
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000dcb00(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_20 [8];
  
  FUN_000dadb8((int)_DAT_ffff0ff0,DAT_ffff07db & 1,(DAT_fffeeec2 & 4) != 0,(int)_DAT_ffff3936,
               &DAT_ffff3936);
  FUN_000dadf8(((int)DAT_ffff06bf & 0x80U) != 0,(int)DAT_ffff36a3);
  FUN_000dae74((int)_DAT_ffff0ff2,DAT_ffff07db & 1,(DAT_fffeeec2 & 4) != 0,(int)_DAT_ffff393a,
               &DAT_ffff393a);
  FUN_000daeb4(((int)DAT_ffff06bf & 0x80U) != 0,(int)DAT_ffff36a5);
  FUN_000daf30((int)_DAT_ffff0ff4,DAT_ffff07db & 1,(DAT_fffeeec2 & 4) != 0,(int)_DAT_ffff393e,
               &DAT_ffff393e);
  FUN_000daf70(((int)DAT_ffff06bf & 0x80U) != 0,(int)DAT_ffff36a7);
  FUN_000dafec((int)_DAT_ffff0ff6,DAT_ffff07db & 1,(DAT_fffeeec2 & 4) != 0,(int)_DAT_ffff3942,
               &DAT_ffff3942);
  FUN_000db02c(((int)DAT_ffff06bf & 0x80U) != 0,(int)DAT_ffff36a9);
  FUN_000db0a8((int)_DAT_ffff0ff8,DAT_ffff07db & 1,(DAT_fffeeec2 & 4) != 0,(int)_DAT_ffff3946,
               &DAT_ffff3946);
  FUN_000db0e8(((int)DAT_ffff06bf & 0x80U) != 0,(int)DAT_ffff36ab);
  FUN_000dae08((int)_DAT_ffff3936,DAT_ffff36ad & 1,(DAT_fffeeec2 & 2) != 0,(int)_DAT_ffff3938,
               &DAT_ffff3938);
  FUN_000daec4((int)_DAT_ffff393a,DAT_ffff36ad & 1,(DAT_fffeeec2 & 2) != 0,(int)_DAT_ffff393c,
               &DAT_ffff393c);
  FUN_000daf80((int)_DAT_ffff393e,DAT_ffff36ad & 1,(DAT_fffeeec2 & 2) != 0,(int)_DAT_ffff3940,
               &DAT_ffff3940);
  FUN_000db03c((int)_DAT_ffff3942,DAT_ffff36ad & 1,(DAT_fffeeec2 & 2) != 0,(int)_DAT_ffff3944,
               &DAT_ffff3944);
  FUN_000db0f8((int)_DAT_ffff3946,DAT_ffff36ad & 1,(DAT_fffeeec2 & 2) != 0,(int)_DAT_ffff3948,
               &DAT_ffff3948);
  FUN_000dae64(((int)DAT_ffff06bf & 0x80U) != 0,(int)_DAT_ffff3938,(int)DAT_ffff36a4,&DAT_ffff36a4);
  FUN_000daf20(((int)DAT_ffff06bf & 0x80U) != 0,(int)_DAT_ffff393c,(int)DAT_ffff36a6,&DAT_ffff36a6);
  FUN_000dafdc(((int)DAT_ffff06bf & 0x80U) != 0,(int)_DAT_ffff3940,(int)DAT_ffff36a8,&DAT_ffff36a8);
  FUN_000db098(((int)DAT_ffff06bf & 0x80U) != 0,(int)_DAT_ffff3944,(int)DAT_ffff36aa,&DAT_ffff36aa);
  FUN_000db154(((int)DAT_ffff06bf & 0x80U) != 0,(int)_DAT_ffff3948,(int)DAT_ffff36ac,&DAT_ffff36ac);
  local_20[0] = DAT_ffff36ad & 1;
  FUN_000df84c(DAT_ffff07db & 1,local_20[0],(DAT_fffeeec2 & 4) != 0,(int)DAT_ffff36a4,DAT_ffff36a6,
               DAT_ffff36a8,DAT_ffff36aa,DAT_ffff36ac,(DAT_fffeeec2 & 2) != 0,local_20);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff36ad | 1;
  if ((local_20[0] & 1) == 0) {
    bVar2 = DAT_ffff36ad & 0xfe;
  }
  DAT_ffff36ad = bVar2;
  FUN_00001550(uVar1);
  return;
}

