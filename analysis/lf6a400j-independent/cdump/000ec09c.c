
void FUN_000ec09c(undefined4 param_1,byte *param_2)

{
  bool bVar1;
  char cVar2;
  
  *param_2 = DAT_fffed520;
  bVar1 = 0x18 < DAT_fffed520;
  *(bool *)param_1 = bVar1;
  cVar2 = '\x01';
  if ((!bVar1) && (cVar2 = -1, DAT_fffed520 != 0xff)) {
    cVar2 = DAT_fffed520 + 1;
  }
  DAT_fffed520 = cVar2;
  return;
}

