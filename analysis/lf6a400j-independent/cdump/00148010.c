
/* WARNING: Removing unreachable block (ram,0x00148292) */
/* WARNING: Removing unreachable block (ram,0x00148298) */
/* WARNING: Removing unreachable block (ram,0x001482ae) */
/* WARNING: Removing unreachable block (ram,0x001482b4) */
/* WARNING: Removing unreachable block (ram,0x001482ba) */
/* WARNING: Removing unreachable block (ram,0x001482d6) */
/* WARNING: Removing unreachable block (ram,0x001482e0) */
/* WARNING: Removing unreachable block (ram,0x00148332) */
/* WARNING: Removing unreachable block (ram,0x0014833a) */
/* WARNING: Removing unreachable block (ram,0x0014834c) */
/* WARNING: Removing unreachable block (ram,0x00148354) */
/* WARNING: Removing unreachable block (ram,0x00148366) */
/* WARNING: Removing unreachable block (ram,0x00148382) */
/* WARNING: Removing unreachable block (ram,0x00148394) */
/* WARNING: Removing unreachable block (ram,0x00148378) */
/* WARNING: Removing unreachable block (ram,0x001481a6) */
/* WARNING: Removing unreachable block (ram,0x001481ac) */
/* WARNING: Removing unreachable block (ram,0x001481c2) */
/* WARNING: Removing unreachable block (ram,0x001481c8) */
/* WARNING: Removing unreachable block (ram,0x001481ce) */
/* WARNING: Removing unreachable block (ram,0x001481de) */
/* WARNING: Removing unreachable block (ram,0x001481e8) */
/* WARNING: Removing unreachable block (ram,0x00148218) */
/* WARNING: Removing unreachable block (ram,0x00148220) */
/* WARNING: Removing unreachable block (ram,0x00148232) */
/* WARNING: Removing unreachable block (ram,0x00148248) */
/* WARNING: Removing unreachable block (ram,0x00148244) */
/* WARNING: Removing unreachable block (ram,0x0014807a) */
/* WARNING: Removing unreachable block (ram,0x00148080) */
/* WARNING: Removing unreachable block (ram,0x00148094) */
/* WARNING: Removing unreachable block (ram,0x0014809a) */
/* WARNING: Removing unreachable block (ram,0x001480a0) */
/* WARNING: Removing unreachable block (ram,0x001480b0) */
/* WARNING: Removing unreachable block (ram,0x001480ba) */
/* WARNING: Removing unreachable block (ram,0x001480ea) */
/* WARNING: Removing unreachable block (ram,0x001480f2) */
/* WARNING: Removing unreachable block (ram,0x00148104) */
/* WARNING: Removing unreachable block (ram,0x0014811a) */
/* WARNING: Removing unreachable block (ram,0x00148116) */
/* WARNING: Removing unreachable block (ram,0x0014839c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00148010(void)

{
  DAT_ffff670d = 0;
  while( true ) {
    if (DAT_ffff670c <= DAT_ffff670d) {
      return;
    }
    if (*(char *)(_DAT_ffff6708 + 8 + (uint)DAT_ffff670d * 0x10) == '\x01') break;
    if ((*(char *)(_DAT_ffff6708 + 8 + (uint)DAT_ffff670d * 0x10) == '\x02') ||
       (*(char *)(_DAT_ffff6708 + 8 + (uint)DAT_ffff670d * 0x10) == '\x03')) {
      FUN_001490d4(1);
      (*(code *)(&PTR_LAB_00162570)
                [(uint)*(byte *)(_DAT_ffff6708 + 8 + (uint)DAT_ffff670d * 0x10) * 5])(0);
      do {
      } while( true );
    }
    if (*(char *)(_DAT_ffff6708 + 8 + (uint)DAT_ffff670d * 0x10) == '\x05') {
      FUN_001490d4(3);
      (*(code *)(&PTR_LAB_00162570)
                [(uint)*(byte *)(_DAT_ffff6708 + 8 + (uint)DAT_ffff670d * 0x10) * 5])(0);
      do {
      } while( true );
    }
    DAT_ffff670d = DAT_ffff670d + 1;
  }
  FUN_001490d4(0);
  (*(code *)(&PTR_LAB_00162570)[(uint)*(byte *)(_DAT_ffff6708 + 8 + (uint)DAT_ffff670d * 0x10) * 5])
            (0);
  do {
  } while( true );
}

