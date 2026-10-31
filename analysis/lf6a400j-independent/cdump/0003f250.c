
/* WARNING: Removing unreachable block (ram,0x0003f426) */
/* WARNING: Removing unreachable block (ram,0x0003f558) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003f250(void)

{
  char cVar1;
  byte bVar2;
  
  if ((DAT_fffef0e1 & 4) == 0) {
    bVar2 = DAT_fffef0e0 | 0x20;
    if ((DAT_ffff000d & 0x20) == 0) {
      bVar2 = DAT_fffef0e0 & 0xdf;
    }
    DAT_fffef0e1 = DAT_fffef0e1 | 4;
    DAT_fffef0e0 = bVar2;
  }
  if ((DAT_fffef050 & 1) != 0) {
    DAT_fffef8ab = 0;
    DAT_fffef8ac = 0;
    DAT_fffef8ad = 0;
    DAT_fffef8ae = 0;
  }
  if ((DAT_ffff000e & 1) == 0) {
    if ((DAT_fffef0df & 1) != 0) {
      DAT_fffef0e1 = DAT_fffef0e1 | 1;
    }
  }
  else {
    DAT_fffef0e1 = DAT_fffef0e1 & 0xfe;
  }
  if ((((((DAT_fffef371 & 4) == 0) || (DAT_ffff0901 != '\0')) || ((DAT_ffff000e & 1) != 0)) ||
      (((DAT_fffef0e1 & 1) == 0 || (DAT_fffef0e2 < 0x19)))) || (DAT_ffff299c < 0x14)) {
    DAT_fffef8aa = DAT_fffef8aa & 0xfe;
  }
  else {
    DAT_fffef8aa = DAT_fffef8aa | 1;
  }
  if ((DAT_fffef0e1 & 1) == 0) {
    DAT_fffef0e2 = 0;
  }
  else {
    DAT_fffef0e2 = FUN_0000152c(DAT_fffef0e2 + 1);
  }
  cVar1 = DAT_fffef8af;
  DAT_fffef8b0 = DAT_fffef8af;
  if (((_DAT_fffef0da == 0) && (0x17 < DAT_ffff299c)) && (DAT_ffff299c < 0x25)) {
    DAT_fffef8af = '\x01';
  }
  else if (((0x471 < _DAT_fffef0da) && (0x3f < DAT_ffff299c)) && (DAT_ffff299c < 0x51)) {
    DAT_fffef8af = '\x02';
  }
  if ((cVar1 == '\x01') && (DAT_fffef8af == '\x02')) {
    DAT_fffef0e1 = DAT_fffef0e1 | 2;
  }
  if (((int)DAT_fffee710 & 0x80U) == 0) {
    if ((DAT_fffef8aa & 1) != 0) {
      if (-(uint)((DAT_fffef0e0 & 0x20) == 0) == -(uint)((DAT_ffff000d & 0x20) == 0)) {
        if (((DAT_ffff059f == '\x05') || (DAT_ffff059f == '\a')) || ((DAT_ffff000d & 0x20) != 0)) {
          if (((DAT_ffff059f == '\x05') || (DAT_ffff059f == '\a')) && ((DAT_ffff000d & 0x20) != 0))
          goto LAB_0003f476;
        }
        else {
          DAT_fffef8aa = DAT_fffef8aa & 0xfd;
        }
      }
      else {
        DAT_fffef8aa = DAT_fffef8aa & 0xfd;
LAB_0003f476:
        DAT_fffef8aa = DAT_fffef8aa & 0xfb;
      }
    }
    if (((DAT_fffef8aa & 1) != 0) && (((int)DAT_fffeffe7 & 0x80U) == 0)) {
      if (((DAT_fffef8aa & 2) == 0) && ((DAT_fffef8aa & 4) == 0)) {
        DAT_fffef8ab = 0;
        DAT_fffef8aa = DAT_fffef8aa | 2;
LAB_0003f4ba:
        DAT_fffef8ac = 0;
        DAT_fffef8aa = DAT_fffef8aa | 4;
      }
      else if ((DAT_ffff000d & 0x20) == 0) {
        if ((DAT_fffef8aa & 2) == 0) {
          DAT_fffef8ab = 0;
          DAT_fffef8aa = DAT_fffef8aa | 2;
        }
        else {
          DAT_fffef8ab = FUN_0000152c(DAT_fffef8ab + 1);
        }
      }
      else {
        if ((DAT_fffef8aa & 4) == 0) goto LAB_0003f4ba;
        DAT_fffef8ac = FUN_0000152c(DAT_fffef8ac + 1);
      }
    }
    if ((DAT_fffef8aa & 1) == 0) goto LAB_0003f6a8;
    if (DAT_fffef8ab < 0x50) {
      if (DAT_fffef8ab == 0) {
        DAT_fffef8a7 = DAT_fffef8a7 & 0xf7;
        goto LAB_0003f526;
      }
    }
    else {
      DAT_fffef8a7 = DAT_fffef8a7 | 8;
LAB_0003f526:
      DAT_fffef964 = 1;
    }
    if (DAT_fffef8ac < 0x50) {
      if (DAT_fffef8ac != 0) goto LAB_0003f6a8;
      DAT_fffef8a7 = DAT_fffef8a7 & 0xef;
    }
    else {
      DAT_fffef8a7 = DAT_fffef8a7 | 0x10;
    }
    DAT_fffef965 = 1;
    goto LAB_0003f6a8;
  }
  if (((int)DAT_fffee710 & 0x80U) == 0) goto LAB_0003f6a8;
  if ((DAT_fffef8aa & 1) != 0) {
    if (-(uint)((DAT_fffef0e0 & 0x20) == 0) == -(uint)((DAT_ffff000d & 0x20) == 0)) {
      if (((DAT_fffef0e1 & 2) == 0) && ((DAT_ffff000d & 0x20) != 0)) {
        DAT_fffef8ae = FUN_0000152c(DAT_fffef8ae + 1);
      }
      else if (((DAT_fffef0e1 & 2) == 0) && ((DAT_ffff000d & 0x20) == 0)) {
        DAT_fffef8ad = FUN_0000152c(DAT_fffef8ad + 1);
      }
    }
    else {
      DAT_fffef8ae = 0;
      DAT_fffef8ad = 0;
    }
  }
  if (((DAT_fffef8aa & 1) == 0) || (DAT_fffef8ae < 3)) {
    if ((DAT_ffff000d & 0x20) == 0) {
      DAT_fffef8a7 = DAT_fffef8a7 & 0xef;
      goto LAB_0003f672;
    }
  }
  else {
    DAT_fffef8a7 = DAT_fffef8a7 | 0x10;
LAB_0003f672:
    DAT_fffef965 = 1;
  }
  if (((DAT_fffef8aa & 1) == 0) || (DAT_fffef8ad < 3)) {
    if ((DAT_ffff000d & 0x20) == 0) goto LAB_0003f6a8;
    DAT_fffef8a7 = DAT_fffef8a7 & 0xf7;
  }
  else {
    DAT_fffef8a7 = DAT_fffef8a7 | 8;
  }
  DAT_fffef964 = 1;
LAB_0003f6a8:
  bVar2 = DAT_fffef0df | 1;
  if ((DAT_ffff000e & 1) == 0) {
    bVar2 = DAT_fffef0df & 0xfe;
  }
  DAT_fffef0df = bVar2;
  bVar2 = DAT_fffef0e0 | 0x20;
  if ((DAT_ffff000d & 0x20) == 0) {
    bVar2 = DAT_fffef0e0 & 0xdf;
  }
  DAT_fffef0e0 = bVar2;
  return;
}

