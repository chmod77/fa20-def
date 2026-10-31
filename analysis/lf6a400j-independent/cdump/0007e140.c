
void FUN_0007e140(void)

{
  byte bVar1;
  
  bVar1 = DAT_fffee72f | 4;
  if ((DAT_fffef72e & 4) == 0) {
    bVar1 = DAT_fffee72f & 0xfb;
  }
  DAT_fffee72f = bVar1;
  return;
}

