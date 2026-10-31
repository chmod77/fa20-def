
void FUN_0015bbd8(void)

{
  DAT_ffff20c5 = DAT_fffff015;
  DAT_fffff014 = DAT_fffff014 & 0x9f;
  if (DAT_ffff20bc == 1) {
    DAT_ffff20c8 = DAT_fffff015;
    DAT_ffff20c9 = DAT_ffff20ca;
    DAT_ffff20bd = (undefined1)((int)(uint)DAT_ffff20c2 >> 4);
    FUN_0015baf0();
    FUN_0015bab4();
    FUN_0015bb10();
    DAT_ffff20c4 = DAT_ffff20c0;
    FUN_0015b75c();
    DAT_ffff20cc = DAT_ffff20cc | 0x10;
  }
  else if (DAT_ffff20bc == 2) {
    FUN_0015c1a4();
    FUN_0015c2e4();
  }
  else if (DAT_ffff20bc == 3) {
    DAT_ffff20c8 = DAT_fffff015;
    DAT_ffff20c9 = DAT_ffff20ca;
    FUN_0015c33e();
  }
  else if (DAT_ffff20bc == 4) {
    DAT_ffff20c2 = DAT_fffff015;
    FUN_0015c37e();
  }
  if (DAT_ffff20bc < 4) {
    DAT_ffff20bc = DAT_ffff20bc + 1;
  }
  else {
    DAT_ffff20bc = '\x01';
  }
  DAT_ffff20c7 = 0;
  DAT_fffff013 = DAT_ffff20c4;
  DAT_fffff014 = DAT_fffff014 & 0x7f;
  return;
}

