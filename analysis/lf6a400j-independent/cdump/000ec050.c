
void FUN_000ec050(undefined4 param_1,byte *param_2)

{
  bool bVar1;
  char cVar2;
  
  *param_2 = DAT_fffed51c;
  bVar1 = 6 < DAT_fffed51c;
  *(bool *)param_1 = bVar1;
  cVar2 = '\x01';
  if ((!bVar1) && (cVar2 = -1, DAT_fffed51c != 0xff)) {
    cVar2 = DAT_fffed51c + 1;
  }
  DAT_fffed51c = cVar2;
  return;
}

