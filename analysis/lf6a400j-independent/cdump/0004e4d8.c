
/* WARNING: Removing unreachable block (ram,0x0004e51c) */

uint FUN_0004e4d8(void)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = FUN_0016b404((int)DAT_ffff0589,7,1,((int)(char)DAT_fffef0d5 & 0x80U) != 0);
  bVar2 = DAT_fffef0d5 | 0x80;
  if ((uVar1 & 1) == 0) {
    bVar2 = DAT_fffef0d5 & 0x7f;
  }
  DAT_fffef0d5 = bVar2;
  if (((DAT_fffef09e & 8) == 0) && ((DAT_fffef063 & 1) == 0)) {
    uVar1 = (int)(char)DAT_fffef09e & 0xfe;
    DAT_fffef09e = (byte)uVar1;
  }
  else {
    uVar1 = (int)(char)DAT_fffef09e | 1;
    DAT_fffef09e = (byte)uVar1;
  }
  return uVar1;
}

