
void FUN_0015c33e(void)

{
  byte bVar1;
  byte bVar2;
  
  if (DAT_ffff20db == '\0') {
    bVar2 = 0x80;
    bVar1 = DAT_ffff20dc;
  }
  else if (DAT_ffff20db == '\x01') {
    bVar2 = 0x90;
    bVar1 = DAT_ffff20dd;
  }
  else if (DAT_ffff20db == '\x02') {
    bVar2 = 0xa0;
    bVar1 = DAT_ffff20de;
  }
  else {
    bVar2 = 0xb0;
    bVar1 = DAT_ffff20df;
  }
  DAT_ffff20c4 = bVar2 | bVar1 & 0xf;
  return;
}

