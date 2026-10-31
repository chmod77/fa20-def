
/* WARNING: Removing unreachable block (ram,0x0013d646) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0013d600(void)

{
  int iVar1;
  uint in_sr;
  
  iVar1 = FUN_0013d1a0(4);
  in_sr = in_sr & 0xfffffffe;
  if (iVar1 == 0) {
    iVar1 = FUN_0013d1be();
    if ((iVar1 == 0) != 0) {
      if (_DAT_ffff2630 == _DAT_ffff2632) {
        return iVar1;
      }
      if ((_DAT_ffff2634 & 0x1000) != 0) {
        return iVar1;
      }
      _DAT_ffff2634 = 0x100;
      FUN_0013d754(&DAT_ffff262c,in_sr & 0xfffffffe | (uint)(iVar1 == 0),_DAT_ffff2644);
      return iVar1;
    }
  }
  FUN_0013d054(iVar1,4,_DAT_ffff2634);
  return iVar1;
}

