
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0006e708(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = DAT_fffeebb8;
  if (((DAT_fffeebb6 & 1) != 0) && (bVar1 = DAT_fffeebb8 | 0x80, (DAT_fffeebb6 & 0x10) == 0)) {
    bVar1 = DAT_fffeebb8 & 0x7f;
  }
  DAT_fffeebb8 = bVar1;
  bVar1 = DAT_fffeebb9;
  if (((DAT_fffeebb7 & 1) != 0) && (bVar1 = DAT_fffeebb9 | 0x80, (DAT_fffeebb7 & 0x10) == 0)) {
    bVar1 = DAT_fffeebb9 & 0x7f;
  }
  DAT_fffeebb9 = bVar1;
  DAT_fffeebb6 = DAT_fffeebb6 & 0xa8;
  uVar2 = (int)(char)(DAT_fffeebb7 & 0xa9) & 0xfe;
  DAT_fffeebb7 = (byte)uVar2;
  DAT_fffeec34 = 0;
  DAT_fffeec4a = 0;
  _DAT_fffeec4c = 0;
  DAT_fffeec4e = 0;
  DAT_fffeec4f = 0;
  _DAT_fffeec50 = 0;
  DAT_fffeec52 = 0;
  uVar3 = 0;
  while ((uVar3 & 0xff) < 7) {
    uVar3 = uVar3 & 0xff;
    *(undefined1 *)(uVar3 - 0x113cb) = 0;
    *(undefined1 *)(uVar3 - 0x113c4) = 0;
    *(undefined1 *)(uVar3 - 0x113bd) = 0;
    uVar2 = uVar3 + 1;
    uVar3 = uVar2;
  }
  return uVar2;
}

