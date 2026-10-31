
void FUN_0015c088(void)

{
  if ((DAT_ffff20ce & 4) != 0) {
    DAT_ffff20c0 = 0x18;
    return;
  }
  if ((DAT_ffff20ce & 2) != 0) {
    DAT_ffff20c0 = 0x13;
    DAT_ffff20ce = DAT_ffff20ce | 4;
    DAT_ffff20cb = 1;
    return;
  }
  DAT_ffff20be = 10;
  DAT_ffff20bf = 0xb;
  DAT_ffff20c0 = 0x12;
  DAT_ffff20ce = DAT_ffff20ce | 2;
  return;
}

