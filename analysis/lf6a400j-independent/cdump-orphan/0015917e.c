
void FUN_0015917e(void)

{
  byte bVar1;
  
  thunk_FUN_00141ebc();
  thunk_FUN_0015c9a0();
  thunk_FUN_001506a8();
  thunk_FUN_0014702c();
  FUN_00145dfc(0);
  thunk_FUN_0014034c();
  thunk_FUN_001415f0();
  FUN_00145b2e();
  FUN_00145b7c();
  FUN_00145ba4();
  FUN_00145bcc();
  FUN_00145c1e();
  FUN_00145c6c();
  FUN_00145c94();
  FUN_001607a8();
  FUN_00160782();
  FUN_0015ccd2();
  if ((DAT_ffff2087 & 0x40) == 0) {
    bVar1 = DAT_ffff2087 | 0x80;
    if (((int)DAT_ffff201b & 0x80U) == 0) {
      bVar1 = DAT_ffff2087 & 0x7f;
    }
    DAT_ffff2087 = bVar1 | 0x40;
  }
  if (-(uint)(((int)DAT_ffff201b & 0x80U) == 0) != -(uint)(((int)(char)DAT_ffff2087 & 0x80U) == 0))
  {
    FUN_0014cfb4();
  }
  bVar1 = DAT_ffff2087 | 0x80;
  if (((int)DAT_ffff201b & 0x80U) == 0) {
    bVar1 = DAT_ffff2087 & 0x7f;
  }
  DAT_ffff2087 = bVar1;
  return;
}

