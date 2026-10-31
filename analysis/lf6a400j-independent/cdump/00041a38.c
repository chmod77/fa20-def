
/* WARNING: Removing unreachable block (ram,0x00041a70) */

byte FUN_00041a38(void)

{
  DAT_ffff2a3f = FUN_0016b9a4(&PTR_DAT_001639ec,(int)DAT_ffffab41);
  if (DAT_fffee6cf < DAT_ffff2a3f) {
    DAT_fffee6d2 = DAT_fffee6d2 | 0x40;
  }
  else {
    DAT_fffee6d2 = DAT_fffee6d2 & 0xbf;
  }
  DAT_fffee6d2 = DAT_fffee6d2 & 0xdf;
  return DAT_fffee6d2;
}

