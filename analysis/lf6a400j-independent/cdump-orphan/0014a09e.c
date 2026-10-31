
void FUN_0014a09e(void)

{
  byte bVar1;
  
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

