
void FUN_00150f20(void)

{
  char cVar1;
  
  DAT_ffffabb0 = DAT_ffffabb0 & 0xfe;
  FUN_0006f424();
  FUN_0006b1de();
  FUN_0006b132();
  cVar1 = FUN_00001d20();
  if (cVar1 == '\x01') {
    FUN_000018f0(&DAT_00162a4c);
    FUN_000018f0(&DAT_00162cdc);
    FUN_000018f0(&DAT_00162cfc);
    FUN_000018f0(&DAT_00162b3c);
    FUN_00159024();
    thunk_FUN_00147070();
    FUN_0015bf84();
    FUN_000018f0(&DAT_00162d0c);
    FUN_000018f0(&DAT_0016374c);
    FUN_000018f0(&DAT_00162c9c);
    FUN_00160edc();
  }
  else {
    FUN_000018f0();
    FUN_000018f0(&DAT_00162cdc);
    FUN_000018f0(&DAT_00162cfc);
    FUN_000018f0(&DAT_00162b3c);
    FUN_00159024();
    thunk_FUN_00147070();
    FUN_0015b51c();
    FUN_000018f0(&DAT_00162d0c);
    FUN_000018f0(&DAT_0016374c);
    FUN_000018f0(&DAT_00162c9c);
    FUN_00160edc();
    if ((DAT_ffff2fe1 & 1) == 0) goto LAB_00150fde;
  }
  FUN_0015108c();
LAB_00150fde:
  thunk_FUN_0006b0fe();
  FUN_00142b2a();
  thunk_FUN_0014f5a8();
  thunk_FUN_001507aa();
  FUN_0015aae0(1);
  FUN_00145dfc(0);
  thunk_FUN_0015ae78();
  FUN_00005d10();
  FUN_001492ec();
  return;
}

