
/* WARNING: Removing unreachable block (ram,0x0004914e) */
/* WARNING: Removing unreachable block (ram,0x00049158) */
/* WARNING: Removing unreachable block (ram,0x00049162) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000490cc(void)

{
  uint uVar1;
  
  if (((((int)(char)DAT_fffef939 & 0x80U) != 0) &&
      ((((0x17 < DAT_ffff069d || (0x17 < DAT_ffff069e)) || (0x17 < DAT_ffff069f)) ||
       (0x17 < DAT_ffff06a0)))) &&
     ((((_DAT_ffff105c < 0xe667 && (_DAT_ffff105e < 0xe667)) && (_DAT_ffff1060 < 0xe667)) &&
      (_DAT_ffff1062 < 0xe667)))) {
    DAT_fffef939 = DAT_fffef939 | 8;
  }
  uVar1 = (uint)DAT_fffef93a;
  if ((((uVar1 & 0x80) != 0) && (_DAT_ffff1054 < 0xe667)) &&
     ((_DAT_ffff1056 < 0xe667 && ((_DAT_ffff1058 < 0xe667 && (_DAT_ffff105a < 0xe667)))))) {
    uVar1 = (int)DAT_fffef93a | 8;
    DAT_fffef93a = (char)uVar1;
  }
  return uVar1;
}

