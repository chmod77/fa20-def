
void FUN_00156342(void)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = DAT_ffff2985 | 0x40;
  if (((int)DAT_ffff2b64 & 0x80U) == 0) {
    bVar1 = DAT_ffff2985 & 0xbf;
  }
  bVar2 = bVar1 | 0x80;
  if ((DAT_ffff2c08 & 4) == 0) {
    bVar2 = bVar1 & 0x7f;
  }
  DAT_ffff2985 = bVar2 | 0x20;
  if ((DAT_ffff2c08 & 1) == 0) {
    DAT_ffff2985 = bVar2 & 0xdf;
  }
  DAT_ffff2ad2 = DAT_ffff2b6e;
  bVar1 = DAT_ffff077e | 0x80;
  if ((DAT_ffff2b7c & 0x40) == 0) {
    bVar1 = DAT_ffff077e & 0x7f;
  }
  DAT_ffff2adf = DAT_ffff2b65;
  DAT_ffff2ae0 = DAT_ffff363c;
  DAT_ffff077e = bVar1;
  DAT_fffef5aa = FUN_00142836(0);
  DAT_fffef5ab = FUN_00142836(1);
  DAT_fffef5a7 = FUN_00142836(2);
  DAT_fffef5a8 = FUN_00142836(3);
  return;
}

