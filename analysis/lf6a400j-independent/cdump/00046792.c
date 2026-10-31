
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00046792(void)

{
  byte bVar1;
  
  if ((DAT_fffef53d & 1) == 0) {
    if ((DAT_fffef53d & 8) == 0) {
      DAT_fffef53c = (byte)((ushort)_DAT_ffff3542 >> 8);
      if (((DAT_ffff6569 & 0x20) == 0) || (DAT_fffef5af == '\x03')) {
        DAT_fffef53c = FUN_0016bd28(DAT_fffef53c - 1);
      }
      else {
        bVar1 = FUN_0000152c(0x13);
        DAT_fffef53c = FUN_0000152c(DAT_fffef53c + 3);
        if (bVar1 < DAT_fffef53c) {
          DAT_fffef53c = bVar1;
        }
      }
      _DAT_ffff3542 = (ushort)DAT_fffef53c << 8;
      FUN_001403b4(0x21,1);
    }
    else {
      FUN_0004689c();
    }
    DAT_fffef53d = DAT_fffef53d | 1;
  }
  if (((DAT_fffeff5b & 1) == 0) && (DAT_fffeff5d != '\0')) {
    if ((DAT_fffef53d & 2) == 0) {
      if (DAT_fffef53c < 0x10) {
        DAT_fffef732 = DAT_fffef732 & 0x7f;
      }
      else {
        DAT_fffef732 = DAT_fffef732 | 0x80;
      }
      DAT_fffef780 = DAT_fffef780 | 0x80;
      DAT_fffef3cb = 1;
      DAT_fffef53d = DAT_fffef53d | 2;
    }
  }
  else {
    DAT_fffef732 = DAT_fffef732 & 0x7f;
  }
  return;
}

