
void FUN_0007e1d0(void)

{
  byte bVar1;
  
  bVar1 = DAT_ffff2aa2 | 0x80;
  if ((DAT_fffee68d & 0x40) == 0) {
    bVar1 = DAT_ffff2aa2 & 0x7f;
  }
  DAT_ffff2aa2 = bVar1;
  return;
}

