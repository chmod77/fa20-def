
void FUN_0013d8a8(void)

{
  bool bVar1;
  char cVar2;
  undefined1 *puVar3;
  
  puVar3 = &DAT_ffff3bc0;
  cVar2 = '\x1e';
  while( true ) {
    bVar1 = cVar2 == '\0';
    cVar2 = cVar2 + -1;
    if (bVar1) break;
    *puVar3 = 0;
    puVar3 = puVar3 + 0xc;
  }
  return;
}

