
void FUN_001415cc(uint param_1)

{
  byte bVar1;
  
  bVar1 = DAT_ffffab74 | 0x80;
  if ((param_1 & 1) == 0) {
    bVar1 = DAT_ffffab74 & 0x7f;
  }
  DAT_ffffab74 = bVar1;
  return;
}

