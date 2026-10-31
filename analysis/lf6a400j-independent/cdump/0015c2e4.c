
void FUN_0015c2e4(void)

{
  uint uVar1;
  byte bVar2;
  
  if (DAT_ffff20db == '\0') {
    DAT_ffff20dc = DAT_ffff20d9;
    uVar1 = (uint)DAT_ffff20d9;
    bVar2 = 0x40;
  }
  else if (DAT_ffff20db == '\x01') {
    DAT_ffff20dd = DAT_ffff20da;
    uVar1 = (uint)DAT_ffff20da;
    bVar2 = 0x50;
  }
  else if (DAT_ffff20db == '\x02') {
    DAT_ffff20de = 0;
    uVar1 = 0;
    bVar2 = 0x60;
  }
  else {
    uVar1 = 0;
    bVar2 = 0x70;
    DAT_ffff20df = DAT_ffff20db == '\x02';
  }
  DAT_ffff20c4 = bVar2 | (byte)((int)(uVar1 & 0xf0) >> 4);
  return;
}

