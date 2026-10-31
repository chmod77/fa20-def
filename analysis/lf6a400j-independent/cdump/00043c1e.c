
/* WARNING: Removing unreachable block (ram,0x00043ca2) */
/* WARNING: Removing unreachable block (ram,0x00043cde) */
/* WARNING: Removing unreachable block (ram,0x00043cca) */
/* WARNING: Removing unreachable block (ram,0x00043cd0) */
/* WARNING: Removing unreachable block (ram,0x00043cd6) */

void FUN_00043c1e(void)

{
  byte bVar1;
  byte bVar2;
  
  if (((((int)DAT_ffff2985 & 0x80U) != 0) && (DAT_ffff08e0 == '\0')) && ((DAT_fffef371 & 4) != 0)) {
    DAT_fffefa07 = DAT_fffefa07 & 0xfb;
    DAT_fffefa0c = FUN_0000152c(DAT_fffefa0c + 1);
    if (DAT_fffefa0c < 0x14) {
      DAT_fffefa07 = DAT_fffefa07 & 0xfd;
    }
    else {
      if ((DAT_fffefa07 & 2) == 0) {
        DAT_fffefa0b = 0;
      }
      DAT_fffefa07 = DAT_fffefa07 | 2;
    }
    if ((DAT_fffefa09 & 1) != 0) {
      bVar2 = DAT_fffefa06;
      bVar1 = DAT_fffefa0a;
      if (DAT_fffefa06 < DAT_fffefa0a) {
        bVar2 = DAT_fffefa0a;
        bVar1 = DAT_fffefa06;
      }
      if ((byte)(bVar2 - bVar1) == '\x01') {
        DAT_fffefa07 = DAT_fffefa07 & 0xdf;
        DAT_fffefa0e = FUN_0000152c(DAT_fffefa0e + 1);
        if (DAT_fffefa0e < 0x14) {
          DAT_fffefa07 = DAT_fffefa07 & 0x7f;
        }
        else {
          if (((int)(char)DAT_fffefa07 & 0x80U) == 0) {
            DAT_fffefa0d = 0;
          }
          DAT_fffefa07 = DAT_fffefa07 | 0x80;
        }
      }
      else {
        DAT_fffefa07 = DAT_fffefa07 | 0x20;
        DAT_fffefa0d = FUN_0000152c(DAT_fffefa0d + 1);
        if (DAT_fffefa0d < 10) {
          DAT_fffefa07 = DAT_fffefa07 & 0xbf;
        }
        else {
          if ((DAT_fffefa07 & 0x40) == 0) {
            DAT_fffefa0e = 0;
          }
          DAT_fffefa07 = DAT_fffefa07 | 0x40;
        }
      }
    }
  }
  if (((DAT_fffefa07 & 1) != 0) || ((DAT_fffefa07 & 0x40) != 0)) {
    DAT_fffefa08 = DAT_fffefa08 | 1;
    DAT_fffefa0f = 1;
  }
  if (((DAT_fffefa07 & 2) != 0) && (((int)(char)DAT_fffefa07 & 0x80U) != 0)) {
    DAT_fffefa08 = DAT_fffefa08 & 0xfe;
    DAT_fffefa0f = 1;
  }
  DAT_fffefa0a = DAT_fffefa06;
  bVar2 = DAT_fffefa09 | 1;
  if (((int)DAT_ffff2985 & 0x80U) == 0) {
    bVar2 = DAT_fffefa09 & 0xfe;
  }
  DAT_fffefa09 = bVar2;
  return;
}

