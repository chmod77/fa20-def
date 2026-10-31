
/* WARNING: Removing unreachable block (ram,0x0003f6fe) */
/* WARNING: Removing unreachable block (ram,0x0003f704) */

uint FUN_0003f6e8(void)

{
  uint uVar1;
  
  if (((int)DAT_fffee68d & 0x20U) == 0) {
    return (int)DAT_fffee68d;
  }
  DAT_fffefa11 = DAT_ffff2a0e;
  if (DAT_ffff2a0e < 0xee) {
    DAT_ffff2a03 = DAT_ffff2a03 & 0xdf;
  }
  else {
    DAT_ffff2a03 = DAT_ffff2a03 | 0x20;
  }
  if (DAT_ffff2a0e < 0xb) {
    DAT_ffff2a03 = DAT_ffff2a03 | 0x40;
  }
  else {
    DAT_ffff2a03 = DAT_ffff2a03 & 0xbf;
  }
  uVar1 = (uint)DAT_fffef371;
  if ((uVar1 & 2) == 0) {
    DAT_fffef721 = 0;
    return uVar1;
  }
  if (DAT_ffff08fe != '\0') {
    DAT_fffef721 = 0;
    return uVar1;
  }
  if ((DAT_ffff2a03 & 0x20) == 0) {
    DAT_fffef73b = DAT_fffef73b & 0xef;
LAB_0003f78c:
    DAT_fffef7c5 = DAT_fffef7c5 | 0x80;
    DAT_fffefa12 = 1;
  }
  else if (99 < DAT_fffef721) {
    DAT_fffef720 = DAT_fffef720 | 0x80;
    DAT_fffef73b = DAT_fffef73b | 0x10;
    goto LAB_0003f78c;
  }
  if ((DAT_ffff2a03 & 0x40) == 0) {
    DAT_fffef73b = DAT_fffef73b & 0xdf;
  }
  else {
    if (DAT_fffef721 < 100) goto LAB_0003f7e0;
    DAT_fffef720 = DAT_fffef720 | 0x80;
    DAT_fffef73b = DAT_fffef73b | 0x20;
  }
  DAT_fffef7c6 = DAT_fffef7c6 | 0x80;
  DAT_fffefa13 = 1;
LAB_0003f7e0:
  if (((DAT_ffff2a03 & 0x40) == 0) && (((int)(char)DAT_ffff2a03 & 0x20U) == 0)) {
    DAT_fffefa11 = DAT_ffff2a0e;
    DAT_fffef721 = 0;
    return (int)(char)DAT_ffff2a03;
  }
  uVar1 = FUN_0000152c(DAT_fffef721 + 1);
  DAT_fffef721 = (char)uVar1;
  return uVar1;
}

