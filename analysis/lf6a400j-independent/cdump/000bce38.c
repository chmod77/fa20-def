
void FUN_000bce38(char param_1,char param_2,byte *param_3)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = false;
  if ((param_1 == '\0') && (param_2 == '\0')) {
    bVar1 = true;
  }
  bVar2 = 0;
  if (bVar1) {
    bVar2 = DAT_fffec8cc;
  }
  *param_3 = bVar2;
  if (bVar1) {
    if (0xfe < bVar2) {
      DAT_fffec8cc = 0xff;
      return;
    }
    DAT_fffec8cc = bVar2 + 1;
    return;
  }
  DAT_fffec8cc = 0;
  return;
}

