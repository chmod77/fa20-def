
void FUN_0007e154(void)

{
  byte bVar1;
  
  bVar1 = DAT_fffee72f | 8;
  if (((int)DAT_fffef73b & 0x80U) == 0) {
    bVar1 = DAT_fffee72f & 0xf7;
  }
  DAT_fffee72f = bVar1;
  return;
}

