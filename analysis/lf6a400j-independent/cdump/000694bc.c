
/* WARNING: Removing unreachable block (ram,0x00069686) */
/* WARNING: Removing unreachable block (ram,0x00069630) */
/* WARNING: Removing unreachable block (ram,0x000695be) */
/* WARNING: Removing unreachable block (ram,0x00069552) */
/* WARNING: Removing unreachable block (ram,0x00069584) */
/* WARNING: Removing unreachable block (ram,0x000695f6) */
/* WARNING: Removing unreachable block (ram,0x0006965c) */
/* WARNING: Removing unreachable block (ram,0x000696c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000694bc(void)

{
  if (0x4a < DAT_ffffab41) {
    if ((_DAT_ffff008e < 0x3c) && (DAT_ffff0356 != '\0')) {
      if (_DAT_ffff037c < 0xff) {
        _DAT_ffff037c = _DAT_ffff037c + 1;
      }
      else {
        DAT_fffef737 = DAT_fffef737 | 0x10;
        DAT_fffef7a5 = DAT_fffef7a5 | 0x80;
      }
    }
    else {
      _DAT_ffff037c = 0;
    }
    if (((DAT_fffefff7 & 1) == 0) && ((DAT_fffefff7 & 2) == 0)) {
      DAT_ffff037e = 0;
    }
    else {
      DAT_fffef737 = DAT_fffef737 | 0x20;
      DAT_fffef7a6 = DAT_fffef7a6 | 0x80;
    }
    if (DAT_ffff0084 == '\0') {
      DAT_ffff037f = 0;
    }
    else {
      DAT_fffef737 = DAT_fffef737 | 0x40;
      DAT_fffef7a7 = DAT_fffef7a7 | 0x80;
    }
  }
  if ((DAT_fffefff3 & 4) == 0) {
    DAT_ffff0380 = 0;
  }
  else {
    DAT_fffef739 = DAT_fffef739 | 0x10;
    DAT_fffef7b5 = DAT_fffef7b5 | 0x80;
  }
  if ((DAT_fffefff3 & 2) == 0) {
    DAT_ffff0381 = 0;
  }
  else {
    DAT_fffef739 = DAT_fffef739 | 0x20;
    DAT_fffef7b6 = DAT_fffef7b6 | 0x80;
  }
  if ((DAT_fffefff6 & 2) == 0) {
    DAT_ffff0382 = 0;
  }
  else {
    DAT_fffef739 = DAT_fffef739 | 0x40;
    DAT_fffef7b7 = DAT_fffef7b7 | 0x80;
  }
  if ((DAT_fffeffed & 4) == 0) {
    DAT_ffff0383 = 0;
  }
  else {
    DAT_fffef910 = DAT_fffef910 | 0x10;
  }
  if ((DAT_fffeffed & 2) == 0) {
    DAT_ffff0384 = 0;
  }
  else {
    DAT_fffef910 = DAT_fffef910 | 0x20;
  }
  if ((DAT_fffefff1 & 4) == 0) {
    DAT_ffff0385 = 0;
    return;
  }
  DAT_fffef738 = DAT_fffef738 | 0x40;
  DAT_fffef7af = DAT_fffef7af | 0x80;
  return;
}

