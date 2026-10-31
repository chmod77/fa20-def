
void FUN_0015b856(void)

{
  if (DAT_ffff20bd != DAT_ffff20be) {
    DAT_ffff20bf = DAT_ffff20bf + '\x03';
    DAT_ffff3650 = DAT_ffff3650 + '\x01';
    return;
  }
  DAT_ffff20bf = DAT_ffff20bf + -1;
  DAT_ffff20be = DAT_ffff20bd + -1;
  DAT_ffff20c0 = 0x13;
  DAT_ffff20ce = DAT_ffff20ce | 4;
  DAT_ffff20cb = 1;
  return;
}

