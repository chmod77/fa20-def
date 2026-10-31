
/* WARNING: Removing unreachable block (ram,0x0003d2ea) */
/* WARNING: Removing unreachable block (ram,0x0003d30e) */
/* WARNING: Removing unreachable block (ram,0x0003d314) */
/* WARNING: Removing unreachable block (ram,0x0003d320) */
/* WARNING: Removing unreachable block (ram,0x0003d33e) */
/* WARNING: Removing unreachable block (ram,0x0003d344) */
/* WARNING: Removing unreachable block (ram,0x0003d36e) */
/* WARNING: Removing unreachable block (ram,0x0003d374) */
/* WARNING: Removing unreachable block (ram,0x0003d380) */
/* WARNING: Removing unreachable block (ram,0x0003d388) */
/* WARNING: Removing unreachable block (ram,0x0003d390) */
/* WARNING: Removing unreachable block (ram,0x0003d3b4) */
/* WARNING: Removing unreachable block (ram,0x0003d39c) */
/* WARNING: Removing unreachable block (ram,0x0003d2c2) */
/* WARNING: Removing unreachable block (ram,0x0003d2f0) */
/* WARNING: Removing unreachable block (ram,0x0003d2fc) */
/* WARNING: Removing unreachable block (ram,0x0003d3ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003d2b4(void)

{
  byte bVar1;
  
  DAT_fffef0d6 = DAT_fffef0d6 | 1;
  DAT_fffef0d7 = DAT_fffef0d7 | 3;
  FUN_0005dea8();
  if ((DAT_fffef0d7 & 2) == 0) {
    _DAT_fffef65c = _DAT_fffef65c & 0xffffffbf;
  }
  else {
    _DAT_fffef65c = _DAT_fffef65c | 0x40;
  }
  if ((DAT_fffef0d6 & 1) == 0) {
    _DAT_fffef680 = _DAT_fffef680 & 0xfffffffe;
  }
  else {
    _DAT_fffef680 = _DAT_fffef680 | 1;
  }
  if ((DAT_fffef0d7 & 1) == 0) {
    _DAT_fffef680 = _DAT_fffef680 & 0xfffffffd;
  }
  else {
    _DAT_fffef680 = _DAT_fffef680 | 2;
  }
  bVar1 = DAT_ffff03e8 | 0x10;
  if ((DAT_fffef676 & 1) == 0) {
    bVar1 = DAT_ffff03e8 & 0xef;
  }
  DAT_ffff03e8 = bVar1 | 0x20;
  if ((_DAT_fffef65c & 0x40) == 0) {
    DAT_ffff03e8 = bVar1 & 0xdf;
  }
  DAT_ffff2fe5 = DAT_ffff313d;
  DAT_ffff2fe6 = DAT_ffff313e;
  DAT_ffff2fe7 = DAT_ffff313b;
  return;
}

