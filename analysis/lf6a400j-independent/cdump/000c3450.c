
void FUN_000c3450(char *param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((DAT_fffeca50 < 0xf) && (cVar1 = -1, DAT_fffeca50 != 0xff)) {
    cVar1 = DAT_fffeca50 + 1;
  }
  *param_1 = cVar1;
  DAT_fffeca50 = cVar1;
  return;
}

